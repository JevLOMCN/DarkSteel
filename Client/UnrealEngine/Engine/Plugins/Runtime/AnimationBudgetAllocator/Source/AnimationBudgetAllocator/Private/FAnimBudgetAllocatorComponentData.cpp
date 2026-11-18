// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 1

// FAnimBudgetAllocatorComponentData @ 14a692050

FAnimBudgetAllocatorComponentData * __thiscall
FAnimBudgetAllocatorComponentData::FAnimBudgetAllocatorComponentData
          (FAnimBudgetAllocatorComponentData *this,USkeletalMeshComponentBudgeted *param_1,
          float param_2,int param_3)

{
  undefined1 *puVar1;
  
  (this->Component).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USkeletalMeshComponentBudgeted *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->GameThreadLastTickTimeMs = param_2;
  this->bNeverThrottle = '\x01';
  (this->RootPrerequisite).field0_0x0.DebugPtr = (USkeletalMeshComponentBudgeted *)0x0;
  this->GameThreadLastCompletionTimeMs = 0.0;
  this->FrameOffset = 0;
  this->SkippedTicks = '\0';
  this->Significance = 1.0;
  this->AccumulatedDeltaTime = 0.0;
  this->DesiredTickRate = '\x01';
  this->TickRate = '\x01';
  this->StateChangeThrottle = (schar)param_3;
  puVar1 = &this->field_0x28;
  this->bTickEnabled = '\x01';
  this->bOnScreen = '\0';
  this->bAutoCalculateSignificance = '\0';
  this->bAllowReducedWork = '\x01';
  this->bReducedWork = '\0';
  this->bInterpolate = '\0';
  this->bTickEvenIfNotRendered = '\0';
  this->bAlwaysTick = '\0';
  return this;
}

