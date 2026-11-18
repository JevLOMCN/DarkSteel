// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 19

// FNetBlobManager @ 144229390

FNetBlobManager * __thiscall
UE::Net::Private::FNetBlobManager::FNetBlobManager(FNetBlobManager *this)

{
  (this->BlobHandlerManager)._padding_ = (longlong)&___7FNetBlobHandlerManager_Private_Net_UE__6B_;
  (this->BlobHandlerManager).Handlers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlobHandlerManager).Handlers.ArrayNum = 0;
  (this->BlobHandlerManager).Handlers.ArrayMax = 0;
  (this->AttachmentSendQueue).Manager = (FNetBlobManager *)0x0;
  (this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSendQueue).AttachmentQueue.ArrayNum = 0;
  (this->AttachmentSendQueue).AttachmentQueue.ArrayMax = 0;
  (this->AttachmentSendQueue).ScheduleAsOOBAttachmentQueue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSendQueue).ScheduleAsOOBAttachmentQueue.ArrayNum = 0;
  (this->AttachmentSendQueue).ScheduleAsOOBAttachmentQueue.ArrayMax = 0;
  (this->AttachmentSendQueue).bHasMulticastAttachments = false;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsGoingOutOfScope.Storage.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsGoingOutOfScope.Storage.ArrayNum =
       0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsGoingOutOfScope.Storage.ArrayMax =
       0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsGoingOutOfScope.BitCount = 0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsInScope.Storage.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsInScope.Storage.ArrayNum = 0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsInScope.Storage.ArrayMax = 0;
  (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsInScope.BitCount = 0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.Storage.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.Storage.ArrayNum =
       0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.Storage.ArrayMax =
       0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.BitCount = 0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionIds.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionIds.ArrayNum = 0;
  (this->AttachmentSendQueue).ProcessContext.ConnectionIds.ArrayMax = 0;
  (this->AttachmentSendQueue).ProcessContext.Connections = (FReplicationConnections *)0x0;
  (this->AttachmentSendQueue).ProcessContext.NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->AttachmentSendQueue).ProcessContext.QueueToProcess =
       (TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->RPCHandler).Object = (UObject *)0x0;
  (this->PartialNetObjectAttachmentHandler).Object = (UObject *)0x0;
  (this->NetObjectBlobHandler).Object = (UObject *)0x0;
  *(undefined8 *)&this->RPCWarningThrottler = 0;
  *(undefined8 *)&(this->RPCWarningThrottler).field_0x8 = 0;
  *(undefined8 *)&(this->RPCWarningThrottler).field_0x20 = 0;
  *(undefined4 *)&(this->RPCWarningThrottler).field_0x28 = 0;
  *(undefined4 *)&(this->RPCWarningThrottler).field_0x2c = 0x80;
  *(undefined4 *)&(this->RPCWarningThrottler).field_0x34 = 0;
  *(undefined4 *)&(this->RPCWarningThrottler).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RPCWarningThrottler).field_0x40 = 0;
  *(undefined4 *)&(this->RPCWarningThrottler).field_0x48 = 0;
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  this->Connections = (FReplicationConnections *)0x0;
  this->PartialNetObjectAttachmentHandlerConfig = (UPartialNetObjectAttachmentHandlerConfig *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->bIsServer = false;
  this->bSendAttachmentsWithObject = false;
  this->bAllowObjectReplication = false;
  return this;
}

// AddConnection @ 14422dbf0

void __thiscall UE::Net::Private::FNetBlobManager::AddConnection(FNetBlobManager *this,uint param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  this_00 = (FWeakObjectPtr *)(this->BlobHandlerManager).Handlers.AllocatorInstance.Data;
  iVar2 = (this->BlobHandlerManager).Handlers.ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->BlobHandlerManager).Handlers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNetBlobHandler,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,param_1);
    }
    this_00 = this_00 + 1;
  }
  return;
}

// GetRPCOwner @ 14423e680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::GetRPCOwner
          (FNetBlobManager *this,FRPCOwner *param_1,FSendRPCContext *param_2)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  FNetRefHandle_u_0 FVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FNetRefHandle_u_0 *pFVar7;
  FNetToken FVar8;
  ENetObjectReferenceTraits EVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  FNetObjectReference *pFVar13;
  UObject *pUVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar18;
  uint local_res18 [2];
  uint local_res20 [2];
  int local_1a8;
  int local_1a4;
  longlong local_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FNetRefHandle_u_0 local_140;
  FName local_138;
  FName local_130;
  FNetRefHandle_u_0 local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  longlong *local_e0;
  uint *local_d8;
  longlong *local_d0;
  uint *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FNetObjectReference local_80;
  FNetObjectReference local_70;
  FNetObjectReference local_60;
  FNetObjectReference local_50;
  
  if (param_2->SubObject == (UObject *)0x0) {
    pFVar13 = FObjectReferenceCache::GetOrCreateObjectReference
                        (this->ObjectReferenceCache,&local_80,param_2->RootObject);
    FVar2 = (pFVar13->RefHandle).field0_0x0;
    uVar3 = pFVar13->PathToken;
    uVar4 = pFVar13->Traits;
    (param_1->TargetRef).RefHandle.field0_0x0 = FVar2;
    (param_1->TargetRef).PathToken = (FNetToken)uVar3;
    (param_1->TargetRef).Traits = uVar4;
    (param_1->CallerRef).RefHandle.field0_0x0 = FVar2;
    (param_1->CallerRef).PathToken = (FNetToken)uVar3;
    (param_1->CallerRef).Traits = uVar4;
    bVar10 = GetRootObjectIndicesFromHandle
                       (this,(FNetRefHandle)
                             *(FNetRefHandle_u_0 *)&(param_1->TargetRef).RefHandle.field0_0x0._s_0,
                        &param_1->RootObjectIndex);
    if (bVar10) {
      return true;
    }
    bVar10 = true;
    if (bThrottleRPCWarnings != false) {
      pTVar18 = &this->RPCWarningThrottler;
      local_res18[0] = local_res18[0] & 0xffffff00;
      lVar15 = param_2->Function->_padding_;
      local_1a0 = lVar15;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
      uVar12 = uVar12 + (int)((ulonglong)lVar15 >> 0x20);
      if (*(int *)&(this->RPCWarningThrottler).field_0x8 !=
          *(int *)&(this->RPCWarningThrottler).field_0x34) {
        puVar16 = *(undefined1 **)&(this->RPCWarningThrottler).field_0x40;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = &(this->RPCWarningThrottler).field_0x38;
        }
        iVar17 = *(int *)(puVar16 +
                         (ulonglong)(*(int *)&(this->RPCWarningThrottler).field_0x48 - 1U & uVar12)
                         * 4);
        if (iVar17 != -1) {
          do {
            lVar15 = *(longlong *)&pTVar18->field_0x0 + (longlong)iVar17 * 0x14;
            if (*(longlong *)(*(longlong *)&pTVar18->field_0x0 + (longlong)iVar17 * 0x14) ==
                local_1a0) {
              if (lVar15 != 0) goto LAB_14423e7c3;
              break;
            }
            iVar17 = *(int *)(lVar15 + 0xc);
          } while (iVar17 != -1);
        }
      }
      local_e0 = &local_1a0;
      local_d8 = local_res18;
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      EmplaceByHash<TPairInitializer<FName_&&,bool_&&>_>
                ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                  *)pTVar18,(uint)&local_1a8,(TPairInitializer<FName_&&,bool_&&> *)(ulonglong)uVar12
                 ,(bool *)&local_e0);
      lVar15 = *(longlong *)&pTVar18->field_0x0 + (longlong)local_1a8 * 0x14;
