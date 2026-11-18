// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// FGameplayDebuggerCategory_Navmesh @ 146f91310

FGameplayDebuggerCategory_Navmesh * __thiscall
FGameplayDebuggerCategory_Navmesh::FGameplayDebuggerCategory_Navmesh
          (FGameplayDebuggerCategory_Navmesh *this)

{
  uint *puVar1;
  FName FVar2;
  undefined8 uVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_res10;
  FGameplayDebuggerInputHandlerConfig local_58;
  FGameplayDebuggerInputHandlerConfig local_48;
  FGameplayDebuggerInputHandlerConfig local_38;
  code *local_28;
  undefined8 uStack_20;
  
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_Navmesh__6B_;
  FNavMeshSceneProxyData::FNavMeshSceneProxyData(&this->NavmeshRenderData);
  (this->DataPack).NavDataName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).NavDataName.Data.ArrayNum = 0;
  (this->DataPack).NavDataName.Data.ArrayMax = 0;
  (this->DataPack).NavBuildLockStatusDesc.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DataPack).NavBuildLockStatusDesc.Data.ArrayNum = 0;
  (this->DataPack).NavBuildLockStatusDesc.Data.ArrayMax = 0;
  (this->DataPack).SupportedAgents.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPack).SupportedAgents.Data.ArrayNum = 0;
  uVar3 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->DataPack).SupportedAgents.Data.ArrayMax = 0;
  (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.Y = (double)uVar3;
  (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.Z =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->DataPack).NumDirtyAreas = 0;
  (this->DataPack).NumSuspendedDirtyAreas = 0;
  (this->DataPack).NumRunningTasks = 0;
  (this->DataPack).NumRemainingTasks = 0;
  (this->DataPack).bCanChangeReference = false;
  (this->DataPack).bCanCycleNavigationData = false;
  (this->DataPack).bIsUsingPlayerActor = false;
  (this->DataPack).bReferenceTooFarFromNavData = false;
  (this->DataPack).bIsNavBuildLocked = false;
  (this->DataPack).bIsNavOctreeLocked = false;
  (this->DataPack).bIsNavDataRebuildingSuspended = false;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffff7;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  this->ActorReferenceMode = DebugActor;
  this->NavDataIndexToDisplay = -1;
  this->bSwitchToNextNavigationData = false;
  (this->PrevDebugActorReference).WeakPtr = (FWeakObjectPtr)0x0;
  this->bToggleLockedReferenceLocation = false;
  (this->LockedReferenceLocation).bIsSet = false;
  *(float *)&this->_padding_ = FGameplayDebuggerCategoryNavmeshTweakables::RefreshInterval;
  FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>
            ((FGameplayDebuggerCategory *)this,&this->NavmeshRenderData,ResetOnTick);
  FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>
            ((FGameplayDebuggerCategory *)this,&this->DataPack,ResetOnTick);
  pFVar4 = ::FName::FName(&local_res8,L"Subtract");
  FVar2 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res10,L"Cycle Actor Reference");
  FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig
            (&local_58,*pFVar4,FVar2,&FGameplayDebuggerInputModifier::Shift);
  pFVar4 = ::FName::FName(&local_res8,L"Add");
  FVar2 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res10,L"Cycle NavData");
  FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig
            (&local_48,*pFVar4,FVar2,&FGameplayDebuggerInputModifier::Shift);
  pFVar4 = ::FName::FName(&local_res8,L"Multiply");
  FVar2 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res10,L"Lock Reference Location");
  FGameplayDebuggerInputHandlerConfig::FGameplayDebuggerInputHandlerConfig
            (&local_38,*pFVar4,FVar2,&FGameplayDebuggerInputModifier::Shift);
  uStack_20._0_4_ = 0;
  local_28 = CycleActorReference;
  FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_Navmesh>
            ((FGameplayDebuggerAddonBase *)this,&local_58,this,(pmf_b2ed2628 *)&local_28,Replicated)
  ;
  uStack_20._0_4_ = 0;
  local_28 = CycleNavData;
  FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_Navmesh>
            ((FGameplayDebuggerAddonBase *)this,&local_48,this,(pmf_b2ed2628 *)&local_28,Replicated)
  ;
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = ToggleLockedReferenceLocation;
  FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_Navmesh>
            ((FGameplayDebuggerAddonBase *)this,&local_38,this,(pmf_b2ed2628 *)&local_28,Replicated)
  ;
  return this;
}

