// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// GetTypeStatsDataForObject @ 1442c3fa0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetTypeStatsData * __cdecl
UE::Net::Private::FNetStatsContext::GetTypeStatsDataForObject
          (FNetStatsContext *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  FReplicatedObjectData *pFVar3;
  FNetTypeStatsData *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar3 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                     (param_1->NetRefHandleManager,param_2);
  if ((param_1->bShouldIncludeSubObjectWithRoot == false) || (pFVar3->SubObjectRootIndex == 0)) {
    uVar5 = 1;
    *param_3 = 1;
    if (pFVar3->Protocol != (FReplicationProtocol *)0x0) {
      uVar5 = pFVar3->Protocol->TypeStatsIndex;
    }
  }
  else {
    *param_3 = 0;
    pFVar3 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                       (param_1->NetRefHandleManager,pFVar3->SubObjectRootIndex);
    if (pFVar3->Protocol == (FReplicationProtocol *)0x0) {
      uVar5 = 1;
    }
    else {
      uVar5 = pFVar3->Protocol->TypeStatsIndex;
    }
  }
  uVar6 = 0;
  if ((int)uVar5 < (param_1->TypeStatsData).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNetTypeStatsData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FNetTypeStatsData *)
         ((param_1->TypeStatsData).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x80);
}

// GetTypeStatsData @ 144304a60

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetTypeStatsData * __cdecl
UE::Net::Private::FNetStatsContext::GetTypeStatsData
          (FNetStatsContext *param_1,FReplicatedObjectData *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicatedObjectData *pFVar4;
  FNetTypeStatsData *pFVar5;
  uint uVar6;
  FReplicationProtocol *pFVar7;
  
  if (param_3) {
    pFVar7 = param_2->Protocol;
  }
  else {
    pFVar4 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                       (param_1->NetRefHandleManager,param_2->SubObjectRootIndex);
    pFVar7 = pFVar4->Protocol;
  }
  if (pFVar7 == (FReplicationProtocol *)0x0) {
    uVar6 = 1;
  }
  else {
    uVar6 = pFVar7->TypeStatsIndex;
  }
  uVar3 = 0;
  if ((int)uVar6 < (param_1->TypeStatsData).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNetTypeStatsData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FNetTypeStatsData *)
         ((param_1->TypeStatsData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x80);
}

// FNetStatsContext @ 144326d90

FNetStatsContext * __thiscall
UE::Net::Private::FNetStatsContext::FNetStatsContext(FNetStatsContext *this)

{
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->TypeStatsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeStatsData).ArrayNum = 0;
  (this->TypeStatsData).ArrayMax = 0;
  this->bShouldIncludeSubObjectWithRoot = false;
  this->bIsAcquiredByTask = false;
  return this;
}

// ~FNetStatsContext @ 144327160

void __thiscall UE::Net::Private::FNetStatsContext::~FNetStatsContext(FNetStatsContext *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->TypeStatsData).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ResetStats @ 144339e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetStatsContext::ResetStats(FNetStatsContext *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  TArray<UE::Net::Private::FNetTypeStatsData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TypeStatsData,param_1,Default);
  iVar1 = (this->TypeStatsData).ArrayNum;
  pFVar2 = (this->TypeStatsData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->TypeStatsData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::Private::FNetTypeStatsData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar2 == pFVar3) break;
    local_b8 = 0;
    uStack_b0 = 0;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    *(undefined8 *)(pFVar2 + 0x18) = 0;
    local_98 = 0;
    uStack_90 = 0;
    *(undefined8 *)(pFVar2 + 0x20) = 0;
    *(undefined8 *)(pFVar2 + 0x28) = 0;
    local_88 = 0;
    uStack_80 = 0;
    *(undefined8 *)(pFVar2 + 0x30) = 0;
    *(undefined8 *)(pFVar2 + 0x38) = 0;
    local_78 = 0;
    uStack_70 = 0;
    *(undefined8 *)(pFVar2 + 0x40) = 0;
    *(undefined8 *)(pFVar2 + 0x48) = 0;
    local_68 = 0;
    uStack_60 = 0;
    *(undefined8 *)(pFVar2 + 0x50) = 0;
    *(undefined8 *)(pFVar2 + 0x58) = 0;
    local_58 = 0;
    uStack_50 = 0;
    *(undefined8 *)(pFVar2 + 0x60) = 0;
    *(undefined8 *)(pFVar2 + 0x68) = 0;
    local_48 = 0;
    uStack_40 = 0;
    *(undefined8 *)(pFVar2 + 0x70) = 0;
    *(undefined8 *)(pFVar2 + 0x78) = 0;
    pFVar2 = pFVar2 + 0x80;
  }
  return;
}

