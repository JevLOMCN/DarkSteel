// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// FGameplayDebuggerCategory_BehaviorTree @ 146f294b0

FGameplayDebuggerCategory_BehaviorTree * __thiscall
FGameplayDebuggerCategory_BehaviorTree::FGameplayDebuggerCategory_BehaviorTree
          (FGameplayDebuggerCategory_BehaviorTree *this)

{
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_BehaviorTree__6B_;
  (this->DataPack).CompName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).CompName.Data.ArrayNum = 0;
  (this->DataPack).CompName.Data.ArrayMax = 0;
  (this->DataPack).TreeDesc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).TreeDesc.Data.ArrayNum = 0;
  (this->DataPack).TreeDesc.Data.ArrayMax = 0;
  (this->DataPack).BlackboardDesc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).BlackboardDesc.Data.ArrayNum = 0;
  (this->DataPack).BlackboardDesc.Data.ArrayMax = 0;
  FGameplayDebuggerCategory::
  SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>
            ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
  return this;
}

// CollectData @ 146f36f70

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
FGameplayDebuggerCategory_BehaviorTree::CollectData
          (FGameplayDebuggerCategory_BehaviorTree *this,APlayerController *param_1,AActor *param_2)

{
  FRepData *pFVar1;
  FString *pFVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  FString *pFVar8;
  longlong lVar9;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (param_2 == (AActor *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_APawn_NoRegister();
  iVar3 = (int)pUVar6->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  lVar9 = param_2[1].PrimaryActorTick._padding_;
  if (lVar9 != 0) {
    pUVar6 = Z_Construct_UClass_AAIController_NoRegister();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar6->_padding_)) goto LAB_146f36fea;
  }
  lVar9 = 0;
LAB_146f36fea:
  if (((lVar9 != 0) && (plVar4 = *(longlong **)(lVar9 + 0x3b8), plVar4 != (longlong *)0x0)) &&
     ((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0)) {
    local_res18[0] = *(FName *)(plVar4 + 3);
    ::FName::ToString(local_res18,&local_38);
    pFVar1 = &this->DataPack;
    if (pFVar1 != (FRepData *)&local_38) {
      pFVar5 = (pFVar1->CompName).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->CompName).Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (this->DataPack).CompName.Data.ArrayNum = local_38.Data.ArrayNum;
      (this->DataPack).CompName.Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x4f8))(plVar4,&local_28);
    pFVar2 = &(this->DataPack).TreeDesc;
    if (pFVar2 != (FString *)puVar7) {
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
      *puVar7 = 0;
      (this->DataPack).TreeDesc.Data.ArrayNum = *(int *)(puVar7 + 1);
      (this->DataPack).TreeDesc.Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
      puVar7[1] = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((UBlackboardComponent *)plVar4[0x19] != (UBlackboardComponent *)0x0) {
      pFVar8 = UBlackboardComponent::GetDebugInfoString
                         ((UBlackboardComponent *)plVar4[0x19],&local_28,KeyWithValue);
      pFVar2 = &(this->DataPack).BlackboardDesc;
      if (pFVar2 != pFVar8) {
        pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->DataPack).BlackboardDesc.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        (this->DataPack).BlackboardDesc.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// DrawData @ 146f42280

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
FGameplayDebuggerCategory_BehaviorTree::DrawData
          (FGameplayDebuggerCategory_BehaviorTree *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  if (1 < (this->DataPack).CompName.Data.ArrayNum) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,__real_3f800000,L"Brain Component: {yellow}%s");
    FGameplayDebuggerCanvasContext::Print(param_2,&(this->DataPack).TreeDesc);
    uVar14 = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&(this->DataPack).BlackboardDesc,&local_a8,true);
    fVar1 = param_2->DefaultX;
    fVar2 = param_2->CursorY;
    param_2->CursorX = 600.0;
    param_2->DefaultX = 600.0;
    param_2->CursorY = param_2->DefaultY;
    uVar16 = uVar14;
    if (0 < local_a8.ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar15 = ~uVar13 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar13 < local_a8.ArrayNum) {
          uVar7 = uVar15;
        }
        iVar9 = local_a8.ArrayNum;
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = local_a8.ArrayNum;
        }
        psVar4 = *(short **)(local_a8.AllocatorInstance.Data + uVar16);
        for (psVar12 = psVar4;
            psVar12 != psVar4 + *(int *)(local_a8.AllocatorInstance.Data + uVar16 + 8);
            psVar12 = psVar12 + 1) {
          if (*psVar12 == 0x3a) {
            iVar11 = (int)((longlong)psVar12 - (longlong)psVar4 >> 1);
            if ((iVar11 != -1) && (uVar13 != 0)) {
              uVar7 = 0;
              if ((int)uVar13 < iVar9) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar11 = iVar11 + 1;
              ::FString::RightChop
                        ((FString *)(local_a8.AllocatorInstance.Data + uVar16),&local_78,iVar11);
              pFVar8 = ::FString::FString(local_58,L"{yellow}");
              uVar7 = 0;
              if ((int)uVar13 < local_a8.ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar3 = *(int *)(local_a8.AllocatorInstance.Data + uVar16 + 8);
              iVar9 = iVar3 + -1;
              if (iVar3 == 0) {
                iVar9 = 0;
              }
              if (iVar11 < iVar9) {
                iVar9 = iVar11;
              }
              iVar11 = 0;
              if (0 < iVar9) {
                iVar11 = iVar9;
              }
              if (iVar3 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = *(wchar_t **)(local_a8.AllocatorInstance.Data + uVar16);
              }
              ::FString::ConstructFromPtrSize(&local_88,pwVar10,iVar11);
              ::FString::ConcatFF(&local_98,&local_88,pFVar8);
              ::FString::ConcatFF(&local_68,&local_98,&local_78);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
              }
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              FGameplayDebuggerCanvasContext::Print(param_2,&local_68);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              goto LAB_146f42591;
            }
            break;
          }
        }
        uVar7 = 0;
        if ((int)uVar13 < iVar9) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FGameplayDebuggerCanvasContext::Print
                  (param_2,(FString *)(local_a8.AllocatorInstance.Data + uVar16));
LAB_146f42591:
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar16 = uVar16 + 0x10;
      } while ((int)(uVar13 + 1) < local_a8.ArrayNum);
    }
    param_2->CursorX = fVar1;
    param_2->DefaultX = fVar1;
    param_2->CursorY = fVar2;
    DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  return;
}

// MakeInstance @ 146f5d380

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_BehaviorTree::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGameplayDebuggerCategory_BehaviorTree *this;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar3;
  TRawPtrProxy<FGameplayDebuggerCategory_BehaviorTree> local_res8;
  
  this = ::operator_new(0xb0);
  if (this != (FGameplayDebuggerCategory_BehaviorTree *)0x0) {
    FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
    this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_BehaviorTree__6B_;
    (this->DataPack).CompName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).CompName.Data.ArrayNum = 0;
    (this->DataPack).CompName.Data.ArrayMax = 0;
    (this->DataPack).TreeDesc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).TreeDesc.Data.ArrayNum = 0;
    (this->DataPack).TreeDesc.Data.ArrayMax = 0;
    (this->DataPack).BlackboardDesc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).BlackboardDesc.Data.ArrayNum = 0;
    (this->DataPack).BlackboardDesc.Data.ArrayMax = 0;
    FGameplayDebuggerCategory::
    SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>
              ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res8.Object = this;
  TSharedRef<FGameplayDebuggerCategory,1>::
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_BehaviorTree>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

