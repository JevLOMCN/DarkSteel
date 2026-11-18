// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 916

// CVarSQHitchDetection'' @ 14112b720

void __cdecl `dynamic_initializer_for_'FSQHitchRepeaterCVars::CVarSQHitchDetection__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSQHitchRepeaterCVars::CVarSQHitchDetection,L"p.SQHitchDetection",
             &FSQHitchRepeaterCVars::SQHitchDetection,
             L"Whether to detect scene query hitches. 0 is off. 1 repeats a slow scene query once and prints extra information. 2+ repeat slow query n times without recording (useful when profiling)"
             ,0);
  atexit(`dynamic_atexit_destructor_for_'FSQHitchRepeaterCVars::CVarSQHitchDetection__);
  return;
}

// CVarSQHitchDetectionForceNames'' @ 14112b770

void __cdecl `dynamic_initializer_for_'FSQHitchRepeaterCVars::CVarSQHitchDetectionForceNames__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSQHitchRepeaterCVars::CVarSQHitchDetectionForceNames,L"p.SQHitchDetectionForceNames",
             &FSQHitchRepeaterCVars::SQHitchDetectionForceNames,
             L"Whether name resolution is forced off the game thread. This is not 100% safe, but can be useful when looking at hitches off GT"
             ,0);
  atexit(`dynamic_atexit_destructor_for_'FSQHitchRepeaterCVars::CVarSQHitchDetectionForceNames__);
  return;
}

// CVarSQHitchDetectionThreshold'' @ 14112b7c0

void __cdecl `dynamic_initializer_for_'FSQHitchRepeaterCVars::CVarSQHitchDetectionThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSQHitchRepeaterCVars::CVarSQHitchDetectionThreshold,L"p.SQHitchDetectionThreshold",
             &FSQHitchRepeaterCVars::SQHitchDetectionThreshold,
             L"Determines the threshold in milliseconds for a scene query hitch.",0);
  atexit(`dynamic_atexit_destructor_for_'FSQHitchRepeaterCVars::CVarSQHitchDetectionThreshold__);
  return;
}

// ObjectToSettings_External'' @ 14112b810

void __cdecl
`dynamic_initializer_for_'UNetworkPhysicsSettingsComponent::ObjectToSettings_External__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNetworkPhysicsSettingsComponent::
         ObjectToSettings_External__);
  return;
}

// OnPhysDispatchNotifications'' @ 14112b830

void __cdecl `dynamic_initializer_for_'FPhysicsDelegates::OnPhysDispatchNotifications__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysDispatchNotifications__);
  return;
}

// OnPhysSceneInit'' @ 14112b850

void __cdecl `dynamic_initializer_for_'FPhysicsDelegates::OnPhysSceneInit__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysSceneInit__);
  return;
}

// OnPhysSceneTerm'' @ 14112b870

void __cdecl `dynamic_initializer_for_'FPhysicsDelegates::OnPhysSceneTerm__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysSceneTerm__);
  return;
}

// OnPhysicsAssetChanged'' @ 14112b890

void __cdecl `dynamic_initializer_for_'FPhysicsDelegates::OnPhysicsAssetChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysicsAssetChanged__);
  return;
}

// PhysicalAnimationProfile'' @ 14112b8b0

void __cdecl `dynamic_initializer_for_'UPhysicalAnimationComponent::PhysicalAnimationProfile__(void)

{
  FConstraintProfileProperties::FConstraintProfileProperties
            (&UPhysicalAnimationComponent::PhysicalAnimationProfile);
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearDrive.XDrive.bEnableVelocityDrive =
       '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearDrive.XDrive.bEnablePositionDrive =
       '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearDrive.YDrive.bEnableVelocityDrive =
       '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearDrive.YDrive.bEnablePositionDrive =
       '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearDrive.ZDrive.bEnableVelocityDrive =
       '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearDrive.ZDrive.bEnablePositionDrive =
       '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.AngularDrive.SlerpDrive.bEnableVelocityDrive
       = '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.AngularDrive.SlerpDrive.bEnablePositionDrive
       = '\x01';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearLimit.XMotion.Value = '\0';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearLimit.YMotion.Value = '\0';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.LinearLimit.ZMotion.Value = '\0';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.ConeLimit.Swing1Motion.Value = '\0';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.ConeLimit.Swing2Motion.Value = '\0';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.TwistLimit.TwistMotion.Value = '\0';
  UPhysicalAnimationComponent::PhysicalAnimationProfile.AngularDrive.AngularDriveMode.Value = '\0';
  return;
}

// SettingsNetworkPhysicsComponent_Default'' @ 14112b910

void __cdecl
`dynamic_initializer_for_'FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default__
          (void)

{
  FNetworkPhysicsSettingsNetworkPhysicsComponent::FNetworkPhysicsSettingsNetworkPhysicsComponent
            (&FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default);
  atexit(`dynamic_atexit_destructor_for_'FAsyncNetworkPhysicsComponent::
         SettingsNetworkPhysicsComponent_Default__);
  return;
}

// SettingsNetworkPhysicsData_Default'' @ 14112b940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default__
          (void)

{
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bHardsnapInPhysicsThread = PhysicsReplicationCVars::DefaultReplicationCVars::bHardsnapLegacyInPT;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bOverrideCorrectConnectedBodiesFriction = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bOverrideCorrectConnectedBodies = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bOverrideDefaultLegacyHardsnapInPT = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bOverrideMaxLinearHardSnapDistance = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bCorrectConnectedBodies =
       PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.DefaultReplicationSettings.
  bCorrectConnectedBodiesFriction =
       PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodiesFriction;
  FNetworkPhysicsSettingsPredictiveInterpolation::FNetworkPhysicsSettingsPredictiveInterpolation
            (&UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
              PredictiveInterpolationSettings);
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bRuntimeCorrectionEnabled = PhysicsReplicationCVars::ResimulationCVars::bRuntimeCorrectionEnabled;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideResimulationErrorThreshold_DEPRECATED = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideAngVelStabilityMultiplier = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideVelStabilityMultiplier = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideRotStabilityMultiplier = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverridePosStabilityMultiplier = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideRuntimeCorrectConnectedBodies = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideRuntimeVelocityCorrection = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideRuntimeCorrectionEnabled = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideResimulationErrorAngularVelocityThreshold = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideResimulationErrorLinearVelocityThreshold = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideResimulationErrorRotationThreshold = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bOverrideResimulationErrorPositionThreshold = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.bOverrideResimErrorInterpolationSettings = 0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorPositionThreshold = ___xmm_4000000040a000004080000041200000;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorRotationThreshold = _UNK_151a801a4;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorLinearVelocityThreshold = _UNK_151a801a8;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorAngularVelocityThreshold = _UNK_151a801ac;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bRuntimeVelocityCorrection =
       PhysicsReplicationCVars::ResimulationCVars::bRuntimeVelocityCorrection;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  PosStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::PosStabilityMultiplier;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  bRuntimeCorrectConnectedBodies =
       PhysicsReplicationCVars::ResimulationCVars::bRuntimeCorrectConnectedBodies;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  RotStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::RotStabilityMultiplier;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  VelStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::VelStabilityMultiplier;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  AngVelStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::AngVelStabilityMultiplier;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorThreshold_DEPRECATED = 10;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.ResimErrorCorrectionDuration = 0.3;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.ResimErrorMaximumDistanceBeforeSnapping = 250.0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.ResimErrorMaximumDesyncTimeBeforeSnapping = 0.6;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.ResimErrorDirectionalDecayMultiplier = 0.0;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.bRenderInterpApplyExponentialDecay = false;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.RenderInterpExponentialDecayLinearHalfLife = 0.06;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.RenderInterpExponentialDecayAngularHalfLife = 0.06;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.RenderInterpMinimumLinearThreshold = 0.1;
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.ResimulationSettings.
  ResimulationErrorCorrectionSettings.RenderInterpMinimumAngularThreshold = 0.001;
  FNetworkPhysicsSettingsNetworkPhysicsComponent::FNetworkPhysicsSettingsNetworkPhysicsComponent
            (&UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
              NetworkPhysicsComponentSettings);
  atexit(`dynamic_atexit_destructor_for_'UNetworkPhysicsSettingsComponent::
         SettingsNetworkPhysicsData_Default__);
  return;
}

// `dynamic_initializer_for_'CPrio_FParallelBlendPhysicsTask'' @ 14112ba80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_FParallelBlendPhysicsTask__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_FParallelBlendPhysicsTask,L"TaskGraph.TaskPriorities.ParallelBlendPhysicsTask",
             L"Task and thread priority for FParallelBlendPhysicsTask.",HighThreadPriority,MainQueue
             ,HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_FParallelBlendPhysicsTask__);
  return;
}

// `dynamic_initializer_for_'CVaTimeOverDistance'' @ 14112bad0

void __cdecl PhysicsReplicationLODCVars::_dynamic_initializer_for__CVaTimeOverDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVaTimeOverDistance,L"p.ReplicationLOD.TimeOverDistance",&TimeOverDistance,
             L"Time/Distance LOD alignment value in milliseconds/centimeter. Used as Distance * TimeOverDistance = Time, where Time is how far behind the current timeline replication should run. Start outside of DistanceFullPrediction and clamped by the received states timeline so we don\'t extrapolate backwards. Negative value disables the override and project settings will apply."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVaTimeOverDistance__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysHardSnap'' @ 14112bb20

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarAlwaysHardSnap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysHardSnap,L"p.AlwaysHardSnap",&AlwaysHardSnap,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysHardSnap__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysHardSnap'' @ 14112bb70

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarAlwaysHardSnap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysHardSnap,L"np2.PredictiveInterpolation.AlwaysHardSnap",&bAlwaysHardSnap,
             L"When true, predictive interpolation replication mode will always hard snap. Used as a backup measure"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysHardSnap__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysResetPhysics'' @ 14112bbc0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarAlwaysResetPhysics__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysResetPhysics,L"p.AlwaysResetPhysics",&AlwaysResetPhysics,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysResetPhysics__);
  return;
}

// `dynamic_initializer_for_'CVarAngLerp'' @ 14112bc10

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarAngLerp__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAngLerp,L"p.AngularVelocityCoefficient",&AngularVelocityCoefficient,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAngLerp__);
  return;
}

// `dynamic_initializer_for_'CVarAngSet'' @ 14112bc60

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarAngSet__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef(&CVarAngSet,L"p.AngleLerp",&AngleLerp,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAngSet__);
  return;
}

// `dynamic_initializer_for_'CVarApplyAsyncSleepState'' @ 14112bcb0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarApplyAsyncSleepState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarApplyAsyncSleepState,L"p.ApplyAsyncSleepState",&ApplyAsyncSleepState,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarApplyAsyncSleepState__);
  return;
}

// `dynamic_initializer_for_'CVarApplyInputDecayOverSetTime'' @ 14112bd00

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarApplyInputDecayOverSetTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarApplyInputDecayOverSetTime,L"np2.Resim.ApplyInputDecayOverSetTime",
             &bApplyInputDecayOverSetTime,
             L"When true, apply the Input Decay Curve over a set amount of time instead of over the start of input prediction and end of resim which is variable each resimulation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarApplyInputDecayOverSetTime__);
  return;
}

// `dynamic_initializer_for_'CVarAverageReceiveIntervalSmoothing'' @ 14112bd50

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarAverageReceiveIntervalSmoothing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAverageReceiveIntervalSmoothing,
             L"np2.PredictiveInterpolation.AverageReceiveIntervalSmoothing",
             &AverageReceiveIntervalSmoothing,
             L"Recommended range: 1.0 - 5.0. Higher value makes the average receive interval adjust itself slower, reducing spikes in InterpolationTime."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAverageReceiveIntervalSmoothing__);
  return;
}

// `dynamic_initializer_for_'CVarBaseDistanceRadiusMultiplier'' @ 14112bda0

void __cdecl
PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarBaseDistanceRadiusMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBaseDistanceRadiusMultiplier,L"p.ReplicationLOD.BaseDistanceRadiusMultiplier",
             &BaseDistanceRadiusMultiplier,
             L"Override the distance radius multiplier which adds focal particles bounding box radius to the physics replication LODs Base Distance. Value of 0.75f adds 75% of the radius on top of the LOD distances. Negative value disables the override and project settings will apply."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBaseDistanceRadiusMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarBaseDistancesForFullPrediction'' @ 14112bdf0

void __cdecl
PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarBaseDistancesForFullPrediction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBaseDistancesForFullPrediction,L"p.ReplicationLOD.BaseDistancesForFullPrediction",
             &BaseDistancesForFullPrediction,
             L"Override the amount of Base Distance to set the distance where within full forward prediction to clients current timeline will be recommended. Negative value disables the override and project settings will apply."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBaseDistancesForFullPrediction__);
  return;
}

// `dynamic_initializer_for_'CVarBaseDistancesForResimulationMode'' @ 14112be40

void __cdecl
PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarBaseDistancesForResimulationMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBaseDistancesForResimulationMode,
             L"p.ReplicationLOD.BaseDistancesForResimulationMode",&BaseDistancesForResimulationMode,
             L"Override the amount of Base Distance to set the distance for where within resimulation will be recommended as the replication mode by LOD. Negative value disables the override and project settings will apply."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBaseDistancesForResimulationMode__);
  return;
}

// `dynamic_initializer_for_'CVarClothVizDrawSkinnedLattice'' @ 14112be90

void __cdecl _dynamic_initializer_for__CVarClothVizDrawSkinnedLattice__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClothVizDrawSkinnedLattice,L"p.PhysDrawing.SkinnedLatticeBoneWeight",
             &SkinnedLatticeBoneWeight,L"Draw skinned lattice bone weight. -1 = all lattice points",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarClothVizDrawSkinnedLattice__);
  return;
}

// `dynamic_initializer_for_'CVarCorrectConnectedBodies'' @ 14112bee0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarCorrectConnectedBodies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCorrectConnectedBodies,L"np2.PredictiveInterpolation.CorrectConnectedBodies",
             &bCorrectConnectedBodies,
             L"When true, transform corrections will also apply to any connected physics object.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarCorrectConnectedBodies__);
  return;
}

// `dynamic_initializer_for_'CVarCorrectConnectedBodiesFriction'' @ 14112bf30

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarCorrectConnectedBodiesFriction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCorrectConnectedBodiesFriction,
             L"np2.PredictiveInterpolation.CorrectConnectedBodiesFriction",
             &bCorrectConnectedBodiesFriction,
             L"When true, transform correction on any connected physics object will also recalculate their friction."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCorrectConnectedBodiesFriction__);
  return;
}

// `dynamic_initializer_for_'CVarCorrectionAsVelocity'' @ 14112bf80

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarCorrectionAsVelocity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCorrectionAsVelocity,L"np2.PredictiveInterpolation.CorrectionAsVelocity",
             &bCorrectionAsVelocity,
             L"When true, predictive interpolation will apply positional and rotational offset correction as a velocity instead of as a transform shift."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCorrectionAsVelocity__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultCorrectConnectedBodies'' @ 14112bfd0

void __cdecl
PhysicsReplicationCVars::DefaultReplicationCVars::
_dynamic_initializer_for__CVarDefaultCorrectConnectedBodies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultCorrectConnectedBodies,L"p.DefaultReplication.CorrectConnectedBodies",
             &bCorrectConnectedBodies,
             L"When true, transform corrections will also apply to any connected physics object.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarDefaultCorrectConnectedBodies__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultCorrectConnectedBodiesFriction'' @ 14112c020

void __cdecl
PhysicsReplicationCVars::DefaultReplicationCVars::
_dynamic_initializer_for__CVarDefaultCorrectConnectedBodiesFriction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultCorrectConnectedBodiesFriction,
             L"p.DefaultReplication.CorrectConnectedBodiesFriction",&bCorrectConnectedBodiesFriction
             ,
             L"When true, transform correction on any connected physics object will also recalculate their friction."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultCorrectConnectedBodiesFriction__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultLegacyHardsnapInPT'' @ 14112c070

void __cdecl
PhysicsReplicationCVars::DefaultReplicationCVars::
_dynamic_initializer_for__CVarDefaultLegacyHardsnapInPT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultLegacyHardsnapInPT,L"p.DefaultReplication.Legacy.HardsnapInPT",
             &bHardsnapLegacyInPT,
             L"If default replication is used and it\'s running the legacy flow through Game Thread, allow hardsnapping to be performed on Physics Thread if async physics is enabled.."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultLegacyHardsnapInPT__);
  return;
}

// `dynamic_initializer_for_'CVarDisableErrorVelocityLimits'' @ 14112c0c0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarDisableErrorVelocityLimits__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableErrorVelocityLimits,
             L"np2.PredictiveInterpolation.DisableErrorVelocityLimits",&bDisableErrorVelocityLimits,
             L"Disable the velocity limit and allow error accumulation at any velocity.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableErrorVelocityLimits__);
  return;
}

// `dynamic_initializer_for_'CVarDisableSoftSnap'' @ 14112c110

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarDisableSoftSnap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableSoftSnap,L"np2.PredictiveInterpolation.DisableSoftSnap",&bDisableSoftSnap,
             L"When true, predictive interpolation will not use softsnap to correct the replication with when velocity fails. Hardsnap will still eventually kick in if replication can\'t reach the target."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableSoftSnap__);
  return;
}

// `dynamic_initializer_for_'CVarDontClearTarget'' @ 14112c160

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarDontClearTarget__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDontClearTarget,L"np2.PredictiveInterpolation.DontClearTarget",&bDontClearTarget,
             L"When true, predictive interpolation will not lose track of the last replicated state after coming to rest."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDontClearTarget__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebug'' @ 14112c1b0

void __cdecl PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarDrawDebug__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebug,L"p.ReplicationLOD.DrawDebug.Enabled",&bDrawDebugEnabled,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebug__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugTargets'' @ 14112c200

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarDrawDebugTargets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugTargets,L"np2.PredictiveInterpolation.DrawDebugTargets",
             &bDrawDebugTargets,
             L"Draw target states, color coded by which ServerFrame they originate from, replicated targets are large and extrapolated targets are small. There is a Z offset to the draw calls."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugTargets__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugVectors'' @ 14112c250

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarDrawDebugVectors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugVectors,L"np2.PredictiveInterpolation.DrawDebugVectors",
             &bDrawDebugVectors,
             L"Draw replication vectors, target velocity, replicated velocity, velocity change between replication calls etc."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugVectors__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugWorstLatency'' @ 14112c2a0

void __cdecl PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarDrawDebugWorstLatency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugWorstLatency,L"p.ReplicationLOD.DrawDebug.WorstLatency",
             &DrawDebugWorstLatency,
             L"Used to calculate color gradient in debug draw from forward predicted to worst expected latency."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugWorstLatency__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugZOffset'' @ 14112c2f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarDrawDebugZOffset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugZOffset,L"np2.PredictiveInterpolation.DrawDebugZOffset",&DrawDebugZOffset
             ,L"Offset in Z axis for draw debug calls",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugZOffset__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingDecreaseAverageMultiplier'' @ 14112c340

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingDecreaseAverageMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingDecreaseAverageMultiplier,
             L"np2.Resim.DynamicInputScaling.DecreaseAverageMultiplier",
             &DynamicInputScalingDecreaseAverageMultiplier,
             L"Default 0.1 (= 10%). Multiplier for how fast the average input scaling value decreases. NOTE it\'s recommended to have a lower value than np2.Resim.DynamicInputScaling.IncreaseAverageMultiplier so the average doesn\'t try to decrease too quickly which can cause repeated desyncs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingDecreaseAverageMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingDecreaseTimeInterval'' @ 14112c390

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingDecreaseTimeInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingDecreaseTimeInterval,
             L"np2.Resim.DynamicInputScaling.DecreaseTimeInterval",
             &DynamicInputScalingDecreaseTimeInterval,
             L"Default 10.0 (value in seconds). How often dynamic scaling can decrease the number of inputs to send."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingDecreaseTimeInterval__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingEnabled'' @ 14112c3e0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingEnabled,L"np2.Resim.DynamicInputScaling.Enabled",
             &bDynamicInputScalingEnabled,
             L"Enable dynmic scaling of number of inputs sent from owning client to the server to account for packet loss. The server will control the value based on how often the server has a hole in its input buffer. NOTE: This overrides np2.Resim.RedundantInputs"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingIncreaseAverageMultiplier'' @ 14112c430

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingIncreaseAverageMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingIncreaseAverageMultiplier,
             L"np2.Resim.DynamicInputScaling.IncreaseAverageMultiplier",
             &DynamicInputScalingIncreaseAverageMultiplier,
             L"Default 0.2 (= 20%). Multiplier for how fast the average input scaling value increases. NOTE it\'s recommended to have a higher value than np2.Resim.DynamicInputScaling.DecreaseAverageMultiplier so the average can grow quick when network conditions gets worse."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingIncreaseAverageMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingIncreaseTimeInterval'' @ 14112c480

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingIncreaseTimeInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingIncreaseTimeInterval,
             L"np2.Resim.DynamicInputScaling.IncreaseTimeInterval",
             &DynamicInputScalingIncreaseTimeInterval,
             L"Default 2.0 (value in seconds). How often dynamic scaling can increase the number of inputs to send."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingIncreaseTimeInterval__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingMaxInputsPercent'' @ 14112c4d0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingMaxInputsPercent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingMaxInputsPercent,
             L"np2.Resim.DynamicInputScaling.MaxInputsPercent",&DynamicInputScalingMaxInputsPercent,
             L"Default 0.1 (= 10%, value in percent as multiplier). Sets the max scalable number of inputs to network from owning client to server as a percentage of the physics fixed tick-rate. 10% of 30Hz = 3 inputs at max."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingMaxInputsPercent__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicInputScalingMinInputs'' @ 14112c520

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarDynamicInputScalingMinInputs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDynamicInputScalingMinInputs,L"np2.Resim.DynamicInputScaling.MinInputs",
             &DynamicInputScalingMinInputs,
             L"Default 2. Sets the minimum scalable number of inputs to network from owning client to server."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicInputScalingMinInputs__);
  return;
}

// `dynamic_initializer_for_'CVarEarlyOutAngle'' @ 14112c570

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::_dynamic_initializer_for__CVarEarlyOutAngle__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEarlyOutAngle,L"np2.PredictiveInterpolation.EarlyOutAngle",&EarlyOutAngle,
             L"If object is within this rotational angle (in degrees) from the source target, early out from replication and apply sleep if replicated."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEarlyOutAngle__);
  return;
}

// `dynamic_initializer_for_'CVarEarlyOutDistanceSqr'' @ 14112c5c0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarEarlyOutDistanceSqr__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEarlyOutDistanceSqr,L"np2.PredictiveInterpolation.EarlyOutDistanceSqr",
             &EarlyOutDistanceSqr,
             L"Squared value. If object is within this distance from the source target, early out from replication and apply sleep if replicated."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEarlyOutDistanceSqr__);
  return;
}

// `dynamic_initializer_for_'CVarEarlyOutWithVelocity'' @ 14112c610

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarEarlyOutWithVelocity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEarlyOutWithVelocity,L"np2.PredictiveInterpolation.EarlyOutWithVelocity",
             &bEarlyOutWithVelocity,
             L"If true, allow replication logic to early out if current velocities are driving replication well enough. If false, only early out if target velocity is zero."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEarlyOutWithVelocity__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDefaultReplication'' @ 14112c660

void __cdecl PhysicsReplicationCVars::_dynamic_initializer_for__CVarEnableDefaultReplication__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableDefaultReplication,L"np2.EnableDefaultReplication",&EnableDefaultReplication
             ,L"Enable default replication in the networked physics prediction flow.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDefaultReplication__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccAngVelMaxLimit'' @ 14112c6b0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarErrorAccAngVelMaxLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccAngVelMaxLimit,L"np2.PredictiveInterpolation.ErrorAccAngVelMaxLimit",
             &ErrorAccAngVelMaxLimit,
             L"If target angular velocity (in radians) is below this limit we check for desync to trigger softsnap and accumulate time to build up to a hardsnap."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccAngVelMaxLimit__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccLinVelMaxLimit'' @ 14112c700

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarErrorAccLinVelMaxLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccLinVelMaxLimit,L"np2.PredictiveInterpolation.ErrorAccLinVelMaxLimit",
             &ErrorAccLinVelMaxLimit,
             L"If target velocity is below this limit we check for desync to trigger softsnap and accumulate time to build up to a hardsnap."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccLinVelMaxLimit__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccumulation'' @ 14112c750

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarErrorAccumulation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccumulation,L"p.ErrorAccumulationSeconds",&ErrorAccumulationSeconds,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccumulation__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccumulationDecreaseMultiplier'' @ 14112c7a0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarErrorAccumulationDecreaseMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccumulationDecreaseMultiplier,
             L"np2.PredictiveInterpolation.ErrorAccumulationDecreaseMultiplier",
             &ErrorAccumulationDecreaseMultiplier,
             L"Multiplier to adjust how fast we decrease accumulated error time when we no longer accumulate error."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccumulationDecreaseMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccumulationDistanceSq'' @ 14112c7f0

void __cdecl
CharacterMovementCVars::_dynamic_initializer_for__CVarErrorAccumulationDistanceSq__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccumulationDistanceSq,L"p.ErrorAccumulationDistanceSq",
             &ErrorAccumulationDistanceSq,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccumulationDistanceSq__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccumulationSeconds'' @ 14112c840

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarErrorAccumulationSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccumulationSeconds,L"np2.PredictiveInterpolation.ErrorAccumulationSeconds",
             &ErrorAccumulationSeconds,
             L"Perform a reposition if replication have not been able to cover the min expected distance towards the target for this amount of time."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccumulationSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarErrorAccumulationSimilarity'' @ 14112c890

void __cdecl
CharacterMovementCVars::_dynamic_initializer_for__CVarErrorAccumulationSimilarity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorAccumulationSimilarity,L"p.ErrorAccumulationSimilarity",
             &ErrorAccumulationSimilarity,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorAccumulationSimilarity__);
  return;
}

// `dynamic_initializer_for_'CVarErrorPerAngularDifference'' @ 14112c8e0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarErrorPerAngularDifference__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorPerAngularDifference,L"p.ErrorPerAngularDifference",
             &ErrorPerAngularDifference,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorPerAngularDifference__);
  return;
}

// `dynamic_initializer_for_'CVarErrorPerLinearDifference'' @ 14112c930

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarErrorPerLinearDifference__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarErrorPerLinearDifference,L"p.ErrorPerLinearDifference",&ErrorPerLinearDifference,
             L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarErrorPerLinearDifference__);
  return;
}

// `dynamic_initializer_for_'CVarExtrapolationMinTime'' @ 14112c980

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarExtrapolationMinTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarExtrapolationMinTime,L"np2.PredictiveInterpolation.ExtrapolationMinTime",
             &ExtrapolationMinTime,
             L"Clamps minimum extrapolation time. Value in seconds. Disable minimum clamp by setting to 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarExtrapolationMinTime__);
  return;
}

// `dynamic_initializer_for_'CVarExtrapolationTimeMultiplier'' @ 14112c9d0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarExtrapolationTimeMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarExtrapolationTimeMultiplier,
             L"np2.PredictiveInterpolation.ExtrapolationTimeMultiplier",&ExtrapolationTimeMultiplier
             ,
             L"Multiplier to adjust the time to extrapolate the target forward over, the time is based on current send-rate."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarExtrapolationTimeMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarInputDecaySetTime'' @ 14112ca20

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_initializer_for__CVarInputDecaySetTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInputDecaySetTime,L"np2.Resim.InputDecaySetTime",&InputDecaySetTime,
             L"Applied when np2.Resim.ApplyInputDecayOverSetTime is true, read there for more info. Set time to apply Input Decay Curve over while predicting inputs during resimulation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInputDecaySetTime__);
  return;
}

// `dynamic_initializer_for_'CVarInterpolationTimeMultiplier'' @ 14112ca70

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarInterpolationTimeMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInterpolationTimeMultiplier,
             L"np2.PredictiveInterpolation.InterpolationTimeMultiplier",
             &PosInterpolationTimeMultiplier,
             L"Multiplier to adjust the interpolation time which is based on the sendrate of state data from the server."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInterpolationTimeMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarKinematicHardSnap'' @ 14112cac0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarKinematicHardSnap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarKinematicHardSnap,L"np2.PredictiveInterpolation.KinematicHardSnap",
             &bKinematicHardSnap,
             L"When true, predictive interpolation will perform a hard snap for objects that are kinematic."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarKinematicHardSnap__);
  return;
}

// `dynamic_initializer_for_'CVarKinematicPrediction'' @ 14112cb10

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarKinematicPrediction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarKinematicPrediction,L"np2.PredictiveInterpolation.KinematicPrediction",
             &bKinematicPrediction,
             L"When true, predictive interpolation will perform predictive movement instead of interpolation for kinematic objects."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarKinematicPrediction__);
  return;
}

// `dynamic_initializer_for_'CVarLinLerp'' @ 14112cb60

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarLinLerp__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLinLerp,L"p.LinearVelocityCoefficient",&LinearVelocityCoefficient,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarLinLerp__);
  return;
}

// `dynamic_initializer_for_'CVarLinSet'' @ 14112cbb0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarLinSet__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLinSet,L"p.PositionLerp",&PositionLerp,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarLinSet__);
  return;
}

// `dynamic_initializer_for_'CVarLogPhysicsReplicationHardSnaps'' @ 14112cc00

void __cdecl
PhysicsReplicationCVars::_dynamic_initializer_for__CVarLogPhysicsReplicationHardSnaps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogPhysicsReplicationHardSnaps,L"p.LogPhysicsReplicationHardSnaps",
             &LogPhysicsReplicationHardSnaps,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogPhysicsReplicationHardSnaps__);
  return;
}

// `dynamic_initializer_for_'CVarMaxLinearHardSnapDistance'' @ 14112cc50

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarMaxLinearHardSnapDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxLinearHardSnapDistance,L"p.MaxLinearHardSnapDistance",
             &MaxLinearHardSnapDistance,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxLinearHardSnapDistance__);
  return;
}

// `dynamic_initializer_for_'CVarMaxRestoredStateError'' @ 14112cca0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarMaxRestoredStateError__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxRestoredStateError,L"p.MaxRestoredStateError",&MaxRestoredStateError,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxRestoredStateError__);
  return;
}

// `dynamic_initializer_for_'CVarMinExpectedDistanceCovered'' @ 14112ccf0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarMinExpectedDistanceCovered__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinExpectedDistanceCovered,
             L"np2.PredictiveInterpolation.MinExpectedDistanceCovered",&MinExpectedDistanceCovered,
             L"Value between 0-1, in percentage where 0.25 = 25%. How much of the expected distance based on replication velocity should the object have covered in a simulation tick to Not be considered stuck."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinExpectedDistanceCovered__);
  return;
}

// `dynamic_initializer_for_'CVarMinimumBaseDistance'' @ 14112cd40

void __cdecl PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarMinimumBaseDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinimumBaseDistance,L"p.ReplicationLOD.MinimumBaseDistance",&MinimumBaseDistance,
             L"Override the minimum distance in the physics replication LODs Base Distance. Negative value disables the override and project settings will apply."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinimumBaseDistance__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingExtrapolation'' @ 14112cd90

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarNetPingExtrapolation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPingExtrapolation,L"p.NetPingExtrapolation",&NetPingExtrapolation,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingExtrapolation__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingLimit'' @ 14112cde0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarNetPingLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPingLimit,L"p.NetPingLimit",&NetPingLimit,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingLimit__);
  return;
}

// `dynamic_initializer_for_'CVarOverrideEnabled'' @ 14112ce30

void __cdecl PhysicsReplicationLODCVars::_dynamic_initializer_for__CVarOverrideEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOverrideEnabled,L"p.ReplicationLOD.OverrideEnabled",&OverrideEnabled,
             L"0 = Use Project Settings or API calls. 1 = Override to enabled. -1 = Override to disabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOverrideEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPhysicsAnimBlendUpdatesPhysX'' @ 14112ce80

void __cdecl _dynamic_initializer_for__CVarPhysicsAnimBlendUpdatesPhysX__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPhysicsAnimBlendUpdatesPhysX,L"p.PhysicsAnimBlendUpdatesPhysX",local_res8,
             L"Whether to update the physx simulation with the results of physics animation blending"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPhysicsAnimBlendUpdatesPhysX__);
  return;
}

// `dynamic_initializer_for_'CVarPhysicsNetDebugDrawLifeTime'' @ 14112ced0

void __cdecl
PhysicsReplicationCVars::_dynamic_initializer_for__CVarPhysicsNetDebugDrawLifeTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPhysicsNetDebugDrawLifeTime,L"p.Net.DebugDraw.LifeTime",&DebugDrawLifeTime,
             L"Networked physics debug draw lifetime",0);
  atexit(_dynamic_atexit_destructor_for__CVarPhysicsNetDebugDrawLifeTime__);
  return;
}

// `dynamic_initializer_for_'CVarPhysicsNetDebugDrawShowRepMode'' @ 14112cf20

void __cdecl
PhysicsReplicationCVars::_dynamic_initializer_for__CVarPhysicsNetDebugDrawShowRepMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPhysicsNetDebugDrawShowRepMode,L"p.Net.DebugDraw.ShowRepMode",
             &DebugDrawShowRepMode,
             L"Debug draw to show which physics replication mode is being used and where target states are being received. Green = Legacy Default, Light Blue = New Default, Yellow = Predictive Interpolation, Red = Resimulation, White = Something\'s Wrong. NOTE, Requires CVar p.Chaos.DebugDraw.Enabled 1"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPhysicsNetDebugDrawShowRepMode__);
  return;
}

// `dynamic_initializer_for_'CVarPosCorrectionTimeBase'' @ 14112cf70

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarPosCorrectionTimeBase__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPosCorrectionTimeBase,L"np2.PredictiveInterpolation.PosCorrectionTimeBase",
             &PosCorrectionTimeBase,
             L"Base time to correct positional offset over. RoundTripTime * PosCorrectionTimeMultiplier is added on top of this."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPosCorrectionTimeBase__);
  return;
}

// `dynamic_initializer_for_'CVarPosCorrectionTimeMin'' @ 14112cfc0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarPosCorrectionTimeMin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPosCorrectionTimeMin,L"np2.PredictiveInterpolation.PosCorrectionTimeMin",
             &PosCorrectionTimeMin,
             L"Min time to correct positional offset over. DeltaSeconds is added on top of this.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarPosCorrectionTimeMin__);
  return;
}

// `dynamic_initializer_for_'CVarPosCorrectionTimeMultiplier'' @ 14112d010

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarPosCorrectionTimeMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPosCorrectionTimeMultiplier,
             L"np2.PredictiveInterpolation.PosCorrectionTimeMultiplier",&PosCorrectionTimeMultiplier
             ,
             L"Multiplier to adjust how much of RoundTripTime to add to positional offset correction."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPosCorrectionTimeMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarPostResimWaitForUpdate'' @ 14112d060

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarPostResimWaitForUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPostResimWaitForUpdate,L"np2.PredictiveInterpolation.PostResimWaitForUpdate",
             &bPostResimWaitForUpdate,
             L"After a resimulation, wait for replicated states that correspond to post-resim state before processing replication again."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPostResimWaitForUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarRenderInterpDebugDrawResimBoxScale'' @ 14112d0b0

void __cdecl
RenderInterpolationCVars::_dynamic_initializer_for__CVarRenderInterpDebugDrawResimBoxScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderInterpDebugDrawResimBoxScale,L"p.RenderInterp.DebugDraw.ResimBoxScale",
             &RenderInterpDebugDrawResimBoxScale,
             L"Draw debug lines for physics render interpolation, also needs p.Chaos.DebugDraw.Enabled set"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderInterpDebugDrawResimBoxScale__);
  return;
}

