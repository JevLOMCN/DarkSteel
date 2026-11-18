// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Activate @ 14167ebb0

void __thiscall FLLMScopeDynamic::Activate(FLLMScopeDynamic *this)

{
  ELLMTagSet EVar1;
  FTagData *pFVar2;
  FLowLevelMemTracker *pFVar3;
  FLLMThreadState *this_00;
  
  pFVar3 = FLowLevelMemTracker::Get();
  EVar1 = this->TagSet;
  pFVar2 = this->TagData;
  this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar3->Trackers[this->Tracker]);
  UE::LLMPrivate::FLLMThreadState::PushTag(this_00,pFVar2,EVar1);
  return;
}

// Destruct @ 14168e710

void __thiscall FLLMScopeDynamic::Destruct(FLLMScopeDynamic *this)

{
  FLowLevelMemTracker *pFVar1;
  
  if (this->TagData != (FTagData *)0x0) {
    pFVar1 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],this->TagSet);
    return;
  }
  return;
}

// Init @ 1416a25d0

void __thiscall
FLLMScopeDynamic::Init(FLLMScopeDynamic *this,ELLMTracker param_1,ELLMTagSet param_2)

{
  FLowLevelMemTracker *this_00;
  
  this_00 = FLowLevelMemTracker::Get();
  if (((FLowLevelMemTracker::EnabledState != Disabled) &&
      (FLowLevelMemTracker::BootstrapInitialise(this_00),
      FLowLevelMemTracker::EnabledState != Disabled)) &&
     (FLowLevelMemTracker::BootstrapInitialise(this_00), this_00->ActiveSets[param_2] != false)) {
    this->bEnabled = true;
    this->TagData = (FTagData *)0x0;
    this->Tracker = param_1;
    this->TagSet = param_2;
    return;
  }
  this->bEnabled = false;
  return;
}

// TryAddTagAndActivate @ 1416c32d0

bool __thiscall
FLLMScopeDynamic::TryAddTagAndActivate
          (FLLMScopeDynamic *this,FName param_1,ILLMDynamicTagConstructor *param_2)

{
  ELLMTagSet EVar1;
  FLowLevelMemTracker *this_00;
  FTagData *pFVar2;
  FLLMThreadState *this_01;
  
  this_00 = FLowLevelMemTracker::Get();
  pFVar2 = FLowLevelMemTracker::FindOrAddTagData(this_00,param_1,this->TagSet,(FName)0x0,Scope);
  EVar1 = this->TagSet;
  this->TagData = pFVar2;
  this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00->Trackers[this->Tracker]);
  UE::LLMPrivate::FLLMThreadState::PushTag(this_01,pFVar2,EVar1);
  return true;
}

// TryFindTag @ 1416c3360

bool __thiscall FLLMScopeDynamic::TryFindTag(FLLMScopeDynamic *this,FName param_1)

{
  FLowLevelMemTracker *this_00;
  FTagData *pFVar1;
  
  this_00 = FLowLevelMemTracker::Get();
  pFVar1 = FLowLevelMemTracker::FindTagData(this_00,param_1,this->TagSet,Scope);
  this->TagData = pFVar1;
  return pFVar1 != (FTagData *)0x0;
}

