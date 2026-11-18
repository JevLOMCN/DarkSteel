// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 1

// FMotionDelayTarget @ 14594e260

FMotionDelayTarget * __thiscall
FMotionDelayTarget::FMotionDelayTarget(FMotionDelayTarget *this,FMotionSource *param_1)

{
  uint uVar1;
  FNameEntryId FVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  FLateUpdateManager::FLateUpdateManager(&this->LateUpdate);
  uVar1 = (param_1->SourceId).Number;
  FVar2.Value = (param_1->SourceId).ComparisonIndex.Value;
  (this->MotionSource).PlayerIndex = param_1->PlayerIndex;
  (this->MotionSource).SourceId.ComparisonIndex = (FNameEntryId)FVar2.Value;
  (this->MotionSource).SourceId.Number = uVar1;
  (this->ScaleHistoryBuffer).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleHistoryBuffer).Elements.ArrayNum = 0;
  (this->ScaleHistoryBuffer).Elements.ArrayMax = 0;
  (this->ScaleHistoryBuffer).Head = 0;
  (this->ScaleHistoryBuffer).bIsFull = false;
  return this;
}