// `dynamic_initializer_for_'CVarRenderInterpDebugDrawResimTrigger'' @ 14112d100

void __cdecl
RenderInterpolationCVars::_dynamic_initializer_for__CVarRenderInterpDebugDrawResimTrigger__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderInterpDebugDrawResimTrigger,L"p.RenderInterp.DebugDraw.ResimTrigger",
             &bRenderInterpDebugDrawResimTrigger,
             L"Draw debug lines for physics render interpolation, also needs p.Chaos.DebugDraw.Enabled set"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderInterpDebugDrawResimTrigger__);
  return;
}

// `dynamic_initializer_for_'CVarResimAllowInputExtrapolation'' @ 14112d150

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimAllowInputExtrapolation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimAllowInputExtrapolation,L"np2.Resim.AllowInputExtrapolation",
             &bAllowInputExtrapolation,
             L"When true and not locally controlled, allow inputs to be extrapolated from last known and if there is a gap allow interpolation between two known inputs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimAllowInputExtrapolation__);
  return;
}

// `dynamic_initializer_for_'CVarResimAllowRewindToClosestState'' @ 14112d1a0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimAllowRewindToClosestState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimAllowRewindToClosestState,L"np2.Resim.AllowRewindToClosestState",
             &bAllowRewindToClosestState,
             L"When rewinding to a specific frame, if the client doens\'t have state data for that frame, use closest data available. Only affects the first rewind frame, when FPBDRigidsEvolution is set to Reset."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimAllowRewindToClosestState__);
  return;
}

// `dynamic_initializer_for_'CVarResimAngVelStabilityMultiplier'' @ 14112d1f0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimAngVelStabilityMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimAngVelStabilityMultiplier,L"np2.Resim.AngVelStabilityMultiplier",
             &AngVelStabilityMultiplier,
             L"Recommended range between 0.0-1.0. Lower value means more stable angular velocity corrections."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimAngVelStabilityMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarResimApplyDataInsteadOfMergeData'' @ 14112d240

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimApplyDataInsteadOfMergeData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimApplyDataInsteadOfMergeData,L"np2.Resim.ApplyDataInsteadOfMergeData",
             &bApplyDataInsteadOfMergeData,
             L"When true, call ApplyData for each data instead of MergeData when having to use multiple data entries in one frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimApplyDataInsteadOfMergeData__);
  return;
}

// `dynamic_initializer_for_'CVarResimApplyPredictiveInterpolationWhenBehindServer'' @ 14112d290

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimApplyPredictiveInterpolationWhenBehindServer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimApplyPredictiveInterpolationWhenBehindServer,
             L"np2.Resim.ApplyPredictiveInterpolationWhenBehindServer",
             &bApplyPredictiveInterpolationWhenBehindServer,
             L"When true, switch over to replicating with Predictive Interpolation temporarily, when the client receive target states from the server for frames that have not yet simulated on the client. When false apply the received target via a resimulation when the client has caught up and simulated the corresponding frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimApplyPredictiveInterpolationWhenBehindServer__);
  return;
}

// `dynamic_initializer_for_'CVarResimApplySimProxyInputAtRuntime'' @ 14112d2e0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimApplySimProxyInputAtRuntime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimApplySimProxyInputAtRuntime,L"np2.Resim.ApplySimProxyInputAtRuntime",
             &bApplySimProxyInputAtRuntime,
             L"When true, call ApplyData on received inputs for simulated proxies at runtime.",0);
  atexit(_dynamic_atexit_destructor_for__CVarResimApplySimProxyInputAtRuntime__);
  return;
}

// `dynamic_initializer_for_'CVarResimApplySimProxyStateAtRuntime'' @ 14112d330

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimApplySimProxyStateAtRuntime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimApplySimProxyStateAtRuntime,L"np2.Resim.ApplySimProxyStateAtRuntime",
             &bApplySimProxyStateAtRuntime,
             L"When true, call ApplyData on received states for simulated proxies at runtime.",0);
  atexit(_dynamic_atexit_destructor_for__CVarResimApplySimProxyStateAtRuntime__);
  return;
}

// `dynamic_initializer_for_'CVarResimCompareInputToTriggerRewind'' @ 14112d380

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimCompareInputToTriggerRewind__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimCompareInputToTriggerRewind,L"np2.Resim.CompareInputToTriggerRewind",
             &bCompareInputToTriggerRewind,
             L"When true, compare local predicted FNetworkPhysicsData input with incoming server inputs to trigger resimulations if they differ, comparison done through FNetworkPhysicsData::CompareData."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimCompareInputToTriggerRewind__);
  return;
}

// `dynamic_initializer_for_'CVarResimCompareStateToTriggerRewind'' @ 14112d3d0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimCompareStateToTriggerRewind__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimCompareStateToTriggerRewind,L"np2.Resim.CompareStateToTriggerRewind",
             &bCompareStateToTriggerRewind,
             L"When true, cache local FNetworkPhysicsData state in rewind history and compare the predicted state with incoming server state to trigger resimulations if they differ, comparison done through FNetworkPhysicsData::CompareData. Only applies if IsLocallyControlled, to enable this for simulated proxies, where IsLocallyControlled is false, also enable np2.Resim.CompareStateToTriggerRewind.IncludeSimProxies)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimCompareStateToTriggerRewind__);
  return;
}

// `dynamic_initializer_for_'CVarResimCompareStateToTriggerRewindIncludeSimProxies'' @ 14112d420

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimCompareStateToTriggerRewindIncludeSimProxies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimCompareStateToTriggerRewindIncludeSimProxies,
             L"np2.Resim.CompareStateToTriggerRewind.IncludeSimProxies",
             &bCompareStateToTriggerRewindIncludeSimProxies,
             L"When true, include simulated proxies when np2.Resim.CompareStateToTriggerRewind is enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimCompareStateToTriggerRewindIncludeSimProxies__);
  return;
}

// `dynamic_initializer_for_'CVarResimDisableReplicationOnInteraction'' @ 14112d470

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimDisableReplicationOnInteraction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimDisableReplicationOnInteraction,L"np2.Resim.DisableReplicationOnInteraction",
             &bDisableReplicationOnInteraction,
             L"If a resim object interacts with another object not running resimulation, deactivate that objects replication until interaction stops."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimDisableReplicationOnInteraction__);
  return;
}

// `dynamic_initializer_for_'CVarResimDrawDebug'' @ 14112d4c0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_initializer_for__CVarResimDrawDebug__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimDrawDebug,L"np2.Resim.DrawDebug",&bDrawDebug,L"Resimulation debug draw-calls"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimDrawDebug__);
  return;
}

// `dynamic_initializer_for_'CVarResimEnableReliableFlow'' @ 14112d510

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_initializer_for__CVarResimEnableReliableFlow__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimEnableReliableFlow,L"np2.Resim.EnableReliableFlow",&bEnableReliableFlow,
             L"EXPERIMENTAL -- When true, allow data to be sent reliably. Also send FNetworkPhysicsData marked with FNetworkPhysicsData::bimportant reliably over the network."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimEnableReliableFlow__);
  return;
}

// `dynamic_initializer_for_'CVarResimEnableStatefulDeltaSerialization'' @ 14112d560

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimEnableStatefulDeltaSerialization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimEnableStatefulDeltaSerialization,
             L"np2.Resim.StatefulDeltaSerialization.Enable",&bEnableStatefulDeltaSerialization,
             L"Enables stateful delta serialization for FNetworkPhysicsData derived inputs and states. During FNetworkPhysicsData::NetSerialize there will be a valid pointer to a previous FNetworkPhysicsData which can be used for delta serialization, FNetworkPhysicsData::DeltaSourceData. NOTE: Switching this during gameplay might cause disconnections."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimEnableStatefulDeltaSerialization__);
  return;
}

// `dynamic_initializer_for_'CVarResimEnableUnreliableFlow'' @ 14112d5b0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimEnableUnreliableFlow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimEnableUnreliableFlow,L"np2.Resim.EnableUnreliableFlow",&bEnableUnreliableFlow
             ,
             L"When true, allow data to be sent unreliably. Also sends FNetworkPhysicsData not marked with FNetworkPhysicsData::bimportant unreliably over the network."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimEnableUnreliableFlow__);
  return;
}

// `dynamic_initializer_for_'CVarResimLogOutOfBoundsTimeLimit'' @ 14112d600

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimLogOutOfBoundsTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimLogOutOfBoundsTimeLimit,L"np2.Resim.LogOutOfBoundsTimeLimit",
             &LogOutOfBoundsTimeLimit,
             L"Time that received targets needs to be within rewind bounds again before printing log that we are back in sync again. A new desync log will not be printed before an in-sync log has been printed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimLogOutOfBoundsTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarResimPosStabilityMultiplier'' @ 14112d650

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimPosStabilityMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimPosStabilityMultiplier,L"np2.Resim.PosStabilityMultiplier",
             &PosStabilityMultiplier,
             L"Recommended range between 0.0-1.0. Lower value means more stable positional corrections."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimPosStabilityMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarResimRedundantInputs'' @ 14112d6a0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_initializer_for__CVarResimRedundantInputs__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRedundantInputs,L"np2.Resim.RedundantInputs",&RedundantInputs,
             L"How many extra inputs to send with each unreliable network message, to account for packetloss. From owning client to server and back to owning client. NOTE: This is disabled while np2.Resim.DynamicInputScaling.Enabled is enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRedundantInputs__);
  return;
}

// `dynamic_initializer_for_'CVarResimRedundantRemoteInputs'' @ 14112d6f0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimRedundantRemoteInputs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRedundantRemoteInputs,L"np2.Resim.RedundantRemoteInputs",
             &RedundantRemoteInputs,
             L"How many extra inputs to send with each unreliable network message, to account for packetloss. From server to remote clients."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRedundantRemoteInputs__);
  return;
}

// `dynamic_initializer_for_'CVarResimRedundantStates'' @ 14112d740

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_initializer_for__CVarResimRedundantStates__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRedundantStates,L"np2.Resim.RedundantStates",&RedundantStates,
             L"How many extra states to send with each unreliable network message, to account for packetloss."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRedundantStates__);
  return;
}

// `dynamic_initializer_for_'CVarResimRotStabilityMultiplier'' @ 14112d790

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimRotStabilityMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRotStabilityMultiplier,L"np2.Resim.RotStabilityMultiplier",
             &RotStabilityMultiplier,
             L"Recommended range between 0.0-1.0. Lower value means more stable rotational corrections."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRotStabilityMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarResimRuntimeCorrectConnectedBodies'' @ 14112d7e0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimRuntimeCorrectConnectedBodies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRuntimeCorrectConnectedBodies,L"np2.Resim.RuntimeCorrectConnectedBodies",
             &bRuntimeCorrectConnectedBodies,
             L"If true runtime position and rotation correction will also shift transform of any connected physics objects. Used if RuntimeCorrectionEnabled is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRuntimeCorrectConnectedBodies__);
  return;
}

// `dynamic_initializer_for_'CVarResimRuntimeCorrectionEnabled'' @ 14112d830

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimRuntimeCorrectionEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRuntimeCorrectionEnabled,L"np2.Resim.RuntimeCorrectionEnabled",
             &bRuntimeCorrectionEnabled,
             L"Apply positional and rotational runtime corrections while within resim trigger distance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRuntimeCorrectionEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarResimRuntimeVelocityCorrection'' @ 14112d880

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimRuntimeVelocityCorrection__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimRuntimeVelocityCorrection,L"np2.Resim.RuntimeVelocityCorrection",
             &bRuntimeVelocityCorrection,
             L"Apply linear and angular velocity corrections in runtime while within resim trigger distance. Used if RuntimeCorrectionEnabled is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimRuntimeVelocityCorrection__);
  return;
}

// `dynamic_initializer_for_'CVarResimTimeToSyncStatefulDeltaSource'' @ 14112d8d0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimTimeToSyncStatefulDeltaSource__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimTimeToSyncStatefulDeltaSource,
             L"np2.Resim.StatefulDeltaSerialization.TimeToSyncStatefulDeltaSource",
             &TimeToSyncStatefulDeltaSource,
             L"The time in seconds between synchronizing the stateful delta source from server to clients."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimTimeToSyncStatefulDeltaSource__);
  return;
}

// `dynamic_initializer_for_'CVarResimUseDefaultForDeltaSourceReplication'' @ 14112d920

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimUseDefaultForDeltaSourceReplication__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimUseDefaultForDeltaSourceReplication,
             L"np2.Resim.StatefulDeltaSerialization.UseDefaultForDeltaSourceReplication",
             &bUseDefaultDeltaForDeltaSourceReplication,
             L"When false delta sources will use standard serialization when being replicated. When true there will be a valid delta source pointer to default data which can be used for delta serialization when replicating delta sources."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimUseDefaultForDeltaSourceReplication__);
  return;
}

// `dynamic_initializer_for_'CVarResimValidateDataOnGameThread'' @ 14112d970

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimValidateDataOnGameThread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimValidateDataOnGameThread,L"np2.Resim.ValidateDataOnGameThread",
             &bValidateDataOnGameThread,
             L"When true, perform server-side input validation through FNetworkPhysicsData::ValidateData on the Game Thread, note that LocalFrame will be the same as ServerFrame on Game Thread. If false, perform the call on the Physics Thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimValidateDataOnGameThread__);
  return;
}

// `dynamic_initializer_for_'CVarResimVelStabilityMultiplier'' @ 14112d9c0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarResimVelStabilityMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimVelStabilityMultiplier,L"np2.Resim.VelStabilityMultiplier",
             &VelStabilityMultiplier,
             L"Recommended range between 0.0-1.0. Lower value means more stable linear velocity corrections."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimVelStabilityMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarRotCorrectionTimeBase'' @ 14112da10

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarRotCorrectionTimeBase__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRotCorrectionTimeBase,L"np2.PredictiveInterpolation.RotCorrectionTimeBase",
             &RotCorrectionTimeBase,
             L"Base time to correct rotational offset over. RoundTripTime * RotCorrectionTimeMultiplier is added on top of this."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRotCorrectionTimeBase__);
  return;
}

// `dynamic_initializer_for_'CVarRotCorrectionTimeMin'' @ 14112da60

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarRotCorrectionTimeMin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRotCorrectionTimeMin,L"np2.PredictiveInterpolation.RotCorrectionTimeMin",
             &RotCorrectionTimeMin,
             L"Min time to correct rotational offset over. DeltaSeconds is added on top of this.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarRotCorrectionTimeMin__);
  return;
}

// `dynamic_initializer_for_'CVarRotCorrectionTimeMultiplier'' @ 14112dab0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarRotCorrectionTimeMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRotCorrectionTimeMultiplier,
             L"np2.PredictiveInterpolation.RotCorrectionTimeMultiplier",&RotCorrectionTimeMultiplier
             ,
             L"Multiplier to adjust how much of RoundTripTime to add to rotational offset correction."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRotCorrectionTimeMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarRotInterpolationTimeMultiplier'' @ 14112db00

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarRotInterpolationTimeMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRotInterpolationTimeMultiplier,
             L"np2.PredictiveInterpolation.RotInterpolationTimeMultiplier",
             &RotInterpolationTimeMultiplier,
             L"Multiplier to adjust the rotational interpolation time which is based on the sendrate of state data from the server."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRotInterpolationTimeMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarSimProxyRepMode'' @ 14112db50

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_initializer_for__CVarSimProxyRepMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimProxyRepMode,L"np2.Resim.SimProxyRepMode",&SimProxyRepMode,
             L"All actors with a NetworkPhysicsSettingsComponent and that are running resimulation and is ROLE_SimulatedProxy will change their physics replication mode. -1 = Disabled, 0 = Default, 1 = PredictiveInterpolation, 2 = Resimulation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSimProxyRepMode__);
  return;
}

// `dynamic_initializer_for_'CVarSkipPhysicsReplication'' @ 14112dba0

void __cdecl CharacterMovementCVars::_dynamic_initializer_for__CVarSkipPhysicsReplication__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipPhysicsReplication,L"p.SkipPhysicsReplication",&SkipPhysicsReplication,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipPhysicsReplication__);
  return;
}

// `dynamic_initializer_for_'CVarSkipReplication'' @ 14112dbf0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSkipReplication__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipReplication,L"np2.PredictiveInterpolation.SkipReplication",&bSkipReplication,
             L"When true, predictive interpolation is not applied anymore letting the object simulate freely instead"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipReplication__);
  return;
}

// `dynamic_initializer_for_'CVarSkipSkeletalRepOptimization'' @ 14112dc40

void __cdecl
PhysicsReplicationCVars::_dynamic_initializer_for__CVarSkipSkeletalRepOptimization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipSkeletalRepOptimization,L"p.SkipSkeletalRepOptimization",
             &SkipSkeletalRepOptimization,
             L"If true, we don\'t move the skeletal mesh component during replication. This is ok because the skeletal mesh already polls physx after its results"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipSkeletalRepOptimization__);
  return;
}

// `dynamic_initializer_for_'CVarSkipVelocityRepOnPosEarlyOut'' @ 14112dc90

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSkipVelocityRepOnPosEarlyOut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipVelocityRepOnPosEarlyOut,
             L"np2.PredictiveInterpolation.SkipVelocityRepOnPosEarlyOut",
             &bSkipVelocityRepOnPosEarlyOut,
             L"If true, don\'t run linear velocity replication if position can early out but angular can\'t early out."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipVelocityRepOnPosEarlyOut__);
  return;
}

// `dynamic_initializer_for_'CVarSleepConnectedBodies'' @ 14112dce0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSleepConnectedBodies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSleepConnectedBodies,L"np2.PredictiveInterpolation.SleepConnectedBodies",
             &bSleepConnectedBodies,
             L"When true, sleep state will be applied to any dynamic physics object connected to the replicated object."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSleepConnectedBodies__);
  return;
}

// `dynamic_initializer_for_'CVarSleepSecondsClearTarget'' @ 14112dd30

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSleepSecondsClearTarget__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSleepSecondsClearTarget,L"np2.PredictiveInterpolation.SleepSecondsClearTarget",
             &SleepSecondsClearTarget,
             L"Wait for the object to sleep for this many seconds before clearing the replication target, to ensure nothing wakes up the object just after it goes to sleep on the client."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSleepSecondsClearTarget__);
  return;
}

// `dynamic_initializer_for_'CVarSoftSnapPosStrength'' @ 14112dd80

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSoftSnapPosStrength__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftSnapPosStrength,L"np2.PredictiveInterpolation.SoftSnapPosStrength",
             &SoftSnapPosStrength,
             L"Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining positional distance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftSnapPosStrength__);
  return;
}

// `dynamic_initializer_for_'CVarSoftSnapRotStrength'' @ 14112ddd0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSoftSnapRotStrength__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftSnapRotStrength,L"np2.PredictiveInterpolation.SoftSnapRotStrength",
             &SoftSnapRotStrength,
             L"Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining rotational distance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftSnapRotStrength__);
  return;
}

// `dynamic_initializer_for_'CVarSoftSnapToSource'' @ 14112de20

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarSoftSnapToSource__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftSnapToSource,L"np2.PredictiveInterpolation.SoftSnapToSource",
             &bSoftSnapToSource,
             L"If true, soft snap will be performed towards the source state of the current target instead of the predicted state of the current target."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftSnapToSource__);
  return;
}

// `dynamic_initializer_for_'CVarTargetTickAlignmentClampMultiplier'' @ 14112de70

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarTargetTickAlignmentClampMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTargetTickAlignmentClampMultiplier,
             L"np2.PredictiveInterpolation.TargetTickAlignmentClampMultiplier",
             &TargetTickAlignmentClampMultiplier,
             L"Multiplier to adjust clamping of target alignment via TickCount. Multiplier is performed on AverageReceiveInterval."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTargetTickAlignmentClampMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarTeleportDetectionEnabled'' @ 14112dec0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarTeleportDetectionEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTeleportDetectionEnabled,L"np2.PredictiveInterpolation.TeleportDetection.Enabled",
             &TeleportDetectionEnabled,
             L"Set to 1 to enable teleportation detection which hard snaps the replicated object if replication thinks a teleportation has happened. Disable by setting to 0 (or any other value currently, leaving room for adding more teleportation detection modes which will use incremental values)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTeleportDetectionEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarTeleportDetectionMinDistance'' @ 14112df10

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarTeleportDetectionMinDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTeleportDetectionMinDistance,
             L"np2.PredictiveInterpolation.TeleportDetection.MinDistance",
             &TeleportDetectionMinDistance,
             L"Minimum positional distance between two received target states running teleportation detection."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTeleportDetectionMinDistance__);
  return;
}

// `dynamic_initializer_for_'CVarTeleportDetectionVelocityMultiplier'' @ 14112df60

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_initializer_for__CVarTeleportDetectionVelocityMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTeleportDetectionVelocityMultiplier,
             L"np2.PredictiveInterpolation.TeleportDetection.VelocityMultiplier",
             &TeleportDetectionVelocityMultiplier,
             L"Multiplier to add leniency when checking if the previous or current velocity could cover the positional offset between previous and current target state. Higher value results in more lenient velocity comparison, i.e. less risk of triggering a hard snap when a teleport has not happened but also less likely to catch a teleport for objects that move while being teleported. Values under 1.0 are not recommended."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTeleportDetectionVelocityMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarTriggerResimOnInputReceive'' @ 14112dfb0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_initializer_for__CVarTriggerResimOnInputReceive__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTriggerResimOnInputReceive,L"np2.Resim.TriggerResimOnInputReceive",
             &bTriggerResimOnInputReceive,
             L"When true, a resim will be requested to the frame of the latest frame of received inputs this frame"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTriggerResimOnInputReceive__);
  return;
}

// `dynamic_initializer_for_'CVarUseParallelBlendPhysics'' @ 14112e000

void __cdecl _dynamic_initializer_for__CVarUseParallelBlendPhysics__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseParallelBlendPhysics,L"a.ParallelBlendPhysics",local_res8,
             L"If 1, physics blending will be run across the task graph system. If 0, blending will run purely on the game thread"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseParallelBlendPhysics__);
  return;
}

// `dynamic_initializer_for_'CVarUseRBANForDefaultPhysicsAssetSolverType'' @ 14112e050

void __cdecl _dynamic_initializer_for__CVarUseRBANForDefaultPhysicsAssetSolverType__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseRBANForDefaultPhysicsAssetSolverType,
             L"p.Chaos.UseRBANForDefaultPhysicsAssetSolverType",
             &bUseRBANForDefaultPhysicsAssetSolverType,
             L"Boolean to use RBAN for default physics asset solver type (false by default)",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseRBANForDefaultPhysicsAssetSolverType__);
  return;
}

// `dynamic_initializer_for_'CVarVelocityBased'' @ 14112e0a0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::_dynamic_initializer_for__CVarVelocityBased__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVelocityBased,L"np2.PredictiveInterpolation.VelocityBased",&bVelocityBased,
             L"When true, predictive interpolation replication mode will only apply linear velocity and angular velocity"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVelocityBased__);
  return;
}

// `dynamic_initializer_for_'CVar_ReplicationCacheLingerForSeconds'' @ 14112e0f0

void __cdecl
ReplicationCacheCvars::_dynamic_initializer_for__CVar_ReplicationCacheLingerForSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ReplicationCacheLingerForSeconds,L"np2.ReplicationCache.LingerForNSeconds",
             &LingerForSeconds,
             L"How long to keep data in the replication cache without the actor accessing it, after this we stop caching the actors state until it tries to access it again."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_ReplicationCacheLingerForSeconds__);
  return;
}

// `dynamic_initializer_for_'GEngineChaosSettingsProvider'' @ 14112e140

void __cdecl _dynamic_initializer_for__GEngineChaosSettingsProvider__(void)

{
  atexit(_dynamic_atexit_destructor_for__GEngineChaosSettingsProvider__);
  return;
}

// `dynamic_initializer_for_'JointBlue'' @ 14112e160

void __cdecl _dynamic_initializer_for__JointBlue__(void)

{
  JointBlue = FColor::Blue;
  return;
}

// `dynamic_initializer_for_'JointGreen'' @ 14112e180

void __cdecl _dynamic_initializer_for__JointGreen__(void)

{
  JointGreen = FColor::Green;
  return;
}

// `dynamic_initializer_for_'JointLimitColor'' @ 14112e1a0

void __cdecl _dynamic_initializer_for__JointLimitColor__(void)

{
  JointLimitColor = FColor::Green;
  return;
}

// `dynamic_initializer_for_'JointLimitsViolatedColor'' @ 14112e1c0

void __cdecl _dynamic_initializer_for__JointLimitsViolatedColor__(void)

{
  JointLimitsViolatedColor = FColor::Purple;
  return;
}

// `dynamic_initializer_for_'JointRed'' @ 14112e1e0

void __cdecl _dynamic_initializer_for__JointRed__(void)

{
  JointRed = FColor::Red;
  return;
}

// `dynamic_initializer_for_'JointRefColor'' @ 14112e200

void __cdecl _dynamic_initializer_for__JointRefColor__(void)

{
  JointRefColor = FColor::Yellow;
  return;
}

// `dynamic_initializer_for_'LogPhysicalMaterialMask'' @ 14112e220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPhysicalMaterialMask__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPhysicalMaterialMask,L"LogPhysicalMaterialMask",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPhysicalMaterialMask__);
  return;
}

// `dynamic_initializer_for_'LogPhysicsConstraints'' @ 14112e260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPhysicsConstraints__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPhysicsConstraints,L"LogPhysicsConstraints",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPhysicsConstraints__);
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData'' @ 14112e2a0

void __cdecl
_dynamic_initializer_for__NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData,
               L"MulticastReceiveImportantInputData");
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData'' @ 14112e2c0

void __cdecl
_dynamic_initializer_for__NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData,
               L"MulticastReceiveImportantStateData");
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame'' @ 14112e2e0

void __cdecl
_dynamic_initializer_for__NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame,
               L"ServerReceiveDeltaSourceInputFrame");
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame'' @ 14112e300

void __cdecl
_dynamic_initializer_for__NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame,
               L"ServerReceiveDeltaSourceStateFrame");
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData'' @ 14112e320

void __cdecl
_dynamic_initializer_for__NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData,
               L"ServerReceiveImportantInputData");
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_ServerReceiveInputCollection'' @ 14112e340

void __cdecl
_dynamic_initializer_for__NAME_UNetworkPhysicsComponent_ServerReceiveInputCollection__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_ServerReceiveInputCollection,
               L"ServerReceiveInputCollection");
  return;
}

// `dynamic_initializer_for_'NAME_UNetworkPhysicsComponent_ServerReceiveInputData'' @ 14112e360

void __cdecl _dynamic_initializer_for__NAME_UNetworkPhysicsComponent_ServerReceiveInputData__(void)

{
  FName::FName(&NAME_UNetworkPhysicsComponent_ServerReceiveInputData,L"ServerReceiveInputData");
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates'' @ 14112e380

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates'' @ 14112e3c0

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates'' @ 14112e400

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates'' @ 14112e440

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates'' @ 14112e480

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates__(void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates'' @ 14112e4c0

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates'' @ 14112e500

void __cdecl
_dynamic_initializer_for__NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates__(void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates);
  NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates__6B_;
  atexit(
        _dynamic_atexit_destructor_for__NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates__
        );
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy'' @ 14112e540

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy,
               "NetworkPhysicsRewindDataDeltaSourceInputProxy");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy'' @ 14112e560

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy,
               "NetworkPhysicsRewindDataDeltaSourceStateProxy");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy'' @ 14112e580

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy,
               "NetworkPhysicsRewindDataImportantInputProxy");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy'' @ 14112e5a0

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy,
               "NetworkPhysicsRewindDataImportantStateProxy");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy'' @ 14112e5c0

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy,
               "NetworkPhysicsRewindDataInputProxy");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy'' @ 14112e5e0

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy,
               "NetworkPhysicsRewindDataRemoteInputProxy");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy'' @ 14112e600

void __cdecl
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy__
          (void)

{
  FName::FName(&PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy,
               "NetworkPhysicsRewindDataStateProxy");
  return;
}

// `dynamic_initializer_for_'SimpleSuspensionRaycastGroundPlane'' @ 14112e620

void __cdecl _dynamic_initializer_for__SimpleSuspensionRaycastGroundPlane__(void)

{
  atexit(_dynamic_atexit_destructor_for__SimpleSuspensionRaycastGroundPlane__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 14112e640

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 14112e6d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 14112e760

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 14112e7f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 14112e880

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 14112e910

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 14112e9a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 14112ea30

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 14112eac0

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

// `dynamic_initializer_for_'StatPtr_STAT_FinalizeAnimationUpdate_UpdateBounds'' @ 14112eb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinalizeAnimationUpdate_UpdateBounds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizeAnimationUpdate_UpdateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_FinalizeAnimationUpdate_UpdateBounds>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizeAnimationUpdate_UpdateBounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizeAnimationUpdate_UpdateBounds,
               *pFVar1,L"STAT_FinalizeAnimationUpdate_UpdateBounds","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinalizeAnimationUpdate_UpdateChildTransforms'' @ 14112ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FinalizeAnimationUpdate_UpdateChildTransforms__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizeAnimationUpdate_UpdateChildTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_FinalizeAnimationUpdate_UpdateChildTransforms>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizeAnimationUpdate_UpdateChildTransforms");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FinalizeAnimationUpdate_UpdateChildTransforms,*pFVar1,
               L"STAT_FinalizeAnimationUpdate_UpdateChildTransforms","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinalizeAnimationUpdate_UpdateOverlaps'' @ 14112ec70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinalizeAnimationUpdate_UpdateOverlaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizeAnimationUpdate_UpdateOverlaps ==
      (FThreadSafeStaticStat<FStat_STAT_FinalizeAnimationUpdate_UpdateOverlaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizeAnimationUpdate_UpdateOverlaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizeAnimationUpdate_UpdateOverlaps,
               *pFVar1,L"STAT_FinalizeAnimationUpdate_UpdateOverlaps","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 14112ed00

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 14112ed90

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 14112ee20

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

// `dynamic_initializer_for_'StatPtr_STAT_SubstepSimulationEnd'' @ 14112eeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SubstepSimulationEnd__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SubstepSimulationEnd ==
      (FThreadSafeStaticStat<FStat_STAT_SubstepSimulationEnd>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SubstepSimulationEnd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SubstepSimulationEnd,*pFVar1,
               L"Phys SubstepEnd","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SubstepSimulationStart'' @ 14112ef40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SubstepSimulationStart__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SubstepSimulationStart ==
      (FThreadSafeStaticStat<FStat_STAT_SubstepSimulationStart>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SubstepSimulationStart");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SubstepSimulationStart,*pFVar1,
               L"Phys SubstepStart","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h__Script_Engine_917475025'' @ 14112efd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h__Script_Engine_917475025__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h__Script_Engine_1568996634'' @ 14112f010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h__Script_Engine_1568996634__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h__Script_Engine_79191328'' @ 14112f060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h__Script_Engine_79191328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h__Script_Engine_4147176725'' @ 14112f0b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h__Script_Engine_4147176725__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h__Script_Engine_2064395430'' @ 14112f0f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h__Script_Engine_2064395430__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h__Script_Engine_164890088'' @ 14112f130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h__Script_Engine_164890088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h__Script_Engine_2631950310'' @ 14112f170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h__Script_Engine_2631950310__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h__Script_Engine_2134317472'' @ 14112f1b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h__Script_Engine_2134317472__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h__Script_Engine_3427444500'' @ 14112f200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h__Script_Engine_3427444500__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h__Script_Engine_2864705919'' @ 14112f240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h__Script_Engine_2864705919__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h__Script_Engine_1623685925'' @ 14112f280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h__Script_Engine_1623685925__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h__Script_Engine_1246195945'' @ 14112f2d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h__Script_Engine_1246195945__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h__Script_Engine_3826595262'' @ 14112f310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h__Script_Engine_3826595262__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h__Script_Engine_3284448278'' @ 14112f350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h__Script_Engine_3284448278__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,0xb,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h__Script_Engine_3427543977'' @ 14112f3a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h__Script_Engine_3427543977__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h__Script_Engine_2084405186'' @ 14112f3f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h__Script_Engine_2084405186__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce @ 1482c7be0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNotForDedicatedServer_SetBit @ 1482c7c20

void __cdecl
Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1 @ 1482c7c30

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1482c7c70

void * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsData,&UE::CoreUObject::Private::Construct<FNetworkPhysicsData>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsData>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsData>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2 @ 1482c7cb0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist @ 1482c7db0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1482c7df0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken @ 1482c7e00

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1482c7eb0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 1482c7f80

void * __thiscall
FNetworkPhysicsPayload::_scalar_deleting_destructor_(FNetworkPhysicsPayload *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNetworkPhysicsPayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled @ 1482c7fc0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData @ 1482c8000

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_ReInitConstraintAndApplyPhysicsState @ 1482c8040

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_ReInitConstraintAndApplyPhysicsState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_ReInitConstraintAndApplyPhysicsState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAngularBreakable_SetBit @ 1482c80c0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::
NewProp_bAngularBreakable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData @ 1482c80d0

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable @ 1482c8110

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedDeltaSourceInput @ 1482c8150

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedDeltaSourceInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedDeltaSourceInput_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAccelerationMode_SetBit @ 1482c81e0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveAccelerationMode_Statics::
NewProp_bAccelerationMode_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedDeltaSourceState @ 1482c81f0

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedDeltaSourceState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedDeltaSourceState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveAccelerationMode @ 1482c8260

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveAccelerationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveAccelerationMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputCollection @ 1482c82a0

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputCollection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs @ 1482c82e0

UFunction * __cdecl Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode @ 1482c8320

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedRemoteInputCollection @ 1482c8360

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedRemoteInputCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedRemoteInputCollection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedRemoteInputs @ 1482c83a0

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedRemoteInputs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedRemoteInputs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams @ 1482c83e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStateCollection @ 1482c8420

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStateCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStateCollection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableSwingDrive_SetBit @ 1482c8460

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::
NewProp_bEnableSwingDrive_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates @ 1482c8470

UFunction * __cdecl Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableTwistDrive_SetBit @ 1482c84b0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::
NewProp_bEnableTwistDrive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive @ 1482c84c0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame @ 1482c8500

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget @ 1482c8540

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame @ 1482c85c0

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAngularPlasticity_SetBit @ 1482c8600

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::
NewProp_bAngularPlasticity_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 1482c8610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__0HAEAU123_1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister @ 1482c8650

UClass * __cdecl Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintTemplate",
               &Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton,
               UPhysicsConstraintTemplate::StaticRegisterNativesUPhysicsConstraintTemplate,0x438,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsConstraintTemplate>,
               InternalVTableHelperCtorCaller<UPhysicsConstraintTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity @ 1482c87f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData @ 1482c8830

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit @ 1482c8870

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPhysicsSettings @ 1482c88b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsSettings(void)

{
  if (Z_Registration_Info_UClass_UPhysicsSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsSettings.OuterSingleton,
               &Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsSettings.OuterSingleton;
}

// Z_Construct_UClass_UPhysicalAnimationComponent @ 1482c88f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicalAnimationComponent(void)

{
  if (Z_Registration_Info_UClass_UPhysicalAnimationComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicalAnimationComponent.OuterSingleton,
               &Z_Construct_UClass_UPhysicalAnimationComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicalAnimationComponent.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ESettingsDOF @ 1482c8930

UEnum * __cdecl Z_Construct_UEnum_Engine_ESettingsDOF(void)

{
  if (Z_Registration_Info_UEnum_ESettingsDOF.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESettingsDOF.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESettingsDOF_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESettingsDOF.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESettingsLockedAxis @ 1482c8970

UEnum * __cdecl Z_Construct_UEnum_Engine_ESettingsLockedAxis(void)

{
  if (Z_Registration_Info_UEnum_ESettingsLockedAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESettingsLockedAxis.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESettingsLockedAxis.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPhysicalAnimationData @ 1482c89b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicalAnimationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalAnimationData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicalAnimationData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicalAnimationData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicalAnimationData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosPhysicsSettings @ 1482c8a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosPhysicsSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicalSurfaceName @ 1482c8ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicalSurfaceName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalSurfaceName.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicalSurfaceName.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicalSurfaceName.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPhysicalSurfaceName.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsPredictionSettings @ 1482c8b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsPredictionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsPredictionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsPredictionSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsPredictionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsPredictionSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings @ 1482c8bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsReplicationLODSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsReplicationLODSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsReplicationLODSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsReplicationLODSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings @ 1482c8c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsReplicationResimulationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsReplicationResimulationSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsReplicationResimulationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsReplicationResimulationSettings.InnerSingleton;
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

// NewProp_bIsLocalSimulation_SetBit @ 1482c8cb0

void __cdecl
Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewProp_bIsLocalSimulation_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 1;
  return;
}

// NewStructOps @ 1482c8cc0

void * __cdecl Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicalSurfaceName,&UE::CoreUObject::Private::Construct<FPhysicalSurfaceName>,&UE::CoreUObject::Private::ConstructForTests<FPhysicalSurfaceName>,&UE::CoreUObject::Private::Destruct<FPhysicalSurfaceName>,&UE::CoreUObject::Private::Copy<FPhysicalSurfaceName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482c8d00

void * __cdecl Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicalAnimationData,&UE::CoreUObject::Private::Construct<FPhysicalAnimationData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicalAnimationData>,&UE::CoreUObject::Private::Destruct<FPhysicalAnimationData>,&UE::CoreUObject::Private::Copy<FPhysicalAnimationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit @ 1482c8d40

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputCollection @ 1482c8d80

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputCollection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit @ 1482c8dc0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableSwingDrive_SetBit @ 1482c8e00

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::
NewProp_bEnableSwingDrive_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableTwistDrive_SetBit @ 1482c8e10

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::
NewProp_bEnableTwistDrive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 1482c8e20

void * __cdecl Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosPhysicsSettings,&UE::CoreUObject::Private::Construct<FChaosPhysicsSettings>,&UE::CoreUObject::Private::ConstructForTests<FChaosPhysicsSettings>,&UE::CoreUObject::Private::Destruct<FChaosPhysicsSettings>,&UE::CoreUObject::Private::Copy<FChaosPhysicsSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive @ 1482c8e60

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData @ 1482c8ea0

UFunction * __cdecl Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeSelf_SetBit @ 1482c8ee0

void __cdecl
Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::
NewProp_bIncludeSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bClearNotFound_SetBit @ 1482c8ef0

void __cdecl
Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics::
NewProp_bClearNotFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bEnableSLERP_SetBit @ 1482c8f00

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::
NewProp_bEnableSLERP_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP @ 1482c8f10

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow @ 1482c8f50

UFunction * __cdecl
Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableTwistDrive_SetBit @ 1482c8f90

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::
NewProp_bEnableTwistDrive_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableSwingDrive_SetBit @ 1482c8fa0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::
NewProp_bEnableSwingDrive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// ESettingsDOF_StaticEnum @ 1482c8fb0

UEnum * __cdecl ESettingsDOF_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsDOF,(UObject *)pUVar1,L"ESettingsDOF");
  }
  return Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing @ 1482c8ff0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings @ 1482c9030

UFunction * __cdecl
Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableResimulationErrorPositionThreshold_SetBit @ 1482c9070

void __cdecl
Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics::
NewProp_bEnableResimulationErrorPositionThreshold_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableResimulationErrorRotationThreshold_SetBit @ 1482c9080

void __cdecl
Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics::
NewProp_bEnableResimulationErrorRotationThreshold_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bEnableResimulationErrorLinearVelocityThreshold_SetBit @ 1482c9090

void __cdecl
Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics::
NewProp_bEnableResimulationErrorLinearVelocityThreshold_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bEnableResimulationErrorAngularVelocityThreshold_SetBit @ 1482c90a0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics::
NewProp_bEnableResimulationErrorAngularVelocityThreshold_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 1482c90b0

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsReplicationResimulationSettings,&UE::CoreUObject::Private::Construct<FPhysicsReplicationResimulationSettings>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsReplicationResimulationSettings>,&UE::CoreUObject::Private::Destruct<FPhysicsReplicationResimulationSettings>,&UE::CoreUObject::Private::Copy<FPhysicsReplicationResimulationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget @ 1482c90f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeSelf_SetBit @ 1482c9130

void __cdecl
Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics::
NewProp_bIncludeSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow @ 1482c91c0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents @ 1482c9380

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform @ 1482c93c0

UFunction * __cdecl Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicalAnimationComponent_GetBodyTargetTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent @ 1482c9400

UFunction * __cdecl Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicalAnimationComponent_SetSkeletalMeshComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnablePhysicsReplicationLOD_SetBit @ 1482c9440

void __cdecl
Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings_Statics::
NewProp_bEnablePhysicsReplicationLOD_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame @ 1482c9450

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1482c9510

void * __cdecl Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsReplicationLODSettings,&UE::CoreUObject::Private::Construct<FPhysicsReplicationLODSettings>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsReplicationLODSettings>,&UE::CoreUObject::Private::Destruct<FPhysicsReplicationLODSettings>,&UE::CoreUObject::Private::Copy<FPhysicsReplicationLODSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer @ 1482c95e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicalAnimationComponent_SetStrengthMultiplyer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation @ 1482c9670

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition @ 1482c96b0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnablePhysicsResimulation_SetBit @ 1482c96f0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::
NewProp_bEnablePhysicsResimulation_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnablePhysicsPrediction_SetBit @ 1482c9700

void __cdecl
Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::
NewProp_bEnablePhysicsPrediction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bEnablePhysicsHistoryCapture_SetBit @ 1482c9710

void __cdecl
Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::
NewProp_bEnablePhysicsHistoryCapture_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 1482c9750

void * __cdecl Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsPredictionSettings,&UE::CoreUObject::Private::Construct<FPhysicsPredictionSettings>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsPredictionSettings>,&UE::CoreUObject::Private::Destruct<FPhysicsPredictionSettings>,&UE::CoreUObject::Private::Copy<FPhysicsPredictionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale @ 1482c9800

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisableCollision_SetBit @ 1482c98c0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::
NewProp_bDisableCollision_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision @ 1482c9a70

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLinearBreakable_SetBit @ 1482c9ab0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::
NewProp_bLinearBreakable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UPhysicsObjectBlueprintLibrary @ 1482c9ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsObjectBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable @ 1482c9b00

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ESettingsLockedAxis_StaticEnum @ 1482c9b40

UEnum * __cdecl ESettingsLockedAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsLockedAxis,(UObject *)pUVar1,
                       L"ESettingsLockedAxis");
  }
  return Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton;
}

// NewProp_bAccelerationMode_SetBit @ 1482c9b80

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveAccelerationMode_Statics::
NewProp_bAccelerationMode_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bApplyStrain_SetBit @ 1482c9b90

void __cdecl
Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::
NewProp_bApplyStrain_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bVelChange_SetBit @ 1482c9ba0

void __cdecl
Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::
NewProp_bVelChange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveAccelerationMode @ 1482c9bb0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveAccelerationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveAccelerationMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount @ 1482c9bf0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams @ 1482c9c30

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse @ 1482c9c70

UFunction * __cdecl Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuppressFaceRemapTable_SetBit @ 1482c9cb0

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17e) = 1;
  return;
}

// NewProp_bLinearPlasticity_SetBit @ 1482c9cc0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::
NewProp_bLinearPlasticity_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSupportUVFromHitResults_SetBit @ 1482c9cd0

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17f) = 1;
  return;
}

// NewProp_bDisableActiveActors_SetBit @ 1482c9ce0

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x180) = 1;
  return;
}

