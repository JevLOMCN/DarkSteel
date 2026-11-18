// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// FGameplayDebuggerCategory_AI @ 146f29390

FGameplayDebuggerCategory_AI * __thiscall
FGameplayDebuggerCategory_AI::FGameplayDebuggerCategory_AI(FGameplayDebuggerCategory_AI *this)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffff7;
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_AI__6B_;
  (this->DataPack).bHasController = 0;
  (this->DataPack).bIsUsingGameplayTasks = 0;
  (this->DataPack).bIsUsingBehaviorTree = 0;
  (this->DataPack).bIsUsingCharacter = 0;
  (this->DataPack).bIsUsingPathFollowing = 0;
  (this->DataPack).bPathHasGoalActor = 0;
  (this->DataPack).ControllerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).ControllerName.Data.ArrayNum = 0;
  (this->DataPack).ControllerName.Data.ArrayMax = 0;
  (this->DataPack).PawnName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).PawnName.Data.ArrayNum = 0;
  (this->DataPack).PawnName.Data.ArrayMax = 0;
  (this->DataPack).MovementBaseInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).MovementBaseInfo.Data.ArrayNum = 0;
  (this->DataPack).MovementBaseInfo.Data.ArrayMax = 0;
  (this->DataPack).MovementModeInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).MovementModeInfo.Data.ArrayNum = 0;
  (this->DataPack).MovementModeInfo.Data.ArrayMax = 0;
  (this->DataPack).PathFollowingInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).PathFollowingInfo.Data.ArrayNum = 0;
  (this->DataPack).PathFollowingInfo.Data.ArrayMax = 0;
  (this->DataPack).NextPathPointIndex = 0;
  (this->DataPack).CurrentAITask.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).CurrentAITask.Data.ArrayNum = 0;
  (this->DataPack).CurrentAITask.Data.ArrayMax = 0;
  (this->DataPack).CurrentAIState.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).CurrentAIState.Data.ArrayNum = 0;
  (this->DataPack).CurrentAIState.Data.ArrayMax = 0;
  (this->DataPack).CurrentAIAssets.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).CurrentAIAssets.Data.ArrayNum = 0;
  (this->DataPack).CurrentAIAssets.Data.ArrayMax = 0;
  (this->DataPack).NavDataInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).NavDataInfo.Data.ArrayNum = 0;
  (this->DataPack).NavDataInfo.Data.ArrayMax = 0;
  (this->DataPack).MontageInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).MontageInfo.Data.ArrayNum = 0;
  (this->DataPack).MontageInfo.Data.ArrayMax = 0;
  (this->DataPack).TaskQueueInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).TaskQueueInfo.Data.ArrayNum = 0;
  (this->DataPack).TaskQueueInfo.Data.ArrayMax = 0;
  (this->DataPack).TickingTaskInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).TickingTaskInfo.Data.ArrayNum = 0;
  (this->DataPack).TickingTaskInfo.Data.ArrayMax = 0;
  (this->DataPack).NumTasksInQueue = 0;
  (this->DataPack).NumTickingTasks = 0;
  (this->PathDataPack).PathCorridor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathDataPack).PathCorridor.ArrayNum = 0;
  (this->PathDataPack).PathCorridor.ArrayMax = 0;
  (this->PathDataPack).PathPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathDataPack).PathPoints.ArrayNum = 0;
  (this->PathDataPack).PathPoints.ArrayMax = 0;
  this->RawLastPath = (FNavigationPath *)0x0;
  this->LastPathUpdateTime = 0.0;
  FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>
            ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
  iVar3 = FGameplayDebuggerCategory::
          SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>
                    ((FGameplayDebuggerCategory *)this,&this->PathDataPack,ResetOnActorChange);
  this->PathDataPackId = iVar3;
  return this;
}

// CollectData @ 146f365b0

