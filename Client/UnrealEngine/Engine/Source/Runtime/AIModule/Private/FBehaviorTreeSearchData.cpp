// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// AddUniqueUpdate @ 146ed3980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FBehaviorTreeSearchData::AddUniqueUpdate
          (FBehaviorTreeSearchData *this,FBehaviorTreeSearchUpdate *param_1)

{
  TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  UBTAuxiliaryNode *pUVar4;
  FBehaviorTreeSearchUpdate *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  UClass *pUVar11;
  UBTTaskNode *pUVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  FString local_38;
  FString local_28;
  
  if (FVisualLogger::bIsRecording != 0) {
    pUVar12 = (UBTTaskNode *)(param_1->AuxNode).field0_0x0.DebugPtr;
    if (pUVar12 == (UBTTaskNode *)0x0) {
      pUVar12 = (param_1->TaskNode).field0_0x0.DebugPtr;
    }
    UBehaviorTreeTypes::DescribeNodeHelper(&local_28,(UBTNode *)pUVar12);
    UBehaviorTreeTypes::DescribeNodeUpdateMode(&local_38,(uint)(param_1->Mode).Value);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"Search node update[%s]: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  uVar15 = 0;
  bVar9 = false;
  this_00 = &this->PendingUpdates;
  uVar16 = uVar15;
  if (0 < (this->PendingUpdates).ArrayNum) {
    do {
      uVar14 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar14 < (this->PendingUpdates).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      if ((*(UBTAuxiliaryNode **)(pFVar3 + uVar16) == (param_1->AuxNode).field0_0x0.DebugPtr) &&
         (*(UBTTaskNode **)(pFVar3 + uVar16 + 8) == (param_1->TaskNode).field0_0x0.DebugPtr)) {
        FVar2 = (FScriptContainerElement)(param_1->Mode).Value;
        if (pFVar3[uVar16 + 0x12] == FVar2) {
          if (FVisualLogger::bIsRecording == 0) {
            return;
          }
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                     Verbose,L">> skipped: duplicated operation");
          return;
        }
        if ((pFVar3[uVar16 + 0x12] == (FScriptContainerElement)0x2) ||
           (FVar2 == (FScriptContainerElement)0x2)) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        if (((FVisualLogger::bIsRecording != 0) && (bVar9)) && (FVisualLogger::bIsRecording != 0)) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                     Verbose,L">> skipped: paired add/remove");
        }
        TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,uVar14,No);
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x18;
    } while ((int)(uVar14 + 1) < (this->PendingUpdates).ArrayNum);
    if (bVar9) {
      return;
    }
  }
  if (((param_1->Mode).Value == '\x02') &&
     (pUVar4 = (param_1->AuxNode).field0_0x0.DebugPtr, pUVar4 != (UBTAuxiliaryNode *)0x0)) {
    bVar9 = UBehaviorTreeComponent::IsAuxNodeActive
                      (this->OwnerComp,pUVar4,(uint)param_1->InstanceIndex);
    if (FVisualLogger::bIsRecording != 0) {
      if (bVar9) goto LAB_146ed3be7;
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose
                   ,L">> skipped: did not push a remove to PendingUpdates due to inactive aux node")
        ;
        return;
      }
    }
    if (!bVar9) {
      return;
    }
  }
LAB_146ed3be7:
  pFVar5 = (FBehaviorTreeSearchUpdate *)(this_00->AllocatorInstance).Data;
  if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->PendingUpdates).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = (this->PendingUpdates).ArrayNum;
  piVar1 = &(this->PendingUpdates).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&this_00->AllocatorInstance,piVar1);
    (this->PendingUpdates).ArrayNum = uVar10;
  }
  lVar17 = (longlong)(int)uVar10;
  (this->PendingUpdates).ArrayNum = uVar10 + 1;
  FBehaviorTreeSearchUpdate::FBehaviorTreeSearchUpdate
            ((FBehaviorTreeSearchUpdate *)((this_00->AllocatorInstance).Data + lVar17 * 0x18),
             param_1);
  if (((param_1->Mode).Value == '\x01') &&
     ((param_1->AuxNode).field0_0x0.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
    pUVar11 = UBTService::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar11);
    if ((bVar9) && ((param_1->AuxNode).field0_0x0.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
      bVar13 = 1;
      goto LAB_146ed3cab;
    }
  }
  bVar13 = 0;
LAB_146ed3cab:
  uVar14 = 0;
  if ((int)uVar10 < (this->PendingUpdates).ArrayNum) {
    uVar14 = ~uVar10 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->PendingUpdates).AllocatorInstance.Data;
  pFVar3 = pFVar6 + lVar17 * 0x18 + 0x13;
  *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 & 0xfe);
  pFVar6 = pFVar6 + lVar17 * 0x18 + 0x13;
  *pFVar6 = (FScriptContainerElement)((byte)*pFVar6 | bVar13);
  return;
}

// AssignSearchId @ 146ed4060

void __thiscall FBehaviorTreeSearchData::AssignSearchId(FBehaviorTreeSearchData *this)

{
  this->SearchId = NextSearchId;
  NextSearchId = NextSearchId + 1;
  return;
}

// Reset @ 146efd9a0

void __thiscall FBehaviorTreeSearchData::Reset(FBehaviorTreeSearchData *this)

{
  undefined1 *puVar1;
  
  (this->PendingUpdates).ArrayNum = 0;
  if ((this->PendingUpdates).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PendingUpdates).AllocatorInstance,0,&(this->PendingUpdates).ArrayMax
              );
  }
  (this->PendingNotifies).ArrayNum = 0;
  if ((this->PendingNotifies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->PendingNotifies).AllocatorInstance,0,&(this->PendingNotifies).ArrayMax)
    ;
  }
  this->bFilterOutRequestFromDeactivatedBranch = 0;
  this->bPreserveActiveNodeMemoryOnRollback = 0;
  this->bSearchInProgress = 0;
  this->bPostponeSearch = 0;
  (this->SearchRootNode).InstanceIndex = 0xffff;
  (this->SearchRootNode).ExecutionIndex = 0xffff;
  (this->SearchStart).InstanceIndex = 0xffff;
  (this->SearchStart).ExecutionIndex = 0xffff;
  (this->SearchEnd).InstanceIndex = 0xffff;
  (this->SearchEnd).ExecutionIndex = 0xffff;
  (this->DeactivatedBranchStart).InstanceIndex = 0xffff;
  (this->DeactivatedBranchStart).ExecutionIndex = 0xffff;
  (this->DeactivatedBranchEnd).InstanceIndex = 0xffff;
  (this->DeactivatedBranchEnd).ExecutionIndex = 0xffff;
  this->RollbackInstanceIdx = -1;
  return;
}