// NewProp_bDisableKinematicStaticPairs_SetBit @ 1482c9cf0

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x181) = 1;
  return;
}

// NewProp_bDisableKinematicKinematicPairs_SetBit @ 1482c9d00

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x182) = 1;
  return;
}

// NewProp_bDisableCCD_SetBit @ 1482c9d10

void __cdecl Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x183) = 1;
  return;
}

// NewProp_bSimulateAnimPhysicsAfterReset_SetBit @ 1482c9d20

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x188) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1482c9d30

void __cdecl
Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bSubstepping_SetBit @ 1482c9d40

void __cdecl Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  return;
}

// NewProp_bSubsteppingAsync_SetBit @ 1482c9d50

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x195) = 1;
  return;
}

// NewProp_bTickPhysicsAsync_SetBit @ 1482c9d60

void __cdecl
Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bTickPhysicsAsync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x196) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity @ 1482c9d70

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults @ 1482c9db0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableDriveX_SetBit @ 1482c9df0

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::
NewProp_bEnableDriveX_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableDriveY_SetBit @ 1482c9e00

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::
NewProp_bEnableDriveY_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bEnableDriveZ_SetBit @ 1482c9e10

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::
NewProp_bEnableDriveZ_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive @ 1482c9e90

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation @ 1482c9ed0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget @ 1482c9f70

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform @ 1482c9ff0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableDriveX_SetBit @ 1482ca030

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::
NewProp_bEnableDriveX_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableDriveY_SetBit @ 1482ca040

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::
NewProp_bEnableDriveY_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bEnableDriveZ_SetBit @ 1482ca050

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::
NewProp_bEnableDriveZ_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive @ 1482ca150

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget @ 1482ca190

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit @ 1482ca290

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit @ 1482ca380

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit @ 1482ca450

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1482ca510

void * __thiscall
FNetworkPhysicsData::_scalar_deleting_destructor_(FNetworkPhysicsData *this,uint param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (this->ImplementationComponent).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->ImplementationComponent).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7FNetworkPhysicsPayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_bEnableSLERP_SetBit @ 1482ca570

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::
NewProp_bEnableSLERP_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver @ 1482ca580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver(void)

{
  if (Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.OuterSingleton,
               &Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP @ 1482ca5c0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableTwistDrive_SetBit @ 1482ca670

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::
NewProp_bEnableTwistDrive_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bEnableSwingDrive_SetBit @ 1482ca680

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::
NewProp_bEnableSwingDrive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing @ 1482ca6d0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bProjectionEnabled_SetBit @ 1482ca760

void __cdecl
Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::
NewProp_bProjectionEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled @ 1482ca790

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams @ 1482ca8e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1482ca9c0

void * __thiscall
FNetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates::_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates *this,uint param_1)

{
  *(undefined ***)this = &___7FNetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates__6B_
  ;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482caab0

void * __thiscall
FNetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates::
_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates *this,
          uint param_1)

{
  *(undefined ***)this =
       &___7FNetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482cacf0

void * __thiscall
FNetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates::_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates *this,uint param_1)

{
  *(undefined ***)this = &___7FNetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates__6B_
  ;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482cae20

void * __thiscall
FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates::
_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates *this,
          uint param_1)

{
  *(undefined ***)this =
       &___7FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482cafc0

void * __thiscall
FNetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates::
_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates *this,
          uint param_1)

{
  *(undefined ***)this =
       &___7FNetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482cb260

void * __thiscall
FNetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates::
_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates *this,
          uint param_1)

{
  *(undefined ***)this =
       &___7FNetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482cb460

void * __thiscall
FNetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates::
_scalar_deleting_destructor_
          (FNetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates *this,
          uint param_1)

{
  *(undefined ***)this =
       &___7FNetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UPhysicalMaterialMask @ 1482cb4b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicalMaterialMask(void)

{
  if (Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton,
               &Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton;
}

// Z_Construct_UClass_APhysicsThruster @ 1482cb4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APhysicsThruster(void)

{
  if (Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton,
               &Z_Construct_UClass_APhysicsThruster_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton;
}

// Z_Construct_UClass_UPhysicsQueryHandler @ 1482cb5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsQueryHandler(void)

{
  if (Z_Registration_Info_UClass_UPhysicsQueryHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsQueryHandler.OuterSingleton,
               &Z_Construct_UClass_UPhysicsQueryHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsQueryHandler.OuterSingleton;
}

// EPhysicsQueryKind_StaticEnum @ 1482cb5e0

UEnum * __cdecl EPhysicsQueryKind_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsQueryKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPhysicsQueryKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsQueryKind,(UObject *)pUVar1,
                       L"EPhysicsQueryKind");
  }
  return Z_Registration_Info_UEnum_EPhysicsQueryKind.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1482cbb50

void * __thiscall
FEngineChaosSettingsProvider::_scalar_deleting_destructor_
          (FEngineChaosSettingsProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IChaosSettingsProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UPhysicsConstraintTemplate @ 1482cbd00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsConstraintTemplate(void)

{
  if (Z_Registration_Info_UClass_UPhysicsConstraintTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsConstraintTemplate.OuterSingleton,
               &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintTemplate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle @ 1482cbd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsConstraintProfileHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsConstraintProfileHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsConstraintProfileHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsConstraintProfileHandle.InnerSingleton;
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

// NewStructOps @ 1482cbdc0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x168;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsConstraintProfileHandle,&UE::CoreUObject::Private::Construct<FPhysicsConstraintProfileHandle>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsConstraintProfileHandle>,&UE::CoreUObject::Private::Destruct<FPhysicsConstraintProfileHandle>,&UE::CoreUObject::Private::Copy<FPhysicsConstraintProfileHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetworkPhysicsSettingsComponent @ 1482cc000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsSettingsComponent(void)

{
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton,
               &Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton;
}

// Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset @ 1482cc040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset(void)

{
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.OuterSingleton,
               &Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetworkPhysicsSettings @ 1482cc080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData @ 1482cc100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication @ 1482cc180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent @ 1482cc200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation @ 1482cc280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation @ 1482cc300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection @ 1482cc380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection.
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

// NewProp_bOverrideSimProxyRepMode_SetBit @ 1482cc400

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bFocalParticleInPhysicsReplicationLOD_SetBit @ 1482cc410

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::
NewProp_bFocalParticleInPhysicsReplicationLOD_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 1482cc420

void * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettings,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettings>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettings>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettings>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPhysicsHandleComponent @ 1482cc460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsHandleComponent(void)

{
  if (Z_Registration_Info_UClass_UPhysicsHandleComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsHandleComponent.OuterSingleton,
               &Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsHandleComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent @ 1482cc560

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideMaxLinearHardSnapDistance_SetBit @ 1482cc5e0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bOverrideMaxLinearHardSnapDistance_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bOverrideDefaultLegacyHardsnapInPT_SetBit @ 1482cc5f0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bOverrideDefaultLegacyHardsnapInPT_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation @ 1482cc600

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideCorrectConnectedBodies_SetBit @ 1482cc640

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bOverrideCorrectConnectedBodies_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit @ 1482cc650

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bHardsnapInPhysicsThread_SetBit @ 1482cc660

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bHardsnapInPhysicsThread_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bCorrectConnectedBodies_SetBit @ 1482cc670

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bCorrectConnectedBodies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bCorrectConnectedBodiesFriction_SetBit @ 1482cc680

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::
NewProp_bCorrectConnectedBodiesFriction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewStructOps @ 1482cc690

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettingsDefaultReplication,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettingsDefaultReplication>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettingsDefaultReplication>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettingsDefaultReplication>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettingsDefaultReplication>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bConstrainRotation_SetBit @ 1482cc710

void __cdecl
Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::
NewProp_bConstrainRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_UPhysicsCollisionHandler @ 1482cc720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsCollisionHandler(void)

{
  if (Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton,
               &Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent @ 1482cc7e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation @ 1482cc980

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverridePosCorrectionTimeBase_SetBit @ 1482ccaa0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverridePosCorrectionTimeBase_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bOverridePosCorrectionTimeMin_SetBit @ 1482ccab0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverridePosCorrectionTimeMin_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bOverridePosCorrectionTimeMultiplier_SetBit @ 1482ccac0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverridePosCorrectionTimeMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bOverrideRotCorrectionTimeBase_SetBit @ 1482ccad0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideRotCorrectionTimeBase_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bOverrideRotCorrectionTimeMin_SetBit @ 1482ccae0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideRotCorrectionTimeMin_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit @ 1482ccaf0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
  return;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation @ 1482ccb00

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverridePosInterpolationTimeMultiplier_SetBit @ 1482ccb40

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverridePosInterpolationTimeMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return;
}

// NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit @ 1482ccb50

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x80;
  return;
}

// NewProp_bOverrideSoftSnapPosStrength_SetBit @ 1482ccb60

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideSoftSnapPosStrength_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x100;
  return;
}

// NewProp_bOverrideSoftSnapRotStrength_SetBit @ 1482ccb70

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideSoftSnapRotStrength_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x200;
  return;
}

// NewProp_bOverrideSoftSnapToSource_SetBit @ 1482ccb80

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideSoftSnapToSource_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x400;
  return;
}

// NewProp_bOverrideDisableSoftSnap_SetBit @ 1482ccb90

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideDisableSoftSnap_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x800;
  return;
}

// NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit @ 1482ccba0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  return;
}

// NewProp_bOverridePostResimWaitForUpdate_SetBit @ 1482ccbb0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverridePostResimWaitForUpdate_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x2000;
  return;
}

// NewProp_bOverrideCorrectConnectedBodies_SetBit @ 1482ccbc0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideCorrectConnectedBodies_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x4000;
  return;
}

// NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit @ 1482ccbd0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x8000;
  return;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent @ 1482ccbe0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSoftSnapToSource_SetBit @ 1482ccc20

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bSoftSnapToSource_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bDisableSoftSnap_SetBit @ 1482ccc30

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bDisableSoftSnap_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit @ 1482ccc40

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bPostResimWaitForUpdate_SetBit @ 1482ccc50

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bPostResimWaitForUpdate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// NewProp_bCorrectConnectedBodies_SetBit @ 1482ccc60

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bCorrectConnectedBodies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bCorrectConnectedBodiesFriction_SetBit @ 1482ccc70

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::
NewProp_bCorrectConnectedBodiesFriction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 1482ccc80

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettingsPredictiveInterpolation,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettingsPredictiveInterpolation>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettingsPredictiveInterpolation>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettingsPredictiveInterpolation>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettingsPredictiveInterpolation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping @ 1482cccc0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness @ 1482ccd00

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URadialForceComponent @ 1482ccd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URadialForceComponent(void)

{
  if (Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton,
               &Z_Construct_UClass_URadialForceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed @ 1482ccd80

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect @ 1482ccdc0

UFunction * __cdecl Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping @ 1482cce00

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialForceComponent_FireImpulse @ 1482cce40

UFunction * __cdecl Z_Construct_UFunction_URadialForceComponent_FireImpulse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness @ 1482ccec0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect @ 1482ccf10

UFunction * __cdecl Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation @ 1482cd050

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bImpulseVelChange_SetBit @ 1482cd090

void __cdecl
Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x25c) = *(uint *)((longlong)param_1 + 0x25c) | 1;
  return;
}

// NewProp_bIgnoreOwningActor_SetBit @ 1482cd0a0

void __cdecl
Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x25c) = *(uint *)((longlong)param_1 + 0x25c) | 2;
  return;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation @ 1482cd0f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideResimErrorInterpolationSettings_SetBit @ 1482cd1f0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection_Statics::
NewProp_bOverrideResimErrorInterpolationSettings_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bRenderInterpApplyExponentialDecay_SetBit @ 1482cd200

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection_Statics::
NewProp_bRenderInterpApplyExponentialDecay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 1482cd210

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettingsResimulationErrorCorrection,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettingsResimulationErrorCorrection>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettingsResimulationErrorCorrection>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettingsResimulationErrorCorrection>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettingsResimulationErrorCorrection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation @ 1482cd250

UFunction * __cdecl Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSoftAngularConstraint_SetBit @ 1482cd370

void __cdecl
Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd0) = *(uint *)((longlong)param_1 + 0xd0) | 2;
  return;
}

// NewProp_bSoftLinearConstraint_SetBit @ 1482cd380

void __cdecl
Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd0) = *(uint *)((longlong)param_1 + 0xd0) | 4;
  return;
}

// NewProp_bInterpolateTarget_SetBit @ 1482cd390

void __cdecl
Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd0) = *(uint *)((longlong)param_1 + 0xd0) | 8;
  return;
}

// NewProp_bOverrideResimulationErrorPositionThreshold_SetBit @ 1482cd400

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideResimulationErrorPositionThreshold_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bOverrideResimulationErrorRotationThreshold_SetBit @ 1482cd410

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideResimulationErrorRotationThreshold_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bOverrideResimulationErrorLinearVelocityThreshold_SetBit @ 1482cd420

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideResimulationErrorLinearVelocityThreshold_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bOverrideResimulationErrorAngularVelocityThreshold_SetBit @ 1482cd430

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideResimulationErrorAngularVelocityThreshold_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bOverrideRuntimeCorrectionEnabled_SetBit @ 1482cd440

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideRuntimeCorrectionEnabled_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewProp_bOverrideRuntimeVelocityCorrection_SetBit @ 1482cd450

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideRuntimeVelocityCorrection_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
  return;
}

// NewProp_bOverrideRuntimeCorrectConnectedBodies_SetBit @ 1482cd460

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideRuntimeCorrectConnectedBodies_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return;
}

// NewProp_bOverridePosStabilityMultiplier_SetBit @ 1482cd470

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverridePosStabilityMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x80;
  return;
}

// NewProp_bOverrideRotStabilityMultiplier_SetBit @ 1482cd480

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideRotStabilityMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x100;
  return;
}

// NewProp_bOverrideVelStabilityMultiplier_SetBit @ 1482cd490

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideVelStabilityMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x200;
  return;
}

// NewProp_bOverrideAngVelStabilityMultiplier_SetBit @ 1482cd4a0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideAngVelStabilityMultiplier_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x400;
  return;
}

// NewProp_bOverrideResimulationErrorThreshold_SetBit @ 1482cd4b0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bOverrideResimulationErrorThreshold_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x800;
  return;
}

// NewProp_bRuntimeCorrectionEnabled_SetBit @ 1482cd4c0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bRuntimeCorrectionEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bRuntimeVelocityCorrection_SetBit @ 1482cd4d0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bRuntimeVelocityCorrection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bRuntimeCorrectConnectedBodies_SetBit @ 1482cd4e0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::
NewProp_bRuntimeCorrectConnectedBodies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewStructOps @ 1482cd4f0

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x54;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettingsResimulation,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettingsResimulation>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettingsResimulation>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettingsResimulation>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettingsResimulation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideRedundantInputs_SetBit @ 1482cd9f0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideRedundantInputs_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bOverrideRedundantRemoteInputs_SetBit @ 1482cda00

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideRedundantRemoteInputs_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bOverrideRedundantStates_SetBit @ 1482cdad0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideRedundantStates_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bOverrideCompareStateToTriggerRewind_SetBit @ 1482cdae0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideCompareStateToTriggerRewind_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bOverridebCompareStateToTriggerRewindIncludeSimProxies_SetBit @ 1482cdaf0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverridebCompareStateToTriggerRewindIncludeSimProxies_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewProp_bOverrideCompareInputToTriggerRewind_SetBit @ 1482cdb00

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideCompareInputToTriggerRewind_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
  return;
}

// NewProp_bOverrideEnableUnreliableFlow_SetBit @ 1482cdb10

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideEnableUnreliableFlow_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return;
}

// NewProp_bOverrideEnableReliableFlow_SetBit @ 1482cdb20

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideEnableReliableFlow_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x80;
  return;
}

// NewProp_bOverrideApplyDataInsteadOfMergeData_SetBit @ 1482cdb50

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideApplyDataInsteadOfMergeData_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x100;
  return;
}

// NewProp_bOverrideAllowInputExtrapolation_SetBit @ 1482cdb80

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideAllowInputExtrapolation_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x200;
  return;
}

// NewProp_bOverrideValidateDataOnGameThread_SetBit @ 1482cdb90

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideValidateDataOnGameThread_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x400;
  return;
}

// NewProp_bOverrideApplySimProxyStateAtRuntime_SetBit @ 1482cdbc0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideApplySimProxyStateAtRuntime_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x800;
  return;
}

// NewProp_bOverrideApplySimProxyInputAtRuntime_SetBit @ 1482cdbd0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideApplySimProxyInputAtRuntime_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  return;
}

// NewProp_bOverrideTriggerResimOnInputReceive_SetBit @ 1482cdbe0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideTriggerResimOnInputReceive_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x2000;
  return;
}

// NewProp_bOverrideApplyInputDecayOverSetTime_SetBit @ 1482cdbf0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideApplyInputDecayOverSetTime_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x4000;
  return;
}

// NewProp_bOverrideInputDecaySetTime_SetBit @ 1482cdc00

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bOverrideInputDecaySetTime_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x8000;
  return;
}

// NewProp_bCompareStateToTriggerRewind_SetBit @ 1482cdc90

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bCompareStateToTriggerRewind_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bCompareStateToTriggerRewindIncludeSimProxies_SetBit @ 1482cdca0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bCompareStateToTriggerRewindIncludeSimProxies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// NewProp_bCompareInputToTriggerRewind_SetBit @ 1482cdcb0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bCompareInputToTriggerRewind_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bEnableUnreliableFlow_SetBit @ 1482cdcc0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bEnableUnreliableFlow_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bEnableReliableFlow_SetBit @ 1482cdd20

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bEnableReliableFlow_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_bApplyDataInsteadOfMergeData_SetBit @ 1482cdd30

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bApplyDataInsteadOfMergeData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  return;
}

// NewProp_bAllowInputExtrapolation_SetBit @ 1482cdd40

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bAllowInputExtrapolation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bValidateDataOnGameThread_SetBit @ 1482cdd60

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bValidateDataOnGameThread_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplySimProxyStateAtRuntime_SetBit @ 1482cdd70

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bApplySimProxyStateAtRuntime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bApplySimProxyInputAtRuntime_SetBit @ 1482cdd80

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bApplySimProxyInputAtRuntime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_bTriggerResimOnInputReceive_SetBit @ 1482cdd90

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bTriggerResimOnInputReceive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bApplyInputDecayOverSetTime_SetBit @ 1482cdda0

void __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::
NewProp_bApplyInputDecayOverSetTime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewStructOps @ 1482cddb0

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettingsNetworkPhysicsComponent,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettingsNetworkPhysicsComponent>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettingsNetworkPhysicsComponent>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettingsNetworkPhysicsComponent>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettingsNetworkPhysicsComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister @ 1482cddf0

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsComponent",
               &Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton,
               UNetworkPhysicsComponent::StaticRegisterNativesUNetworkPhysicsComponent,600,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkPhysicsComponent>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister @ 1482cdeb0

UClass * __cdecl Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintComponent",
               &Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton,
               UPhysicsConstraintComponent::StaticRegisterNativesUPhysicsConstraintComponent,0x560,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsConstraintComponent>,
               InternalVTableHelperCtorCaller<UPhysicsConstraintComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton;
}

// NewStructOps @ 1482ce100

void * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x148;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsSettingsData,&UE::CoreUObject::Private::Construct<FNetworkPhysicsSettingsData>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsSettingsData>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsSettingsData>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsSettingsData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_NoRegister @ 1482ce140

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSettingsDataAsset",
               &Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton,
               UNetworkPhysicsSettingsDataAsset::
               StaticRegisterNativesUNetworkPhysicsSettingsDataAsset,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkPhysicsSettingsDataAsset>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton;
}

// Z_Construct_UClass_APhysicsConstraintActor @ 1482ce400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APhysicsConstraintActor(void)

