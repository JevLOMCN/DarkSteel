// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 1482cec20

UScriptStruct * __cdecl FNetworkPhysicsSettingsData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData,(UObject *)pUVar1,
                         L"NetworkPhysicsSettingsData");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsData.OuterSingleton;
}

// FNetworkPhysicsSettingsData @ 1482d8900

FNetworkPhysicsSettingsData * __thiscall
FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData
          (FNetworkPhysicsSettingsData *this,FNetworkPhysicsSettingsData *param_1)

{
  UCurveFloat *pUVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined3 uVar12;
  uint uVar13;
  
  this->GeneralSettings = param_1->GeneralSettings;
  fVar2 = (param_1->DefaultReplicationSettings).MaxLinearHardSnapDistance;
  *(undefined4 *)&(this->DefaultReplicationSettings).field_0x0 =
       *(undefined4 *)&(param_1->DefaultReplicationSettings).field_0x0;
  (this->DefaultReplicationSettings).MaxLinearHardSnapDistance = fVar2;
  bVar3 = (param_1->DefaultReplicationSettings).bCorrectConnectedBodies;
  bVar4 = (param_1->DefaultReplicationSettings).bCorrectConnectedBodiesFriction;
  uVar5 = (param_1->DefaultReplicationSettings).field_0xb;
  (this->DefaultReplicationSettings).bHardsnapInPhysicsThread =
       (param_1->DefaultReplicationSettings).bHardsnapInPhysicsThread;
  (this->DefaultReplicationSettings).bCorrectConnectedBodies = bVar3;
  (this->DefaultReplicationSettings).bCorrectConnectedBodiesFriction = bVar4;
  (this->DefaultReplicationSettings).field_0xb = uVar5;
  fVar2 = (param_1->PredictiveInterpolationSettings).PosCorrectionTimeBase;
  fVar6 = (param_1->PredictiveInterpolationSettings).PosCorrectionTimeMin;
  fVar7 = (param_1->PredictiveInterpolationSettings).PosCorrectionTimeMultiplier;
  *(undefined4 *)&(this->PredictiveInterpolationSettings).field_0x0 =
       *(undefined4 *)&(param_1->PredictiveInterpolationSettings).field_0x0;
  (this->PredictiveInterpolationSettings).PosCorrectionTimeBase = fVar2;
  (this->PredictiveInterpolationSettings).PosCorrectionTimeMin = fVar6;
  (this->PredictiveInterpolationSettings).PosCorrectionTimeMultiplier = fVar7;
  fVar2 = (param_1->PredictiveInterpolationSettings).RotCorrectionTimeMin;
  fVar6 = (param_1->PredictiveInterpolationSettings).RotCorrectionTimeMultiplier;
  fVar7 = (param_1->PredictiveInterpolationSettings).PosInterpolationTimeMultiplier;
  (this->PredictiveInterpolationSettings).RotCorrectionTimeBase =
       (param_1->PredictiveInterpolationSettings).RotCorrectionTimeBase;
  (this->PredictiveInterpolationSettings).RotCorrectionTimeMin = fVar2;
  (this->PredictiveInterpolationSettings).RotCorrectionTimeMultiplier = fVar6;
  (this->PredictiveInterpolationSettings).PosInterpolationTimeMultiplier = fVar7;
  fVar2 = (param_1->PredictiveInterpolationSettings).SoftSnapPosStrength;
  fVar6 = (param_1->PredictiveInterpolationSettings).SoftSnapRotStrength;
  bVar3 = (param_1->PredictiveInterpolationSettings).bSoftSnapToSource;
  bVar4 = (param_1->PredictiveInterpolationSettings).bDisableSoftSnap;
  bVar8 = (param_1->PredictiveInterpolationSettings).bSkipVelocityRepOnPosEarlyOut;
  bVar9 = (param_1->PredictiveInterpolationSettings).bPostResimWaitForUpdate;
  (this->PredictiveInterpolationSettings).RotInterpolationTimeMultiplier =
       (param_1->PredictiveInterpolationSettings).RotInterpolationTimeMultiplier;
  (this->PredictiveInterpolationSettings).SoftSnapPosStrength = fVar2;
  (this->PredictiveInterpolationSettings).SoftSnapRotStrength = fVar6;
  (this->PredictiveInterpolationSettings).bSoftSnapToSource = bVar3;
  (this->PredictiveInterpolationSettings).bDisableSoftSnap = bVar4;
  (this->PredictiveInterpolationSettings).bSkipVelocityRepOnPosEarlyOut = bVar8;
  (this->PredictiveInterpolationSettings).bPostResimWaitForUpdate = bVar9;
  bVar3 = (param_1->PredictiveInterpolationSettings).bCorrectConnectedBodiesFriction;
  uVar10 = *(undefined2 *)&(param_1->PredictiveInterpolationSettings).field_0x32;
  (this->PredictiveInterpolationSettings).bCorrectConnectedBodies =
       (param_1->PredictiveInterpolationSettings).bCorrectConnectedBodies;
  (this->PredictiveInterpolationSettings).bCorrectConnectedBodiesFriction = bVar3;
  *(undefined2 *)&(this->PredictiveInterpolationSettings).field_0x32 = uVar10;
  uVar13 = (param_1->ResimulationSettings).ResimulationErrorThreshold_DEPRECATED;
  fVar2 = (param_1->ResimulationSettings).ResimulationErrorPositionThreshold;
  fVar6 = (param_1->ResimulationSettings).ResimulationErrorRotationThreshold;
  *(undefined4 *)&(this->ResimulationSettings).field_0x0 =
       *(undefined4 *)&(param_1->ResimulationSettings).field_0x0;
  (this->ResimulationSettings).ResimulationErrorThreshold_DEPRECATED = uVar13;
  (this->ResimulationSettings).ResimulationErrorPositionThreshold = fVar2;
  (this->ResimulationSettings).ResimulationErrorRotationThreshold = fVar6;
  fVar2 = (param_1->ResimulationSettings).ResimulationErrorAngularVelocityThreshold;
  bVar3 = (param_1->ResimulationSettings).bRuntimeCorrectionEnabled;
  bVar4 = (param_1->ResimulationSettings).bRuntimeVelocityCorrection;
  bVar8 = (param_1->ResimulationSettings).bRuntimeCorrectConnectedBodies;
  uVar5 = (param_1->ResimulationSettings).field_0x1b;
  fVar6 = (param_1->ResimulationSettings).PosStabilityMultiplier;
  (this->ResimulationSettings).ResimulationErrorLinearVelocityThreshold =
       (param_1->ResimulationSettings).ResimulationErrorLinearVelocityThreshold;
  (this->ResimulationSettings).ResimulationErrorAngularVelocityThreshold = fVar2;
  (this->ResimulationSettings).bRuntimeCorrectionEnabled = bVar3;
  (this->ResimulationSettings).bRuntimeVelocityCorrection = bVar4;
  (this->ResimulationSettings).bRuntimeCorrectConnectedBodies = bVar8;
  (this->ResimulationSettings).field_0x1b = uVar5;
  (this->ResimulationSettings).PosStabilityMultiplier = fVar6;
  fVar2 = (param_1->ResimulationSettings).VelStabilityMultiplier;
  fVar6 = (param_1->ResimulationSettings).AngVelStabilityMultiplier;
  uVar11 = *(undefined4 *)
            &(param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x0;
  (this->ResimulationSettings).RotStabilityMultiplier =
       (param_1->ResimulationSettings).RotStabilityMultiplier;
  (this->ResimulationSettings).VelStabilityMultiplier = fVar2;
  (this->ResimulationSettings).AngVelStabilityMultiplier = fVar6;
  *(undefined4 *)&(this->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x0 =
       uVar11;
  fVar2 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          ResimErrorMaximumDistanceBeforeSnapping;
  fVar6 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          ResimErrorMaximumDesyncTimeBeforeSnapping;
  fVar7 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          ResimErrorDirectionalDecayMultiplier;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.ResimErrorCorrectionDuration =
       (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
       ResimErrorCorrectionDuration;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  ResimErrorMaximumDistanceBeforeSnapping = fVar2;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  ResimErrorMaximumDesyncTimeBeforeSnapping = fVar6;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  ResimErrorDirectionalDecayMultiplier = fVar7;
  uVar12 = *(undefined3 *)
            &(param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x15;
  fVar2 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          RenderInterpExponentialDecayLinearHalfLife;
  fVar6 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          RenderInterpExponentialDecayAngularHalfLife;
  fVar7 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          RenderInterpMinimumLinearThreshold;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  bRenderInterpApplyExponentialDecay =
       (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
       bRenderInterpApplyExponentialDecay;
  *(undefined3 *)&(this->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x15 =
       uVar12;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpExponentialDecayLinearHalfLife = fVar2;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpExponentialDecayAngularHalfLife = fVar6;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpMinimumLinearThreshold = fVar7;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpMinimumAngularThreshold =
       (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
       RenderInterpMinimumAngularThreshold;
  uVar13 = (((undefined4 *)&this->NetworkPhysicsComponentSettings)->bOverrideRedundantInputs ^
           (param_1->NetworkPhysicsComponentSettings).bOverrideRedundantInputs) & 1 ^
           *(undefined4 *)&this->NetworkPhysicsComponentSettings;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 2 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 4 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 8 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x10 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x20 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x40 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x80 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x100 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x200 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x400 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x800 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x1000 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x2000 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x4000 ^ uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings = uVar13;
  *(uint *)&this->NetworkPhysicsComponentSettings =
       (uVar13 ^ *(uint *)&param_1->NetworkPhysicsComponentSettings) & 0x8000 ^ uVar13;
  (this->NetworkPhysicsComponentSettings).RedundantInputs =
       (param_1->NetworkPhysicsComponentSettings).RedundantInputs;
  (this->NetworkPhysicsComponentSettings).RedundantRemoteInputs =
       (param_1->NetworkPhysicsComponentSettings).RedundantRemoteInputs;
  (this->NetworkPhysicsComponentSettings).RedundantStates =
       (param_1->NetworkPhysicsComponentSettings).RedundantStates;
  (this->NetworkPhysicsComponentSettings).bCompareStateToTriggerRewind =
       (param_1->NetworkPhysicsComponentSettings).bCompareStateToTriggerRewind;
  (this->NetworkPhysicsComponentSettings).bCompareStateToTriggerRewindIncludeSimProxies =
       (param_1->NetworkPhysicsComponentSettings).bCompareStateToTriggerRewindIncludeSimProxies;
  (this->NetworkPhysicsComponentSettings).bCompareInputToTriggerRewind =
       (param_1->NetworkPhysicsComponentSettings).bCompareInputToTriggerRewind;
  (this->NetworkPhysicsComponentSettings).bEnableUnreliableFlow =
       (param_1->NetworkPhysicsComponentSettings).bEnableUnreliableFlow;
  (this->NetworkPhysicsComponentSettings).bEnableReliableFlow =
       (param_1->NetworkPhysicsComponentSettings).bEnableReliableFlow;
  (this->NetworkPhysicsComponentSettings).bApplyDataInsteadOfMergeData =
       (param_1->NetworkPhysicsComponentSettings).bApplyDataInsteadOfMergeData;
  (this->NetworkPhysicsComponentSettings).bAllowInputExtrapolation =
       (param_1->NetworkPhysicsComponentSettings).bAllowInputExtrapolation;
  (this->NetworkPhysicsComponentSettings).bValidateDataOnGameThread =
       (param_1->NetworkPhysicsComponentSettings).bValidateDataOnGameThread;
  (this->NetworkPhysicsComponentSettings).bApplySimProxyStateAtRuntime =
       (param_1->NetworkPhysicsComponentSettings).bApplySimProxyStateAtRuntime;
  (this->NetworkPhysicsComponentSettings).bApplySimProxyInputAtRuntime =
       (param_1->NetworkPhysicsComponentSettings).bApplySimProxyInputAtRuntime;
  (this->NetworkPhysicsComponentSettings).bTriggerResimOnInputReceive =
       (param_1->NetworkPhysicsComponentSettings).bTriggerResimOnInputReceive;
  (this->NetworkPhysicsComponentSettings).bApplyInputDecayOverSetTime =
       (param_1->NetworkPhysicsComponentSettings).bApplyInputDecayOverSetTime;
  (this->NetworkPhysicsComponentSettings).InputDecaySetTime =
       (param_1->NetworkPhysicsComponentSettings).InputDecaySetTime;
  FRichCurve::FRichCurve
            (&(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData,
             &(param_1->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData);
  pUVar1 = (param_1->NetworkPhysicsComponentSettings).InputDecayCurve.ExternalCurve.field0_0x0.
           DebugPtr;
  (this->NetworkPhysicsComponentSettings).InputDecayCurve.ExternalCurve.field0_0x0.DebugPtr = pUVar1
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// FNetworkPhysicsSettingsData @ 1482d8bf0

FNetworkPhysicsSettingsData * __thiscall
FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData(FNetworkPhysicsSettingsData *this)

{
  FNetworkPhysicsSettingsDefaultReplication *pFVar1;
  
  pFVar1->bOverrideMaxLinearHardSnapDistance = 0;
  pFVar1->bOverrideCorrectConnectedBodiesFriction = 0;
  pFVar1->bOverrideCorrectConnectedBodies = 0;
  pFVar1->bOverrideDefaultLegacyHardsnapInPT = 0;
  (this->GeneralSettings).bOverrideSimProxyRepMode = false;
  (this->GeneralSettings).SimProxyRepMode = PredictiveInterpolation;
  (this->GeneralSettings).bFocalParticleInPhysicsReplicationLOD = false;
  (this->GeneralSettings).EventSchedulingMinDelaySeconds = 0.3;
  (this->DefaultReplicationSettings).MaxLinearHardSnapDistance = 400.0;
  (this->DefaultReplicationSettings).bHardsnapInPhysicsThread =
       PhysicsReplicationCVars::DefaultReplicationCVars::bHardsnapLegacyInPT;
  (this->DefaultReplicationSettings).bCorrectConnectedBodies =
       PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
  (this->DefaultReplicationSettings).bCorrectConnectedBodiesFriction =
       PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodiesFriction;
  FNetworkPhysicsSettingsPredictiveInterpolation::FNetworkPhysicsSettingsPredictiveInterpolation
            (&this->PredictiveInterpolationSettings);
  FNetworkPhysicsSettingsResimulation::FNetworkPhysicsSettingsResimulation
            (&this->ResimulationSettings);
  FNetworkPhysicsSettingsNetworkPhysicsComponent::FNetworkPhysicsSettingsNetworkPhysicsComponent
            (&this->NetworkPhysicsComponentSettings);
  return this;
}

// ~FNetworkPhysicsSettingsData @ 1482dd9d0

void __thiscall
FNetworkPhysicsSettingsData::~FNetworkPhysicsSettingsData(FNetworkPhysicsSettingsData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData.Keys.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_
  ;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_
       = 0;
  pvVar2 = (void *)(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_
  ;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NetworkPhysicsComponentSettings).InputDecayCurve.EditorCurveData._padding_);
  return;
}

// operator= @ 1482de5a0

FNetworkPhysicsSettingsData * __thiscall
FNetworkPhysicsSettingsData::operator=
          (FNetworkPhysicsSettingsData *this,FNetworkPhysicsSettingsData *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined3 uVar12;
  
  this->GeneralSettings = param_1->GeneralSettings;
  fVar1 = (param_1->DefaultReplicationSettings).MaxLinearHardSnapDistance;
  *(undefined4 *)&(this->DefaultReplicationSettings).field_0x0 =
       *(undefined4 *)&(param_1->DefaultReplicationSettings).field_0x0;
  (this->DefaultReplicationSettings).MaxLinearHardSnapDistance = fVar1;
  bVar2 = (param_1->DefaultReplicationSettings).bCorrectConnectedBodies;
  bVar3 = (param_1->DefaultReplicationSettings).bCorrectConnectedBodiesFriction;
  uVar4 = (param_1->DefaultReplicationSettings).field_0xb;
  (this->DefaultReplicationSettings).bHardsnapInPhysicsThread =
       (param_1->DefaultReplicationSettings).bHardsnapInPhysicsThread;
  (this->DefaultReplicationSettings).bCorrectConnectedBodies = bVar2;
  (this->DefaultReplicationSettings).bCorrectConnectedBodiesFriction = bVar3;
  (this->DefaultReplicationSettings).field_0xb = uVar4;
  fVar1 = (param_1->PredictiveInterpolationSettings).PosCorrectionTimeBase;
  fVar5 = (param_1->PredictiveInterpolationSettings).PosCorrectionTimeMin;
  fVar6 = (param_1->PredictiveInterpolationSettings).PosCorrectionTimeMultiplier;
  *(undefined4 *)&(this->PredictiveInterpolationSettings).field_0x0 =
       *(undefined4 *)&(param_1->PredictiveInterpolationSettings).field_0x0;
  (this->PredictiveInterpolationSettings).PosCorrectionTimeBase = fVar1;
  (this->PredictiveInterpolationSettings).PosCorrectionTimeMin = fVar5;
  (this->PredictiveInterpolationSettings).PosCorrectionTimeMultiplier = fVar6;
  fVar1 = (param_1->PredictiveInterpolationSettings).RotCorrectionTimeMin;
  fVar5 = (param_1->PredictiveInterpolationSettings).RotCorrectionTimeMultiplier;
  fVar6 = (param_1->PredictiveInterpolationSettings).PosInterpolationTimeMultiplier;
  (this->PredictiveInterpolationSettings).RotCorrectionTimeBase =
       (param_1->PredictiveInterpolationSettings).RotCorrectionTimeBase;
  (this->PredictiveInterpolationSettings).RotCorrectionTimeMin = fVar1;
  (this->PredictiveInterpolationSettings).RotCorrectionTimeMultiplier = fVar5;
  (this->PredictiveInterpolationSettings).PosInterpolationTimeMultiplier = fVar6;
  fVar1 = (param_1->PredictiveInterpolationSettings).SoftSnapPosStrength;
  fVar5 = (param_1->PredictiveInterpolationSettings).SoftSnapRotStrength;
  bVar2 = (param_1->PredictiveInterpolationSettings).bSoftSnapToSource;
  bVar3 = (param_1->PredictiveInterpolationSettings).bDisableSoftSnap;
  bVar7 = (param_1->PredictiveInterpolationSettings).bSkipVelocityRepOnPosEarlyOut;
  bVar8 = (param_1->PredictiveInterpolationSettings).bPostResimWaitForUpdate;
  (this->PredictiveInterpolationSettings).RotInterpolationTimeMultiplier =
       (param_1->PredictiveInterpolationSettings).RotInterpolationTimeMultiplier;
  (this->PredictiveInterpolationSettings).SoftSnapPosStrength = fVar1;
  (this->PredictiveInterpolationSettings).SoftSnapRotStrength = fVar5;
  (this->PredictiveInterpolationSettings).bSoftSnapToSource = bVar2;
  (this->PredictiveInterpolationSettings).bDisableSoftSnap = bVar3;
  (this->PredictiveInterpolationSettings).bSkipVelocityRepOnPosEarlyOut = bVar7;
  (this->PredictiveInterpolationSettings).bPostResimWaitForUpdate = bVar8;
  bVar2 = (param_1->PredictiveInterpolationSettings).bCorrectConnectedBodiesFriction;
  uVar9 = *(undefined2 *)&(param_1->PredictiveInterpolationSettings).field_0x32;
  (this->PredictiveInterpolationSettings).bCorrectConnectedBodies =
       (param_1->PredictiveInterpolationSettings).bCorrectConnectedBodies;
  (this->PredictiveInterpolationSettings).bCorrectConnectedBodiesFriction = bVar2;
  *(undefined2 *)&(this->PredictiveInterpolationSettings).field_0x32 = uVar9;
  uVar10 = (param_1->ResimulationSettings).ResimulationErrorThreshold_DEPRECATED;
  fVar1 = (param_1->ResimulationSettings).ResimulationErrorPositionThreshold;
  fVar5 = (param_1->ResimulationSettings).ResimulationErrorRotationThreshold;
  *(undefined4 *)&(this->ResimulationSettings).field_0x0 =
       *(undefined4 *)&(param_1->ResimulationSettings).field_0x0;
  (this->ResimulationSettings).ResimulationErrorThreshold_DEPRECATED = uVar10;
  (this->ResimulationSettings).ResimulationErrorPositionThreshold = fVar1;
  (this->ResimulationSettings).ResimulationErrorRotationThreshold = fVar5;
  fVar1 = (param_1->ResimulationSettings).ResimulationErrorAngularVelocityThreshold;
  bVar2 = (param_1->ResimulationSettings).bRuntimeCorrectionEnabled;
  bVar3 = (param_1->ResimulationSettings).bRuntimeVelocityCorrection;
  bVar7 = (param_1->ResimulationSettings).bRuntimeCorrectConnectedBodies;
  uVar4 = (param_1->ResimulationSettings).field_0x1b;
  fVar5 = (param_1->ResimulationSettings).PosStabilityMultiplier;
  (this->ResimulationSettings).ResimulationErrorLinearVelocityThreshold =
       (param_1->ResimulationSettings).ResimulationErrorLinearVelocityThreshold;
  (this->ResimulationSettings).ResimulationErrorAngularVelocityThreshold = fVar1;
  (this->ResimulationSettings).bRuntimeCorrectionEnabled = bVar2;
  (this->ResimulationSettings).bRuntimeVelocityCorrection = bVar3;
  (this->ResimulationSettings).bRuntimeCorrectConnectedBodies = bVar7;
  (this->ResimulationSettings).field_0x1b = uVar4;
  (this->ResimulationSettings).PosStabilityMultiplier = fVar5;
  fVar1 = (param_1->ResimulationSettings).VelStabilityMultiplier;
  fVar5 = (param_1->ResimulationSettings).AngVelStabilityMultiplier;
  uVar11 = *(undefined4 *)
            &(param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x0;
  (this->ResimulationSettings).RotStabilityMultiplier =
       (param_1->ResimulationSettings).RotStabilityMultiplier;
  (this->ResimulationSettings).VelStabilityMultiplier = fVar1;
  (this->ResimulationSettings).AngVelStabilityMultiplier = fVar5;
  *(undefined4 *)&(this->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x0 =
       uVar11;
  fVar1 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          ResimErrorMaximumDistanceBeforeSnapping;
  fVar5 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          ResimErrorMaximumDesyncTimeBeforeSnapping;
  fVar6 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          ResimErrorDirectionalDecayMultiplier;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.ResimErrorCorrectionDuration =
       (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
       ResimErrorCorrectionDuration;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  ResimErrorMaximumDistanceBeforeSnapping = fVar1;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  ResimErrorMaximumDesyncTimeBeforeSnapping = fVar5;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  ResimErrorDirectionalDecayMultiplier = fVar6;
  uVar12 = *(undefined3 *)
            &(param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x15;
  fVar1 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          RenderInterpExponentialDecayLinearHalfLife;
  fVar5 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          RenderInterpExponentialDecayAngularHalfLife;
  fVar6 = (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
          RenderInterpMinimumLinearThreshold;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  bRenderInterpApplyExponentialDecay =
       (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
       bRenderInterpApplyExponentialDecay;
  *(undefined3 *)&(this->ResimulationSettings).ResimulationErrorCorrectionSettings.field_0x15 =
       uVar12;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpExponentialDecayLinearHalfLife = fVar1;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpExponentialDecayAngularHalfLife = fVar5;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpMinimumLinearThreshold = fVar6;
  (this->ResimulationSettings).ResimulationErrorCorrectionSettings.
  RenderInterpMinimumAngularThreshold =
       (param_1->ResimulationSettings).ResimulationErrorCorrectionSettings.
       RenderInterpMinimumAngularThreshold;
  FNetworkPhysicsSettingsNetworkPhysicsComponent::operator=
            (&this->NetworkPhysicsComponentSettings,&param_1->NetworkPhysicsComponentSettings);
  return this;
}

