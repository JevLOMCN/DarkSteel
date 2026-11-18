// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FLLMScope @ 141677ca0

FLLMScope * __thiscall
FLLMScope::FLLMScope
          (FLLMScope *this,FTagData *param_1,bool param_2,ELLMTagSet param_3,ELLMTracker param_4,
          bool param_5)

{
  FLowLevelMemTracker *this_00;
  FLLMThreadState *pFVar1;
  FTagData *pFVar2;
  
  this->bEnabled = false;
  if (FLowLevelMemTracker::EnabledState == Disabled) {
    return this;
  }
  this_00 = FLowLevelMemTracker::Get();
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    FLowLevelMemTracker::BootstrapInitialise(this_00);
    if (!param_5) {
      pFVar1 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00->Trackers[param_4]);
      pFVar2 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar1,param_3);
      if (pFVar2 != (FTagData *)0x0) {
        return this;
      }
    }
    this->bEnabled = true;
    this->Tracker = param_4;
    this->TagSet = param_3;
    pFVar1 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00->Trackers[param_4]);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar1,param_1,param_3);
  }
  return this;
}

// FLLMScope @ 141677d80

FLLMScope * __thiscall
FLLMScope::FLLMScope
          (FLLMScope *this,FName param_1,bool param_2,ELLMTagSet param_3,ELLMTracker param_4,
          bool param_5)

{
  FLLMTracker *this_00;
  FLowLevelMemTracker *this_01;
  FLLMThreadState *pFVar1;
  FTagData *pFVar2;
  FName FVar3;
  FName FVar4;
  
  this->bEnabled = false;
  if ((((FLowLevelMemTracker::EnabledState != Disabled) &&
       (this_01 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) &&
      (FLowLevelMemTracker::BootstrapInitialise(this_01),
      FLowLevelMemTracker::EnabledState != Disabled)) &&
     (FLowLevelMemTracker::BootstrapInitialise(this_01), this_01->ActiveSets[param_3] != false)) {
    if (!param_5) {
      pFVar1 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_01->Trackers[param_4]);
      pFVar2 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar1,param_3);
      if (pFVar2 != (FTagData *)0x0) {
        return this;
      }
    }
    this->bEnabled = true;
    this->Tracker = param_4;
    this->TagSet = param_3;
    this_00 = this_01->Trackers[param_4];
    FVar3.ComparisonIndex.Value = 0;
    FVar3.Number = 0;
    FVar4 = param_1;
    if (!param_2) {
      FVar4 = FVar3;
    }
    pFVar2 = FLowLevelMemTracker::FindOrAddTagData(this_00->LLMRef,param_1,param_3,FVar4,Scope);
    pFVar1 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar1,pFVar2,param_3);
  }
  return this;
}

// FLLMScope @ 141677eb0

FLLMScope * __thiscall
FLLMScope::FLLMScope
          (FLLMScope *this,ELLMTag param_1,bool param_2,ELLMTagSet param_3,ELLMTracker param_4,
          bool param_5)

{
  FLLMTracker *this_00;
  FLowLevelMemTracker *this_01;
  FLLMThreadState *pFVar1;
  FTagData *pFVar2;
  
  this->bEnabled = false;
  if (FLowLevelMemTracker::EnabledState == Disabled) {
    return this;
  }
  if ((param_2) || (param_3 != None)) {
    if (param_1 == EngineMisc) goto LAB_141677f61;
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if ((param_1 == FMalloc) && (param_4 != Platform)) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
LAB_141677f61:
  this_01 = FLowLevelMemTracker::Get();
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    FLowLevelMemTracker::BootstrapInitialise(this_01);
    if (!param_5) {
      pFVar1 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_01->Trackers[param_4]);
      pFVar2 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar1,param_3);
      if (pFVar2 != (FTagData *)0x0) {
        return this;
      }
    }
    this->bEnabled = true;
    this->Tracker = param_4;
    this->TagSet = param_3;
    this_00 = this_01->Trackers[param_4];
    pFVar2 = FLowLevelMemTracker::FindOrAddTagData(this_00->LLMRef,param_1,Scope);
    pFVar1 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar1,pFVar2,param_3);
  }
  return this;
}

// ~FLLMScope @ 14167bae0

void __thiscall FLLMScope::~FLLMScope(FLLMScope *this)

{
  FLowLevelMemTracker *pFVar1;
  
  if (this->bEnabled != false) {
    pFVar1 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],this->TagSet);
    return;
  }
  return;
}

// Destruct @ 14168e6e0

void __thiscall FLLMScope::Destruct(FLLMScope *this)

{
  FLowLevelMemTracker *pFVar1;
  
  pFVar1 = FLowLevelMemTracker::Get();
  UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],this->TagSet);
  return;
}