{
  if (Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton,
               &Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton;
}

// Z_Construct_UClass_UNetworkPhysicsComponent @ 1482ce440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsComponent(void)

{
  if (Z_Registration_Info_UClass_UNetworkPhysicsComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkPhysicsComponent.OuterSingleton,
               &Z_Construct_UClass_UNetworkPhysicsComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsComponent.OuterSingleton;
}

// Z_Construct_UClass_UNetworkPhysicsSystem @ 1482ce480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsSystem(void)

{
  if (Z_Registration_Info_UClass_UNetworkPhysicsSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkPhysicsSystem.OuterSingleton,
               &Z_Construct_UClass_UNetworkPhysicsSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection @ 1482ce4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsPayload @ 1482ce540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsPayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsPayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy @ 1482ce5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy @ 1482ce640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy.
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

// NewProp_bDisableCollision_SetBit @ 1482ce6c0

void __cdecl
Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2d8) = *(uint *)((longlong)param_1 + 0x2d8) | 1;
  return;
}

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy @ 1482ce6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy @ 1482ce750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy @ 1482ce7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataInputProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataInputProxy.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataInputProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataInputProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy @ 1482ce850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy @ 1482ce8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy.
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

// Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy @ 1482ce950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataStateProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataStateProxy.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataStateProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataStateProxy.InnerSingleton;
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

// NewStructOps @ 1482ce9d0

void * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNetworkPhysicsSettingsComponent_OnComponentPhysicsStateChanged @ 1482ceb60

UFunction * __cdecl
Z_Construct_UFunction_UNetworkPhysicsSettingsComponent_OnComponentPhysicsStateChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetworkPhysicsSettingsComponent_OnComponentPhysicsStateChanged_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1482cebe0

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataInputProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataInputProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataInputProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataInputProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataInputProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataInputProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataInputProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482cec60

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataRemoteInputProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataRemoteInputProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataRemoteInputProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataRemoteInputProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataRemoteInputProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataRemoteInputProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataRemoteInputProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482ceda0

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataStateProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataStateProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataStateProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataStateProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataStateProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataStateProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataStateProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482cee20

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataImportantInputProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataImportantInputProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataImportantInputProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataImportantInputProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataImportantInputProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataImportantInputProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataImportantInputProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482cf070

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataImportantStateProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataImportantStateProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataImportantStateProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataImportantStateProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataImportantStateProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataImportantStateProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataImportantStateProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482cf160

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataDeltaSourceStateProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataDeltaSourceStateProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataDeltaSourceStateProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataDeltaSourceStateProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataDeltaSourceStateProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataDeltaSourceStateProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataDeltaSourceStateProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPhysicsAsset @ 1482cf1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsAsset(void)

{
  if (Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton,
               &Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EPhysicsAssetSolverType @ 1482cf220

UEnum * __cdecl Z_Construct_UEnum_Engine_EPhysicsAssetSolverType(void)

{
  if (Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton;
}

// NewStructOps @ 1482cf260

void * __cdecl
Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsRewindDataDeltaSourceInputProxy,&UE::CoreUObject::Private::Construct<FNetworkPhysicsRewindDataDeltaSourceInputProxy>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsRewindDataDeltaSourceInputProxy>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsRewindDataDeltaSourceInputProxy>,&UE::CoreUObject::Private::NetSerialize<FNetworkPhysicsRewindDataDeltaSourceInputProxy>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsRewindDataDeltaSourceInputProxy>,&UE::CoreUObject::Private::Identical<FNetworkPhysicsRewindDataDeltaSourceInputProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings @ 1482cf2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSolverIterations @ 1482cf320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSolverIterations(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSolverIterations.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSolverIterations.InnerSingleton,
               &Z_Construct_UScriptStruct_FSolverIterations_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSolverIterations.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSolverIterations.InnerSingleton;
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

// NewProp_bUseLinearJointSolver_SetBit @ 1482cf3a0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bUseManifolds_SetBit @ 1482cf3b0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseManifolds_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 1482cf3c0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsAssetSolverSettings,&UE::CoreUObject::Private::Construct<FPhysicsAssetSolverSettings>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsAssetSolverSettings>,&UE::CoreUObject::Private::Destruct<FPhysicsAssetSolverSettings>,&UE::CoreUObject::Private::Copy<FPhysicsAssetSolverSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPhysicsConstraintComponent @ 1482cf440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsConstraintComponent(void)

{
  if (Z_Registration_Info_UClass_UPhysicsConstraintComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsConstraintComponent.OuterSingleton,
               &Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint @ 1482cf480

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents @ 1482cf5c0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1482cf600

void * __cdecl Z_Construct_UScriptStruct_FSolverIterations_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSolverIterations,&UE::CoreUObject::Private::Construct<FSolverIterations>,&UE::CoreUObject::Private::ConstructForTests<FSolverIterations>,&UE::CoreUObject::Private::Destruct<FSolverIterations>,&UE::CoreUObject::Private::Copy<FSolverIterations>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482cf640

void * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsPayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsPayload,&UE::CoreUObject::Private::Construct<FNetworkPhysicsPayload>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsPayload>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsPayload>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsPayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1482cf680

void * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkPhysicsDataCollection,&UE::CoreUObject::Private::Construct<FNetworkPhysicsDataCollection>,&UE::CoreUObject::Private::ConstructForTests<FNetworkPhysicsDataCollection>,&UE::CoreUObject::Private::Destruct<FNetworkPhysicsDataCollection>,&UE::CoreUObject::Private::Copy<FNetworkPhysicsDataCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint @ 1482cf6f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EPhysicsAssetSolverType_StaticEnum @ 1482cf770

UEnum * __cdecl EPhysicsAssetSolverType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType,(UObject *)pUVar1,
                       L"EPhysicsAssetSolverType");
  }
  return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 1482cf7b0

bool __cdecl
<lambda_26>::<lambda_invoker_cdecl>
          (TVector<double> *param_1,TVector<double> *param_2,int param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar9 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar10 = (param_2->field0_0x0)._s_0.Z - dVar2;
  dVar7 = dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
          dVar8 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
          dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if ((((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000) ||
      (dVar7 = ((param_1->field0_0x0)._s_0.X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X
                + dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
               dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) / dVar7,
      dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000),
      dVar7 <= 0.0)) || (__real_3ff0000000000000 < dVar7)) {
    bVar6 = false;
  }
  else {
    (param_4->field0_0x0)._s_0.X = dVar8 * dVar7 + (param_1->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar9 * dVar7 + dVar1;
    (param_4->field0_0x0)._s_0.Z = dVar10 * dVar7 + dVar2;
    (param_5->field0_0x0)._s_0.X = (double)uVar3;
    (param_5->field0_0x0)._s_0.Y = (double)uVar4;
    (param_5->field0_0x0)._s_0.Z = (double)uVar5;
    bVar6 = true;
  }
  return bVar6;
}

// operator<<<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator> @ 1482cf990

FArchive * __cdecl
operator<<<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
          *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  operator<<<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) != 0) ||
     (((param_1->field_0x2b & 2) != 0 && ((param_1->field_0x28 & 4) == 0)))) {
    if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
    }
    param_2->HashSize = 0;
    uVar4 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((0 < (int)uVar4) && (0 < iVar3)) {
      param_2->HashSize = iVar3;
      TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}

// operator<<<FRigidBodyIndexPair,bool> @ 1482cfa30

FArchive * __cdecl
operator<<<FRigidBodyIndexPair,bool>(FArchive *param_1,TTuple<FRigidBodyIndexPair,bool> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
    }
  }
  else {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,(bool *)&param_2->field_0x8);
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1482cfaf0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<FRigidBodyIndexPair,bool> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<FRigidBodyIndexPair,bool> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x14,(longlong)*(int *)&param_2->field_0xc * 0x14);
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
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1482cfdec;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_1482cfdec:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<FRigidBodyIndexPair,bool>
                  (param_1,(TTuple<FRigidBodyIndexPair,bool> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x14));
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
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FRigidBodyIndexPair,bool> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x14,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x14);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x14) = 0xffffffff;
          }
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<FRigidBodyIndexPair,bool> *)0x0;
        if (local_78.Pointer != (TTuple<FRigidBodyIndexPair,bool> *)0x0) {
          *(undefined1 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0xc) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<FRigidBodyIndexPair,bool>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FRigidBodyIndexPair,bool> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// AddLambda<`InitGamePhys'::__l2::<lambda_1>_> @ 1482cff90

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_InitGamePhys_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`InitGamePhys'::`2'::<lambda_1>_>
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

// AddLambda<`InitGamePhys'::__l2::<lambda_2>_> @ 1482d01c0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_InitGamePhys_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`InitGamePhys'::`2'::<lambda_2>_>
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

// ConstructItems<TInstancedStruct<FNetworkPhysicsPayload>,TInstancedStruct<FNetworkPhysicsPayload>,int> @ 1482d1150

void __cdecl
ConstructItems<TInstancedStruct<FNetworkPhysicsPayload>,TInstancedStruct<FNetworkPhysicsPayload>,int>
          (void *param_1,TInstancedStruct<FNetworkPhysicsPayload> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      (((FInstancedStruct *)param_1)->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      ((FInstancedStruct *)param_1)->StructMemory = (uchar *)0x0;
      FInstancedStruct::InitializeAs
                (param_1,*(UScriptStruct **)(lVar1 + (longlong)param_1),
                 *(uchar **)(lVar1 + 8 + (longlong)param_1));
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TInstancedStruct<FNetworkPhysicsPayload>,int> @ 1482d1350

void __cdecl
DefaultConstructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::FInstancedStruct(param_1);
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FRigidBodyState,int> @ 1482d1390

void __cdecl DefaultConstructItems<FRigidBodyState,int>(void *param_1,int param_2)

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
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSimpleSuspensionSpringParams,int> @ 1482d1400

void __cdecl DefaultConstructItems<FSimpleSuspensionSpringParams,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int> @ 1482d14f0

void __cdecl
DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
          (TInstancedStruct<FNetworkPhysicsPayload> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::Reset(&param_1->InstancedStruct);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FReplicatedPhysicsTarget,int> @ 1482d1530

void __cdecl
DestructItems<FReplicatedPhysicsTarget,int>(FReplicatedPhysicsTarget *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FDebugFloatHistory *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ErrorHistory;
    do {
      pFVar1 = (pFVar2->Samples).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FAsyncNetworkPhysicsComponentInput,TDefaultDelete<FAsyncNetworkPhysicsComponentInput>_>,int> @ 1482d1580

void __cdecl
DestructItems<TUniquePtr<FAsyncNetworkPhysicsComponentInput,TDefaultDelete<FAsyncNetworkPhysicsComponentInput>_>,int>
          (TUniquePtr<FAsyncNetworkPhysicsComponentInput,TDefaultDelete<FAsyncNetworkPhysicsComponentInput>_>
           *param_1,int param_2)

{
  FAsyncNetworkPhysicsComponentInput *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FAsyncNetworkPhysicsComponentInput *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>,int> @ 1482d15c0

void __cdecl
DestructItems<TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>,int>
          (TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>
           *param_1,int param_2)

{
  FAsyncNetworkPhysicsComponentOutput *pFVar1;
  FScriptContainerElement *pFVar2;
  FBaseRewindHistory *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FAsyncNetworkPhysicsComponentOutput *)0x0) {
      DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar1->StateDataImportant).AllocatorInstance.Data,
                 (pFVar1->StateDataImportant).ArrayNum);
      pFVar2 = (pFVar1->StateDataImportant).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar1->InputDataImportant).AllocatorInstance.Data,
                 (pFVar1->InputDataImportant).ArrayNum);
      pFVar2 = (pFVar1->InputDataImportant).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = (pFVar1->StateData).Ptr;
      if (pFVar3 != (FBaseRewindHistory *)0x0) {
        (**(code **)*pFVar3)(pFVar3,1);
      }
      pFVar3 = (pFVar1->InputData).Ptr;
      if (pFVar3 != (FBaseRewindHistory *)0x0) {
        (**(code **)*pFVar3)(pFVar3,1);
      }
      operator_delete(pFVar1,0x40);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int> @ 1482d1670

void __cdecl
DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
          (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *param_1
          ,int param_2)

{
  FBaseRewindHistory *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FBaseRewindHistory *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_>,int> @ 1482d16b0

void __cdecl
DestructItems<TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_>,int>
          (TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_> *param_1,int param_2
          )

{
  FNetworkPhysicsData *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FNetworkPhysicsData *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FNetworkPhysicsSettingsAsyncInput,TDefaultDelete<FNetworkPhysicsSettingsAsyncInput>_>,int> @ 1482d16f0

void __cdecl
DestructItems<TUniquePtr<FNetworkPhysicsSettingsAsyncInput,TDefaultDelete<FNetworkPhysicsSettingsAsyncInput>_>,int>
          (TUniquePtr<FNetworkPhysicsSettingsAsyncInput,TDefaultDelete<FNetworkPhysicsSettingsAsyncInput>_>
           *param_1,int param_2)

{
  FNetworkPhysicsSettingsAsyncInput *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FNetworkPhysicsSettingsAsyncInput *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FPhysicsReplicationAsyncInput,TDefaultDelete<FPhysicsReplicationAsyncInput>_>,int> @ 1482d1730

void __cdecl
DestructItems<TUniquePtr<FPhysicsReplicationAsyncInput,TDefaultDelete<FPhysicsReplicationAsyncInput>_>,int>
          (TUniquePtr<FPhysicsReplicationAsyncInput,TDefaultDelete<FPhysicsReplicationAsyncInput>_>
           *param_1,int param_2)

{
  FPhysicsReplicationAsyncInput *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPhysicsReplicationAsyncInput *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FPhysicsReplicationCacheAsyncInput,TDefaultDelete<FPhysicsReplicationCacheAsyncInput>_>,int> @ 1482d1770

void __cdecl
DestructItems<TUniquePtr<FPhysicsReplicationCacheAsyncInput,TDefaultDelete<FPhysicsReplicationCacheAsyncInput>_>,int>
          (TUniquePtr<FPhysicsReplicationCacheAsyncInput,TDefaultDelete<FPhysicsReplicationCacheAsyncInput>_>
           *param_1,int param_2)

{
  FPhysicsReplicationCacheAsyncInput *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPhysicsReplicationCacheAsyncInput *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>,int> @ 1482d17b0

void __cdecl
DestructItems<TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>,int>
          (TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>
           *param_1,int param_2)

{
  FPhysicsReplicationCacheAsyncOutput *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPhysicsReplicationCacheAsyncOutput *)0x0) {
      pFVar2 = (pFVar1->ReplicationCache_Value_Marshal).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->ReplicationCache_Key_Marshal).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x30);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FPhysicsReplicationLODAsyncInput,TDefaultDelete<FPhysicsReplicationLODAsyncInput>_>,int> @ 1482d1820

void __cdecl
DestructItems<TUniquePtr<FPhysicsReplicationLODAsyncInput,TDefaultDelete<FPhysicsReplicationLODAsyncInput>_>,int>
          (TUniquePtr<FPhysicsReplicationLODAsyncInput,TDefaultDelete<FPhysicsReplicationLODAsyncInput>_>
           *param_1,int param_2)

{
  FPhysicsReplicationLODAsyncInput *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPhysicsReplicationLODAsyncInput *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::TSTR_FKAggregateGeomFreeRenderInfo1439>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1482d2fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FKAggregateGeom::FreeRenderInfo_::__l5::<lambda_2>::operator()_::__l2::TSTR_FKAggregateGeomFreeRenderInfo1439>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  FRenderCommandTag *pFVar16;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar17;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar19;
  FTaskBase *this_02;
  FName FVar20;
  FNameEntryId FVar21;
  FNameEntryId FVar22;
  uint local_res10;
  uint uStackX_14;
  ETaskPriority local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar16 = (FRenderCommandTag *)
            TRenderCommandTag<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::TSTR_FKAggregateGeomFreeRenderInfo1439>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar16->SpecId,pFVar16->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar16->SpecId);
  }
  bVar14 = IsInRenderingThread();
  if ((!bVar14) && ((GIsThreadedRendering != false || (bVar14 = IsInGameThread(), !bVar14)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar14 = IsInGameThread(), bVar14 &&
        (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar14)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
        ;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar16;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar9 = param_1->field_0x2c;
      uVar10 = param_1->field_0x2d;
      uVar11 = *(undefined2 *)&param_1->field_0x2e;
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_1->field_0x28;
      this_02[1].ExtendedPriority = uVar9;
      this_02[1].TaskTriggered = (atomic<bool>)uVar10;
      this_02[1]._padding_ = uVar11;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar12 = *(undefined4 *)&param_1->field_0x18;
      uVar13 = *(undefined4 *)&param_1->field_0x1c;
      this_02[1]._padding_ = *(longlong *)&param_1->field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar12;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar13;
      this_02[1].Pipe = *(FPipe **)&param_1->field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,
                 (EExtendedTaskPriority *)&local_res10);
      UE::Tasks::Private::FTaskBase::Init
                (this_02,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res10,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar16);
    }
    goto LAB_1482d33f8;
  }
  pTVar4 = (pFVar16->StatId).StatIdPtr;
  FVar22.Value = 0;
  bVar14 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar20 = *(FName *)&pTVar4->Name;
  FVar21 = FVar20.ComparisonIndex.Value;
  uVar15 = FVar20.Number;
  if ((FVar21.Value == 0) && (uVar15 == 0)) {
LAB_1482d32e2:
    bVar6 = false;
    FVar20 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar14 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar21.Value;
        local_68.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar14 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1482d32e2;
    local_res10 = FVar21.Value;
    uStackX_14 = uVar15;
    local_58 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
    FVar22.Value = local_58.ComparisonIndex.Value;
  }
  pFVar17 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  plVar19 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar19 = *(longlong **)&param_1->field_0x28;
  }
  uVar18 = (**(code **)(*plVar19 + 8))();
  (*pcVar5)(uVar18,pFVar17);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar22.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1482d33f8:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UMovementComponent,1,1,`AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1482d3760

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
ForEachComponent_Internal<UMovementComponent,1,1,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UMovementComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UMovementComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1482d3883;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1482d3883:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1482d391d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_1482d391d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_1482d3a20;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_1482d3a20:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UMovementComponent,1,1,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UMovementComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UMovementComponent *)0x0) {
      `AActor::
      GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[2]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UMovementComponent,1,0,`AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1482d3c90

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
ForEachComponent_Internal<UMovementComponent,1,0,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UMovementComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UMovementComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UMovementComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1482d3d96;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1482d3d96:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1482d3e1d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1482d3e1d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1482d3f21;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_1482d3f21:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UMovementComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UMovementComponent *)0x0) {
      `AActor::
      GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UMovementComponent,0,1,`AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1482d3fa0

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
ForEachComponent_Internal<UMovementComponent,0,1,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UMovementComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
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
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UMovementComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_1482d4093;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1482d4093:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_1482d4140;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_1482d4140:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_1482d4250;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_1482d4250:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UMovementComponent,0,1,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UMovementComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UMovementComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[2]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UMovementComponent,0,0,`AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1482d44e0

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
ForEachComponent_Internal<UMovementComponent,0,0,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UMovementComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UMovementComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UMovementComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_1482d45be;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_1482d45be:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1482d464f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_1482d464f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_1482d4760;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_1482d4760:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UMovementComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UMovementComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalConstructor<APhysicsConstraintActor> @ 1482d49e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APhysicsConstraintActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  void *pvVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
    uVar6 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7APhysicsConstraintActor__6B_;
    pvVar2 = ThreadLocalStoragePointer;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar6 * 8) + 0x9d4c) < _TSS0) {
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
        atexit(`APhysicsConstraintActor::APhysicsConstraintActor'::__l2::
               _dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
      }
    }
    pFVar3 = FName::FName(&local_res8,L"MyConstraintComp");
    FVar1 = *pFVar3;
    pUVar4 = UPhysicsConstraintComponent::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    AActor::SetHidden(this,true);
  }
  return;
}

// InternalConstructor<APhysicsThruster> @ 1482d4b70

void __cdecl InternalConstructor<APhysicsThruster>(FObjectInitializer *param_1)

{
  ARigidBodyBase *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (ARigidBodyBase *)param_1->Obj;
  if (this != (ARigidBodyBase *)0x0) {
    ARigidBodyBase::ARigidBodyBase(this,param_1);
    *(undefined ***)this = &___7APhysicsThruster__6B_;
    *(undefined8 *)(this + 1) = 0;
    pFVar2 = FName::FName(&local_res8,L"Thruster0");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)(this + 1) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(undefined8 *)&this->field_0x1b8 = *(undefined8 *)(this + 1);
  }
  return;
}

// InternalConstructor<UNetworkPhysicsComponent> @ 1482d4c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UNetworkPhysicsComponent>(FObjectInitializer *param_1)

{
  UNetworkPhysicsComponent *this;
  undefined8 uStackX_8;
  
  this = (UNetworkPhysicsComponent *)param_1->Obj;
  if (this != (UNetworkPhysicsComponent *)0x0) {
    UActorComponent::UActorComponent((UActorComponent *)this,param_1);
    this->InputsToNetwork_Owner = 3;
    this->InputsToNetwork_OwnerDefault = 3;
    this->ImplementationInterface_Internal = (INetworkPhysicsInputState_Internal *)0x0;
    this->_padding_ = (longlong)&UNetworkPhysicsComponent::_vftable__for__UObject__;
    *(undefined8 *)&this->ReplicatedDeltaSourceInput = 0;
    this->_padding_ = (longlong)&UNetworkPhysicsComponent::_vftable__for__IInterface_AssetUserData__
    ;
    *(undefined8 *)&(this->ReplicatedDeltaSourceInput).field_0x8 = 0;
    this->_padding_ =
         (longlong)&UNetworkPhysicsComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    (this->ReplicatedDeltaSourceInput).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedDeltaSourceState = 0;
    *(undefined8 *)&(this->ReplicatedDeltaSourceState).field_0x8 = 0;
    (this->ReplicatedDeltaSourceState).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedImportantInput = 0;
    *(undefined8 *)&(this->ReplicatedImportantInput).field_0x8 = 0;
    (this->ReplicatedImportantInput).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedImportantState = 0;
    *(undefined8 *)&(this->ReplicatedImportantState).field_0x8 = 0;
    (this->ReplicatedImportantState).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedInputs = 0;
    *(undefined8 *)&(this->ReplicatedInputs).field_0x8 = 0;
    (this->ReplicatedInputs).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedRemoteInputs = 0;
    *(undefined8 *)&(this->ReplicatedRemoteInputs).field_0x8 = 0;
    (this->ReplicatedRemoteInputs).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedStates = 0;
    *(undefined8 *)&(this->ReplicatedStates).field_0x8 = 0;
    (this->ReplicatedStates).field_0x10 = 0;
    (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ReplicatedInputCollection).DataArray.ArrayNum = 0;
    (this->ReplicatedInputCollection).DataArray.ArrayMax = 0;
    (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum = 0;
    (this->ReplicatedRemoteInputCollection).DataArray.ArrayMax = 0;
    (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ReplicatedStateCollection).DataArray.ArrayNum = 0;
    (this->ReplicatedStateCollection).DataArray.ArrayMax = 0;
    this->ImplementationInterface_External = (INetworkPhysicsInputState_External *)0x0;
    this->bIsUsingLegacyData = false;
    (this->StateHistory).Object = (FBaseRewindHistory *)0x0;
    (this->StateHistory).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->InputHistory).Object = (FBaseRewindHistory *)0x0;
    (this->InputHistory).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->InputHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
    (this->StateHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
    (this->InputDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
    (this->StateDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
    this->InputsToNetwork_Simulated = 2;
    this->StatesToNetwork = 1;
    (this->DeltaSourceInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeltaSourceInputs).ArrayNum = 0;
    (this->DeltaSourceInputs).ArrayMax = 0;
    this->LatestAcknowledgedDeltaSourceInputIndex = 0;
    this->LatestCachedDeltaSourceInputIndex = 0;
    this->TimeToSyncDeltaSourceInput = 0.0;
    (this->DeltaSourceStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeltaSourceStates).ArrayNum = 0;
    (this->DeltaSourceStates).ArrayMax = 0;
    this->LatestAcknowledgedDeltaSourceStateIndex = 0;
    this->LatestCachedDeltaSourceStateIndex = 0;
    this->TimeToSyncDeltaSourceState = 0.0;
    (this->ActorComponent).WeakPtr = (FWeakObjectPtr)0x0;
    uStackX_8 = 0;
    FWeakObjectPtr::operator=(&(this->ActorComponent).WeakPtr,(FObjectPtr)&uStackX_8);
    this->PhysicsObject = (FPhysicsObject *)0x0;
    this->bIsRelayingLocalInputs = false;
    this->bStopRelayingLocalInputsDeferred = false;
    this->bCompareStateToTriggerRewind = false;
    this->bCompareStateToTriggerRewindIncludeSimProxies = false;
    this->bCompareInputToTriggerRewind = false;
    this->bEnableUnreliableFlow = true;
    this->bEnableReliableFlow = false;
    this->bValidateDataOnGameThread = false;
    UNetworkPhysicsComponent::InitPhysics(this);
  }
  return;
}

// InternalConstructor<UNetworkPhysicsSettingsComponent> @ 1482d4c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UNetworkPhysicsSettingsComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  FObjectInitializer *pFVar1;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar1);
    this->bWantsInitializeComponent = '\x01';
    this->bAutoActivate = '\x01';
    this->_padding_ = (longlong)&UNetworkPhysicsSettingsComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNetworkPhysicsSettingsComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNetworkPhysicsSettingsComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNetworkPhysicsSettingsDataAsset> @ 1482d4cb0

void __cdecl InternalConstructor<UNetworkPhysicsSettingsDataAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNetworkPhysicsSettingsDataAsset__6B_;
    FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData
              ((FNetworkPhysicsSettingsData *)&this[1]._padding_);
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNetworkPhysicsSystem> @ 1482d4d00

void __cdecl InternalConstructor<UNetworkPhysicsSystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UNetworkPhysicsSystem__6B_;
  }
  return;
}

// InternalConstructor<UPhysicalAnimationComponent> @ 1482d4d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPhysicalAnimationComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->bWantsInitializeComponent = '\x01';
    this->_padding_ = (longlong)&UPhysicalAnimationComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPhysicalAnimationComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPhysicalAnimationComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&(this->PrimaryComponentTick)._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  }
  return;
}

// InternalConstructor<UPhysicalMaterialMask> @ 1482d4dc0

void __cdecl InternalConstructor<UPhysicalMaterialMask>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPhysicalMaterialMask__6B_;
    *(undefined4 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPhysicsAsset> @ 1482d4e00

void __cdecl InternalConstructor<UPhysicsAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[2].field_0x18 = 6;
    *(undefined ***)this = &UPhysicsAsset::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UPhysicsAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined ***)&this[1].field_0x8 = &UPhysicsAsset::_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x4 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x1c = 1;
    *(undefined4 *)&this[2].field_0x20 = 1;
    *(undefined8 *)&this[2].field_0x24 = 0x40400000;
    *(undefined2 *)&this[3].field_0x8 = 0x101;
    *(undefined4 *)&this[3].field_0xc = 3;
    *(undefined4 *)&this[3].field_0x10 = 2;
    *(undefined4 *)&this[3].field_0x14 = 2;
    *(undefined4 *)&this[3].field_0x18 = 1;
    *(undefined8 *)&this[3].field_0x1c = 1;
    *(undefined4 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x4 = 0x80;
    *(undefined4 *)&this[5].field_0xc = 0;
    *(undefined4 *)&this[5].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x4 = 0x80;
    *(undefined4 *)&this[7].field_0xc = 0;
    *(undefined4 *)&this[7].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x10 = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    this[3].field_0x24 = bUseRBANForDefaultPhysicsAssetSolverType == false;
  }
  return;
}

// InternalConstructor<UPhysicsBodyInstanceOwnerResolver> @ 1482d4f80

void __cdecl InternalConstructor<UPhysicsBodyInstanceOwnerResolver>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UPhysicsBodyInstanceOwnerResolver__6B_;
  }
  return;
}

// InternalConstructor<UPhysicsCollisionHandler> @ 1482d4fb0

void __cdecl InternalConstructor<UPhysicsCollisionHandler>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x4 = 0x3dcccccd;
    *(undefined ***)this = &___7UPhysicsCollisionHandler__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPhysicsConstraintComponent> @ 1482d4ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPhysicsConstraintComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UPhysicsConstraintComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPhysicsConstraintComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPhysicsConstraintComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FConstraintInstance::FConstraintInstance((FConstraintInstance *)&this[1]._padding_);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 | 1;
    *(undefined1 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPhysicsConstraintTemplate> @ 1482d50b0

void __cdecl InternalConstructor<UPhysicsConstraintTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPhysicsConstraintTemplate__6B_;
    FConstraintInstance::FConstraintInstance((FConstraintInstance *)(this + 1));
    *(undefined8 *)&this[0x11].field_0x20 = 0;
    *(undefined8 *)(this + 0x12) = 0;
    FConstraintProfileProperties::FConstraintProfileProperties
              ((FConstraintProfileProperties *)&this[0x12].field_0x8);
    return;
  }
  return;
}

// InternalConstructor<UPhysicsHandleComponent> @ 1482d5110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPhysicsHandleComponent>(FObjectInitializer *param_1)

{
  if ((UPhysicsHandleComponent *)param_1->Obj != (UPhysicsHandleComponent *)0x0) {
    UPhysicsHandleComponent::UPhysicsHandleComponent
              ((UPhysicsHandleComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPhysicsObjectBlueprintLibrary> @ 1482d5130

void __cdecl InternalConstructor<UPhysicsObjectBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPhysicsObjectBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPhysicsQueryHandler> @ 1482d5160

void __cdecl InternalConstructor<UPhysicsQueryHandler>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPhysicsQueryHandler__6B_;
  }
  return;
}

// InternalConstructor<UPhysicsSettings> @ 1482d5190

void __cdecl InternalConstructor<UPhysicsSettings>(FObjectInitializer *param_1)

{
  UPhysicsSettingsCore *this;
  
  this = (UPhysicsSettingsCore *)param_1->Obj;
  if (this != (UPhysicsSettingsCore *)0x0) {
    UPhysicsSettingsCore::UPhysicsSettingsCore(this,param_1);
    this[1].SolverOptions.CollisionCullDistance = 1e-08;
    *(undefined1 *)((longlong)&this[1].SolverOptions.VelocityIterations + 2) = 0;
    this->_padding_ = (longlong)&___7UPhysicsSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x447a0000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40a00000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    this[1].DefaultGravityZ = 0.75;
    this[1].DefaultTerminalVelocity = 0.25;
    this[1].DefaultFluidFriction = 0.8;
    this[1].SimulateScratchMemorySize = 0x3e19999a;
    this[1].RagdollAggregateThreshold = 0x3dcccccd;
    this[1].TriangleMeshTriangleMinAreaThreshold = 100.0;
    this[1].bEnableEnhancedDeterminism = false;
    this[1].bEnableShapeSharing = false;
    this[1].bEnablePCM = true;
    this[1].bEnableStabilization = true;
    this[1].bWarnMissingLocks = false;
    this[1].bEnable2DPhysics = false;
    this[1].bDefaultHasComplexCollision_DEPRECATED = true;
    this[1].field_0x57 = 0x3f;
    this[1].BounceThresholdVelocity = 1.0;
    this[1].FrictionCombineMode = '\0';
    this[1].RestitutionCombineMode = '\0';
    *(undefined2 *)&this[1].field_0x5e = 0x43c8;
    this[1].MaxAngularVelocity = 0.0;
    this[1].MaxDepenetrationVelocity = 0.4;
    this[1].ContactOffsetMultiplier = 100.0;
    this[1].MinContactOffset = 10.0;
    this[1].MaxContactOffset = 0.5;
    this[1].bSimulateSkeletalMeshOnDedicatedServer = false;
    this[1].DefaultShapeComplexity = '\0';
    *(undefined2 *)&this[1].field_0x76 = 0x4170;
    this[1].SolverOptions.PositionIterations = 0x42c80000;
    *(undefined1 *)&this[1].SolverOptions.VelocityIterations = 4;
    this[1].SolverOptions.CollisionFilterSettings.FilterEnabled = false;
    *(undefined3 *)&this[1].SolverOptions.CollisionFilterSettings.field_0x1 = 0;
    this[1].SolverOptions.CollisionFilterSettings.MinMass = 0.0;
    *(undefined2 *)&this[1].SolverOptions.CollisionFilterSettings.MinSpeed = 0;
    *(undefined1 *)((longlong)&this[1].SolverOptions.CollisionFilterSettings.MinSpeed + 2) = 0;
    *(undefined1 *)&this[1].SolverOptions.ProjectionIterations = 0;
    this[1].SolverOptions.CollisionMarginFraction = 0.0;
    *(undefined1 *)&this[1].SolverOptions.CollisionMarginMax = 0;
    this[1].SolverOptions.CollisionMaxPushOutVelocity = 0.033333335;
    *(undefined1 *)&this[1].SolverOptions.CollisionInitialOverlapDepenetrationVelocity = 0;
    *(undefined1 *)
     ((longlong)&this[1].SolverOptions.CollisionInitialOverlapDepenetrationVelocity + 2) = 0;
    this[1].SolverOptions.ClusterConnectionFactor = 0.033333335;
    *(undefined4 *)&this[1].SolverOptions.ClusterUnionConnectionType = 0x3c888889;
    this[1].SolverOptions.DestructionSettings.PerAdvanceBreaksAllowed = 6;
    this[1].SolverOptions.DestructionSettings.PerAdvanceBreaksRescheduleLimit = 0;
    this[1].SolverOptions.DestructionSettings.ClusteringParticleReleaseThrottlingMinCount =
         0x3c888889;
    this[1].SolverOptions.DestructionSettings.ClusteringParticleReleaseThrottlingMaxCount = 10;
    this[1].SolverOptions.bGenerateBreakData = false;
    *(undefined3 *)&this[1].SolverOptions.field_0x51 = 0;
    this[1].SolverOptions.BreakingFilterSettings.FilterEnabled = false;
    *(undefined3 *)&this[1].SolverOptions.BreakingFilterSettings.field_0x1 = 0;
    this[1].SolverOptions.BreakingFilterSettings.MinMass = 0.0;
    this[1].SolverOptions.BreakingFilterSettings.MinSpeed = 0.0;
    *(undefined8 *)&this[1].SolverOptions.BreakingFilterSettings.MinVolume = 0;
    this[1].SolverOptions.TrailingFilterSettings.FilterEnabled = false;
    *(undefined3 *)&this[1].SolverOptions.TrailingFilterSettings.field_0x1 = 0;
    this[1].SolverOptions.TrailingFilterSettings.MinMass = 0.0;
    this[1].SolverOptions.TrailingFilterSettings.MinSpeed = 0.0;
    this[1].SolverOptions.TrailingFilterSettings.MinVolume = 0.0;
    this[1].SolverOptions.Iterations_DEPRECATED = 0;
    this[1].SolverOptions.PushOutIterations_DEPRECATED = 0;
    *(undefined8 *)&this[1].SolverOptions.DestructionSettings.bOptimizeForRuntimeMemory = 0;
    this[1].SolverOptions.bGenerateContactGraph_DEPRECATED = false;
    *(undefined4 *)&this[1].SolverOptions.field_0x81 = 0;
    *(undefined2 *)&this[1].field_0xfd = 0;
    this[1].field_0xff = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 7) = 0;
    this[2].DefaultGravityZ = 2.8026e-45;
    this[2].DefaultFluidFriction = 0.0;
    *(undefined2 *)&this[2].SimulateScratchMemorySize = 0x301;
    *(undefined1 *)((longlong)&this[2].SimulateScratchMemorySize + 2) = 0;
  }
  return;
}

// InternalConstructor<URadialForceComponent> @ 1482d51a0

void __cdecl InternalConstructor<URadialForceComponent>(FObjectInitializer *param_1)

{
  if ((URadialForceComponent *)param_1->Obj != (URadialForceComponent *)0x0) {
    URadialForceComponent::URadialForceComponent((URadialForceComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<APhysicsConstraintActor> @ 1482d51c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APhysicsConstraintActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ARigidBodyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APhysicsConstraintActor::GetPrivateStaticClass();
  this = (ARigidBodyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ARigidBodyBase *)0x0) {
    ARigidBodyBase::ARigidBodyBase(this,param_1);
    *(undefined ***)this = &___7APhysicsConstraintActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APhysicsThruster> @ 1482d5280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APhysicsThruster>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ARigidBodyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APhysicsThruster::GetPrivateStaticClass();
  this = (ARigidBodyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ARigidBodyBase *)0x0) {
    ARigidBodyBase::ARigidBodyBase(this,param_1);
    *(undefined ***)this = &___7APhysicsThruster__6B_;
    *(undefined8 *)(this + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkPhysicsComponent> @ 1482d5340

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

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkPhysicsComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  undefined8 uStackX_10;
  
  uStackX_10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkPhysicsComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&UNetworkPhysicsComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNetworkPhysicsComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNetworkPhysicsComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].ComponentTags.ArrayNum = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined1 *)&this[1].PhysicsStateAsyncCreationScene = 0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[2].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ComponentTags.ArrayNum = 0;
    this[2].ComponentTags.ArrayMax = 0;
    *(undefined4 *)&this[2].AssetUserData.AllocatorInstance.Data = 0x30003;
    *(undefined4 *)((longlong)&this[2].AssetUserData.AllocatorInstance.Data + 4) = 0x10002;
    this[2].AssetUserData.ArrayNum = 0;
    this[2].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[2].field_0x88 = 0;
    this[2].UCSSerializationIndex = 0;
    this[2].RegistrationState = None;
    *(undefined8 *)&this[2].field_0x98 = 0;
    this[2].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[2].OwnerPrivate = (AActor *)0x0;
    this[2].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[2].field_0xb8 = 0;
    this[3]._padding_ = 0;
    uStackX_10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 3),(FObjectPtr)&uStackX_10);
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x100;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsComponent> @ 1482d5350

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
InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkPhysicsSettingsComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UNetworkPhysicsSettingsComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNetworkPhysicsSettingsComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNetworkPhysicsSettingsComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsDataAsset> @ 1482d5420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsDataAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkPhysicsSettingsDataAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNetworkPhysicsSettingsDataAsset__6B_;
    FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData
              ((FNetworkPhysicsSettingsData *)&this[1]._padding_);
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkPhysicsSystem> @ 1482d54f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkPhysicsSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkPhysicsSystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UNetworkPhysicsSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicalAnimationComponent> @ 1482d55a0

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
InternalVTableHelperCtorCaller<UPhysicalAnimationComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicalAnimationComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UPhysicalAnimationComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPhysicalAnimationComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPhysicalAnimationComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicalMaterialMask> @ 1482d5690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicalMaterialMask>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicalMaterialMask::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicalMaterialMask__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsAsset> @ 1482d5740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UPhysicsAsset::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UPhysicsAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 = &UPhysicsAsset::_vftable__for__IInterface_AssetUserData__
    ;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 6;
    *(undefined4 *)&pUVar1[2].field_0x1c = 1;
    *(undefined4 *)&pUVar1[2].field_0x20 = 1;
    *(undefined8 *)&pUVar1[2].field_0x24 = 0x40400000;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    *(undefined2 *)&pUVar1[3].field_0x8 = 0x101;
    *(undefined4 *)&pUVar1[3].field_0xc = 3;
    *(undefined4 *)&pUVar1[3].field_0x10 = 2;
    *(undefined4 *)&pUVar1[3].field_0x14 = 2;
    *(undefined4 *)&pUVar1[3].field_0x18 = 1;
    *(undefined8 *)&pUVar1[3].field_0x1c = 1;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
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
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsBodyInstanceOwnerResolver> @ 1482d5920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPhysicsBodyInstanceOwnerResolver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsBodyInstanceOwnerResolver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicsBodyInstanceOwnerResolver__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsCollisionHandler> @ 1482d59d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsCollisionHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsCollisionHandler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicsCollisionHandler__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsConstraintComponent> @ 1482d5a80

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
InternalVTableHelperCtorCaller<UPhysicsConstraintComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsConstraintComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UPhysicsConstraintComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UPhysicsConstraintComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPhysicsConstraintComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FConstraintInstance::FConstraintInstance((FConstraintInstance *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsConstraintTemplate> @ 1482d5bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsConstraintTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsConstraintTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicsConstraintTemplate__6B_;
    FConstraintInstance::FConstraintInstance((FConstraintInstance *)(pUVar1 + 1));
    *(undefined8 *)&pUVar1[0x11].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x12) = 0;
    FConstraintProfileProperties::FConstraintProfileProperties
              ((FConstraintProfileProperties *)&pUVar1[0x12].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsHandleComponent> @ 1482d5c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsHandleComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPhysicsHandleComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsHandleComponent::GetPrivateStaticClass();
  pUVar3 = (UPhysicsHandleComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPhysicsHandleComponent *)0x0) {
    pUVar3 = UPhysicsHandleComponent::UPhysicsHandleComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsObjectBlueprintLibrary> @ 1482d5d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPhysicsObjectBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsObjectBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicsObjectBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsQueryHandler> @ 1482d5dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsQueryHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsQueryHandler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicsQueryHandler__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsSettings> @ 1482d5e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPhysicsSettingsCore *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsSettings::GetPrivateStaticClass();
  this = (UPhysicsSettingsCore *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPhysicsSettingsCore *)0x0) {
    UPhysicsSettingsCore::UPhysicsSettingsCore(this,param_1);
    this->_padding_ = (longlong)&___7UPhysicsSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x447a0000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40a00000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    this[1].DefaultGravityZ = 0.75;
    this[1].DefaultTerminalVelocity = 0.25;
    this[1].DefaultFluidFriction = 0.8;
    this[1].SimulateScratchMemorySize = 0x3e19999a;
    this[1].RagdollAggregateThreshold = 0x3dcccccd;
    this[1].TriangleMeshTriangleMinAreaThreshold = 100.0;
    this[1].bEnableEnhancedDeterminism = false;
    this[1].bEnableShapeSharing = false;
    this[1].bEnablePCM = true;
    this[1].bEnableStabilization = true;
    this[1].bWarnMissingLocks = false;
    this[1].bEnable2DPhysics = false;
    this[1].bDefaultHasComplexCollision_DEPRECATED = true;
    this[1].field_0x57 = 0x3f;
    this[1].BounceThresholdVelocity = 1.0;
    this[1].FrictionCombineMode = '\0';
    this[1].RestitutionCombineMode = '\0';
    *(undefined2 *)&this[1].field_0x5e = 0x43c8;
    this[1].MaxAngularVelocity = 0.0;
    this[1].MaxDepenetrationVelocity = 0.4;
    this[1].ContactOffsetMultiplier = 100.0;
    this[1].MinContactOffset = 10.0;
    this[1].MaxContactOffset = 0.5;
    this[1].bSimulateSkeletalMeshOnDedicatedServer = false;
    this[1].DefaultShapeComplexity = '\0';
    *(undefined2 *)&this[1].field_0x76 = 0x4170;
    this[1].SolverOptions.PositionIterations = 0x42c80000;
    this[1].SolverOptions.CollisionFilterSettings.FilterEnabled = false;
    *(undefined3 *)&this[1].SolverOptions.CollisionFilterSettings.field_0x1 = 0;
    this[1].SolverOptions.CollisionFilterSettings.MinMass = 0.0;
    *(undefined2 *)&this[1].SolverOptions.CollisionFilterSettings.MinSpeed = 0;
    *(undefined1 *)((longlong)&this[1].SolverOptions.CollisionFilterSettings.MinSpeed + 2) = 0;
    this[1].SolverOptions.bGenerateBreakData = false;
    *(undefined3 *)&this[1].SolverOptions.field_0x51 = 0;
    this[1].SolverOptions.BreakingFilterSettings.FilterEnabled = false;
    *(undefined3 *)&this[1].SolverOptions.BreakingFilterSettings.field_0x1 = 0;
    this[1].SolverOptions.BreakingFilterSettings.MinMass = 0.0;
    this[1].SolverOptions.BreakingFilterSettings.MinSpeed = 0.0;
    *(undefined8 *)&this[1].SolverOptions.BreakingFilterSettings.MinVolume = 0;
    this[1].SolverOptions.TrailingFilterSettings.FilterEnabled = false;
    *(undefined3 *)&this[1].SolverOptions.TrailingFilterSettings.field_0x1 = 0;
    this[1].SolverOptions.TrailingFilterSettings.MinMass = 0.0;
    this[1].SolverOptions.TrailingFilterSettings.MinSpeed = 0.0;
    this[1].SolverOptions.TrailingFilterSettings.MinVolume = 0.0;
    this[1].SolverOptions.Iterations_DEPRECATED = 0;
    this[1].SolverOptions.PushOutIterations_DEPRECATED = 0;
    *(undefined8 *)&this[1].SolverOptions.DestructionSettings.bOptimizeForRuntimeMemory = 0;
    this[1].SolverOptions.bGenerateContactGraph_DEPRECATED = false;
    *(undefined4 *)&this[1].SolverOptions.field_0x81 = 0;
    *(undefined2 *)&this[1].field_0xfd = 0;
    this[1].field_0xff = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 7) = 0;
    this[2].DefaultGravityZ = 2.8026e-45;
    *(undefined1 *)((longlong)&this[2].SimulateScratchMemorySize + 2) = 0;
    *(undefined2 *)&this[2].SimulateScratchMemorySize = 0x301;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URadialForceComponent> @ 1482d5e90

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

UObject * __cdecl InternalVTableHelperCtorCaller<URadialForceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URadialForceComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&URadialForceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&URadialForceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&URadialForceComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<USceneComponent,UPrimitiveComponent_*,0> @ 1482d6010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USceneComponent,UPrimitiveComponent_*,0>
          (TObjectPtr<USceneComponent> *param_1,UPrimitiveComponent **param_2)

{
  if ((UPrimitiveComponent *)(param_1->field0_0x0).DebugPtr == (UPrimitiveComponent *)0x0) {
    return *param_2 == (UPrimitiveComponent *)0x0;
  }
  return (UPrimitiveComponent *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<USkeletalBodySetup> @ 1482d69f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalBodySetup * __cdecl
NewObject<USkeletalBodySetup>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USkeletalBodySetup *pUVar2;
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
  pUVar1 = Z_Construct_UClass_USkeletalBodySetup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USkeletalBodySetup *)
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

// RemoveAll<`UPhysicsAsset::RemoveUserDataOfClass'::__l2::<lambda_1>_> @ 1482d6f30

int __thiscall
TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::
RemoveAll<_UPhysicsAsset::RemoveUserDataOfClass_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  int local_res18;
  UClass *local_res20;
  UClass *local_50 [2];
  
  iVar1 = this->ArrayNum;
  lVar7 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  iVar12 = 0;
  pFVar2 = (this->AllocatorInstance).Data;
  local_res18 = 0;
  pUVar3 = *(UObject **)pFVar2;
  if (pUVar3 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res20 = (param_1->InUserDataClass->Class).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    bVar4 = UObjectBaseUtility::IsA<TSubclassOf<UAssetUserData>_>
                      ((UObjectBaseUtility *)pUVar3,(TSubclassOf<UAssetUserData>)&local_res20);
    if (bVar4) {
      bVar11 = 0;
      goto LAB_1482d6fdf;
    }
  }
  bVar11 = 1;
LAB_1482d6fdf:
  lVar10 = 0;
  do {
    lVar10 = lVar10 + 1;
    iVar8 = iVar9 + 1;
    local_res20 = (UClass *)CONCAT44(local_res20._4_4_,iVar9);
    iVar6 = iVar9;
    iVar9 = iVar8;
    if (lVar10 < lVar7) {
      do {
        pUVar3 = *(UObject **)(pFVar2 + lVar10 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar3 != (UObject *)0x0) goto LAB_1482d7031;
LAB_1482d7065:
          bVar5 = 1;
        }
        else {
          if (pUVar3 == (UObject *)0x0) goto LAB_1482d7065;
          UE::GC::MarkAsReachable(pUVar3);
LAB_1482d7031:
          local_50[0] = (param_1->InUserDataClass->Class).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50[0] != (UClass *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)local_50[0]);
          }
          bVar4 = UObjectBaseUtility::IsA<TSubclassOf<UAssetUserData>_>
                            ((UObjectBaseUtility *)pUVar3,(TSubclassOf<UAssetUserData>)local_50);
          if (!bVar4) goto LAB_1482d7065;
          bVar5 = 0;
        }
        if (bVar11 != bVar5) break;
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar7);
      iVar12 = local_res18;
      iVar6 = (int)local_res20;
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar6) {
        memmove(pFVar2 + (longlong)iVar12 * 8,pFVar2 + (longlong)iVar6 * 8,
                (longlong)(iVar9 - iVar6) << 3);
      }
      iVar12 = iVar12 + (iVar9 - iVar6);
      local_res18 = iVar12;
    }
    bVar11 = bVar11 ^ 1;
    if (lVar7 <= lVar10) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// StaticEnum<enum_EPhysicsAssetSolverType> @ 1482d7b40

