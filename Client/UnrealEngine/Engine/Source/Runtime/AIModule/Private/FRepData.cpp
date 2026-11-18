// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// ~FRepData @ 146f2e470

void __thiscall FGameplayDebuggerCategory_AI::FRepData::~FRepData(FRepData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TickingTaskInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskQueueInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NavDataInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentAIAssets).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentAIState).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentAITask).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathFollowingInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MovementModeInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MovementBaseInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PawnName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControllerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146f30160

FRepData * __thiscall
FGameplayDebuggerCategory_AI::FRepData::operator=(FRepData *this,FRepData *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  uint uVar5;
  
  if (this != param_1) {
    pFVar3 = (this->ControllerName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->ControllerName).Data.AllocatorInstance.Data =
         (param_1->ControllerName).Data.AllocatorInstance.Data;
    (param_1->ControllerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ControllerName).Data.ArrayNum = (param_1->ControllerName).Data.ArrayNum;
    (this->ControllerName).Data.ArrayMax = (param_1->ControllerName).Data.ArrayMax;
    (param_1->ControllerName).Data.ArrayNum = 0;
    (param_1->ControllerName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PawnName;
  pFVar2 = &this->PawnName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PawnName).Data.ArrayNum = (param_1->PawnName).Data.ArrayNum;
    (this->PawnName).Data.ArrayMax = (param_1->PawnName).Data.ArrayMax;
    (param_1->PawnName).Data.ArrayNum = 0;
    (param_1->PawnName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->MovementBaseInfo;
  pFVar2 = &this->MovementBaseInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MovementBaseInfo).Data.ArrayNum = (param_1->MovementBaseInfo).Data.ArrayNum;
    (this->MovementBaseInfo).Data.ArrayMax = (param_1->MovementBaseInfo).Data.ArrayMax;
    (param_1->MovementBaseInfo).Data.ArrayNum = 0;
    (param_1->MovementBaseInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->MovementModeInfo;
  pFVar2 = &this->MovementModeInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MovementModeInfo).Data.ArrayNum = (param_1->MovementModeInfo).Data.ArrayNum;
    (this->MovementModeInfo).Data.ArrayMax = (param_1->MovementModeInfo).Data.ArrayMax;
    (param_1->MovementModeInfo).Data.ArrayNum = 0;
    (param_1->MovementModeInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PathFollowingInfo;
  pFVar2 = &this->PathFollowingInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PathFollowingInfo).Data.ArrayNum = (param_1->PathFollowingInfo).Data.ArrayNum;
    (this->PathFollowingInfo).Data.ArrayMax = (param_1->PathFollowingInfo).Data.ArrayMax;
    (param_1->PathFollowingInfo).Data.ArrayNum = 0;
    (param_1->PathFollowingInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CurrentAITask;
  this->NextPathPointIndex = param_1->NextPathPointIndex;
  pFVar2 = &this->CurrentAITask;
  dVar4 = (param_1->PathGoalLocation).field0_0x0._s_0.Y;
  (this->PathGoalLocation).field0_0x0._s_0.X = (param_1->PathGoalLocation).field0_0x0._s_0.X;
  (this->PathGoalLocation).field0_0x0._s_0.Y = dVar4;
  (this->PathGoalLocation).field0_0x0._s_0.Z = (param_1->PathGoalLocation).field0_0x0._s_0.Z;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CurrentAITask).Data.ArrayNum = (param_1->CurrentAITask).Data.ArrayNum;
    (this->CurrentAITask).Data.ArrayMax = (param_1->CurrentAITask).Data.ArrayMax;
    (param_1->CurrentAITask).Data.ArrayNum = 0;
    (param_1->CurrentAITask).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CurrentAIState;
  pFVar2 = &this->CurrentAIState;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CurrentAIState).Data.ArrayNum = (param_1->CurrentAIState).Data.ArrayNum;
    (this->CurrentAIState).Data.ArrayMax = (param_1->CurrentAIState).Data.ArrayMax;
    (param_1->CurrentAIState).Data.ArrayNum = 0;
    (param_1->CurrentAIState).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CurrentAIAssets;
  pFVar2 = &this->CurrentAIAssets;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CurrentAIAssets).Data.ArrayNum = (param_1->CurrentAIAssets).Data.ArrayNum;
    (this->CurrentAIAssets).Data.ArrayMax = (param_1->CurrentAIAssets).Data.ArrayMax;
    (param_1->CurrentAIAssets).Data.ArrayNum = 0;
    (param_1->CurrentAIAssets).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->NavDataInfo;
  pFVar2 = &this->NavDataInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NavDataInfo).Data.ArrayNum = (param_1->NavDataInfo).Data.ArrayNum;
    (this->NavDataInfo).Data.ArrayMax = (param_1->NavDataInfo).Data.ArrayMax;
    (param_1->NavDataInfo).Data.ArrayNum = 0;
    (param_1->NavDataInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->MontageInfo;
  pFVar2 = &this->MontageInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MontageInfo).Data.ArrayNum = (param_1->MontageInfo).Data.ArrayNum;
    (this->MontageInfo).Data.ArrayMax = (param_1->MontageInfo).Data.ArrayMax;
    (param_1->MontageInfo).Data.ArrayNum = 0;
    (param_1->MontageInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->TaskQueueInfo;
  pFVar2 = &this->TaskQueueInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TaskQueueInfo).Data.ArrayNum = (param_1->TaskQueueInfo).Data.ArrayNum;
    (this->TaskQueueInfo).Data.ArrayMax = (param_1->TaskQueueInfo).Data.ArrayMax;
    (param_1->TaskQueueInfo).Data.ArrayNum = 0;
    (param_1->TaskQueueInfo).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->TickingTaskInfo;
  pFVar2 = &this->TickingTaskInfo;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TickingTaskInfo).Data.ArrayNum = (param_1->TickingTaskInfo).Data.ArrayNum;
    (this->TickingTaskInfo).Data.ArrayMax = (param_1->TickingTaskInfo).Data.ArrayMax;
    (param_1->TickingTaskInfo).Data.ArrayNum = 0;
    (param_1->TickingTaskInfo).Data.ArrayMax = 0;
  }
  this->NumTasksInQueue = param_1->NumTasksInQueue;
  this->NumTickingTasks = param_1->NumTickingTasks;
  uVar5 = (ZPULL(*(undefined4 *)&this->field_0xe4,0,1) ^ param_1->bHasController) & 1 ^
          *(undefined4 *)&this->field_0xe4;
  *(uint *)&this->field_0xe4 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0xe4) & 2 ^ uVar5;
  *(uint *)&this->field_0xe4 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0xe4) & 4 ^ uVar5;
  *(uint *)&this->field_0xe4 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0xe4) & 8 ^ uVar5;
  *(uint *)&this->field_0xe4 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0xe4) & 0x10 ^ uVar5;
  *(uint *)&this->field_0xe4 = uVar5;
  *(uint *)&this->field_0xe4 = (uVar5 ^ *(uint *)&param_1->field_0xe4) & 0x20 ^ uVar5;
  return this;
}

