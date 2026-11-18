// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// FGameplayDebuggerCategory_NavLocalGrid @ 146f91290

FGameplayDebuggerCategory_NavLocalGrid * __thiscall
FGameplayDebuggerCategory_NavLocalGrid::FGameplayDebuggerCategory_NavLocalGrid
          (FGameplayDebuggerCategory_NavLocalGrid *this)

{
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_NavLocalGrid__6B_;
  (this->DataPack).Grids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).Grids.ArrayNum = 0;
  (this->DataPack).Grids.ArrayMax = 0;
  (this->DataPack).NumSources = 0;
  (this->DataPack).VersionNum = 0;
  (this->AgentDataPack).PathCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AgentDataPack).PathCells.ArrayNum = 0;
  (this->AgentDataPack).PathCells.ArrayMax = 0;
  FGameplayDebuggerCategory::
  SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>
            ((FGameplayDebuggerCategory *)this,&this->DataPack,Persistent);
  FGameplayDebuggerCategory::
  SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>
            ((FGameplayDebuggerCategory *)this,&this->AgentDataPack,ResetOnTick);
  *(uint *)((longlong)&this->_padding_ + 4) =
       *(uint *)((longlong)&this->_padding_ + 4) & 0xfffffff5 | 1;
  return this;
}

// CollectData @ 146f9c880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_NavLocalGrid::CollectData
          (FGameplayDebuggerCategory_NavLocalGrid *this,APlayerController *param_1,AActor *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UNavLocalGridManager *this_00;
  UClass *pUVar10;
  FNavLocalGridData *this_01;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_res20;
  longlong local_78;
  TIntVector3<int>_u_0 local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  this_00 = UNavLocalGridManager::GetCurrent((UObject *)param_1);
  if ((this_00 != (UNavLocalGridManager *)0x0) &&
     (this_00->VersionNum != (this->DataPack).VersionNum)) {
    (this->DataPack).VersionNum = this_00->VersionNum;
    (this->DataPack).NumSources = (this_00->SourceGrids).ArrayNum;
    TArray<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,TSizedDefaultAllocator<32>_>
    ::SetNum(&(this->DataPack).Grids,(this_00->CombinedGrids).ArrayNum,Default);
    local_res20 = 0;
    if (0 < (this_00->CombinedGrids).ArrayNum) {
      local_78 = 0;
      lVar15 = 0;
      do {
        uVar13 = 0;
        if ((int)local_res20 < (this_00->CombinedGrids).ArrayNum) {
          uVar13 = ~local_res20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this_00->CombinedGrids).AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)local_res20 < (this->DataPack).Grids.ArrayNum) {
          uVar13 = ~local_res20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar6 = *(undefined8 *)(pFVar3 + lVar15 + 8 + 8);
        pFVar4 = (this->DataPack).Grids.AllocatorInstance.Data;
        *(undefined8 *)(pFVar4 + local_78) = *(undefined8 *)(pFVar3 + lVar15 + 8);
        *(undefined8 *)(pFVar4 + local_78 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar3 + lVar15 + 0x18 + 8);
        pFVar1 = pFVar4 + local_78 + 0x50;
        *(undefined8 *)(pFVar4 + local_78 + 0x10) = *(undefined8 *)(pFVar3 + lVar15 + 0x18);
        *(undefined8 *)(pFVar4 + local_78 + 0x10 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar3 + lVar15 + 0x28 + 8);
        *(undefined8 *)(pFVar4 + local_78 + 0x20) = *(undefined8 *)(pFVar3 + lVar15 + 0x28);
        *(undefined8 *)(pFVar4 + local_78 + 0x20 + 8) = uVar6;
        *(undefined8 *)(pFVar4 + local_78 + 0x30) = *(undefined8 *)(pFVar3 + lVar15 + 0x38);
        *(undefined4 *)(pFVar4 + local_78 + 0x38) = *(undefined4 *)(pFVar3 + lVar15);
        *(undefined4 *)(pFVar4 + local_78 + 0x40) = *(undefined4 *)(pFVar3 + lVar15 + 0x70);
        *(undefined4 *)(pFVar4 + local_78 + 0x3c) = *(undefined4 *)(pFVar3 + lVar15 + 0x74);
        uVar13 = *(uint *)(pFVar3 + lVar15 + 0x80);
        iVar12 = *(int *)pFVar1;
        if (iVar12 < (int)uVar13) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,uVar13 - iVar12,(ForAnyElementType *)(pFVar4 + local_78 + 0x48),
                             (int *)pFVar1,(int *)(pFVar4 + local_78 + 0x54));
          memset((void *)((longlong)iVar8 + *(longlong *)(pFVar4 + local_78 + 0x48)),0,
                 (longlong)(int)(uVar13 - iVar12));
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar12) {
            iVar12 = iVar12 - uVar13;
            if (iVar12 < 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else if (iVar12 == 0) goto LAB_146f9caf2;
            iVar8 = (*(int *)pFVar1 - iVar12) - uVar13;
            if (iVar8 != 0) {
              memmove((void *)((longlong)(int)uVar13 + *(longlong *)(pFVar4 + local_78 + 0x48)),
                      (void *)((longlong)iVar12 +
                              (longlong)(int)uVar13 + *(longlong *)(pFVar4 + local_78 + 0x48)),
                      (longlong)iVar8);
            }
            *(int *)pFVar1 = *(int *)pFVar1 - iVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(ForAnyElementType *)(pFVar4 + local_78 + 0x48),*(int *)pFVar1,
                       (int *)(pFVar4 + local_78 + 0x54));
          }
        }