UEnum * __cdecl StaticEnum<enum_EPhysicsAssetSolverType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType,(UObject *)pUVar1,
                       L"EPhysicsAssetSolverType");
  }
  return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton;
}

// StaticEnum<enum_EPhysicsQueryKind> @ 1482d7b80

UEnum * __cdecl StaticEnum<enum_EPhysicsQueryKind>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsQueryKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPhysicsQueryKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsQueryKind,(UObject *)pUVar1,
                       L"EPhysicsQueryKind");
  }
  return Z_Registration_Info_UEnum_EPhysicsQueryKind.OuterSingleton;
}

// StaticEnum<enum_ESettingsDOF::Type> @ 1482d7bc0

UEnum * __cdecl StaticEnum<enum_ESettingsDOF::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsDOF,(UObject *)pUVar1,L"ESettingsDOF");
  }
  return Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton;
}

// StaticEnum<enum_ESettingsLockedAxis::Type> @ 1482d7c00

UEnum * __cdecl StaticEnum<enum_ESettingsLockedAxis::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsLockedAxis,(UObject *)pUVar1,
                       L"ESettingsLockedAxis");
  }
  return Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FKConvexGeomRenderInfo_*>_> @ 1482d7d30

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FKConvexGeomRenderInfo_*>_>
          (_Atomic_padded<FKConvexGeomRenderInfo_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FKConvexGeomRenderInfo_*>_> @ 1482d7d40

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FKConvexGeomRenderInfo_*>_>
          (_Atomic_padded<FKConvexGeomRenderInfo_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FKConvexGeomRenderInfo_*> @ 1482d7d50

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FKConvexGeomRenderInfo_*>(FKConvexGeomRenderInfo **param_1)

{
  return (long64)*param_1;
}

// FThreadSafeStaticStat<`FParallelBlendPhysicsCompletionTask::GetStatId'::__l2::FStat_FParallelBlendPhysicsCompletionTask> @ 1482d8010

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const_::_2_::FStat_FParallelBlendPhysicsCompletionTask>
* __thiscall
FThreadSafeStaticStat<`FParallelBlendPhysicsCompletionTask::GetStatId'::__l2::FStat_FParallelBlendPhysicsCompletionTask>
::
FThreadSafeStaticStat<_FParallelBlendPhysicsCompletionTask::GetStatId_::__l2::FStat_FParallelBlendPhysicsCompletionTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FParallelBlendPhysicsCompletionTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FParallelBlendPhysicsCompletionTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FParallelBlendPhysicsTask::GetStatId'::__l2::FStat_FParallelBlendPhysicsTask> @ 1482d80a0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)_::_2_::FStat_FParallelBlendPhysicsTask>
* __thiscall
FThreadSafeStaticStat<`FParallelBlendPhysicsTask::GetStatId'::__l2::FStat_FParallelBlendPhysicsTask>
::
FThreadSafeStaticStat<_FParallelBlendPhysicsTask::GetStatId_::__l2::FStat_FParallelBlendPhysicsTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FParallelBlendPhysicsTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FParallelBlendPhysicsTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>,1,0> @ 1482dc8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FKAggregateGeom::FreeRenderInfo_::__l5::<lambda_2>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FKAggregateGeom::FreeRenderInfo'::`5'::<lambda_2>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::__l2::<lambda_1>,1,0> @ 1482dc910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::__l2::<lambda_1>,1,0> @ 1482dc930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::__l2::<lambda_1>,1,0> @ 1482dc950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataInputProxy::NetSerialize_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::__l2::<lambda_1>,1,0> @ 1482dc970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::__l2::<lambda_1>,1,0> @ 1482dc990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataStateProxy::NetSerialize_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_1>,1,0> @ 1482dc9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l5::<lambda_1>,1,0> @ 1482dc9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::__l17::<lambda_1>,1,0> @ 1482dc9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::__l17::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNetworkPhysicsComponent::UninitializeComponent_::__l17::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::`17'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetworkPhysicsComponent::InitializeComponent'::__l32::<lambda_1>,1,0> @ 1482dca10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetworkPhysicsComponent::InitializeComponent'::__l32::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNetworkPhysicsComponent::InitializeComponent_::__l32::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetworkPhysicsComponent::InitializeComponent'::`32'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPhysicsReplication::ApplyRigidBodyState'::__l163::<lambda_1>,1,1> @ 1482dca30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPhysicsReplication::ApplyRigidBodyState'::__l163::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FPhysicsReplication::ApplyRigidBodyState_::__l163::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPhysicsReplication::ApplyRigidBodyState'::`163'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::__l2::<lambda_2>,1,0> @ 1482dca50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::__l2::<lambda_2>,1,0> @ 1482dca70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::__l2::<lambda_2>,1,0> @ 1482dca90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataInputProxy::NetSerialize_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::__l2::<lambda_2>,1,0> @ 1482dcab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::__l2::<lambda_2>,1,0> @ 1482dcad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataStateProxy::NetSerialize_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_2>,1,0> @ 1482dcaf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize_::__l5::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`5'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l5::<lambda_2>,1,0> @ 1482dcb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l5::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize_::__l5::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::`5'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>,1,1> @ 1482dcb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataProxy::NetSerializeBase_::__l5::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::`5'::<lambda_3>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l7::<lambda_3>,1,0> @ 1482dcb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l7::<lambda_3>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize_::__l7::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`7'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l7::<lambda_3>,1,0> @ 1482dcb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l7::<lambda_3>,1,0>
::
~TFunction_OwnedObject<_FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize_::__l7::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::`7'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// operator& @ 1482de8f0

FCollisionEnabledMask __cdecl operator&(Type param_1,Type param_2)

{
  undefined4 in_register_0000000c;
  byte in_R8B;
  
  *(char *)CONCAT44(in_register_0000000c,param_1) =
       '\x01' << ((byte)param_2 & 0x1f) & '\x01' << (in_R8B & 0x1f);
  return (FCollisionEnabledMask)(schar)param_1;
}

// operator& @ 1482de920

FCollisionEnabledMask __cdecl operator&(Type param_1,FCollisionEnabledMask param_2)

{
  undefined4 in_register_0000000c;
  byte in_R8B;
  
  *(byte *)CONCAT44(in_register_0000000c,param_1) = '\x01' << (param_2.Bits & 0x1fU) & in_R8B;
  return (FCollisionEnabledMask)(schar)param_1;
}

// operator() @ 1482dea60

void __thiscall
``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FStaticMeshVertexBuffer *this_00;
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)(**(longlong **)this + 0x108) + 0x20))();
  (**(code **)(*(longlong *)**(undefined8 **)this + 0x20))();
  (**(code **)(*(longlong *)(**(longlong **)this + 0xb8) + 0x20))();
  (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x20))();
  if (*(longlong **)(*(longlong *)this + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x20))();
  }
  this_00 = (FStaticMeshVertexBuffer *)**(undefined8 **)this;
  if (this_00 != (FStaticMeshVertexBuffer *)0x0) {
    FColorVertexBuffer::~FColorVertexBuffer
              ((FColorVertexBuffer *)&this_00[1].TexCoordVertexBuffer.field_0x8);
    FPositionVertexBuffer::~FPositionVertexBuffer((FPositionVertexBuffer *)(this_00 + 1));
    FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(this_00);
    ::operator_delete(this_00,0x158);
  }
  puVar1 = *(undefined8 **)(*(longlong *)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(*(longlong *)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  ::operator_delete(*(void **)this,0x18);
  return;
}

// operator() @ 1482deb40

bool __thiscall
`DrawSkinnedLevelSetLattice'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar6 = (param_1 * *(int *)(lVar1 + 4) + param_2) * *(int *)(lVar1 + 8) + param_3;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(char *)((longlong)(int)uVar6 + *(longlong *)(lVar1 + 0x10)) == '\0') {
    lVar1 = *(longlong *)this;
    if (*(int *)(lVar1 + 0x18) == 0) {
      return true;
    }
    uVar6 = (param_1 * *(int *)(lVar1 + 4) + param_2) * *(int *)(lVar1 + 8) + param_3;
    uVar5 = 0;
    if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
      lVar1 = *(longlong *)this;
      uVar6 = (param_1 * *(int *)(lVar1 + 4) + param_2) * *(int *)(lVar1 + 8) + 1 + param_3;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
        lVar1 = *(longlong *)this;
        uVar6 = (param_1 * *(int *)(lVar1 + 4) + 1 + param_2) * *(int *)(lVar1 + 8) + param_3;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
          lVar1 = *(longlong *)this;
          uVar6 = (param_1 * *(int *)(lVar1 + 4) + 1 + param_2) * *(int *)(lVar1 + 8) + 1 + param_3;
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
            lVar1 = *(longlong *)this;
            iVar7 = param_1 + 1;
            uVar6 = (iVar7 * *(int *)(lVar1 + 4) + param_2) * *(int *)(lVar1 + 8) + param_3;
            uVar5 = 0;
            if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
              lVar1 = *(longlong *)this;
              uVar6 = (iVar7 * *(int *)(lVar1 + 4) + param_2) * *(int *)(lVar1 + 8) + 1 + param_3;
              uVar5 = 0;
              if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
                uVar5 = ~uVar6 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
                lVar1 = *(longlong *)this;
                uVar6 = (iVar7 * *(int *)(lVar1 + 4) + 1 + param_2) * *(int *)(lVar1 + 8) + param_3;
                uVar5 = 0;
                if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
                  uVar5 = ~uVar6 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
                  lVar1 = *(longlong *)this;
                  uVar6 = (param_2 + 1 + iVar7 * *(int *)(lVar1 + 4)) * *(int *)(lVar1 + 8) + 1 +
                          param_3;
                  uVar5 = 0;
                  if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
                    uVar5 = ~uVar6 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  if (*(float *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 4) != 0.0) {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// operator| @ 1482e2f00

FCollisionEnabledMask __cdecl operator|(Type param_1,Type param_2)

{
  undefined4 in_register_0000000c;
  byte in_R8B;
  
  *(byte *)CONCAT44(in_register_0000000c,param_1) =
       '\x01' << (in_R8B & 0x1f) | (byte)(1 << (param_2 & 0x1f));
  return (FCollisionEnabledMask)(schar)param_1;
}

// operator| @ 1482e2f30

FCollisionEnabledMask __cdecl operator|(Type param_1,FCollisionEnabledMask param_2)

{
  undefined4 in_register_0000000c;
  byte in_R8B;
  
  *(byte *)CONCAT44(in_register_0000000c,param_1) =
       in_R8B | (byte)(1 << ((byte)param_2.Bits & 0x1f));
  return (FCollisionEnabledMask)(schar)param_1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1482e2f74

/* [thunk]:public: virtual void * __ptr64 __cdecl FPhysicsReplicationAsync::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FPhysicsReplicationAsync::_vector_deleting_destructor__adjustor_8__
          (FPhysicsReplicationAsync *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPhysicsReplicationAsync *)&this[-1].ResimOutOfBoundsCounter,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1482e2f84

/* [thunk]:public: virtual void * __ptr64 __cdecl FPhysicsReplicationLODAsync::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FPhysicsReplicationLODAsync::_vector_deleting_destructor__adjustor_8__
          (FPhysicsReplicationLODAsync *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPhysicsReplicationLODAsync *)&this[-1].ParticleAABB.MMax.field_0x10,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e2f94

/* [thunk]:public: virtual void * __ptr64 __cdecl UNetworkPhysicsComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNetworkPhysicsComponent::_vector_deleting_destructor__adjustor_40__
          (UNetworkPhysicsComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNetworkPhysicsComponent *)&this[-1].LatestAcknowledgedDeltaSourceStateIndex,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e2fa4

/* [thunk]:public: virtual void * __ptr64 __cdecl UNetworkPhysicsSettingsComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNetworkPhysicsSettingsComponent::_vector_deleting_destructor__adjustor_40__
          (UNetworkPhysicsSettingsComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNetworkPhysicsSettingsComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e2fb4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicalAnimationComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicalAnimationComponent::_vector_deleting_destructor__adjustor_40__
          (UPhysicalAnimationComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicalAnimationComponent *)&this[-1].RuntimeInstanceData.ArrayNum,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e2fc4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsAsset::_vector_deleting_destructor__adjustor_40__(UPhysicsAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPhysicsAsset *)&this[-1].ThumbnailInfo,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1482e2fd4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsAsset::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsAsset::_vector_deleting_destructor__adjustor_48__(UPhysicsAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicsAsset *)&this[-1].CollisionDisableTable.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e2fe4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsConstraintComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsConstraintComponent::_vector_deleting_destructor__adjustor_40__
          (UPhysicsConstraintComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicsConstraintComponent *)
                      &this[-1].ConstraintInstance.ProfileInstance.AngularDrive.AngularDriveMode,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e2ff4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsHandleComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsHandleComponent::_vector_deleting_destructor__adjustor_40__
          (UPhysicsHandleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicsHandleComponent *)
                      ((longlong)&this[-1].ConstraintLocalPosition.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1482e3004

/* [thunk]:public: virtual void * __ptr64 __cdecl URadialForceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URadialForceComponent::_vector_deleting_destructor__adjustor_40__
          (URadialForceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((URadialForceComponent *)&this[-1].ImpulseStrength,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1482e3020

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`InitGamePhys'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3050

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`InitGamePhys'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3080

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAsyncNetworkPhysicsComponent,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAsyncNetworkPhysicsComponent,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e30b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPhysCommandHandler,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPhysCommandHandler,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e30e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetworkPhysicsSystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetworkPhysicsSystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPhysicalAnimationComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPhysicalAnimationComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPhysicsConstraintComponent,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPhysicsConstraintComponent,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorld,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorld,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e31a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FKAggregateGeom::FreeRenderInfo'::`5'::<lambda_2>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e31e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e32a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e32e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e33a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::__l17::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::`17'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e33e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetworkPhysicsComponent::InitializeComponent'::__l32::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetworkPhysicsComponent::InitializeComponent'::`32'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPhysicsReplication::ApplyRigidBodyState'::__l163::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPhysicsReplication::ApplyRigidBodyState'::`163'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantInputProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e34a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataImportantStateProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e34e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataInputProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataRemoteInputProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataStateProxy::NetSerialize'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e35a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`5'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e35e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l5::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::`5'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::`5'::<lambda_3>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l7::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`7'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e36a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::__l7::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceStateProxy::NetSerialize'::`7'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e36e0

void * __thiscall
TGraphTask<FParallelBlendPhysicsCompletionTask>::_scalar_deleting_destructor_
          (TGraphTask<FParallelBlendPhysicsCompletionTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3740

void * __thiscall
TGraphTask<FParallelBlendPhysicsTask>::_scalar_deleting_destructor_
          (TGraphTask<FParallelBlendPhysicsTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e37a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNetworkPhysicsSettingsData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNetworkPhysicsSettingsData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e37e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Chaos::FBaseRewindHistory,SharedPointerInternals::DefaultDeleter<Chaos::FBaseRewindHistory>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Chaos::FBaseRewindHistory,SharedPointerInternals::DefaultDeleter<Chaos::FBaseRewindHistory>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3820

void * __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
_scalar_deleting_destructor_
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this,uint param_1)

{
  ~TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3860

void * __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
_scalar_deleting_destructor_
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          ,uint param_1)

{
  ~TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e38a0

void * __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
_scalar_deleting_destructor_
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this,
          uint param_1)

{
  ~TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e38e0

void * __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
_scalar_deleting_destructor_
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this,uint param_1)

{
  ~TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3920

void * __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
_scalar_deleting_destructor_
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this,uint param_1)

{
  ~TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3960

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
APhysicsConstraintActor::_scalar_deleting_destructor_(APhysicsConstraintActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APhysicsConstraintActor__6B_;
  ARigidBodyBase::~ARigidBodyBase((ARigidBodyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e39c0

void * __thiscall
APhysicsThruster::_scalar_deleting_destructor_(APhysicsThruster *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APhysicsThruster__6B_;
  ARigidBodyBase::~ARigidBodyBase((ARigidBodyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3a20

void * __thiscall
FAsyncNetworkPhysicsComponent::_scalar_deleting_destructor_
          (FAsyncNetworkPhysicsComponent *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FNetworkPhysicsPayload *pFVar3;
  FNetworkPhysicsDataHelper *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  this->_padding_ = (longlong)&___7FAsyncNetworkPhysicsComponent__6B_;
  pFVar3 = (this->StateData).Ptr;
  if (pFVar3 != (FNetworkPhysicsPayload *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar3 = (this->LatestInputReceiveData).Ptr;
  if (pFVar3 != (FNetworkPhysicsPayload *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar3 = (this->InputData).Ptr;
  if (pFVar3 != (FNetworkPhysicsPayload *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputHistory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StateHistory).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->StateHelper).Ptr;
  if (pFVar4 != (FNetworkPhysicsDataHelper *)0x0) {
    (**(code **)*pFVar4)(pFVar4,1);
  }
  pFVar4 = (this->InputHelper).Ptr;
  if (pFVar4 != (FNetworkPhysicsDataHelper *)0x0) {
    (**(code **)*pFVar4)(pFVar4,1);
  }
  pTVar5 = (this->SettingsComponent).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar6 = (this->ActorName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  Chaos::
  TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
  ~TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
            ((TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3b30

void * __thiscall
FAsyncNetworkPhysicsComponentInput::_scalar_deleting_destructor_
          (FAsyncNetworkPhysicsComponentInput *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseRewindHistory *pFVar4;
  longlong *plVar5;
  FNetworkPhysicsDataHelper *pFVar6;
  
  DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
            ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
             (this->StateDataImportant).AllocatorInstance.Data,(this->StateDataImportant).ArrayNum);
  pFVar3 = (this->StateDataImportant).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
            ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
             (this->InputDataImportant).AllocatorInstance.Data,(this->InputDataImportant).ArrayNum);
  pFVar3 = (this->InputDataImportant).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->StateData).Ptr;
  if (pFVar4 != (FBaseRewindHistory *)0x0) {
    (**(code **)*pFVar4)(pFVar4,1);
  }
  pFVar4 = (this->InputData).Ptr;
  if (pFVar4 != (FBaseRewindHistory *)0x0) {
    (**(code **)*pFVar4)(pFVar4,1);
  }
  if (((this->SettingsComponent).field0_0x0.TypedValue.Object !=
       (FNetworkPhysicsSettingsData *)0xffffffffffffffff) &&
     (plVar5 = *(longlong **)((longlong)&(this->SettingsComponent).field0_0x0 + 8),
     plVar5 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if (((this->StateHelper).bIsSet != false) &&
     (pFVar6 = (this->StateHelper).TypedValue.Ptr, pFVar6 != (FNetworkPhysicsDataHelper *)0x0)) {
    (**(code **)*pFVar6)(pFVar6,1);
  }
  if (((this->InputHelper).bIsSet != false) &&
     (pFVar6 = (this->InputHelper).TypedValue.Ptr, pFVar6 != (FNetworkPhysicsDataHelper *)0x0)) {
    (**(code **)*pFVar6)(pFVar6,1);
  }
  if ((*(int *)((longlong)&(this->ActorName).field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (this->ActorName).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3c60

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
FNetworkPhysicsCallback::_scalar_deleting_destructor_(FNetworkPhysicsCallback *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InjectInputsExternal).field_0x8,
             *(int *)&(this->InjectInputsExternal).field_0x10);
  pvVar2 = *(void **)&(this->InjectInputsExternal).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InjectInputsExternal);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostProcessInputsInternal).field_0x8,
             *(int *)&(this->PostProcessInputsInternal).field_0x10);
  pvVar2 = *(void **)&(this->PostProcessInputsInternal).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostProcessInputsInternal);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreProcessInputsInternal).field_0x8,
             *(int *)&(this->PreProcessInputsInternal).field_0x10);
  pvVar2 = *(void **)&(this->PreProcessInputsInternal).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreProcessInputsInternal);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3d20

void * __thiscall
FNetworkPhysicsSettingsAsyncInput::_scalar_deleting_destructor_
          (FNetworkPhysicsSettingsAsyncInput *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((this->Settings).bIsSet != false) {
    FNetworkPhysicsSettingsAsync::~FNetworkPhysicsSettingsAsync(&(this->Settings).TypedValue);
  }
  if (((this->Settings_Internal).field0_0x0.TypedValue.Object !=
       (FNetworkPhysicsSettingsData *)0xffffffffffffffff) &&
     (plVar3 = *(longlong **)((longlong)&(this->Settings_Internal).field0_0x0 + 8),
     plVar3 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3da0

void * __thiscall
FNetworkPhysicsSettingsComponentAsync::_scalar_deleting_destructor_
          (FNetworkPhysicsSettingsComponentAsync *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNetworkPhysicsSettingsComponentAsync__6B_;
  FNetworkPhysicsSettingsAsync::~FNetworkPhysicsSettingsAsync(&this->Settings);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Settings_Internal).SharedReferenceCount.ReferenceController);
  Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
  ~TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>
            ((TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *)
             this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3e00

void * __thiscall
FPhysicsReplication::_scalar_deleting_destructor_(FPhysicsReplication *this,uint param_1)

{
  FPhysicsSolverBase *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPhysicsReplication__6B_;
  if ((this->PhysicsReplicationAsync != (FPhysicsReplicationAsync *)0x0) &&
     (this_00 = (FPhysicsSolverBase *)this->PhysScene->_padding_,
     this_00 != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
              (this_00,(ISimCallbackObject *)&this->PhysicsReplicationAsync->_padding_);
  }
  DestructItems<FReplicatedPhysicsTarget,int>
            ((FReplicatedPhysicsTarget *)(this->ReplicatedTargetsQueue).AllocatorInstance.Data,
             (this->ReplicatedTargetsQueue).ArrayNum);
  pFVar1 = (this->ReplicatedTargetsQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentToTargets_DEPRECATED).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentToTargets_DEPRECATED);
  this->_padding_ = (longlong)&___7IPhysicsReplication__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3eb0

void * __thiscall
FPhysicsReplicationAsync::_scalar_deleting_destructor_(FPhysicsReplicationAsync *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ReplicatedParticleIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticlesInResimIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResimIslandsParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResimIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ObjectToSettings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ObjectToSettings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToSettings);
  *(undefined4 *)&(this->ObjectToTarget).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ObjectToTarget).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToTarget);
  FNetworkPhysicsSettingsData::~FNetworkPhysicsSettingsData(&this->SettingsDefault);
  FNetworkPhysicsSettingsData::~FNetworkPhysicsSettingsData(&this->SettingsCurrent);
  Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
  ~TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>
            ((TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *)
             &this->_padding_);
  this->_padding_ = (longlong)&___7IPhysicsReplicationAsync__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e3fb0

void * __thiscall
FPhysicsReplicationAsyncInput::_scalar_deleting_destructor_
          (FPhysicsReplicationAsyncInput *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4000

void * __thiscall
FPhysicsReplicationCache::_scalar_deleting_destructor_(FPhysicsReplicationCache *this,uint param_1)

{
  FPhysicsSolverBase *this_00;
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FPhysicsReplicationCache__6B_;
  if (((this->AsyncPhysicsReplicationCache != (FPhysicsReplicationCacheAsync *)0x0) &&
      (this->PhysicsScene != (FPhysScene_Chaos *)0x0)) &&
     (this_00 = (FPhysicsSolverBase *)this->PhysicsScene->_padding_,
     this_00 != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
              (this_00,(ISimCallbackObject *)this->AsyncPhysicsReplicationCache);
  }
  *(undefined4 *)&(this->ReplicationCache_External).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReplicationCache_External).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationCache_External);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4090

void * __thiscall
FPhysicsReplicationCacheAsync::_scalar_deleting_destructor_
          (FPhysicsReplicationCacheAsync *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ReplicationCache_Internal).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReplicationCache_Internal).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationCache_Internal);
  Chaos::
  TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
  ~TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
            ((TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4100

void * __thiscall
FPhysicsReplicationCacheAsyncInput::_scalar_deleting_destructor_
          (FPhysicsReplicationCacheAsyncInput *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UnregisterObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccessedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4160

void * __thiscall
FPhysicsReplicationLOD::_scalar_deleting_destructor_(FPhysicsReplicationLOD *this,uint param_1)

{
  FPhysicsSolverBase *this_00;
  
  this->_padding_ = (longlong)&___7FPhysicsReplicationLOD__6B_;
  if ((this->PhysicsReplicationLODAsync != (FPhysicsReplicationLODAsync *)0x0) &&
     (this_00 = (FPhysicsSolverBase *)this->PhysScene->_padding_,
     this_00 != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
              (this_00,(ISimCallbackObject *)&this->PhysicsReplicationLODAsync->_padding_);
  }
  this->_padding_ = (longlong)&___7IPhysicsReplicationLOD__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e41d0

void * __thiscall
FPhysicsReplicationLODAsync::_scalar_deleting_destructor_
          (FPhysicsReplicationLODAsync *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__IPhysicsReplicationLODAsync__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Chaos__TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>__
  ;
  pFVar1 = (this->IslandParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CachedIslandLodData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedIslandLodData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPhysicsRepLodData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPhysicsRepLodData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPhysicsRepLodData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedIslandLodData);
  pFVar1 = (this->ParticlesInFocalIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FocalParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
  ~TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
            ((TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
              *)&this->_padding_);
  this->_padding_ = (longlong)&___7IPhysicsReplicationLODAsync__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e42b0

void * __thiscall
FPhysicsReplicationLODAsyncInput::_scalar_deleting_destructor_
          (FPhysicsReplicationLODAsyncInput *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PhysicsObjectsToUnregister).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsObjectsToRegister).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4310

void * __thiscall
IPhysicsReplication::_scalar_deleting_destructor_(IPhysicsReplication *this,uint param_1)

{
  *this = (IPhysicsReplication)&___7IPhysicsReplication__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4350

void * __thiscall
IPhysicsReplicationAsync::_scalar_deleting_destructor_(IPhysicsReplicationAsync *this,uint param_1)

{
  *this = (IPhysicsReplicationAsync)&___7IPhysicsReplicationAsync__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4390

void * __thiscall
IPhysicsReplicationLOD::_scalar_deleting_destructor_(IPhysicsReplicationLOD *this,uint param_1)

{
  *this = (IPhysicsReplicationLOD)&___7IPhysicsReplicationLOD__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e43d0

void * __thiscall
IPhysicsReplicationLODAsync::_scalar_deleting_destructor_
          (IPhysicsReplicationLODAsync *this,uint param_1)

{
  *this = (IPhysicsReplicationLODAsync)&___7IPhysicsReplicationLODAsync__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4410

void * __thiscall
UNetworkPhysicsComponent::_scalar_deleting_destructor_(UNetworkPhysicsComponent *this,uint param_1)

{
  ~UNetworkPhysicsComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4470

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
UNetworkPhysicsSettingsComponent::_scalar_deleting_destructor_
          (UNetworkPhysicsSettingsComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e44f0

void * __thiscall
UNetworkPhysicsSettingsDataAsset::_scalar_deleting_destructor_
          (UNetworkPhysicsSettingsDataAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetworkPhysicsSettingsDataAsset__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Settings_Internal).SharedReferenceCount.ReferenceController);
  FNetworkPhysicsSettingsData::~FNetworkPhysicsSettingsData(&this->Settings);
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4570

void * __thiscall
UNetworkPhysicsSystem::_scalar_deleting_destructor_(UNetworkPhysicsSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UNetworkPhysicsSystem__6B_;
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

// `scalar_deleting_destructor' @ 1482e45d0

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
UPhysicalAnimationComponent::_scalar_deleting_destructor_
          (UPhysicalAnimationComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->DriveData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeInstanceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4670

void * __thiscall
UPhysicalMaterialMask::_scalar_deleting_destructor_(UPhysicalMaterialMask *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPhysicalMaterialMask__6B_;
  ::operator_delete((this->MaterialMaskHandle).Ptr,4);
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

// `scalar_deleting_destructor' @ 1482e46e0

void * __thiscall UPhysicsAsset::_scalar_deleting_destructor_(UPhysicsAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodySetup_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CollisionDisableTable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CollisionDisableTable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionDisableTable);
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BodySetupIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BodySetupIndexMap);
  pFVar1 = (this->ConstraintSetup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalBodySetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4820

void * __thiscall
UPhysicsBodyInstanceOwnerResolver::_scalar_deleting_destructor_
          (UPhysicsBodyInstanceOwnerResolver *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1482e4880

void * __thiscall
UPhysicsCollisionHandler::_scalar_deleting_destructor_(UPhysicsCollisionHandler *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPhysicsCollisionHandler__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e48e0

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
UPhysicsConstraintComponent::_scalar_deleting_destructor_
          (UPhysicsConstraintComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  pvVar1 = *(void **)&(this->OnPlasticDeformation).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlasticDeformation);
  pvVar1 = *(void **)&(this->OnConstraintBroken).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstraintBroken);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x560);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e49d0

void * __thiscall
UPhysicsConstraintTemplate::_scalar_deleting_destructor_
          (UPhysicsConstraintTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPhysicsConstraintTemplate__6B_;
  pFVar1 = (this->ProfileHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultInstance)._padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4a60

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
UPhysicsHandleComponent::_scalar_deleting_destructor_(UPhysicsHandleComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x520);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4b00

void * __thiscall
UPhysicsObjectBlueprintLibrary::_scalar_deleting_destructor_
          (UPhysicsObjectBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPhysicsObjectBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1482e4b60

void * __thiscall
UPhysicsQueryHandler::_scalar_deleting_destructor_(UPhysicsQueryHandler *this,uint param_1)

{
  *(undefined ***)this = &___7UPhysicsQueryHandler__6B_;
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

// `scalar_deleting_destructor' @ 1482e4bc0

void * __thiscall
UPhysicsSettings::_scalar_deleting_destructor_(UPhysicsSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPhysicsSettings__6B_;
  pFVar1 = (this->PhysicalSurfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPhysicsSettingsCore::~UPhysicsSettingsCore((UPhysicsSettingsCore *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1482e4c40

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
URadialForceComponent::_scalar_deleting_destructor_(URadialForceComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ObjectTypesToAffect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// AddConvexPrim @ 1482e5f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
AddConvexPrim(FKAggregateGeom *param_1,
             TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_2,UModel *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FKConvexElem *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_1c8 [32];
  FKConvexElem *local_1a8;
  FKConvexElem *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_178;
  undefined1 local_168 [16];
  double local_158;
  FKConvexElem local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FKConvexElem::FKConvexElem(&local_148);
  uVar12 = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  if (0 < (param_3->Verts).ArrayNum) {
    lVar13 = 0;
    do {
      iVar9 = (param_3->Verts).ArrayNum;
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_1a8 = (FKConvexElem *)(longlong)(int)uVar12;
        local_1a0 = (FKConvexElem *)(longlong)iVar9;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      iVar9 = *(int *)((param_3->Verts).AllocatorInstance.Data + lVar13);
      pFVar11 = (FKConvexElem *)(longlong)iVar9;
      if ((-1 < iVar9) && (iVar2 = (param_3->Points).ArrayNum, iVar9 < iVar2)) {
        if ((iVar9 < 0) &&
           (local_1a8 = pFVar11, local_1a0 = (FKConvexElem *)(longlong)iVar2,
           bVar5 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_3->Points).AllocatorInstance.Data;
        local_158 = (double)*(float *)(pFVar3 + (longlong)pFVar11 * 0xc + 8);
        local_168._8_8_ = (undefined8)*(float *)(pFVar3 + (longlong)pFVar11 * 0xc + 4);
        local_168._0_8_ = (undefined8)*(float *)(pFVar3 + (longlong)pFVar11 * 0xc);
        if ((local_178.AllocatorInstance.Data <= (FKConvexElem *)local_168) &&
           ((FScriptContainerElement *)local_168 <
            local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x18)) {
          local_190 = (longlong)local_178.ArrayNum;
          local_188 = 0x18;
          local_1a8 = (FKConvexElem *)local_168;
          local_1a0 = (FKConvexElem *)local_178.AllocatorInstance.Data;
          local_198 = (longlong)local_178.ArrayMax;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if (local_178.ArrayNum == local_178.ArrayMax) {
          local_178.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_178.AllocatorInstance,&local_178.ArrayMax);
        }
        lVar10 = (longlong)local_178.ArrayNum;
        local_178.ArrayNum = local_178.ArrayNum + 1;
        *(undefined8 *)(local_178.AllocatorInstance.Data + lVar10 * 0x18) = local_168._0_8_;
        *(undefined8 *)(local_178.AllocatorInstance.Data + lVar10 * 0x18 + 8) = local_168._8_8_;
        *(double *)(local_178.AllocatorInstance.Data + lVar10 * 0x18 + 0x10) = local_158;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar12 < (param_3->Verts).ArrayNum);
  }
  bVar5 = FKConvexElem::HullFromPlanes
                    (&local_148,param_2,&local_178,
                     (float)((param_3->Bounds).SphereRadius * ___real_3f589374c0000000));
  if ((bVar5) && (local_148.ElemBox.IsValid != '\0')) {
    pFVar11 = (FKConvexElem *)(param_1->ConvexElems).AllocatorInstance.Data;
    if ((pFVar11 <= &local_148) &&
       (lVar13 = (longlong)(param_1->ConvexElems).ArrayMax, &local_148 < pFVar11 + lVar13)) {
      local_190 = (longlong)(param_1->ConvexElems).ArrayNum;
      local_188 = 0x100;
      local_1a8 = &local_148;
      local_1a0 = pFVar11;
      local_198 = lVar13;
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar9 = (param_1->ConvexElems).ArrayNum;
    piVar1 = &(param_1->ConvexElems).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,0x10,&(param_1->ConvexElems).AllocatorInstance,piVar1);
    }
    (param_1->ConvexElems).ArrayNum = iVar9 + 1;
    FKConvexElem::FKConvexElem
              ((FKConvexElem *)
               ((param_1->ConvexElems).AllocatorInstance.Data + (longlong)iVar9 * 0x100),&local_148)
    ;
  }
  if ((FKConvexElem *)local_178.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  FKConvexElem::~FKConvexElem(&local_148);
  return bVar5;
}

// ComputeLocalSpaceTargetTM @ 1482ec5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
ComputeLocalSpaceTargetTM
          (TTransform<double> *__return_storage_ptr__,USkeletalMeshComponent *param_1,
          UPhysicsAsset *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  USkeletalMesh *pUVar6;
  longlong lVar7;
  TTransform<double> *pTVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  longlong local_200;
  USkeletalMeshComponent *local_1f8;
  UPhysicsAsset *local_1f0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1f8 = param_1;
  local_1f0 = param_2;
  local_1e8 = param_3;
  pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
  uVar11 = 0;
  if (param_4 < param_3->ArrayNum) {
    uVar11 = (uint)~param_4 >> 0x1f;
  }
  if (uVar11 == 0) {
    local_208 = (longlong)param_4;
    local_200 = (longlong)param_3->ArrayNum;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  lVar10 = (longlong)param_4 * 0x60;
  uVar13 = (ulonglong)(uint)param_4;
  local_1d8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar10);
  local_1d8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar10 + 8);
  local_1d8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar10 + 0x10);
  local_1d8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar10 + 0x10 + 8);
  local_1d8.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar10 + 0x20);
  local_1d8.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar10 + 0x20 + 8);
  local_1d8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar10 + 0x30);
  local_1d8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar10 + 0x30 + 8);
  local_1d8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar10 + 0x40);
  local_1d8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar10 + 0x40 + 8);
  pFVar2 = pFVar2 + lVar10 + 0x50;
  local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)pFVar2;
  local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar2 + 4);
  local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar2 + 8);
  local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar2 + 0xc);
  while( true ) {
    uVar12 = (uint)uVar13;
    uVar11 = 0;
    if ((int)uVar12 < *(int *)(lVar7 + 0x28)) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      local_208 = (ulonglong)(int)uVar12;
      local_200 = (longlong)*(int *)(lVar7 + 0x28);
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TTransform<double> *)(*pcVar3)();
        return pTVar8;
      }
    }
    uVar11 = *(uint *)(*(longlong *)(lVar7 + 0x20) + 8 + (longlong)(int)uVar12 * 0xc);
    uVar13 = (ulonglong)(int)uVar11;
    if (uVar11 == 0xffffffff) break;
    uVar12 = 0;
    if ((int)uVar11 < *(int *)(lVar7 + 0x28)) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_208 = uVar13;
      local_200 = (longlong)*(int *)(lVar7 + 0x28);
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TTransform<double> *)(*pcVar3)();
        return pTVar8;
      }
    }
    piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&local_1f0->BodySetupIndexMap,
                  *(FName *)(*(longlong *)(lVar7 + 0x20) + uVar13 * 0xc));
    pTVar4 = local_1e8;
    if (piVar9 == (int *)0x0) {
      iVar14 = -1;
    }
    else {
      iVar14 = *piVar9;
    }
    if (uVar11 == param_4) break;
    if ((-1 < iVar14) && (iVar1 = (local_1f8->Bodies).ArrayNum, iVar14 < iVar1)) {
      if (iVar14 < 0) {
        local_208 = (ulonglong)iVar14;
        local_200 = (longlong)iVar1;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar3)();
          return pTVar8;
        }
      }
      pTVar8 = FBodyInstance::GetUnrealWorldTransform_AssumesLocked
                         (*(FBodyInstance **)
                           ((local_1f8->Bodies).AllocatorInstance.Data + (longlong)iVar14 * 8),
                          &local_b8,true,false);
      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_118.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_118,&local_1d8,pTVar8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_118.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_118.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_118.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_118.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_118.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_118.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
      goto LAB_1482ec9b3;
    }
    uVar12 = 0;
    if ((int)uVar11 < local_1e8->ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_208 = uVar13;
      local_200 = (longlong)local_1e8->ArrayNum;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TTransform<double> *)(*pcVar3)();
        return pTVar8;
      }
    }
    local_178.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_178.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_178.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_178.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_178.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_178.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_178,&local_1d8,
               (TTransform<double> *)((pTVar4->AllocatorInstance).Data + uVar13 * 0x60));
    local_1d8.Rotation.XY.m128d_f64[0] = local_178.Rotation.XY.m128d_f64[0];
    local_1d8.Rotation.XY.m128d_f64[1] = local_178.Rotation.XY.m128d_f64[1];
    local_1d8.Rotation.ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
    local_1d8.Rotation.ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
    local_1d8.Translation.XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
    local_1d8.Translation.XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
    local_1d8.Translation.ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
    local_1d8.Translation.ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
    local_1d8.Scale3D.XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
    local_1d8.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
    local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_178.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_178.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_178.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_178.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_118.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_1482ec9b3:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// ComputeTargetTM @ 1482ef620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
ComputeTargetTM(TTransform<double> *__return_storage_ptr__,FPhysicalAnimationData *param_1,
               USkeletalMeshComponent *param_2,UPhysicsAsset *param_3,
               TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
               TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,int param_6
               )

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  undefined1 auStackY_118 [32];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_1->bIsLocalSimulation == 0) {
    uVar4 = 0;
    if (param_6 < param_5->ArrayNum) {
      uVar4 = (uint)~param_6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TTransform<double> *)(*pcVar1)();
        return pTVar5;
      }
    }
    local_88.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_88,
               (TTransform<double> *)((param_5->AllocatorInstance).Data + (longlong)param_6 * 0x60),
               (TTransform<double> *)&param_2->_padding_);
    pTVar5 = &local_88;
  }
  else {
    pTVar5 = ComputeLocalSpaceTargetTM(&local_e8,param_2,param_3,param_4,param_6);
  }
  dVar2 = (pTVar5->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar5->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar5->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar5->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar5->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar5->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// ComputeWorldSpaceTargetTM @ 1482ef7b0

TTransform<double> * __cdecl
ComputeWorldSpaceTargetTM
          (TTransform<double> *__return_storage_ptr__,USkeletalMeshComponent *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  
  uVar7 = 0;
  if (param_3 < param_2->ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar2)();
      return pTVar8;
    }
  }
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  pFVar1 = (param_2->AllocatorInstance).Data;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar5;
  UE::Math::TTransform<double>::Multiply
            (__return_storage_ptr__,(TTransform<double> *)(pFVar1 + (longlong)param_3 * 0x60),
             (TTransform<double> *)&param_1->_padding_);
  return __return_storage_ptr__;
}

// CreateChaosQueryFilterData @ 1482f0be0

FQueryFilterData * __cdecl
CreateChaosQueryFilterData
          (FQueryFilterData *__return_storage_ptr__,uchar param_1,bool param_2,
          FCollisionResponseContainer *param_3,FCollisionQueryParams *param_4,
          FCollisionObjectQueryParams *param_5,bool param_6)

{
  FCollisionFilterData local_18;
  
  if (param_5->ObjectTypesToQuery == 0) {
    CreateTraceQueryFilterData(&local_18,param_1,param_2,param_3,param_4);
  }
  else {
    local_18.Word2 = 0;
    local_18.Word0 = 0;
    local_18.Word3 = param_2 + 1 | ((uint)param_5->IgnoreMask << 5 | (uint)param_6) << 0x15;
    local_18.Word1 = param_5->ObjectTypesToQuery;
  }
  Chaos::Filter::FQueryFilterBuilder::BuildFromLegacyQueryFilter(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// CreateObjectQueryFilterData @ 1482f19e0

FCollisionFilterData * __cdecl
CreateObjectQueryFilterData
          (FCollisionFilterData *__return_storage_ptr__,bool param_1,int param_2,
          FCollisionObjectQueryParams *param_3)

{
  byte bVar1;
  
  bVar1 = param_3->IgnoreMask;
  __return_storage_ptr__->Word2 = 0;
  __return_storage_ptr__->Word0 = 0;
  __return_storage_ptr__->Word1 = param_3->ObjectTypesToQuery;
  __return_storage_ptr__->Word3 = ((uint)bVar1 << 5 | param_2) << 0x15 | param_1 + 1;
  return __return_storage_ptr__;
}

// CreateQueryFilterData @ 1482f1a20

FCollisionFilterData * __cdecl
CreateQueryFilterData
          (FCollisionFilterData *__return_storage_ptr__,uchar param_1,bool param_2,
          FCollisionResponseContainer *param_3,FCollisionQueryParams *param_4,
          FCollisionObjectQueryParams *param_5,bool param_6)

{
  if (param_5->ObjectTypesToQuery != 0) {
    __return_storage_ptr__->Word1 = 0;
    __return_storage_ptr__->Word2 = 0;
    __return_storage_ptr__->Word0 = 0;
    __return_storage_ptr__->Word3 = param_2 + 1;
    __return_storage_ptr__->Word1 = param_5->ObjectTypesToQuery;
    __return_storage_ptr__->Word3 =
         ((uint)param_5->IgnoreMask << 5 | (uint)param_6) << 0x15 | param_2 + 1;
    return __return_storage_ptr__;
  }
  CreateTraceQueryFilterData(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateTraceQueryFilterData @ 1482f1a90

FCollisionFilterData * __cdecl
CreateTraceQueryFilterData
          (FCollisionFilterData *__return_storage_ptr__,uchar param_1,bool param_2,
          FCollisionResponseContainer *param_3,FCollisionQueryParams *param_4)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 1;
  __return_storage_ptr__->Word3 = param_2 + 1;
  puVar1 = &(param_3->field0_0x0)._s_0.Pawn;
  __return_storage_ptr__->Word1 = 0;
  __return_storage_ptr__->Word2 = 0;
  __return_storage_ptr__->Word0 = 1;
  do {
    if (((FCollisionResponseContainer_u_0_s_0 *)(puVar1 + -2))->WorldStatic == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2;
    }
    else if (((FCollisionResponseContainer_u_0_s_0 *)(puVar1 + -2))->WorldStatic == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2;
    }
    if (puVar1[-1] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 1;
    }
    else if (puVar1[-1] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 1;
    }
    if (*puVar1 == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 2;
    }
    else if (*puVar1 == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 2;
    }
    if (puVar1[1] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 3;
    }
    else if (puVar1[1] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 3;
    }
    if (puVar1[2] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 4;
    }
    else if (puVar1[2] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 4;
    }
    if (puVar1[3] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 5;
    }
    else if (puVar1[3] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 5;
    }
    if (puVar1[4] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 6;
    }
    else if (puVar1[4] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 6;
    }
    if (puVar1[5] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 7;
    }
    else if (puVar1[5] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 7;
    }
    if (puVar1[6] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 8;
    }
    else if (puVar1[6] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 8;
    }
    if (puVar1[7] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 9;
    }
    else if (puVar1[7] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 9;
    }
    if (puVar1[8] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 10;
    }
    else if (puVar1[8] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 10;
    }
    if (puVar1[9] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 0xb;
    }
    else if (puVar1[9] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 0xb;
    }
    if (puVar1[10] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 0xc;
    }
    else if (puVar1[10] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 0xc;
    }
    if (puVar1[0xb] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 0xd;
    }
    else if (puVar1[0xb] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 0xd;
    }
    if (puVar1[0xc] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 0xe;
    }
    else if (puVar1[0xc] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 0xe;
    }
    if (puVar1[0xd] == '\x02') {
      __return_storage_ptr__->Word1 = __return_storage_ptr__->Word1 | uVar2 << 0xf;
    }
    else if (puVar1[0xd] == '\x01') {
      __return_storage_ptr__->Word2 = __return_storage_ptr__->Word2 | uVar2 << 0xf;
    }
    uVar3 = uVar3 + 0x10;
    uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
    puVar1 = puVar1 + 0x10;
  } while (uVar3 < 0x20);
  __return_storage_ptr__->Word3 =
       __return_storage_ptr__->Word3 | ((uint)param_4->IgnoreMask << 5 | (uint)param_1) << 0x15;
  return __return_storage_ptr__;
}

// DeferredPhysResourceCleanup @ 1482f4230

void __cdecl DeferredPhysResourceCleanup(void)

{
  return;
}

// DrawHalfCircle @ 1482fd630

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
DrawHalfCircle(FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
              TVector<double> *param_4,FColor param_5,float param_6)

{
  double dVar1;
  int iVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar3;
  double dVar4;
  float fVar5;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  
  iVar2 = 1;
  dVar1 = (double)param_6;
  local_80 = dVar1 * (param_3->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  dStack_78 = dVar1 * (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  local_70 = dVar1 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  fVar5 = (float)((uint)param_5.field0_0x0 >> 0x18) * __real_3b808081;
  do {
    __libm_sse2_sincosf_();
    dVar4 = (double)extraout_XMM0_Da;
    dVar3 = (double)extraout_XMM0_Db;
    local_a8 = FLinearColor::sRGBToLinearTable[param_5.field0_0x0._s_0.R];
    local_a0 = FLinearColor::sRGBToLinearTable[param_5.field0_0x0._s_0.B];
    local_98 = (dVar3 * (param_3->field0_0x0)._s_0.X + dVar4 * (param_4->field0_0x0)._s_0.X) * dVar1
               + (param_2->field0_0x0)._s_0.X;
    local_a4 = FLinearColor::sRGBToLinearTable[param_5.field0_0x0._s_0.G];
    dStack_90 = (dVar4 * (param_4->field0_0x0)._s_0.Y + dVar3 * (param_3->field0_0x0)._s_0.Y) *
                dVar1 + (param_2->field0_0x0)._s_0.Y;
    local_88 = (dVar4 * (param_4->field0_0x0)._s_0.Z + dVar3 * (param_3->field0_0x0)._s_0.Z) * dVar1
               + (param_2->field0_0x0)._s_0.Z;
    local_9c = fVar5;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_80,&local_98,&local_a8,0,0,0,0);
    iVar2 = iVar2 + 1;
    local_70 = local_88;
    local_80 = local_98;
    dStack_78 = dStack_90;
  } while (iVar2 != 0x11);
  return;
}

// DrawLinearLimit @ 1482fd850

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
DrawLinearLimit(FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
               TVector<double> *param_4,float param_5,bool param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double *pdVar6;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  
  fVar5 = __real_3b808081;
  local_a0 = (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  local_90 = (param_3->field0_0x0)._s_0.Z;
  if (param_6) {
    local_98 = (double)param_5;
    local_a0 = local_98 * local_a0;
    local_90 = local_98 * local_90;
    local_98 = local_98 * dVar4;
    local_88 = dVar1 - local_a0;
    local_a0 = local_a0 + dVar1;
    local_80 = dVar2 - local_98;
    local_98 = local_98 + dVar2;
    local_78 = dVar3 - local_90;
    local_90 = local_90 + dVar3;
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    local_bc = (float)JointLimitColor.field0_0x0._3_1_ * __real_3b808081;
    (**(code **)(param_1->_padding_ + 0x30))(local_c0,&local_88,&local_a0,&local_c8,0,0,0,0);
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    dVar1 = (double)(param_7 * __real_3d03126f);
    local_bc = (float)JointLimitColor.field0_0x0._3_1_ * fVar5;
    local_b8 = dVar1 * (param_4->field0_0x0)._s_0.X;
    local_b0 = dVar1 * (param_4->field0_0x0)._s_0.Y;
    local_a8 = dVar1 * (param_4->field0_0x0)._s_0.Z;
    local_70 = local_b8 + local_88;
    local_68 = local_b0 + local_80;
    local_60 = local_a8 + local_78;
    local_b8 = local_88 - local_b8;
    local_b0 = local_80 - local_b0;
    local_a8 = local_78 - local_a8;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_b8,&local_70,&local_c8,0,0,0,0);
    pdVar6 = &local_70;
    local_70 = dVar1 * (param_4->field0_0x0)._s_0.X;
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    local_68 = dVar1 * (param_4->field0_0x0)._s_0.Y;
    dVar1 = dVar1 * (param_4->field0_0x0)._s_0.Z;
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    local_b8 = local_70 + local_a0;
    local_70 = local_a0 - local_70;
    local_a8 = dVar1 + local_90;
    local_60 = local_90 - dVar1;
    local_b0 = local_68 + local_98;
    local_68 = local_98 - local_68;
  }
  else {
    local_80 = (double)(param_7 * __real_3e75c28f);
    local_88 = local_80 * local_a0;
    local_78 = local_80 * local_90;
    local_80 = local_80 * dVar4;
    local_a0 = dVar1 - local_88;
    local_88 = local_88 + dVar1;
    local_98 = dVar2 - local_80;
    local_80 = local_80 + dVar2;
    local_90 = dVar3 - local_78;
    local_78 = local_78 + dVar3;
    local_c8 = FLinearColor::sRGBToLinearTable[JointRefColor.field0_0x0._s_0.R];
    local_c4 = FLinearColor::sRGBToLinearTable[JointRefColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointRefColor.field0_0x0._s_0.B];
    local_bc = (float)JointRefColor.field0_0x0._3_1_ * __real_3b808081;
    (**(code **)(param_1->_padding_ + 0x30))(local_c0,&local_a0,&local_88,&local_c8,0,0,0,0);
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    dVar1 = (double)(param_7 * __real_3d03126f);
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    local_bc = (float)JointLimitColor.field0_0x0._3_1_ * fVar5;
    local_b8 = dVar1 * (param_3->field0_0x0)._s_0.X + local_a0 +
               dVar1 * (param_4->field0_0x0)._s_0.X;
    local_b0 = dVar1 * (param_3->field0_0x0)._s_0.Y + local_98 +
               dVar1 * (param_4->field0_0x0)._s_0.Y;
    local_a8 = dVar1 * (param_3->field0_0x0)._s_0.Z + local_90 +
               dVar1 * (param_4->field0_0x0)._s_0.Z;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_a0,&local_b8,&local_c8,0,0,0,0);
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    local_b8 = (dVar1 * (param_3->field0_0x0)._s_0.X + local_a0) -
               dVar1 * (param_4->field0_0x0)._s_0.X;
    local_bc = (float)JointLimitColor.field0_0x0._3_1_ * fVar5;
    local_b0 = (dVar1 * (param_3->field0_0x0)._s_0.Y + local_98) -
               dVar1 * (param_4->field0_0x0)._s_0.Y;
    local_a8 = (dVar1 * (param_3->field0_0x0)._s_0.Z + local_90) -
               dVar1 * (param_4->field0_0x0)._s_0.Z;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_a0,&local_b8,&local_c8,0,0,0,0);
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    local_bc = (float)JointLimitColor.field0_0x0._3_1_ * fVar5;
    local_b8 = (local_88 - dVar1 * (param_3->field0_0x0)._s_0.X) +
               dVar1 * (param_4->field0_0x0)._s_0.X;
    local_b0 = (local_80 - dVar1 * (param_3->field0_0x0)._s_0.Y) +
               dVar1 * (param_4->field0_0x0)._s_0.Y;
    local_a8 = (local_78 - dVar1 * (param_3->field0_0x0)._s_0.Z) +
               dVar1 * (param_4->field0_0x0)._s_0.Z;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_88,&local_b8,&local_c8,0,0,0,0);
    pdVar6 = &local_88;
    local_c8 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.R];
    local_c4 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.G];
    local_c0 = FLinearColor::sRGBToLinearTable[JointLimitColor.field0_0x0._s_0.B];
    local_b8 = (local_88 - dVar1 * (param_3->field0_0x0)._s_0.X) -
               dVar1 * (param_4->field0_0x0)._s_0.X;
    local_b0 = (local_80 - dVar1 * (param_3->field0_0x0)._s_0.Y) -
               dVar1 * (param_4->field0_0x0)._s_0.Y;
    local_a8 = (local_78 - dVar1 * (param_3->field0_0x0)._s_0.Z) -
               dVar1 * (param_4->field0_0x0)._s_0.Z;
  }
  local_bc = (float)JointLimitColor.field0_0x0._3_1_ * fVar5;
  (**(code **)(param_1->_padding_ + 0x30))(param_1,pdVar6,&local_b8,&local_c8,0,0,0,0);
  return;
}

// DrawSkinnedLevelSetLattice @ 1482fdff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
DrawSkinnedLevelSetLattice
          (FPrimitiveDrawInterface *param_1,TMatrix<double> *param_2,FColor param_3,
          TWeightedLatticeImplicitObject<Chaos::FLevelSet> *param_4)

{
  double *pdVar1;
  undefined4 uVar2;
  code *pcVar3;
  ushort *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  int iVar20;
  ulonglong uVar21;
  float fVar22;
  byte bStackX_19;
  byte bStackX_1a;
  int local_res20;
  ulonglong in_stack_fffffffffffffd58;
  ulonglong in_stack_fffffffffffffd60;
  int local_284;
  undefined8 local_278;
  int local_270;
  TArray<float,TSizedDefaultAllocator<32>_> local_268;
  int local_258;
  undefined8 local_250;
  double local_248;
  double local_240;
  double local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
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
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  double local_98;
  double local_90;
  double local_88;
  
  dVar7 = __real_3ff0000000000000;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar17 = 0xffffffff;
  if (SkinnedLatticeBoneWeight < *(int *)&param_4->field_0xa0) {
    uVar17 = SkinnedLatticeBoneWeight;
  }
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  local_278 = 0;
  local_270 = 0;
  if (-1 < (int)uVar17) {
    local_270 = *(int *)&param_4->field_0x58 + 1;
    iVar18 = *(int *)&param_4->field_0x50 + 1;
    iVar10 = *(int *)&param_4->field_0x54 + 1;
    local_250 = (double)CONCAT44(iVar10,iVar18);
    local_278 = CONCAT44(iVar10,iVar18);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum
              (&local_268,iVar10 * local_270 * iVar18,Default);
    iVar12 = *(int *)&param_4->field_0x50 + 1;
    iVar18 = *(int *)&param_4->field_0x54 + 1;
    iVar10 = *(int *)&param_4->field_0x58 + 1;
    if (0 < iVar12) {
      local_res20 = 0;
      do {
        iVar20 = 0;
        if (0 < iVar18) {
          do {
            iVar16 = 0;
            if (0 < iVar10) {
              do {
                uVar13 = (ulonglong)local_268.ArrayNum;
                uVar14 = (local_278._4_4_ * local_res20 + iVar20) * local_270 + iVar16;
                uVar15 = 0;
                if ((int)uVar14 < local_268.ArrayNum) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                if (uVar15 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar14;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                *(undefined4 *)(local_268.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) = 0;
                uVar13 = (ulonglong)*(int *)&param_4->field_0x90;
                uVar14 = (local_res20 * *(int *)&param_4->field_0x7c + iVar20) *
                         *(int *)&param_4->field_0x80 + iVar16;
                uVar15 = 0;
                if ((int)uVar14 < *(int *)&param_4->field_0x90) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                if (uVar15 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar14;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                lVar11 = 0;
                puVar19 = (ushort *)
                          ((longlong)(int)uVar14 * 0x4c + *(longlong *)&param_4->field_0x88);
                puVar4 = puVar19;
                if ((ulonglong)(byte)*puVar19 != 0) {
                  do {
                    if (puVar4[1] == uVar17) {
                      uVar2 = *(undefined4 *)(puVar19 + lVar11 * 2 + 0xe);
                      uVar13 = (ulonglong)local_268.ArrayNum;
                      uVar14 = (local_278._4_4_ * local_res20 + iVar20) * local_270 + iVar16;
                      uVar15 = 0;
                      if ((int)uVar14 < local_268.ArrayNum) {
                        uVar15 = ~uVar14 >> 0x1f;
                      }
                      if (uVar15 == 0) {
                        in_stack_fffffffffffffd58 = (ulonglong)(int)uVar14;
                        bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        in_stack_fffffffffffffd60 = uVar13;
                        if (bVar9) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                      }
                      fVar8 = PointSize;
                      *(undefined4 *)(local_268.AllocatorInstance.Data + (longlong)(int)uVar14 * 4)
                           = uVar2;
                      uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                      local_214 = 0x3f800000;
                      pcVar3 = *(code **)(param_1->_padding_ + 0x40);
                      uVar14 = (local_res20 * *(int *)&param_4->field_0x184 + iVar20) *
                               *(int *)&param_4->field_0x188 + iVar16;
                      uVar15 = 0;
                      if ((int)uVar14 < *(int *)&param_4->field_0x198) {
                        uVar15 = ~uVar14 >> 0x1f;
                      }
                      local_220 = uVar2;
                      local_21c = uVar2;
                      local_218 = uVar2;
                      if (uVar15 == 0) {
                        in_stack_fffffffffffffd58 = (ulonglong)(int)uVar14;
                        bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        in_stack_fffffffffffffd60 = uVar13;
                        if (bVar9) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                      }
                      in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                      pdVar1 = (double *)
                               (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar14 * 0x18);
                      dVar5 = *pdVar1;
                      dVar6 = pdVar1[1];
                      local_228 = *(double *)
                                   (*(longlong *)&param_4->field_0x190 + 0x10 +
                                   (longlong)(int)uVar14 * 0x18);
                      local_98 = dVar5 * param_2->M[0][0] + dVar6 * param_2->M[1][0] +
                                 param_2->M[2][0] * local_228 + param_2->M[3][0] * dVar7;
                      local_90 = dVar5 * param_2->M[0][1] + dVar6 * param_2->M[1][1] +
                                 param_2->M[2][1] * local_228 + param_2->M[3][1] * dVar7;
                      local_88 = param_2->M[1][2] * dVar6 + param_2->M[0][2] * dVar5 +
                                 param_2->M[2][2] * local_228 + param_2->M[3][2] * dVar7;
                      (*pcVar3)(param_1,&local_98,&local_220,fVar8,in_stack_fffffffffffffd58);
                      break;
                    }
                    lVar11 = lVar11 + 1;
                    puVar4 = puVar4 + 1;
                  } while (lVar11 < (longlong)(ulonglong)(byte)*puVar19);
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar10);
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < iVar18);
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 < iVar12);
    }
  }
  fVar8 = __real_3b808081;
  local_250 = *(double *)&param_4->field_0x50;
  local_a8 = &local_278;
  local_a0 = &param_4->field_0x120;
  iVar18 = (int)local_250;
  iVar10 = *(int *)&param_4->field_0x58;
  local_284 = 0;
  bVar9 = 0 < (int)local_250;
  if (bVar9) {
    local_250._4_4_ = (int)((ulonglong)local_250 >> 0x20);
    local_258 = local_250._4_4_;
    iVar12 = local_250._4_4_;
    do {
      iVar20 = 0;
      if (0 < iVar12) {
        do {
          iVar16 = 0;
          if (0 < iVar10) {
            do {
              bVar9 = `DrawSkinnedLevelSetLattice'::__l2::<lambda_1>::operator()
                                (&local_a8,local_284,iVar20,iVar16);
              if (bVar9) {
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                uVar15 = (local_284 * *(int *)&param_4->field_0x184 + iVar20) *
                         *(int *)&param_4->field_0x188 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (local_284 * *(int *)&param_4->field_0x184 + iVar20) *
                         *(int *)&param_4->field_0x188 + 1 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_250 = dVar5 * param_2->M[0][0] + dVar6 * param_2->M[1][0] +
                            param_2->M[2][0] * local_228 + dVar7 * param_2->M[3][0];
                local_248 = dVar5 * param_2->M[0][1] + dVar6 * param_2->M[1][1] +
                            param_2->M[2][1] * local_228 + dVar7 * param_2->M[3][1];
                local_240 = dVar5 * param_2->M[0][2] + param_2->M[1][2] * dVar6 +
                            local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (local_284 * *(int *)&param_4->field_0x184 + 1 + iVar20) *
                         *(int *)&param_4->field_0x188 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_150 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                            local_228 * param_2->M[2][0] + param_2->M[3][0] * dVar7;
                local_148 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                            local_228 * param_2->M[2][1] + param_2->M[3][1] * dVar7;
                local_140 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                            local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (local_284 * *(int *)&param_4->field_0x184 + 1 + iVar20) *
                         *(int *)&param_4->field_0x188 + 1 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_138 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                            local_228 * param_2->M[2][0] + param_2->M[3][0] * dVar7;
                local_130 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                            local_228 * param_2->M[2][1] + param_2->M[3][1] * dVar7;
                local_128 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                            local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                iVar12 = local_284 + 1;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (iVar12 * *(int *)&param_4->field_0x184 + iVar20) *
                         *(int *)&param_4->field_0x188 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_120 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                            local_228 * param_2->M[2][0] + dVar7 * param_2->M[3][0];
                local_118 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                            local_228 * param_2->M[2][1] + dVar7 * param_2->M[3][1];
                local_110 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                            local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (iVar12 * *(int *)&param_4->field_0x184 + iVar20) *
                         *(int *)&param_4->field_0x188 + 1 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_108 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                            local_228 * param_2->M[2][0] + dVar7 * param_2->M[3][0];
                local_100 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                            local_228 * param_2->M[2][1] + dVar7 * param_2->M[3][1];
                local_f8 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                           local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (iVar12 * *(int *)&param_4->field_0x184 + 1 + iVar20) *
                         *(int *)&param_4->field_0x188 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_f0 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                           local_228 * param_2->M[2][0] + dVar7 * param_2->M[3][0];
                local_e8 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                           local_228 * param_2->M[2][1] + dVar7 * param_2->M[3][1];
                local_e0 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                           local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar13 = (ulonglong)*(int *)&param_4->field_0x198;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                uVar15 = (iVar20 + 1 + iVar12 * *(int *)&param_4->field_0x184) *
                         *(int *)&param_4->field_0x188 + 1 + iVar16;
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&param_4->field_0x198) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                local_c0 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                           local_228 * param_2->M[2][0] + dVar7 * param_2->M[3][0];
                local_b8 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                           local_228 * param_2->M[2][1] + dVar7 * param_2->M[3][1];
                local_b0 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                           local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                if (uVar17 == 0) {
                  in_stack_fffffffffffffd58 = (ulonglong)(int)uVar15;
                  bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  in_stack_fffffffffffffd60 = uVar13;
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                pdVar1 = (double *)
                         (*(longlong *)&param_4->field_0x190 + (longlong)(int)uVar15 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_228 = *(double *)
                             (*(longlong *)&param_4->field_0x190 + 0x10 +
                             (longlong)(int)uVar15 * 0x18);
                local_d8 = dVar6 * param_2->M[1][0] + dVar5 * param_2->M[0][0] +
                           local_228 * param_2->M[2][0] + dVar7 * param_2->M[3][0];
                local_d0 = dVar6 * param_2->M[1][1] + dVar5 * param_2->M[0][1] +
                           local_228 * param_2->M[2][1] + dVar7 * param_2->M[3][1];
                local_c8 = dVar6 * param_2->M[1][2] + dVar5 * param_2->M[0][2] +
                           local_228 * param_2->M[2][2] + dVar7 * param_2->M[3][2];
                (**(code **)(param_1->_padding_ + 0x20))(param_1,0,0xc,0,in_stack_fffffffffffffd58);
                bStackX_1a = param_3.field0_0x0._2_1_;
                uVar21 = (ulonglong)bStackX_1a;
                bStackX_19 = param_3.field0_0x0._1_1_;
                uVar13 = (ulonglong)bStackX_19;
                local_210 = FLinearColor::sRGBToLinearTable[uVar21];
                local_20c = FLinearColor::sRGBToLinearTable[uVar13];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                uVar17 = (uint)param_3.field0_0x0 & 0xff;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_208 = FLinearColor::sRGBToLinearTable[uVar17];
                fVar22 = (float)((uint)param_3.field0_0x0 >> 0x18) * fVar8;
                local_204 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_250,&local_150,&local_210,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_200 = FLinearColor::sRGBToLinearTable[uVar21];
                local_1fc = FLinearColor::sRGBToLinearTable[uVar13];
                local_1f8 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_1f4 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_250,&local_138,&local_200,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_1f0 = FLinearColor::sRGBToLinearTable[uVar21];
                local_1ec = FLinearColor::sRGBToLinearTable[uVar13];
                local_1e8 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_1e4 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_250,&local_108,&local_1f0,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_1e0 = FLinearColor::sRGBToLinearTable[uVar21];
                local_1dc = FLinearColor::sRGBToLinearTable[uVar13];
                local_1d8 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_1d4 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_150,&local_120,&local_1e0,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_1d0 = FLinearColor::sRGBToLinearTable[uVar21];
                local_1cc = FLinearColor::sRGBToLinearTable[uVar13];
                local_1c8 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_1c4 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_150,&local_f0,&local_1d0,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_1c0 = FLinearColor::sRGBToLinearTable[uVar21];
                local_1bc = FLinearColor::sRGBToLinearTable[uVar13];
                local_1b8 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_1b4 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_138,&local_120,&local_1c0,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_1b0 = FLinearColor::sRGBToLinearTable[uVar21];
                local_1ac = FLinearColor::sRGBToLinearTable[uVar13];
                local_1a8 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_1a4 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_138,&local_c0,&local_1b0,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_1a0 = FLinearColor::sRGBToLinearTable[uVar21];
                local_19c = FLinearColor::sRGBToLinearTable[uVar13];
                local_198 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_194 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_120,&local_d8,&local_1a0,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_190 = FLinearColor::sRGBToLinearTable[uVar21];
                local_18c = FLinearColor::sRGBToLinearTable[uVar13];
                local_188 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_184 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_108,&local_f0,&local_190,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_180 = FLinearColor::sRGBToLinearTable[uVar21];
                local_17c = FLinearColor::sRGBToLinearTable[uVar13];
                local_178 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_174 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_108,&local_c0,&local_180,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_170 = FLinearColor::sRGBToLinearTable[uVar21];
                local_16c = FLinearColor::sRGBToLinearTable[uVar13];
                local_168 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_164 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_f0,&local_d8,&local_170,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
                local_15c = FLinearColor::sRGBToLinearTable[uVar13];
                local_160 = FLinearColor::sRGBToLinearTable[uVar21];
                local_158 = FLinearColor::sRGBToLinearTable[uVar17];
                in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffff00000000;
                in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
                local_154 = fVar22;
                (**(code **)(param_1->_padding_ + 0x30))
                          (param_1,&local_c0,&local_d8,&local_160,in_stack_fffffffffffffd58,
                           in_stack_fffffffffffffd60,0,0);
              }
              iVar16 = iVar16 + 1;
              iVar12 = local_258;
            } while (iVar16 < iVar10);
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < iVar12);
      }
      local_284 = local_284 + 1;
    } while (local_284 < iVar18);
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkPhysicsComponent @ 1483002f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkPhysicsComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkPhysicsSettingsComponent @ 148300300

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkPhysicsSettingsComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicalAnimationComponent @ 148300310

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicalAnimationComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicalMaterialMask @ 148300320

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicalMaterialMask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsAsset @ 148300330

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsBodyInstanceOwnerInterface @ 148300340

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsBodyInstanceOwnerInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsCollisionHandler @ 148300350

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsCollisionHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsConstraintActor @ 148300360

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsConstraintActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsConstraintComponent @ 148300370

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsConstraintComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsConstraintTemplate @ 148300380

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsConstraintTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsHandleComponent @ 148300390

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsHandleComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsObjectBlueprintLibrary @ 1483003a0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsObjectBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsQueryHandler @ 1483003b0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsQueryHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsSettings @ 1483003c0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsThruster @ 1483003d0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsThruster(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRadialForceComponent @ 1483003e0

void __cdecl EmptyLinkFunctionForGeneratedCodeRadialForceComponent(void)

{
  return;
}

// GetBoneIndexHelper @ 148307800

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl GetBoneIndexHelper(FName param_1,USkeletalMeshComponent *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UPhysicsAsset *pUVar6;
  int *piVar7;
  
  pUVar6 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)param_2);
  if ((param_1 == (FName)0x0) && (pUVar6 != (UPhysicsAsset *)0x0)) {
    uVar3 = USkeletalMeshComponent::FindRootBodyIndex(param_2);
    if ((-1 < (int)uVar3) && ((int)uVar3 < (pUVar6->SkeletalBodySetups).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar3 < (pUVar6->SkeletalBodySetups).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      param_1 = *(FName *)(*(longlong *)
                            ((pUVar6->SkeletalBodySetups).AllocatorInstance.Data +
                            (longlong)(int)uVar3 * 8) + 0x28);
    }
  }
  if (param_3 != (int *)0x0) {
    if ((pUVar6 == (UPhysicsAsset *)0x0) ||
       (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&pUVar6->BodySetupIndexMap,param_1), piVar7 == (int *)0x0)) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar7;
    }
    *param_3 = iVar5;
  }
  iVar5 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_2,param_1);
  return iVar5;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy @ 14830cab0

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy.
      ComparisonIndex = FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy.Number =
           FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy.
           ComparisonIndex.Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceInputProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy @ 14830cb50

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy.
      ComparisonIndex = FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy.Number =
           FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy.
           ComparisonIndex.Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataDeltaSourceStateProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy @ 14830cbf0

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.ComparisonIndex
           = FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.Number =
           FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.
           ComparisonIndex.Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy @ 14830cc90

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy.ComparisonIndex
           = FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy.Number =
           FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy.
           ComparisonIndex.Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantStateProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy @ 14830cd30

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy.Number = FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy.ComparisonIndex.
           Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataInputProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy @ 14830cdd0

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy.Number =
           FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy.
           ComparisonIndex.Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataRemoteInputProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy @ 14830ce70

FPropertyNetSerializerInfo * __cdecl
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy
          (void)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy;
    if (_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy.Number = FVar1.Number;
      StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy.ComparisonIndex.
           Value;
      StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy.Number;
      StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataStateProxy = FVar2;
      _Init_thread_footer(&_TSS0);
      return (FPropertyNetSerializerInfo *)&StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)&StaticInstance;
}

// GetSkelBoneTransform @ 14830d1c0

TTransform<double> * __cdecl
GetSkelBoneTransform
          (TTransform<double> *__return_storage_ptr__,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TTransform<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  TTransform<double> *pTVar12;
  
  if ((param_1 != -1) && (param_1 < param_2->ArrayNum)) {
    if (param_1 < 0) {
      bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        pTVar12 = (TTransform<double> *)(*pcVar2)();
        return pTVar12;
      }
    }
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    pFVar1 = (param_2->AllocatorInstance).Data;
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar4,0);
    auVar6._0_8_ = (double)fVar3;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar4,0);
    auVar8._0_8_ = (double)fVar3;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
    auVar10._8_4_ = SUB84((double)fVar4,0);
    auVar10._0_8_ = (double)fVar3;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,(TTransform<double> *)(pFVar1 + (longlong)param_1 * 0x60),
               param_3);
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// HelpBuildAngle @ 14830edc0

float __cdecl HelpBuildAngle(float param_1,EAngularConstraintMotion param_2)

{
  if (param_2 == ACM_Free) {
    return __real_40490fdb;
  }
  if (param_2 != ACM_Locked) {
    return param_1 * __real_3c8efa35;
  }
  return 0.0;
}

// InitGamePhys @ 14830f280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl InitGamePhys(void)

{
  bool bVar1;
  FDelegateHandle FVar2;
  FPhysCommandHandler *pFVar3;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  FPhysCommandHandler local_res8 [2];
  FString local_18;
  
  bVar1 = InitGamePhysCore();
  if (!bVar1) {
    return false;
  }
  FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_InitGamePhys_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnPostEngineInit,(<lambda_1> *)local_res8);
                    /* WARNING: Load size is inaccurate */
  GPostInitHandle.ID = *FVar2.ID;
  pFVar3 = operator_new(0x10);
  GPhysCommandHandler = (FPhysCommandHandler *)0x0;
  if (pFVar3 != (FPhysCommandHandler *)0x0) {
    (pFVar3->PendingCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->PendingCommands).ArrayNum = 0;
    (pFVar3->PendingCommands).ArrayMax = 0;
    GPhysCommandHandler = pFVar3;
  }
  pTVar4 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FPhysCommandHandler>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)pTVar4,local_res8,(pmf_fcd25a09)GPhysCommandHandler);
                    /* WARNING: Load size is inaccurate */
  GPreGarbageCollectDelegateHandle.ID = *FVar2.ID;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pTVar4 = FCoreDelegates::GetMemoryTrimDelegate();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_InitGamePhys_::__l2::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               pTVar4,(<lambda_2> *)&Clear);
    _Init_thread_footer(&_TSS0);
  }
  if (4 < (byte)LogInit._0_1_) {
    FString::FString(&local_18,L"Chaos");
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// MakeActorNameString @ 148310ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
PhysicsLogUtil::MakeActorNameString(FString *__return_storage_ptr__,AActor *param_1)

{
  AActor::GetDebugName(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// MakeActorNameString @ 148310ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
PhysicsLogUtil::MakeActorNameString(FString *__return_storage_ptr__,UActorComponent *param_1)

{
  if (param_1 != (UActorComponent *)0x0) {
    AActor::GetDebugName(__return_storage_ptr__,param_1->OwnerPrivate);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"NULL");
  return __return_storage_ptr__;
}

// MakeCompactNetModeString @ 148310f20

FString * __cdecl
PhysicsLogUtil::MakeCompactNetModeString(FString *__return_storage_ptr__,ENetMode param_1)

{
  if ((param_1 != NM_DedicatedServer) && (param_1 != NM_ListenServer)) {
    if (param_1 != NM_Client) {
      ::ToString(__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"Client");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Server");
  return __return_storage_ptr__;
}

// MakeComponentNameString @ 148310f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
PhysicsLogUtil::MakeComponentNameString(FString *__return_storage_ptr__,UActorComponent *param_1)

{
  AActor *pAVar1;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"NULL");
    return __return_storage_ptr__;
  }
  local_res10 = (FName)param_1->_padding_;
  pAVar1 = param_1->OwnerPrivate;
  if (pAVar1 != (AActor *)0x0) {
    ::FName::ToString(&local_res10,&local_28);
    local_res10 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  ::FName::ToString(&local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeComponentNetIDString @ 148311080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
PhysicsLogUtil::MakeComponentNetIDString(FString *__return_storage_ptr__,UActorComponent *param_1)

{
  AActor *this;
  ENetMode EVar1;
  UNetDriver *pUVar2;
  FNetGUIDCache *this_00;
  wchar_t *pwVar3;
  FString local_28;
  FString local_18;
  
  if ((((param_1 == (UActorComponent *)0x0) || (this = param_1->OwnerPrivate, this == (AActor *)0x0)
       ) || (pUVar2 = AActor::GetNetDriver(this), pUVar2 == (UNetDriver *)0x0)) ||
     ((pUVar2->GuidCache).Object == (FNetGUIDCache *)0x0)) {
    ::FString::FString(__return_storage_ptr__,L"NULL");
    return __return_storage_ptr__;
  }
  EVar1 = AActor::InternalGetNetMode(this);
  this_00 = TSharedPtr<FNetGUIDCache,1>::operator->(&pUVar2->GuidCache);
  FNetGUIDCache::GetNetGUID(this_00,(UObject *)&stack0x00000010);
  ::FString::PrintfImpl(&local_18,L"%llu");
  if ((EVar1 == NM_DedicatedServer) || (EVar1 == NM_ListenServer)) {
    pwVar3 = L"Server";
  }
  else {
    if (EVar1 != NM_Client) {
      ::ToString(&local_28,EVar1);
      goto LAB_14831115c;
    }
    pwVar3 = L"Client";
  }
  ::FString::FString(&local_28,pwVar3);
LAB_14831115c:
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %-6s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ModelToHullsWorker @ 1483111d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
ModelToHullsWorker(FKAggregateGeom *param_1,UModel *param_2,int param_3,bool param_4,
                  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar8 = 0;
  if (param_3 < (param_2->Nodes).ArrayNum) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar1 = (param_2->Nodes).AllocatorInstance.Data;
  lVar10 = (longlong)param_3 * 0x40;
  if (*(int *)(pFVar1 + lVar10 + 0x24) == -1) {
    if ((param_4) &&
       ((pFVar1[lVar10 + 0x36] == (FScriptContainerElement)0x0 ||
        (((byte)pFVar1[lVar10 + 0x37] & 0x21) != 0)))) goto LAB_14831146d;
    dVar5 = (double)(float)((ulonglong)*(undefined8 *)(pFVar1 + lVar10) >> 0x20);
    pFVar2 = (param_5->AllocatorInstance).Data;
    local_88._8_4_ = SUB84(dVar5,0);
    local_88._0_8_ = (double)(float)*(undefined8 *)(pFVar1 + lVar10);
    local_88._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)(float)((ulonglong)*(undefined8 *)(pFVar1 + lVar10 + 8) >> 0x20);
    local_78._8_4_ = SUB84(dVar5,0);
    local_78._0_8_ = (double)(float)*(undefined8 *)(pFVar1 + lVar10 + 8);
    local_78._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    if ((pFVar2 <= (FScriptContainerElement *)local_88) &&
       (((FScriptContainerElement *)local_88 < pFVar2 + (longlong)param_5->ArrayMax * 0x20 &&
        (bVar6 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == param_5->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar9 + 1;
    pFVar3 = (param_5->AllocatorInstance).Data;
    pFVar2 = pFVar3 + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar2 = local_88._0_8_;
    *(undefined8 *)(pFVar2 + 8) = local_88._8_8_;
    pFVar3 = pFVar3 + (longlong)iVar9 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = local_78._0_8_;
    *(undefined8 *)(pFVar3 + 8) = local_78._8_8_;
    bVar6 = AddConvexPrim(param_1,param_5,param_2);
  }
  else {
    dVar5 = (double)(float)((ulonglong)*(undefined8 *)(pFVar1 + lVar10) >> 0x20);
    pFVar2 = (param_5->AllocatorInstance).Data;
    local_a8._8_4_ = SUB84(dVar5,0);
    local_a8._0_8_ = (double)(float)*(undefined8 *)(pFVar1 + lVar10);
    local_a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)(float)((ulonglong)*(undefined8 *)(pFVar1 + lVar10 + 8) >> 0x20);
    local_98._8_4_ = SUB84(dVar5,0);
    local_98._0_8_ = (double)(float)*(undefined8 *)(pFVar1 + lVar10 + 8);
    local_98._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    if (((pFVar2 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 < pFVar2 + (longlong)param_5->ArrayMax * 0x20)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = param_5->ArrayNum;
    if (iVar9 == param_5->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar9 + 1;
    pFVar3 = (param_5->AllocatorInstance).Data;
    pFVar2 = pFVar3 + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar2 = local_a8._0_8_;
    *(undefined8 *)(pFVar2 + 8) = local_a8._8_8_;
    pFVar3 = pFVar3 + (longlong)iVar9 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = local_98._0_8_;
    *(undefined8 *)(pFVar3 + 8) = local_98._8_8_;
    if ((param_4) &&
       ((pFVar1[lVar10 + 0x36] == (FScriptContainerElement)0x0 ||
        (((byte)pFVar1[lVar10 + 0x37] & 0x21) != 0)))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    bVar6 = ModelToHullsWorker(param_1,param_2,*(int *)(pFVar1 + lVar10 + 0x24),bVar6,param_5);
  }
  if (bVar6 == false) {
    return false;
  }
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>::RemoveAt
            (param_5,param_5->ArrayNum + -1,Default);
LAB_14831146d:
  piVar12 = &param_5->ArrayMax;
  piVar11 = &param_5->ArrayNum;
  if (*(int *)(pFVar1 + lVar10 + 0x28) != -1) {
    pFVar2 = (param_5->AllocatorInstance).Data;
    dVar5 = (double)(float)((uint)((ulonglong)*(undefined8 *)(pFVar1 + lVar10) >> 0x20) ^
                           _UNK_150651574);
    local_68._8_4_ = SUB84(dVar5,0);
    local_68._0_8_ =
         (double)(float)((uint)*(undefined8 *)(pFVar1 + lVar10) ^
                        __xmm_80000000800000008000000080000000);
    local_68._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)(float)((uint)((ulonglong)*(undefined8 *)(pFVar1 + lVar10 + 8) >> 0x20) ^
                           _UNK_150651574);
    local_58._8_4_ = SUB84(dVar5,0);
    local_58._0_8_ =
         (double)(float)((uint)*(undefined8 *)(pFVar1 + lVar10 + 8) ^
                        __xmm_80000000800000008000000080000000);
    local_58._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    if (((pFVar2 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < pFVar2 + (longlong)*piVar12 * 0x20)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = *piVar11;
    if (iVar9 == *piVar12) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,&param_5->AllocatorInstance,piVar12);
      *piVar11 = iVar9;
    }
    *piVar11 = iVar9 + 1;
    pFVar3 = (param_5->AllocatorInstance).Data;
    pFVar2 = pFVar3 + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar2 = local_68._0_8_;
    *(undefined8 *)(pFVar2 + 8) = local_68._8_8_;
    pFVar3 = pFVar3 + (longlong)iVar9 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = local_58._0_8_;
    *(undefined8 *)(pFVar3 + 8) = local_58._8_8_;
    if ((param_4) ||
       ((pFVar1[lVar10 + 0x36] != (FScriptContainerElement)0x0 &&
        (((byte)pFVar1[lVar10 + 0x37] & 0x21) == 0)))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    bVar6 = ModelToHullsWorker(param_1,param_2,*(int *)(pFVar1 + lVar10 + 0x28),bVar6,param_5);
    if (!bVar6) {
      return false;
    }
    TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>::RemoveAt
              (param_5,param_5->ArrayNum + -1,Default);
    return true;
  }
  if ((!param_4) &&
     ((pFVar1[lVar10 + 0x36] == (FScriptContainerElement)0x0 ||
      (((byte)pFVar1[lVar10 + 0x37] & 0x21) != 0)))) {
    piVar11 = &param_5->ArrayNum;
    pFVar2 = (param_5->AllocatorInstance).Data;
    dVar5 = (double)(float)((uint)((ulonglong)*(undefined8 *)(pFVar1 + lVar10) >> 0x20) ^
                           _UNK_150651574);
    local_48._8_4_ = SUB84(dVar5,0);
    local_48._0_8_ =
         (double)(float)((uint)*(undefined8 *)(pFVar1 + lVar10) ^
                        __xmm_80000000800000008000000080000000);
    local_48._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)(float)((uint)((ulonglong)*(undefined8 *)(pFVar1 + lVar10 + 8) >> 0x20) ^
                           _UNK_150651574);
    local_38._8_4_ = SUB84(dVar5,0);
    local_38._0_8_ =
         (double)(float)((uint)*(undefined8 *)(pFVar1 + lVar10 + 8) ^
                        __xmm_80000000800000008000000080000000);
    local_38._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    if ((pFVar2 <= (FScriptContainerElement *)local_48) &&
       (((FScriptContainerElement *)local_48 < pFVar2 + (longlong)*piVar12 * 0x20 &&
        (bVar6 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = *piVar11;
    if (iVar9 == param_5->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    *piVar11 = iVar9 + 1;
    pFVar2 = (param_5->AllocatorInstance).Data;
    pFVar1 = pFVar2 + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar1 = local_48._0_8_;
    *(undefined8 *)(pFVar1 + 8) = local_48._8_8_;
    pFVar2 = pFVar2 + (longlong)iVar9 * 0x20 + 0x10;
    *(undefined8 *)pFVar2 = local_38._0_8_;
    *(undefined8 *)(pFVar2 + 8) = local_38._8_8_;
    bVar6 = AddConvexPrim(param_1,param_5,param_2);
    if (!bVar6) {
      return false;
    }
    TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>::RemoveAt
              (param_5,*piVar11 + -1,Default);
  }
  return true;
}

// PostEngineInitialize @ 148317d60

void __cdecl PostEngineInitialize(void)

{
  FChaosSolversModule *pFVar1;
  
  pFVar1 = FChaosSolversModule::GetModule();
  if (pFVar1 != (FChaosSolversModule *)0x0) {
    pFVar1->SettingsProvider = (IChaosSettingsProvider *)&GEngineChaosSettingsProvider;
  }
  return;
}

// SetMotorStrength @ 148321de0

void __cdecl
SetMotorStrength(FConstraintInstance *param_1,FPhysicalAnimationData *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar1 = (double)param_3;
  dVar2 = Chaos::ConstraintSettings::LinearDriveStiffnessScale();
  dVar3 = Chaos::ConstraintSettings::LinearDriveDampingScale();
  dVar4 = Chaos::ConstraintSettings::AngularDriveStiffnessScale();
  dVar5 = Chaos::ConstraintSettings::AngularDriveDampingScale();
  FConstraintInstance::SetAngularDriveParams
            (param_1,(float)(dVar4 * dVar1) * param_2->OrientationStrength,
             (float)(dVar5 * dVar1) * param_2->AngularVelocityStrength,
             param_3 * param_2->MaxAngularForce);
  if (param_2->bIsLocalSimulation == 0) {
    fVar6 = (float)(dVar2 * dVar1) * param_2->PositionStrength;
    fVar8 = (float)(dVar3 * dVar1) * param_2->VelocityStrength;
    fVar7 = param_3 * param_2->MaxLinearForce;
  }
  else {
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
  }
  FConstraintInstance::SetLinearDriveParams(param_1,fVar6,fVar8,fVar7);
  return;
}

// TermGamePhys @ 148324280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TermGamePhys(void)

{
  FScriptContainerElement *pFVar1;
  FPhysCommandHandler *pFVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  if (GPostInitHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,GPostInitHandle);
    GPostInitHandle.ID = 0;
  }
  if (GPhysCommandHandler != (FPhysCommandHandler *)0x0) {
    FPhysCommandHandler::Flush(GPhysCommandHandler);
    this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    if (GPreGarbageCollectDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this,GPreGarbageCollectDelegateHandle);
    }
    pFVar2 = GPhysCommandHandler;
    if (GPhysCommandHandler != (FPhysCommandHandler *)0x0) {
      if (((GPhysCommandHandler->PendingCommands).ArrayNum != 0) && (2 < (byte)LogPhysics._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      pFVar1 = (pFVar2->PendingCommands).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      operator_delete(pFVar2,0x10);
    }
    GPhysCommandHandler = (FPhysCommandHandler *)0x0;
  }
  TermGamePhysCore();
  return;
}

// UpdatePhysicalAnimationSettings @ 148329040

bool __cdecl
UpdatePhysicalAnimationSettings
          (FName param_1,FPhysicalAnimationData *param_2,
          TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32>_> *param_3,UPhysicsAsset *param_4
          )

{
  FName *pFVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  FName *pFVar13;
  
  piVar12 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&param_4->BodySetupIndexMap,param_1);
  if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
    return false;
  }
  pFVar13 = (FName *)(param_3->AllocatorInstance).Data;
  pFVar1 = (FName *)((longlong)pFVar13 + (longlong)param_3->ArrayNum * 0x24);
  do {
    if (pFVar13 == pFVar1) {
LAB_1483290bd:
      if (param_3->ArrayNum == param_3->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x424,&param_3->AllocatorInstance,&param_3->ArrayMax);
        param_3->ArrayNum = iVar10;
      }
      uVar2 = param_3->ArrayNum;
      param_3->ArrayNum = uVar2 + 1;
      uVar11 = 0;
      if ((int)uVar2 < (int)(uVar2 + 1)) {
        uVar11 = ~uVar2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar13 = (FName *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x24);
LAB_148329131:
      uVar4 = *(undefined4 *)&param_2->field_0x8;
      fVar5 = param_2->OrientationStrength;
      *pFVar13 = param_2->BodyName;
      pFVar13[1].ComparisonIndex = (FNameEntryId)uVar4;
      pFVar13[1].Number = (uint)fVar5;
      fVar5 = param_2->PositionStrength;
      fVar6 = param_2->VelocityStrength;
      fVar7 = param_2->MaxLinearForce;
      pFVar13[2].ComparisonIndex = (FNameEntryId)param_2->AngularVelocityStrength;
      pFVar13[2].Number = (uint)fVar5;
      pFVar13[3].ComparisonIndex = (FNameEntryId)fVar6;
      pFVar13[3].Number = (uint)fVar7;
      pFVar13[4].ComparisonIndex.Value = (uint)param_2->MaxAngularForce;
      *pFVar13 = param_1;
      return true;
    }
    if (*pFVar13 == param_1) {
      if (pFVar13 != (FName *)0x0) goto LAB_148329131;
      goto LAB_1483290bd;
    }
    pFVar13 = (FName *)&pFVar13[4].Number;
  } while( true );
}

// UpdateWorldBoneTM @ 14832a510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
UpdateWorldBoneTM(TArray<FAssetWorldBoneTM,TMemStackAllocator<16>_> *param_1,
                 TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
                 int param_3,USkeletalMeshComponent *param_4,TTransform<double> *param_5,
                 TVector<double> *param_6)

{
  FScriptContainerElement *pFVar1;
  FAssetWorldBoneTM *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  USkeletalMesh *pUVar19;
  FReferenceSkeleton *this;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_228 [32];
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  lVar21 = (longlong)param_3;
  uVar22 = (uint)~param_3 >> 0x1f;
  uVar17 = 0;
  if (param_3 < param_1->ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar16 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->AllocatorInstance).Data[lVar21].bUpToDate == false) {
    fVar27 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar28 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar29 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar30 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar31 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar32 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar33 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar34 = GlobalVectorConstants::FloatZero.m128_f32[3];
    fVar35 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar36 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar37 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar38 = GlobalVectorConstants::Float1110.m128_f32[3];
    local_1d8.Rotation.ZW.m128d_f64[0] = (double)fVar29;
    local_1d8.Rotation.ZW.m128d_f64[1] = (double)fVar30;
    uVar23 = SUB84((double)fVar34,0);
    uVar24 = (undefined4)((ulonglong)(double)fVar34 >> 0x20);
    local_1d8.Translation.ZW.m128d_f64[1]._0_4_ = uVar23;
    local_1d8.Translation.ZW.m128d_f64[0] = (double)fVar33;
    local_1d8.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
    local_178.Translation.ZW.m128d_f64[1]._0_4_ = uVar23;
    local_178.Translation.ZW.m128d_f64[0] = (double)fVar33;
    local_178.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
    uVar23 = SUB84((double)fVar38,0);
    uVar24 = (undefined4)((ulonglong)(double)fVar38 >> 0x20);
    uVar25 = SUB84((double)fVar28,0);
    uVar26 = (undefined4)((ulonglong)(double)fVar28 >> 0x20);
    local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
    local_1d8.Scale3D.ZW.m128d_f64[0] = (double)fVar37;
    local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
    local_178.Scale3D.ZW.m128d_f64[0] = (double)fVar37;
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
    local_1d8.Rotation.XY.m128d_f64[1]._0_4_ = uVar25;
    local_1d8.Rotation.XY.m128d_f64[0] = (double)fVar27;
    local_1d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar26;
    local_178.Rotation.XY.m128d_f64[1]._0_4_ = uVar25;
    local_178.Rotation.XY.m128d_f64[0] = (double)fVar27;
    local_178.Rotation.XY.m128d_f64[1]._4_4_ = uVar26;
    local_1d8.Translation.XY.m128d_f64[0] = (double)fVar31;
    local_1d8.Translation.XY.m128d_f64[1] = (double)fVar32;
    uVar23 = SUB84((double)fVar36,0);
    uVar24 = (undefined4)((ulonglong)(double)fVar36 >> 0x20);
    local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar23;
    local_1d8.Scale3D.XY.m128d_f64[0] = (double)fVar35;
    local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar24;
    local_178.Translation.XY.m128d_f64[1] = local_1d8.Translation.XY.m128d_f64[1];
    local_178.Translation.XY.m128d_f64[0] = local_1d8.Translation.XY.m128d_f64[0];
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ = uVar23;
    local_178.Scale3D.XY.m128d_f64[0] = (double)fVar35;
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ = uVar24;
    local_178.Rotation.ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
    local_178.Rotation.ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
    if (param_3 == 0) {
      local_1d8.Rotation.XY.m128d_f64 = *&(param_5->Rotation).XY.m128d_f64;
      local_1d8.Translation.XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
      local_1d8.Translation.XY.m128d_f64[1] = (param_5->Translation).XY.m128d_f64[1];
      local_1d8.Translation.ZW.m128d_f64 = *&(param_5->Translation).ZW.m128d_f64;
      local_1d8.Scale3D.XY.m128d_f64 = *&(param_5->Scale3D).XY.m128d_f64;
      local_1d8.Scale3D.ZW.m128d_f64 = *&(param_5->Scale3D).ZW.m128d_f64;
      local_1d8.Rotation.ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
      local_1d8.Rotation.ZW.m128d_f64[1] = (param_5->Rotation).ZW.m128d_f64[1];
    }
    else {
      pUVar19 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_4);
      this = (FReferenceSkeleton *)(**(code **)(pUVar19->_padding_ + 800))(pUVar19);
      uVar18 = FReferenceSkeleton::GetParentIndex(this,param_3);
      UpdateWorldBoneTM(param_1,param_2,uVar18,param_4,param_5,param_6);
      uVar17 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      local_1d8.Rotation.XY.m128d_f64 = *&pFVar2[(int)uVar18].TM.Rotation.XY.m128d_f64;
      local_1d8.Translation.XY.m128d_f64[0] = pFVar2[(int)uVar18].TM.Translation.XY.m128d_f64[0];
      local_1d8.Translation.XY.m128d_f64[1] = pFVar2[(int)uVar18].TM.Translation.XY.m128d_f64[1];
      local_1d8.Translation.ZW.m128d_f64 = *&pFVar2[(int)uVar18].TM.Translation.ZW.m128d_f64;
      local_1d8.Scale3D.XY.m128d_f64 = *&pFVar2[(int)uVar18].TM.Scale3D.XY.m128d_f64;
      local_1d8.Scale3D.ZW.m128d_f64 = *&pFVar2[(int)uVar18].TM.Scale3D.ZW.m128d_f64;
      if (param_3 < 0) {
        return;
      }
      fVar27 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar28 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar29 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar30 = GlobalVectorConstants::Float0001.m128_f32[3];
      fVar31 = GlobalVectorConstants::FloatZero.m128_f32[0];
      fVar32 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar33 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar34 = GlobalVectorConstants::FloatZero.m128_f32[3];
      fVar35 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar36 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar37 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar38 = GlobalVectorConstants::Float1110.m128_f32[3];
      local_1d8.Rotation.ZW.m128d_f64[0] = pFVar2[(int)uVar18].TM.Rotation.ZW.m128d_f64[0];
      local_1d8.Rotation.ZW.m128d_f64[1] = pFVar2[(int)uVar18].TM.Rotation.ZW.m128d_f64[1];
    }
    if (param_3 < param_2->ArrayNum) {
      if (param_3 < 0) {
        bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar35 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar36 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar37 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar38 = GlobalVectorConstants::Float1110.m128_f32[3];
        fVar31 = GlobalVectorConstants::FloatZero.m128_f32[0];
        fVar32 = GlobalVectorConstants::FloatZero.m128_f32[1];
        fVar33 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar34 = GlobalVectorConstants::FloatZero.m128_f32[3];
        fVar27 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar28 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar29 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar30 = GlobalVectorConstants::Float0001.m128_f32[3];
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar20 = lVar21 * 0x60;
      local_178.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar1 + lVar20);
      local_178.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar20 + 0x10);
      local_178.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar20 + 0x10 + 8);
      local_178.Scale3D.XY.m128d_f64 = *(double (*) [2])(pFVar1 + lVar20 + 0x40);
      local_178.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pFVar1 + lVar20 + 0x50);
      dVar4 = *(double *)(pFVar1 + lVar20 + 0x20 + 8) * (param_6->field0_0x0)._s_0.Y;
      dVar5 = *(double *)(pFVar1 + lVar20 + 0x30 + 8) * 0.0;
      local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar28,0);
      local_118.Rotation.XY.m128d_f64[0] = (double)fVar27;
      local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar28 >> 0x20);
      local_118.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar32,0);
      local_118.Translation.XY.m128d_f64[0] = (double)fVar31;
      local_118.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar32 >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar30,0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)fVar29;
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar30 >> 0x20);
      local_118.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar34,0);
      local_118.Translation.ZW.m128d_f64[0] = (double)fVar33;
      local_118.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar34 >> 0x20);
      local_178.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
      local_178.Translation.XY.m128d_f64[0] =
           *(double *)(pFVar1 + lVar20 + 0x20) * (param_6->field0_0x0)._s_0.X;
      local_178.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar38,0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar37;
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar38 >> 0x20);
      local_178.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
      local_178.Translation.ZW.m128d_f64[0] =
           *(double *)(pFVar1 + lVar20 + 0x30) * (param_6->field0_0x0)._s_0.Z;
      local_178.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar36,0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)fVar35;
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar36 >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_118,&local_178,&local_1d8);
      dVar4 = local_118.Rotation.XY.m128d_f64[0];
      dVar5 = local_118.Rotation.XY.m128d_f64[1];
      dVar6 = local_118.Rotation.ZW.m128d_f64[0];
      dVar7 = local_118.Rotation.ZW.m128d_f64[1];
      dVar8 = local_118.Translation.XY.m128d_f64[0];
      dVar9 = local_118.Translation.XY.m128d_f64[1];
      uVar17 = 0;
      if (param_3 < param_1->ArrayNum) {
        uVar17 = uVar22;
      }
      dVar10 = local_118.Translation.ZW.m128d_f64[0];
      dVar11 = local_118.Translation.ZW.m128d_f64[1];
      dVar12 = local_118.Scale3D.XY.m128d_f64[0];
      dVar13 = local_118.Scale3D.XY.m128d_f64[1];
      dVar14 = local_118.Scale3D.ZW.m128d_f64[0];
      dVar15 = local_118.Scale3D.ZW.m128d_f64[1];
      if ((uVar17 == 0) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar2[lVar21].TM.Rotation.XY.m128d_f64[0] = dVar4;
      pFVar2[lVar21].TM.Rotation.XY.m128d_f64[1] = dVar5;
      pFVar2[lVar21].TM.Rotation.ZW.m128d_f64[0] = dVar6;
      pFVar2[lVar21].TM.Rotation.ZW.m128d_f64[1] = dVar7;
      pFVar2[lVar21].TM.Translation.XY.m128d_f64[0] = dVar8;
      pFVar2[lVar21].TM.Translation.XY.m128d_f64[1] = dVar9;
      pFVar2[lVar21].TM.Translation.ZW.m128d_f64[0] = dVar10;
      pFVar2[lVar21].TM.Translation.ZW.m128d_f64[1] = dVar11;
      pFVar2[lVar21].TM.Scale3D.XY.m128d_f64[0] = dVar12;
      pFVar2[lVar21].TM.Scale3D.XY.m128d_f64[1] = dVar13;
      pFVar2[lVar21].TM.Scale3D.ZW.m128d_f64[0] = dVar14;
      pFVar2[lVar21].TM.Scale3D.ZW.m128d_f64[1] = dVar15;
      uVar17 = 0;
      if (param_3 < param_1->ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->AllocatorInstance).Data[lVar21].bUpToDate = true;
    }
  }
  return;
}

// Z_Construct_UClass_APhysicsConstraintActor_NoRegister @ 14832b100

UClass * __cdecl Z_Construct_UClass_APhysicsConstraintActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintActor",
               &Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton,
               APhysicsConstraintActor::StaticRegisterNativesAPhysicsConstraintActor,0x2e0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APhysicsConstraintActor>,
               InternalVTableHelperCtorCaller<APhysicsConstraintActor>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton;
}