LAB_14423e7c3:
      bVar10 = *(char *)(lVar15 + 8) == '\0';
      *(undefined1 *)(lVar15 + 8) = 1;
    }
    if ((byte)LogIris._0_1_ < 3) {
      return false;
    }
    if (!bVar10) {
      return false;
    }
    local_140._s_0 = *(FNetRefHandle_u_0_s_0 *)&(param_1->CallerRef).RefHandle.field0_0x0;
    FNetRefHandle::ToString((FNetRefHandle *)&local_140._s_0,&local_c0);
    pUVar14 = param_2->RootObject;
    if (pUVar14 == (UObject *)0x0) {
      ::FString::FString(&local_180,L"None");
    }
    else {
      local_138.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
      local_138.Number = *(uint *)&pUVar14->field_0x1c;
      ::FName::ToString(&local_138,&local_180);
    }
    local_130 = (FName)param_2->Function->_padding_;
    ::FName::ToString(&local_130,&local_100);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    local_90.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
      local_90.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    }
  }
  else {
    FObjectReferenceCache::GetObjectReferenceHandleFromObject
              (this->ObjectReferenceCache,(UObject *)local_198,
               (EGetRefHandleFlags)param_2->SubObject);
    if (local_198._0_8_ != 0) {
      pFVar13 = FObjectReferenceCache::GetOrCreateObjectReference
                          (this->ObjectReferenceCache,&local_70,param_2->SubObject);
      FVar2 = (pFVar13->RefHandle).field0_0x0;
      uVar5 = pFVar13->PathToken;
      uVar6 = pFVar13->Traits;
      (param_1->TargetRef).RefHandle.field0_0x0 = FVar2;
      (param_1->TargetRef).PathToken = (FNetToken)uVar5;
      (param_1->TargetRef).Traits = uVar6;
      (param_1->CallerRef).RefHandle.field0_0x0 = FVar2;
      (param_1->CallerRef).PathToken = (FNetToken)uVar5;
      (param_1->CallerRef).Traits = uVar6;
      if ((((local_198._0_8_ ^ (param_1->TargetRef).RefHandle.field0_0x0.Value) & 0x3fffffffffffff)
           != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutOwnerInfo.TargetRef.GetRefHandle() == SubObjectNetRef",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                              ,0x11b,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        uVar11 = (*pcVar1)();
        return (bool)uVar11;
      }
      pFVar7 = &(param_1->TargetRef).RefHandle.field0_0x0;
      local_128 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)&pFVar7->_s_0;
      if (ZPULL(local_128,0,0x36) == 0 && pFVar7.ReplicationSystemId == 0) {
        bVar10 = false;
      }
      else {
        this_00 = this->NetRefHandleManager;
        uVar12 = FNetRefHandleManager::GetInternalIndex(this_00,(FNetRefHandle)local_128._s_0);
        if (uVar12 == 0) {
          bVar10 = false;
        }
        else {
          local_198._8_8_ = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar12);
          if (((FReplicatedObjectData *)local_198._8_8_)->SubObjectRootIndex == 0) {
            FNetRefHandle::ToString((FNetRefHandle *)&local_128._s_0,&local_b0);
            pUVar14 = FNetRefHandleManager::GetReplicatedObjectInstance
                                (this->NetRefHandleManager,uVar12);
            if (pUVar14 == (UObject *)0x0) {
              ::FString::FString(&local_170,L"None");
            }
            else {
              local_120.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
              local_120.Number = *(uint *)&pUVar14->field_0x1c;
              ::FName::ToString(&local_120,&local_170);
            }
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ObjectData.SubObjectRootIndex != FNetRefHandleManager::InvalidInternalIndex"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                                ,0x160,
                                L"SubObject %s (index:%u) (netref:%s) does not have a rootobject");
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar1 = (code *)swi(3);
              uVar11 = (*pcVar1)();
              return (bool)uVar11;
            }
          }
          bVar10 = *(uint *)(local_198._8_8_ + 0x28) != 0;
          param_1->RootObjectIndex = *(uint *)(local_198._8_8_ + 0x28);
          param_1->SubObjectIndex = uVar12;
        }
      }
      if (bVar10 != false) {
        return bVar10;
      }
    }
    pFVar13 = FObjectReferenceCache::GetOrCreateObjectReference
                        (this->ObjectReferenceCache,&local_60,param_2->SubObject);
    FVar8.field0_0x0 = (pFVar13->PathToken).field0_0x0;
    EVar9 = pFVar13->Traits;
    (param_1->TargetRef).RefHandle.field0_0x0 = (pFVar13->RefHandle).field0_0x0;
    (param_1->TargetRef).PathToken = (FNetToken)FVar8.field0_0x0;
    (param_1->TargetRef).Traits = EVar9;
    pFVar13 = FObjectReferenceCache::GetOrCreateObjectReference
                        (this->ObjectReferenceCache,&local_50,param_2->RootObject);
    FVar8.field0_0x0 = (pFVar13->PathToken).field0_0x0;
    EVar9 = pFVar13->Traits;
    (param_1->CallerRef).RefHandle.field0_0x0 = (pFVar13->RefHandle).field0_0x0;
    (param_1->CallerRef).PathToken = (FNetToken)FVar8.field0_0x0;
    (param_1->CallerRef).Traits = EVar9;
    bVar10 = GetRootObjectIndicesFromHandle
                       (this,(FNetRefHandle)
                             *(FNetRefHandle_u_0 *)&(param_1->CallerRef).RefHandle.field0_0x0._s_0,
                        &param_1->RootObjectIndex);
    if (bVar10) {
      return true;
    }
    bVar10 = true;
    if (bThrottleRPCWarnings != false) {
      pTVar18 = &this->RPCWarningThrottler;
      local_res20[0] = local_res20[0] & 0xffffff00;
      lVar15 = param_2->Function->_padding_;
      local_188 = lVar15;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
      uVar12 = uVar12 + (int)((ulonglong)lVar15 >> 0x20);
      if (*(int *)&(this->RPCWarningThrottler).field_0x8 !=
          *(int *)&(this->RPCWarningThrottler).field_0x34) {
        puVar16 = *(undefined1 **)&(this->RPCWarningThrottler).field_0x40;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = &(this->RPCWarningThrottler).field_0x38;
        }
        iVar17 = *(int *)(puVar16 +
                         (ulonglong)(*(int *)&(this->RPCWarningThrottler).field_0x48 - 1U & uVar12)
                         * 4);
        if (iVar17 != -1) {
          do {
            lVar15 = *(longlong *)&pTVar18->field_0x0 + (longlong)iVar17 * 0x14;
            if (*(longlong *)(*(longlong *)&pTVar18->field_0x0 + (longlong)iVar17 * 0x14) ==
                local_188) {
              if (lVar15 != 0) goto LAB_14423eb93;
              break;
            }
            iVar17 = *(int *)(lVar15 + 0xc);
          } while (iVar17 != -1);
        }
      }
      local_d0 = &local_188;
      local_c8 = local_res20;
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      EmplaceByHash<TPairInitializer<FName_&&,bool_&&>_>
                ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                  *)pTVar18,(uint)&local_1a4,(TPairInitializer<FName_&&,bool_&&> *)(ulonglong)uVar12
                 ,(bool *)&local_d0);
      lVar15 = *(longlong *)&pTVar18->field_0x0 + (longlong)local_1a4 * 0x14;