// CollectData @ 146f9ce60

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
FGameplayDebuggerCategory_Navmesh::CollectData
          (FGameplayDebuggerCategory_Navmesh *this,APlayerController *param_1,AActor *param_2)

{
  FRepData *pFVar1;
  double dVar2;
  byte bVar3;
  EActorReferenceMode EVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  FString *pFVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  UNavigationSystemV1 *pUVar17;
  UNavigationSystemV1 *pUVar18;
  TOptional<UE::Math::TVector<double>_> *pTVar19;
  FString *pFVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  double *pdVar23;
  FNavDataConfig *pFVar24;
  UNavigationSystemV1 *pUVar25;
  FNavDataConfig *this_00;
  UNavigationSystemV1 *this_01;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 local_res8 [8];
  APlayerController *local_res10;
  UNavigationSystemV1 *local_res18;
  FNavDataConfig *local_res20;
  UNavigationSystemV1 *local_160;
  FString local_158;
  FString local_148;
  FName local_138;
  FName local_130;
  FString local_128;
  undefined8 local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined1 local_88;
  double local_80 [3];
  undefined1 local_68;
  undefined1 local_60 [32];
  
  pUVar25 = (UNavigationSystemV1 *)0x0;
  iVar11 = 0;
  pUVar17 = pUVar25;
  this_01 = pUVar25;
  pUVar18 = pUVar25;
  iVar10 = iVar11;
  local_res10 = param_1;
  local_res18 = (UNavigationSystemV1 *)param_2;
  if ((param_1 != (APlayerController *)0x0) &&
     (pUVar12 = AActor::GetWorld((AActor *)param_1), pUVar17 = (UNavigationSystemV1 *)0x0,
     this_01 = (UNavigationSystemV1 *)0x0, pUVar18 = (UNavigationSystemV1 *)0x0,
     pUVar12 != (UWorld *)0x0)) {
    this_01 = (UNavigationSystemV1 *)(pUVar12->NavigationSystem).field0_0x0.DebugPtr;
    if (this_01 == (UNavigationSystemV1 *)0x0) {
LAB_146f9cee5:
      this_01 = pUVar25;
    }
    else {
      pUVar13 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar22 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar22) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
          &pUVar13->_padding_)) goto LAB_146f9cee5;
    }
    if (this_01 != (UNavigationSystemV1 *)0x0) {
      iVar10 = UNavigationSystemV1::GetNumDirtyAreas(this_01);
      (this->DataPack).NumDirtyAreas = iVar10;
      iVar10 = UNavigationSystemV1::GetNumRunningBuildTasks(this_01);
      (this->DataPack).NumRunningTasks = iVar10;
      iVar10 = UNavigationSystemV1::GetNumRemainingBuildTasks(this_01);
      (this->DataPack).NumRemainingTasks = iVar10;
      (this->DataPack).bIsNavOctreeLocked = (this_01->DefaultOctreeController).bNavOctreeLock;
      (this->DataPack).bIsNavBuildLocked = this_01->NavBuildingLockFlags != '\0';
      pFVar14 = ::FString::FString(&local_110,"Unknown");
      pFVar20 = &(this->DataPack).NavBuildLockStatusDesc;
      if (pFVar20 != pFVar14) {
        pFVar5 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar20->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->DataPack).NavBuildLockStatusDesc.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (this->DataPack).NavBuildLockStatusDesc.Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      bVar3 = this_01->NavBuildingLockFlags;
      if ((bVar3 & 8) == 0) {
        if ((bVar3 & 0x10) != 0) {
          pFVar14 = ::FString::FString(&local_f0,"Custom Lock");
          ::FString::operator=(pFVar20,pFVar14);
          local_100.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
          goto LAB_146f9d030;
        }
        if ((bVar3 & 2) != 0) {
          pFVar14 = ::FString::FString(&local_e0,"NoUpdateInEditor Lock");
          ::FString::operator=(pFVar20,pFVar14);
          local_100.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
          goto LAB_146f9d030;
        }
        if ((bVar3 & 4) != 0) {
          pFVar14 = ::FString::FString(&local_d0,"NoUpdateInPIE Lock");
          ::FString::operator=(pFVar20,pFVar14);
          local_100.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
          goto LAB_146f9d030;
        }
      }
      else {
        pFVar14 = ::FString::FString(&local_100,"Initial Lock");
        ::FString::operator=(pFVar20,pFVar14);
LAB_146f9d030:
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      iVar10 = (this_01->SupportedAgents).ArrayNum;
      this_00 = (FNavDataConfig *)(this_01->SupportedAgents).AllocatorInstance.Data;
      pFVar24 = this_00 + iVar10;
      local_res20 = pFVar24;
      while( true ) {
        if ((this_01->SupportedAgents).ArrayNum != iVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FNavDataConfig_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        pUVar17 = local_res18;
        if (this_00 == pFVar24) break;
        bVar9 = FNavDataConfig::IsValid(this_00);
        if (bVar9) {
          ::FName::ToString(&this_00->Name,&local_128);
          pFVar20 = &(this->DataPack).SupportedAgents;
          ::FString::PrintfImpl(&local_158,L"%s%s%s");
          if (pFVar20 == &local_158) {
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
          }
          else {
            pFVar5 = (pFVar20->Data).AllocatorInstance.Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            (pFVar20->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
            (this->DataPack).SupportedAgents.Data.ArrayNum = local_158.Data.ArrayNum;
            (this->DataPack).SupportedAgents.Data.ArrayMax = local_158.Data.ArrayMax;
            local_158.Data.ArrayNum = 0;
            local_158.Data.ArrayMax = 0;
            local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          pFVar24 = local_res20;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
            pFVar24 = local_res20;
          }
        }
        this_00 = this_00 + 1;
      }
      iVar10 = (this_01->NavDataSet).ArrayNum;
      local_res20 = (FNavDataConfig *)CONCAT44(local_res20._4_4_,iVar10);
      pUVar18 = pUVar25;
      if (local_res18 != (UNavigationSystemV1 *)0x0) {
        pUVar13 = Z_Construct_UClass_APawn_NoRegister();
        lVar6 = *(longlong *)&pUVar17->field_0x10;
        iVar22 = (int)pUVar13->_padding_;
        if ((iVar22 <= *(int *)(lVar6 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar22 * 8) ==
            &pUVar13->_padding_)) {
          pUVar18 = pUVar17;
        }
      }
      if (this->ActorReferenceMode == PlayerActorOnly) {
        if (pUVar18 != (UNavigationSystemV1 *)0x0) {
          this->ActorReferenceMode = DebugActor;
        }
      }
      else if (pUVar18 == (UNavigationSystemV1 *)0x0) {
        this->ActorReferenceMode = PlayerActorOnly;
      }
      if ((this->bSwitchToNextNavigationData != false) ||
         (iVar22 = this->NavDataIndexToDisplay, iVar22 == -1)) {
        if (iVar10 < 1) {
          iVar22 = -1;
        }
        else {
          this->NavDataIndexToDisplay = this->NavDataIndexToDisplay + 1;
          iVar22 = this->NavDataIndexToDisplay % iVar10;
          if (iVar22 < 0) {
            iVar22 = iVar11;
          }
        }
        this->NavDataIndexToDisplay = iVar22;
        this->bSwitchToNextNavigationData = false;
      }
      if ((-1 < iVar22) && (iVar22 < (this_01->NavDataSet).ArrayNum)) {
        if (((this_01->NavDataSet).ArrayNum <= iVar22) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar25 = *(UNavigationSystemV1 **)
                   ((this_01->NavDataSet).AllocatorInstance.Data + (longlong)iVar22 * 8);
        bVar9 = (bool)(**(code **)(*(longlong *)pUVar25 + 0x828))(pUVar25);
        (this->DataPack).bIsNavDataRebuildingSuspended = bVar9;
        iVar11 = (**(code **)(*(longlong *)pUVar25 + 0x830))(pUVar25);
        (this->DataPack).NumSuspendedDirtyAreas = iVar11;
      }
      pUVar17 = pUVar25;
      if (this->ActorReferenceMode == DebugActor) {
        bVar9 = TWeakObjectPtr<APawn_const_,FWeakObjectPtr>::UEOpEquals<APawn,bool>
                          (&this->PrevDebugActorReference,(APawn *)pUVar18);
        if (!bVar9) {
          uVar15 = (**(code **)(*(longlong *)&(pUVar18->AgentToNavDataMap).field_0x28 + 0x10))
                             (&(pUVar18->AgentToNavDataMap).field_0x28);
          pcVar7 = *(code **)(*(longlong *)this_01 + 0x350);
          uVar16 = (**(code **)(*(longlong *)&(pUVar18->AgentToNavDataMap).field_0x28 + 0x18))
                             (&(pUVar18->AgentToNavDataMap).field_0x28,local_60);
          pUVar17 = (UNavigationSystemV1 *)
                    (*pcVar7)(this_01,uVar15,uVar16,&UE::Math::TVector<double>::ZeroVector);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar17 != (UNavigationSystemV1 *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar17);
          }
          pFVar5 = (this_01->NavDataSet).AllocatorInstance.Data;
          for (pFVar21 = pFVar5; pFVar21 != pFVar5 + (longlong)(this_01->NavDataSet).ArrayNum * 8;
              pFVar21 = pFVar21 + 8) {
            if (*(UNavigationSystemV1 **)pFVar21 == pUVar17) {
              iVar10 = (int)((longlong)pFVar21 - (longlong)pFVar5 >> 3);
              goto LAB_146f9d369;
            }
          }
          iVar10 = -1;
LAB_146f9d369:
          this->NavDataIndexToDisplay = iVar10;
          local_160 = pUVar18;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar18);
          }
          FWeakObjectPtr::operator=(&(this->PrevDebugActorReference).WeakPtr,(FObjectPtr)&local_160)
          ;
          iVar10 = (int)local_res20;
        }
      }
      else {
        pUVar18 = (UNavigationSystemV1 *)APlayerController::GetPawnOrSpectator(local_res10);
      }
    }
  }
  if (this->bToggleLockedReferenceLocation != false) {
    if (((this->LockedReferenceLocation).bIsSet == false) && (pUVar18 != (UNavigationSystemV1 *)0x0)
       ) {
      lVar6 = *(longlong *)&(pUVar18->RegisteredNavBounds).HashSize;
      if (lVar6 == 0) {
        uVar26 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar27 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_9c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_94 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        uVar26 = *(undefined4 *)(lVar6 + 0x220);
        uVar27 = *(undefined4 *)(lVar6 + 0x224);
        local_a0 = *(undefined4 *)(lVar6 + 0x210);
        uStack_9c = *(undefined4 *)(lVar6 + 0x214);
        uStack_98 = *(undefined4 *)(lVar6 + 0x218);
        uStack_94 = *(undefined4 *)(lVar6 + 0x21c);
      }
      local_118 = CONCAT44(uVar27,uVar26);
      pdVar23 = (double *)&local_a0;
      local_90 = local_118;
      local_88 = 1;
    }
    else {
      local_68 = 0;
      pdVar23 = local_80;
    }
    if ((TOptional<UE::Math::TVector<double>_> *)pdVar23 != &this->LockedReferenceLocation) {
      if (*(char *)(pdVar23 + 3) != '\0') {
        dVar8 = pdVar23[1];
        dVar2 = pdVar23[2];
        (this->LockedReferenceLocation).TypedValue.field0_0x0._s_0.X = *pdVar23;
        (this->LockedReferenceLocation).TypedValue.field0_0x0._s_0.Y = dVar8;
        (this->LockedReferenceLocation).TypedValue.field0_0x0._s_0.Z = dVar2;
        (this->LockedReferenceLocation).bIsSet = true;
        this->bToggleLockedReferenceLocation = false;
        goto LAB_146f9d476;
      }
      if ((this->LockedReferenceLocation).bIsSet != false) {
        (this->LockedReferenceLocation).bIsSet = false;
      }
    }
    this->bToggleLockedReferenceLocation = false;
  }