LAB_146f9caf2:
        uVar11 = 0;
        if (uVar13 != 0) {
          do {
            lVar14 = (longlong)(int)uVar11;
            uVar2 = *(undefined1 *)(lVar14 + *(longlong *)(pFVar3 + lVar15 + 0x78));
            uVar9 = 0;
            if ((int)uVar11 < *(int *)pFVar1) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar11 = uVar11 + 1;
            *(undefined1 *)(lVar14 + *(longlong *)(pFVar4 + local_78 + 0x48)) = uVar2;
          } while (uVar11 < uVar13);
        }
        local_res20 = local_res20 + 1;
        local_78 = local_78 + 0x58;
        lVar15 = lVar15 + 0xc0;
      } while ((int)local_res20 < (this_00->CombinedGrids).ArrayNum);
    }
  }
  if (param_2 == (AActor *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_APawn_NoRegister();
  iVar12 = (int)pUVar10->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar12) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar12 * 8)
      != &pUVar10->_padding_) {
    return;
  }
  lVar15 = param_2[1].PrimaryActorTick._padding_;
  if (lVar15 == 0) {
LAB_146f9cc1f:
    lVar15 = 0;
  }
  else {
    pUVar10 = Z_Construct_UClass_AAIController_NoRegister();
    iVar12 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar12 * 8)
        != &pUVar10->_padding_)) goto LAB_146f9cc1f;
  }
  if (lVar15 == 0) {
    return;
  }
  lVar15 = *(longlong *)(lVar15 + 0x3b0);
  if (lVar15 != 0) {
    pUVar10 = UGridPathFollowingComponent::StaticClass();
    iVar12 = (int)pUVar10->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar12 * 8)
        == &pUVar10->_padding_)) goto LAB_146f9cc5b;
  }
  lVar15 = 0;
