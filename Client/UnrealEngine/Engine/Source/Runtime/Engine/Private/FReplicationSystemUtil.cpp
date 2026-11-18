// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// operator() @ 14801a700

void __thiscall
`UE::Net::FReplicationSystemUtil::RemoveDependentActor'::__l2::<lambda_1>::operator()
          (void *this,UReplicationSystem *param_1)

{
  UObjectReplicationBridge *this_00;
  FNetRefHandle_u_0 local_res10;
  undefined8 local_res18;
  FNetRefHandle_u_0 local_res20;
  
  if ((param_1->bIsServer != 0) &&
     (this_00 = UReplicationSystem::GetReplicationBridge(param_1),
     this_00 != (UObjectReplicationBridge *)0x0)) {
    local_res18 = *(undefined8 *)this;
    UObjectReplicationBridge::GetReplicatedRefHandle(this_00,(FNetHandle)&local_res10);
    if (local_res10.Value != 0) {
      local_res18 = *(undefined8 *)((longlong)this + 8);
      UObjectReplicationBridge::GetReplicatedRefHandle(this_00,(FNetHandle)&local_res20);
      UObjectReplicationBridge::RemoveDependentObject
                (this_00,(FNetRefHandle)local_res10,(FNetRefHandle)local_res20);
    }
  }
  return;
}

// operator() @ 14801aca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Net::FReplicationSystemUtil::StopReplicatingActorComponent'::__l2::<lambda_1>::operator()
          (void *this,UReplicationSystem *param_1)

{
  int iVar1;
  longlong lVar2;
  UObjectReplicationBridge *this_00;
  UClass *pUVar3;
  FNetRefHandle_u_0 local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  this_00 = UReplicationSystem::GetReplicationBridge(param_1);
  if (this_00 != (UObjectReplicationBridge *)0x0) {
    pUVar3 = UEngineReplicationBridge::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      lVar2 = *(longlong *)this;
      UObjectReplicationBridge::GetReplicatedRefHandle
                (this_00,(UObject *)&local_res18._s_0,(EGetRefHandleFlags)lVar2);
      if (local_res18.Value != 0) {
        if (5 < (byte)LogIris._0_1_) {
          UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_28);
          if (lVar2 == 0) {
            ::FString::FString(&local_38,L"None");
          }
          else {
            local_res20 = *(FName *)(lVar2 + 0x18);
            ::FName::ToString(&local_res20,&local_38);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
          local_res20 = (FName)&local_res18;
          `UEngineReplicationBridge::StopReplicatingComponent'::__l5::<lambda_1>::operator()
                    (&local_res20);
        }
        UReplicationBridge::StopReplicatingNetRefHandle
                  ((UReplicationBridge *)this_00,(FNetRefHandle)local_res18,
                   ClearNetPushId|DestroyNetHandle);
      }
    }
  }
  return;
}

// operator() @ 14801b700

void __thiscall
`UE::Net::FReplicationSystemUtil::UpdateSubObjectGroupMemberships'::__l5::<lambda_1>::operator()
          (void *this,UReplicationSystem *param_1)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  UObjectReplicationBridge *this_00;
  ForElementType<FName> FVar4;
  int iVar5;
  FNetRefHandle_u_0 local_res10;
  FObjectKey local_res18;
  FNetObjectGroupHandle_u_0 local_res20;
  
  if (((param_1->bIsServer != 0) &&
      (this_00 = UReplicationSystem::GetReplicationBridge(param_1),
      this_00 != (UObjectReplicationBridge *)0x0)) &&
     (UObjectReplicationBridge::GetReplicatedRefHandle
                (this_00,(UObject *)&local_res10._s_0,
                 (EGetRefHandleFlags)*(undefined8 *)((longlong)this + 8)), local_res10.Value != 0))
  {
    local_res18 = *(FObjectKey *)((longlong)this + 0x10);
    FVar4 = (ForElementType<FName>)
            TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
            ::Find((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                    *)(*(longlong *)this + 0x38),&local_res18);
    if (FVar4 == (ForElementType<FName>)0x0) {
      FVar4 = (ForElementType<FName>)0x0;
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((longlong)FVar4 + 0x28);
      if (*(ForElementType<FName> *)((longlong)FVar4 + 0x20) != (ForElementType<FName>)0x0) {
        FVar4 = *(ForElementType<FName> *)((longlong)FVar4 + 0x20);
      }
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar1 = (ForElementType<FName>)((longlong)FVar4 + (longlong)iVar5 * 8);
    for (; FVar4 != FVar1; FVar4 = (ForElementType<FName>)((longlong)FVar4 + 8)) {
      UReplicationSystem::GetOrCreateSubObjectFilter(param_1,(FName)&local_res20);
      UReplicationSystem::AddToGroup
                (param_1,(FNetObjectGroupHandle)local_res20._s_1,(FNetRefHandle)local_res10._s_0);
    }
  }
  return;
}

// operator() @ 14801b800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::FReplicationSystemUtil::StartReplicatingActorComponent'::__l8::<lambda_1>::operator()
          (void *this,UReplicationSystem *param_1)

{
  int iVar1;
  UEngineReplicationBridge *this_00;
  UClass *pUVar2;
  longlong local_res10;
  UActorComponent *local_res18 [2];
  
  if ((param_1->bIsServer != 0) &&
     (this_00 = (UEngineReplicationBridge *)UReplicationSystem::GetReplicationBridge(param_1),
     this_00 != (UEngineReplicationBridge *)0x0)) {
    pUVar2 = UEngineReplicationBridge::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      local_res10 = *(longlong *)this;
      UObjectReplicationBridge::GetReplicatedRefHandle
                ((UObjectReplicationBridge *)this_00,(FNetHandle)local_res18);
      if ((local_res18[0] != (UActorComponent *)0x0) &&
         (UEngineReplicationBridge::StartReplicatingComponent
                    (this_00,(FNetRefHandle)&local_res10,local_res18[0]), local_res10 != 0)) {
        **(undefined1 **)((longlong)this + 0x10) = 1;
      }
    }
  }
  return;
}

// operator() @ 14801b8a0

void __thiscall
`UE::Net::FReplicationSystemUtil::StartReplicatingActorComponentSubObject'::__l11::<lambda_1>::
operator()(void *this,UReplicationSystem *param_1)