// Serialize @ 146f73590

void __thiscall FGameplayDebuggerCategory_AI::FRepData::Serialize(FRepData *this,FArchive *param_1)

{
  int *piVar1;
  short *psVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  short *psVar6;
  longlong *plVar7;
  uint uVar8;
  uint local_res8 [2];
  
  ::operator<<(param_1,&this->ControllerName);
  ::operator<<(param_1,&this->PawnName);
  ::operator<<(param_1,&this->MovementBaseInfo);
  ::operator<<(param_1,&this->MovementModeInfo);
  ::operator<<(param_1,&this->PathFollowingInfo);
  piVar1 = &this->NextPathPointIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &param_1->field_0x2a;
  UE::Math::operator<<(param_1,&this->PathGoalLocation);
  ::operator<<(param_1,&this->CurrentAITask);
  ::operator<<(param_1,&this->CurrentAIState);
  ::operator<<(param_1,&this->CurrentAIAssets);
  ::operator<<(param_1,&this->NavDataInfo);
  ::operator<<(param_1,&this->MontageInfo);
  ::operator<<(param_1,&this->TaskQueueInfo);
  ::operator<<(param_1,&this->TickingTaskInfo);
  psVar2 = &this->NumTasksInQueue;
  psVar6 = (short *)**(undefined8 **)&param_1->field_0x8;
  if ((short *)(*(undefined8 **)&param_1->field_0x8)[1] < psVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,psVar2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)psVar2);
    }
  }
  else {
    *psVar2 = *psVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  psVar2 = &this->NumTickingTasks;
  psVar6 = (short *)**(undefined8 **)&param_1->field_0x8;
  if ((short *)(*(undefined8 **)&param_1->field_0x8)[1] < psVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,psVar2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)psVar2);
    }
  }
  else {
    *psVar2 = *psVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  local_res8[0] =
       ((((this->bPathHasGoalActor | this->bHasController * 2) * 2 | this->bIsUsingGameplayTasks) *
         2 | this->bIsUsingBehaviorTree) * 2 | this->bIsUsingCharacter) * 2 |
       this->bIsUsingPathFollowing;
  plVar7 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  uVar8 = (local_res8[0] & 0xf) << 2 | *(uint *)&this->field_0xe4 & 0xffffffc3;
  uVar8 = (local_res8[0] >> 3 ^ uVar8) & 2 ^ uVar8;
  *(uint *)&this->field_0xe4 = (local_res8[0] >> 5 ^ uVar8) & 1 ^ uVar8;
  return;
}

