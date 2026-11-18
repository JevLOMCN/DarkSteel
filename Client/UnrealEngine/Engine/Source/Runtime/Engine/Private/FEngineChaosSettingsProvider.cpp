// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// GetMinDeltaVelocityForHitEvents @ 1482cb690

float __thiscall
FEngineChaosSettingsProvider::GetMinDeltaVelocityForHitEvents(FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsSettings *pUVar3;
  float fVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar3 = UPhysicsSettings::Get();
    this->Settings = pUVar3;
    if (pUVar3 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return this->Settings->MinDeltaVelocityForHitEvents;
}

// GetPhysicsPredictionEnabled @ 1482cb6f0

bool __thiscall
FEngineChaosSettingsProvider::GetPhysicsPredictionEnabled(FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPhysicsSettings *pUVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar4 = UPhysicsSettings::Get();
    this->Settings = pUVar4;
    if (pUVar4 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).bEnablePhysicsPrediction;
}

// GetResimulationErrorThreshold @ 1482cb750

float __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorThreshold(FEngineChaosSettingsProvider *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001482cb753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x28))();
  return fVar1;
}

// GetResimulationErrorPositionThresholdEnabled @ 1482cb760

bool __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorPositionThresholdEnabled
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPhysicsSettings *pUVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar4 = UPhysicsSettings::Get();
    this->Settings = pUVar4;
    if (pUVar4 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.
         bEnableResimulationErrorPositionThreshold;
}

// GetResimulationErrorPositionThreshold @ 1482cb7c0

float __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorPositionThreshold
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsSettings *pUVar3;
  float fVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar3 = UPhysicsSettings::Get();
    this->Settings = pUVar3;
    if (pUVar3 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.ResimulationErrorPositionThreshold
  ;
}

// GetResimulationErrorRotationThresholdEnabled @ 1482cb820

bool __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorRotationThresholdEnabled
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPhysicsSettings *pUVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar4 = UPhysicsSettings::Get();
    this->Settings = pUVar4;
    if (pUVar4 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.
         bEnableResimulationErrorRotationThreshold;
}

// GetResimulationErrorRotationThreshold @ 1482cb880

float __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorRotationThreshold
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsSettings *pUVar3;
  float fVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar3 = UPhysicsSettings::Get();
    this->Settings = pUVar3;
    if (pUVar3 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.ResimulationErrorRotationThreshold
  ;
}

// GetResimulationErrorLinearVelocityThresholdEnabled @ 1482cb8e0

bool __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorLinearVelocityThresholdEnabled
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPhysicsSettings *pUVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar4 = UPhysicsSettings::Get();
    this->Settings = pUVar4;
    if (pUVar4 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.
         bEnableResimulationErrorLinearVelocityThreshold;
}

// GetResimulationErrorLinearVelocityThreshold @ 1482cb940

float __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorLinearVelocityThreshold
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsSettings *pUVar3;
  float fVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar3 = UPhysicsSettings::Get();
    this->Settings = pUVar3;
    if (pUVar3 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.
         ResimulationErrorLinearVelocityThreshold;
}

// GetResimulationErrorAngularVelocityThresholdEnabled @ 1482cb9a0

bool __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorAngularVelocityThresholdEnabled
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPhysicsSettings *pUVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar4 = UPhysicsSettings::Get();
    this->Settings = pUVar4;
    if (pUVar4 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.
         bEnableResimulationErrorAngularVelocityThreshold;
}

// GetResimulationErrorAngularVelocityThreshold @ 1482cba00

float __thiscall
FEngineChaosSettingsProvider::GetResimulationErrorAngularVelocityThreshold
          (FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsSettings *pUVar3;
  float fVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar3 = UPhysicsSettings::Get();
    this->Settings = pUVar3;
    if (pUVar3 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).ResimulationSettings.
         ResimulationErrorAngularVelocityThreshold;
}

// GetPhysicsHistoryTimeLength @ 1482cba60

float __thiscall
FEngineChaosSettingsProvider::GetPhysicsHistoryTimeLength(FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsSettings *pUVar3;
  float fVar4;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar3 = UPhysicsSettings::Get();
    this->Settings = pUVar3;
    if (pUVar3 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return (this->Settings->PhysicsPrediction).MaxSupportedLatencyPrediction;
}

// GetPhysicsHistoryCount @ 1482cbac0

int __thiscall
FEngineChaosSettingsProvider::GetPhysicsHistoryCount(FEngineChaosSettingsProvider *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UPhysicsSettings *pUVar4;
  float fVar5;
  
  if (this->Settings == (UPhysicsSettings *)0x0) {
    pUVar4 = UPhysicsSettings::Get();
    this->Settings = pUVar4;
    if (pUVar4 == (UPhysicsSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  fVar5 = (this->Settings->PhysicsPrediction).MaxSupportedLatencyPrediction * __real_3a83126f;
  iVar3 = -((int)ROUND(__real_bf000000 - (fVar5 + fVar5) / this->Settings->AsyncFixedTimeStepSize)
           >> 1);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}

