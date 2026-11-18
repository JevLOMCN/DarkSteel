// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNetworkPhysicsSettingsComponentAsync @ 1482d8770

FNetworkPhysicsSettingsComponentAsync * __thiscall
FNetworkPhysicsSettingsComponentAsync::FNetworkPhysicsSettingsComponentAsync
          (FNetworkPhysicsSettingsComponentAsync *this)

{
  FNetworkPhysicsSettingsDefaultReplication *pFVar1;
  undefined8 *puVar2;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSimCallbackObject_UFNetworkPhysicsSettingsAsyncInput__UFSimCallbackNoOutput_Chaos___00_Chaos__6B_
  ;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 1;
  puVar2 = FMemory::Malloc(0x10,8);
  *puVar2 = 0;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar2 = FMemory::Malloc(0x10,8);
  *puVar2 = 0;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar2 = FMemory::Malloc(0x10,8);
  *puVar2 = 0;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)puVar2;
  this->_padding_ = (longlong)&___7FNetworkPhysicsSettingsComponentAsync__6B_;
  this->_padding_ = 0;
  (this->Settings_Internal).Object = (FNetworkPhysicsSettingsData *)0x0;
  (this->Settings_Internal).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  memset(&this->Settings,0,0x148);
  pFVar1->bOverrideMaxLinearHardSnapDistance = 0;
  pFVar1->bOverrideCorrectConnectedBodiesFriction = 0;
  pFVar1->bOverrideCorrectConnectedBodies = 0;
  pFVar1->bOverrideDefaultLegacyHardsnapInPT = 0;
  (this->Settings).GeneralSettings.SimProxyRepMode = PredictiveInterpolation;
  (this->Settings).GeneralSettings.EventSchedulingMinDelaySeconds = 0.3;
  (this->Settings).DefaultReplicationSettings.MaxLinearHardSnapDistance = 400.0;
  (this->Settings).DefaultReplicationSettings.bHardsnapInPhysicsThread =
       PhysicsReplicationCVars::DefaultReplicationCVars::bHardsnapLegacyInPT;
  (this->Settings).DefaultReplicationSettings.bCorrectConnectedBodies =
       PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
  (this->Settings).DefaultReplicationSettings.bCorrectConnectedBodiesFriction =
       PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodiesFriction;
  FNetworkPhysicsSettingsPredictiveInterpolation::FNetworkPhysicsSettingsPredictiveInterpolation
            (&(this->Settings).PredictiveInterpolationSettings);
  FNetworkPhysicsSettingsResimulation::FNetworkPhysicsSettingsResimulation
            (&(this->Settings).ResimulationSettings);
  FNetworkPhysicsSettingsNetworkPhysicsComponent::FNetworkPhysicsSettingsNetworkPhysicsComponent
            (&(this->Settings).NetworkPhysicsComponentSettings);
  this->PhysicsObject = (FPhysicsObject *)0x0;
  return this;
}

// ConsumeAsyncInput @ 1482f07e0