// Z_Construct_UClass_APhysicsThruster_NoRegister @ 14832b1c0

UClass * __cdecl Z_Construct_UClass_APhysicsThruster_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThruster",
               &Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton,
               APhysicsThruster::StaticRegisterNativesAPhysicsThruster,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APhysicsThruster>,
               InternalVTableHelperCtorCaller<APhysicsThruster>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsThruster.InnerSingleton;
}

// Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister @ 14832b280

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSettingsComponent",
               &Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton,
               UNetworkPhysicsSettingsComponent::
               StaticRegisterNativesUNetworkPhysicsSettingsComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkPhysicsSettingsComponent>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton;
}

// Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister @ 14832b340

UClass * __cdecl Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSystem",
               &Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton,
               UNetworkPhysicsSystem::StaticRegisterNativesUNetworkPhysicsSystem,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNetworkPhysicsSystem>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSystem.InnerSingleton;
}

// Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister @ 14832b400

UClass * __cdecl Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicalAnimationComponent",
               &Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton,
               UPhysicalAnimationComponent::StaticRegisterNativesUPhysicalAnimationComponent,0x100,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicalAnimationComponent>,
               InternalVTableHelperCtorCaller<UPhysicalAnimationComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton;
}

// Z_Construct_UClass_UPhysicalMaterialMask_NoRegister @ 14832b4c0

