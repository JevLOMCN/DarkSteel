// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// GetMinDeltaVelocityForHitEvents @ 1436f07e0

float __thiscall
IChaosSettingsProvider::GetMinDeltaVelocityForHitEvents(IChaosSettingsProvider *this)

{
  return 0.0;
}

// GetPhysicsPredictionEnabled @ 1436f07f0

bool __thiscall IChaosSettingsProvider::GetPhysicsPredictionEnabled(IChaosSettingsProvider *this)

{
  return false;
}

// GetResimulationErrorThreshold @ 1436f0800

float __thiscall IChaosSettingsProvider::GetResimulationErrorThreshold(IChaosSettingsProvider *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001436f0803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*this + 0x28))();
  return fVar1;
}

// GetResimulationErrorPositionThresholdEnabled @ 1436f0810

bool __thiscall
IChaosSettingsProvider::GetResimulationErrorPositionThresholdEnabled(IChaosSettingsProvider *this)

{
  return false;
}

// GetResimulationErrorPositionThreshold @ 1436f0820

float __thiscall
IChaosSettingsProvider::GetResimulationErrorPositionThreshold(IChaosSettingsProvider *this)

{
  return 0.0;
}

// GetResimulationErrorRotationThresholdEnabled @ 1436f0830

bool __thiscall
IChaosSettingsProvider::GetResimulationErrorRotationThresholdEnabled(IChaosSettingsProvider *this)

{
  return false;
}

// GetResimulationErrorRotationThreshold @ 1436f0840

float __thiscall
IChaosSettingsProvider::GetResimulationErrorRotationThreshold(IChaosSettingsProvider *this)

{
  return 0.0;
}

// GetResimulationErrorLinearVelocityThresholdEnabled @ 1436f0850

bool __thiscall
IChaosSettingsProvider::GetResimulationErrorLinearVelocityThresholdEnabled
          (IChaosSettingsProvider *this)

{
  return false;
}

// GetResimulationErrorLinearVelocityThreshold @ 1436f0860

float __thiscall
IChaosSettingsProvider::GetResimulationErrorLinearVelocityThreshold(IChaosSettingsProvider *this)

{
  return 0.0;
}

// GetResimulationErrorAngularVelocityThresholdEnabled @ 1436f0870

bool __thiscall
IChaosSettingsProvider::GetResimulationErrorAngularVelocityThresholdEnabled
          (IChaosSettingsProvider *this)

{
  return false;
}

// GetResimulationErrorAngularVelocityThreshold @ 1436f0880

float __thiscall
IChaosSettingsProvider::GetResimulationErrorAngularVelocityThreshold(IChaosSettingsProvider *this)

{
  return 0.0;
}

// GetPhysicsHistoryTimeLength @ 1436f0890

float __thiscall IChaosSettingsProvider::GetPhysicsHistoryTimeLength(IChaosSettingsProvider *this)

{
  return 0.0;
}

// GetPhysicsHistoryCount @ 1436f08a0

int __thiscall IChaosSettingsProvider::GetPhysicsHistoryCount(IChaosSettingsProvider *this)

{
  return 0;
}

// ~IChaosSettingsProvider @ 1436f75b0

void __thiscall IChaosSettingsProvider::~IChaosSettingsProvider(IChaosSettingsProvider *this)

{
  *this = (IChaosSettingsProvider)&___7IChaosSettingsProvider__6B_;
  return;
}