LAB_146f9d476:
  pTVar19 = (TOptional<UE::Math::TVector<double>_> *)&FNavigationSystem::InvalidLocation;
  if ((this->LockedReferenceLocation).bIsSet != false) {
    pTVar19 = &this->LockedReferenceLocation;
  }
  dVar2 = (pTVar19->TypedValue).field0_0x0._s_0.Y;
  (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.X =
       (pTVar19->TypedValue).field0_0x0._s_0.X;
  (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.Y = dVar2;
  (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.Z =
       (pTVar19->TypedValue).field0_0x0._s_0.Z;
  if (pUVar17 != (UNavigationSystemV1 *)0x0) {
    EVar4 = this->ActorReferenceMode;
    (this->DataPack).bIsUsingPlayerActor = EVar4 != DebugActor;
    (this->DataPack).bCanChangeReference = EVar4 != PlayerActorOnly;
    (this->DataPack).bCanCycleNavigationData = 1 < iVar10;
    if (iVar10 < 2) {
      local_130 = *(FName *)&pUVar17->field_0x18;
      pFVar20 = ::FName::ToString(&local_130,&local_b0);
      pFVar1 = &this->DataPack;
      if (pFVar1 != (FRepData *)pFVar20) {
        pFVar5 = (pFVar1->NavDataName).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->NavDataName).Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
        (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->DataPack).NavDataName.Data.ArrayNum = (pFVar20->Data).ArrayNum;
        (this->DataPack).NavDataName.Data.ArrayMax = (pFVar20->Data).ArrayMax;
        (pFVar20->Data).ArrayNum = 0;
        (pFVar20->Data).ArrayMax = 0;
      }
    }
    else {
      local_138 = *(FName *)&pUVar17->field_0x18;
      ::FName::ToString(&local_138,&local_c0);
      ::FString::PrintfImpl(&local_148,L"[%d/%d] %s");
      pFVar1 = &this->DataPack;
      if (pFVar1 != (FRepData *)&local_148) {
        pFVar5 = (pFVar1->NavDataName).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->NavDataName).Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
        (this->DataPack).NavDataName.Data.ArrayNum = local_148.Data.ArrayNum;
        (this->DataPack).NavDataName.Data.ArrayMax = local_148.Data.ArrayMax;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_b0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
        local_b0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      }
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x40))(this,this_01,pUVar17,pUVar18);
  return;
}

