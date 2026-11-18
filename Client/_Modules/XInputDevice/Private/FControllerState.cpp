// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XInputDevice
// Functions: 1

// FControllerState @ 14f12c7c0

FControllerState * __thiscall
XInputInterface::FControllerState::FControllerState(FControllerState *this)

{
  undefined1 *puVar1;
  
  (this->LastUsedValidPlatformUserId).InternalId = -1;
  (this->ForceFeedback).LeftLarge = 0.0;
  (this->ForceFeedback).LeftSmall = 0.0;
  (this->ForceFeedback).RightLarge = 0.0;
  (this->ForceFeedback).RightSmall = 0.0;
  (this->LeftTriggerReleaseDeadZone).bHasOverride = '\0';
  (this->LeftTriggerReleaseDeadZone).bWasDynamicPressed = '\0';
  (this->LeftTriggerReleaseDeadZone).bWasSimplePressed = '\0';
  (this->LeftTriggerReleaseDeadZone).DeadZone = 1.0;
  (this->LeftTriggerReleaseDeadZone).TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&this->LeftTriggerReleaseDeadZone);
  (this->RightTriggerReleaseDeadZone).bHasOverride = '\0';
  (this->RightTriggerReleaseDeadZone).bWasDynamicPressed = '\0';
  (this->RightTriggerReleaseDeadZone).bWasSimplePressed = '\0';
  (this->RightTriggerReleaseDeadZone).DeadZone = 1.0;
  (this->RightTriggerReleaseDeadZone).TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&this->RightTriggerReleaseDeadZone);
  return this;
}

