// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482ceae0

UScriptStruct * __cdecl FNetworkPhysicsSettingsResimulation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation,
                         (UObject *)pUVar1,L"NetworkPhysicsSettingsResimulation");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsResimulation.OuterSingleton;
}

// FNetworkPhysicsSettingsResimulation @ 1482d8e00

FNetworkPhysicsSettingsResimulation * __thiscall
FNetworkPhysicsSettingsResimulation::FNetworkPhysicsSettingsResimulation
          (FNetworkPhysicsSettingsResimulation *this)

{
  float fVar1;
  
  this->bOverrideResimulationErrorPositionThreshold = 0;
  this->bOverrideResimulationErrorThreshold_DEPRECATED = 0;
  this->bOverrideAngVelStabilityMultiplier = 0;
  this->bOverrideVelStabilityMultiplier = 0;
  this->bOverrideRotStabilityMultiplier = 0;
  this->bOverridePosStabilityMultiplier = 0;
  this->bOverrideRuntimeCorrectConnectedBodies = 0;
  this->bOverrideRuntimeVelocityCorrection = 0;
  this->bOverrideRuntimeCorrectionEnabled = 0;
  this->bOverrideResimulationErrorAngularVelocityThreshold = 0;
  this->bOverrideResimulationErrorLinearVelocityThreshold = 0;
  this->bOverrideResimulationErrorRotationThreshold = 0;
  this->ResimulationErrorThreshold_DEPRECATED = 10;
  this->ResimulationErrorPositionThreshold = 10.0;
  this->ResimulationErrorRotationThreshold = 4.0;
  this->ResimulationErrorLinearVelocityThreshold = 5.0;
  this->ResimulationErrorAngularVelocityThreshold = 2.0;
  this->bRuntimeCorrectionEnabled =
       PhysicsReplicationCVars::ResimulationCVars::bRuntimeCorrectionEnabled;
  this->bRuntimeVelocityCorrection =
       PhysicsReplicationCVars::ResimulationCVars::bRuntimeVelocityCorrection;
  this->bRuntimeCorrectConnectedBodies =
       PhysicsReplicationCVars::ResimulationCVars::bRuntimeCorrectConnectedBodies;
  this->PosStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::PosStabilityMultiplier;
  this->RotStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::RotStabilityMultiplier;
  this->VelStabilityMultiplier = PhysicsReplicationCVars::ResimulationCVars::VelStabilityMultiplier;
  fVar1 = PhysicsReplicationCVars::ResimulationCVars::AngVelStabilityMultiplier;
  (this->ResimulationErrorCorrectionSettings).bOverrideResimErrorInterpolationSettings = 0;
  this->AngVelStabilityMultiplier = fVar1;
  (this->ResimulationErrorCorrectionSettings).ResimErrorCorrectionDuration = 0.3;
  (this->ResimulationErrorCorrectionSettings).ResimErrorMaximumDistanceBeforeSnapping = 250.0;
  (this->ResimulationErrorCorrectionSettings).ResimErrorMaximumDesyncTimeBeforeSnapping = 0.6;
  (this->ResimulationErrorCorrectionSettings).ResimErrorDirectionalDecayMultiplier = 0.0;
  (this->ResimulationErrorCorrectionSettings).bRenderInterpApplyExponentialDecay = false;
  (this->ResimulationErrorCorrectionSettings).RenderInterpExponentialDecayLinearHalfLife = 0.06;
  (this->ResimulationErrorCorrectionSettings).RenderInterpExponentialDecayAngularHalfLife = 0.06;
  (this->ResimulationErrorCorrectionSettings).RenderInterpMinimumLinearThreshold = 0.1;
  (this->ResimulationErrorCorrectionSettings).RenderInterpMinimumAngularThreshold = 0.001;
  return this;
}