// Serialize @ 146f73800

void __thiscall
FGameplayDebuggerCategory_BehaviorTree::FRepData::Serialize(FRepData *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->CompName);
  ::operator<<(param_1,&this->TreeDesc);
  ::operator<<(param_1,&this->BlackboardDesc);
  return;
}

// Serialize @ 146f73850

void __thiscall FGameplayDebuggerCategory_EQS::FRepData::Serialize(FRepData *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<EQSDebug::FQueryData,TSizedDefaultAllocator<32>_>
            (param_1,&this->QueryDebugData);
  return;
}

// Serialize @ 146fce4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_NavLocalGrid::FRepData::Serialize(FRepData *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  uint *puVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  FArchive *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint local_res8 [2];
  
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumSources,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumSources);
    }
  }
  else {
    this->NumSources = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x2a;
  local_res8[0] = (this->Grids).ArrayNum;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    TArray<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Grids,local_res8[0],Default);
  }
  uVar12 = 0;
  if (0 < (int)local_res8[0]) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->Grids).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (this->Grids).AllocatorInstance.Data + lVar13;
      pFVar10 = UE::Math::operator<<(param_1,(TVector<double> *)pFVar11);
      pFVar10 = UE::Math::operator<<(pFVar10,(TVector<double> *)(pFVar11 + 0x18));
      puVar4 = (undefined1 *)**(undefined8 **)&pFVar10->field_0x8;
      if ((undefined1 *)(*(undefined8 **)&pFVar10->field_0x8)[1] < puVar4 + 1) {
        (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,pFVar11 + 0x30,1);
      }
      else {
        pFVar11[0x30].field_0x0 = *puVar4;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 1;
      }
      pFVar7 = pFVar11 + 0x38;
      puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar7);
        }
      }
      else {
        *(uint *)pFVar7 = *puVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pFVar7 = pFVar11 + 0x3c;
      puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar7);
        }
      }
      else {
        *(uint *)pFVar7 = *puVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)(pFVar11 + 0x40));
        }
      }
      else {
        *(uint *)(pFVar11 + 0x40) = *puVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::BulkSerialize
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar11 + 0x48),param_1,false
                );
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x58;
    } while ((int)uVar12 < (int)local_res8[0]);
  }
  return;
}

// Serialize @ 146fce760

void __thiscall
FGameplayDebuggerCategory_Navmesh::FRepData::Serialize(FRepData *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong *plVar4;
  byte local_res8 [8];
  
  piVar1 = &this->NumDirtyAreas;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->NumRunningTasks;
  puVar2 = &param_1->field_0x2a;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->NumRemainingTasks;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->NavDataName);
  UE::Math::operator<<(param_1,&this->LockedReferenceLocation);
  ::operator<<(param_1,&this->NavBuildLockStatusDesc);
  ::operator<<(param_1,&this->SupportedAgents);
  piVar1 = &this->NumSuspendedDirtyAreas;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bIsNavBuildLocked);
  ::operator<<(param_1,&this->bIsNavOctreeLocked);
  ::operator<<(param_1,&this->bIsNavDataRebuildingSuspended);
  local_res8[0] =
       -(this->bCanCycleNavigationData != false) & 2U | this->bCanChangeReference != false |
       -(this->bReferenceTooFarFromNavData != false) & 8U |
       -(this->bIsUsingPlayerActor != false) & 4U;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar4[1] < (byte *)*plVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  this->bCanChangeReference = (bool)(local_res8[0] & 1);
  this->bCanCycleNavigationData = (bool)(local_res8[0] >> 1 & 1);
  this->bIsUsingPlayerActor = (bool)(local_res8[0] >> 2 & 1);
  this->bReferenceTooFarFromNavData = (bool)(local_res8[0] >> 3 & 1);
  return;
}