LAB_14423eb93:
      bVar10 = *(char *)(lVar15 + 8) == '\0';
      *(undefined1 *)(lVar15 + 8) = 1;
    }
    if ((byte)LogIris._0_1_ < 3) {
      return false;
    }
    if (!bVar10) {
      return false;
    }
    local_res18[0] = param_1->SubObjectIndex;
    FNetObjectReference::ToString(&param_1->TargetRef,&local_90);
    local_res20[0] = param_1->RootObjectIndex;
    FNetObjectReference::ToString(&param_1->CallerRef,&local_a0);
    pUVar14 = param_2->SubObject;
    if (pUVar14 == (UObject *)0x0) {
      ::FString::FString(&local_150,L"None");
    }
    else {
      local_118.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
      local_118.Number = *(uint *)&pUVar14->field_0x1c;
      ::FName::ToString(&local_118,&local_150);
    }
    pUVar14 = param_2->RootObject;
    if (pUVar14 == (UObject *)0x0) {
      ::FString::FString(&local_160,L"None");
    }
    else {
      local_110.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
      local_110.Number = *(uint *)&pUVar14->field_0x1c;
      ::FName::ToString(&local_110,&local_160);
    }
    local_108 = (FName)param_2->Function->_padding_;
    ::FName::ToString(&local_108,&local_f0);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetRootObjectAndSubObjectIndicesFromAnyHandle @ 14423efd0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::GetRootObjectAndSubObjectIndicesFromAnyHandle
          (FNetBlobManager *this,FNetRefHandle param_1,uint *param_2,uint *param_3)

{
  FNetRefHandleManager *this_00;
  uint uVar1;
  FReplicatedObjectData *pFVar2;
  
  if (param_1.field0_0x0 != 0) {
    this_00 = this->NetRefHandleManager;
    uVar1 = FNetRefHandleManager::GetInternalIndex(this_00,param_1);
    if (uVar1 != 0) {
      pFVar2 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar1);
      if (pFVar2->SubObjectRootIndex != 0) {
        *param_2 = pFVar2->SubObjectRootIndex;
        *param_3 = uVar1;
        return true;
      }
      *param_2 = uVar1;
      *param_3 = 0;
      return true;
    }
  }
  return false;
}

// GetRootObjectAndSubObjectIndicesFromSubObjectHandle @ 14423f050

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::GetRootObjectAndSubObjectIndicesFromSubObjectHandle
          (FNetBlobManager *this,FNetRefHandle param_1,uint *param_2,uint *param_3)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  UObject *pUVar6;
  FNetRefHandle_u_0 local_res10;
  FName local_58;
  FString local_50;
  FString local_40;
  
  if (param_1.field0_0x0 != 0) {
    this_00 = this->NetRefHandleManager;
    local_res10 = param_1.field0_0x0;
    uVar4 = FNetRefHandleManager::GetInternalIndex(this_00,param_1);
    if (uVar4 != 0) {
      pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar4);
      if (pFVar5->SubObjectRootIndex == 0) {
        FNetRefHandle::ToString((FNetRefHandle *)&local_res10._s_0,&local_40);
        pUVar6 = FNetRefHandleManager::GetReplicatedObjectInstance(this->NetRefHandleManager,uVar4);
        if (pUVar6 == (UObject *)0x0) {
          ::FString::FString(&local_50,L"None");
        }
        else {
          local_58.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
          local_58.Number = *(uint *)&pUVar6->field_0x1c;
          ::FName::ToString(&local_58,&local_50);
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectData.SubObjectRootIndex != FNetRefHandleManager::InvalidInternalIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                           ,0x160,L"SubObject %s (index:%u) (netref:%s) does not have a rootobject")
        ;
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      *param_2 = pFVar5->SubObjectRootIndex;
      *param_3 = uVar4;
      return *param_2 != 0;
    }
  }
  return false;
}

// GetRootObjectIndicesFromHandle @ 14423f1c0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::GetRootObjectIndicesFromHandle
          (FNetBlobManager *this,FNetRefHandle param_1,uint *param_2)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  UObject *pUVar6;
  FNetRefHandle_u_0 local_res10;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  if (param_1.field0_0x0 != 0) {
    this_00 = this->NetRefHandleManager;
    local_res10 = param_1.field0_0x0;
    uVar4 = FNetRefHandleManager::GetInternalIndex(this_00,param_1);
    if (uVar4 != 0) {
      pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar4);
      if (pFVar5->SubObjectRootIndex != 0) {
        FNetRefHandle::ToString((FNetRefHandle *)&local_res10._s_0,&local_28);
        pUVar6 = FNetRefHandleManager::GetReplicatedObjectInstance(this->NetRefHandleManager,uVar4);
        if (pUVar6 == (UObject *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          local_res20.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
          local_res20.Number = *(uint *)&pUVar6->field_0x1c;
          ::FName::ToString(&local_res20,&local_38);
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NetRefHandleManager->GetReplicatedObjectDataNoCheck(ObjectIndex).SubObjectRootIndex == FNetRefHandleManager::InvalidInternalIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                           ,0x149,L"Object %s (index:%u) (netref:%s) is not a rootobject");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      *param_2 = uVar4;
      return true;
    }
  }
  return false;
}

// HasAnyUnprocessedReliableAttachments @ 14423f800