{
  int iVar1;
  UObjectReplicationBridge *this_00;
  UClass *pUVar2;
  FNetRefHandle_u_0 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  undefined1 local_18;
  
  if ((param_1->bIsServer != 0) &&
     (this_00 = UReplicationSystem::GetReplicationBridge(param_1),
     this_00 != (UObjectReplicationBridge *)0x0)) {
    pUVar2 = UEngineReplicationBridge::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      local_res10 = *(FNetRefHandle_u_0 *)this;
      UObjectReplicationBridge::GetReplicatedRefHandle(this_00,(FNetHandle)&local_res18);
      UObjectReplicationBridge::GetReplicatedRefHandle
                (this_00,(UObject *)&local_res20,
                 (EGetRefHandleFlags)*(undefined8 *)((longlong)this + 8));
      if ((local_res18 != 0) && (local_res20 != 0)) {
        local_20 = local_res20;
        local_28 = local_res18;
        local_18 = 1;
        UObjectReplicationBridge::StartReplicatingSubObject
                  (this_00,(UObject *)&local_res10._s_0,
                   *(FSubObjectReplicationParams **)((longlong)this + 0x10),(uchar)&local_28);
        if ((local_res10.Value != 0) &&
           (*(ELifetimeCondition *)((longlong)this + 0x18) != COND_None)) {
          UObjectReplicationBridge::SetSubObjectNetCondition
                    (this_00,(FNetRefHandle)local_res10._s_0,
                     *(ELifetimeCondition *)((longlong)this + 0x18));
        }
      }
    }
  }
  return;
}

// operator() @ 14801b9a0

void __thiscall
`UE::Net::FReplicationSystemUtil::StartReplicatingActorSubObject'::__l11::<lambda_1>::operator()
          (void *this,UReplicationSystem *param_1)

{
  int iVar1;
  UObjectReplicationBridge *this_00;
  UClass *pUVar2;
  FNetRefHandle_u_0 local_res10;
  longlong local_res18 [2];
  longlong local_28 [2];
  undefined1 local_18;
  
  if ((param_1->bIsServer != 0) &&
     (this_00 = UReplicationSystem::GetReplicationBridge(param_1),
     this_00 != (UObjectReplicationBridge *)0x0)) {
    pUVar2 = UEngineReplicationBridge::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      local_res10 = *(FNetRefHandle_u_0 *)this;
      UObjectReplicationBridge::GetReplicatedRefHandle(this_00,(FNetHandle)local_res18);
      if (local_res18[0] != 0) {
        local_28[0] = local_res18[0];
        local_28[1] = 0;
        local_18 = 0;
        UObjectReplicationBridge::StartReplicatingSubObject
                  (this_00,(UObject *)&local_res10._s_0,
                   *(FSubObjectReplicationParams **)((longlong)this + 8),(uchar)local_28);
        if ((local_res10.Value != 0) &&
           (*(ELifetimeCondition *)((longlong)this + 0x10) != COND_None)) {
          UObjectReplicationBridge::SetSubObjectNetCondition
                    (this_00,(FNetRefHandle)local_res10._s_0,
                     *(ELifetimeCondition *)((longlong)this + 0x10));
        }
      }
    }
  }
  return;
}

// operator() @ 14801c7c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::FReplicationSystemUtil::AddDependentActor'::__l2::<lambda_2>::operator()
          (void *this,UReplicationSystem *param_1)

{
  int iVar1;
  bool bVar2;
  UEngineReplicationBridge *this_00;
  UClass *pUVar3;
  FNetRefHandle FVar4;
  FNetRefHandle_u_0 local_res10;
  FNetRefHandle_u_0 local_res18;
  longlong local_res20;
  
  if ((param_1->bIsServer != 0) &&
     (this_00 = (UEngineReplicationBridge *)UReplicationSystem::GetReplicationBridge(param_1),
     this_00 != (UEngineReplicationBridge *)0x0)) {
    pUVar3 = UEngineReplicationBridge::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      local_res10 = *(FNetRefHandle_u_0 *)this;
      UObjectReplicationBridge::GetReplicatedRefHandle
                ((UObjectReplicationBridge *)this_00,(FNetHandle)&local_res18);
      if (local_res18.Value != 0) {
        UObjectReplicationBridge::GetReplicatedRefHandle
                  ((UObjectReplicationBridge *)this_00,(UObject *)&local_res10._s_0,
                   (EGetRefHandleFlags)*(undefined8 *)((longlong)this + 8));
        if (local_res10.Value == 0) {
          FVar4 = UEngineReplicationBridge::StartReplicatingActor(this_00,(AActor *)&local_res20);
                    /* WARNING: Load size is inaccurate */
          local_res10._s_0 = *FVar4.field0_0x0;
          if ((local_res10.Value == 0) &&
             (local_res20 = (longlong)this + 8,
             bVar2 = ``UE::Net::FReplicationSystemUtil::AddDependentActor'::__l2::<lambda_2>::
                     operator()'::__l11::<lambda_1>::operator()(&local_res20), !bVar2)) {
            return;
          }
        }
        UObjectReplicationBridge::AddDependentObject
                  ((UObjectReplicationBridge *)this_00,(FNetRefHandle)local_res18,
                   (FNetRefHandle)local_res10._s_0,
                   *(EDependentObjectSchedulingHint *)((longlong)this + 0x10));
      }
    }
  }
  return;
}

// AddDependentActor @ 14801f910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::FReplicationSystemUtil::AddDependentActor(AActor *param_1,AActor *param_2)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  AActor *local_res8;
  int local_res10;
  int iStackX_14;
  AActor *local_res18 [2];
  AActor **local_48;
  AActor **local_40;
  code *local_38;
  undefined1 *local_30;
  undefined1 local_28 [8];
  AActor *local_20;
  undefined1 local_18;
  
  local_res8 = param_1;
  local_res18[0] = param_2;
  if ((param_1 == (AActor *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\ReplicationSystemUtil.cpp"
                         ,0x229,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = AActor::GetWorld(local_res8);
  if (((pUVar4 != (UWorld *)0x0) &&
      (pUVar1 = (pUVar4->NetDriver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) &&
     (pUVar1->bIsUsingIris != false)) {
    FNetHandleManager::GetNetHandle((UObject *)&local_res10);
    if ((local_res10 == 0) && (iStackX_14 == 0)) {
      local_48 = &local_res8;
      local_40 = local_res18;
      bVar3 = `UE::Net::FReplicationSystemUtil::AddDependentActor'::__l13::<lambda_1>::operator()
                        (&local_48);
      if (!bVar3) {
        return;
      }
    }
    local_20 = local_res18[0];
    local_30 = local_28;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::AddDependentActor'::__l2::<lambda_2>,void,UReplicationSystem_*>
               ::Call;
    local_18 = 0;
    ForEachReplicationSystem
              (GEngine,pUVar4,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_38);
  }
  return;
}

