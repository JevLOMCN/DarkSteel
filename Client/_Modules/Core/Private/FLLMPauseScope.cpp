// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FLLMPauseScope @ 141677b80

FLLMPauseScope * __thiscall
FLLMPauseScope::FLLMPauseScope
          (FLLMPauseScope *this,FName param_1,bool param_2,ulong64 param_3,ELLMTracker param_4,
          ELLMAllocType param_5)

{
  if (FLowLevelMemTracker::EnabledState == Disabled) {
    this->bEnabled = false;
    return this;
  }
  Init(this,param_1,Untagged,false,param_2,param_3,param_4,param_5);
  return this;
}

// FLLMPauseScope @ 141677be0

FLLMPauseScope * __thiscall
FLLMPauseScope::FLLMPauseScope
          (FLLMPauseScope *this,ELLMTag param_1,bool param_2,ulong64 param_3,ELLMTracker param_4,
          ELLMAllocType param_5)

{
  if (FLowLevelMemTracker::EnabledState == Disabled) {
    this->bEnabled = false;
    return this;
  }
  if (param_2) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  Init(this,(FName)0x0,param_1,true,false,param_3,param_4,param_5);
  return this;
}

// ~FLLMPauseScope @ 14167b9f0

void __thiscall FLLMPauseScope::~FLLMPauseScope(FLLMPauseScope *this)

{
  schar *psVar1;
  ELLMAllocType EVar2;
  FLowLevelMemTracker *pFVar3;
  FLLMThreadState *pFVar4;
  
  if (this->bEnabled != false) {
    pFVar3 = FLowLevelMemTracker::Get();
    if ((this->PausedTracker == Max) || (this->PausedTracker == Platform)) {
      EVar2 = this->AllocType;
      pFVar4 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar3->Trackers[0]);
      psVar1 = pFVar4->PausedCounter + (int)EVar2;
      *psVar1 = *psVar1 + -1;
      if (*psVar1 < '\0') {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
    if ((this->PausedTracker == Max) || (this->PausedTracker == Default)) {
      EVar2 = this->AllocType;
      pFVar4 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar3->Trackers[1]);
      psVar1 = pFVar4->PausedCounter + (int)EVar2;
      *psVar1 = *psVar1 + -1;
      if (*psVar1 < '\0') {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
  }
  return;
}

// Init @ 1416a2430

void __thiscall
FLLMPauseScope::Init
          (FLLMPauseScope *this,FName param_1,ELLMTag param_2,bool param_3,bool param_4,
          ulong64 param_5,ELLMTracker param_6,ELLMAllocType param_7)

{
  FLLMTracker *pFVar1;
  FLowLevelMemTracker *this_00;
  FLLMThreadState *pFVar2;
  FTagData *pFVar3;
  FName FVar4;
  FName FVar5;
  
  this_00 = FLowLevelMemTracker::Get();
  if (((FLowLevelMemTracker::EnabledState != Disabled) &&
      (FLowLevelMemTracker::BootstrapInitialise(this_00),
      FLowLevelMemTracker::EnabledState != Disabled)) &&
     (FLowLevelMemTracker::BootstrapInitialise(this_00), this_00->ActiveSets[0] != false)) {
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
    this->AllocType = param_7;
    this->bEnabled = true;
    this->PausedTracker = param_6;
    if ((param_6 & ~Max) == Platform) {
      if (param_5 == 0) {
        pFVar2 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00->Trackers[0]);
        pFVar2->PausedCounter[(int)param_7] = pFVar2->PausedCounter[(int)param_7] + '\x01';
      }
      else {
        pFVar1 = this_00->Trackers[0];
        if (param_3) {
          pFVar3 = FLowLevelMemTracker::FindOrAddTagData(pFVar1->LLMRef,param_2,FunctionAPI);
        }
        else {
          FVar4 = param_1;
          if (!param_4) {
            FVar4 = FVar5;
          }
          pFVar3 = FLowLevelMemTracker::FindOrAddTagData
                             (pFVar1->LLMRef,param_1,None,FVar4,FunctionAPI);
        }
        UE::LLMPrivate::FLLMTracker::PauseAndTrackMemory(pFVar1,pFVar3,param_5,param_7);
      }
    }
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    if ((this->PausedTracker == Max) || (this->PausedTracker == Default)) {
      if (param_5 == 0) {
        pFVar2 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00->Trackers[1]);
        pFVar2->PausedCounter[(int)param_7] = pFVar2->PausedCounter[(int)param_7] + '\x01';
      }
      else {
        pFVar1 = this_00->Trackers[1];
        if (param_3) {
          pFVar3 = FLowLevelMemTracker::FindOrAddTagData(pFVar1->LLMRef,param_2,FunctionAPI);
        }
        else {
          FVar5 = param_1;
          if (!param_4) {
            FVar5 = FVar4;
          }
          pFVar3 = FLowLevelMemTracker::FindOrAddTagData
                             (pFVar1->LLMRef,param_1,None,FVar5,FunctionAPI);
        }
        UE::LLMPrivate::FLLMTracker::PauseAndTrackMemory(pFVar1,pFVar3,param_5,param_7);
      }
    }
    return;
  }
  this->bEnabled = false;
  return;
}