// CollectNavigationData @ 146f9d7b0

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
FGameplayDebuggerCategory_Navmesh::CollectNavigationData
          (FGameplayDebuggerCategory_Navmesh *this,UNavigationSystemV1 *param_1,
          ANavigationData *param_2,TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  ulonglong uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res18 [16];
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_48;
  
  if (param_2 != (ANavigationData *)0x0) {
    pUVar5 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if (((iVar7 <= *(int *)(param_2->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
         &pUVar5->_padding_)) &&
       ((__real_7fefffffffffffff != (param_3->field0_0x0)._s_0.X ||
        ((__real_7fefffffffffffff != (param_3->field0_0x0)._s_0.Y ||
         (__real_7fefffffffffffff != (param_3->field0_0x0)._s_0.Z)))))) {
      local_58.Data = (FScriptContainerElement *)0x0;
      uVar9 = 1;
      if (1 < FGameplayDebuggerCategoryNavmeshTweakables::DisplaySize) {
        uVar9 = FGameplayDebuggerCategoryNavmeshTweakables::DisplaySize;
      }
      local_50 = 0;
      iVar11 = (~uVar9 & 1) + uVar9;
      iVar7 = iVar11 * iVar11;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar7,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
      uVar9 = 0;
      lVar10 = 0;
      if (0 < (longlong)iVar7) {
        do {
          iStack_5c = (int)uVar9 / iVar11 - (iVar11 >> 1);
          local_60 = (int)uVar9 % iVar11 - (iVar11 >> 1);
          uVar4 = 0;
          if ((int)uVar9 < (int)local_50) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = uVar9 + 1;
          *(ulonglong *)(local_58.Data + lVar10 * 8) = CONCAT44(iStack_5c,local_60);
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar7);
      }
      local_64 = 0;
      local_68 = 0;
      ARecastNavMesh::GetNavMeshTileXY((ARecastNavMesh *)param_2,param_3,&local_64,&local_68);
      iVar7 = (int)local_50;
      uVar6 = (ulonglong)(int)local_50;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = local_58.Data + uVar6 * 8;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      FVar8.Data = local_58.Data;
      while( true ) {
        if ((int)uVar6 != iVar7) {
          `TCheckedPointerIterator<UE::Math::TIntPoint<int>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar8.Data == pFVar1) break;
        ARecastNavMesh::GetNavMeshTilesAt
                  ((ARecastNavMesh *)param_2,local_64 + *(int *)FVar8.Data,
                   local_68 + *(int *)(FVar8.Data + 4),&local_48);
        uVar6 = local_50 & 0xffffffff;
        FVar8.Data = FVar8.Data + 8;
      }
      iVar7 = 0x100a;
      if (FGameplayDebuggerCategoryNavmeshTweakables::bDrawExcludedFlags != 0) {
        iVar7 = 0x2100a;
      }
      (this->DataPack).bReferenceTooFarFromNavData = local_48.ArrayNum == 0;
      if (local_48.ArrayNum == 0) {
        FNavMeshSceneProxyData::Reset(&this->NavmeshRenderData);
      }
      else {
        FNavMeshSceneProxyData::GatherData
                  (&this->NavmeshRenderData,(ARecastNavMesh *)param_2,iVar7,&local_48);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return;
}

// CollectNavigationData @ 146f9da20

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
FGameplayDebuggerCategory_Navmesh::CollectNavigationData
          (FGameplayDebuggerCategory_Navmesh *this,UNavigationSystemV1 *param_1,
          ANavigationData *param_2,APawn *param_3)

{
  longlong lVar1;
  TVector<double>_u_0 *pTVar2;
  TVector<double>_u_0 local_38;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  double local_10;
  
  if (param_3 == (APawn *)0x0) {
    local_38._s_0.X = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
    local_38._s_0.Y = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
    local_38._s_0.Z = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  else {
    lVar1 = param_3->_padding_;
    if (lVar1 == 0) {
      local_38._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_38._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_38._s_0.X = *(double *)(lVar1 + 0x210);
      local_38._s_0.Y = *(double *)(lVar1 + 0x218);
      local_38._s_0.Z = *(double *)(lVar1 + 0x220);
    }
  }
  pTVar2 = (TVector<double>_u_0 *)&this->LockedReferenceLocation;
  if ((this->LockedReferenceLocation).bIsSet == false) {
    pTVar2 = &local_38;
  }
  local_20 = *(undefined4 *)&((TVector<double> *)&(pTVar2->_s_0).X)->field0_0x0;
  uStack_1c = *(undefined4 *)((longlong)&((TVector<double> *)&(pTVar2->_s_0).X)->field0_0x0 + 4);
  uStack_18 = *(undefined4 *)&(pTVar2->_s_0).Y;
  uStack_14 = *(undefined4 *)((longlong)&(pTVar2->_s_0).Y + 4);
  local_10 = (pTVar2->_s_0).Z;
  (**(code **)(this->_padding_ + 0x38))(this,SUB84(local_10,0),param_2,&local_20);
  return;
}

// CreateDebugSceneProxy @ 146fa1700

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
FGameplayDebuggerCategory_Navmesh::CreateDebugSceneProxy
          (FGameplayDebuggerCategory_Navmesh *this,UPrimitiveComponent *param_1,
          FDebugDrawDelegateHelper **param_2)

{
  FNavMeshSceneProxy *pFVar1;
  FNavMeshSceneProxy *pFVar2;
  FNavMeshSceneProxy *this_00;
  
  pFVar1 = ::operator_new(0x8e0);
  this_00 = (FNavMeshSceneProxy *)0x0;
  pFVar2 = this_00;
  if (pFVar1 != (FNavMeshSceneProxy *)0x0) {
    pFVar2 = FNavMeshSceneProxy::FNavMeshSceneProxy(pFVar1,param_1,&this->NavmeshRenderData,true);
  }
  pFVar1 = ::operator_new(0x80);
  if (pFVar1 != (FNavMeshSceneProxy *)0x0) {
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    ::FString::FString((FString *)&pFVar1->_padding_,L"Game");
    *(uint *)&pFVar1->_padding_ = (uint)pFVar1->_padding_ & 0xfffffffc;
    pFVar1->_padding_ = (longlong)&___7FNavMeshDebugDrawDelegateHelper__6B_;
    *(undefined4 *)&pFVar1->_padding_ = 0x44bb8000;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    this_00 = pFVar1;
  }
  FDebugDrawDelegateHelper::InitDelegateHelper
            ((FDebugDrawDelegateHelper *)this_00,(FDebugRenderSceneProxy *)pFVar2);
  *param_2 = (FDebugDrawDelegateHelper *)this_00;
  return (FDebugRenderSceneProxy *)pFVar2;
}

// CycleActorReference @ 146fa17f0

void __thiscall
FGameplayDebuggerCategory_Navmesh::CycleActorReference(FGameplayDebuggerCategory_Navmesh *this)

{
  if (this->ActorReferenceMode == PlayerActor) {
    this->ActorReferenceMode = DebugActor;
    this->_padding_ = -0x10000000000001;
  }
  else if (this->ActorReferenceMode == DebugActor) {
    this->ActorReferenceMode = PlayerActor;
    this->_padding_ = -0x10000000000001;
    return;
  }
  return;
}

// CycleNavData @ 146fa1840

void __thiscall
FGameplayDebuggerCategory_Navmesh::CycleNavData(FGameplayDebuggerCategory_Navmesh *this)

{
  this->bSwitchToNextNavigationData = true;
  this->_padding_ = -0x10000000000001;
  return;
}

// DrawData @ 146fa5370

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
FGameplayDebuggerCategory_Navmesh::DrawData
          (FGameplayDebuggerCategory_Navmesh *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  fVar3 = __real_3f800000;
  bVar2 = false;
  bVar1 = false;
  FGameplayDebuggerCanvasContext::PrintfImpl
            (param_2,&FColor::White,__real_3f800000,L"Num dirty areas: {%s}%d");
  FGameplayDebuggerCanvasContext::PrintfImpl
            (param_2,&FColor::White,fVar3,L"Tile jobs running/remaining: %d / %d");
  if ((this->DataPack).bIsNavBuildLocked != false) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar3,
               L"Navigation Update is locked! Reason = \'%s\'. Navigation changes to the map are discarded."
              );
  }
  if ((this->DataPack).bIsNavOctreeLocked != false) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar3,
               L"Navigation Octree is locked! Changes to the map are not getting stored.");
  }
  if ((this->DataPack).bIsNavDataRebuildingSuspended != false) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar3,
               L"Navigation Data Generation is suspended! New dirty areas are queued (NumSuspendedDirtyAreas=%d)"
              );
  }
  if (1 < (this->DataPack).SupportedAgents.Data.ArrayNum) {
    FGameplayDebuggerCanvasContext::PrintfImpl(param_2,&FColor::White,fVar3,L"Supported Agents: %s")
    ;
  }
  if (1 < (this->DataPack).NavDataName.Data.ArrayNum) {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar3,L"Navigation Data: {silver}%s%s");
  }
  if ((this->DataPack).bCanCycleNavigationData != false) {
    FGameplayDebuggerAddonBase::GetInputHandlerDescription
              ((FGameplayDebuggerAddonBase *)this,&local_48,1);
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar3,L"[{yellow}%s{white}]: Cycle NavData");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->DataPack).bCanChangeReference != false) {
    FGameplayDebuggerAddonBase::GetInputHandlerDescription
              ((FGameplayDebuggerAddonBase *)this,&local_48,0);
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_2,&FColor::White,fVar3,L"[{yellow}%s{white}]: Display around %s actor");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((((this->DataPack).LockedReferenceLocation.field0_0x0._s_0.X != __real_7fefffffffffffff) ||
      (__real_7fefffffffffffff != (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.Y)) ||
     (__real_7fefffffffffffff != (this->DataPack).LockedReferenceLocation.field0_0x0._s_0.Z)) {
    ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_58,L"Locked at %s");
    bVar2 = true;
    bVar1 = true;
  }
  FGameplayDebuggerAddonBase::GetInputHandlerDescription
            ((FGameplayDebuggerAddonBase *)this,local_38,2);
  FGameplayDebuggerCanvasContext::PrintfImpl
            (param_2,&FColor::White,fVar3,L"[{yellow}%s{white}]: %s");
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// MakeInstance @ 146fbb7e0

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_Navmesh::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGameplayDebuggerCategory_Navmesh *this;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar3;
  TRawPtrProxy<FGameplayDebuggerCategory_Navmesh> local_res8;
  
  this = ::operator_new(0x240);
  if (this == (FGameplayDebuggerCategory_Navmesh *)0x0) {
    local_res8.Object = (FGameplayDebuggerCategory_Navmesh *)0x0;
  }
  else {
    local_res8.Object = FGameplayDebuggerCategory_Navmesh(this);
    if ((((local_res8.Object != (FGameplayDebuggerCategory_Navmesh *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FGameplayDebuggerCategory,1>::
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_Navmesh>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnDataPackReplicated @ 146fbcc50

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
FGameplayDebuggerCategory_Navmesh::OnDataPackReplicated
          (FGameplayDebuggerCategory_Navmesh *this,int param_1)

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

// RetrieveRelativeTilesToDisplay @ 146fce330

void __thiscall
FGameplayDebuggerCategory_Navmesh::RetrieveRelativeTilesToDisplay
          (FGameplayDebuggerCategory_Navmesh *this,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 1;
  if (1 < FGameplayDebuggerCategoryNavmeshTweakables::DisplaySize) {
    uVar8 = FGameplayDebuggerCategoryNavmeshTweakables::DisplaySize;
  }
  iVar9 = (~uVar8 & 1) + uVar8;
  iVar6 = iVar9 * iVar9;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar6,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  uVar8 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      iVar3 = (int)uVar8 / iVar9;
      iVar5 = (int)uVar8 % iVar9;
      uVar4 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(ulonglong *)((param_1->AllocatorInstance).Data + lVar7 * 8) =
           CONCAT44(iVar3 - (iVar9 >> 1),iVar5 - (iVar9 >> 1));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  return;
}

// ToggleLockedReferenceLocation @ 146fd9a10

void __thiscall
FGameplayDebuggerCategory_Navmesh::ToggleLockedReferenceLocation
          (FGameplayDebuggerCategory_Navmesh *this)

{
  this->bToggleLockedReferenceLocation = true;
  return;
}