void __thiscall
FNetworkPhysicsSettingsComponentAsync::ConsumeAsyncInput
          (FNetworkPhysicsSettingsComponentAsync *this)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  FNetworkPhysicsSettingsData *pFVar10;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  FNetworkPhysicsSettingsData *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x178) != '\0') {
      (this->Settings).GeneralSettings = *(FNetworkPhysicsSettings *)(lVar2 + 0x30);
      *(undefined8 *)&(this->Settings).DefaultReplicationSettings = *(undefined8 *)(lVar2 + 0x38);
      uVar1 = *(undefined4 *)(lVar2 + 0x40);
      (this->Settings).DefaultReplicationSettings.bHardsnapInPhysicsThread = (bool)(char)uVar1;
      (this->Settings).DefaultReplicationSettings.bCorrectConnectedBodies =
           (bool)(char)((uint)uVar1 >> 8);
      (this->Settings).DefaultReplicationSettings.bCorrectConnectedBodiesFriction =
           (bool)(char)((uint)uVar1 >> 0x10);
      (this->Settings).DefaultReplicationSettings.field_0xb = (char)((uint)uVar1 >> 0x18);
      uVar5 = *(undefined8 *)(lVar2 + 0x4c);
      *(undefined8 *)&(this->Settings).PredictiveInterpolationSettings =
           *(undefined8 *)(lVar2 + 0x44);
      (this->Settings).PredictiveInterpolationSettings.PosCorrectionTimeMin = (float)(int)uVar5;
      (this->Settings).PredictiveInterpolationSettings.PosCorrectionTimeMultiplier =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x54);
      uVar6 = *(undefined8 *)(lVar2 + 0x5c);
      (this->Settings).PredictiveInterpolationSettings.RotCorrectionTimeBase = (float)(int)uVar5;
      (this->Settings).PredictiveInterpolationSettings.RotCorrectionTimeMin =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).PredictiveInterpolationSettings.RotCorrectionTimeMultiplier =
           (float)(int)uVar6;
      (this->Settings).PredictiveInterpolationSettings.PosInterpolationTimeMultiplier =
           (float)(int)((ulonglong)uVar6 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 100);
      uVar6 = *(undefined8 *)(lVar2 + 0x6c);
      (this->Settings).PredictiveInterpolationSettings.RotInterpolationTimeMultiplier =
           (float)(int)uVar5;
      (this->Settings).PredictiveInterpolationSettings.SoftSnapPosStrength =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).PredictiveInterpolationSettings.SoftSnapRotStrength = (float)(int)uVar6;
      (this->Settings).PredictiveInterpolationSettings.bSoftSnapToSource =
           (bool)(char)((ulonglong)uVar6 >> 0x20);
      (this->Settings).PredictiveInterpolationSettings.bDisableSoftSnap =
           (bool)(char)((ulonglong)uVar6 >> 0x28);
      (this->Settings).PredictiveInterpolationSettings.bSkipVelocityRepOnPosEarlyOut =
           (bool)(char)((ulonglong)uVar6 >> 0x30);
      (this->Settings).PredictiveInterpolationSettings.bPostResimWaitForUpdate =
           (bool)(char)((ulonglong)uVar6 >> 0x38);
      uVar1 = *(undefined4 *)(lVar2 + 0x74);
      (this->Settings).PredictiveInterpolationSettings.bCorrectConnectedBodies = (bool)(char)uVar1;
      (this->Settings).PredictiveInterpolationSettings.bCorrectConnectedBodiesFriction =
           (bool)(char)((uint)uVar1 >> 8);
      *(short *)&(this->Settings).PredictiveInterpolationSettings.field_0x32 =
           (short)((uint)uVar1 >> 0x10);
      uVar5 = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)&(this->Settings).ResimulationSettings = *(undefined8 *)(lVar2 + 0x78);
      (this->Settings).ResimulationSettings.ResimulationErrorPositionThreshold = (float)(int)uVar5;
      (this->Settings).ResimulationSettings.ResimulationErrorRotationThreshold =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x88);
      uVar6 = *(undefined8 *)(lVar2 + 0x90);
      (this->Settings).ResimulationSettings.ResimulationErrorLinearVelocityThreshold =
           (float)(int)uVar5;
      (this->Settings).ResimulationSettings.ResimulationErrorAngularVelocityThreshold =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).ResimulationSettings.bRuntimeCorrectionEnabled = (bool)(char)uVar6;
      (this->Settings).ResimulationSettings.bRuntimeVelocityCorrection =
           (bool)(char)((ulonglong)uVar6 >> 8);
      (this->Settings).ResimulationSettings.bRuntimeCorrectConnectedBodies =
           (bool)(char)((ulonglong)uVar6 >> 0x10);
      (this->Settings).ResimulationSettings.field_0x1b = (char)((ulonglong)uVar6 >> 0x18);
      (this->Settings).ResimulationSettings.PosStabilityMultiplier =
           (float)(int)((ulonglong)uVar6 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x98);
      uVar6 = *(undefined8 *)(lVar2 + 0xa0);
      (this->Settings).ResimulationSettings.RotStabilityMultiplier = (float)(int)uVar5;
      (this->Settings).ResimulationSettings.VelStabilityMultiplier =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      *(undefined8 *)&(this->Settings).ResimulationSettings.AngVelStabilityMultiplier = uVar6;
      uVar5 = *(undefined8 *)(lVar2 + 0xa8);
      uVar6 = *(undefined8 *)(lVar2 + 0xb0);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorCorrectionDuration = (float)(int)uVar5;
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorMaximumDistanceBeforeSnapping = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorMaximumDesyncTimeBeforeSnapping = (float)(int)uVar6;
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorDirectionalDecayMultiplier = (float)(int)((ulonglong)uVar6 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0xb8);
      uVar6 = *(undefined8 *)(lVar2 + 0xc0);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      bRenderInterpApplyExponentialDecay = (bool)(char)uVar5;
      *(int3 *)&(this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.field_0x15
           = (int3)((ulonglong)uVar5 >> 8);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpExponentialDecayLinearHalfLife = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpExponentialDecayAngularHalfLife = (float)(int)uVar6;
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpMinimumLinearThreshold = (float)(int)((ulonglong)uVar6 >> 0x20);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpMinimumAngularThreshold = *(float *)(lVar2 + 200);
      FNetworkPhysicsSettingsNetworkPhysicsComponent::operator=
                (&(this->Settings).NetworkPhysicsComponentSettings,
                 (FNetworkPhysicsSettingsNetworkPhysicsComponent *)(lVar2 + 0xd0));
    }
    if ((((*(longlong *)(lVar2 + 0x20) != -1) && (*(longlong *)(lVar2 + 0x20) != 0)) &&
        (*(longlong *)(lVar2 + 0x28) != 0)) && (0 < *(int *)(*(longlong *)(lVar2 + 0x28) + 8))) {
      if ((*(longlong *)(lVar2 + 0x20) == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_20.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x28);
      pFVar10 = (FNetworkPhysicsSettingsData *)0x0;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = (local_20.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1482f0949;
          }
          LOCK();
          aVar9 = (local_20.ReferenceController)->SharedReferenceCount;
          bVar8 = aVar7 == aVar9;
          if (bVar8) {
            (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar8);
        pFVar10 = *(FNetworkPhysicsSettingsData **)(lVar2 + 0x20);
      }
LAB_1482f0949:
      if (&this->Settings_Internal != (TSharedPtr<FNetworkPhysicsSettingsData_const_,1> *)&local_28)
      {
        (this->Settings_Internal).Object = pFVar10;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Settings_Internal).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
    }
    if (*(char *)(lVar2 + 0x18) != '\0') {
      this->PhysicsObject = *(FPhysicsObject **)(lVar2 + 0x10);
      if ((this->_padding_ != 0) &&
         (plVar3 = *(longlong **)(this->_padding_ + 0x250), plVar3 != (longlong *)0x0)) {
        pcVar4 = *(code **)(*plVar3 + 8);
        local_18 = (this->Settings_Internal).Object;
        local_10 = (this->Settings_Internal).SharedReferenceCount.ReferenceController;
        if (local_10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar4)(plVar3,this->PhysicsObject,&local_18);
      }
    }
  }
  return;
}