bool __thiscall
UE::Net::Private::FNetBlobManager::HasAnyUnprocessedReliableAttachments(FNetBlobManager *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->AttachmentSendQueue).AttachmentQueue.ArrayNum * 0x30;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x30) {
    if ((*(byte *)(*(longlong *)(pFVar1 + 0x10) + 0xc) & 1) != 0) goto LAB_14423f835;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14423f835:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// HasUnprocessedReliableAttachments @ 14423fcf0

bool __thiscall
UE::Net::Private::FNetBlobManager::HasUnprocessedReliableAttachments
          (FNetBlobManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->AttachmentSendQueue).AttachmentQueue.ArrayNum * 0x30;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x30) {
    if (((*(uint *)(pFVar1 + 4) == param_1) || (*(uint *)(pFVar1 + 8) == param_1)) &&
       ((*(byte *)(*(longlong *)(pFVar1 + 0x10) + 0xc) & 1) != 0)) goto LAB_14423fd27;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14423fd27:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// Init @ 144240300

void __thiscall
UE::Net::Private::FNetBlobManager::Init(FNetBlobManager *this,FNetBlobManagerInitParams *param_1)

{
  FReplicationSystemInternal *pFVar1;
  
  FNetBlobHandlerManager::Init(&this->BlobHandlerManager);
  this->ReplicationSystem = param_1->ReplicationSystem;
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal(param_1->ReplicationSystem);
  this->Connections = &pFVar1->Connections;
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal(param_1->ReplicationSystem);
  this->NetRefHandleManager = &pFVar1->NetRefHandleManager;
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal(param_1->ReplicationSystem);
  this->ObjectReferenceCache = &pFVar1->ObjectReferenceCache;
  this->bIsServer = this->ReplicationSystem->bIsServer;
  this->bSendAttachmentsWithObject = param_1->bSendAttachmentsWithObject;
  this->bAllowObjectReplication = this->ReplicationSystem->bAllowObjectReplication;
  RegisterDefaultHandlers(this);
  (this->AttachmentSendQueue).Manager = this;
  return;
}

// ProcessNetObjectAttachmentSendQueue @ 144249630

void __thiscall
UE::Net::Private::FNetBlobManager::ProcessNetObjectAttachmentSendQueue
          (FNetBlobManager *this,EProcessMode param_1)

{
  FNetObjectAttachmentSendQueue::PrepareProcessQueue
            (&this->AttachmentSendQueue,this->Connections,this->NetRefHandleManager);
  FNetObjectAttachmentSendQueue::ProcessQueue(&this->AttachmentSendQueue,param_1);
  return;
}

// ProcessOOBNetObjectAttachmentSendQueue @ 144249670

void __thiscall
UE::Net::Private::FNetBlobManager::ProcessOOBNetObjectAttachmentSendQueue
          (FNetBlobManager *this,FNetBitArray *param_1)

{
  FNetObjectAttachmentSendQueue::PrepareAndProcessOOBAttachmentQueue
            (&this->AttachmentSendQueue,this->Connections,this->NetRefHandleManager,param_1);
  return;
}

// QueueNetObjectAttachment @ 144249ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::QueueNetObjectAttachment
          (FNetBlobManager *this,uint param_1,FNetObjectReference *param_2,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_3,
          ENetObjectAttachmentSendPolicyFlags param_4)

{
  FNetRefHandle_u_0_s_0 FVar1;
  FNetObjectAttachment *pFVar2;
  FNetRefHandle_u_0 *pFVar3;
  uint uVar4;
  uint uVar5;
  FNetObjectReference *pFVar6;
  FReplicatedObjectData *pFVar7;
  FNetRefHandle_u_0 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  FNetRefHandle_u_0 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  FNetRefHandle_u_0 local_78 [2];
  FString local_68;
  FNetRefHandle_u_0 local_58 [2];
  FNetRefHandle_u_0 local_48;
  ulonglong uStack_40;
  FNetRefHandle_u_0 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  
  if (param_3->Reference == (FNetObjectAttachment *)0x0) {
    return false;
  }
  if (((this->Connections->ValidConnections).BitCount <= param_1) ||
     ((*(uint *)((this->Connections->ValidConnections).Storage.AllocatorInstance.Data +
                (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0)) {
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    return true;
  }
  local_48._s_0 = (FNetRefHandle_u_0_s_0)(param_2->RefHandle).field0_0x0.Value;
  uStack_40._0_4_ = (param_2->PathToken).field0_0x0;
  uStack_40._4_4_ = param_2->Traits;
  pFVar3 = &(param_2->RefHandle).field0_0x0;
  FVar1 = pFVar3->_s_0;
  local_28 = 0;
  local_38._s_0 = local_48._s_0;
  uStack_30 = uStack_40;
  if ((pFVar3->_s_0).Id == 0 && pFVar3.ReplicationSystemId == 0) {
    if (((param_2->PathToken).field0_0x0.Value & 0xfffff) == 0) {
      if ((byte)LogIris._0_1_ < 3) {
        return false;
      }
      FNetObjectReference::ToString(param_2,(FString *)&local_98._s_0);
      FNetObjectReference::ToString
                (&param_3->Reference->NetObjectReference,(FString *)&local_88._s_0);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      local_58[0] = local_98;
      if ((void *)local_88.Value != (void *)0x0) {
        FMemory::Free((void *)local_88);
        local_58[0] = local_98;
      }
      goto LAB_144249bc2;
    }
LAB_144249c05:
    pFVar6 = FObjectReferenceCache::GetReplicatedOuter
                       (this->ObjectReferenceCache,(FNetObjectReference *)&local_58[0]._s_0,param_2)
    ;
    pFVar3 = &(pFVar6->RefHandle).field0_0x0;
    local_48._s_0 = pFVar3->_s_0;
    uStack_40._0_4_ = (pFVar6->PathToken).field0_0x0;
    uStack_40._4_4_ = pFVar6->Traits;
    if (((pFVar3->_s_0).Id == 0 && pFVar3.ReplicationSystemId == 0) ||
       (uVar5 = FNetRefHandleManager::GetInternalIndex
                          (this->NetRefHandleManager,(FNetRefHandle)local_48._s_0), uVar5 == 0)) {
      if ((byte)LogIris._0_1_ < 3) {
        return false;
      }
      FNetObjectReference::ToString(param_2,(FString *)&local_58[0]._s_0);
      if ((uStack_40 & 0xfffff) == 0) {
        FNetRefHandle::ToString((FNetRefHandle *)&local_48._s_0,(FString *)&local_98._s_0);
      }
      else {
        if (local_48.Value == 0) {
          local_98.Value = 0;
          ::FString::PrintfImpl((FString *)&local_88._s_0,L"NetToken (Auth:%u TypeId=%u Index=%u)");
          local_78[0] = local_98;
        }
        else {
          FNetToken::ToString((FNetToken *)&uStack_40,(FString *)&local_88._s_0);
          FNetRefHandle::ToString((FNetRefHandle *)&local_48._s_0,(FString *)&local_78[0]._s_0);
          ::FString::AppendfImpl((FString *)&local_88._s_0,L" : %s");
        }
        if ((void *)local_78[0].Value != (void *)0x0) {
          FMemory::Free((void *)local_78[0]);
        }
        local_98 = local_88;
        local_90 = local_80;
        local_8c = local_7c;
      }
      FNetObjectReference::ToString(&param_3->Reference->NetObjectReference,&local_68);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((void *)local_98.Value != (void *)0x0) {
        FMemory::Free((void *)local_98);
      }
LAB_144249bc2:
      if ((void *)local_58[0].Value != (void *)0x0) {
        FMemory::Free((void *)local_58[0]);
      }
      return false;
    }
    pFVar7 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,uVar5);
    uVar4 = pFVar7->SubObjectRootIndex;
    if (pFVar7->SubObjectRootIndex == 0) {
      local_28 = 0;
      goto LAB_144249c5f;
    }
  }
  else {
    uVar5 = FNetRefHandleManager::GetInternalIndex(this->NetRefHandleManager,(FNetRefHandle)FVar1);
    if (uVar5 == 0) goto LAB_144249c05;
    pFVar7 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,uVar5);
    uVar4 = pFVar7->SubObjectRootIndex;
    if (pFVar7->SubObjectRootIndex == 0) {
LAB_144249c5f:
      uVar4 = uVar5;
      uVar5 = local_28._4_4_;
    }
  }
  local_28._4_4_ = uVar5;
  local_28._0_4_ = uVar4;
  pFVar2 = param_3->Reference;
  (pFVar2->NetObjectReference).RefHandle.field0_0x0._s_0 = (FNetRefHandle_u_0_s_0)local_48;
  (pFVar2->NetObjectReference).PathToken = (FNetToken)uStack_40._0_4_;
  (pFVar2->NetObjectReference).Traits = uStack_40._4_4_;
  if (((local_38.Value ^ local_48.Value) & 0x3fffffffffffff) == 0) {
    if (uStack_40._0_4_ == (FNetToken_u_0)uStack_30._0_4_) goto LAB_144249c94;
  }
  (pFVar2->TargetObjectReference).RefHandle.field0_0x0.Value = (ulong64)local_38;
  (pFVar2->TargetObjectReference).PathToken = (FNetToken)uStack_30._0_4_;
  (pFVar2->TargetObjectReference).Traits = uStack_30._4_4_;
LAB_144249c94:
  FNetObjectAttachmentSendQueue::Enqueue
            (&this->AttachmentSendQueue,param_1,(uint)local_28,local_28._4_4_,param_3,param_4);
  return true;
}

// RegisterDefaultHandlers @ 14424b500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetBlobManager::RegisterDefaultHandlers(FNetBlobManager *this)

{
  TStrongObjectPtr<UNetRPCHandler,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  TStrongObjectPtr<UPartialNetObjectAttachmentHandler,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  TStrongObjectPtr<UNetObjectBlobHandler,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  UObject *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UObjectBase *pUVar13;
  FString *pFVar14;
  longlong *plVar15;
  uint uVar16;
  FName *pFVar17;
  UObjectBase *pUVar18;
  UObjectBase *pUVar19;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  UObject *local_2e8;
  UObject *local_2e0;
  UObject *local_2d8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  UObject **local_2a0;
  FName local_298;
  UObject *local_290;
  FName local_288;
  UObject **local_280;
  FName local_278;
  UObject *local_270;
  FName local_268;
  UObject **local_260;
  FName local_258;
  UObject *local_250;
  FName local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  FPartialNetObjectAttachmentHandlerInitParams local_210;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  pUVar11 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UNetRPCHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar12);
  local_1b8._8_8_ = pUVar11;
  pUVar13 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  pUVar19 = (UObjectBase *)0x0;
  pUVar18 = pUVar19;
  if (pUVar13 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(pUVar13);
    pUVar18 = pUVar13;
  }
  pTVar1 = &this->RPCHandler;
  if (pTVar1 == (TStrongObjectPtr<UNetRPCHandler,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_200) {
    if (pUVar18 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar18);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar18;
  }
  if ((pTVar1->Object == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UNetRPCHandler::Init((UNetRPCHandler *)pTVar1->Object,this->ReplicationSystem);
  local_2e8 = pTVar1->Object;
  if (local_2e8 != (UObject *)0x0) {
    if (*(int *)&local_2e8[1].field_0x8 != -1) {
      local_2a0 = &local_2e8;
      bVar8 = `UE::Net::Private::FNetBlobHandlerManager::RegisterHandler'::__l6::<lambda_1>::
              operator()(&local_2a0);
      if (!bVar8) goto LAB_14424b798;
    }
    local_298 = *(FName *)(*(longlong *)&local_2e8->field_0x10 + 0x18);
    ::FName::ToString(&local_298,&local_2d0);
    pUVar12 = UNetBlobHandlerDefinitions::StaticClass();
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar11 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar10 = *(int *)&pUVar11[1].field_0x8;
    pFVar17 = *(FName **)(pUVar11 + 1);
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar17 + iVar10;
    for (; pFVar17 != pFVar4; pFVar17 = pFVar17 + 1) {
      pFVar14 = ::FName::ToString(pFVar17,&local_1e8);
      iVar10 = (pFVar14->Data).ArrayNum;
      if (iVar10 == local_2d0.Data.ArrayNum) {
        if (iVar10 < 2) {
          bVar8 = true;
        }
        else {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                              (wchar_t *)local_2d0.Data.AllocatorInstance.Data);
          bVar8 = iVar10 == 0;
        }
      }
      else {
        bVar8 = local_2d0.Data.ArrayNum + iVar10 == 1;
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      pUVar7 = local_2e8;
      if (bVar8) {
        uVar16 = (uint)((longlong)pFVar17 - *(longlong *)(pUVar11 + 1) >> 3);
        *(uint *)&local_2e8[1].field_0x8 = uVar16;
        iVar10 = (this->BlobHandlerManager).Handlers.ArrayNum;
        uVar9 = 0;
        if ((int)uVar16 < iVar10) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_2f8 = (longlong)(int)uVar16;
          local_2f0 = (longlong)iVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (this->BlobHandlerManager).Handlers.AllocatorInstance.Data;
        local_290 = pUVar7;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(pFVar5 + (longlong)(int)uVar16 * 8),(FObjectPtr)&local_290);
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        goto LAB_14424b7a8;
      }
    }
    if (2 < (byte)LogIris._0_1_) {
      local_288 = *(FName *)(*(longlong *)&local_2e8->field_0x10 + 0x18);
      ::FName::ToString(&local_288,&local_240);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
LAB_14424b798:
  if (pTVar1->Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    pTVar1->Object = (UObject *)0x0;
  }
LAB_14424b7a8:
  pUVar12 = Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  local_210.Config =
       *(UPartialNetObjectAttachmentHandlerConfig **)&(pUVar12->ClassDefaultObject).field0_0x0;
  local_210.ReplicationSystem = this->ReplicationSystem;
  this->PartialNetObjectAttachmentHandlerConfig = local_210.Config;
  pUVar11 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar12);
  local_138._8_8_ = pUVar11;
  pUVar13 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar15 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  pUVar18 = pUVar19;
  if (pUVar13 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(pUVar13);
    pUVar18 = pUVar13;
  }
  pTVar2 = &this->PartialNetObjectAttachmentHandler;
  if (pTVar2 == (TStrongObjectPtr<UPartialNetObjectAttachmentHandler,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_1f8) {
    if (pUVar18 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar18);
    }
  }
  else {
    if (pTVar2->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
    }
    pTVar2->Object = (UObject *)pUVar18;
  }
  if ((pTVar2->Object == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UPartialNetObjectAttachmentHandler::Init
            ((UPartialNetObjectAttachmentHandler *)pTVar2->Object,&local_210);
  local_2e0 = pTVar2->Object;
  if (local_2e0 != (UObject *)0x0) {
    if (*(int *)&local_2e0[1].field_0x8 != -1) {
      local_280 = &local_2e0;
      bVar8 = `UE::Net::Private::FNetBlobHandlerManager::RegisterHandler'::__l6::<lambda_1>::
              operator()(&local_280);
      if (!bVar8) goto LAB_14424bae8;
    }
    local_278 = *(FName *)(*(longlong *)&local_2e0->field_0x10 + 0x18);
    ::FName::ToString(&local_278,&local_2c0);
    pUVar12 = UNetBlobHandlerDefinitions::StaticClass();
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar11 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar10 = *(int *)&pUVar11[1].field_0x8;
    pFVar17 = *(FName **)(pUVar11 + 1);
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar17 + iVar10;
    for (; pFVar17 != pFVar4; pFVar17 = pFVar17 + 1) {
      pFVar14 = ::FName::ToString(pFVar17,&local_1d8);
      iVar10 = (pFVar14->Data).ArrayNum;
      if (iVar10 == local_2c0.Data.ArrayNum) {
        if (iVar10 < 2) {
          bVar8 = true;
        }
        else {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                              (wchar_t *)local_2c0.Data.AllocatorInstance.Data);
          bVar8 = iVar10 == 0;
        }
      }
      else {
        bVar8 = local_2c0.Data.ArrayNum + iVar10 == 1;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      pUVar7 = local_2e0;
      if (bVar8) {
        uVar16 = (uint)((longlong)pFVar17 - *(longlong *)(pUVar11 + 1) >> 3);
        *(uint *)&local_2e0[1].field_0x8 = uVar16;
        iVar10 = (this->BlobHandlerManager).Handlers.ArrayNum;
        uVar9 = 0;
        if ((int)uVar16 < iVar10) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_2f8 = (longlong)(int)uVar16;
          local_2f0 = (longlong)iVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (this->BlobHandlerManager).Handlers.AllocatorInstance.Data;
        local_270 = pUVar7;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(pFVar5 + (longlong)(int)uVar16 * 8),(FObjectPtr)&local_270);
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        goto LAB_14424baf8;
      }
    }
    if (2 < (byte)LogIris._0_1_) {
      local_268 = *(FName *)(*(longlong *)&local_2e0->field_0x10 + 0x18);
      ::FName::ToString(&local_268,&local_230);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
LAB_14424bae8:
  if (pTVar2->Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
    pTVar2->Object = (UObject *)0x0;
  }
LAB_14424baf8:
  pUVar11 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UNetObjectBlobHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar12);
  local_b8._8_8_ = pUVar11;
  pUVar13 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (pUVar13 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(pUVar13);
    pUVar19 = pUVar13;
  }
  pTVar3 = &this->NetObjectBlobHandler;
  if (pTVar3 == (TStrongObjectPtr<UNetObjectBlobHandler,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_1f0) {
    if (pUVar19 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar19);
    }
  }
  else {
    if (pTVar3->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar3->Object);
    }
    pTVar3->Object = (UObject *)pUVar19;
  }
  local_2d8 = pTVar3->Object;
  if (local_2d8 != (UObject *)0x0) {
    if (*(int *)&local_2d8[1].field_0x8 != -1) {
      local_260 = &local_2d8;
      bVar8 = `UE::Net::Private::FNetBlobHandlerManager::RegisterHandler'::__l6::<lambda_1>::
              operator()(&local_260);
      if (!bVar8) goto LAB_14424bdc8;
    }
    local_258 = *(FName *)(*(longlong *)&local_2d8->field_0x10 + 0x18);
    ::FName::ToString(&local_258,&local_2b0);
    pUVar12 = UNetBlobHandlerDefinitions::StaticClass();
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar11 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar10 = *(int *)&pUVar11[1].field_0x8;
    pFVar17 = *(FName **)(pUVar11 + 1);
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = pFVar17 + iVar10;
    for (; pFVar17 != pFVar4; pFVar17 = pFVar17 + 1) {
      pFVar14 = ::FName::ToString(pFVar17,&local_1c8);
      iVar10 = (pFVar14->Data).ArrayNum;
      if (iVar10 == local_2b0.Data.ArrayNum) {
        if (iVar10 < 2) {
          bVar8 = true;
        }
        else {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                              (wchar_t *)local_2b0.Data.AllocatorInstance.Data);
          bVar8 = iVar10 == 0;
        }
      }
      else {
        bVar8 = local_2b0.Data.ArrayNum + iVar10 == 1;
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      pUVar7 = local_2d8;
      if (bVar8) {
        uVar16 = (uint)((longlong)pFVar17 - *(longlong *)(pUVar11 + 1) >> 3);
        *(uint *)&local_2d8[1].field_0x8 = uVar16;
        iVar10 = (this->BlobHandlerManager).Handlers.ArrayNum;
        uVar9 = 0;
        if ((int)uVar16 < iVar10) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_2f8 = (longlong)(int)uVar16;
          local_2f0 = (longlong)iVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (this->BlobHandlerManager).Handlers.AllocatorInstance.Data;
        local_250 = pUVar7;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(pFVar5 + (longlong)(int)uVar16 * 8),(FObjectPtr)&local_250);
        if (local_2b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        return;
      }
    }
    if (2 < (byte)LogIris._0_1_) {
      local_248 = *(FName *)(*(longlong *)&local_2d8->field_0x10 + 0x18);
      ::FName::ToString(&local_248,&local_220);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
  }
LAB_14424bdc8:
  if (pTVar3->Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pTVar3->Object);
    pTVar3->Object = (UObject *)0x0;
  }
  return;
}

// RegisterNetBlobHandler @ 14424c140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::RegisterNetBlobHandler
          (FNetBlobManager *this,UNetBlobHandler *param_1)

{
  FName *pFVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UNetBlobHandler *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  UClass *this_00;
  FString *pFVar10;
  uint uVar11;
  FName *this_01;
  UNetBlobHandler *pUStackX_10;
  UNetBlobHandler **ppUStackX_18;
  FName FStackX_20;
  UNetBlobHandler *pUStack_78;
  FName FStack_70;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  if (param_1 == (UNetBlobHandler *)0x0) {
    return false;
  }
  pUStackX_10 = param_1;
  if (param_1->NetBlobType != 0xffffffff) {
    ppUStackX_18 = &pUStackX_10;
    bVar6 = `UE::Net::Private::FNetBlobHandlerManager::RegisterHandler'::__l6::<lambda_1>::
            operator()(&ppUStackX_18);
    if (!bVar6) {
      return false;
    }
  }
  FStackX_20 = *(FName *)(pUStackX_10->_padding_ + 0x18);
  ::FName::ToString(&FStackX_20,&FStack_58);
  this_00 = UNetBlobHandlerDefinitions::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar8 = *(int *)&pUVar2[1].field_0x8;
  this_01 = *(FName **)(pUVar2 + 1);
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar1 = this_01 + iVar8;
  do {
    if (this_01 == pFVar1) {
      if (2 < (byte)LogIris._0_1_) {
        FStack_70 = *(FName *)(pUStackX_10->_padding_ + 0x18);
        ::FName::ToString(&FStack_70,&FStack_68);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = false;
LAB_14424c054:
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      return bVar6;
    }
    pFVar10 = ::FName::ToString(this_01,&FStack_48);
    iVar8 = (pFVar10->Data).ArrayNum;
    if (iVar8 == FStack_58.Data.ArrayNum) {
      if (iVar8 < 2) {
        bVar6 = true;
      }
      else {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                           (wchar_t *)FStack_58.Data.AllocatorInstance.Data);
        bVar6 = iVar8 == 0;
      }
    }
    else {
      bVar6 = FStack_58.Data.ArrayNum + iVar8 == 1;
    }
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    pUVar5 = pUStackX_10;
    if (bVar6) {
      uVar11 = (uint)((longlong)this_01 - *(longlong *)(pUVar2 + 1) >> 3);
      pUStackX_10->NetBlobType = uVar11;
      uVar9 = 0;
      if ((int)uVar11 < (this->BlobHandlerManager).Handlers.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar3 = (this->BlobHandlerManager).Handlers.AllocatorInstance.Data;
      pUStack_78 = pUVar5;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UNetBlobHandler *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(pFVar3 + (longlong)(int)uVar11 * 8),(FObjectPtr)&pUStack_78);
      bVar6 = true;
      goto LAB_14424c054;
    }
    this_01 = this_01 + 1;
  } while( true );
}

// RemoveConnection @ 14424dac0

void __thiscall
UE::Net::Private::FNetBlobManager::RemoveConnection(FNetBlobManager *this,uint param_1)

{
  return;
}

// ResetNetObjectAttachmentSendQueue @ 14424faa0

void __thiscall
UE::Net::Private::FNetBlobManager::ResetNetObjectAttachmentSendQueue(FNetBlobManager *this)

{
  int *piVar1;
  int iVar2;
  FNetObjectAttachmentQueueEntry *pFVar3;
  
  piVar1 = &(this->AttachmentSendQueue).AttachmentQueue.ArrayMax;
  pFVar3 = (FNetObjectAttachmentQueueEntry *)
           (this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance.Data;
  iVar2 = (this->AttachmentSendQueue).AttachmentQueue.ArrayNum;
  if ((this->AttachmentSendQueue).AttachmentQueue.ArrayMax < 0) {
    DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
              (pFVar3,iVar2);
    (this->AttachmentSendQueue).AttachmentQueue.ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
              (pFVar3,iVar2);
    (this->AttachmentSendQueue).AttachmentQueue.ArrayNum = 0;
  }
  (this->AttachmentSendQueue).bHasMulticastAttachments = false;
  (this->AttachmentSendQueue).ProcessContext.Connections = (FReplicationConnections *)0x0;
  (this->AttachmentSendQueue).ProcessContext.NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->AttachmentSendQueue).ProcessContext.QueueToProcess =
       (TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
        *)0x0;
  memset((this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.Storage.
         AllocatorInstance.Data,0,
         (longlong)
         (this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.Storage.
         ArrayNum << 2);
  return;
}

// SendMulticastRPC @ 1442505f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::SendMulticastRPC
          (FNetBlobManager *this,FSendRPCContext *param_1,void *param_2,
          ENetObjectAttachmentSendPolicyFlags param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  UNetRPCHandler *this_00;
  FReplicationConnections *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  EFunctionFlags EVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  UObjectReplicationBridge *this_01;
  FNetRefHandle FVar18;
  FNetBitArray *pFVar19;
  uint uVar20;
  TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
  *pTVar21;
  FScriptContainerElement *pFVar22;
  FNetBitArray *pFVar23;
  FNetRefHandle_u_0 local_c8;
  FName local_c0;
  FNetRefHandle_u_0 local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [24];
  FNetBitArrayView local_50;
  FNetBitArray local_40;
  
  pTVar7 = CVarEnableIrisRPCs.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if (pTVar7->ShadowedValue[0] < 1) {
    return false;
  }
  this_00 = (UNetRPCHandler *)(this->RPCHandler).Object;
  if (this_00 == (UNetRPCHandler *)0x0) {
    return false;
  }
  EVar13 = FUNC_NetClient|FUNC_NetMulticast;
  if (this->bIsServer == false) {
    EVar13 = FUNC_NetServer;
  }
  if ((param_1->Function->FunctionFlags & EVar13) == FUNC_None) {
    local_c0 = (FName)param_1->Function->_padding_;
    ::FName::ToString(&local_c0,&local_88);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                        ,0x7b,L"Trying to call RPC %s in the wrong direction.");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (!bVar10) {
      return true;
    }
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pFVar4 = this->Connections;
  uVar14 = 0;
  uVar16 = (pFVar4->ValidConnections).Storage.ArrayNum;
  pFVar22 = (pFVar4->ValidConnections).Storage.AllocatorInstance.Data;
  uVar20 = uVar14;
  if (uVar16 == 0) {
    return true;
  }
  while (uVar3 = *(uint *)pFVar22, uVar3 == 0) {
    uVar14 = uVar14 + 1;
    pFVar22 = pFVar22 + 4;
    uVar20 = uVar20 + 0x20;
    if (uVar16 <= uVar14) {
      return true;
    }
  }
  iVar17 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
    }
  }
  iVar15 = 0x20;
  if (uVar3 != 0) {
    iVar15 = iVar17;
  }
  uVar16 = 0xffffffff;
  if (iVar15 + uVar20 < (pFVar4->ValidConnections).BitCount) {
    uVar16 = iVar15 + uVar20;
  }
  if (uVar16 == 0xffffffff) {
    return true;
  }
  local_b8.Value = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  bVar10 = GetRPCOwner(this,(FRPCOwner *)&local_b8._s_0,param_1);
  if (!bVar10) {
    return false;
  }
  FNetBitArrayView::FNetBitArrayView
            ((FNetBitArrayView *)(local_68 + 8),
             (uint *)(this->NetRefHandleManager->WantToBeDormantInternalIndices).Storage.
                     AllocatorInstance.Data,
             (this->NetRefHandleManager->WantToBeDormantInternalIndices).BitCount);
  bVar10 = FNetBitArrayView::IsBitSet((FNetBitArrayView *)(local_68 + 8),(uint)local_98);
  if ((bAllowRPCsOnDormantObjects == false) && (bVar10)) {
    FNetBitArrayView::FNetBitArrayView
              (&local_50,
               (uint *)(this->NetRefHandleManager->DormantObjectsPendingFlushNet).Storage.
                       AllocatorInstance.Data,
               (this->NetRefHandleManager->DormantObjectsPendingFlushNet).BitCount);
    bVar12 = FNetBitArrayView::IsBitSet(&local_50,(uint)local_98);
    if (!bVar12) {
      return false;
    }
  }
  UNetRPCHandler::CreateRPC
            (this_00,(FNetObjectReference *)&local_c8._s_0,(UFunction *)&local_b8._s_0,
             param_1->Function);
  if ((longlong *)local_c8.Value == (longlong *)0x0) {
    if ((byte)LogIris._0_1_ < 3) goto LAB_1442509d8;
    local_90 = (FName)param_1->Function->_padding_;
    ::FName::ToString(&local_90,&local_78);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  else {
    if ((bAutoNetFlushOnDormantRPC != false) && (bVar10)) {
      this_01 = UReplicationSystem::GetReplicationBridge(this->ReplicationSystem);
      FVar18 = FObjectReferenceCache::GetObjectReferenceHandleFromObject
                         (this->ObjectReferenceCache,(UObject *)local_68,
                          (EGetRefHandleFlags)param_1->RootObject);
      UObjectReplicationBridge::NetFlushDormantObject
                (this_01,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar18.field0_0x0);
    }
    ((FNetRefHandle_u_0 *)(local_c8.Value + 0x30))->Value = (ulong64)local_b8;
    *(longlong *)(local_c8.Value + 0x38) = lStack_b0;
    if (((local_b8.Value ^ local_a8) & 0x3fffffffffffff) == 0) {
      if ((int)lStack_b0 != (int)lStack_a0) goto LAB_1442508e4;
    }
    else {
LAB_1442508e4:
      *(ulonglong *)(local_c8.Value + 0x40) = local_a8;
      *(longlong *)(local_c8.Value + 0x48) = lStack_a0;
    }
    pFVar19 = FReplicationConnections::GetOpenConnections(this->Connections,&local_40);
    uVar9 = local_98._4_4_;
    uVar8 = (uint)local_98;
    pTVar21 = &(this->AttachmentSendQueue).AttachmentQueue + (param_3 & ScheduleAsOOB);
    iVar17 = pTVar21->ArrayNum;
    if (iVar17 == pTVar21->ArrayMax) {
      iVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
    }
    pTVar21->ArrayNum = iVar17 + 1;
    pFVar22 = (pTVar21->AllocatorInstance).Data + (longlong)iVar17 * 0x30;
    DefaultConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
              (pFVar22,1);
    *(undefined4 *)pFVar22 = 0;
    *(undefined4 *)(pFVar22 + 4) = uVar8;
    *(undefined4 *)(pFVar22 + 8) = uVar9;
    *(ENetObjectAttachmentSendPolicyFlags *)(pFVar22 + 0xc) = param_3;
    plVar2 = *(longlong **)(pFVar22 + 0x10);
    if (plVar2 != (longlong *)local_c8.Value) {
      ((FNetRefHandle_u_0 *)(pFVar22 + 0x10))->Value = (ulong64)local_c8;
      if ((longlong *)local_c8.Value != (longlong *)0x0) {
        *(int *)(local_c8.Value + 0x28) = *(int *)(local_c8.Value + 0x28) + 1;
      }
      if (plVar2 != (longlong *)0x0) {
        plVar1 = plVar2 + 5;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
        }
      }
    }
    pFVar23 = (FNetBitArray *)(pFVar22 + 0x18);
    if (pFVar23 != pFVar19) {
      pFVar5 = (pFVar23->Storage).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar23->Storage).AllocatorInstance.Data = (pFVar19->Storage).AllocatorInstance.Data;
      (pFVar19->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar22 + 0x20) = (pFVar19->Storage).ArrayNum;
      *(int *)(pFVar22 + 0x24) = (pFVar19->Storage).ArrayMax;
      (pFVar19->Storage).ArrayNum = 0;
      (pFVar19->Storage).ArrayMax = 0;
    }
    *(uint *)(pFVar22 + 0x28) = pFVar19->BitCount;
    (this->AttachmentSendQueue).bHasMulticastAttachments = true;
    local_78.Data.AllocatorInstance.Data = (pFVar19->Storage).AllocatorInstance.Data;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_1442509d8:
  if ((longlong *)local_c8.Value != (longlong *)0x0) {
    plVar2 = (longlong *)(local_c8.Value + 0x28);
    *(int *)plVar2 = *(int *)plVar2 + -1;
    if (*(int *)plVar2 == 0) {
      (**(code **)(*(longlong *)local_c8 + 0x20))(local_c8.Value,1);
    }
  }
  return true;
}

// SendUnicastRPC @ 144250a30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobManager::SendUnicastRPC
          (FNetBlobManager *this,uint param_1,FSendRPCContext *param_2,void *param_3,
          ENetObjectAttachmentSendPolicyFlags param_4)

{
  longlong *plVar1;
  UNetRPCHandler *this_00;
  UFunction *pUVar2;
  FReplicationConnections *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  UObjectReplicationBridge *this_01;
  FNetRefHandle FVar10;
  FNetRefHandle_u_0 local_c8;
  FNetRefHandle_u_0 local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined1 local_50 [24];
  FNetBitArrayView local_38;
  
  pTVar5 = CVarEnableIrisRPCs.Ref;
  bVar6 = IsInParallelGameThread();
  if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (pTVar5->ShadowedValue[0] < 1) {
    return false;
  }
  this_00 = (UNetRPCHandler *)(this->RPCHandler).Object;
  if (this_00 == (UNetRPCHandler *)0x0) {
    return false;
  }
  pUVar2 = param_2->Function;
  if (((pUVar2->FunctionFlags >> 0x15 & 1) != 0) && (this->bIsServer != false)) {
    local_98 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_98,&local_80);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                       ,0xbc,L"Trying to call server RPC %s in the wrong direction.");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      return true;
    }
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (((pUVar2->FunctionFlags & (FUNC_NetClient|FUNC_NetMulticast)) != FUNC_None) &&
     (this->bIsServer == false)) {
    local_90 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_90,&local_70);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                       ,0xc2,L"Trying to call client RPC %s in the wrong direction.");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      return true;
    }
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar3 = this->Connections;
  if (((pFVar3->ValidConnections).BitCount <= param_1) ||
     ((*(uint *)((pFVar3->ValidConnections).Storage.AllocatorInstance.Data +
                (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0)) {
    if ((byte)LogIris._0_1_ < 3) {
      return true;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    return true;
  }
  uVar9 = 0;
  if ((int)param_1 < (pFVar3->Connections).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if ((pFVar3->Connections).AllocatorInstance.Data[(longlong)(int)param_1 * 0x28 + 0x20] !=
      (FScriptContainerElement)0x0) {
    return true;
  }
  local_c0.Value = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  bVar6 = GetRPCOwner(this,(FRPCOwner *)&local_c0._s_0,param_2);
  if (!bVar6) {
    return false;
  }
  FNetBitArrayView::FNetBitArrayView
            ((FNetBitArrayView *)(local_50 + 8),
             (uint *)(this->NetRefHandleManager->WantToBeDormantInternalIndices).Storage.
                     AllocatorInstance.Data,
             (this->NetRefHandleManager->WantToBeDormantInternalIndices).BitCount);
  bVar6 = FNetBitArrayView::IsBitSet((FNetBitArrayView *)(local_50 + 8),(uint)local_a0);
  if ((bAllowRPCsOnDormantObjects == false) && (bVar6)) {
    FNetBitArrayView::FNetBitArrayView
              (&local_38,
               (uint *)(this->NetRefHandleManager->DormantObjectsPendingFlushNet).Storage.
                       AllocatorInstance.Data,
               (this->NetRefHandleManager->DormantObjectsPendingFlushNet).BitCount);
    bVar8 = FNetBitArrayView::IsBitSet(&local_38,(uint)local_a0);
    if (!bVar8) {
      return false;
    }
  }
  UNetRPCHandler::CreateRPC
            (this_00,(FNetObjectReference *)&local_c8._s_0,(UFunction *)&local_c0._s_0,
             param_2->Function);
  if ((longlong *)local_c8.Value == (longlong *)0x0) {
    if (2 < (byte)LogIris._0_1_) {
      local_88 = (FName)param_2->Function->_padding_;
      ::FName::ToString(&local_88,&local_60);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_144250df4;
  }
  if ((bAutoNetFlushOnDormantRPC != false) && (bVar6)) {
    this_01 = UReplicationSystem::GetReplicationBridge(this->ReplicationSystem);
    FVar10 = FObjectReferenceCache::GetObjectReferenceHandleFromObject
                       (this->ObjectReferenceCache,(UObject *)local_50,
                        (EGetRefHandleFlags)param_2->RootObject);
    UObjectReplicationBridge::NetFlushDormantObject
              (this_01,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar10.field0_0x0);
  }
  ((FNetRefHandle_u_0 *)(local_c8.Value + 0x30))->Value = (ulong64)local_c0;
  *(longlong *)(local_c8.Value + 0x38) = lStack_b8;
  if (((local_c0.Value ^ local_b0) & 0x3fffffffffffff) == 0) {
    if ((int)lStack_b8 != (int)lStack_a8) goto LAB_144250dc9;
  }
  else {
LAB_144250dc9:
    *(ulonglong *)(local_c8.Value + 0x40) = local_b0;
    *(longlong *)(local_c8.Value + 0x48) = lStack_a8;
  }
  FNetObjectAttachmentSendQueue::Enqueue
            (&this->AttachmentSendQueue,param_1,(uint)local_a0,local_a0._4_4_,
             (TRefCountPtr<UE::Net::FNetObjectAttachment> *)&local_c8._s_0,param_4);
LAB_144250df4:
  if ((longlong *)local_c8.Value != (longlong *)0x0) {
    plVar1 = (longlong *)(local_c8.Value + 0x28);
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if (*(int *)plVar1 == 0) {
      (**(code **)(*(longlong *)local_c8 + 0x20))(local_c8.Value,1);
      return true;
    }
  }
  return true;
}

// ~FNetBlobManager @ 1442f80c0

void __thiscall UE::Net::Private::FNetBlobManager::~FNetBlobManager(FNetBlobManager *this)

{
  void *pvVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->RPCWarningThrottler).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RPCWarningThrottler).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RPCWarningThrottler);
  pUVar2 = (this->NetObjectBlobHandler).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->NetObjectBlobHandler).Object = (UObject *)0x0;
  }
  pUVar2 = (this->PartialNetObjectAttachmentHandler).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->PartialNetObjectAttachmentHandler).Object = (UObject *)0x0;
  }
  pUVar2 = (this->RPCHandler).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->RPCHandler).Object = (UObject *)0x0;
  }
  pFVar3 = (this->AttachmentSendQueue).ProcessContext.ConnectionIds.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AttachmentSendQueue).ProcessContext.ConnectionsPendingSendInPostDispatch.Storage.
           AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsInScope.Storage.
           AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AttachmentSendQueue).ProcessContext.AttachmentsToObjectsGoingOutOfScope.Storage.
           AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
            ((FNetObjectAttachmentQueueEntry *)
             (this->AttachmentSendQueue).ScheduleAsOOBAttachmentQueue.AllocatorInstance.Data,
             (this->AttachmentSendQueue).ScheduleAsOOBAttachmentQueue.ArrayNum);
  pFVar3 = (this->AttachmentSendQueue).ScheduleAsOOBAttachmentQueue.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
            ((FNetObjectAttachmentQueueEntry *)
             (this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance.Data,
             (this->AttachmentSendQueue).AttachmentQueue.ArrayNum);
  pFVar3 = (this->AttachmentSendQueue).AttachmentQueue.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BlobHandlerManager).Handlers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