/* WARNING: Removing unreachable block (ram,0x000146f36d53) */
/* WARNING: Removing unreachable block (ram,0x000146f36d5d) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::CollectData
          (FGameplayDebuggerCategory_AI *this,APlayerController *param_1,AActor *param_2)

{
  int *piVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  FRepData *this_00;
  short *psVar4;
  undefined1 *puVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UCharacterMovementComponent *pUVar8;
  UGameplayTask *pUVar9;
  FPoly *pFVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  UClass *pUVar19;
  FString *pFVar20;
  longlong lVar21;
  UAnimMontage *pUVar22;
  UWorld *pUVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  wchar_t *pwVar26;
  longlong *plVar27;
  ACharacter *pAVar28;
  int iVar29;
  UNavigationSystemBase *pUVar30;
  ACharacter *local_res8;
  FName local_res18;
  FName local_res20;
  FString local_188;
  FName local_178;
  TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
  local_170;
  TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
  local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  UGameplayTasksComponent *local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  void *local_d0 [2];
  FString local_c0;
  void *local_b0 [2];
  void *local_a0 [2];
  void *local_90 [2];
  FString local_80;
  FString local_70;
  FString local_60;
  undefined1 local_50 [24];
  
  pAVar28 = (ACharacter *)0x0;
  local_res8 = pAVar28;
  if (param_2 == (AActor *)0x0) {
LAB_146f3663b:
    param_2 = (AActor *)pAVar28;
    if (local_res8 != (ACharacter *)0x0) goto LAB_146f3664a;
    bVar16 = true;
    bVar12 = false;
    pFVar20 = ::FString::FString(&local_e0,L"{red}No selected pawn.");
  }
  else {
    pUVar19 = Z_Construct_UClass_APawn_NoRegister();
    iVar29 = (int)pUVar19->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar19->_padding_)) goto LAB_146f3663b;
    pUVar19 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar29 = (int)pUVar19->_padding_;
    local_res8 = (ACharacter *)param_2;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar19->_padding_)) goto LAB_146f3663b;
LAB_146f3664a:
    bVar16 = false;
    bVar12 = true;
    pFVar20 = (FString *)(**(code **)(*(longlong *)local_res8 + 0x6f0))(local_res8,local_d0);
  }
  pFVar2 = &(this->DataPack).PawnName;
  if (pFVar2 != pFVar20) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
    (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).PawnName.Data.ArrayNum = (pFVar20->Data).ArrayNum;
    (this->DataPack).PawnName.Data.ArrayMax = (pFVar20->Data).ArrayMax;
    (pFVar20->Data).ArrayNum = 0;
    (pFVar20->Data).ArrayMax = 0;
  }
  if ((bVar16) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if ((bVar12) && (local_d0[0] != (void *)0x0)) {
    FMemory::Free(local_d0[0]);
  }
  bVar14 = false;
  bVar13 = false;
  bVar16 = false;
  bVar12 = false;
  puVar3 = &(this->DataPack).field_0xe4;
  (this->DataPack).bIsUsingCharacter = 0;
  *(uint *)puVar3 = *(uint *)puVar3 | -(uint)((ACharacter *)param_2 != (ACharacter *)0x0) & 8;
  if (local_res8 == (ACharacter *)0x0) {
    (this->DataPack).bHasController = 0;
LAB_146f3680a:
    ::FString::operator=(&(this->DataPack).ControllerName,L"No Controller");
    if (local_res8 == (ACharacter *)0x0) goto LAB_146f36ebd;
  }
  else {
    pAVar28 = *(ACharacter **)&local_res8->field_0x2f0;
    if (pAVar28 == (ACharacter *)0x0) {
LAB_146f36751:
      pAVar28 = (ACharacter *)0x0;
    }
    else {
      pUVar19 = Z_Construct_UClass_AAIController_NoRegister();
      iVar29 = (int)pUVar19->_padding_;
      if ((*(int *)(*(longlong *)&pAVar28->field_0x10 + 0x38) < iVar29) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pAVar28->field_0x10 + 0x30) + (longlong)iVar29 * 8) !=
          &pUVar19->_padding_)) goto LAB_146f36751;
    }
    this_00 = &this->DataPack;
    (this->DataPack).bHasController = pAVar28 != (ACharacter *)0x0;
    if (pAVar28 == (ACharacter *)0x0) goto LAB_146f3680a;
    if ((*(uint *)&pAVar28->field_0x8 >> 0x1e & 1) == 0) {
      local_res18.ComparisonIndex.Value = *(uint *)&pAVar28->field_0x18;
      local_res18.Number = *(uint *)&pAVar28->field_0x1c;
      ::FName::ToString(&local_res18,&local_188);
      if (this_00 != (FRepData *)&local_188) {
        pFVar7 = (this_00->ControllerName).Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (this_00->ControllerName).Data.AllocatorInstance.Data =
             local_188.Data.AllocatorInstance.Data;
        (this->DataPack).ControllerName.Data.ArrayNum = local_188.Data.ArrayNum;
        (this->DataPack).ControllerName.Data.ArrayMax = local_188.Data.ArrayMax;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::operator=(&this_00->ControllerName,L"Controller PENDING KILL");
    }
  }
  if ((*(uint *)&local_res8->field_0x8 >> 0x1e & 1) != 0) {
LAB_146f36ebd:
    piVar1 = &(this->PathDataPack).PathCorridor.ArrayMax;
    pFVar10 = (FPoly *)(this->PathDataPack).PathCorridor.AllocatorInstance.Data;
    iVar29 = (this->PathDataPack).PathCorridor.ArrayNum;
    if ((this->PathDataPack).PathCorridor.ArrayMax < 0) {
      DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>(pFVar10,iVar29);
      (this->PathDataPack).PathCorridor.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->PathDataPack,0,piVar1);
      }
    }
    else {
      DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>(pFVar10,iVar29);
      (this->PathDataPack).PathCorridor.ArrayNum = 0;
    }
    iVar29 = (this->PathDataPack).PathPoints.ArrayMax;
    (this->PathDataPack).PathPoints.ArrayNum = 0;
    if (iVar29 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PathDataPack).PathPoints.AllocatorInstance,0,
                 &(this->PathDataPack).PathPoints.ArrayMax);
    }
    return;
  }
  if (((ACharacter *)param_2 != (ACharacter *)0x0) &&
     (pUVar8 = (((ACharacter *)param_2)->CharacterMovement).field0_0x0.DebugPtr,
     pUVar8 != (UCharacterMovementComponent *)0x0)) {
    lVar21 = (**(code **)(*(longlong *)local_res8 + 0x768))();
    if (lVar21 == 0) {
      bVar12 = true;
      pFVar20 = ::FString::FString(&local_c0,L"None");
    }
    else {
      local_178 = *(FName *)(lVar21 + 0xa8);
      local_res20 = *(FName *)(lVar21 + 0x18);
      ::FName::ToString(&local_res20,&local_110);
      if (local_178 == (FName)0x0) {
        ::FString::FString(&local_130,L"None");
      }
      else {
        local_178 = *(FName *)((longlong)local_178 + 0x18);
        ::FName::ToString(&local_178,&local_130);
      }
      bVar14 = true;
      bVar13 = true;
      bVar16 = true;
      ::FString::PrintfImpl(&local_f0,L"%s.%s");
      pFVar20 = &local_f0;
    }
    ::FString::operator=(&(this->DataPack).MovementBaseInfo,pFVar20);
    if ((bVar12) && (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if ((bVar16) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if ((bVar13) && (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if ((bVar14) && (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    pFVar20 = (FString *)(**(code **)(*(longlong *)pUVar8 + 0x8d0))(pUVar8,local_b0);
    ::FString::operator=(&(this->DataPack).MovementModeInfo,pFVar20);
    if (local_b0[0] != (void *)0x0) {
      FMemory::Free(local_b0[0]);
    }
  }
  bVar12 = false;
  if (pAVar28 == (ACharacter *)0x0) {
    puVar5 = &(this->DataPack).field_0xe4;
    (this->DataPack).bIsUsingBehaviorTree = 0;
    (this->DataPack).bIsUsingGameplayTasks = 0;
  }
  else {
    if (*(longlong *)&(pAVar28->ReplicatedBasedMovement).Location == 0) {
LAB_146f369e6:
      plVar27 = (longlong *)0x0;
    }
    else {
      pUVar19 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      bVar16 = FObjectPtr::IsA((FObjectPtr *)&(pAVar28->ReplicatedBasedMovement).Location,pUVar19);
      if (!bVar16) goto LAB_146f369e6;
      plVar27 = *(longlong **)&(pAVar28->ReplicatedBasedMovement).Location;
    }
    (this->DataPack).bIsUsingBehaviorTree = -(uint)(plVar27 != (longlong *)0x0) >> 4;
    if (plVar27 != (longlong *)0x0) {
      pFVar20 = (FString *)(**(code **)(*plVar27 + 0x550))(plVar27,local_a0);
      ::FString::operator=(&(this->DataPack).CurrentAITask,pFVar20);
      if (local_a0[0] != (void *)0x0) {
        FMemory::Free(local_a0[0]);
      }
      cVar17 = (**(code **)(*plVar27 + 0x530))(plVar27);
      if (cVar17 == '\0') {
        cVar17 = (**(code **)(*plVar27 + 0x538))(plVar27);
        pwVar26 = L"Inactive";
        if (cVar17 != '\0') {
          pwVar26 = L"Paused";
        }
      }
      else {
        pwVar26 = L"Running";
      }
      ::FString::operator=(&(this->DataPack).CurrentAIState,pwVar26);
      pFVar20 = (FString *)(**(code **)(*plVar27 + 0x558))(plVar27,local_90);
      ::FString::operator=(&(this->DataPack).CurrentAIAssets,pFVar20);
      if (local_90[0] != (void *)0x0) {
        FMemory::Free(local_90[0]);
      }
    }
    local_120 = (UGameplayTasksComponent *)(pAVar28->ReplicatedBasedMovement).Rotation.Pitch;
    (this->DataPack).bIsUsingGameplayTasks =
         -(uint)(local_120 != (UGameplayTasksComponent *)0x0) >> 5;
    if (local_120 != (UGameplayTasksComponent *)0x0) {
      UGameplayTasksComponent::GetTickingTaskIterator(local_120,&local_170);
      for (; (pTVar15 = local_170.Container, -1 < local_170.Index &&
             (local_170.Index < (local_170.Container)->ArrayNum));
          local_170.Index = local_170.Index + 1) {
        lVar21 = (longlong)local_170.Index;
        uVar18 = 0;
        if (local_170.Index < (local_170.Container)->ArrayNum) {
          uVar18 = (uint)~local_170.Index >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pUVar9 = *(UGameplayTask **)((pTVar15->AllocatorInstance).Data + lVar21 * 8);
        if (pUVar9 != (UGameplayTask *)0x0) {
          pFVar20 = DescribeTaskHelper(&local_80,pUVar9);
          iVar6 = (pFVar20->Data).ArrayNum;
          iVar29 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar29 = 0;
          }
          ::FString::AppendChars
                    (&(this->DataPack).TickingTaskInfo,
                     (wchar_t *)(pFVar20->Data).AllocatorInstance.Data,iVar29);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          psVar4 = &(this->DataPack).NumTickingTasks;
          *psVar4 = *psVar4 + 1;
        }
      }
      UGameplayTasksComponent::GetPriorityQueueIterator(local_120,&local_160);
      for (; (pTVar15 = local_160.Container, -1 < local_160.Index &&
             (local_160.Index < (local_160.Container)->ArrayNum));
          local_160.Index = local_160.Index + 1) {
        lVar21 = (longlong)local_160.Index;
        uVar18 = 0;
        if (local_160.Index < (local_160.Container)->ArrayNum) {
          uVar18 = (uint)~local_160.Index >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pUVar9 = *(UGameplayTask **)((pTVar15->AllocatorInstance).Data + lVar21 * 8);
        if (pUVar9 != (UGameplayTask *)0x0) {
          pFVar20 = DescribeTaskHelper(&local_70,pUVar9);
          iVar6 = (pFVar20->Data).ArrayNum;
          iVar29 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar29 = 0;
          }
          ::FString::AppendChars
                    (&(this->DataPack).TaskQueueInfo,
                     (wchar_t *)(pFVar20->Data).AllocatorInstance.Data,iVar29);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          psVar4 = &(this->DataPack).NumTasksInQueue;
          *psVar4 = *psVar4 + 1;
        }
      }
    }
  }
  if ((ACharacter *)param_2 == (ACharacter *)0x0) {
    pFVar20 = &local_150;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    bVar12 = true;
    pUVar22 = ACharacter::GetCurrentMontage((ACharacter *)param_2);
    if (pUVar22 == (UAnimMontage *)0x0) {
      ::FString::FString(&local_100,L"None");
      pFVar20 = &local_100;
    }
    else {
      local_118 = (FName)pUVar22->_padding_;
      ::FName::ToString(&local_118,&local_100);
      pFVar20 = &local_100;
    }
  }
  pFVar2 = &(this->DataPack).MontageInfo;
  if (pFVar2 != pFVar20) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
    (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).MontageInfo.Data.ArrayNum = (pFVar20->Data).ArrayNum;
    iVar29 = (pFVar20->Data).ArrayMax;
    (pFVar20->Data).ArrayNum = 0;
    (pFVar20->Data).ArrayMax = 0;
    (this->DataPack).MontageInfo.Data.ArrayMax = iVar29;
  }
  if ((bVar12) && (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  bVar16 = false;
  bVar12 = false;
  pUVar23 = AActor::GetWorld((AActor *)local_res8);
  if ((pUVar23 == (UWorld *)0x0) ||
     (pUVar30 = (pUVar23->NavigationSystem).field0_0x0.DebugPtr,
     pUVar30 == (UNavigationSystemBase *)0x0)) {
LAB_146f36db7:
    pUVar30 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar19 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar29 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&pUVar30->field_0x10 + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar30->field_0x10 + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar19->_padding_)) goto LAB_146f36db7;
  }
  if ((pAVar28 != (ACharacter *)0x0) && (pUVar30 != (UNavigationSystemBase *)0x0)) {
    pcVar11 = *(code **)(*(longlong *)pUVar30 + 0x350);
    uVar24 = (**(code **)(*(longlong *)&pAVar28->field_0x2c0 + 0x18))
                       (&pAVar28->field_0x2c0,local_50);
    uVar25 = (**(code **)(*(longlong *)&pAVar28->field_0x2c0 + 0x10))(&pAVar28->field_0x2c0);
    lVar21 = (*pcVar11)(pUVar30,uVar25,uVar24,&UE::Math::TVector<double>::ZeroVector);
    if (lVar21 != 0) {
      bVar12 = true;
      pFVar20 = ::FName::ToString((FName *)(lVar21 + 0x308),&local_60);
      goto LAB_146f36e47;
    }
  }
  bVar16 = true;
  pFVar20 = &local_140;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_146f36e47:
  pFVar2 = &(this->DataPack).NavDataInfo;
  if (pFVar2 != pFVar20) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
    (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).NavDataInfo.Data.ArrayNum = (pFVar20->Data).ArrayNum;
    (this->DataPack).NavDataInfo.Data.ArrayMax = (pFVar20->Data).ArrayMax;
    (pFVar20->Data).ArrayNum = 0;
    (pFVar20->Data).ArrayMax = 0;
  }
  if ((bVar16) && (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if ((bVar12) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  CollectPathData(this,(AAIController *)pAVar28);
  return;
}

// CollectPathData @ 146f39820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::CollectPathData
          (FGameplayDebuggerCategory_AI *this,AAIController *param_1)

{
  undefined1 *puVar1;
  FRepDataPath *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  ARecastNavMesh *this_00;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  FColor FVar14;
  int iVar15;
  ARecastNavMesh *pAVar16;
  TVector<double> *pTVar17;
  UClass *pUVar18;
  undefined4 extraout_var;
  wchar_t *pwVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ARecastNavMesh *pAVar25;
  FScriptContainerElement *pFVar26;
  int *piVar27;
  ulonglong uVar28;
  ARecastNavMesh *pAVar29;
  ARecastNavMesh *this_01;
  undefined1 local_res10 [8];
  ARecastNavMesh *local_res18;
  longlong local_res20;
  FString *local_c8;
  undefined8 local_c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  undefined4 local_a8;
  void *local_a0;
  undefined8 local_98;
  FRepDataPath local_90;
  ARecastNavMesh *local_70;
  TVector<double> local_68;
  
  if (param_1 == (AAIController *)0x0) {
    (this->DataPack).bIsUsingPathFollowing = 0;
    return;
  }
  pAVar29 = (ARecastNavMesh *)(param_1->PathFollowingComponent).field0_0x0.DebugPtr;
  (this->DataPack).bIsUsingPathFollowing = 0;
  puVar1 = &(this->DataPack).field_0xe4;
  *(uint *)puVar1 = *(uint *)puVar1 | -(uint)(pAVar29 != (ARecastNavMesh *)0x0) & 4;
  if (pAVar29 == (ARecastNavMesh *)0x0) {
    return;
  }
  uVar21 = 0;
  local_c8 = (FString *)0x0;
  local_c0 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  (**(code **)(pAVar29->_padding_ + 0x568))(pAVar29,&local_c8,&local_a0);
  uVar23 = uVar21;
  uVar28 = uVar21;
  if (0 < (int)local_c0) {
    do {
      local_res18 = pAVar29;
      uVar20 = (uint)uVar21;
      uVar24 = ~uVar20 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar20 < (int)local_98) {
        uVar13 = uVar24;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = *(int *)(uVar28 + (longlong)local_a0);
      if (iVar15 == 0) {
LAB_146f3995e:
        uVar13 = 0;
        if ((int)uVar20 < (int)local_c0) {
          uVar13 = uVar24;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar4 = *(int *)((longlong)&(local_c8->Data).ArrayNum + uVar23);
        pwVar19 = *(wchar_t **)((longlong)&(local_c8->Data).AllocatorInstance.Data + uVar23);
        iVar15 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar15 = 0;
        }
LAB_146f399bc:
        ::FString::AppendChars(&(this->DataPack).PathFollowingInfo,pwVar19,iVar15);
      }
      else {
        if (iVar15 == 1) {
          ::FString::AppendChars(&(this->DataPack).PathFollowingInfo,L", {yellow}",10);
          uVar13 = 0;
          if ((int)uVar20 < (int)local_c0) {
            uVar13 = uVar24;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar4 = *(int *)((longlong)&(local_c8->Data).ArrayNum + uVar23);
          iVar15 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar15 = 0;
          }
          ::FString::AppendChars
                    (&(this->DataPack).PathFollowingInfo,
                     *(wchar_t **)((longlong)&(local_c8->Data).AllocatorInstance.Data + uVar23),
                     iVar15);
          iVar15 = 1;
          pwVar19 = L":";
          goto LAB_146f399bc;
        }
        if (iVar15 == 2) {
          pwVar19 = L"{orange}";
LAB_146f39952:
          ::FString::AppendChars(&(this->DataPack).PathFollowingInfo,pwVar19,8);
          goto LAB_146f3995e;
        }
        if (iVar15 == 3) {
          pwVar19 = L"{yellow}";
          goto LAB_146f39952;
        }
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar23 = uVar23 + 0x10;
      uVar28 = uVar28 + 4;
      pAVar29 = local_res18;
    } while ((int)(uVar20 + 1) < (int)local_c0);
  }
  pAVar25 = (ARecastNavMesh *)0x0;
  pTVar5 = ((FSharedReferencer<1> *)&pAVar29->_padding_)->ReferenceController;
  this_01 = (ARecastNavMesh *)((TSharedPtr<FNavigationPath,1> *)&pAVar29->_padding_)->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = this_01;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (this_01 != (ARecastNavMesh *)0x0) {
    pAVar16 = pAVar25;
    if ((this_01->_padding_ & 0x1000) != 0) {
      pAVar16 = (ARecastNavMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->_padding_);
    }
    (this->DataPack).bPathHasGoalActor = 0;
    puVar1 = &(this->DataPack).field_0xe4;
    *(uint *)puVar1 = *(uint *)puVar1 | -(uint)(pAVar16 != (ARecastNavMesh *)0x0) & 2;
    pTVar17 = FNavigationPath::GetGoalLocation((FNavigationPath *)this_01,&local_68);
    dVar9 = (pTVar17->field0_0x0)._s_0.Y;
    (this->DataPack).PathGoalLocation.field0_0x0._s_0.X = (pTVar17->field0_0x0)._s_0.X;
    (this->DataPack).PathGoalLocation.field0_0x0._s_0.Y = dVar9;
    (this->DataPack).PathGoalLocation.field0_0x0._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
    (this->DataPack).NextPathPointIndex = *(int *)((longlong)&pAVar29->_padding_ + 4);
  }
  if ((this_01 == (ARecastNavMesh *)this->RawLastPath) &&
     ((this_01 == (ARecastNavMesh *)0x0 || (this->LastPathUpdateTime == (double)this_01->_padding_))
     )) goto LAB_146f39fdf;
  this->RawLastPath = (FNavigationPath *)this_01;
  local_90.PathCorridor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.PathCorridor.ArrayNum = 0;
  local_90.PathCorridor.ArrayMax = 0;
  local_90.PathPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.PathPoints.ArrayNum = 0;
  local_90.PathPoints.ArrayMax = 0;
  FRepDataPath::operator=(&this->PathDataPack,&local_90);
  if (local_90.PathPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.PathPoints.AllocatorInstance.Data);
  }
  FVar11.Data = local_90.PathCorridor.AllocatorInstance.Data;
  DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
            ((FPoly *)local_90.PathCorridor.AllocatorInstance.Data,local_90.PathCorridor.ArrayNum);
  if ((FPoly *)FVar11.Data != (FPoly *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (this_01 == (ARecastNavMesh *)0x0) goto LAB_146f39fdf;
  this->LastPathUpdateTime = (double)this_01->_padding_;
  if ((((FNavPathType *)&this_01->_padding_)->Id == FNavMeshPath::Type.Id) ||
     (((FNavPathType *)this_01->_padding_ != (FNavPathType *)0x0 &&
      (bVar12 = FNavPathType::IsA((FNavPathType *)this_01->_padding_,&FNavMeshPath::Type), bVar12)))
     ) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  pAVar29 = pAVar25;
  if (bVar12) {
    pAVar29 = this_01;
  }
  pAVar16 = (ARecastNavMesh *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this_01->_padding_ + 4));
  if (pAVar16 == (ARecastNavMesh *)0x0) {
LAB_146f39c24:
    local_res18 = (ARecastNavMesh *)0x0;
    pAVar16 = pAVar25;
  }
  else {
    local_res18 = pAVar16;
    pUVar18 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar15 = (int)pUVar18->_padding_;
    if ((*(int *)(pAVar16->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar16->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar18->_padding_)) goto LAB_146f39c24;
  }
  this_00 = local_res18;
  if (((pAVar29 != (ARecastNavMesh *)0x0) && (pAVar16 != (ARecastNavMesh *)0x0)) &&
     (0 < (int)pAVar29->_padding_)) {
    pFVar2 = &this->PathDataPack;
    local_res20 = 0;
    do {
      lVar22 = local_res20;
      piVar27 = &(this->PathDataPack).PathCorridor.ArrayMax;
      uVar20 = (uint)pAVar25;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      uVar13 = 0;
      if ((int)uVar20 < (int)pAVar29->_padding_) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ARecastNavMesh::GetPolyVerts(this_00,*(ulong64 *)(pAVar29->_padding_ + lVar22),&local_b8);
      uVar13 = 0;
      if ((int)uVar20 < (int)pAVar29->_padding_) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = ARecastNavMesh::GetPolyAreaID(this_00,*(ulong64 *)(pAVar29->_padding_ + lVar22));
      if ((uVar13 != (uVar13 & 0xff)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar14 = ARecastNavMesh::GetAreaIDColor(this_00,(uchar)local_res10);
      pTVar6 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (pFVar2->PathCorridor).AllocatorInstance.Data;
      local_a8 = *(undefined4 *)CONCAT44(extraout_var,FVar14.field0_0x0);
      if (((pTVar6 <= &local_b8) &&
          (&local_b8 <
           (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           ((longlong)pTVar6 + (longlong)*piVar27 * 0x18))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = (this->PathDataPack).PathCorridor.ArrayNum;
      if (iVar15 == *piVar27) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar2,piVar27);
      }
      FVar11.Data = local_b8.AllocatorInstance.Data;
      (this->PathDataPack).PathCorridor.ArrayNum = iVar15 + 1;
      pFVar3 = (pFVar2->PathCorridor).AllocatorInstance.Data + (longlong)iVar15 * 0x18;
      *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
      lVar22 = (longlong)local_b8.ArrayNum;
      *(int *)&pFVar3[8].field_0x0 = local_b8.ArrayNum;
      if (local_b8.ArrayNum == 0) {
        *(int *)(pFVar3 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_b8.ArrayNum,0,(ForAnyElementType *)pFVar3,local_b8.ArrayNum,
                   (int *)(pFVar3 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar11.Data,lVar22 * 0x18);
      }
      *(undefined4 *)&pFVar3[0x10].field_0x0 = local_a8;
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      local_res20 = local_res20 + 8;
      pAVar25 = (ARecastNavMesh *)(ulonglong)(uVar20 + 1);
      this_01 = local_70;
    } while ((int)(uVar20 + 1) < (int)pAVar29->_padding_);
  }
  uVar23 = 0;
  if (0 < (int)this_01->_padding_) {
    pTVar6 = &(this->PathDataPack).PathPoints;
    uVar28 = uVar23;
    do {
      uVar20 = (uint)uVar23;
      uVar13 = 0;
      if ((int)uVar20 < (int)this_01->_padding_) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar3 = (pTVar6->AllocatorInstance).Data;
      pFVar26 = (((TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)&this_01->_padding_)->
                AllocatorInstance).Data + uVar28;
      if (((pFVar3 <= pFVar26) &&
          (pFVar26 < pFVar3 + (longlong)(this->PathDataPack).PathPoints.ArrayMax * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = (this->PathDataPack).PathPoints.ArrayNum;
      if (iVar15 == (this->PathDataPack).PathPoints.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar6->AllocatorInstance,
                            &(this->PathDataPack).PathPoints.ArrayMax);
      }
      uVar23 = (ulonglong)(uVar20 + 1);
      (this->PathDataPack).PathPoints.ArrayNum = iVar15 + 1;
      uVar28 = uVar28 + 0x30;
      uVar10 = *(undefined8 *)(pFVar26 + 8);
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      pFVar3 = pFVar7 + (longlong)iVar15 * 0x18;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar26;
      *(undefined8 *)(pFVar3 + 8) = uVar10;
      *(undefined8 *)(pFVar7 + (longlong)iVar15 * 0x18 + 0x10) = *(undefined8 *)(pFVar26 + 0x10);
    } while ((int)(uVar20 + 1) < (int)this_01->_padding_);
  }
LAB_146f39fdf:
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  DestructItems<FString,int>(local_c8,(int)local_c0);
  if (local_c8 != (FString *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// CreateDebugSceneProxy @ 146f3bc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
FGameplayDebuggerCategory_AI::CreateDebugSceneProxy
          (FGameplayDebuggerCategory_AI *this,UPrimitiveComponent *param_1,
          FDebugDrawDelegateHelper **param_2)

{
  int *piVar1;
  FString *pFVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  double *pdVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  FDebugDrawDelegateHelper **ppFVar7;
  UPrimitiveComponent *pUVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FDebugRenderSceneProxy *pFVar13;
  FDebugDrawDelegateHelper *pFVar14;
  FDebugDrawDelegateHelper *this_00;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FDebugDrawDelegateHelper *pFVar20;
  FDebugDrawDelegateHelper *pFVar21;
  undefined1 auStackY_2f8 [32];
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0 [2];
  TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> local_298;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> local_288;
  uint local_278;
  TVector<float>_u_0 local_274;
  TVector<float>_u_0 local_268;
  TVector<float>_u_0 local_25c;
  TVector<float>_u_0 local_250;
  TVector<float>_u_0 local_244;
  TVector<float>_u_0 local_238;
  FString local_228;
  FGameplayDebuggerCategory_AI *local_218;
  FDebugDrawDelegateHelper **local_210;
  UPrimitiveComponent *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  FMesh local_1c8;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  <unnamed_type_Vector> local_11c;
  <unnamed_type_Vector> local_118;
  undefined4 uStack_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  <unnamed_type_Vector> local_bc;
  <unnamed_type_Vector> local_b8;
  undefined4 uStack_b4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  <unnamed_type_Vector> local_5c;
  <unnamed_type_Vector> local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  iVar11 = (this->PathDataPack).PathCorridor.ArrayNum;
  this_00 = (FDebugDrawDelegateHelper *)0x0;
  if (iVar11 == 0) {
    *param_2 = (FDebugDrawDelegateHelper *)0x0;
    pFVar13 = (FDebugRenderSceneProxy *)0x0;
  }
  else {
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 0;
    local_288.ArrayMax = 0;
    local_278 = 0;
    pFVar14 = this_00;
    pFVar21 = this_00;
    local_218 = this;
    local_210 = param_2;
    local_208 = param_1;
    if (0 < iVar11) {
      do {
        uVar12 = 0;
        if ((int)(uint)pFVar14 < (this->PathDataPack).PathCorridor.ArrayNum) {
          uVar12 = ~(uint)pFVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
          return pFVar13;
        }
        pFVar4 = (this->PathDataPack).PathCorridor.AllocatorInstance.Data;
        uVar12 = 0;
        if (2 < *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4)) {
          FDebugRenderSceneProxy::FMesh::FMesh(&local_1c8);
          if ((*(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4) < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
            return pFVar13;
          }
          pdVar5 = *(double **)((longlong)&pFVar21->_padding_ + (longlong)pFVar4);
          local_274._0_8_ = 0x3f800000;
          local_274._s_0.Z = 0.0;
          fStack_164 = (float)pdVar5[1];
          fStack_160 = (float)pdVar5[2];
          local_168 = (float)*pdVar5;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)&local_11c._s_0,(TVector<float> *)&local_274._s_0);
          local_268._0_8_ = 0;
          local_268._s_0.Z = 1.0;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)&local_118._s_0,(TVector<float> *)&local_268._s_0);
          uStack_15c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
          uStack_158 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
          uStack_114 = 0xffffffff;
          local_118._s_0.W = 0x7f;
          uStack_154 = uStack_15c;
          uStack_150 = uStack_158;
          uStack_14c = uStack_15c;
          uStack_148 = uStack_158;
          uStack_144 = uStack_15c;
          uStack_140 = uStack_158;
          local_13c = uStack_15c;
          uStack_138 = uStack_158;
          uStack_134 = uStack_15c;
          uStack_130 = uStack_158;
          uStack_12c = uStack_15c;
          uStack_128 = uStack_158;
          uStack_124 = uStack_15c;
          uStack_120 = uStack_158;
          if (((local_1c8.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_168)
              && ((FScriptContainerElement *)&local_168 <
                  local_1c8.Vertices.AllocatorInstance.Data +
                  (longlong)local_1c8.Vertices.ArrayMax * 0x58)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
            return pFVar13;
          }
          if (local_1c8.Vertices.ArrayNum == local_1c8.Vertices.ArrayMax) {
            local_1c8.Vertices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x458,(ForAnyElementType *)&local_1c8,&local_1c8.Vertices.ArrayMax);
          }
          iVar11 = local_1c8.Vertices.ArrayNum + 1;
          uVar19 = 2;
          lVar15 = (longlong)local_1c8.Vertices.ArrayNum * 0x58;
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15) =
               CONCAT44(fStack_164,local_168);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 8) =
               CONCAT44(uStack_15c,fStack_160);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x10) =
               CONCAT44(uStack_154,uStack_158);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x10 + 8) =
               CONCAT44(uStack_14c,uStack_150);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x20) =
               CONCAT44(uStack_144,uStack_148);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x20 + 8) =
               CONCAT44(local_13c,uStack_140);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x30) =
               CONCAT44(uStack_134,uStack_138);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x30 + 8) =
               CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x40) =
               CONCAT44(uStack_124,uStack_128);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x40 + 8) =
               CONCAT44(local_11c.Packed,uStack_120);
          *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar15 + 0x50) =
               CONCAT44(uStack_114,local_118.Packed);
          iVar17 = *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4);
          local_1c8.Color.field0_0x0 =
               *(FColor_u_0 *)(&(pFVar21->DebugTextDrawingDelegate).field_0x8 + (longlong)pFVar4);
          local_1c8.Vertices.ArrayNum = iVar11;
          if (2 < iVar17) {
            lVar15 = 0x30;
            do {
              uVar10 = uVar12;
              if ((int)(uVar19 - 1) < iVar17) {
                uVar10 = -uVar19 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              lVar16 = *(longlong *)((longlong)&pFVar21->_padding_ + (longlong)pFVar4);
              local_25c._0_8_ = 0x3f800000;
              local_25c._s_0.Z = 0.0;
              fStack_104 = (float)*(double *)(lVar15 + -0x10 + lVar16);
              fStack_100 = (float)*(double *)(lVar15 + -8 + lVar16);
              local_108 = (float)*(double *)(lVar15 + -0x18 + lVar16);
              FPackedNormal::FPackedNormal
                        ((FPackedNormal *)&local_bc._s_0,(TVector<float> *)&local_25c._s_0);
              local_250._0_8_ = 0;
              local_250._s_0.Z = 1.0;
              FPackedNormal::FPackedNormal
                        ((FPackedNormal *)&local_b8._s_0,(TVector<float> *)&local_250._s_0);
              uStack_fc = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              uStack_f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              uStack_b4 = 0xffffffff;
              local_b8._s_0.W = 0x7f;
              uStack_f4 = uStack_fc;
              uStack_f0 = uStack_f8;
              uStack_ec = uStack_fc;
              uStack_e8 = uStack_f8;
              uStack_e4 = uStack_fc;
              uStack_e0 = uStack_f8;
              local_dc = uStack_fc;
              uStack_d8 = uStack_f8;
              uStack_d4 = uStack_fc;
              uStack_d0 = uStack_f8;
              uStack_cc = uStack_fc;
              uStack_c8 = uStack_f8;
              uStack_c4 = uStack_fc;
              uStack_c0 = uStack_f8;
              if (((local_1c8.Vertices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_108) &&
                  ((FScriptContainerElement *)&local_108 <
                   local_1c8.Vertices.AllocatorInstance.Data +
                   (longlong)local_1c8.Vertices.ArrayMax * 0x58)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              if (local_1c8.Vertices.ArrayNum == local_1c8.Vertices.ArrayMax) {
                local_1c8.Vertices.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x458,(ForAnyElementType *)&local_1c8,&local_1c8.Vertices.ArrayMax);
              }
              iVar11 = local_1c8.Vertices.ArrayNum + 1;
              lVar16 = (longlong)local_1c8.Vertices.ArrayNum * 0x58;
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16) =
                   CONCAT44(fStack_104,local_108);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 8) =
                   CONCAT44(uStack_fc,fStack_100);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x10) =
                   CONCAT44(uStack_f4,uStack_f8);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x10 + 8) =
                   CONCAT44(uStack_ec,uStack_f0);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x20) =
                   CONCAT44(uStack_e4,uStack_e8);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x20 + 8) =
                   CONCAT44(local_dc,uStack_e0);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x30) =
                   CONCAT44(uStack_d4,uStack_d8);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x30 + 8) =
                   CONCAT44(uStack_cc,uStack_d0);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x40) =
                   CONCAT44(uStack_c4,uStack_c8);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x40 + 8) =
                   CONCAT44(local_bc.Packed,uStack_c0);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x50) =
                   CONCAT44(uStack_b4,local_b8.Packed);
              uVar10 = uVar12;
              if ((int)uVar19 <
                  *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4)) {
                uVar10 = ~uVar19 >> 0x1f;
              }
              local_1c8.Vertices.ArrayNum = iVar11;
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              lVar16 = *(longlong *)((longlong)&pFVar21->_padding_ + (longlong)pFVar4);
              local_244._0_8_ = 0x3f800000;
              local_244._s_0.Z = 0.0;
              fStack_a4 = (float)*(double *)(lVar15 + 8 + lVar16);
              fStack_a0 = (float)*(double *)(lVar15 + 0x10 + lVar16);
              local_a8 = (float)*(double *)(lVar15 + lVar16);
              FPackedNormal::FPackedNormal
                        ((FPackedNormal *)&local_5c._s_0,(TVector<float> *)&local_244._s_0);
              local_238._0_8_ = 0;
              local_238._s_0.Z = 1.0;
              FPackedNormal::FPackedNormal
                        ((FPackedNormal *)&local_58._s_0,(TVector<float> *)&local_238._s_0);
              uStack_9c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              uStack_98 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              uStack_54 = 0xffffffff;
              local_58._s_0.W = 0x7f;
              uStack_94 = uStack_9c;
              uStack_90 = uStack_98;
              uStack_8c = uStack_9c;
              uStack_88 = uStack_98;
              uStack_84 = uStack_9c;
              uStack_80 = uStack_98;
              local_7c = uStack_9c;
              uStack_78 = uStack_98;
              uStack_74 = uStack_9c;
              uStack_70 = uStack_98;
              uStack_6c = uStack_9c;
              uStack_68 = uStack_98;
              uStack_64 = uStack_9c;
              uStack_60 = uStack_98;
              if (((local_1c8.Vertices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_a8) &&
                  ((FScriptContainerElement *)&local_a8 <
                   local_1c8.Vertices.AllocatorInstance.Data +
                   (longlong)local_1c8.Vertices.ArrayMax * 0x58)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              if (local_1c8.Vertices.ArrayNum == local_1c8.Vertices.ArrayMax) {
                local_1c8.Vertices.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x458,(ForAnyElementType *)&local_1c8,&local_1c8.Vertices.ArrayMax);
              }
              iVar11 = local_1c8.Vertices.ArrayNum + 1;
              lVar16 = (longlong)local_1c8.Vertices.ArrayNum * 0x58;
              local_2a8 = 0;
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16) =
                   CONCAT44(fStack_a4,local_a8);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 8) =
                   CONCAT44(uStack_9c,fStack_a0);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x10) =
                   CONCAT44(uStack_94,uStack_98);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x10 + 8) =
                   CONCAT44(uStack_8c,uStack_90);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x20) =
                   CONCAT44(uStack_84,uStack_88);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x20 + 8) =
                   CONCAT44(local_7c,uStack_80);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x30) =
                   CONCAT44(uStack_74,uStack_78);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x30 + 8) =
                   CONCAT44(uStack_6c,uStack_70);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x40) =
                   CONCAT44(uStack_64,uStack_68);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x40 + 8) =
                   CONCAT44(local_5c.Packed,uStack_60);
              *(ulonglong *)(local_1c8.Vertices.AllocatorInstance.Data + lVar16 + 0x50) =
                   CONCAT44(uStack_54,local_58.Packed);
              local_1c8.Vertices.ArrayNum = iVar11;
              if (((local_1c8.Indices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_2a8) &&
                  ((FScriptContainerElement *)&local_2a8 <
                   local_1c8.Indices.AllocatorInstance.Data +
                   (longlong)local_1c8.Indices.ArrayMax * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              if (local_1c8.Indices.ArrayNum == local_1c8.Indices.ArrayMax) {
                local_1c8.Indices.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c8.Indices.AllocatorInstance,
                                &local_1c8.Indices.ArrayMax);
              }
              iVar11 = local_1c8.Indices.ArrayNum + 1;
              *(undefined4 *)
               (local_1c8.Indices.AllocatorInstance.Data + (longlong)local_1c8.Indices.ArrayNum * 4)
                   = local_2a8;
              local_2a4 = local_1c8.Vertices.ArrayNum + -2;
              local_1c8.Indices.ArrayNum = iVar11;
              if (((local_1c8.Indices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_2a4) &&
                  ((FScriptContainerElement *)&local_2a4 <
                   local_1c8.Indices.AllocatorInstance.Data +
                   (longlong)local_1c8.Indices.ArrayMax * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              if (local_1c8.Indices.ArrayNum == local_1c8.Indices.ArrayMax) {
                local_1c8.Indices.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c8.Indices.AllocatorInstance,
                                &local_1c8.Indices.ArrayMax);
              }
              iVar11 = local_1c8.Indices.ArrayNum + 1;
              *(int *)(local_1c8.Indices.AllocatorInstance.Data +
                      (longlong)local_1c8.Indices.ArrayNum * 4) = local_2a4;
              local_2a0[0] = local_1c8.Vertices.ArrayNum + -1;
              local_1c8.Indices.ArrayNum = iVar11;
              if (((local_1c8.Indices.AllocatorInstance.Data <= (FScriptContainerElement *)local_2a0
                   ) && ((FScriptContainerElement *)local_2a0 <
                         local_1c8.Indices.AllocatorInstance.Data +
                         (longlong)local_1c8.Indices.ArrayMax * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
                return pFVar13;
              }
              if (local_1c8.Indices.ArrayNum == local_1c8.Indices.ArrayMax) {
                local_1c8.Indices.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c8.Indices.AllocatorInstance,
                                &local_1c8.Indices.ArrayMax);
              }
              iVar11 = local_1c8.Indices.ArrayNum + 1;
              uVar19 = uVar19 + 1;
              lVar15 = lVar15 + 0x18;
              *(int *)(local_1c8.Indices.AllocatorInstance.Data +
                      (longlong)local_1c8.Indices.ArrayNum * 4) = local_2a0[0];
              iVar17 = *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4);
              local_1c8.Indices.ArrayNum = iVar11;
            } while ((int)uVar19 < iVar17);
          }
          if (((local_298.AllocatorInstance.Data <= &local_1c8) &&
              (&local_1c8 <
               (FMesh *)(local_298.AllocatorInstance.Data + (longlong)local_298.ArrayMax * 0x60)))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
            return pFVar13;
          }
          iVar11 = local_298.ArrayNum;
          if (local_298.ArrayNum == local_298.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,&local_298.AllocatorInstance,&local_298.ArrayMax);
          }
          local_298.ArrayNum = iVar11 + 1;
          FDebugRenderSceneProxy::FMesh::FMesh
                    ((FMesh *)(local_298.AllocatorInstance.Data + (longlong)iVar11 * 0x60),
                     &local_1c8);
          FDebugRenderSceneProxy::FMesh::~FMesh(&local_1c8);
        }
        iVar11 = *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4);
        pFVar14 = this_00;
        pFVar20 = this_00;
        if (0 < iVar11) {
          do {
            uVar19 = (uint)pFVar14;
            uVar18 = (int)(uVar19 + 1) % iVar11;
            uVar10 = uVar12;
            if ((int)uVar18 < iVar11) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
              return pFVar13;
            }
            lVar15 = *(longlong *)((longlong)&pFVar21->_padding_ + (longlong)pFVar4);
            uVar10 = uVar12;
            if ((int)uVar19 <
                *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4)) {
              uVar10 = ~uVar19 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
              return pFVar13;
            }
            lVar16 = *(longlong *)((longlong)&pFVar21->_padding_ + (longlong)pFVar4);
            puVar3 = (undefined8 *)((longlong)&pFVar20->_padding_ + lVar16);
            local_200 = *puVar3;
            uStack_1f8 = puVar3[1];
            local_1f0 = *(undefined8 *)(&(pFVar20->DebugTextDrawingDelegate).field_0x8 + lVar16);
            local_1d0 = *(undefined4 *)
                         (&(pFVar21->DebugTextDrawingDelegate).field_0x8 + (longlong)pFVar4);
            puVar3 = (undefined8 *)(lVar15 + (longlong)(int)uVar18 * 0x18);
            uStack_1e8 = *puVar3;
            uStack_1e0 = puVar3[1];
            uStack_1d8 = *(undefined8 *)(lVar15 + 0x10 + (longlong)(int)uVar18 * 0x18);
            uStack_1cc = 0x40000000;
            if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_200) &&
                ((FScriptContainerElement *)&local_200 <
                 local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x38)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FDebugRenderSceneProxy *)(*pcVar6)();
              return pFVar13;
            }
            if (local_288.ArrayNum == local_288.ArrayMax) {
              local_288.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&local_288.AllocatorInstance,&local_288.ArrayMax);
            }
            lVar15 = (longlong)local_288.ArrayNum;
            local_288.ArrayNum = local_288.ArrayNum + 1;
            lVar15 = lVar15 * 0x38;
            *(undefined8 *)(local_288.AllocatorInstance.Data + lVar15) = local_200;
            *(undefined8 *)(local_288.AllocatorInstance.Data + lVar15 + 8) = uStack_1f8;
            *(undefined8 *)(local_288.AllocatorInstance.Data + lVar15 + 0x10) = local_1f0;
            *(undefined8 *)(local_288.AllocatorInstance.Data + lVar15 + 0x10 + 8) = uStack_1e8;
            *(undefined8 *)(local_288.AllocatorInstance.Data + lVar15 + 0x20) = uStack_1e0;
            *(undefined8 *)(local_288.AllocatorInstance.Data + lVar15 + 0x20 + 8) = uStack_1d8;
            *(ulonglong *)(local_288.AllocatorInstance.Data + lVar15 + 0x30) =
                 CONCAT44(uStack_1cc,local_1d0);
            iVar11 = *(int *)(&(pFVar21->DebugTextDrawingDelegate).field_0x0 + (longlong)pFVar4);
            this = local_218;
            pFVar14 = (FDebugDrawDelegateHelper *)(ulonglong)(uVar19 + 1);
            pFVar20 = (FDebugDrawDelegateHelper *)&(pFVar20->DebugTextDrawingDelegate).field_0x10;
          } while ((int)(uVar19 + 1) < iVar11);
        }
        local_278 = local_278 + 1;
        pFVar14 = (FDebugDrawDelegateHelper *)(ulonglong)local_278;
        pFVar21 = (FDebugDrawDelegateHelper *)&(pFVar21->DebugTextDrawingDelegate).field_0x10;
      } while ((int)local_278 < (this->PathDataPack).PathCorridor.ArrayNum);
    }
    pUVar8 = local_208;
    ppFVar7 = local_210;
    FGameplayDebuggerCategory::GetSceneProxyViewFlag((FGameplayDebuggerCategory *)this,&local_228);
    pFVar13 = ::operator_new(0x3a0);
    if (pFVar13 == (FDebugRenderSceneProxy *)0x0) {
      pFVar13 = (FDebugRenderSceneProxy *)0x0;
    }
    else {
      FDebugRenderSceneProxy::FDebugRenderSceneProxy(pFVar13,pUVar8);
      _Src.Data = local_228.Data.AllocatorInstance.Data;
      pFVar13->DrawType = SolidAndWireMeshes;
      pFVar13->_padding_ =
           (longlong)
           &`FGameplayDebuggerCategory_AI::CreateDebugSceneProxy'::`2'::FPathDebugRenderSceneProxy::
            _vftable_;
      pFVar2 = &pFVar13->ViewFlagName;
      pFVar13->DrawAlpha = 0x5a;
      if (pFVar2 != &local_228) {
        piVar1 = &(pFVar13->ViewFlagName).Data.ArrayMax;
        iVar11 = *piVar1;
        (pFVar13->ViewFlagName).Data.ArrayNum = local_228.Data.ArrayNum;
        if ((local_228.Data.ArrayNum == 0) && (iVar11 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_228.Data.ArrayNum,iVar11,(ForAnyElementType *)pFVar2,
                     local_228.Data.ArrayNum,piVar1);
          if (local_228.Data.ArrayNum != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,_Src.Data,
                   (longlong)local_228.Data.ArrayNum * 2);
          }
        }
      }
      if ((pFVar13->ViewFlagName).Data.ArrayNum == 0) {
        uVar12 = FEngineShowFlags::FindIndexByName(L"",(wchar_t *)0x0);
        pFVar13->ViewFlagIndex = uVar12;
      }
      else {
        uVar12 = FEngineShowFlags::FindIndexByName
                           ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,(wchar_t *)0x0);
        pFVar13->ViewFlagIndex = uVar12;
      }
    }
    TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar13->Lines,&local_288);
    TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar13->Meshes,&local_298);
    pFVar14 = ::operator_new(0x68);
    if (pFVar14 != (FDebugDrawDelegateHelper *)0x0) {
      this_00 = FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(pFVar14);
    }
    FDebugDrawDelegateHelper::InitDelegateHelper(this_00,pFVar13);
    *ppFVar7 = this_00;
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    DestructItems<FDebugRenderSceneProxy::FMesh,int>
              ((FMesh *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
    if ((FMesh *)local_298.AllocatorInstance.Data != (FMesh *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
  }
  return pFVar13;
}

// DrawData @ 146f41b20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::DrawData
          (FGameplayDebuggerCategory_AI *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  uint *puVar1;
  int iVar2;
  APawn *pAVar3;
  USceneComponent *pUVar4;
  longlong *plVar5;
  double dVar6;
  longlong lVar7;
  float fVar8;
  bool bVar9;
  UWorld *pUVar10;
  AActor *pAVar11;
  UClass *pUVar12;
  FString *pFVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  FName local_res8;
  float local_res20 [2];
  FString local_118;
  FString local_108;
  TVector2<double>_u_0 local_f8;
  double local_e8;
  TVector<double>_u_0 local_e0;
  FString local_c8;
  FGameplayDebuggerCanvasContext local_b8;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar10 = FGameplayDebuggerCanvasContext::GetWorld(param_2);
  pAVar11 = FGameplayDebuggerAddonBase::FindLocalDebugActor((FGameplayDebuggerAddonBase *)this);
  bVar9 = FGameplayDebuggerAddonBase::IsSimulateInEditor();
  if ((!bVar9) || (uVar14 = 0, (this->DataPack).bHasController != 0)) {
    uVar14 = 4;
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffb;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | uVar14;
  if ((FGameplayDebuggerCategoryTweakables::bDrawOverheadIcons != 0) &&
     (param_1 != (APlayerController *)0x0)) {
    pAVar3 = (APawn *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    DrawPawnIcons(this,pUVar10,pAVar11,pAVar3,param_2);
  }
  if (pAVar11 != (AActor *)0x0) {
    pUVar4 = (pAVar11->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 == (USceneComponent *)0x0) {
      uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar17 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uVar16 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.ZW.m128d_f64;
      uVar17 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.ZW.m128d_f64 + 4);
      uVar18 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
      uVar19 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar20 = *(undefined4 *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar21 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    }
    local_e8 = (double)CONCAT44(uVar17,uVar16);
    (**(code **)(pAVar11->_padding_ + 0x688))(pAVar11,local_res20,&local_res8);
    local_e0._s_0.X = (double)CONCAT44(uVar19,uVar18);
    local_e0._s_0.Z = (double)(float)local_res8.ComparisonIndex.Value + local_e8;
    local_e0._s_0.Y = (double)CONCAT44(uVar21,uVar20);
    bVar9 = FGameplayDebuggerCanvasContext::IsLocationVisible
                      (param_2,(TVector<double> *)&local_e0._s_0);
    if (bVar9) {
      local_b8.Canvas.WeakPtr = (param_2->Canvas).WeakPtr;
      local_b8.Font.WeakPtr = (param_2->Font).WeakPtr;
      local_b8.PlayerController.WeakPtr = (param_2->PlayerController).WeakPtr;
      local_b8.World.WeakPtr = (param_2->World).WeakPtr;
      local_b8.FontRenderInfo._0_8_ = *(undefined8 *)&param_2->FontRenderInfo;
      local_b8.FontRenderInfo.GlowInfo._0_8_ = *(undefined8 *)&(param_2->FontRenderInfo).GlowInfo;
      local_b8.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._4_8_ =
           *(undefined8 *)((longlong)&(param_2->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 + 4);
      local_b8.FontRenderInfo.GlowInfo._16_8_ =
           *(undefined8 *)((longlong)&(param_2->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 + 0xc)
      ;
      local_b8.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X =
           (param_2->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.X;
      local_b8.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y =
           (param_2->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y;
      local_b8.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X =
           (param_2->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.X;
      local_b8.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y =
           (param_2->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y;
      local_b8.CursorX = param_2->CursorX;
      local_b8.CursorY = param_2->CursorY;
      local_b8.DefaultX = param_2->DefaultX;
      local_b8.DefaultY = param_2->DefaultY;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)UEngine::GetSmallFont();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UFont *)local_108.Data.AllocatorInstance.Data != (UFont *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_108.Data.AllocatorInstance.Data);
      }
      FWeakObjectPtr::operator=(&local_b8.Font.WeakPtr,(FObjectPtr)&local_108);
      local_b8.FontRenderInfo.bEnableShadow = 1;
      FGameplayDebuggerCanvasContext::ProjectLocation
                (&local_b8,(TVector2<double> *)&local_f8._s_0,(TVector<double> *)&local_e0._s_0);
      ::FString::PrintfImpl(&local_118,L"{yellow}%s {white}%s");
      local_res20[0] = 0.0;
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
      FGameplayDebuggerCanvasContext::MeasureString
                (&local_b8,&local_118,local_res20,(float *)&local_res8);
      FGameplayDebuggerCanvasContext::PrintAt
                (&local_b8,(float)(local_f8._s_0.X - (double)(local_res20[0] * __real_3f000000)),
                 (float)((double)CONCAT44(local_f8._12_4_,local_f8._8_4_) -
                        (double)((float)local_res8.ComparisonIndex.Value * __real_3f99999a)),
                 &local_118);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((FGameplayDebuggerCategoryTweakables::bDrawPaths != false) &&
     ((this->DataPack).bIsUsingPathFollowing != 0)) {
    DrawPath(this,pUVar10);
  }
  fVar8 = __real_3f800000;
  if ((this->DataPack).bHasController != 0) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,__real_3f800000,L"Controller Name: {yellow}%s");
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar8,L"Pawn Name: {yellow}%s");
  }
  if ((this->DataPack).bIsUsingCharacter != 0) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar8,L"%sMovement Mode: {yellow}%s{white}, Base: {yellow}%s")
    ;
    uVar14 = *(uint *)((longlong)&this->_padding_ + 4);
    if ((((uVar14 >> 5 & 1) != 0) && ((uVar14 >> 6 & 1) == 0)) && (pAVar11 != (AActor *)0x0)) {
      pUVar12 = Z_Construct_UClass_ACharacter_NoRegister();
      iVar2 = (int)pUVar12->_padding_;
      if (((iVar2 <= *(int *)(pAVar11->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar12->_padding_)) &&
         (plVar5 = *(longlong **)&pAVar11[1].AttachmentReplication.LocationOffset.field_0x10,
         plVar5 != (longlong *)0x0)) {
        dVar6 = pAVar11[1].AttachmentReplication.RotationOffset.Pitch;
        if (dVar6 == 0.0) {
          pFVar13 = ::FString::FString((FString *)&local_e0._s_0,L"None");
          FVar15.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_e0._s_0.X;
        }
        else {
          lVar7 = *(longlong *)((longlong)dVar6 + 0xa8);
          local_res8 = *(FName *)((longlong)dVar6 + 0x18);
          ::FName::ToString(&local_res8,&local_c8);
          if (lVar7 == 0) {
            ::FString::FString(&local_118,L"None");
          }
          else {
            local_res8 = *(FName *)(lVar7 + 0x18);
            ::FName::ToString(&local_res8,&local_118);
          }
          ::FString::PrintfImpl(&local_108,L"%s.%s");
          FVar15.Data = local_108.Data.AllocatorInstance.Data;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*plVar5 + 0x8d0))(plVar5,&local_f8);
        FGameplayDebuggerCanvasContext::PrintfImpl
                  (param_2,&FColor::White,fVar8,
                   L"(Client) Movement Mode: {yellow}%s{white}, Base: {yellow}%s");
        if ((void *)local_f8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_f8._s_0.X);
        }
        if ((UFont *)FVar15.Data != (UFont *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar8,
               L"NavData: {yellow}%s{white}, Path following: {yellow}%s");
  }
  if ((this->DataPack).bIsUsingBehaviorTree != 0) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar8,L"Behavior: {yellow}%s{white}, Tree: {yellow}%s");
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar8,L"Active task: {yellow}%s");
  }
  if ((this->DataPack).bIsUsingGameplayTasks != 0) {
    if (0 < (this->DataPack).NumTickingTasks) {
      FGameplayDebuggerCanvasContext::PrintfImpl
                (param_2,&FColor::White,fVar8,L"Ticking tasks: {yellow}%d%s");
    }
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar8,L"Gameplay tasks: {yellow}%d%s");
  }
  if ((this->DataPack).bIsUsingCharacter != 0) {
    FGameplayDebuggerCanvasContext::PrintfImpl(param_2,&FColor::White,fVar8,L"Montage: {yellow}%s");
  }
  return;
}

// DrawOverheadInfo @ 146f44ce0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::DrawOverheadInfo
          (FGameplayDebuggerCategory_AI *this,AActor *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  USceneComponent *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_res10 [2];
  float local_res20 [2];
  UFont *local_d8;
  FString local_d0;
  TVector2<double>_u_0 local_c0;
  double local_b0;
  TVector<double>_u_0 local_a8;
  FGameplayDebuggerCanvasContext local_88;
  
  pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    uVar3 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar4 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    uVar3 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.ZW.m128d_f64;
    uVar4 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.ZW.m128d_f64 + 4);
    uVar5 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
    uVar6 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uVar7 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uVar8 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
  }
  local_b0 = (double)CONCAT44(uVar4,uVar3);
  (**(code **)(param_1->_padding_ + 0x688))(param_1,local_res20,local_res10);
  local_a8._s_0.X = (double)CONCAT44(uVar6,uVar5);
  local_a8._s_0.Z = (double)local_res10[0] + local_b0;
  local_a8._s_0.Y = (double)CONCAT44(uVar8,uVar7);
  bVar2 = FGameplayDebuggerCanvasContext::IsLocationVisible
                    (param_2,(TVector<double> *)&local_a8._s_0);
  if (bVar2) {
    local_88.Canvas.WeakPtr = (param_2->Canvas).WeakPtr;
    local_88.Font.WeakPtr = (param_2->Font).WeakPtr;
    local_88.PlayerController.WeakPtr = (param_2->PlayerController).WeakPtr;
    local_88.World.WeakPtr = (param_2->World).WeakPtr;
    local_88.FontRenderInfo._0_8_ = *(undefined8 *)&param_2->FontRenderInfo;
    local_88.FontRenderInfo.GlowInfo._0_8_ = *(undefined8 *)&(param_2->FontRenderInfo).GlowInfo;
    local_88.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._4_8_ =
         *(undefined8 *)((longlong)&(param_2->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 + 4);
    local_88.FontRenderInfo.GlowInfo._16_8_ =
         *(undefined8 *)((longlong)&(param_2->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 + 0xc);
    local_88.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X =
         (param_2->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.X;
    local_88.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y =
         (param_2->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y;
    local_88.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X =
         (param_2->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.X;
    local_88.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y =
         (param_2->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y;
    local_88.CursorX = param_2->CursorX;
    local_88.CursorY = param_2->CursorY;
    local_88.DefaultX = param_2->DefaultX;
    local_88.DefaultY = param_2->DefaultY;
    local_d8 = UEngine::GetSmallFont();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UFont *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_d8);
    }
    FWeakObjectPtr::operator=(&local_88.Font.WeakPtr,(FObjectPtr)&local_d8);
    local_88.FontRenderInfo.bEnableShadow = 1;
    FGameplayDebuggerCanvasContext::ProjectLocation
              (&local_88,(TVector2<double> *)&local_c0._s_0,(TVector<double> *)&local_a8._s_0);
    ::FString::PrintfImpl(&local_d0,L"{yellow}%s {white}%s");
    local_res20[0] = 0.0;
    local_res10[0] = 0.0;
    FGameplayDebuggerCanvasContext::MeasureString(&local_88,&local_d0,local_res20,local_res10);
    FGameplayDebuggerCanvasContext::PrintAt
              (&local_88,(float)(local_c0._s_0.X - (double)(local_res20[0] * __real_3f000000)),
               (float)(local_c0._s_0.Y - (double)(local_res10[0] * __real_3f99999a)),&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawPath @ 146f44ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::DrawPath(FGameplayDebuggerCategory_AI *this,UWorld *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  FColor *pFVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68 [2];
  
  fVar5 = __real_bf800000;
  pTVar1 = &(this->PathDataPack).PathPoints;
  uVar8 = 0;
  piVar13 = &(this->PathDataPack).PathPoints.ArrayNum;
  iVar2 = *piVar13;
  lVar7 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar9 = 0;
    lVar12 = lVar7;
    do {
      uVar11 = 0;
      if ((int)uVar8 < *piVar13) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pFVar10 = &PathColor;
      local_c8._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z + *(double *)(pFVar3 + lVar9 + 0x10)
      ;
      local_c8._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y + *(double *)(pFVar3 + lVar9 + 8);
      local_c8._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(pFVar3 + lVar9);
      if ((int)uVar8 < (this->DataPack).NextPathPointIndex) {
        pFVar10 = &InactiveColor;
      }
      DrawDebugSolidBox(param_1,(TVector<double> *)&local_c8._s_0,
                        &NavigationDebugDrawing::PathNodeBoxExtent,pFVar10,false,fVar5,'\0');
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  piVar13 = &(this->PathDataPack).PathPoints.ArrayNum;
  uVar8 = 1;
  if (1 < lVar7) {
    lVar12 = 0x18;
    lVar7 = lVar7 + -1;
    do {
      uVar11 = 0;
      if ((int)(uVar8 - 1) < *piVar13) {
        uVar11 = -uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      local_98._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z + *(double *)(pFVar3 + lVar12 + -8);
      local_98._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
           *(double *)(pFVar3 + lVar12 + -0x10);
      local_98._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X +
           *(double *)(pFVar3 + lVar12 + -0x18);
      uVar11 = 0;
      if ((int)uVar8 < *piVar13) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pFVar10 = &PathColor;
      local_b0._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
           *(double *)(pFVar3 + lVar12 + 0x10);
      local_b0._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y + *(double *)(pFVar3 + lVar12 + 8);
      local_b0._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(pFVar3 + lVar12);
      if ((int)uVar8 < (this->DataPack).NextPathPointIndex) {
        pFVar10 = &InactiveColor;
      }
      DrawDebugLine(param_1,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b0._s_0,
                    pFVar10,false,fVar5,'\0',NavigationDebugDrawing::PathLineThickness);
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((iVar2 != 0) && ((this->DataPack).bPathHasGoalActor != 0)) {
    iVar2 = (this->PathDataPack).PathPoints.ArrayNum;
    uVar11 = iVar2 - 1;
    uVar8 = 0;
    if ((int)uVar11 < iVar2) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = (longlong)(this->PathDataPack).PathPoints.ArrayNum;
    local_80._s_0.X =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X +
         (this->DataPack).PathGoalLocation.field0_0x0._s_0.X;
    pFVar3 = (this->PathDataPack).PathPoints.AllocatorInstance.Data;
    local_80._s_0.Y =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
         (this->DataPack).PathGoalLocation.field0_0x0._s_0.Y;
    local_80._s_0.Z =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
         (this->DataPack).PathGoalLocation.field0_0x0._s_0.Z;
    local_68[0]._0_8_ =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X +
         *(double *)(pFVar3 + lVar7 * 0x18 + -0x18);
    local_68[0]._16_8_ =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
         *(double *)(pFVar3 + lVar7 * 0x18 + -8);
    local_68[0]._8_8_ =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
         *(double *)(pFVar3 + lVar7 * 0x18 + -0x10);
    DrawDebugLine(param_1,(TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_80._s_0,
                  &PathGoalColor,false,fVar5,'\0',NavigationDebugDrawing::PathLineThickness);
  }
  return;
}

// DrawPawnIcons @ 146f45330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::DrawPawnIcons
          (FGameplayDebuggerCategory_AI *this,UWorld *param_1,AActor *param_2,APawn *param_3,
          FGameplayDebuggerCanvasContext *param_4)

{
  AController *pAVar1;
  FScriptContainerElement *_Str;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  ForAnyElementType _Src;
  bool bVar7;
  UClass *pUVar8;
  AActor *pAVar9;
  APawn *pAVar10;
  ForAnyElementType *pFVar11;
  size_t sVar12;
  UTexture *pUVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float local_res10 [4];
  APawn *local_res20;
  ForAnyElementType local_1e8;
  int local_1e0;
  int iStack_1dc;
  undefined1 local_1d8 [8];
  UClass *local_1d0;
  wchar_t *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  TVector<double>_u_0 local_1a8;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TVector2<double>_u_0 local_178;
  TObjectPtr<UTexture>_u_0 local_168 [4];
  TActorIteratorBase<TActorIterator<APawn>_> local_148;
  void *local_e8 [2];
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8 [2];
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_7c;
  
  bVar4 = false;
  bVar3 = false;
  local_res10[0] = 0.0;
  local_res20 = param_3;
  ::FString::FString(&local_1b8,L"/Engine/EngineResources/AICON-Green.AICON-Green");
  pUVar8 = Z_Construct_UClass_APawn_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar8 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
      }
    }
  }
  local_148.Flags = OnlyActiveLevels|SkipPendingKill;
  local_148.State.bIsSet = false;
  local_1d0 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FActorIteratorState::FActorIteratorState
            (&local_148.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_1d0);
  local_148.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_148);
  fVar6 = __real_42000000;
  fVar5 = __real_41800000;
  do {
    if ((local_148.State.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_148.State.TypedValue.ReachedEnd != false) {
      if (local_148.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_148.State.TypedValue.CurrentWorld,
                   local_148.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_148.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      return;
    }
    if ((local_148.State.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar9 = FActorIteratorState::GetActorChecked(&local_148.State.TypedValue);
    pAVar10 = CastChecked<APawn,AActor>(pAVar9);
    if (param_3 != pAVar10) {
      lVar14 = pAVar10->_padding_;
      if (lVar14 == 0) {
        uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar18 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        local_a0 = *(undefined4 *)(lVar14 + 0x210);
        uStack_9c = *(undefined4 *)(lVar14 + 0x214);
        uStack_98 = *(undefined4 *)(lVar14 + 0x218);
        uStack_94 = *(undefined4 *)(lVar14 + 0x21c);
        local_90 = *(undefined8 *)(lVar14 + 0x220);
        uVar16 = (undefined4)local_90;
        uVar18 = (undefined4)((ulonglong)local_90 >> 0x20);
        uVar19 = local_a0;
        uVar21 = uStack_9c;
        uVar22 = uStack_98;
        uVar23 = uStack_94;
      }
      local_a8 = (double)CONCAT44(uVar18,uVar16);
      (**(code **)(pAVar10->_padding_ + 0x688))(pAVar10,local_1d8,local_res10);
      pAVar1 = (pAVar10->Controller).field0_0x0.DebugPtr;
      local_1a8._s_0.X = (double)CONCAT44(uVar21,uVar19);
      local_1a8._s_0.Y = (double)CONCAT44(uVar23,uVar22);
      local_1a8._s_0.Z = (double)local_res10[0] + local_a8;
      if (pAVar1 == (AController *)0x0) {
LAB_146f455be:
        _Src.Data = local_1b8.Data.AllocatorInstance.Data;
        lVar14 = (longlong)local_1b8.Data.ArrayNum;
        bVar3 = true;
        local_1e8.Data = (FScriptContainerElement *)0x0;
        local_1e0 = local_1b8.Data.ArrayNum;
        if (local_1b8.Data.ArrayNum != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1b8.Data.ArrayNum,0,&local_1e8,local_1b8.Data.ArrayNum,&iStack_1dc);
          memcpy(local_1e8.Data,_Src.Data,lVar14 * 2);
        }
        pFVar11 = &local_1e8;
      }
      else {
        pUVar8 = Z_Construct_UClass_AAIController_NoRegister();
        iVar15 = (int)pUVar8->_padding_;
        if (((*(int *)(pAVar1->_padding_ + 0x38) < iVar15) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pAVar1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
             &pUVar8->_padding_)) || (((uint)pAVar1->_padding_ >> 0x1e & 1) != 0))
        goto LAB_146f455be;
        bVar4 = true;
        pFVar11 = (ForAnyElementType *)(**(code **)(pAVar1->_padding_ + 0x948))(pAVar1,local_e8);
      }
      _Str = pFVar11->Data;
      pFVar11->Data = (FScriptContainerElement *)0x0;
      iVar15 = *(int *)&pFVar11[1].Data;
      pFVar11[1].Data = (FScriptContainerElement *)0x0;
      if ((bVar3) && (bVar3 = false, local_1e8.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1e8.Data);
      }
      if ((bVar4) && (bVar4 = false, local_e8[0] != (void *)0x0)) {
        FMemory::Free(local_e8[0]);
      }
      bVar7 = FGameplayDebuggerCanvasContext::IsLocationVisible
                        (param_4,(TVector<double> *)&local_1a8._s_0);
      if (((bVar7) && (iVar15 != 0)) && (iVar15 != 1)) {
        iVar15 = 0;
        uStack_1bc = local_7c;
        local_1c8 = (wchar_t *)0x0;
        iStack_1c0 = 0;
        local_188 = _Str;
        if (_Str != (FScriptContainerElement *)0x0) {
          sVar12 = wcslen((wchar_t *)_Str);
          iVar15 = (int)sVar12;
        }
        iStack_180 = iVar15;
        pUVar8 = Z_Construct_UClass_UTexture2D_NoRegister();
        local_d8._12_4_ = uStack_1bc;
        local_d8.Size = iStack_1c0;
        local_c8[0]._12_4_ = uStack_17c;
        local_c8[0].Size = iStack_180;
        local_d8.DataPtr = local_1c8;
        local_c8[0].DataPtr = (wchar_t *)local_188;
        pUVar13 = (UTexture *)
                  StaticLoadObject(pUVar8,(UObject *)0x0,local_c8,&local_d8,0x2002,
                                   (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
        UCanvas::MakeIcon((FCanvasIcon *)&local_168[0].ObjectPtr,pUVar13,0.0,0.0,0.0,0.0);
        if (local_168[0].DebugPtr != (UTexture *)0x0) {
          FGameplayDebuggerCanvasContext::ProjectLocation
                    (param_4,(TVector2<double> *)&local_178._s_0,(TVector<double> *)&local_1a8._s_0)
          ;
          fVar20 = fVar5;
          if ((APawn *)param_2 == pAVar10) {
            fVar20 = fVar6;
          }
          fVar17 = (float)(**(code **)((local_168[0].DebugPtr)->_padding_ + 0x368))();
          FGameplayDebuggerCanvasContext::DrawIcon
                    (param_4,&FColor::White,(FCanvasIcon *)&local_168[0].ObjectPtr,
                     (float)local_178._s_0.X,(float)(local_178._s_0.Y - (double)fVar20),
                     fVar20 / fVar17);
        }
      }
      param_3 = local_res20;
      if (_Str != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Str);
        param_3 = local_res20;
      }
    }
    TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_148);
  } while( true );
}

// MakeInstance @ 146f5d1e0

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_AI::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGameplayDebuggerCategory_AI *this;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar5;
  TRawPtrProxy<FGameplayDebuggerCategory_AI> local_res8;
  
  this = ::operator_new(0x1a0);
  if (this != (FGameplayDebuggerCategory_AI *)0x0) {
    FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
    *(uint *)((longlong)&this->_padding_ + 4) =
         *(uint *)((longlong)&this->_padding_ + 4) & 0xfffffff7;
    this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_AI__6B_;
    (this->DataPack).bHasController = 0;
    (this->DataPack).bIsUsingGameplayTasks = 0;
    (this->DataPack).bIsUsingBehaviorTree = 0;
    (this->DataPack).bIsUsingCharacter = 0;
    (this->DataPack).bIsUsingPathFollowing = 0;
    (this->DataPack).bPathHasGoalActor = 0;
    (this->DataPack).ControllerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).ControllerName.Data.ArrayNum = 0;
    (this->DataPack).ControllerName.Data.ArrayMax = 0;
    (this->DataPack).PawnName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).PawnName.Data.ArrayNum = 0;
    (this->DataPack).PawnName.Data.ArrayMax = 0;
    (this->DataPack).MovementBaseInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).MovementBaseInfo.Data.ArrayNum = 0;
    (this->DataPack).MovementBaseInfo.Data.ArrayMax = 0;
    (this->DataPack).MovementModeInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).MovementModeInfo.Data.ArrayNum = 0;
    (this->DataPack).MovementModeInfo.Data.ArrayMax = 0;
    (this->DataPack).PathFollowingInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).PathFollowingInfo.Data.ArrayNum = 0;
    (this->DataPack).PathFollowingInfo.Data.ArrayMax = 0;
    (this->DataPack).NextPathPointIndex = 0;
    (this->DataPack).CurrentAITask.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).CurrentAITask.Data.ArrayNum = 0;
    (this->DataPack).CurrentAITask.Data.ArrayMax = 0;
    (this->DataPack).CurrentAIState.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).CurrentAIState.Data.ArrayNum = 0;
    (this->DataPack).CurrentAIState.Data.ArrayMax = 0;
    (this->DataPack).CurrentAIAssets.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).CurrentAIAssets.Data.ArrayNum = 0;
    (this->DataPack).CurrentAIAssets.Data.ArrayMax = 0;
    (this->DataPack).NavDataInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).NavDataInfo.Data.ArrayNum = 0;
    (this->DataPack).NavDataInfo.Data.ArrayMax = 0;
    (this->DataPack).MontageInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).MontageInfo.Data.ArrayNum = 0;
    (this->DataPack).MontageInfo.Data.ArrayMax = 0;
    (this->DataPack).TaskQueueInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).TaskQueueInfo.Data.ArrayNum = 0;
    (this->DataPack).TaskQueueInfo.Data.ArrayMax = 0;
    (this->DataPack).TickingTaskInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).TickingTaskInfo.Data.ArrayNum = 0;
    (this->DataPack).TickingTaskInfo.Data.ArrayMax = 0;
    (this->DataPack).NumTasksInQueue = 0;
    (this->DataPack).NumTickingTasks = 0;
    (this->PathDataPack).PathCorridor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PathDataPack).PathCorridor.ArrayNum = 0;
    (this->PathDataPack).PathCorridor.ArrayMax = 0;
    (this->PathDataPack).PathPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PathDataPack).PathPoints.ArrayNum = 0;
    (this->PathDataPack).PathPoints.ArrayMax = 0;
    this->RawLastPath = (FNavigationPath *)0x0;
    this->LastPathUpdateTime = 0.0;
    FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>
              ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
    iVar4 = FGameplayDebuggerCategory::
            SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>
                      ((FGameplayDebuggerCategory *)this,&this->PathDataPack,ResetOnActorChange);
    this->PathDataPackId = iVar4;
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_res8.Object = this;
  TSharedRef<FGameplayDebuggerCategory,1>::
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_AI>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnDataPackReplicated @ 146f5e380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_AI::OnDataPackReplicated(FGameplayDebuggerCategory_AI *this,int param_1)

{
  AActor *this_00;
  
  if (param_1 != this->PathDataPackId) {
    return;
  }
  if ((this->_padding_ & 0x2000000000) != 0) {
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this_00 != (AActor *)0x0) {
      AActor::MarkComponentsRenderStateDirty(this_00);
      return;
    }
  }
  return;
}

