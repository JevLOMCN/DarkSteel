// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FLLMScopeFromPtr @ 141678020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLLMScopeFromPtr * __thiscall
FLLMScopeFromPtr::FLLMScopeFromPtr(FLLMScopeFromPtr *this,void *param_1,ELLMTracker param_2)

{
  FLLMTracker *this_00;
  FTagData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_01;
  FLLMScopeFromPtr *pFVar4;
  FLLMThreadState *pFVar5;
  ForElementType<UE::LLMPrivate::FTagData_const_*> FVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((FLowLevelMemTracker::EnabledState == Disabled) || (param_1 == (void *)0x0)) ||
     (this_01 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState == Disabled)) {
    this->bEnabled[0] = false;
    this->bEnabled[1] = false;
    this->bEnabled[2] = false;
    this->bEnabled[3] = false;
    return this;
  }
  FLowLevelMemTracker::BootstrapInitialise(this_01);
  this_00 = this_01->Trackers[param_2];
  local_78.ArrayMax = 4;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0;
  local_78.ArrayNum = 0;
  bVar3 = UE::LLMPrivate::FLLMTracker::FindTagsForPtr(this_00,param_1,&local_78);
  if (!bVar3) {
    this->bEnabled[0] = false;
    this->bEnabled[1] = false;
    this->bEnabled[2] = false;
    this->bEnabled[3] = false;
    goto LAB_141678449;
  }
  this->Tracker = param_2;
  if ((FLowLevelMemTracker::EnabledState == Disabled) ||
     (FLowLevelMemTracker::BootstrapInitialise(this_01), this_01->ActiveSets[0] == false)) {
LAB_141678193:
    this->bEnabled[0] = false;
  }
  else {
    if (local_78.ArrayNum < 1) {
      local_88 = 0;
      local_80 = (longlong)local_78.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    if (*(longlong *)FVar6 == 0) goto LAB_141678193;
    this->bEnabled[0] = true;
    if (local_78.ArrayNum < 1) {
      local_80 = (longlong)local_78.ArrayNum;
      local_88 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    pFVar1 = *(FTagData **)FVar6;
    pFVar5 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar5,pFVar1,None);
  }
  if ((FLowLevelMemTracker::EnabledState == Disabled) ||
     (FLowLevelMemTracker::BootstrapInitialise(this_01), this_01->ActiveSets[1] == false)) {
LAB_141678279:
    this->bEnabled[1] = false;
  }
  else {
    if (local_78.ArrayNum < 2) {
      local_88 = 1;
      local_80 = (longlong)local_78.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    if (*(longlong *)((longlong)FVar6 + 8) == 0) goto LAB_141678279;
    this->bEnabled[1] = true;
    if (local_78.ArrayNum < 2) {
      local_80 = (longlong)local_78.ArrayNum;
      local_88 = 1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    pFVar1 = *(FTagData **)((longlong)FVar6 + 8);
    pFVar5 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar5,pFVar1,Assets);
  }
  if ((FLowLevelMemTracker::EnabledState == Disabled) ||
     (FLowLevelMemTracker::BootstrapInitialise(this_01), this_01->ActiveSets[2] == false)) {
LAB_14167835f:
    this->bEnabled[2] = false;
  }
  else {
    if (local_78.ArrayNum < 3) {
      local_88 = 2;
      local_80 = (longlong)local_78.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    if (*(longlong *)((longlong)FVar6 + 0x10) == 0) goto LAB_14167835f;
    this->bEnabled[2] = true;
    if (local_78.ArrayNum < 3) {
      local_80 = (longlong)local_78.ArrayNum;
      local_88 = 2;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    pFVar1 = *(FTagData **)((longlong)FVar6 + 0x10);
    pFVar5 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar5,pFVar1,AssetClasses);
  }
  if ((FLowLevelMemTracker::EnabledState != Disabled) &&
     (FLowLevelMemTracker::BootstrapInitialise(this_01), this_01->ActiveSets[3] != false)) {
    if (local_78.ArrayNum < 4) {
      local_88 = 3;
      local_80 = (longlong)local_78.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
        return pFVar4;
      }
    }
    FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
    }
    if (*(longlong *)((longlong)FVar6 + 0x18) != 0) {
      this->bEnabled[3] = true;
      if (local_78.ArrayNum < 4) {
        local_80 = (longlong)local_78.ArrayNum;
        local_88 = 3;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FLLMScopeFromPtr *)(*pcVar2)();
          return pFVar4;
        }
      }
      FVar6 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
        FVar6 = local_78.AllocatorInstance.SecondaryData;
      }
      pFVar1 = *(FTagData **)((longlong)FVar6 + 0x18);
      pFVar5 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
      UE::LLMPrivate::FLLMThreadState::PushTag(pFVar5,pFVar1,UObjectClasses);
      goto LAB_141678449;
    }
  }
  this->bEnabled[3] = false;
LAB_141678449:
  if (local_78.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return this;
}

// ~FLLMScopeFromPtr @ 14167bb20

void __thiscall FLLMScopeFromPtr::~FLLMScopeFromPtr(FLLMScopeFromPtr *this)

{
  FLowLevelMemTracker *pFVar1;
  
  pFVar1 = FLowLevelMemTracker::Get();
  if (this->bEnabled[0] != false) {
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],None);
  }
  if (this->bEnabled[1] != false) {
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],Assets);
  }
  if (this->bEnabled[2] != false) {
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],AssetClasses);
  }
  if (this->bEnabled[3] != false) {
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar1->Trackers[this->Tracker],UObjectClasses);
  }
  return;
}