UClass * __cdecl Z_Construct_UClass_UPhysicalMaterialMask_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicalMaterialMask",
               &Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton,
               UPhysicalMaterialMask::StaticRegisterNativesUPhysicalMaterialMask,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPhysicalMaterialMask>,
               InternalVTableHelperCtorCaller<UPhysicalMaterialMask>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsAsset_NoRegister @ 14832b570

UClass * __cdecl Z_Construct_UClass_UPhysicsAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsAsset",
               &Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton,
               UPhysicsAsset::StaticRegisterNativesUPhysicsAsset,0x168,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UPhysicsAsset>,InternalVTableHelperCtorCaller<UPhysicsAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister @ 14832b620

UClass * __cdecl Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsBodyInstanceOwnerResolver",
               &Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton,
               UPhysicsBodyInstanceOwnerResolver::
               StaticRegisterNativesUPhysicsBodyInstanceOwnerResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsBodyInstanceOwnerResolver>,
               InternalVTableHelperCtorCaller<UPhysicsBodyInstanceOwnerResolver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister @ 14832b6e0

UClass * __cdecl Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsCollisionHandler",
               &Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton,
               UPhysicsCollisionHandler::StaticRegisterNativesUPhysicsCollisionHandler,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsCollisionHandler>,
               InternalVTableHelperCtorCaller<UPhysicsCollisionHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsHandleComponent_NoRegister @ 14832b790