// AddDependentActor @ 14801fa20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::AddDependentActor
          (AActor *param_1,AActor *param_2,EDependentObjectSchedulingHint param_3)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  AActor *local_res8;
  AActor *local_res10;
  int local_res20;
  int iStackX_24;
  AActor **local_48;
  AActor **local_40;
  code *local_38;
  undefined1 *local_30;
  undefined1 local_28 [8];
  AActor *local_20;
  EDependentObjectSchedulingHint local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (AActor *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\ReplicationSystemUtil.cpp"
                         ,0x229,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = AActor::GetWorld(local_res8);
  if (((pUVar4 != (UWorld *)0x0) &&
      (pUVar1 = (pUVar4->NetDriver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) &&
     (pUVar1->bIsUsingIris != false)) {
    FNetHandleManager::GetNetHandle((UObject *)&local_res20);
    if ((local_res20 == 0) && (iStackX_24 == 0)) {
      local_48 = &local_res8;
      local_40 = &local_res10;
      bVar3 = `UE::Net::FReplicationSystemUtil::AddDependentActor'::__l13::<lambda_1>::operator()
                        (&local_48);
      if (!bVar3) {
        return;
      }
    }
    local_20 = local_res10;
    local_30 = local_28;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::AddDependentActor'::__l2::<lambda_2>,void,UReplicationSystem_*>
               ::Call;
    local_18 = param_3;
    ForEachReplicationSystem
              (GEngine,pUVar4,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_38);
  }
  return;
}

// ClearCullDistanceOverride @ 1480240d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::FReplicationSystemUtil::ClearCullDistanceOverride(AActor *param_1)

{
  int local_res10;
  int iStackX_14;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  FNetHandleManager::GetNetHandle((UObject *)&local_res10);
  if ((local_res10 != 0) || (iStackX_14 != 0)) {
    local_10 = local_res18;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::ClearCullDistanceOverride'::__l2::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  }
  return;
}

// FlushNetDormancy @ 148032ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::FlushNetDormancy
          (UReplicationSystem *param_1,AActor *param_2,bool param_3)

{
  UObjectReplicationBridge *this;
  int local_res8;
  int iStackX_c;
  AActor *local_res10 [2];
  AActor **local_res20;
  FNetRefHandle_u_0 local_18 [2];
  
  if ((param_1 != (UReplicationSystem *)0x0) && (param_1->bIsServer != 0)) {
    local_res10[0] = param_2;
    if (param_2->bActorInitialized == '\0') {
      if (5 < (byte)LogIris._0_1_) {
        if (param_2->_padding_ == 0) {
          ::FString::FString((FString *)&local_18[0]._s_0,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_2,(FString *)&local_18[0]._s_0,(UObject *)0x0,None)
          ;
        }
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if ((void *)local_18[0].Value != (void *)0x0) {
          FMemory::Free((void *)local_18[0]);
          return;
        }
      }
    }
    else {
      if (param_2->bReplicates == '\0') {
        local_res20 = local_res10;
        `UE::Net::FReplicationSystemUtil::FlushNetDormancy'::__l29::<lambda_1>::operator()
                  (&local_res20);
        return;
      }
      if ((param_3) && (((param_2->field_0x5d & 0x18) - 8 & 0xf7) == 0)) {
        StartReplicatingActor(param_2);
      }
      FNetHandleManager::GetNetHandle((UObject *)&local_res8);
      if ((((local_res8 != 0) || (iStackX_c != 0)) &&
          (this = UReplicationSystem::GetReplicationBridge(param_1),
          this != (UObjectReplicationBridge *)0x0)) &&
         (UObjectReplicationBridge::GetReplicatedRefHandle(this,(FNetHandle)local_18),
         local_18[0] != 0)) {
        UObjectReplicationBridge::NetFlushDormantObject(this,(FNetRefHandle)local_18[0]);
      }
    }
  }
  return;
}

// ForEachBridge @ 148033810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::ForEachBridge
          (UWorld *param_1,TFunctionRef<void___cdecl(UEngineReplicationBridge_*)> *param_2,
          EType param_3)

{
  int iVar1;
  UGameInstance *this;
  UReplicationSystem *this_00;
  byte bVar2;
  UEngine *this_01;
  FWorldContext *pFVar3;
  UObjectReplicationBridge *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  UEngineReplicationBridge *local_res8;
  
  if ((((param_1 != (UWorld *)0x0) &&
       (this = (param_1->OwningGameInstance).field0_0x0.DebugPtr, this != (UGameInstance *)0x0)) &&
      (this_01 = UGameInstance::GetEngine(this), this_01 != (UEngine *)0x0)) &&
     (pFVar3 = UEngine::GetWorldContextFromWorld(this_01,param_1), pFVar3 != (FWorldContext *)0x0))
  {
    pFVar5 = (pFVar3->ActiveNetDrivers).AllocatorInstance.Data;
    iVar1 = (pFVar3->ActiveNetDrivers).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar3->ActiveNetDrivers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedNetDriver_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if ((*(longlong *)pFVar5 == 0) ||
         (this_00 = *(UReplicationSystem **)(*(longlong *)pFVar5 + 0x9b0),
         this_00 == (UReplicationSystem *)0x0)) {
LAB_14803390a:
        pFVar5 = pFVar5 + 0x10;
      }
      else {
        if (param_3 == Any) {
LAB_1480338e7:
          pUVar4 = UReplicationSystem::GetReplicationBridge(this_00);
          local_res8 = CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>(pUVar4);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
          goto LAB_14803390a;
        }
        if (param_3 == Client) {
          bVar2 = ~this_00->bIsServer;
LAB_1480338e1:
          if ((bVar2 & 1) == 0) goto LAB_14803390a;
          goto LAB_1480338e7;
        }
        if (param_3 == Server) {
          bVar2 = this_00->field_0x50;
          goto LAB_1480338e1;
        }
        `UE::Net::Private::DoesTypeMatch'::__l8::<lambda_1>::operator()(&local_res8);
        pFVar5 = pFVar5 + 0x10;
      }
    }
  }
  return;
}

// ForEachReplicationSystem @ 148034240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::ForEachReplicationSystem
          (UEngine *param_1,UWorld *param_2,
          TFunctionRef<void___cdecl(UReplicationSystem_*)> *param_3)

{
  int iVar1;
  longlong lVar2;
  FWorldContext *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong local_res8;
  
  if (((param_1 != (UEngine *)0x0) && (param_2 != (UWorld *)0x0)) &&
     (pFVar3 = UEngine::GetWorldContextFromWorld(param_1,param_2), pFVar3 != (FWorldContext *)0x0))
  {
    pFVar4 = (pFVar3->ActiveNetDrivers).AllocatorInstance.Data;
    iVar1 = (pFVar3->ActiveNetDrivers).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar3->ActiveNetDrivers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedNetDriver_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar4 == pFVar5) break;
      if ((*(longlong *)pFVar4 != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)pFVar4 + 0x9b0), lVar2 != 0)) {
        local_res8 = lVar2;
        (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8);
      }
      pFVar4 = pFVar4 + 0x10;
    }
  }
  return;
}

// ForEachReplicationSystem @ 148034300

void __cdecl
UE::Net::FReplicationSystemUtil::ForEachReplicationSystem
          (TFunctionRef<void___cdecl(UReplicationSystem_*)> *param_1)

{
  UReplicationSystem **ppUVar1;
  UReplicationSystem *local_res10;
  TArrayView<UReplicationSystem_*,int> local_18;
  
  FReplicationSystemFactory::GetAllReplicationSystems(&local_18);
  for (ppUVar1 = local_18.DataPtr; ppUVar1 != local_18.DataPtr + local_18.ArrayNum;
      ppUVar1 = ppUVar1 + 1) {
    local_res10 = *ppUVar1;
    if (local_res10 != (UReplicationSystem *)0x0) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res10);
    }
  }
  return;
}

// ForEachSystem @ 148034370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::ForEachSystem
          (UWorld *param_1,TFunctionRef<void___cdecl(UReplicationSystem_*)> *param_2,EType param_3)

{
  int iVar1;
  UGameInstance *this;
  longlong lVar2;
  byte bVar3;
  UEngine *this_00;
  FWorldContext *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong local_res8;
  
  if ((((param_1 != (UWorld *)0x0) &&
       (this = (param_1->OwningGameInstance).field0_0x0.DebugPtr, this != (UGameInstance *)0x0)) &&
      (this_00 = UGameInstance::GetEngine(this), this_00 != (UEngine *)0x0)) &&
     (pFVar4 = UEngine::GetWorldContextFromWorld(this_00,param_1), pFVar4 != (FWorldContext *)0x0))
  {
    pFVar5 = (pFVar4->ActiveNetDrivers).AllocatorInstance.Data;
    iVar1 = (pFVar4->ActiveNetDrivers).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar4->ActiveNetDrivers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedNetDriver_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if ((*(longlong *)pFVar5 == 0) ||
         (lVar2 = *(longlong *)(*(longlong *)pFVar5 + 0x9b0), lVar2 == 0)) {
LAB_14803445a:
        pFVar5 = pFVar5 + 0x10;
      }
      else {
        if (param_3 == Any) {
LAB_148034447:
          local_res8 = lVar2;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
          goto LAB_14803445a;
        }
        if (param_3 == Client) {
          bVar3 = ~*(byte *)(lVar2 + 0x50);
LAB_148034441:
          if ((bVar3 & 1) == 0) goto LAB_14803445a;
          goto LAB_148034447;
        }
        if (param_3 == Server) {
          bVar3 = *(byte *)(lVar2 + 0x50);
          goto LAB_148034441;
        }
        `UE::Net::Private::DoesTypeMatch'::__l8::<lambda_1>::operator()(&local_res8);
        pFVar5 = pFVar5 + 0x10;
      }
    }
  }
  return;
}