LAB_146f9cc5b:
  if ((((lVar15 != 0) && (iVar12 = *(int *)(lVar15 + 0x330), iVar12 != -1)) &&
      (this_00 != (UNavLocalGridManager *)0x0)) &&
     ((-1 < iVar12 && (iVar12 < (this_00->CombinedGrids).ArrayNum)))) {
    (this->AgentDataPack).GridIdx = iVar12;
    local_40 = *(int *)(lVar15 + 0x348);
    lVar14 = (longlong)local_40;
    _Src = *(void **)(lVar15 + 0x340);
    local_48.Data = (FScriptContainerElement *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar14 * 0x18);
    }
    this_01 = UNavLocalGridManager::GetGridData(this_00,(this->AgentDataPack).GridIdx);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->AgentDataPack).PathCells,local_40,Default);
    uVar13 = 0;
    if (0 < local_40) {
      lVar15 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar13 < local_40) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
                  ((TSimpleCellGrid<unsigned_char,255> *)this_01,(TIntVector3<int> *)&local_58._s_0,
                   (TVector<double> *)(local_48.Data + (longlong)(int)uVar13 * 0x18));
        if ((((local_58._s_0.X < 0) || ((int)this_01->_padding_ <= local_58._s_0.X)) ||
            (local_58._s_0.Y < 0)) ||
           (iVar12 = *(int *)((longlong)&this_01->_padding_ + 4), iVar12 <= local_58._s_0.Y)) {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar12 * local_58._s_0.X + local_58._s_0.Y;
        }
        uVar11 = 0;
        if ((int)uVar13 < (this->AgentDataPack).PathCells.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = uVar13 + 1;
        *(int *)((this->AgentDataPack).PathCells.AllocatorInstance.Data + lVar15) = iVar12;
        lVar15 = lVar15 + 4;
      } while ((int)uVar13 < local_40);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// CreateDebugSceneProxy @ 146fa16a0

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
FGameplayDebuggerCategory_NavLocalGrid::CreateDebugSceneProxy
          (FGameplayDebuggerCategory_NavLocalGrid *this,UPrimitiveComponent *param_1,
          FDebugDrawDelegateHelper **param_2)

{
  FNavLocalGridSceneProxy *pFVar1;
  
  *param_2 = (FDebugDrawDelegateHelper *)0x0;
  pFVar1 = ::operator_new(0x420);
  if (pFVar1 != (FNavLocalGridSceneProxy *)0x0) {
    pFVar1 = FNavLocalGridSceneProxy::FNavLocalGridSceneProxy
                       (pFVar1,param_1,&this->DataPack,&this->AgentDataPack);
    return (FDebugRenderSceneProxy *)pFVar1;
  }
  return (FDebugRenderSceneProxy *)0x0;
}

// DrawData @ 146fa5310

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
FGameplayDebuggerCategory_NavLocalGrid::DrawData
          (FGameplayDebuggerCategory_NavLocalGrid *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  FGameplayDebuggerCanvasContext::PrintfImpl
            (param_2,&FColor::White,__real_3f800000,L"Num sources: {%s}%d");
  return;
}

// MakeInstance @ 146fbb6e0

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_NavLocalGrid::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGameplayDebuggerCategory_NavLocalGrid *this;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar3;
  TRawPtrProxy<FGameplayDebuggerCategory_NavLocalGrid> local_res8;
  
  this = ::operator_new(0xb0);
  if (this != (FGameplayDebuggerCategory_NavLocalGrid *)0x0) {
    FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
    this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_NavLocalGrid__6B_;
    (this->DataPack).Grids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataPack).Grids.ArrayNum = 0;
    (this->DataPack).Grids.ArrayMax = 0;
    (this->DataPack).NumSources = 0;
    (this->DataPack).VersionNum = 0;
    (this->AgentDataPack).PathCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AgentDataPack).PathCells.ArrayNum = 0;
    (this->AgentDataPack).PathCells.ArrayMax = 0;
    FGameplayDebuggerCategory::
    SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>
              ((FGameplayDebuggerCategory *)this,&this->DataPack,Persistent);
    FGameplayDebuggerCategory::
    SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>
              ((FGameplayDebuggerCategory *)this,&this->AgentDataPack,ResetOnTick);
    *(uint *)((longlong)&this->_padding_ + 4) =
         *(uint *)((longlong)&this->_padding_ + 4) & 0xfffffff5 | 1;
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
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_NavLocalGrid>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnDataPackReplicated @ 146fbcc40

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
FGameplayDebuggerCategory_NavLocalGrid::OnDataPackReplicated
          (FGameplayDebuggerCategory_NavLocalGrid *this,int param_1)

{
  AActor *this_00;
  
  if ((this->_padding_ & 0x2000000000) != 0) {
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this_00 != (AActor *)0x0) {
      AActor::MarkComponentsRenderStateDirty(this_00);
      return;
    }
  }
  return;
}