UClass * __cdecl Z_Construct_UClass_UPhysicsHandleComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsHandleComponent",
               &Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton,
               UPhysicsHandleComponent::StaticRegisterNativesUPhysicsHandleComponent,0x520,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsHandleComponent>,
               InternalVTableHelperCtorCaller<UPhysicsHandleComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister @ 14832b850

UClass * __cdecl Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsObjectBlueprintLibrary",
               &Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton,
               UPhysicsObjectBlueprintLibrary::StaticRegisterNativesUPhysicsObjectBlueprintLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsObjectBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsObjectBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsQueryHandler_NoRegister @ 14832b910

UClass * __cdecl Z_Construct_UClass_UPhysicsQueryHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsQueryHandler",
               &Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton,
               UPhysicsQueryHandler::StaticRegisterNativesUPhysicsQueryHandler,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsQueryHandler>,
               InternalVTableHelperCtorCaller<UPhysicsQueryHandler>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsSettings_NoRegister @ 14832b920

UClass * __cdecl Z_Construct_UClass_UPhysicsSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsSettings",
               &Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton,
               UPhysicsSettings::StaticRegisterNativesUPhysicsSettings,0x248,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsSettings>,
               InternalVTableHelperCtorCaller<UPhysicsSettings>,local_res8,
               UPhysicsSettingsCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton;
}

// Z_Construct_UClass_URadialForceComponent_NoRegister @ 14832b9e0

UClass * __cdecl Z_Construct_UClass_URadialForceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RadialForceComponent",
               &Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton,
               URadialForceComponent::StaticRegisterNativesURadialForceComponent,0x280,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<URadialForceComponent>,
               InternalVTableHelperCtorCaller<URadialForceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPhysicsQueryKind @ 14832baa0

UEnum * __cdecl Z_Construct_UEnum_Engine_EPhysicsQueryKind(void)

{
  if (Z_Registration_Info_UEnum_EPhysicsQueryKind.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicsQueryKind.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPhysicsQueryKind_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicsQueryKind.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNetworkPhysicsData @ 14832bae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkPhysicsData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.InnerSingleton;
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

// CVarSQHitchDetection'' @ 1503f9fe0

void __cdecl `dynamic_atexit_destructor_for_'FSQHitchRepeaterCVars::CVarSQHitchDetection__(void)

{
  FSQHitchRepeaterCVars::CVarSQHitchDetection._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FSQHitchRepeaterCVars::CVarSQHitchDetection);
  return;
}

// CVarSQHitchDetectionForceNames'' @ 1503fa000

void __cdecl
`dynamic_atexit_destructor_for_'FSQHitchRepeaterCVars::CVarSQHitchDetectionForceNames__(void)

{
  FSQHitchRepeaterCVars::CVarSQHitchDetectionForceNames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FSQHitchRepeaterCVars::CVarSQHitchDetectionForceNames);
  return;
}

// CVarSQHitchDetectionThreshold'' @ 1503fa020

void __cdecl
`dynamic_atexit_destructor_for_'FSQHitchRepeaterCVars::CVarSQHitchDetectionThreshold__(void)

{
  FSQHitchRepeaterCVars::CVarSQHitchDetectionThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FSQHitchRepeaterCVars::CVarSQHitchDetectionThreshold);
  return;
}

// ObjectToSettings_External'' @ 1503fa040

void __cdecl
`dynamic_atexit_destructor_for_'UNetworkPhysicsSettingsComponent::ObjectToSettings_External__(void)

{
  UNetworkPhysicsSettingsComponent::ObjectToSettings_External._72_4_ = 0;
  if (UNetworkPhysicsSettingsComponent::ObjectToSettings_External._64_8_ != 0) {
    FMemory::Free((void *)UNetworkPhysicsSettingsComponent::ObjectToSettings_External._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UNetworkPhysicsSettingsComponent::ObjectToSettings_External);
  return;
}

// OnPhysDispatchNotifications'' @ 1503fa080

void __cdecl `dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysDispatchNotifications__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FPhysicsDelegates::OnPhysDispatchNotifications._8_8_,
             FPhysicsDelegates::OnPhysDispatchNotifications._16_4_);
  if (FPhysicsDelegates::OnPhysDispatchNotifications._8_8_ != 0) {
    FMemory::Free((void *)FPhysicsDelegates::OnPhysDispatchNotifications._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FPhysicsDelegates::OnPhysDispatchNotifications);
  return;
}

// OnPhysSceneInit'' @ 1503fa0c0

void __cdecl `dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysSceneInit__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FPhysicsDelegates::OnPhysSceneInit._8_8_,FPhysicsDelegates::OnPhysSceneInit._16_4_);
  if (FPhysicsDelegates::OnPhysSceneInit._8_8_ != 0) {
    FMemory::Free((void *)FPhysicsDelegates::OnPhysSceneInit._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FPhysicsDelegates::OnPhysSceneInit);
  return;
}

// OnPhysSceneTerm'' @ 1503fa100

void __cdecl `dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysSceneTerm__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FPhysicsDelegates::OnPhysSceneTerm._8_8_,FPhysicsDelegates::OnPhysSceneTerm._16_4_);
  if (FPhysicsDelegates::OnPhysSceneTerm._8_8_ != 0) {
    FMemory::Free((void *)FPhysicsDelegates::OnPhysSceneTerm._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FPhysicsDelegates::OnPhysSceneTerm);
  return;
}

// OnPhysicsAssetChanged'' @ 1503fa140

void __cdecl `dynamic_atexit_destructor_for_'FPhysicsDelegates::OnPhysicsAssetChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FPhysicsDelegates::OnPhysicsAssetChanged._8_8_,
             FPhysicsDelegates::OnPhysicsAssetChanged._16_4_);
  if (FPhysicsDelegates::OnPhysicsAssetChanged._8_8_ != 0) {
    FMemory::Free((void *)FPhysicsDelegates::OnPhysicsAssetChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FPhysicsDelegates::OnPhysicsAssetChanged);
  return;
}

// SettingsNetworkPhysicsComponent_Default'' @ 1503fa180

void __cdecl
`dynamic_atexit_destructor_for_'FAsyncNetworkPhysicsComponent::
SettingsNetworkPhysicsComponent_Default__(void)

{
  if (FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.InputDecayCurve.
      EditorCurveData.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.
                  InputDecayCurve.EditorCurveData.Keys.AllocatorInstance.Data);
  }
  FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.InputDecayCurve.
  EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  if (FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.InputDecayCurve.
      EditorCurveData._padding_ != 0) {
    FMemory::Free((void *)FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.
                          InputDecayCurve.EditorCurveData._padding_);
  }
  FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.InputDecayCurve.
  EditorCurveData._padding_._0_4_ = 0;
  if (FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.InputDecayCurve.
      EditorCurveData._padding_ != 0) {
    FMemory::Free((void *)FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.
                          InputDecayCurve.EditorCurveData._padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FAsyncNetworkPhysicsComponent::SettingsNetworkPhysicsComponent_Default.
                 InputDecayCurve.EditorCurveData._padding_);
  return;
}

// SettingsNetworkPhysicsData_Default'' @ 1503fa1f0

void __cdecl
`dynamic_atexit_destructor_for_'UNetworkPhysicsSettingsComponent::
SettingsNetworkPhysicsData_Default__(void)

{
  if (UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
      NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData.Keys.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
                  NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData.Keys.
                  AllocatorInstance.Data);
  }
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
  NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  if (UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
      NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_ != 0) {
    FMemory::Free((void *)UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
                          NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_)
    ;
  }
  UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
  NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_._0_4_ = 0;
  if (UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
      NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_ != 0) {
    FMemory::Free((void *)UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
                          NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_)
    ;
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default.
                 NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData._padding_);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_FParallelBlendPhysicsTask'' @ 1503fa260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_FParallelBlendPhysicsTask__(void)

{
  CPrio_FParallelBlendPhysicsTask.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_FParallelBlendPhysicsTask.Variable);
  if (CPrio_FParallelBlendPhysicsTask.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_FParallelBlendPhysicsTask.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_FParallelBlendPhysicsTask.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_FParallelBlendPhysicsTask.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVaTimeOverDistance'' @ 1503fa2b0

void __cdecl PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVaTimeOverDistance__(void)

{
  CVaTimeOverDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVaTimeOverDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysHardSnap'' @ 1503fa2d0

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarAlwaysHardSnap__(void)

{
  CVarAlwaysHardSnap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysHardSnap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysHardSnap'' @ 1503fa2f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarAlwaysHardSnap__(void)

{
  CVarAlwaysHardSnap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysHardSnap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysResetPhysics'' @ 1503fa310

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarAlwaysResetPhysics__(void)

{
  CVarAlwaysResetPhysics._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysResetPhysics);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAngLerp'' @ 1503fa330

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarAngLerp__(void)

{
  CVarAngLerp._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAngLerp);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAngSet'' @ 1503fa350

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarAngSet__(void)

{
  CVarAngSet._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAngSet);
  return;
}

// `dynamic_atexit_destructor_for_'CVarApplyAsyncSleepState'' @ 1503fa370

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarApplyAsyncSleepState__(void)

{
  CVarApplyAsyncSleepState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarApplyAsyncSleepState);
  return;
}

// `dynamic_atexit_destructor_for_'CVarApplyInputDecayOverSetTime'' @ 1503fa390

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarApplyInputDecayOverSetTime__(void)

{
  CVarApplyInputDecayOverSetTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarApplyInputDecayOverSetTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAverageReceiveIntervalSmoothing'' @ 1503fa3b0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarAverageReceiveIntervalSmoothing__(void)

{
  CVarAverageReceiveIntervalSmoothing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAverageReceiveIntervalSmoothing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBaseDistanceRadiusMultiplier'' @ 1503fa3d0

void __cdecl
PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarBaseDistanceRadiusMultiplier__(void)

{
  CVarBaseDistanceRadiusMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBaseDistanceRadiusMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBaseDistancesForFullPrediction'' @ 1503fa3f0

void __cdecl
PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarBaseDistancesForFullPrediction__
          (void)

{
  CVarBaseDistancesForFullPrediction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBaseDistancesForFullPrediction)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarBaseDistancesForResimulationMode'' @ 1503fa410

void __cdecl
PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarBaseDistancesForResimulationMode__
          (void)

{
  CVarBaseDistancesForResimulationMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBaseDistancesForResimulationMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClothVizDrawSkinnedLattice'' @ 1503fa430

void __cdecl _dynamic_atexit_destructor_for__CVarClothVizDrawSkinnedLattice__(void)

{
  CVarClothVizDrawSkinnedLattice._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClothVizDrawSkinnedLattice);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCorrectConnectedBodies'' @ 1503fa450

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarCorrectConnectedBodies__(void)

{
  CVarCorrectConnectedBodies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCorrectConnectedBodies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCorrectConnectedBodiesFriction'' @ 1503fa470

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarCorrectConnectedBodiesFriction__(void)

{
  CVarCorrectConnectedBodiesFriction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCorrectConnectedBodiesFriction)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarCorrectionAsVelocity'' @ 1503fa490

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarCorrectionAsVelocity__(void)

{
  CVarCorrectionAsVelocity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCorrectionAsVelocity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultCorrectConnectedBodies'' @ 1503fa4b0

void __cdecl
PhysicsReplicationCVars::DefaultReplicationCVars::
_dynamic_atexit_destructor_for__CVarDefaultCorrectConnectedBodies__(void)

{
  CVarDefaultCorrectConnectedBodies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultCorrectConnectedBodies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultCorrectConnectedBodiesFriction'' @ 1503fa4d0

void __cdecl
PhysicsReplicationCVars::DefaultReplicationCVars::
_dynamic_atexit_destructor_for__CVarDefaultCorrectConnectedBodiesFriction__(void)

{
  CVarDefaultCorrectConnectedBodiesFriction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDefaultCorrectConnectedBodiesFriction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultLegacyHardsnapInPT'' @ 1503fa4f0

void __cdecl
PhysicsReplicationCVars::DefaultReplicationCVars::
_dynamic_atexit_destructor_for__CVarDefaultLegacyHardsnapInPT__(void)

{
  CVarDefaultLegacyHardsnapInPT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultLegacyHardsnapInPT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableErrorVelocityLimits'' @ 1503fa510

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarDisableErrorVelocityLimits__(void)

{
  CVarDisableErrorVelocityLimits._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableErrorVelocityLimits);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableSoftSnap'' @ 1503fa530

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarDisableSoftSnap__(void)

{
  CVarDisableSoftSnap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableSoftSnap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDontClearTarget'' @ 1503fa550

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarDontClearTarget__(void)

{
  CVarDontClearTarget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDontClearTarget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebug'' @ 1503fa570

void __cdecl PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarDrawDebug__(void)

{
  CVarDrawDebug._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugTargets'' @ 1503fa590

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarDrawDebugTargets__(void)

{
  CVarDrawDebugTargets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugTargets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugVectors'' @ 1503fa5b0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarDrawDebugVectors__(void)

{
  CVarDrawDebugVectors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugVectors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugWorstLatency'' @ 1503fa5d0

void __cdecl
PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarDrawDebugWorstLatency__(void)

{
  CVarDrawDebugWorstLatency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugWorstLatency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugZOffset'' @ 1503fa5f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarDrawDebugZOffset__(void)

{
  CVarDrawDebugZOffset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugZOffset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingDecreaseAverageMultiplier'' @ 1503fa610

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingDecreaseAverageMultiplier__(void)

{
  CVarDynamicInputScalingDecreaseAverageMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicInputScalingDecreaseAverageMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingDecreaseTimeInterval'' @ 1503fa630

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingDecreaseTimeInterval__(void)

{
  CVarDynamicInputScalingDecreaseTimeInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicInputScalingDecreaseTimeInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingEnabled'' @ 1503fa650

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingEnabled__(void)

{
  CVarDynamicInputScalingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicInputScalingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingIncreaseAverageMultiplier'' @ 1503fa670

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingIncreaseAverageMultiplier__(void)

{
  CVarDynamicInputScalingIncreaseAverageMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicInputScalingIncreaseAverageMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingIncreaseTimeInterval'' @ 1503fa690

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingIncreaseTimeInterval__(void)

{
  CVarDynamicInputScalingIncreaseTimeInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicInputScalingIncreaseTimeInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingMaxInputsPercent'' @ 1503fa6b0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingMaxInputsPercent__(void)

{
  CVarDynamicInputScalingMaxInputsPercent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicInputScalingMaxInputsPercent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicInputScalingMinInputs'' @ 1503fa6d0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarDynamicInputScalingMinInputs__(void)

{
  CVarDynamicInputScalingMinInputs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicInputScalingMinInputs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEarlyOutAngle'' @ 1503fa6f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarEarlyOutAngle__(void)

{
  CVarEarlyOutAngle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEarlyOutAngle);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEarlyOutDistanceSqr'' @ 1503fa710

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarEarlyOutDistanceSqr__(void)

{
  CVarEarlyOutDistanceSqr._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEarlyOutDistanceSqr);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEarlyOutWithVelocity'' @ 1503fa730

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarEarlyOutWithVelocity__(void)

{
  CVarEarlyOutWithVelocity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEarlyOutWithVelocity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDefaultReplication'' @ 1503fa750

void __cdecl
PhysicsReplicationCVars::_dynamic_atexit_destructor_for__CVarEnableDefaultReplication__(void)

{
  CVarEnableDefaultReplication._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableDefaultReplication);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccAngVelMaxLimit'' @ 1503fa770

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarErrorAccAngVelMaxLimit__(void)

{
  CVarErrorAccAngVelMaxLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorAccAngVelMaxLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccLinVelMaxLimit'' @ 1503fa790

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarErrorAccLinVelMaxLimit__(void)

{
  CVarErrorAccLinVelMaxLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorAccLinVelMaxLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccumulation'' @ 1503fa7b0

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarErrorAccumulation__(void)

{
  CVarErrorAccumulation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorAccumulation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccumulationDecreaseMultiplier'' @ 1503fa7d0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarErrorAccumulationDecreaseMultiplier__(void)

{
  CVarErrorAccumulationDecreaseMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarErrorAccumulationDecreaseMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccumulationDistanceSq'' @ 1503fa7f0

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarErrorAccumulationDistanceSq__(void)

{
  CVarErrorAccumulationDistanceSq._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorAccumulationDistanceSq);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccumulationSeconds'' @ 1503fa810

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarErrorAccumulationSeconds__(void)

{
  CVarErrorAccumulationSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorAccumulationSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorAccumulationSimilarity'' @ 1503fa830

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarErrorAccumulationSimilarity__(void)

{
  CVarErrorAccumulationSimilarity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorAccumulationSimilarity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorPerAngularDifference'' @ 1503fa850

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarErrorPerAngularDifference__(void)

{
  CVarErrorPerAngularDifference._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorPerAngularDifference);
  return;
}

// `dynamic_atexit_destructor_for_'CVarErrorPerLinearDifference'' @ 1503fa870

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarErrorPerLinearDifference__(void)

{
  CVarErrorPerLinearDifference._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarErrorPerLinearDifference);
  return;
}

// `dynamic_atexit_destructor_for_'CVarExtrapolationMinTime'' @ 1503fa890

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarExtrapolationMinTime__(void)

{
  CVarExtrapolationMinTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarExtrapolationMinTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarExtrapolationTimeMultiplier'' @ 1503fa8b0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarExtrapolationTimeMultiplier__(void)

{
  CVarExtrapolationTimeMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarExtrapolationTimeMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInputDecaySetTime'' @ 1503fa8d0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_atexit_destructor_for__CVarInputDecaySetTime__
          (void)

{
  CVarInputDecaySetTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInputDecaySetTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInterpolationTimeMultiplier'' @ 1503fa8f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarInterpolationTimeMultiplier__(void)

{
  CVarInterpolationTimeMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInterpolationTimeMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarKinematicHardSnap'' @ 1503fa910

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarKinematicHardSnap__(void)

{
  CVarKinematicHardSnap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarKinematicHardSnap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarKinematicPrediction'' @ 1503fa930

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarKinematicPrediction__(void)

{
  CVarKinematicPrediction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarKinematicPrediction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLinLerp'' @ 1503fa950

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarLinLerp__(void)

{
  CVarLinLerp._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLinLerp);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLinSet'' @ 1503fa970

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarLinSet__(void)

{
  CVarLinSet._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLinSet);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogPhysicsReplicationHardSnaps'' @ 1503fa990

void __cdecl
PhysicsReplicationCVars::_dynamic_atexit_destructor_for__CVarLogPhysicsReplicationHardSnaps__(void)

{
  CVarLogPhysicsReplicationHardSnaps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogPhysicsReplicationHardSnaps)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxLinearHardSnapDistance'' @ 1503fa9b0

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarMaxLinearHardSnapDistance__(void)

{
  CVarMaxLinearHardSnapDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxLinearHardSnapDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxRestoredStateError'' @ 1503fa9d0

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarMaxRestoredStateError__(void)

{
  CVarMaxRestoredStateError._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxRestoredStateError);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinExpectedDistanceCovered'' @ 1503fa9f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarMinExpectedDistanceCovered__(void)

{
  CVarMinExpectedDistanceCovered._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinExpectedDistanceCovered);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinimumBaseDistance'' @ 1503faa10

void __cdecl
PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarMinimumBaseDistance__(void)

{
  CVarMinimumBaseDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinimumBaseDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingExtrapolation'' @ 1503faa30

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarNetPingExtrapolation__(void)

{
  CVarNetPingExtrapolation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingExtrapolation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingLimit'' @ 1503faa50

void __cdecl CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarNetPingLimit__(void)

{
  CVarNetPingLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOverrideEnabled'' @ 1503faa70

void __cdecl PhysicsReplicationLODCVars::_dynamic_atexit_destructor_for__CVarOverrideEnabled__(void)

{
  CVarOverrideEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOverrideEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPhysicsAnimBlendUpdatesPhysX'' @ 1503faa90

void __cdecl _dynamic_atexit_destructor_for__CVarPhysicsAnimBlendUpdatesPhysX__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPhysicsAnimBlendUpdatesPhysX);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPhysicsNetDebugDrawLifeTime'' @ 1503faab0

void __cdecl
PhysicsReplicationCVars::_dynamic_atexit_destructor_for__CVarPhysicsNetDebugDrawLifeTime__(void)

{
  CVarPhysicsNetDebugDrawLifeTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPhysicsNetDebugDrawLifeTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPhysicsNetDebugDrawShowRepMode'' @ 1503faad0

void __cdecl
PhysicsReplicationCVars::_dynamic_atexit_destructor_for__CVarPhysicsNetDebugDrawShowRepMode__(void)

{
  CVarPhysicsNetDebugDrawShowRepMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPhysicsNetDebugDrawShowRepMode)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarPosCorrectionTimeBase'' @ 1503faaf0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarPosCorrectionTimeBase__(void)

{
  CVarPosCorrectionTimeBase._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPosCorrectionTimeBase);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPosCorrectionTimeMin'' @ 1503fab10

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarPosCorrectionTimeMin__(void)

{
  CVarPosCorrectionTimeMin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPosCorrectionTimeMin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPosCorrectionTimeMultiplier'' @ 1503fab30

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarPosCorrectionTimeMultiplier__(void)

{
  CVarPosCorrectionTimeMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPosCorrectionTimeMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPostResimWaitForUpdate'' @ 1503fab50

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarPostResimWaitForUpdate__(void)

{
  CVarPostResimWaitForUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPostResimWaitForUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderInterpDebugDrawResimBoxScale'' @ 1503fab70

void __cdecl
RenderInterpolationCVars::_dynamic_atexit_destructor_for__CVarRenderInterpDebugDrawResimBoxScale__
          (void)

{
  CVarRenderInterpDebugDrawResimBoxScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRenderInterpDebugDrawResimBoxScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderInterpDebugDrawResimTrigger'' @ 1503fab90

void __cdecl
RenderInterpolationCVars::_dynamic_atexit_destructor_for__CVarRenderInterpDebugDrawResimTrigger__
          (void)

{
  CVarRenderInterpDebugDrawResimTrigger._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRenderInterpDebugDrawResimTrigger);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimAllowInputExtrapolation'' @ 1503fabb0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimAllowInputExtrapolation__(void)

{
  CVarResimAllowInputExtrapolation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimAllowInputExtrapolation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimAllowRewindToClosestState'' @ 1503fabd0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimAllowRewindToClosestState__(void)

{
  CVarResimAllowRewindToClosestState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimAllowRewindToClosestState)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimAngVelStabilityMultiplier'' @ 1503fabf0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimAngVelStabilityMultiplier__(void)

{
  CVarResimAngVelStabilityMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimAngVelStabilityMultiplier)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimApplyDataInsteadOfMergeData'' @ 1503fac10

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimApplyDataInsteadOfMergeData__(void)

{
  CVarResimApplyDataInsteadOfMergeData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimApplyDataInsteadOfMergeData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimApplyPredictiveInterpolationWhenBehindServer'' @ 1503fac30

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimApplyPredictiveInterpolationWhenBehindServer__(void)

{
  CVarResimApplyPredictiveInterpolationWhenBehindServer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimApplyPredictiveInterpolationWhenBehindServer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimApplySimProxyInputAtRuntime'' @ 1503fac50

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimApplySimProxyInputAtRuntime__(void)

{
  CVarResimApplySimProxyInputAtRuntime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimApplySimProxyInputAtRuntime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimApplySimProxyStateAtRuntime'' @ 1503fac70

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimApplySimProxyStateAtRuntime__(void)

{
  CVarResimApplySimProxyStateAtRuntime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimApplySimProxyStateAtRuntime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimCompareInputToTriggerRewind'' @ 1503fac90

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimCompareInputToTriggerRewind__(void)

{
  CVarResimCompareInputToTriggerRewind._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimCompareInputToTriggerRewind);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimCompareStateToTriggerRewind'' @ 1503facb0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimCompareStateToTriggerRewind__(void)

{
  CVarResimCompareStateToTriggerRewind._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimCompareStateToTriggerRewind);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimCompareStateToTriggerRewindIncludeSimProxies'' @ 1503facd0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimCompareStateToTriggerRewindIncludeSimProxies__(void)

{
  CVarResimCompareStateToTriggerRewindIncludeSimProxies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimCompareStateToTriggerRewindIncludeSimProxies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimDisableReplicationOnInteraction'' @ 1503facf0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimDisableReplicationOnInteraction__(void)

{
  CVarResimDisableReplicationOnInteraction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimDisableReplicationOnInteraction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimDrawDebug'' @ 1503fad10

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_atexit_destructor_for__CVarResimDrawDebug__
          (void)

{
  CVarResimDrawDebug._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimDrawDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimEnableReliableFlow'' @ 1503fad30

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimEnableReliableFlow__(void)

{
  CVarResimEnableReliableFlow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimEnableReliableFlow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimEnableStatefulDeltaSerialization'' @ 1503fad50

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimEnableStatefulDeltaSerialization__(void)

{
  CVarResimEnableStatefulDeltaSerialization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimEnableStatefulDeltaSerialization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimEnableUnreliableFlow'' @ 1503fad70

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimEnableUnreliableFlow__(void)

{
  CVarResimEnableUnreliableFlow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimEnableUnreliableFlow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimLogOutOfBoundsTimeLimit'' @ 1503fad90

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimLogOutOfBoundsTimeLimit__(void)

{
  CVarResimLogOutOfBoundsTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimLogOutOfBoundsTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimPosStabilityMultiplier'' @ 1503fadb0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimPosStabilityMultiplier__(void)

{
  CVarResimPosStabilityMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimPosStabilityMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRedundantInputs'' @ 1503fadd0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRedundantInputs__(void)

{
  CVarResimRedundantInputs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimRedundantInputs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRedundantRemoteInputs'' @ 1503fadf0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRedundantRemoteInputs__(void)

{
  CVarResimRedundantRemoteInputs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimRedundantRemoteInputs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRedundantStates'' @ 1503fae10

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRedundantStates__(void)

{
  CVarResimRedundantStates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimRedundantStates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRotStabilityMultiplier'' @ 1503fae30

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRotStabilityMultiplier__(void)

{
  CVarResimRotStabilityMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimRotStabilityMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRuntimeCorrectConnectedBodies'' @ 1503fae50

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRuntimeCorrectConnectedBodies__(void)

{
  CVarResimRuntimeCorrectConnectedBodies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimRuntimeCorrectConnectedBodies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRuntimeCorrectionEnabled'' @ 1503fae70

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRuntimeCorrectionEnabled__(void)

{
  CVarResimRuntimeCorrectionEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimRuntimeCorrectionEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimRuntimeVelocityCorrection'' @ 1503fae90

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimRuntimeVelocityCorrection__(void)

{
  CVarResimRuntimeVelocityCorrection._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimRuntimeVelocityCorrection)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimTimeToSyncStatefulDeltaSource'' @ 1503faeb0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimTimeToSyncStatefulDeltaSource__(void)

{
  CVarResimTimeToSyncStatefulDeltaSource._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimTimeToSyncStatefulDeltaSource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimUseDefaultForDeltaSourceReplication'' @ 1503faed0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimUseDefaultForDeltaSourceReplication__(void)

{
  CVarResimUseDefaultForDeltaSourceReplication._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimUseDefaultForDeltaSourceReplication);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimValidateDataOnGameThread'' @ 1503faef0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimValidateDataOnGameThread__(void)

{
  CVarResimValidateDataOnGameThread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimValidateDataOnGameThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimVelStabilityMultiplier'' @ 1503faf10

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarResimVelStabilityMultiplier__(void)

{
  CVarResimVelStabilityMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimVelStabilityMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRotCorrectionTimeBase'' @ 1503faf30

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarRotCorrectionTimeBase__(void)

{
  CVarRotCorrectionTimeBase._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRotCorrectionTimeBase);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRotCorrectionTimeMin'' @ 1503faf50

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarRotCorrectionTimeMin__(void)

{
  CVarRotCorrectionTimeMin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRotCorrectionTimeMin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRotCorrectionTimeMultiplier'' @ 1503faf70

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarRotCorrectionTimeMultiplier__(void)

{
  CVarRotCorrectionTimeMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRotCorrectionTimeMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRotInterpolationTimeMultiplier'' @ 1503faf90

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarRotInterpolationTimeMultiplier__(void)

{
  CVarRotInterpolationTimeMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRotInterpolationTimeMultiplier)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimProxyRepMode'' @ 1503fafb0

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::_dynamic_atexit_destructor_for__CVarSimProxyRepMode__
          (void)

{
  CVarSimProxyRepMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimProxyRepMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipPhysicsReplication'' @ 1503fafd0

void __cdecl
CharacterMovementCVars::_dynamic_atexit_destructor_for__CVarSkipPhysicsReplication__(void)

{
  CVarSkipPhysicsReplication._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipPhysicsReplication);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipReplication'' @ 1503faff0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSkipReplication__(void)

{
  CVarSkipReplication._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipReplication);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipSkeletalRepOptimization'' @ 1503fb010

void __cdecl
PhysicsReplicationCVars::_dynamic_atexit_destructor_for__CVarSkipSkeletalRepOptimization__(void)

{
  CVarSkipSkeletalRepOptimization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipSkeletalRepOptimization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipVelocityRepOnPosEarlyOut'' @ 1503fb030

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSkipVelocityRepOnPosEarlyOut__(void)

{
  CVarSkipVelocityRepOnPosEarlyOut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipVelocityRepOnPosEarlyOut);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSleepConnectedBodies'' @ 1503fb050

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSleepConnectedBodies__(void)

{
  CVarSleepConnectedBodies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSleepConnectedBodies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSleepSecondsClearTarget'' @ 1503fb070

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSleepSecondsClearTarget__(void)

{
  CVarSleepSecondsClearTarget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSleepSecondsClearTarget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftSnapPosStrength'' @ 1503fb090

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSoftSnapPosStrength__(void)

{
  CVarSoftSnapPosStrength._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftSnapPosStrength);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftSnapRotStrength'' @ 1503fb0b0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSoftSnapRotStrength__(void)

{
  CVarSoftSnapRotStrength._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftSnapRotStrength);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftSnapToSource'' @ 1503fb0d0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarSoftSnapToSource__(void)

{
  CVarSoftSnapToSource._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftSnapToSource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTargetTickAlignmentClampMultiplier'' @ 1503fb0f0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarTargetTickAlignmentClampMultiplier__(void)

{
  CVarTargetTickAlignmentClampMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTargetTickAlignmentClampMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTeleportDetectionEnabled'' @ 1503fb110

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarTeleportDetectionEnabled__(void)

{
  CVarTeleportDetectionEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTeleportDetectionEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTeleportDetectionMinDistance'' @ 1503fb130

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarTeleportDetectionMinDistance__(void)

{
  CVarTeleportDetectionMinDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTeleportDetectionMinDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTeleportDetectionVelocityMultiplier'' @ 1503fb150

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarTeleportDetectionVelocityMultiplier__(void)

{
  CVarTeleportDetectionVelocityMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTeleportDetectionVelocityMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTriggerResimOnInputReceive'' @ 1503fb170

void __cdecl
PhysicsReplicationCVars::ResimulationCVars::
_dynamic_atexit_destructor_for__CVarTriggerResimOnInputReceive__(void)

{
  CVarTriggerResimOnInputReceive._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTriggerResimOnInputReceive);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseParallelBlendPhysics'' @ 1503fb190

void __cdecl _dynamic_atexit_destructor_for__CVarUseParallelBlendPhysics__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseParallelBlendPhysics);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseRBANForDefaultPhysicsAssetSolverType'' @ 1503fb1b0

void __cdecl _dynamic_atexit_destructor_for__CVarUseRBANForDefaultPhysicsAssetSolverType__(void)

{
  CVarUseRBANForDefaultPhysicsAssetSolverType._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseRBANForDefaultPhysicsAssetSolverType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVelocityBased'' @ 1503fb1d0

void __cdecl
PhysicsReplicationCVars::PredictiveInterpolationCVars::
_dynamic_atexit_destructor_for__CVarVelocityBased__(void)

{
  CVarVelocityBased._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVelocityBased);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ReplicationCacheLingerForSeconds'' @ 1503fb1f0

void __cdecl
ReplicationCacheCvars::_dynamic_atexit_destructor_for__CVar_ReplicationCacheLingerForSeconds__(void)

{
  CVar_ReplicationCacheLingerForSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_ReplicationCacheLingerForSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503fb210

void __cdecl
`APhysicsConstraintActor::APhysicsConstraintActor'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  ::ConstructorStatics.KBSJointTexture._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&::ConstructorStatics);
  return;
}

// `dynamic_atexit_destructor_for_'GEngineChaosSettingsProvider'' @ 1503fb230

void __cdecl _dynamic_atexit_destructor_for__GEngineChaosSettingsProvider__(void)

{
  GEngineChaosSettingsProvider._padding_ = (longlong)&___7IChaosSettingsProvider__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogPhysicalMaterialMask'' @ 1503fb250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPhysicalMaterialMask__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPhysicalMaterialMask);
  return;
}

// `dynamic_atexit_destructor_for_'LogPhysicsConstraints'' @ 1503fb270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPhysicsConstraints__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPhysicsConstraints);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates'' @ 1503fb290

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataDeltaSourceInputProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates'' @ 1503fb2b0

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataDeltaSourceStateProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates'' @ 1503fb2d0

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates'' @ 1503fb2f0

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataImportantStateProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates'' @ 1503fb310

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataInputProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates'' @ 1503fb330

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataRemoteInputProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates'' @ 1503fb350

void __cdecl
_dynamic_atexit_destructor_for__NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates__
          (void)

{
  NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates._0_8_ =
       &___7FNetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &NetworkPhysicsRewindDataStateProxyNetSerializerRegistryDelegates);
  return;
}

// `dynamic_atexit_destructor_for_'SimpleSuspensionRaycastGroundPlane'' @ 1503fb370

void __cdecl _dynamic_atexit_destructor_for__SimpleSuspensionRaycastGroundPlane__(void)

{
  longlong *plVar1;
  
  if (SimpleSuspensionRaycastGroundPlane._0_8_ != 0) {
    plVar1 = (longlong *)&SimpleSuspensionRaycastGroundPlane.field_0x10;
    if (SimpleSuspensionRaycastGroundPlane._40_8_ != 0) {
      plVar1 = (longlong *)SimpleSuspensionRaycastGroundPlane._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x0001503fb392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// operator() @ 1505299b0

bool __thiscall
``FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>::operator()'::__l29::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232099499>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232099499>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