// ForEachSystemAndBridge @ 148034480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::ForEachSystemAndBridge
          (UWorld *param_1,
          TFunctionRef<void___cdecl(UReplicationSystem_*,UEngineReplicationBridge_*)> *param_2,
          EType param_3)

{
  int iVar1;
  UGameInstance *this;
  UReplicationSystem *this_00;
  byte bVar2;
  UEngine *this_01;
  FWorldContext *pFVar3;
  UObjectReplicationBridge *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  UEngineReplicationBridge *local_res8;
  UReplicationSystem *local_res20;
  
  if ((((param_1 != (UWorld *)0x0) &&
       (this = (param_1->OwningGameInstance).field0_0x0.DebugPtr, this != (UGameInstance *)0x0)) &&
      (this_01 = UGameInstance::GetEngine(this), this_01 != (UEngine *)0x0)) &&
     (pFVar3 = UEngine::GetWorldContextFromWorld(this_01,param_1), pFVar3 != (FWorldContext *)0x0))
  {
    pFVar6 = (pFVar3->ActiveNetDrivers).AllocatorInstance.Data;
    iVar1 = (pFVar3->ActiveNetDrivers).ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar3->ActiveNetDrivers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedNetDriver_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar6 == pFVar5) break;
      if ((*(longlong *)pFVar6 == 0) ||
         (this_00 = *(UReplicationSystem **)(*(longlong *)pFVar6 + 0x9b0),
         this_00 == (UReplicationSystem *)0x0)) {
LAB_148034593:
        pFVar6 = pFVar6 + 0x10;
      }
      else {
        if (param_3 == Any) {
LAB_148034564:
          pUVar4 = UReplicationSystem::GetReplicationBridge(this_00);
          local_res8 = CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>(pUVar4);
          local_res20 = this_00;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20,&local_res8);
          goto LAB_148034593;
        }
        if (param_3 == Client) {
          bVar2 = ~this_00->bIsServer;
LAB_14803455e:
          if ((bVar2 & 1) == 0) goto LAB_148034593;
          goto LAB_148034564;
        }
        if (param_3 == Server) {
          bVar2 = this_00->field_0x50;
          goto LAB_14803455e;
        }
        `UE::Net::Private::DoesTypeMatch'::__l8::<lambda_1>::operator()(&local_res8);
        pFVar6 = pFVar6 + 0x10;
      }
    }
  }
  return;
}

// GetActorReplicationBridge @ 148035050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __cdecl
UE::Net::FReplicationSystemUtil::GetActorReplicationBridge(AActor *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UNetDriver *pUVar3;
  UEngineReplicationBridge *pUVar4;
  UClass *pUVar5;
  
  if (param_1 == (AActor *)0x0) {
    return (UEngineReplicationBridge *)0x0;
  }
  pUVar2 = AActor::GetWorld(param_1);
  if (pUVar2 == (UWorld *)0x0) {
    return (UEngineReplicationBridge *)0x0;
  }
  pUVar3 = AActor::GetNetDriver(param_1);
  if (pUVar3 == (UNetDriver *)0x0) {
    return (UEngineReplicationBridge *)0x0;
  }
  if (pUVar3->ReplicationSystem != (UReplicationSystem *)0x0) {
    pUVar4 = (UEngineReplicationBridge *)
             UReplicationSystem::GetReplicationBridge(pUVar3->ReplicationSystem);
    if (pUVar4 != (UEngineReplicationBridge *)0x0) {
      pUVar5 = UEngineReplicationBridge::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
    return (UEngineReplicationBridge *)0x0;
  }
  return (UEngineReplicationBridge *)0x0;
}

// GetActorReplicationBridge @ 1480350d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __cdecl
UE::Net::FReplicationSystemUtil::GetActorReplicationBridge(UNetConnection *param_1)

{
  int iVar1;
  UNetDriver *pUVar2;
  UReplicationSystem *this;
  UEngineReplicationBridge *pUVar3;
  UClass *pUVar4;
  
  if (((param_1 != (UNetConnection *)0x0) &&
      (pUVar2 = (param_1->Driver).field0_0x0.DebugPtr, pUVar2 != (UNetDriver *)0x0)) &&
     (this = pUVar2->ReplicationSystem, this != (UReplicationSystem *)0x0)) {
    pUVar3 = (UEngineReplicationBridge *)UReplicationSystem::GetReplicationBridge(this);
    if (pUVar3 != (UEngineReplicationBridge *)0x0) {
      pUVar4 = UEngineReplicationBridge::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return pUVar3;
      }
    }
    return (UEngineReplicationBridge *)0x0;
  }
  return (UEngineReplicationBridge *)0x0;
}

// GetEngineReplicationBridge @ 1480356d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEngineReplicationBridge * __cdecl
UE::Net::FReplicationSystemUtil::GetEngineReplicationBridge(UWorld *param_1)

{
  int iVar1;
  UNetDriver *pUVar2;
  UReplicationSystem *this;
  UEngineReplicationBridge *pUVar3;
  UClass *pUVar4;
  
  if (((param_1 != (UWorld *)0x0) &&
      (pUVar2 = (param_1->NetDriver).field0_0x0.DebugPtr, pUVar2 != (UNetDriver *)0x0)) &&
     (this = pUVar2->ReplicationSystem, this != (UReplicationSystem *)0x0)) {
    pUVar3 = (UEngineReplicationBridge *)UReplicationSystem::GetReplicationBridge(this);
    if (pUVar3 != (UEngineReplicationBridge *)0x0) {
      pUVar4 = UEngineReplicationBridge::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return pUVar3;
      }
    }
  }
  return (UEngineReplicationBridge *)0x0;
}

// GetNetHandle @ 148036190

FNetHandle __cdecl UE::Net::FReplicationSystemUtil::GetNetHandle(UObject *param_1)

{
  FNetHandleManager::GetNetHandle(param_1);
  return (FNetHandle)(FNetHandle_u_0)param_1;
}

// GetReplicationSystem @ 148037230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReplicationSystem * __cdecl UE::Net::FReplicationSystemUtil::GetReplicationSystem(AActor *param_1)

{
  UWorld *pUVar1;
  UNetDriver *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(param_1);
    if (pUVar1 != (UWorld *)0x0) {
      pUVar2 = AActor::GetNetDriver(param_1);
      if (pUVar2 != (UNetDriver *)0x0) {
        return pUVar2->ReplicationSystem;
      }
    }
  }
  return (UReplicationSystem *)0x0;
}

// GetReplicationSystem @ 148037270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReplicationSystem * __cdecl
UE::Net::FReplicationSystemUtil::GetReplicationSystem(UNetDriver *param_1)

{
  if (param_1 != (UNetDriver *)0x0) {
    return param_1->ReplicationSystem;
  }
  return (UReplicationSystem *)0x0;
}

// GetReplicationSystem @ 148037290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UReplicationSystem * __cdecl UE::Net::FReplicationSystemUtil::GetReplicationSystem(UWorld *param_1)

{
  UNetDriver *pUVar1;
  
  if ((param_1 != (UWorld *)0x0) &&
     (pUVar1 = (param_1->NetDriver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) {
    return pUVar1->ReplicationSystem;
  }
  return (UReplicationSystem *)0x0;
}

// NotifyActorDormancyChange @ 148045a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::NotifyActorDormancyChange
          (UReplicationSystem *param_1,AActor *param_2,ENetDormancy param_3)

{
  byte bVar1;
  UObjectReplicationBridge *this;
  FNetRefHandle_u_0 local_res8;
  
  if ((param_1 != (UReplicationSystem *)0x0) && (param_1->bIsServer != 0)) {
    bVar1 = (param_2->NetDormancy).Value;
    this = UReplicationSystem::GetReplicationBridge(param_1);
    if ((this != (UObjectReplicationBridge *)0x0) &&
       (UObjectReplicationBridge::GetReplicatedRefHandle
                  (this,(UObject *)&local_res8._s_0,(EGetRefHandleFlags)param_2), local_res8 != 0))
    {
      UObjectReplicationBridge::SetObjectWantsToBeDormant(this,(FNetRefHandle)local_res8,1 < bVar1);
    }
  }
  return;
}

// RemoveDependentActor @ 148052660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::FReplicationSystemUtil::RemoveDependentActor(AActor *param_1,AActor *param_2)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  int local_res8;
  int iStackX_c;
  int local_res18;
  int iStackX_1c;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 == (AActor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\ReplicationSystemUtil.cpp"
                       ,600,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = AActor::GetWorld(param_1);
  if (((pUVar4 != (UWorld *)0x0) &&
      (pUVar1 = (pUVar4->NetDriver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) &&
     (pUVar1->bIsUsingIris != false)) {
    FNetHandleManager::GetNetHandle((UObject *)&local_res8);
    FNetHandleManager::GetNetHandle((UObject *)&local_res18);
    if ((local_res8 != 0) || (iStackX_c != 0)) {
      if ((local_res18 != 0) || (iStackX_1c != 0)) {
        local_10 = local_28;
        local_18 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::RemoveDependentActor'::__l2::<lambda_1>,void,UReplicationSystem_*>
                   ::Call;
        ForEachReplicationSystem
                  (GEngine,pUVar4,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
      }
    }
  }
  return;
}

// RemoveSubObjectGroupMembership @ 148053610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::RemoveSubObjectGroupMembership
          (APlayerController *param_1,FName param_2)

{
  UReplicationSystem *this;
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsSpecialNetConditionGroup(param_2);
  if (!bVar1) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x570))(param_1);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x58) != 0)) &&
       (this = *(UReplicationSystem **)(*(longlong *)(lVar2 + 0x58) + 0x9b0),
       this != (UReplicationSystem *)0x0)) {
      UReplicationSystem::SetSubObjectFilterStatus
                (this,param_2,*(FConnectionHandle *)(lVar2 + 0x1eb4),Disallow);
    }
  }
  return;
}

// SetCullDistanceOverride @ 14805ec10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::FReplicationSystemUtil::SetCullDistanceOverride(AActor *param_1,float param_2)

{
  int local_res18;
  int iStackX_1c;
  undefined1 local_38 [8];
  float local_30;
  code *local_28;
  undefined1 *local_20;
  
  FNetHandleManager::GetNetHandle((UObject *)&local_res18);
  if ((local_res18 != 0) || (iStackX_1c != 0)) {
    local_20 = local_38;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::SetCullDistanceOverride'::__l2::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_30 = param_2;
    ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_28);
  }
  return;
}

// SetNetConditionForActorComponent @ 14805ee70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::SetNetConditionForActorComponent
          (UActorComponent *param_1,ELifetimeCondition param_2)

{
  AActor *this;
  UWorld *pUVar1;
  int local_res8;
  int local_resc;
  UActorComponent *local_28;
  ELifetimeCondition local_20;
  code *local_18;
  UActorComponent **local_10;
  
  if ((param_1 != (UActorComponent *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->OwnerPrivate;
    FNetHandleManager::GetNetHandle((UObject *)&local_res8);
    if (((local_res8 != 0) || (local_resc != 0)) &&
       (pUVar1 = AActor::GetWorld(this), pUVar1 != (UWorld *)0x0)) {
      local_10 = &local_28;
      local_18 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::SetNetConditionForActorComponent'::__l11::<lambda_1>,void,UReplicationSystem_*>
                 ::Call;
      local_28 = param_1;
      local_20 = param_2;
      ForEachReplicationSystem
                (GEngine,pUVar1,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
    }
  }
  return;
}

// SetNetConditionForActorSubObject @ 14805ef10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::SetNetConditionForActorSubObject
          (AActor *param_1,UObject *param_2,ELifetimeCondition param_3)

{
  UWorld *pUVar1;
  int local_res8;
  int local_resc;
  UObject *local_28;
  ELifetimeCondition local_20;
  code *local_18;
  UObject **local_10;
  
  if (((((param_1 != (AActor *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) &&
       (param_2 != (UObject *)0x0)) &&
      (((*(uint *)&param_2->field_0x8 >> 0x1e & 1) == 0 &&
       ((FNetHandleManager::GetNetHandle((UObject *)&local_res8), local_res8 != 0 ||
        (local_resc != 0)))))) && (pUVar1 = AActor::GetWorld(param_1), pUVar1 != (UWorld *)0x0)) {
    local_10 = &local_28;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::SetNetConditionForActorSubObject'::__l11::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_28 = param_2;
    local_20 = param_3;
    ForEachReplicationSystem
              (GEngine,pUVar1,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  }
  return;
}

// SetPollFrequency @ 14805f3f0

void __cdecl UE::Net::FReplicationSystemUtil::SetPollFrequency(UObject *param_1,float param_2)

{
  int local_res18;
  int iStackX_1c;
  undefined1 local_38 [8];
  float local_30;
  code *local_28;
  undefined1 *local_20;
  
  FNetHandleManager::GetNetHandle((UObject *)&local_res18);
  if ((local_res18 != 0) || (iStackX_1c != 0)) {
    local_20 = local_38;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::SetPollFrequency'::__l2::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_30 = param_2;
    ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_28);
  }
  return;
}

// SetReplicationCondition @ 14805f460

void __cdecl
UE::Net::FReplicationSystemUtil::SetReplicationCondition
          (FNetHandle param_1,EReplicationCondition param_2,bool param_3)

{
  undefined8 local_28;
  EReplicationCondition local_20;
  undefined1 local_1c;
  code *local_18;
  undefined8 *local_10;
  
  local_28 = *(undefined8 *)param_1.field0_0x0;
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::SetReplicationCondition'::__l2::<lambda_1>,void,UReplicationSystem_*>
             ::Call;
  local_20 = param_2;
  local_1c = param_3;
  ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  return;
}

// SetStaticPriority @ 14805f810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::FReplicationSystemUtil::SetStaticPriority(AActor *param_1,float param_2)

{
  int local_res18;
  int iStackX_1c;
  undefined1 local_38 [8];
  float local_30;
  code *local_28;
  undefined1 *local_20;
  
  FNetHandleManager::GetNetHandle((UObject *)&local_res18);
  if ((local_res18 != 0) || (iStackX_1c != 0)) {
    local_20 = local_38;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::SetStaticPriority'::__l2::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_30 = param_2;
    ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_28);
  }
  return;
}

// StartReplicatingActor @ 148064210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::FReplicationSystemUtil::StartReplicatingActor(AActor *param_1)

{
  int iVar1;
  int iVar2;
  UReplicationSystem *this;
  bool bVar3;
  UWorld *pUVar4;
  FWorldContext *pFVar5;
  UEngineReplicationBridge *this_00;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  bVar3 = false;
  pUVar4 = AActor::GetWorld(param_1);
  if (((pUVar4 != (UWorld *)0x0) && (GEngine != (UEngine *)0x0)) &&
     (pFVar5 = UEngine::GetWorldContextFromWorld(GEngine,pUVar4), pFVar5 != (FWorldContext *)0x0)) {
    pFVar7 = (pFVar5->ActiveNetDrivers).AllocatorInstance.Data;
    iVar1 = (pFVar5->ActiveNetDrivers).ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar5->ActiveNetDrivers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNamedNetDriver_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar7 == pFVar8) break;
      if (((*(longlong *)pFVar7 != 0) &&
          (this = *(UReplicationSystem **)(*(longlong *)pFVar7 + 0x9b0),
          this != (UReplicationSystem *)0x0)) &&
         ((this->bIsServer != 0 &&
          (this_00 = (UEngineReplicationBridge *)UReplicationSystem::GetReplicationBridge(this),
          this_00 != (UEngineReplicationBridge *)0x0)))) {
        pUVar6 = UEngineReplicationBridge::StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if (((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar6->_padding_)) &&
           (UEngineReplicationBridge::StartReplicatingActor(this_00,(AActor *)&local_res20),
           local_res20 != 0)) {
          bVar3 = true;
        }
      }
      pFVar7 = pFVar7 + 0x10;
    }
  }
  if (bVar3) {
    (**(code **)(param_1->_padding_ + 0x630))(param_1,local_res18);
    (**(code **)(param_1->_padding_ + 0x640))(param_1);
  }
  return;
}

// StartReplicatingActorComponent @ 148064cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StartReplicatingActorComponent
          (AActor *param_1,UActorComponent *param_2)

{
  UWorld *pUVar1;
  char local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  UActorComponent *local_18;
  char *local_10;
  
  FNetHandleManager::GetNetHandle((UObject *)local_38);
  local_res18[0] = '\0';
  if ((local_38._0_4_ != 0) || (local_38._4_4_ != 0)) {
    pUVar1 = AActor::GetWorld(param_1);
    if (pUVar1 != (UWorld *)0x0) {
      local_10 = local_res18;
      local_30._8_8_ = local_20;
      local_30._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StartReplicatingActorComponent'::__l8::<lambda_1>,void,UReplicationSystem_*>
           ::Call;
      local_18 = param_2;
      ForEachReplicationSystem
                (GEngine,pUVar1,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)local_30);
    }
    if (local_res18[0] != '\0') {
      (**(code **)(param_2->_padding_ + 0x310))(param_2,local_res20);
      (**(code **)(param_2->_padding_ + 800))(param_2);
    }
  }
  return;
}

// StartReplicatingActorComponentSubObject @ 148064d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StartReplicatingActorComponentSubObject
          (UActorComponent *param_1,UObject *param_2,ELifetimeCondition param_3)

{
  AActor *this;
  UWorld *pUVar1;
  int local_res8;
  int iStackX_c;
  code *local_38;
  undefined1 *local_30;
  undefined1 local_28 [8];
  UActorComponent *local_20;
  UObject *local_18;
  ELifetimeCondition local_10;
  
  this = param_1->OwnerPrivate;
  if ((this != (AActor *)0x0) && (param_3 != COND_Never)) {
    FNetHandleManager::GetNetHandle((UObject *)&local_res8);
    if ((local_res8 != 0) || (iStackX_c != 0)) {
      pUVar1 = AActor::GetWorld(this);
      if (pUVar1 != (UWorld *)0x0) {
        local_30 = local_28;
        local_38 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StartReplicatingActorComponentSubObject'::__l11::<lambda_1>,void,UReplicationSystem_*>
                   ::Call;
        local_20 = param_1;
        local_18 = param_2;
        local_10 = param_3;
        ForEachReplicationSystem
                  (GEngine,pUVar1,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_38);
      }
    }
  }
  return;
}

// StartReplicatingActorSubObject @ 148064e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StartReplicatingActorSubObject
          (AActor *param_1,UObject *param_2,ELifetimeCondition param_3)

{
  UWorld *pUVar1;
  int local_res20;
  int iStackX_24;
  code *local_38;
  undefined1 *local_30;
  undefined1 local_28 [8];
  UObject *local_20;
  ELifetimeCondition local_18;
  
  if ((param_3 != COND_Never) &&
     (((FNetHandleManager::GetNetHandle((UObject *)&local_res20), local_res20 != 0 ||
       (iStackX_24 != 0)) && (pUVar1 = AActor::GetWorld(param_1), pUVar1 != (UWorld *)0x0)))) {
    local_30 = local_28;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StartReplicatingActorSubObject'::__l11::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_20 = param_2;
    local_18 = param_3;
    ForEachReplicationSystem
              (GEngine,pUVar1,(TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_38);
  }
  return;
}

// StartReplicatingActorsInWorldForNetDriver @ 148064ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StartReplicatingActorsInWorldForNetDriver
          (UWorld *param_1,UNetDriver *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  AActor *pAVar4;
  UClass *local_res8;
  TActorIteratorBase<FActorIterator> local_68;
  
  if ((param_1 != (UWorld *)0x0) && (param_1->bIsWorldInitialized != '\0')) {
    local_res8 = Z_Construct_UClass_AActor_NoRegister();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res8);
    }
    local_68.Flags = OnlyActiveLevels|SkipPendingKill;
    local_68.State.bIsSet = false;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res8);
    }
    FActorIteratorState::FActorIteratorState
              (&local_68.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_res8);
    local_68.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<FActorIterator>::operator++(&local_68);
      if ((local_68.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_68.State.TypedValue.ReachedEnd != false) break;
      if ((local_68.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar4 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
      if ((((pAVar4 != (AActor *)0x0) && (((uint)pAVar4->_padding_ >> 0x1e & 1) == 0)) &&
          (pAVar4->ActorHasBegunPlay == HasBegunPlay)) &&
         ((cVar3 = (**(code **)(param_2->_padding_ + 0x488))(param_2,pAVar4), cVar3 != '\0' &&
          (bVar2 = ULevel::IsNetActor(pAVar4), bVar2)))) {
        StartReplicatingActor(pAVar4);
      }
    }
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// StopReplicatingActor @ 148065400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StopReplicatingActor
          (AActor *param_1,FStopReplicatingActorParams *param_2)

{
  FStopReplicatingActorParams *local_res8;
  AActor *local_28;
  FStopReplicatingActorParams local_20;
  code *local_18;
  AActor **local_10;
  
  if (param_1 != (AActor *)0x0) {
    local_res8 = param_2;
    (**(code **)(param_1->_padding_ + 0x638))(param_1,&local_res8);
    (**(code **)(param_1->_padding_ + 0x648))(param_1,param_2->EndPlayReason);
    local_20 = *param_2;
    local_10 = &local_28;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StopReplicatingActor'::__l2::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_28 = param_1;
    ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  }
  return;
}

// StopReplicatingActorComponent @ 1480656a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StopReplicatingActorComponent(UActorComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  UActorComponent *local_res10 [3];
  code *local_18;
  UActorComponent **local_10;
  
  if (param_1 == (UActorComponent *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8922998478192246307>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\ReplicationSystemUtil.cpp"
                       ,0x1dd,"ActorComponent");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(param_1->_padding_ + 0x318))(param_1,local_res8);
    (**(code **)(param_1->_padding_ + 0x328))(param_1);
    local_10 = local_res10;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StopReplicatingActorComponent'::__l2::<lambda_1>,void,UReplicationSystem_*>
               ::Call;
    local_res10[0] = param_1;
    ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  }
  return;
}

// StopReplicatingActorComponentSubObject @ 148065730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StopReplicatingActorComponentSubObject
          (UActorComponent *param_1,UObject *param_2)

{
  UObject *local_res8 [4];
  code *local_18;
  UObject **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StopReplicatingActorSubObject'::__l2::<lambda_1>,void,UReplicationSystem_*>
             ::Call;
  local_res8[0] = param_2;
  ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  return;
}

// StopReplicatingActorSubObject @ 148065770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::StopReplicatingActorSubObject(AActor *param_1,UObject *param_2)

{
  UObject *local_res10 [3];
  code *local_18;
  UObject **local_10;
  
  local_10 = local_res10;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StopReplicatingActorSubObject'::__l2::<lambda_1>,void,UReplicationSystem_*>
             ::Call;
  local_res10[0] = param_2;
  ForEachReplicationSystem((TFunctionRef<void___cdecl(UReplicationSystem_*)> *)&local_18);
  return;
}

// UpdateSubObjectGroupMemberships @ 14806fe40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::UpdateSubObjectGroupMemberships(APlayerController *param_1)

{
  FName *pFVar1;
  int iVar2;
  UReplicationSystem *this;
  FConnectionHandle FVar3;
  FName FVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar6 = (**(code **)(param_1->_padding_ + 0x570))();
  if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x58) != 0)) &&
     (this = *(UReplicationSystem **)(*(longlong *)(lVar6 + 0x58) + 0x9b0),
     this != (UReplicationSystem *)0x0)) {
    pFVar7 = (FName *)(param_1->NetConditionGroups).AllocatorInstance.Data;
    FVar3 = *(FConnectionHandle *)(lVar6 + 0x1eb4);
    iVar2 = (param_1->NetConditionGroups).ArrayNum;
    pFVar1 = pFVar7 + iVar2;
    while( true ) {
      if ((param_1->NetConditionGroups).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      FVar4 = *pFVar7;
      bVar5 = IsSpecialNetConditionGroup(FVar4);
      if (!bVar5) {
        UReplicationSystem::GetOrCreateSubObjectFilter(this,(FName)local_res10);
        UReplicationSystem::SetSubObjectFilterStatus(this,FVar4,FVar3,Allow);
      }
      pFVar7 = pFVar7 + 1;
    }
  }
  return;
}

// UpdateSubObjectGroupMemberships @ 14806ff30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::FReplicationSystemUtil::UpdateSubObjectGroupMemberships(UObject *param_1,UWorld *param_2)

{
  int iVar1;
  UReplicationSystem *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *pUVar6;
  FWorldContext *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  USubsystem *local_38;
  UObject *local_30;
  int local_28;
  int local_24;
  
  if (param_2 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UNetworkSubsystem_NoRegister();
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14806ff76;
  }
  else if (pUVar4 != (UClass *)0x0) {
    GC::MarkAsReachable((UObject *)pUVar4);
LAB_14806ff76:
    pUVar5 = Z_Construct_UClass_UNetworkSubsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14806ffa7;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14806ffa7:
  pUVar6 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_2->SubsystemCollection,pUVar4);
  if (pUVar6 != (USubsystem *)0x0) {
    local_24 = 0;
    local_28 = 0;
    if (param_1 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18[0] = param_1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
      local_24 = local_res10.ObjectSerialNumber;
      local_28 = local_res10.ObjectIndex;
    }
    if ((GEngine != (UEngine *)0x0) &&
       (local_38 = pUVar6, local_30 = param_1,
       pFVar7 = UEngine::GetWorldContextFromWorld(GEngine,param_2), pFVar7 != (FWorldContext *)0x0))
    {
      iVar1 = (pFVar7->ActiveNetDrivers).ArrayNum;
      pFVar8 = (pFVar7->ActiveNetDrivers).AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar7->ActiveNetDrivers).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNamedNetDriver_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (pFVar8 == pFVar9) break;
        if ((*(longlong *)pFVar8 != 0) &&
           (pUVar2 = *(UReplicationSystem **)(*(longlong *)pFVar8 + 0x9b0),
           pUVar2 != (UReplicationSystem *)0x0)) {
          `UE::Net::FReplicationSystemUtil::UpdateSubObjectGroupMemberships'::__l5::<lambda_1>::
          operator()(&local_38,pUVar2);
        }
        pFVar8 = pFVar8 + 0x10;
      }
    }
  }
  return;
}

// operator() @ 150521570

bool __thiscall
`UE::Net::FReplicationSystemUtil::FlushNetDormancy'::__l29::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8922998478192246068>);
  if (bVar2) {
    this_00 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8922998478192246068>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505215fe;
    }
  }
  bVar2 = false;
LAB_1505215fe:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150521d60

bool __thiscall
`UE::Net::FReplicationSystemUtil::AddDependentActor'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8922998478192246221>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    if ((UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8922998478192246221>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150521e4b;
    }
  }
  bVar4 = false;
LAB_150521e4b:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

