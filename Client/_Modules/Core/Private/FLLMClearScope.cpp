// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FLLMClearScope @ 1416779f0

FLLMClearScope * __thiscall
FLLMClearScope::FLLMClearScope(FLLMClearScope *this,ELLMTagSet param_1,ELLMTracker param_2)

{
  FLowLevelMemTracker *this_00;
  FLLMThreadState *this_01;
  
  this->field_0x1 = 0;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::Get();
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(this_00);
      this->field_0x1 = 1;
      *(ELLMTracker *)this = param_2;
      this->field_0x2 = param_1;
      this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00->Trackers[param_2]);
      UE::LLMPrivate::FLLMThreadState::PushTag(this_01,(FTagData *)0x0,param_1);
    }
    return this;
  }
  return this;
}