// OnPreSimulate_Internal @ 148314070

void __thiscall
FNetworkPhysicsSettingsComponentAsync::OnPreSimulate_Internal
          (FNetworkPhysicsSettingsComponentAsync *this)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  FNetworkPhysicsSettingsData *pFVar10;
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  FNetworkPhysicsSettingsData *pFStack_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x178) != '\0') {
      (this->Settings).GeneralSettings = *(FNetworkPhysicsSettings *)(lVar2 + 0x30);
      *(undefined8 *)&(this->Settings).DefaultReplicationSettings = *(undefined8 *)(lVar2 + 0x38);
      uVar1 = *(undefined4 *)(lVar2 + 0x40);
      (this->Settings).DefaultReplicationSettings.bHardsnapInPhysicsThread = (bool)(char)uVar1;
      (this->Settings).DefaultReplicationSettings.bCorrectConnectedBodies =
           (bool)(char)((uint)uVar1 >> 8);
      (this->Settings).DefaultReplicationSettings.bCorrectConnectedBodiesFriction =
           (bool)(char)((uint)uVar1 >> 0x10);
      (this->Settings).DefaultReplicationSettings.field_0xb = (char)((uint)uVar1 >> 0x18);
      uVar5 = *(undefined8 *)(lVar2 + 0x4c);
      *(undefined8 *)&(this->Settings).PredictiveInterpolationSettings =
           *(undefined8 *)(lVar2 + 0x44);
      (this->Settings).PredictiveInterpolationSettings.PosCorrectionTimeMin = (float)(int)uVar5;
      (this->Settings).PredictiveInterpolationSettings.PosCorrectionTimeMultiplier =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x54);
      uVar6 = *(undefined8 *)(lVar2 + 0x5c);
      (this->Settings).PredictiveInterpolationSettings.RotCorrectionTimeBase = (float)(int)uVar5;
      (this->Settings).PredictiveInterpolationSettings.RotCorrectionTimeMin =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).PredictiveInterpolationSettings.RotCorrectionTimeMultiplier =
           (float)(int)uVar6;
      (this->Settings).PredictiveInterpolationSettings.PosInterpolationTimeMultiplier =
           (float)(int)((ulonglong)uVar6 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 100);
      uVar6 = *(undefined8 *)(lVar2 + 0x6c);
      (this->Settings).PredictiveInterpolationSettings.RotInterpolationTimeMultiplier =
           (float)(int)uVar5;
      (this->Settings).PredictiveInterpolationSettings.SoftSnapPosStrength =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).PredictiveInterpolationSettings.SoftSnapRotStrength = (float)(int)uVar6;
      (this->Settings).PredictiveInterpolationSettings.bSoftSnapToSource =
           (bool)(char)((ulonglong)uVar6 >> 0x20);
      (this->Settings).PredictiveInterpolationSettings.bDisableSoftSnap =
           (bool)(char)((ulonglong)uVar6 >> 0x28);
      (this->Settings).PredictiveInterpolationSettings.bSkipVelocityRepOnPosEarlyOut =
           (bool)(char)((ulonglong)uVar6 >> 0x30);
      (this->Settings).PredictiveInterpolationSettings.bPostResimWaitForUpdate =
           (bool)(char)((ulonglong)uVar6 >> 0x38);
      uVar1 = *(undefined4 *)(lVar2 + 0x74);
      (this->Settings).PredictiveInterpolationSettings.bCorrectConnectedBodies = (bool)(char)uVar1;
      (this->Settings).PredictiveInterpolationSettings.bCorrectConnectedBodiesFriction =
           (bool)(char)((uint)uVar1 >> 8);
      *(short *)&(this->Settings).PredictiveInterpolationSettings.field_0x32 =
           (short)((uint)uVar1 >> 0x10);
      uVar5 = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)&(this->Settings).ResimulationSettings = *(undefined8 *)(lVar2 + 0x78);
      (this->Settings).ResimulationSettings.ResimulationErrorPositionThreshold = (float)(int)uVar5;
      (this->Settings).ResimulationSettings.ResimulationErrorRotationThreshold =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x88);
      uVar6 = *(undefined8 *)(lVar2 + 0x90);
      (this->Settings).ResimulationSettings.ResimulationErrorLinearVelocityThreshold =
           (float)(int)uVar5;
      (this->Settings).ResimulationSettings.ResimulationErrorAngularVelocityThreshold =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).ResimulationSettings.bRuntimeCorrectionEnabled = (bool)(char)uVar6;
      (this->Settings).ResimulationSettings.bRuntimeVelocityCorrection =
           (bool)(char)((ulonglong)uVar6 >> 8);
      (this->Settings).ResimulationSettings.bRuntimeCorrectConnectedBodies =
           (bool)(char)((ulonglong)uVar6 >> 0x10);
      (this->Settings).ResimulationSettings.field_0x1b = (char)((ulonglong)uVar6 >> 0x18);
      (this->Settings).ResimulationSettings.PosStabilityMultiplier =
           (float)(int)((ulonglong)uVar6 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x98);
      uVar6 = *(undefined8 *)(lVar2 + 0xa0);
      (this->Settings).ResimulationSettings.RotStabilityMultiplier = (float)(int)uVar5;
      (this->Settings).ResimulationSettings.VelStabilityMultiplier =
           (float)(int)((ulonglong)uVar5 >> 0x20);
      *(undefined8 *)&(this->Settings).ResimulationSettings.AngVelStabilityMultiplier = uVar6;
      uVar5 = *(undefined8 *)(lVar2 + 0xa8);
      uVar6 = *(undefined8 *)(lVar2 + 0xb0);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorCorrectionDuration = (float)(int)uVar5;
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorMaximumDistanceBeforeSnapping = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorMaximumDesyncTimeBeforeSnapping = (float)(int)uVar6;
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      ResimErrorDirectionalDecayMultiplier = (float)(int)((ulonglong)uVar6 >> 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0xb8);
      uVar6 = *(undefined8 *)(lVar2 + 0xc0);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      bRenderInterpApplyExponentialDecay = (bool)(char)uVar5;
      *(int3 *)&(this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.field_0x15
           = (int3)((ulonglong)uVar5 >> 8);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpExponentialDecayLinearHalfLife = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpExponentialDecayAngularHalfLife = (float)(int)uVar6;
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpMinimumLinearThreshold = (float)(int)((ulonglong)uVar6 >> 0x20);
      (this->Settings).ResimulationSettings.ResimulationErrorCorrectionSettings.
      RenderInterpMinimumAngularThreshold = *(float *)(lVar2 + 200);
      FNetworkPhysicsSettingsNetworkPhysicsComponent::operator=
                (&(this->Settings).NetworkPhysicsComponentSettings,
                 (FNetworkPhysicsSettingsNetworkPhysicsComponent *)(lVar2 + 0xd0));
    }
    if ((((*(longlong *)(lVar2 + 0x20) != -1) && (*(longlong *)(lVar2 + 0x20) != 0)) &&
        (*(longlong *)(lVar2 + 0x28) != 0)) && (0 < *(int *)(*(longlong *)(lVar2 + 0x28) + 8))) {
      if ((*(longlong *)(lVar2 + 0x20) == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FStack_20.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x28);
      pFVar10 = (FNetworkPhysicsSettingsData *)0x0;
      if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = (FStack_20.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1482f0949;
          }
          LOCK();
          aVar9 = (FStack_20.ReferenceController)->SharedReferenceCount;
          bVar8 = aVar7 == aVar9;
          if (bVar8) {
            (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar8);
        pFVar10 = *(FNetworkPhysicsSettingsData **)(lVar2 + 0x20);
      }
LAB_1482f0949:
      if (&this->Settings_Internal != (TSharedPtr<FNetworkPhysicsSettingsData_const_,1> *)&uStack_28
         ) {
        (this->Settings_Internal).Object = pFVar10;
        uStack_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Settings_Internal).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    if (*(char *)(lVar2 + 0x18) != '\0') {
      this->PhysicsObject = *(FPhysicsObject **)(lVar2 + 0x10);
      if ((this->_padding_ != 0) &&
         (plVar3 = *(longlong **)(this->_padding_ + 0x250), plVar3 != (longlong *)0x0)) {
        pcVar4 = *(code **)(*plVar3 + 8);
        pFStack_18 = (this->Settings_Internal).Object;
        pTStack_10 = (this->Settings_Internal).SharedReferenceCount.ReferenceController;
        if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_10->WeakReferenceCount = (atomic<int>)((int)pTStack_10->WeakReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar4)(plVar3,this->PhysicsObject,&pFStack_18);
      }
    }
  }
  return;
}

// RegisterSettingsInPhysicsReplication @ 14831b1d0

void __thiscall
FNetworkPhysicsSettingsComponentAsync::RegisterSettingsInPhysicsReplication
          (FNetworkPhysicsSettingsComponentAsync *this)

{
  longlong *plVar1;
  code *pcVar2;
  FNetworkPhysicsSettingsData *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->_padding_ != 0) &&
     (plVar1 = *(longlong **)(this->_padding_ + 0x250), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 8);
    local_18 = (this->Settings_Internal).Object;
    local_10 = (this->Settings_Internal).SharedReferenceCount.ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(plVar1,this->PhysicsObject,&local_18);
  }
  return;
}

