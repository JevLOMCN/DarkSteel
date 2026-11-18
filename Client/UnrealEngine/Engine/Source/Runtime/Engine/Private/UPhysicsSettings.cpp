// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1482cc860

UClass * __cdecl UPhysicsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsSettings",
               &Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton,
               StaticRegisterNativesUPhysicsSettings,0x248,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsSettings>,
               InternalVTableHelperCtorCaller<UPhysicsSettings>,local_res8,
               UPhysicsSettingsCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton;
}

// UPhysicsSettings @ 1482dc150

UPhysicsSettings * __thiscall
UPhysicsSettings::UPhysicsSettings(UPhysicsSettings *this,FVTableHelper *param_1)

{
  UPhysicsSettingsCore::UPhysicsSettingsCore((UPhysicsSettingsCore *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicsSettings__6B_;
  (this->PhysicsPrediction).bEnablePhysicsResimulation_DEPRECATED = false;
  (this->PhysicsPrediction).ResimulationErrorThreshold_DEPRECATED = 10.0;
  (this->PhysicsPrediction).bEnablePhysicsPrediction = false;
  (this->PhysicsPrediction).bEnablePhysicsHistoryCapture = false;
  (this->PhysicsPrediction).MaxSupportedLatencyPrediction = 1000.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorPositionThreshold = true;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorPositionThreshold = 10.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorRotationThreshold = true;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorRotationThreshold = 4.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorLinearVelocityThreshold =
       false;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorLinearVelocityThreshold = 5.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorAngularVelocityThreshold =
       false;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorAngularVelocityThreshold = 2.0;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.bEnablePhysicsReplicationLOD = false;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.MinimumBaseDistance = 200.0;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistanceRadiusMultiplier = 0.75;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistancesForResimulationMode = 0.25;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistancesForFullPrediction = 0.8;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.TimeOverDistance = 0.15;
  (this->PhysicErrorCorrection).PingExtrapolation = 0.1;
  (this->PhysicErrorCorrection).PingLimit = 100.0;
  (this->PhysicErrorCorrection).ErrorPerLinearDifference = 1.0;
  (this->PhysicErrorCorrection).ErrorPerAngularDifference = 1.0;
  (this->PhysicErrorCorrection).MaxRestoredStateError = 1.0;
  (this->PhysicErrorCorrection).MaxLinearHardSnapDistance = 400.0;
  (this->PhysicErrorCorrection).PositionLerp = 0.0;
  (this->PhysicErrorCorrection).AngleLerp = 0.4;
  (this->PhysicErrorCorrection).LinearVelocityCoefficient = 100.0;
  (this->PhysicErrorCorrection).AngularVelocityCoefficient = 10.0;
  (this->PhysicErrorCorrection).ErrorAccumulationSeconds = 0.5;
  (this->PhysicErrorCorrection).ErrorAccumulationDistanceSq = 15.0;
  (this->PhysicErrorCorrection).ErrorAccumulationSimilarity = 100.0;
  (this->PhysicalSurfaces).ArrayNum = 0;
  (this->PhysicalSurfaces).ArrayMax = 0;
  (this->DefaultBroadphaseSettings).bUseMBPOnClient = false;
  (this->DefaultBroadphaseSettings).bUseMBPOnServer = false;
  (this->DefaultBroadphaseSettings).bUseMBPOuterBounds = false;
  (this->DefaultBroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->PhysicalSurfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultBroadphaseSettings).MBPBounds.IsValid = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[0] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[1] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[2] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[3] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[4] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[5] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[6] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.IsValid = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[0] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[1] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[2] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[3] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[4] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[5] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[6] = '\0';
  (this->DefaultBroadphaseSettings).MBPNumSubdivs = 2;
  (this->ChaosSettings).DedicatedThreadBufferMode = Double;
  (this->ChaosSettings).DefaultThreadingModel = TaskGraph;
  (this->ChaosSettings).DedicatedThreadTickMode = VariableCappedWithTarget;
  return this;
}

// UPhysicsSettings @ 1482dc350

UPhysicsSettings * __thiscall
UPhysicsSettings::UPhysicsSettings(UPhysicsSettings *this,FObjectInitializer *param_1)

{
  UPhysicsSettingsCore::UPhysicsSettingsCore((UPhysicsSettingsCore *)this,param_1);
  this->MinPhysicsDeltaTime = 1e-08;
  this->bSuppressFaceRemapTable = false;
  this->_padding_ = (longlong)&___7UPhysicsSettings__6B_;
  (this->PhysicsPrediction).bEnablePhysicsResimulation_DEPRECATED = false;
  (this->PhysicsPrediction).ResimulationErrorThreshold_DEPRECATED = 10.0;
  (this->PhysicsPrediction).bEnablePhysicsPrediction = false;
  (this->PhysicsPrediction).bEnablePhysicsHistoryCapture = false;
  (this->PhysicsPrediction).MaxSupportedLatencyPrediction = 1000.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorPositionThreshold = true;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorPositionThreshold = 10.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorRotationThreshold = true;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorRotationThreshold = 4.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorLinearVelocityThreshold =
       false;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorLinearVelocityThreshold = 5.0;
  (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorAngularVelocityThreshold =
       false;
  (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorAngularVelocityThreshold = 2.0;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.bEnablePhysicsReplicationLOD = false;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.MinimumBaseDistance = 200.0;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistanceRadiusMultiplier = 0.75;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistancesForResimulationMode = 0.25;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistancesForFullPrediction = 0.8;
  (this->PhysicsPrediction).PhysicsReplicationLODSettings.TimeOverDistance = 0.15;
  (this->PhysicErrorCorrection).PingExtrapolation = 0.1;
  (this->PhysicErrorCorrection).PingLimit = 100.0;
  (this->PhysicErrorCorrection).ErrorPerLinearDifference = 1.0;
  (this->PhysicErrorCorrection).ErrorPerAngularDifference = 1.0;
  (this->PhysicErrorCorrection).MaxRestoredStateError = 1.0;
  (this->PhysicErrorCorrection).MaxLinearHardSnapDistance = 400.0;
  (this->PhysicErrorCorrection).PositionLerp = 0.0;
  (this->PhysicErrorCorrection).AngleLerp = 0.4;
  (this->PhysicErrorCorrection).LinearVelocityCoefficient = 100.0;
  (this->PhysicErrorCorrection).AngularVelocityCoefficient = 10.0;
  (this->PhysicErrorCorrection).ErrorAccumulationSeconds = 0.5;
  (this->PhysicErrorCorrection).ErrorAccumulationDistanceSq = 15.0;
  (this->PhysicErrorCorrection).ErrorAccumulationSimilarity = 100.0;
  (this->LockedAxis_DEPRECATED).Value = '\x04';
  (this->PhysicalSurfaces).ArrayNum = 0;
  (this->PhysicalSurfaces).ArrayMax = 0;
  (this->DefaultBroadphaseSettings).bUseMBPOnClient = false;
  (this->DefaultBroadphaseSettings).bUseMBPOnServer = false;
  (this->DefaultBroadphaseSettings).bUseMBPOuterBounds = false;
  this->bDisableActiveActors = false;
  this->AnimPhysicsMinDeltaTime = 0.0;
  this->bSimulateAnimPhysicsAfterReset = false;
  this->MaxPhysicsDeltaTime = 0.033333335;
  this->bSubstepping = false;
  this->bTickPhysicsAsync = false;
  this->AsyncFixedTimeStepSize = 0.033333335;
  this->MaxSubstepDeltaTime = 0.016666668;
  this->MaxSubsteps = 6;
  this->SyncSceneSmoothingFactor = 0.0;
  this->InitialAverageFrameRate = 0.016666668;
  this->PhysXTreeRebuildRate = 10;
  (this->DefaultBroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->PhysicalSurfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultBroadphaseSettings).MBPBounds.IsValid = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[0] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[1] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[2] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[3] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[4] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[5] = '\0';
  (this->DefaultBroadphaseSettings).MBPBounds.Pad[6] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Min.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.X = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Y = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Max.field0_0x0._s_0.Z = 0.0;
  (this->DefaultBroadphaseSettings).MBPOuterBounds.IsValid = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[0] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[1] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[2] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[3] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[4] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[5] = '\0';
  (this->DefaultBroadphaseSettings).MBPOuterBounds.Pad[6] = '\0';
  (this->DefaultBroadphaseSettings).MBPNumSubdivs = 2;
  (this->ChaosSettings).DedicatedThreadBufferMode = Double;
  this->MinDeltaVelocityForHitEvents = 0.0;
  (this->ChaosSettings).DefaultThreadingModel = TaskGraph;
  (this->ChaosSettings).DedicatedThreadTickMode = VariableCappedWithTarget;
  return this;
}

// ~UPhysicsSettings @ 1482de300

void __thiscall UPhysicsSettings::~UPhysicsSettings(UPhysicsSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPhysicsSettings__6B_;
  pFVar1 = (this->PhysicalSurfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPhysicsSettingsCore::~UPhysicsSettingsCore((UPhysicsSettingsCore *)this);
  return;
}

// GetPrivateStaticClass @ 14830c930

UClass * __cdecl UPhysicsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsSettings",
               &Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton,
               StaticRegisterNativesUPhysicsSettings,0x248,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsSettings>,
               InternalVTableHelperCtorCaller<UPhysicsSettings>,local_res8,
               UPhysicsSettingsCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSettings.InnerSingleton;
}

// PostInitProperties @ 148317e90

void __thiscall UPhysicsSettings::PostInitProperties(UPhysicsSettings *this)

{
  float fVar1;
  uchar uVar2;
  UPhysicsSettings *pUVar3;
  
  UPhysicsSettingsCore::PostInitProperties((UPhysicsSettingsCore *)this);
  if ((this->PhysicsPrediction).bEnablePhysicsResimulation_DEPRECATED != false) {
    (this->PhysicsPrediction).bEnablePhysicsHistoryCapture = true;
  }
  fVar1 = (this->PhysicsPrediction).ResimulationErrorThreshold_DEPRECATED;
  if (0.0 < fVar1) {
    (this->PhysicsPrediction).ResimulationSettings.ResimulationErrorPositionThreshold = fVar1;
    (this->PhysicsPrediction).ResimulationSettings.bEnableResimulationErrorPositionThreshold = true;
  }
  uVar2 = (this->LockedAxis_DEPRECATED).Value;
  if (uVar2 != '\x04') {
    if (uVar2 == '\0') {
      (this->DefaultDegreesOfFreedom).Value = '\0';
    }
    else if (uVar2 == '\x01') {
      (this->DefaultDegreesOfFreedom).Value = '\x01';
    }
    else if (uVar2 == '\x02') {
      (this->DefaultDegreesOfFreedom).Value = '\x02';
    }
    else if (uVar2 == '\x03') {
      (this->DefaultDegreesOfFreedom).Value = '\x03';
    }
    (this->LockedAxis_DEPRECATED).Value = '\x04';
  }
  if ((this->ChaosSettings).DefaultThreadingModel == DedicatedThread) {
    (this->ChaosSettings).DefaultThreadingModel = TaskGraph;
  }
  pUVar3 = Get();
  if (pUVar3 == this) {
    UPhysicsSettingsCore::SetDefaultSettings((UPhysicsSettingsCore *)this);
    return;
  }
  return;
}

// StaticRegisterNativesUPhysicsSettings @ 148323c30

void __cdecl UPhysicsSettings::StaticRegisterNativesUPhysicsSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __DefaultConstructor @ 14832bd50

void __cdecl UPhysicsSettings::__DefaultConstructor(FObjectInitializer *param_1)

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

// __VTableCtorCaller @ 14832c230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPhysicsSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPhysicsSettingsCore *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
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

// execGetPhysicsHistoryCount @ 14832da00

void __cdecl
UPhysicsSettings::execGetPhysicsHistoryCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = __real_bf000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = *(float *)&param_1[6].field_0x1c * __real_3a83126f;
  iVar2 = -((int)ROUND(fVar1 - (fVar3 + fVar3) / *(float *)&param_1[10].field_0x8) >> 1);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *(int *)param_3 = iVar2;
  return;
}

