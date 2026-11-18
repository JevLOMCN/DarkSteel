// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482ce3b0

UScriptStruct * __cdecl FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation,
                           (UObject *)pUVar1,L"NetworkPhysicsSettingsPredictiveInterpolation");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation.
         OuterSingleton;
}

// FNetworkPhysicsSettingsPredictiveInterpolation @ 1482d8d30

FNetworkPhysicsSettingsPredictiveInterpolation * __thiscall
FNetworkPhysicsSettingsPredictiveInterpolation::FNetworkPhysicsSettingsPredictiveInterpolation
          (FNetworkPhysicsSettingsPredictiveInterpolation *this)

{
  this->bOverridePosCorrectionTimeBase = 0;
  this->bOverrideCorrectConnectedBodiesFriction = 0;
  this->bOverrideCorrectConnectedBodies = 0;
  this->bOverridePostResimWaitForUpdate = 0;
  this->bOverrideSkipVelocityRepOnPosEarlyOut = 0;
  this->bOverrideDisableSoftSnap = 0;
  this->bOverrideSoftSnapToSource = 0;
  this->bOverrideSoftSnapRotStrength = 0;
  this->bOverrideSoftSnapPosStrength = 0;
  this->bOverrideRotInterpolationTimeMultiplier = 0;
  this->bOverridePosInterpolationTimeMultiplier = 0;
  this->bOverrideRotCorrectionTimeMultiplier = 0;
  this->bOverrideRotCorrectionTimeMin = 0;
  this->bOverrideRotCorrectionTimeBase = 0;
  this->bOverridePosCorrectionTimeMultiplier = 0;
  this->bOverridePosCorrectionTimeMin = 0;
  this->PosCorrectionTimeBase =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::PosCorrectionTimeBase;
  this->PosCorrectionTimeMin =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::PosCorrectionTimeMin;
  this->PosCorrectionTimeMultiplier =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::PosCorrectionTimeMultiplier;
  this->RotCorrectionTimeBase =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::RotCorrectionTimeBase;
  this->RotCorrectionTimeMin =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::RotCorrectionTimeMin;
  this->RotCorrectionTimeMultiplier =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::RotCorrectionTimeMultiplier;
  this->PosInterpolationTimeMultiplier =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::PosInterpolationTimeMultiplier;
  this->RotInterpolationTimeMultiplier =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::RotInterpolationTimeMultiplier;
  this->SoftSnapPosStrength =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::SoftSnapPosStrength;
  this->SoftSnapRotStrength =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::SoftSnapRotStrength;
  this->bSoftSnapToSource = PhysicsReplicationCVars::PredictiveInterpolationCVars::bSoftSnapToSource
  ;
  this->bDisableSoftSnap = PhysicsReplicationCVars::PredictiveInterpolationCVars::bDisableSoftSnap;
  this->bSkipVelocityRepOnPosEarlyOut =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::bSkipVelocityRepOnPosEarlyOut;
  this->bPostResimWaitForUpdate =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::bPostResimWaitForUpdate;
  this->bCorrectConnectedBodies =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectConnectedBodies;
  this->bCorrectConnectedBodiesFriction =
       PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectConnectedBodiesFriction;
  return this;
}

