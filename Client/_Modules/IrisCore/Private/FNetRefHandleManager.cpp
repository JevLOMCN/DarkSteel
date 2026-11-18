// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 70

// GetInternalIndex @ 14420a910

uint __thiscall
UE::Net::Private::FNetRefHandleManager::GetInternalIndex
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->RefHandleToInternalIndex).field_0x8 !=
      *(int *)&(this->RefHandleToInternalIndex).field_0x34) {
    puVar5 = *(undefined1 **)&(this->RefHandleToInternalIndex).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->RefHandleToInternalIndex).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)(*(int *)&(this->RefHandleToInternalIndex).field_0x48 - 1))
                              * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->RefHandleToInternalIndex + (longlong)iVar2 * 0x18;
        if ((*(ulonglong *)(*(longlong *)&this->RefHandleToInternalIndex + (longlong)iVar2 * 0x18) &
            0x3fffffffffffff) == uVar4) {
          puVar3 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return 0;
          }
          return *puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetReplicatedObjectData @ 14420d350

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectData * __thiscall
UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectData
          (FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReplicatedObjectData *pFVar4;
  
  pFVar1 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReplicatedObjectData *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssignedInternalIndices.GetBit(InternalIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                       ,0x233,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReplicatedObjectData *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = GetReplicatedObjectDataNoCheck(this,param_1);
  return pFVar4;
}

// GetReplicatedObjectDataNoCheck @ 14420d400

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectData * __thiscall
UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
          (FNetRefHandleManager *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  
  uVar2 = (int)param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (int)(this->ReplicatedObjectData)._padding_) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReplicatedObjectData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FReplicatedObjectData *)
         ((longlong)((int)param_1 % 100) * 0x38 +
         *(longlong *)((this->ReplicatedObjectData)._padding_ + (longlong)(int)uVar2 * 8));
}

// GetReplicatedObjectInstance @ 14423eea0

UObject * __thiscall
UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
          (FNetRefHandleManager *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  
  uVar2 = (int)param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (int)(this->ReplicatedInstances)._padding_) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar1)();
      return pUVar5;
    }
  }
  return *(UObject **)
          (*(longlong *)((this->ReplicatedInstances)._padding_ + (longlong)(int)uVar2 * 8) +
          (longlong)((int)param_1 % 100) * 8);
}

// GetSubObjects @ 14423f680

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Net::Private::FNetRefHandleManager::GetSubObjects
          (FNetRefHandleManager *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
      *(int *)&(this->SubObjects).DependencyInfos.field_0x34) {
    puVar5 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SubObjects).DependencyInfos.field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U & param_1
                              ) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->SubObjects).DependencyInfos;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x28) == param_1) {
          piVar4 = (int *)(lVar1 + 4);
          if (lVar1 == 0) {
            piVar4 = (int *)0x0;
          }
          if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
            MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                      (__return_storage_ptr__,
                       (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)*piVar4 * 0x30 +
                          *(longlong *)&(this->SubObjects).DependentObjectsStorage));
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// FNetRefHandleManager @ 144266b60

FNetRefHandleManager * __thiscall
UE::Net::Private::FNetRefHandleManager::FNetRefHandleManager
          (FNetRefHandleManager *this,FReplicationProtocolManager *param_1)

{
  this->ReplicationSystemId = 0xffffffff;
  this->MaxActiveObjectCount = 0;
  this->ActiveObjectCount = 0;
  this->InternalNetRefIndexGrowSize = 0;
  this->CurrentMaxInternalNetRefIndex = 0;
  this->HighestNetChunkedArrayInternalIndex = 0;
  *(undefined8 *)&this->RefHandleToInternalIndex = 0;
  *(undefined8 *)&(this->RefHandleToInternalIndex).field_0x8 = 0;
  *(undefined8 *)&(this->RefHandleToInternalIndex).field_0x20 = 0;
  *(undefined4 *)&(this->RefHandleToInternalIndex).field_0x28 = 0;
  *(undefined4 *)&(this->RefHandleToInternalIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->RefHandleToInternalIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RefHandleToInternalIndex).field_0x34 = 0;
  *(undefined8 *)&(this->RefHandleToInternalIndex).field_0x40 = 0;
  *(undefined4 *)&(this->RefHandleToInternalIndex).field_0x48 = 0;
  *(undefined8 *)&this->NetHandleToInternalIndex = 0;
  *(undefined8 *)&(this->NetHandleToInternalIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NetHandleToInternalIndex).field_0x20 = 0;
  *(undefined4 *)&(this->NetHandleToInternalIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NetHandleToInternalIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetHandleToInternalIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetHandleToInternalIndex).field_0x34 = 0;
  *(undefined8 *)&(this->NetHandleToInternalIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NetHandleToInternalIndex).field_0x48 = 0;
  (this->ScopeFrameData).bIsValid = 0;
  (this->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GlobalScopableInternalIndices).Storage.ArrayNum = 0;
  (this->GlobalScopableInternalIndices).Storage.ArrayMax = 0;
  (this->GlobalScopableInternalIndices).BitCount = 0;
  (this->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.ArrayNum = 0;
  (this->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.ArrayMax = 0;
  (this->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount = 0;
  (this->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.ArrayNum = 0;
  (this->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.ArrayMax = 0;
  (this->ScopeFrameData).PrevFrameScopableInternalIndices.BitCount = 0;
  (this->RelevantObjectsInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RelevantObjectsInternalIndices).Storage.ArrayNum = 0;
  (this->RelevantObjectsInternalIndices).Storage.ArrayMax = 0;
  (this->RelevantObjectsInternalIndices).BitCount = 0;
  (this->PolledObjectsInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolledObjectsInternalIndices).Storage.ArrayNum = 0;
  (this->PolledObjectsInternalIndices).Storage.ArrayMax = 0;
  (this->PolledObjectsInternalIndices).BitCount = 0;
  (this->DirtyObjectsToQuantize).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyObjectsToQuantize).Storage.ArrayNum = 0;
  (this->DirtyObjectsToQuantize).Storage.ArrayMax = 0;
  (this->DirtyObjectsToQuantize).BitCount = 0;
  (this->AssignedInternalIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedInternalIndices).Storage.ArrayNum = 0;
  (this->AssignedInternalIndices).Storage.ArrayMax = 0;
  (this->AssignedInternalIndices).BitCount = 0;
  (this->SubObjectInternalIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubObjectInternalIndices).Storage.ArrayNum = 0;
  (this->SubObjectInternalIndices).Storage.ArrayMax = 0;
  (this->SubObjectInternalIndices).BitCount = 0;
  (this->DependentObjectInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DependentObjectInternalIndices).Storage.ArrayNum = 0;
  (this->DependentObjectInternalIndices).Storage.ArrayMax = 0;
  (this->DependentObjectInternalIndices).BitCount = 0;
  (this->ObjectsWithCreationDependencies).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithCreationDependencies).Storage.ArrayNum = 0;
  (this->ObjectsWithCreationDependencies).Storage.ArrayMax = 0;
  (this->ObjectsWithCreationDependencies).BitCount = 0;
  (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithDependentObjectsInternalIndices).Storage.ArrayNum = 0;
  (this->ObjectsWithDependentObjectsInternalIndices).Storage.ArrayMax = 0;
  (this->ObjectsWithDependentObjectsInternalIndices).BitCount = 0;
  (this->DestroyedStartupObjectInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestroyedStartupObjectInternalIndices).Storage.ArrayNum = 0;
  (this->DestroyedStartupObjectInternalIndices).Storage.ArrayMax = 0;
  (this->DestroyedStartupObjectInternalIndices).BitCount = 0;
  (this->WantToBeDormantInternalIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WantToBeDormantInternalIndices).Storage.ArrayNum = 0;
  (this->WantToBeDormantInternalIndices).Storage.ArrayMax = 0;
  (this->WantToBeDormantInternalIndices).BitCount = 0;
  (this->DormantObjectsPendingFlushNet).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DormantObjectsPendingFlushNet).Storage.ArrayNum = 0;
  (this->DormantObjectsPendingFlushNet).Storage.ArrayMax = 0;
  (this->DormantObjectsPendingFlushNet).BitCount = 0;
  (this->ObjectsWithPreUpdate).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsWithPreUpdate).Storage.ArrayNum = 0;
  (this->ObjectsWithPreUpdate).Storage.ArrayMax = 0;
  (this->ObjectsWithPreUpdate).BitCount = 0;
  (this->ObjectsWithFullPushBasedDirtiness).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithFullPushBasedDirtiness).Storage.ArrayNum = 0;
  (this->ObjectsWithFullPushBasedDirtiness).Storage.ArrayMax = 0;
  (this->ObjectsWithFullPushBasedDirtiness).BitCount = 0;
  *(undefined8 *)&this->DestroyedStartupObject = 0;
  *(undefined8 *)&(this->DestroyedStartupObject).field_0x8 = 0;
  *(undefined8 *)&(this->DestroyedStartupObject).field_0x20 = 0;
  *(undefined4 *)&(this->DestroyedStartupObject).field_0x28 = 0;
  *(undefined4 *)&(this->DestroyedStartupObject).field_0x2c = 0x80;
  *(undefined4 *)&(this->DestroyedStartupObject).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DestroyedStartupObject).field_0x34 = 0;
  *(undefined8 *)&(this->DestroyedStartupObject).field_0x40 = 0;
  *(undefined4 *)&(this->DestroyedStartupObject).field_0x48 = 0;
  (this->PendingDestroyInternalIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingDestroyInternalIndices).ArrayNum = 0;
  (this->PendingDestroyInternalIndices).ArrayMax = 0;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  ::
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
            (&this->ReplicatedObjectData,0,Constructor);
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>::
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>
            (&this->ReplicatedObjectStateBuffers,0,Constructor);
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>::
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>
            (&this->ReplicatedObjectRefCount,0,Constructor);
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>::
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>
            (&this->ReplicatedInstances,0,Constructor);
  *(undefined8 *)&(this->SubObjects).DependencyInfos = 0;
  *(undefined8 *)&(this->SubObjects).DependencyInfos.field_0x8 = 0;
  *(undefined8 *)&(this->SubObjects).DependencyInfos.field_0x20 = 0;
  this->NextStaticHandleIndex = 1;
  this->NextDynamicHandleIndex = 1;
  *(undefined4 *)&(this->SubObjects).DependencyInfos.field_0x28 = 0;
  *(undefined4 *)&(this->SubObjects).DependencyInfos.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjects).DependencyInfos.field_0x34 = 0;
  *(undefined4 *)&(this->SubObjects).DependencyInfos.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjects).DependencyInfos.field_0x40 = 0;
  *(undefined4 *)&(this->SubObjects).DependencyInfos.field_0x48 = 0;
  *(undefined8 *)&(this->SubObjects).DependentObjectsStorage = 0;
  *(undefined8 *)&(this->SubObjects).DependentObjectsStorage.field_0x8 = 0;
  *(undefined8 *)&(this->SubObjects).DependentObjectsStorage.field_0x20 = 0;
  *(undefined4 *)&(this->SubObjects).DependentObjectsStorage.field_0x28 = 0;
  *(undefined4 *)&(this->SubObjects).DependentObjectsStorage.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjects).DependentObjectsStorage.field_0x34 = 0;
  *(undefined4 *)&(this->SubObjects).DependentObjectsStorage.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjects).SubObjectConditionalsStorage = 0;
  *(undefined8 *)&(this->SubObjects).SubObjectConditionalsStorage.field_0x8 = 0;
  *(undefined8 *)&(this->SubObjects).SubObjectConditionalsStorage.field_0x20 = 0;
  *(undefined4 *)&(this->SubObjects).SubObjectConditionalsStorage.field_0x28 = 0;
  *(undefined4 *)&(this->SubObjects).SubObjectConditionalsStorage.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjects).SubObjectConditionalsStorage.field_0x34 = 0;
  *(undefined4 *)&(this->SubObjects).SubObjectConditionalsStorage.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjects).DependentObjectInfosStorage = 0;
  *(undefined8 *)&(this->SubObjects).DependentObjectInfosStorage.field_0x8 = 0;
  *(undefined8 *)&(this->SubObjects).DependentObjectInfosStorage.field_0x20 = 0;
  *(undefined4 *)&(this->SubObjects).DependentObjectInfosStorage.field_0x28 = 0;
  *(undefined4 *)&(this->SubObjects).DependentObjectInfosStorage.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjects).DependentObjectInfosStorage.field_0x34 = 0;
  *(undefined4 *)&(this->SubObjects).DependentObjectInfosStorage.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjects).CreationDependencyInfosStorage = 0;
  *(undefined8 *)&(this->SubObjects).CreationDependencyInfosStorage.field_0x8 = 0;
  *(undefined8 *)&(this->SubObjects).CreationDependencyInfosStorage.field_0x20 = 0;
  *(undefined4 *)&(this->SubObjects).CreationDependencyInfosStorage.field_0x28 = 0;
  *(undefined4 *)&(this->SubObjects).CreationDependencyInfosStorage.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjects).CreationDependencyInfosStorage.field_0x34 = 0;
  *(undefined4 *)&(this->SubObjects).CreationDependencyInfosStorage.field_0x30 = 0xffffffff;
  this->ReplicationProtocolManager = param_1;
  *(undefined8 *)&this->OnMaxInternalNetRefIndexIncreased = 0;
  *(undefined8 *)&(this->OnMaxInternalNetRefIndexIncreased).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaxInternalNetRefIndexIncreased).field_0x10 = 0;
  *(undefined8 *)&this->OnNetChunkedArrayIncrease = 0;
  *(undefined8 *)&(this->OnNetChunkedArrayIncrease).field_0x8 = 0;
  *(undefined8 *)&(this->OnNetChunkedArrayIncrease).field_0x10 = 0;
  *(undefined8 *)&this->OnInternalNetRefIndicesFreed = 0;
  *(undefined8 *)&(this->OnInternalNetRefIndicesFreed).field_0x8 = 0;
  *(undefined8 *)&(this->OnInternalNetRefIndicesFreed).field_0x10 = 0;
  (this->OwnedNetBitArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedNetBitArrays).ArrayNum = 0;
  (this->OwnedNetBitArrays).ArrayMax = 0;
  *(undefined8 *)&(this->OnMaxInternalNetRefIndexIncreased).field_0x18 = 2;
  *(undefined8 *)&(this->OnNetChunkedArrayIncrease).field_0x18 = 2;
  *(undefined8 *)&(this->OnInternalNetRefIndicesFreed).field_0x18 = 2;
  return this;
}

// AddCreationDependency @ 14426ad70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetRefHandleManager::AddCreationDependency
          (FNetRefHandleManager *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FDependencyInfo *pFVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  FNetRefHandle_u_0 local_res10;
  FNetRefHandle_u_0 local_res18;
  undefined1 local_res20 [8];
  uint local_88 [2];
  FNetRefHandleManager *local_80;
  FNetRefHandle_u_0 *local_78;
  FSparseArrayAllocationInfo local_70;
  FString local_60;
  FString local_50;
  FNetRefHandleManager *local_40;
  FNetRefHandle_u_0 *local_38;
  FNetRefHandle_u_0 *local_30;
  
  local_res10 = param_1.field0_0x0;
  local_res18 = param_2.field0_0x0;
  if ((((ulonglong)param_1.field0_0x0 ^ (ulonglong)param_2.field0_0x0) & 0x3fffffffffffff) == 0) {
    local_78 = &local_res18;
    local_80 = this;
    `UE::Net::Private::FNetRefHandleManager::AddCreationDependency'::__l5::<lambda_1>::operator()
              (&local_80);
    return false;
  }
  uVar4 = GetInternalIndex(this,param_1);
  local_88[0] = uVar4;
  uVar5 = GetInternalIndex(this,param_2);
  if ((uVar4 == 0) || (uVar5 == 0)) {
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_40 = this;
    `UE::Net::Private::FNetRefHandleManager::AddCreationDependency'::__l8::<lambda_2>::operator()
              (&local_40);
  }
  else {
    bVar2 = IsSubObject(this,uVar4);
    if ((!bVar2) && (bVar2 = IsSubObject(this,uVar5), !bVar2)) {
      pFVar7 = FNetDependencyData::GetOrCreateCacheEntry(&this->SubObjects,uVar5);
      if (pFVar7->CreationDependencyArrayIndex == 0xffffffff) {
        TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AddUninitialized
                  ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
                   &(this->SubObjects).CreationDependencyInfosStorage,&local_70);
        pFVar7->CreationDependencyArrayIndex = local_70.Index;
        *(undefined8 *)((longlong)local_70.Pointer + 8) = 0;
        *(undefined4 *)((longlong)local_70.Pointer + 0x10) = 0;
        *(undefined4 *)((longlong)local_70.Pointer + 0x14) = 2;
        FVar10 = (ForElementType<unsigned_int>)local_70.Pointer;
      }
      else {
        FVar10 = (ForElementType<unsigned_int>)
                 (*(longlong *)&(this->SubObjects).CreationDependencyInfosStorage +
                 (longlong)(int)pFVar7->CreationDependencyArrayIndex * 0x18);
      }
      FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar10 + 8);
      if (*(ForElementType<unsigned_int> *)((longlong)FVar10 + 8) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar10;
      }
      FVar8 = FVar9;
      do {
        if (FVar8 == (ForElementType<unsigned_int>)
                     ((longlong)FVar9 + (longlong)*(int *)((longlong)FVar10 + 0x10) * 4)) {
LAB_14426aebf:
          if ((((ulonglong)FVar9 <= local_88) &&
              (local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar10 + 0x14) * 4))) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar6 = *(int *)((longlong)FVar10 + 0x10);
          if (iVar6 == *(int *)((longlong)FVar10 + 0x14)) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)FVar10,
                               (int *)((longlong)FVar10 + 0x14));
          }
          *(int *)((longlong)FVar10 + 0x10) = iVar6 + 1;
          FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar10 + 8);
          if (*(ForElementType<unsigned_int> *)((longlong)FVar10 + 8) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar10;
          }
          *(uint *)((longlong)FVar9 + (longlong)iVar6 * 4) = local_88[0];
          FNetBitArray::SetBit(&this->ObjectsWithCreationDependencies,uVar5);
          return true;
        }
        if (*(uint *)FVar8 == local_88[0]) {
          if ((int)((longlong)FVar8 - (longlong)FVar9 >> 2) != -1) {
            return true;
          }
          goto LAB_14426aebf;
        }
        FVar8 = (ForElementType<unsigned_int>)((longlong)FVar8 + 4);
      } while( true );
    }
    if (1 < (byte)LogIris._0_1_) {
      PrintObjectFromNetRefHandle(this,&local_50,(FNetRefHandle)local_res18._s_0);
      PrintObjectFromNetRefHandle(this,&local_60,(FNetRefHandle)local_res10._s_0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    `UE::Net::Private::FNetRefHandleManager::AddCreationDependency'::__l11::<lambda_3>::operator()
              (local_res20);
  }
  return false;
}

// AddReferencedObjects @ 14426c230

void __thiscall
UE::Net::Private::FNetRefHandleManager::AddReferencedObjects
          (FNetRefHandleManager *this,FReferenceCollector *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar2 = (uint)(this->ReplicatedInstances)._padding_;
  uVar3 = 0;
  plVar5 = (longlong *)(this->ReplicatedInstances)._padding_;
  if (uVar2 != 0) {
    uVar4 = (ulonglong)uVar2;
    do {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,*plVar5 + uVar3 * 8,0,0);
      uVar2 = (int)uVar3 + 1;
      uVar3 = 0;
      plVar1 = plVar5 + 1;
      if (uVar2 < 100) {
        uVar3 = (ulonglong)uVar2;
        plVar1 = plVar5;
      }
      plVar5 = plVar1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// AddSubObject @ 14426c610

bool __thiscall
UE::Net::Private::FNetRefHandleManager::AddSubObject
          (FNetRefHandleManager *this,FNetRefHandle param_1,FNetRefHandle param_2,
          FNetRefHandle param_3,EAddSubObjectFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff) ==
      ((ulonglong)param_2.field0_0x0 & 0x3fffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootObjectHandle != SubObjectHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x25f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar5 = GetInternalIndex(this,param_1);
  uVar6 = GetInternalIndex(this,param_2);
  if (uVar5 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4467568253371153819>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x265,"RootObjectInternalIndex != InvalidInternalIndex");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (uVar6 == 0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4467568253371153818>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x266,"SubObjectInternalIndex != InvalidInternalIndex");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar2) && (bVar4)) {
    if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                         ,0x2b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FNetTrace::TraceSubObject
              ((param_1.field0_0x0._4_4_ >> 0x16) - 1,
               (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff,
               (ulonglong)param_2.field0_0x0 & 0x3fffffffffffff);
    if ((param_4 & ReplicateWithSubObject) == None) {
      uVar7 = 0;
    }
    else {
      uVar7 = GetInternalIndex(this,param_3);
    }
    bVar2 = InternalAddSubObject(this,uVar5,uVar6,uVar7,param_4);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// AddingDependencyWouldCreateCircularDependency @ 14426ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Net::Private::FNetRefHandleManager::AddingDependencyWouldCreateCircularDependency
          (FNetRefHandleManager *this,uint param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint *_Dst;
  ForElementType<unsigned_int> FVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  undefined1 auStackY_198 [32];
  uint local_148 [4];
  ForElementType<unsigned_int> local_138;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FVar17 = (ForElementType<unsigned_int>)0x0;
  local_138.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar16 = 0;
  local_30 = 0;
  local_2c = 0x40;
  uVar8 = uVar16;
  local_148[0] = param_2;
  if ((local_148 + 4 <= local_148) && (uVar8 = 0, local_148 < &local_138.SecondaryData)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar8 = local_30;
    if (local_30 == local_2c) {
      uVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (0x404,(ForElementType<unsigned_int> *)(local_148 + 4),(int *)&local_2c);
    }
  }
  local_30 = uVar8 + 1;
  FVar11 = (ForElementType<unsigned_int>)(local_148 + 4);
  if (local_138.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_138.SecondaryData;
  }
  *(uint *)((longlong)FVar11 + (longlong)(int)uVar8 * 4) = local_148[0];
  bVar6 = local_30 == 0;
  FVar11 = local_138.SecondaryData;
  do {
    if ((bVar6 || (int)local_30 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar11 = local_138.SecondaryData, bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    FVar13 = (ForElementType<unsigned_int>)(local_148 + 4);
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar13 = FVar11;
    }
    lVar2 = (longlong)(int)(local_30 - 1) * 4;
    uVar8 = *(uint *)(lVar2 + (longlong)FVar13);
    FVar13 = (ForElementType<unsigned_int>)(local_148 + 4);
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar13 = FVar11;
    }
    _Dst = (uint *)((longlong)FVar13 + lVar2);
    iVar10 = (local_30 - (local_30 - 1)) + -1;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar10 << 2);
      FVar11 = local_138.SecondaryData;
    }
    local_30 = local_30 - 1;
    if (uVar8 != 0) {
      pFVar3 = (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data;
      if (((this->ObjectsWithDependentObjectsInternalIndices).BitCount <= uVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), FVar11 = local_138.SecondaryData, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((*(uint *)(pFVar3 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
        FVar13 = FVar17;
        uVar14 = uVar16;
        if (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
            *(int *)&(this->SubObjects).DependencyInfos.field_0x34) {
          puVar4 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
          puVar15 = &(this->SubObjects).DependencyInfos.field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
          }
          iVar10 = *(int *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U & uVar8) * 4
                           );
          if (iVar10 != -1) {
            lVar2 = *(longlong *)&(this->SubObjects).DependencyInfos;
            do {
              lVar1 = lVar2 + (longlong)iVar10 * 0x28;
              if (*(uint *)(lVar2 + (longlong)iVar10 * 0x28) == uVar8) {
                FVar12 = (ForElementType<unsigned_int>)(lVar1 + 4);
                if (lVar1 == 0) {
                  FVar12 = FVar17;
                }
                if ((FVar12 != (ForElementType<unsigned_int>)0x0) &&
                   (*(uint *)((longlong)FVar12 + 0x14) != 0xffffffff)) {
                  FVar13 = (ForElementType<unsigned_int>)
                           ((longlong)(int)*(uint *)((longlong)FVar12 + 0x14) * 0x50 +
                           *(longlong *)&(this->SubObjects).DependentObjectInfosStorage);
                  uVar14 = *(uint *)((longlong)FVar13 + 0x48);
                  if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x40) !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar13 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x40);
                  }
                  if (((int)uVar14 < 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), FVar11 = local_138.SecondaryData, bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                }
                break;
              }
              iVar10 = *(int *)(lVar1 + 0x20);
            } while (iVar10 != -1);
          }
        }
        uVar8 = local_30 + uVar14;
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if ((int)local_2c < (int)uVar8) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,uVar8,(ForElementType<unsigned_int> *)(local_148 + 4),local_30,
                     (int *)&local_2c);
          FVar11 = local_138.SecondaryData;
        }
        FVar12 = (ForElementType<unsigned_int>)((longlong)FVar13 + (longlong)(int)uVar14 * 8);
        for (; FVar13 != FVar12; FVar13 = (ForElementType<unsigned_int>)((longlong)FVar13 + 8)) {
          if (*(uint *)FVar13 == param_1) {
            bVar6 = true;
            goto LAB_14426d180;
          }
          FVar9 = (ForElementType<unsigned_int>)(local_148 + 4);
          if (FVar11 != (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar11;
          }
          if ((ulonglong)FVar9 <= (ulonglong)FVar13) {
            FVar9 = (ForElementType<unsigned_int>)(local_148 + 4);
            if (FVar11 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = FVar11;
            }
            if (((ulonglong)FVar13 < (ulonglong)((longlong)FVar9 + (longlong)(int)local_2c * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), FVar11 = local_138.SecondaryData, bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          uVar8 = local_30;
          if (local_30 == local_2c) {
            uVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)(local_148 + 4),
                               (int *)&local_2c);
            FVar11 = local_138.SecondaryData;
          }
          local_30 = uVar8 + 1;
          FVar9 = (ForElementType<unsigned_int>)(local_148 + 4);
          if (FVar11 != (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar11;
          }
          *(uint *)((longlong)FVar9 + (longlong)(int)uVar8 * 4) = *(uint *)FVar13;
          FVar11 = local_138.SecondaryData;
        }
      }
    }
    bVar6 = local_30 == 0;
  } while (!bVar6);
  bVar6 = false;
LAB_14426d180:
  if (FVar11 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  return bVar6;
}

// AllocateNetRefHandle @ 14426d590

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::AllocateNetRefHandle
          (FNetRefHandleManager *this,bool param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  FNetRefHandle FVar6;
  ulong64 uVar7;
  undefined7 in_register_00000011;
  FNetRefHandle_u_0 FVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte in_R8B;
  undefined1 *puVar12;
  ulonglong uVar13;
  FString local_28;
  
  FVar8.Value._1_7_ = in_register_00000011;
  FVar8.Value._0_1_ = param_1;
  uVar9 = this->ReplicationSystemId;
  uVar13 = (ulonglong)in_R8B;
  uVar5 = uVar13 ^ 1;
  uVar10 = (&this->NextStaticHandleIndex)[uVar5] * 2;
  uVar2 = uVar10 & 0x3fffffffffffff;
  uVar11 = uVar2 | uVar13;
  if ((uVar11 != (uVar10 | uVar13)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Id & FNetRefHandle::IdMask) == Id",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x48d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
    return (FNetRefHandle)FVar6.field0_0x0;
  }
  if ((0x3fe < uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemId < FNetRefHandle::MaxReplicationSystemId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x48e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
    return (FNetRefHandle)FVar6.field0_0x0;
  }
  uVar9 = uVar9 + 1;
  uVar10 = (ulonglong)uVar9 << 0x36 | uVar11;
  if (*(int *)&(this->RefHandleToInternalIndex).field_0x8 !=
      *(int *)&(this->RefHandleToInternalIndex).field_0x34) {
    puVar12 = *(undefined1 **)&(this->RefHandleToInternalIndex).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->RefHandleToInternalIndex).field_0x38;
    }
    iVar4 = *(int *)(puVar12 +
                    ((uVar2 >> 0x20) * 0x17 + uVar11 &
                    (ulonglong)(*(int *)&(this->RefHandleToInternalIndex).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if ((*(ulonglong *)(*(longlong *)&this->RefHandleToInternalIndex + (longlong)iVar4 * 0x18) &
            0x3fffffffffffff) == uVar11) {
          if (uVar10 < 0x40000000000000) {
            ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            if (((uVar9 & 0x3ff) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ReplicationSystemId != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                                   ,0x2b,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
              return (FNetRefHandle)FVar6.field0_0x0;
            }
            ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                             ,0x153,
                             L"FNetRefHandleManager::AllocateNetHandle - Handle %s already exists!")
          ;
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (!bVar3) {
            *(undefined8 *)FVar8 = 0;
            return (FNetRefHandle)FVar8._s_0;
          }
          pcVar1 = (code *)swi(3);
          FVar6.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
          return (FNetRefHandle)FVar6.field0_0x0;
        }
        iVar4 = *(int *)(*(longlong *)&this->RefHandleToInternalIndex + 0x10 +
                        (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  uVar7 = (&this->NextStaticHandleIndex)[uVar5];
  *(ulonglong *)FVar8 = uVar10;
  uVar10 = uVar7 + 1 & 0x1fffffffffffff;
  uVar7 = 1;
  if (uVar10 != 0) {
    uVar7 = uVar10;
  }
  (&this->NextStaticHandleIndex)[uVar5] = uVar7;
  return (FNetRefHandle)FVar8;
}

// AttachInstanceProtocol @ 14426e220

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRefHandleManager::AttachInstanceProtocol
          (FNetRefHandleManager *this,uint param_1,FReplicationInstanceProtocol *param_2,
          UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  FReplicatedObjectData *pFVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  TObjectPtr<UObject> *pTVar5;
  
  if ((param_1 == 0) || (param_2 == (FReplicationInstanceProtocol *)0x0)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4467568253371154141>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x123,"(InternalIndex != InvalidInternalIndex) && InstanceProtocol");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,param_1);
    pFVar3->InstanceProtocol = param_2;
    pTVar4 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                         &this->ReplicatedInstances,param_1)->field0_0x0;
    if (pTVar4->DebugPtr != (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicatedInstances[InternalIndex] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x128,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                        &this->ReplicatedInstances,param_1);
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_3);
    }
    (pTVar5->field0_0x0).DebugPtr = param_3;
    FNetBitArrayHelper::SetBitValue
              ((uint *)(this->ObjectsWithPreUpdate).Storage.AllocatorInstance.Data,
               (this->ObjectsWithPreUpdate).BitCount,param_1,
               (bool)((byte)(char)param_2->InstanceTraits >> 3 & 1));
    FNetBitArrayHelper::SetBitValue
              ((uint *)(this->ObjectsWithFullPushBasedDirtiness).Storage.AllocatorInstance.Data,
               (this->ObjectsWithFullPushBasedDirtiness).BitCount,param_1,
               (bool)((byte)(char)param_2->InstanceTraits >> 5 & 1));
  }
  return;
}

// ClearStateForFreedInternalIndex @ 144270dc0

void __thiscall
UE::Net::Private::FNetRefHandleManager::ClearStateForFreedInternalIndex
          (FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  
  pFVar1 = (this->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->GlobalScopableInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = (ulonglong)(param_1 >> 5);
  uVar5 = param_1 & 0x1f;
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  pFVar1 = (this->ObjectsWithPreUpdate).Storage.AllocatorInstance.Data;
  if ((this->ObjectsWithPreUpdate).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  pFVar1 = (this->SubObjectInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->SubObjectInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  pFVar1 = (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->ObjectsWithDependentObjectsInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  pFVar1 = (this->WantToBeDormantInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->WantToBeDormantInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  pFVar1 = (this->DormantObjectsPendingFlushNet).Storage.AllocatorInstance.Data;
  if ((this->DormantObjectsPendingFlushNet).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  pFVar1 = (this->ObjectsWithFullPushBasedDirtiness).Storage.AllocatorInstance.Data;
  if ((this->ObjectsWithFullPushBasedDirtiness).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar4 * 4) = *(uint *)(pFVar1 + uVar4 * 4) & ~(1 << uVar5);
  return;
}

// CreateHandleForDestructionInfo @ 144272290

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::CreateHandleForDestructionInfo
          (FNetRefHandleManager *this,FNetRefHandle param_1,FCreateNetObjectParams *param_2)

{
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *this_00;
  FReplicationProtocol *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  uchar **ppuVar6;
  FNetRefHandle FVar7;
  ulong64 uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  FCreateNetObjectParams *in_R9;
  uint local_res10 [2];
  uint local_88 [2];
  uint *local_80;
  uint local_78;
  uint local_74 [3];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 local_60;
  FNetRefHandle_u_0 local_58;
  uint *local_50;
  uint *local_48;
  uint *local_40;
  uint *local_38;
  
  AllocateNetRefHandle(this,SUB81(&local_58,0));
  local_74[1] = 0;
  local_74[2] = 0;
  local_60 = 0;
  uVar4 = InternalCreateNetObject(this,(FNetRefHandle)local_58,(FNetHandle)&local_60,in_R9);
  if (uVar4 == 0) {
    *(undefined8 *)param_1.field0_0x0 = 0;
  }
  else {
    TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
    ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                  *)&this->ReplicatedObjectData,uVar4);
    this_01 = in_R9->ReplicationProtocol;
    uVar8 = 1;
    if (1 < this_01->InternalTotalSize) {
      uVar8 = (ulong64)this_01->InternalTotalSize;
    }
    puVar5 = FMemory::MallocZeroed(uVar8,this_01->InternalTotalAlignment);
    if ((this_01->ProtocolTraits & HasConditionalChangeMask) != None) {
      local_74[0] = this_01->ChangeMaskBitCount;
      local_78 = local_74[0] + 0x1f >> 5;
      local_80 = local_74;
      if (local_74[0] != 0) {
        local_80 = (uint *)(puVar5 + this_01->InternalChangeMasksOffset);
      }
      memset(local_80,0xff,(ulonglong)local_78 << 2);
      if (local_74[0] != 0) {
        local_80[local_78 - 1] =
             local_80[local_78 - 1] & 0xffffffffU >> (-(char)local_74[0] & 0x1fU);
      }
    }
    ppuVar6 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                         &this->ReplicatedObjectStateBuffers,uVar4);
    *ppuVar6 = puVar5;
    FReplicationProtocol::AddRef(this_01);
    *(FNetRefHandle_u_0 *)param_1.field0_0x0 = local_58;
    if (local_58 != 0) {
      uVar4 = GetInternalIndex(this,(FNetRefHandle)local_58);
      local_88[0] = uVar4;
      local_res10[0] = GetInternalIndex(this,(FNetRefHandle)param_2);
      pFVar1 = (this->DestroyedStartupObjectInternalIndices).Storage.AllocatorInstance.Data;
      if (((this->DestroyedStartupObjectInternalIndices).BitCount <= uVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar7.field0_0x0 = (FNetRefHandle_u_0)(*pcVar2)();
        return (FNetRefHandle)FVar7.field0_0x0;
      }
      *(uint *)(pFVar1 + (ulonglong)(uVar4 >> 5) * 4) =
           *(uint *)(pFVar1 + (ulonglong)(uVar4 >> 5) * 4) | 1 << (uVar4 & 0x1f);
      if (local_res10[0] != 0) {
        this_00 = &this->DestroyedStartupObject;
        puVar11 = &(this->DestroyedStartupObject).field_0x40;
        if (*(int *)&(this->DestroyedStartupObject).field_0x8 !=
            *(int *)&(this->DestroyedStartupObject).field_0x34) {
          puVar10 = *(undefined1 **)puVar11;
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &(this->DestroyedStartupObject).field_0x38;
          }
          uVar4 = *(uint *)(puVar10 +
                           (ulonglong)
                           (*(int *)&(this->DestroyedStartupObject).field_0x48 - 1U & local_88[0]) *
                           4);
          if (uVar4 != 0xffffffff) {
            do {
              puVar9 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this_00->field_0x0);
              if (*puVar9 == local_88[0]) {
                if ((uVar4 != 0xffffffff) && (puVar9 != (uint *)0x0)) goto LAB_1442724b3;
                break;
              }
              uVar4 = puVar9[2];
            } while (uVar4 != 0xffffffff);
          }
        }
        local_50 = local_88;
        local_48 = local_res10;
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_68,
                   (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)
                   (ulonglong)local_88[0],(bool *)&local_50);
LAB_1442724b3:
        FNetBitArray::SetBit(&this->DestroyedStartupObjectInternalIndices,local_res10[0]);
        if (*(int *)&(this->DestroyedStartupObject).field_0x8 !=
            *(int *)&(this->DestroyedStartupObject).field_0x34) {
          puVar11 = *(undefined1 **)puVar11;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(this->DestroyedStartupObject).field_0x38;
          }
          uVar4 = *(uint *)(puVar11 +
                           (ulonglong)
                           (*(int *)&(this->DestroyedStartupObject).field_0x48 - 1U & local_res10[0]
                           ) * 4);
          if (uVar4 != 0xffffffff) {
            do {
              puVar9 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this_00->field_0x0);
              if (*puVar9 == local_res10[0]) {
                if (puVar9 != (uint *)0x0) {
                  return (FNetRefHandle)param_1.field0_0x0.Value;
                }
                break;
              }
              uVar4 = puVar9[2];
            } while (uVar4 != 0xffffffff);
          }
        }
        local_40 = local_res10;
        local_38 = local_88;
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_64,
                   (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)
                   (ulonglong)local_res10[0],(bool *)&local_40);
      }
    }
  }
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// CreateNetObject @ 1442727b0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::CreateNetObject
          (FNetRefHandleManager *this,FNetRefHandle param_1,FNetHandle param_2,
          FCreateNetObjectParams *param_3)

{
  FReplicationProtocol *this_00;
  uint uVar1;
  uchar *puVar2;
  uchar **ppuVar3;
  ulong64 uVar4;
  uint *_Dst;
  uint uVar5;
  undefined8 local_res18;
  FCreateNetObjectParams *in_stack_00000028;
  uint local_1c;
  
  local_res18._0_1_ = param_3->NetFactoryId;
  local_res18._1_1_ = param_3->IrisAsyncLoadingPriority;
  local_res18._2_6_ = *(undefined6 *)&param_3->field_0x2;
  uVar1 = InternalCreateNetObject
                    (this,(FNetRefHandle)param_2.field0_0x0,(FNetHandle)&local_res18,
                     in_stack_00000028);
  if (uVar1 == 0) {
    *(undefined8 *)param_1.field0_0x0 = 0;
  }
  else {
    TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
    ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                  *)&this->ReplicatedObjectData,uVar1);
    this_00 = in_stack_00000028->ReplicationProtocol;
    uVar4 = 1;
    if (1 < this_00->InternalTotalSize) {
      uVar4 = (ulong64)this_00->InternalTotalSize;
    }
    puVar2 = FMemory::MallocZeroed(uVar4,this_00->InternalTotalAlignment);
    if ((this_00->ProtocolTraits & HasConditionalChangeMask) != None) {
      local_1c = this_00->ChangeMaskBitCount;
      uVar5 = local_1c + 0x1f >> 5;
      _Dst = &local_1c;
      if (local_1c != 0) {
        _Dst = (uint *)(puVar2 + this_00->InternalChangeMasksOffset);
      }
      memset(_Dst,0xff,(ulonglong)uVar5 << 2);
      if (local_1c != 0) {
        _Dst[uVar5 - 1] = _Dst[uVar5 - 1] & 0xffffffffU >> (-(char)local_1c & 0x1fU);
      }
    }
    ppuVar3 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                         &this->ReplicatedObjectStateBuffers,uVar1);
    *ppuVar3 = puVar2;
    FReplicationProtocol::AddRef(this_00);
    *(FNetHandle_u_0 *)param_1.field0_0x0 = param_2.field0_0x0;
  }
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// CreateNetObjectFromRemote @ 1442729c0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::CreateNetObjectFromRemote
          (FNetRefHandleManager *this,FNetRefHandle param_1,FCreateNetObjectParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNetRefHandle FVar4;
  FReplicatedObjectData *pFVar5;
  uchar *_Dst;
  ulonglong uVar6;
  FCreateNetObjectParams *in_R9;
  FCreateNetObjectParams *local_res18 [2];
  undefined8 local_28;
  FCreateNetObjectParams **local_20;
  
  local_res18[0] = param_2;
  if ((param_2 == (FCreateNetObjectParams *)0x0) || (((ulonglong)param_2 & 0xffc0000000000000) != 0)
     ) {
    local_20 = local_res18;
    bVar2 = `UE::Net::Private::FNetRefHandleManager::CreateNetObjectFromRemote'::__l3::<lambda_1>::
            operator()(&local_20);
    if (!bVar2) goto LAB_144272af5;
  }
  if ((in_R9->NetFactoryId == 0xff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.NetFactoryId != UE::Net::InvalidNetObjectFactoryId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x187,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
    return (FNetRefHandle)FVar4.field0_0x0;
  }
  uVar3 = this->ReplicationSystemId;
  uVar6 = (ulonglong)local_res18[0] & 0x3fffffffffffff;
  if ((0x3fe < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationSystemId < FNetRefHandle::MaxReplicationSystemId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x48e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
    return (FNetRefHandle)FVar4.field0_0x0;
  }
  local_28 = 0;
  FVar4.field0_0x0 = (FNetRefHandle_u_0)((ulonglong)(uVar3 + 1) << 0x36 | uVar6);
  uVar3 = InternalCreateNetObject(this,FVar4,(FNetHandle)&local_28,in_R9);
  if (uVar3 != 0) {
    pFVar5 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,uVar3);
    _Dst = FMemory::Malloc((ulonglong)in_R9->ReplicationProtocol->InternalTotalSize,
                           in_R9->ReplicationProtocol->InternalTotalAlignment);
    pFVar5->ReceiveStateBuffer = _Dst;
    memset(_Dst,0,(ulonglong)in_R9->ReplicationProtocol->InternalTotalSize);
    FReplicationProtocol::AddRef(in_R9->ReplicationProtocol);
    *(FNetRefHandle_u_0 *)param_1.field0_0x0 = FVar4.field0_0x0;
    return (FNetRefHandle)param_1.field0_0x0.Value;
  }
LAB_144272af5:
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// Deinit @ 1442748d0

void __thiscall UE::Net::Private::FNetRefHandleManager::Deinit(FNetRefHandleManager *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedInternalIndices).BitCount == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)pFVar8 = *(uint *)pFVar8 & 0xfffffffe;
  uVar1 = (this->AssignedInternalIndices).Storage.ArrayNum;
  uVar9 = 0;
  uVar2 = (this->AssignedInternalIndices).BitCount;
  uVar6 = 0;
  pFVar8 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    do {
      uVar5 = 0xffffffff;
      if (uVar6 == uVar1 - 1) {
        uVar5 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar7 = uVar9;
      for (uVar5 = uVar5 & *(uint *)pFVar8; uVar5 != 0; uVar5 = uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          InternalDestroyNetObject(this,uVar7);
        }
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar6 + 1;
      pFVar8 = pFVar8 + 4;
      uVar9 = uVar9 + 0x20;
    } while (uVar6 < uVar1);
  }
  (this->OwnedNetBitArrays).ArrayNum = 0;
  if ((this->OwnedNetBitArrays).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->OwnedNetBitArrays).AllocatorInstance,0,
               &(this->OwnedNetBitArrays).ArrayMax);
  }
  bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnMaxInternalNetRefIndexIncreased);
  if (bVar4) {
    `UE::Net::Private::FNetRefHandleManager::Deinit'::__l2::<lambda_2>::operator()(local_res8);
    return;
  }
  return;
}

// DestroyNetObject @ 144276620

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRefHandleManager::DestroyNetObject
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FInternalValue FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FReplicatedObjectData *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  FNetRefHandle_u_0 local_res10;
  uint local_18 [4];
  
  local_res10 = param_1.field0_0x0;
  uVar7 = TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
          ::FindAndRemoveChecked(&this->RefHandleToInternalIndex,(FNetRefHandle *)&local_res10._s_0)
  ;
  pFVar3 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  local_18[0] = uVar7;
  if ((this->AssignedInternalIndices).BitCount <= uVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((*(uint *)(pFVar3 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4467568253371153871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x231,"AssignedInternalIndices.GetBit(InternalIndex)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar9 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,local_18[0]);
    if ((((ulonglong)param_1.field0_0x0 ^ (pFVar9->RefHandle).field0_0x0.Value) & 0x3fffffffffffff)
        != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.RefHandle == RefHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x234,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(int *)&(this->NetHandleToInternalIndex).field_0x8 !=
        *(int *)&(this->NetHandleToInternalIndex).field_0x34) {
      FVar4 = (pFVar9->NetHandle).field0_0x0.InternalValue;
      uVar7 = FVar4.Epoch;
      uVar11 = FVar4.Id - uVar7 ^ uVar7 >> 0xd;
      uVar12 = (-0x61c88647 - uVar11) - uVar7 ^ uVar11 << 8;
      uVar7 = (uVar7 - uVar12) - uVar11 ^ uVar12 >> 0xd;
      uVar11 = (uVar11 - uVar7) - uVar12 ^ uVar7 >> 0xc;
      uVar12 = (uVar12 - uVar11) - uVar7 ^ uVar11 << 0x10;
      uVar7 = (uVar7 - uVar12) - uVar11 ^ uVar12 >> 5;
      uVar11 = (uVar11 - uVar7) - uVar12 ^ uVar7 >> 3;
      uVar12 = (uVar12 - uVar11) - uVar7 ^ uVar11 << 10;
      TSet<TTuple<UE::Net::FNetHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Net::FNetHandle>
                ((TSet<TTuple<UE::Net::FNetHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->NetHandleToInternalIndex,(uVar7 - uVar12) - uVar11 ^ uVar12 >> 0xf,
                 &pFVar9->NetHandle);
    }
    uVar7 = local_18[0];
    pFVar3 = (this->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data;
    if ((this->GlobalScopableInternalIndices).BitCount <= local_18[0]) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = (ulonglong)(uVar7 >> 5);
    *(uint *)(pFVar3 + uVar10 * 4) = *(uint *)(pFVar3 + uVar10 * 4) & ~(1 << (uVar7 & 0x1f));
    pTVar2 = &this->PendingDestroyInternalIndices;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3 + (longlong)(this->PendingDestroyInternalIndices).ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->PendingDestroyInternalIndices).ArrayNum;
    piVar1 = &(this->PendingDestroyInternalIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingDestroyInternalIndices).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_18[0];
  }
  return;
}

// DestroyObjectsPendingDestroy @ 144276a50

void __thiscall
UE::Net::Private::FNetRefHandleManager::DestroyObjectsPendingDestroy(FNetRefHandleManager *this)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  TMulticastDelegate<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  bool bVar22;
  uint local_78 [2];
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  FScriptContainerElement *local_60;
  int local_58;
  FDestructionSentinel local_50;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId579,"FNetRefHandleManager_DestroyObjectsPendingDestroy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
               ,0x243);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId579);
  }
  uVar20 = (this->PendingDestroyInternalIndices).ArrayNum;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  iStack_64 = 0;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (0 < (int)uVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&local_70,0,&iStack_64);
  }
  uVar20 = (this->PendingDestroyInternalIndices).ArrayNum - 1;
  if (-1 < (int)uVar20) {
    pTVar1 = &this->PendingDestroyInternalIndices;
    lVar21 = (longlong)(int)uVar20;
    lVar19 = lVar21 * 4;
    do {
      uVar17 = ~uVar20 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar20 < (this->PendingDestroyInternalIndices).ArrayNum) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = *(uint *)((pTVar1->AllocatorInstance).Data + lVar19);
      uVar7 = (int)uVar11 / 100;
      uVar12 = 0;
      if ((int)uVar7 < (int)(this->ReplicatedObjectRefCount)._padding_) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      local_78[0] = uVar11;
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(short *)(*(longlong *)
                      ((this->ReplicatedObjectRefCount)._padding_ + (longlong)(int)uVar7 * 8) +
                    (ulonglong)(uint)((int)uVar11 % 100) * 2) == 0) {
        if (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
            *(int *)&(this->SubObjects).DependencyInfos.field_0x34) {
          puVar3 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
          puVar18 = &(this->SubObjects).DependencyInfos.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar18 = puVar3;
          }
          iVar13 = *(int *)(puVar18 +
                           (ulonglong)
                           (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U &
                           local_78[0]) * 4);
          if (iVar13 != -1) {
            lVar16 = *(longlong *)&(this->SubObjects).DependencyInfos;
            do {
              lVar2 = lVar16 + (longlong)iVar13 * 0x28;
              if (*(uint *)(lVar16 + (longlong)iVar13 * 0x28) == local_78[0]) {
                piVar15 = (int *)(lVar2 + 4);
                if (lVar2 == 0) {
                  piVar15 = (int *)0x0;
                }
                if ((piVar15 != (int *)0x0) && (*piVar15 != -1)) {
                  iVar13 = *(int *)(*(longlong *)&(this->SubObjects).DependentObjectsStorage + 0x28
                                   + (longlong)*piVar15 * 0x30);
                  if (iVar13 < 0) {
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L"");
                    if (bVar8) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  else if (0 < iVar13) goto LAB_144276e23;
                }
                break;
              }
              iVar13 = *(int *)(lVar2 + 0x20);
            } while (iVar13 != -1);
          }
        }
        if (((local_70.Data <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 < local_70.Data + (longlong)iStack_64 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_68 == iStack_64) {
          local_68 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_70,&iStack_64);
        }
        lVar16 = (longlong)local_68;
        local_68 = local_68 + 1;
        *(uint *)(local_70.Data + lVar16 * 4) = local_78[0];
        InternalDestroyNetObject(this,local_78[0]);
        uVar11 = 0;
        if ((int)uVar20 < (this->PendingDestroyInternalIndices).ArrayNum) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = (this->PendingDestroyInternalIndices).ArrayNum;
        iVar14 = ~uVar20 + iVar13;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove(pFVar4 + lVar21 * 4,pFVar4 + (longlong)(iVar13 - iVar14) * 4,(longlong)iVar14 << 2
                 );
        }
        piVar15 = &(this->PendingDestroyInternalIndices).ArrayNum;
        *piVar15 = *piVar15 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,(this->PendingDestroyInternalIndices).ArrayNum,
                   &(this->PendingDestroyInternalIndices).ArrayMax);
      }
LAB_144276e23:
      lVar21 = lVar21 + -1;
      lVar19 = lVar19 + -4;
      uVar20 = uVar20 - 1;
    } while (-1 < (int)uVar20);
  }
  if (__CsvProfilerStat597 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PendingDestroyInternalIndicesCount",_GCsvCategory_IrisCommon.Index);
    __CsvProfilerStat597 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PendingDestroyInternalIndicesCount",_GCsvCategory_IrisCommon.Index,
             (float)(this->PendingDestroyInternalIndices).ArrayNum,Set);
  this_00 = &this->OnInternalNetRefIndicesFreed;
  bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  iVar13 = local_68;
  if (bVar8) {
    local_60 = local_70.Data;
    if ((local_68 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_58 = iVar13;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_50);
    puVar3 = &(this->OnInternalNetRefIndicesFreed).field_0x1c;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    bVar8 = false;
    uVar20 = *(int *)&(this->OnInternalNetRefIndicesFreed).field_0x10 - 1;
    if (-1 < (int)uVar20) {
      lVar19 = (longlong)(int)uVar20 << 4;
      bVar8 = false;
      do {
        uVar11 = 0;
        if ((int)uVar20 < *(int *)&(this->OnInternalNetRefIndicesFreed).field_0x10) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar21 = *(longlong *)&(this->OnInternalNetRefIndicesFreed).field_0x8;
        if (((*(int *)(lVar19 + 8 + lVar21) == 0) ||
            (plVar5 = *(longlong **)(lVar19 + lVar21), plVar5 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
          bVar8 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar20 = uVar20 - 1;
      } while (-1 < (int)uVar20);
    }
    puVar3 = &(this->OnInternalNetRefIndicesFreed).field_0x1c;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DetachInstanceProtocol @ 144277220

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicationInstanceProtocol * __thiscall
UE::Net::Private::FNetRefHandleManager::DetachInstanceProtocol
          (FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReplicationInstanceProtocol *pFVar4;
  FReplicatedObjectData *pFVar5;
  TObjectPtr<UObject>_u_0 *pTVar6;
  ulonglong uVar7;
  
  if (param_1 != 0) {
    pFVar5 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,param_1);
    pFVar4 = pFVar5->InstanceProtocol;
    pFVar5->InstanceProtocol = (FReplicationInstanceProtocol *)0x0;
    pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                         &this->ReplicatedInstances,param_1)->field0_0x0;
    *pTVar6 = (TObjectPtr<UObject>_u_0)0x0;
    pFVar1 = (this->ObjectsWithPreUpdate).Storage.AllocatorInstance.Data;
    if ((this->ObjectsWithPreUpdate).BitCount <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FReplicationInstanceProtocol *)(*pcVar2)();
        return pFVar4;
      }
    }
    uVar7 = (ulonglong)(param_1 >> 5);
    *(uint *)(pFVar1 + uVar7 * 4) = *(uint *)(pFVar1 + uVar7 * 4) & ~(1 << (param_1 & 0x1f));
    pFVar1 = (this->ObjectsWithFullPushBasedDirtiness).Storage.AllocatorInstance.Data;
    if ((this->ObjectsWithFullPushBasedDirtiness).BitCount <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FReplicationInstanceProtocol *)(*pcVar2)();
        return pFVar4;
      }
    }
    *(uint *)(pFVar1 + uVar7 * 4) = *(uint *)(pFVar1 + uVar7 * 4) & ~(1 << (param_1 & 0x1f));
    return pFVar4;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4467568253371154126>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                     ,0x132,"InternalIndex != InvalidInternalIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FReplicationInstanceProtocol *)(*pcVar2)();
    return pFVar4;
  }
  return (FReplicationInstanceProtocol *)0x0;
}

// GetCreationDependencies @ 144279ea0

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Net::Private::FNetRefHandleManager::GetCreationDependencies
          (FNetRefHandleManager *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          uint param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<unsigned_int_const_,int> *pTVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  
  pFVar4 = (this->ObjectsWithCreationDependencies).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithCreationDependencies).BitCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
    return pTVar8;
  }
  if (((*(uint *)(pFVar4 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) &&
     (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
      *(int *)&(this->SubObjects).DependencyInfos.field_0x34)) {
    puVar11 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->SubObjects).DependencyInfos.field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      lVar10 = *(longlong *)&(this->SubObjects).DependencyInfos;
      do {
        lVar1 = lVar10 + (longlong)iVar7 * 0x28;
        if (*(uint *)(lVar10 + (longlong)iVar7 * 0x28) == param_1) {
          lVar10 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar10 = 0;
          }
          if (((lVar10 != 0) && (*(int *)(lVar10 + 0x18) != -1)) &&
             (puVar2 = (uint *)(*(longlong *)&(this->SubObjects).CreationDependencyInfosStorage +
                               (longlong)*(int *)(lVar10 + 0x18) * 0x18), puVar2 != (uint *)0x0)) {
            uVar3 = puVar2[4];
            puVar9 = *(uint **)(puVar2 + 2);
            if (*(uint **)(puVar2 + 2) == (uint *)0x0) {
              puVar9 = puVar2;
            }
            __return_storage_ptr__->DataPtr = puVar9;
            if (((int)uVar3 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
              return pTVar8;
            }
            __return_storage_ptr__->ArrayNum = uVar3;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetDependentObjectInfos @ 14427a160

TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> * __thiscall
UE::Net::Private::FNetRefHandleManager::GetDependentObjectInfos
          (FNetRefHandleManager *this,
          TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> *__return_storage_ptr__,
          uint param_1)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDependentObjectInfo FVar6;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> *pTVar7;
  longlong lVar8;
  FDependentObjectInfo *pFVar9;
  undefined1 *puVar10;
  
  if (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
      *(int *)&(this->SubObjects).DependencyInfos.field_0x34) {
    puVar10 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SubObjects).DependencyInfos.field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)&(this->SubObjects).DependencyInfos;
      do {
        lVar1 = lVar8 + (longlong)iVar5 * 0x28;
        if (*(uint *)(lVar8 + (longlong)iVar5 * 0x28) == param_1) {
          lVar8 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar8 = 0;
          }
          if ((lVar8 != 0) && (*(int *)(lVar8 + 0x14) != -1)) {
            pFVar9 = (FDependentObjectInfo *)
                     ((longlong)*(int *)(lVar8 + 0x14) * 0x50 +
                     *(longlong *)&(this->SubObjects).DependentObjectInfosStorage);
            uVar2 = pFVar9[9].NetRefIndex;
            FVar6 = pFVar9[8];
            if (pFVar9[8] == (FDependentObjectInfo)0x0) {
              FVar6 = (FDependentObjectInfo)pFVar9;
            }
            __return_storage_ptr__->DataPtr = (FDependentObjectInfo *)FVar6;
            if ((int)uVar2 < 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar7 = (TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> *)
                         (*pcVar3)();
                return pTVar7;
              }
            }
            __return_storage_ptr__->ArrayNum = uVar2;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (FDependentObjectInfo *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNetRefHandleFromInternalIndex @ 14427aa40

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
          (FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNetRefHandle FVar4;
  FReplicatedObjectData *pFVar5;
  undefined4 in_register_00000014;
  FNetRefHandle_u_0 FVar6;
  uint in_R8D;
  
  FVar6.Value._4_4_ = in_register_00000014;
  FVar6.Value._0_4_ = param_1;
  pFVar1 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedInternalIndices).BitCount <= in_R8D) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FNetRefHandle_u_0)(*pcVar2)();
      return (FNetRefHandle)FVar4.field0_0x0;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(in_R8D >> 5) * 4) >> (in_R8D & 0x1f) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssignedInternalIndices.GetBit(InternalIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                       ,0x245,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FNetRefHandle_u_0)(*pcVar2)();
      return (FNetRefHandle)FVar4.field0_0x0;
    }
  }
  pFVar5 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         *)&this->ReplicatedObjectData,in_R8D);
  *(FNetRefHandle_u_0 *)FVar6 = (pFVar5->RefHandle).field0_0x0;
  return (FNetRefHandle)FVar6;
}

// GetNextFreeInternalIndex @ 14427ace0

/* WARNING: Removing unreachable block (ram,0x00014427ad20) */

uint __thiscall
UE::Net::Private::FNetRefHandleManager::GetNextFreeInternalIndex(FNetRefHandleManager *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  uVar4 = (this->AssignedInternalIndices).Storage.ArrayNum;
  uVar2 = 0;
  pFVar5 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  iVar6 = 0;
  if (uVar4 != 0) {
    do {
      if (*(uint *)pFVar5 != 0xffffffff) {
        uVar4 = ~*(uint *)pFVar5;
        iVar1 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        iVar3 = 0x20;
        if (uVar4 != 0) {
          iVar3 = iVar1;
        }
        uVar4 = 0xffffffff;
        if ((uint)(iVar3 + iVar6) < (this->AssignedInternalIndices).BitCount) {
          uVar4 = iVar3 + iVar6;
        }
        uVar2 = 0;
        if (uVar4 != 0xffffffff) {
          uVar2 = uVar4;
        }
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pFVar5 = pFVar5 + 4;
      iVar6 = iVar6 + 0x20;
    } while (uVar2 < uVar4);
  }
  return 0;
}

// GetNextNetRefHandleId @ 14427ad60

ulong64 __thiscall
UE::Net::Private::FNetRefHandleManager::GetNextNetRefHandleId
          (FNetRefHandleManager *this,ulong64 param_1)

{
  ulong64 uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 + 1 & 0x1fffffffffffff;
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetRootObjectInternalIndexOfSubObject @ 14427cc00

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FNetRefHandleManager::GetRootObjectInternalIndexOfSubObject
          (FNetRefHandleManager *this,uint param_1)

{
  FReplicatedObjectData *pFVar1;
  
  if (param_1 != 0) {
    pFVar1 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,param_1);
    return pFVar1->SubObjectRootIndex;
  }
  return 0;
}

// GetRootObjectOfAnyObject @ 14427cc30

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::GetRootObjectOfAnyObject
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  uint uVar1;
  FReplicatedObjectData *pFVar2;
  FNetRefHandle_u_0 FVar3;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  *this_00;
  FNetRefHandle in_R8;
  
  uVar1 = GetInternalIndex(this,in_R8);
  if (uVar1 == 0) {
LAB_14427cc7b:
    FVar3.Value = 0;
  }
  else {
    this_00 = &this->ReplicatedObjectData;
    pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)this_00,uVar1);
    if (pFVar2->SubObjectRootIndex != 0) {
      pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                             *)this_00,uVar1);
      uVar1 = pFVar2->SubObjectRootIndex;
      if (uVar1 == 0) goto LAB_14427cc7b;
    }
    pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)this_00,uVar1);
    FVar3 = (pFVar2->RefHandle).field0_0x0;
  }
  *(FNetRefHandle_u_0 *)param_1.field0_0x0 = FVar3;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// GetRootObjectOfSubObject @ 14427cd40

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UE::Net::Private::FNetRefHandleManager::GetRootObjectOfSubObject
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  uint uVar1;
  FReplicatedObjectData *pFVar2;
  FNetRefHandle in_R8;
  
  uVar1 = GetInternalIndex(this,in_R8);
  if (uVar1 != 0) {
    pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,uVar1);
    if (pFVar2->SubObjectRootIndex != 0) {
      pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                             *)&this->ReplicatedObjectData,pFVar2->SubObjectRootIndex);
      *(FNetRefHandle_u_0 *)param_1.field0_0x0 = (pFVar2->RefHandle).field0_0x0;
      return (FNetRefHandle)param_1.field0_0x0.Value;
    }
  }
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// GrowNetChunkedArrayBuffers @ 14427d250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRefHandleManager::GrowNetChunkedArrayBuffers
          (FNetRefHandleManager *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::GrowNetChunkedArrayBuffers(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar9;
  FName FVar10;
  longlong lVar11;
  LARGE_INTEGER LVar12;
  uint uVar13;
  ulonglong uVar14;
  FNameEntryId FVar15;
  uint uVar16;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  FVar15.Value = 0;
  local_res8 = (LARGE_INTEGER)this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::GrowNetChunkedArrayBuffers(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res18,"STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers,*pFVar7,
                 L"STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers;
  if (StatPtr_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::GrowNetChunkedArrayBuffers(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::GrowNetChunkedArrayBuffers(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers,*pFVar7,
                         L"STAT_FNetRefHandleManager_GrowNetChunkedArrayBuffers","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar16 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar9.Value;
        local_res18.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                   ,0xa2);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.ComparisonIndex.Value = FVar9.Value;
      local_res18.Number = uVar16;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar5 = true;
      FVar15.Value = FVar9.Value;
      goto LAB_14427d3e4;
    }
  }
  bVar5 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14427d3e4:
  if (__CsvProfilerStat163 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("DynamicNetChunkedArrayGrowCount",_GCsvCategory_IrisCommon.Index);
    __CsvProfilerStat163 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("DynamicNetChunkedArrayGrowCount",_GCsvCategory_IrisCommon.Index,1,Accumulate);
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>::AddToIndexUninitialized
            (&this->ReplicatedObjectRefCount,param_1);
  uVar16 = (int)(this->ReplicatedObjectRefCount)._padding_ * 100 - 1;
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>::AddToIndexUninitialized
            (&this->ReplicatedObjectRefCount,uVar16);
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>::AddToIndexZeroed
            (&this->ReplicatedObjectStateBuffers,uVar16);
  iVar2 = (int)(this->ReplicatedInstances)._padding_;
  uVar14 = (ulonglong)iVar2;
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>::AddToIndexUninitialized
            (&this->ReplicatedInstances,uVar16);
  if (iVar2 < (int)(this->ReplicatedInstances)._padding_) {
    lVar11 = uVar14 * 8;
    do {
      memset(*(void **)(lVar11 + (this->ReplicatedInstances)._padding_),0,800);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      lVar11 = lVar11 + 8;
    } while ((int)uVar13 < (int)(this->ReplicatedInstances)._padding_);
  }
  iVar2 = (int)(this->ReplicatedObjectData)._padding_;
  iVar3 = (int)(this->ReplicatedObjectData)._padding_;
  uVar14 = (ulonglong)iVar3;
  if (iVar2 <= (int)uVar16) {
    TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
    ::Add((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           *)&this->ReplicatedObjectData,(uVar16 - iVar2) + 1);
  }
  LVar12 = (LARGE_INTEGER)this;
  if (iVar3 < (int)(this->ReplicatedObjectData)._padding_) {
    lVar11 = uVar14 * 8;
    do {
      memset(*(void **)((this->ReplicatedObjectData)._padding_ + lVar11),0,0x15e0);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      lVar11 = lVar11 + 8;
      LVar12 = local_res8;
    } while ((int)uVar13 < (int)(this->ReplicatedObjectData)._padding_);
  }
  *(uint *)(LVar12.QuadPart + 0x10) = uVar16;
  TMulticastDelegate<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *)
             (LVar12.QuadPart + 0x488),uVar16);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GrowNetObjectLists @ 14427d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FNetRefHandleManager::GrowNetObjectLists(FNetRefHandleManager *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->AssignedInternalIndices).BitCount != this->CurrentMaxInternalNetRefIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssignedInternalIndices.GetNumBits() == CurrentMaxInternalNetRefIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = this->CurrentMaxInternalNetRefIndex;
  uVar1 = this->MaxActiveObjectCount;
  if (uVar1 <= uVar4) {
    return 0;
  }
  uVar5 = this->InternalNetRefIndexGrowSize + uVar4;
  this->CurrentMaxInternalNetRefIndex = uVar5;
  if (uVar1 < uVar5) {
    this->CurrentMaxInternalNetRefIndex = uVar1;
  }
  if (4 < (byte)LogIris._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  MaxInternalNetRefIndexIncreased(this,this->CurrentMaxInternalNetRefIndex);
  return uVar4;
}

// HasInstanceProtocol @ 14427d780

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetRefHandleManager::HasInstanceProtocol(FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FReplicatedObjectData *pFVar5;
  
  if (param_1 != 0) {
    pFVar1 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
    if ((this->AssignedInternalIndices).BitCount <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex == InvalidInternalIndex || AssignedInternalIndices.GetBit(InternalIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x145,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  pFVar5 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         *)&this->ReplicatedObjectData,param_1);
  return pFVar5->InstanceProtocol != (FReplicationInstanceProtocol *)0x0;
}

// Init @ 14427d8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRefHandleManager::Init(FNetRefHandleManager *this,FInitParams *param_1)

{
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  *this_00;
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *pTVar1;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *pTVar2;
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  *pTVar9;
  void *pvVar10;
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *pTVar11;
  void *pvVar12;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *pTVar13;
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *pTVar14;
  FReplicatedObjectData *this_01;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FNetRefHandle_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  local_b0;
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> local_90;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> local_70;
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> local_50;
  
  uVar19 = 0x20;
  if (param_1->MaxActiveObjectCount == 0) {
    uVar18 = 0x20;
  }
  else {
    uVar18 = param_1->MaxActiveObjectCount + 0x1f & 0xffffffe0;
  }
  this->MaxActiveObjectCount = uVar18;
  uVar16 = uVar18;
  if (param_1->InternalNetRefIndexGrowSize != 0) {
    uVar16 = param_1->InternalNetRefIndexGrowSize + 0x1f & 0xffffffe0;
  }
  this->InternalNetRefIndexGrowSize = uVar16;
  this->ReplicationSystemId = param_1->ReplicationSystemId;
  uVar16 = uVar18;
  if (param_1->NetChunkedArrayCount < uVar18) {
    uVar16 = param_1->NetChunkedArrayCount;
  }
  uVar20 = 1;
  if (1 < uVar16) {
    uVar20 = uVar16;
  }
  this->HighestNetChunkedArrayInternalIndex = uVar20 - 1;
  uVar16 = param_1->InternalNetRefIndexInitSize;
  if ((uVar16 != 0) && (uVar16 < uVar18)) {
    uVar18 = uVar16;
  }
  if (uVar18 != 0) {
    uVar19 = uVar18 + 0x1f & 0xffffffe0;
  }
  this->CurrentMaxInternalNetRefIndex = uVar19;
  if (4 < (byte)LogIris._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  pTVar9 = TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
           ::
           TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
                     (&local_b0,uVar20,Constructor);
  this_00 = &this->ReplicatedObjectData;
  if (this_00 != pTVar9) {
    puVar5 = (undefined8 *)this_00->_padding_;
    for (iVar17 = (int)(this->ReplicatedObjectData)._padding_; iVar17 != 0; iVar17 = iVar17 + -1) {
      ::operator_delete((void *)*puVar5,0x15e0);
      puVar5 = puVar5 + 1;
    }
    piVar4 = (int *)((longlong)&(this->ReplicatedObjectData)._padding_ + 4);
    *(undefined4 *)&(this->ReplicatedObjectData)._padding_ = 0;
    if (*piVar4 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)this_00,0,piVar4);
    }
    if ((void *)this_00->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this_00->_padding_);
    }
    this_00->_padding_ = pTVar9->_padding_;
    pTVar9->_padding_ = 0;
    *(int *)&(this->ReplicatedObjectData)._padding_ = (int)pTVar9->_padding_;
    *piVar4 = *(int *)((longlong)&pTVar9->_padding_ + 4);
    pTVar9->_padding_ = 0;
    *(int *)&(this->ReplicatedObjectData)._padding_ = (int)pTVar9->_padding_;
    (this->ReplicatedObjectData).NumPreAllocatedChunks = pTVar9->NumPreAllocatedChunks;
    *(undefined4 *)&pTVar9->_padding_ = 0;
    pTVar9->NumPreAllocatedChunks = 0;
  }
  pvVar10 = (void *)0x0;
  pvVar15 = pvVar10;
  pvVar12 = pvVar10;
  if (0 < local_b0.NumPreAllocatedChunks) {
    do {
      if (pvVar15 == (void *)0x0) {
        pvVar15 = *(void **)((longlong)pvVar10 + local_b0._padding_);
      }
      *(undefined8 *)((longlong)pvVar10 + local_b0._padding_) = 0;
      uVar19 = (int)pvVar12 + 1;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar12 = (void *)(ulonglong)uVar19;
    } while ((int)uVar19 < local_b0.NumPreAllocatedChunks);
  }
  operator_delete__(pvVar15);
  local_b0.NumPreAllocatedChunks = 0;
  TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&local_b0);
  pTVar11 = TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>::
            TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>(&local_90,uVar20,Zero);
  pTVar1 = &this->ReplicatedObjectRefCount;
  if (pTVar1 != pTVar11) {
    puVar5 = (undefined8 *)pTVar1->_padding_;
    for (iVar17 = (int)(this->ReplicatedObjectRefCount)._padding_; iVar17 != 0; iVar17 = iVar17 + -1
        ) {
      ::operator_delete((void *)*puVar5,200);
      puVar5 = puVar5 + 1;
    }
    piVar4 = (int *)((longlong)&(this->ReplicatedObjectRefCount)._padding_ + 4);
    *(undefined4 *)&(this->ReplicatedObjectRefCount)._padding_ = 0;
    if (*piVar4 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar1,0,piVar4);
    }
    if ((void *)pTVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pTVar1->_padding_);
    }
    pTVar1->_padding_ = pTVar11->_padding_;
    pTVar11->_padding_ = 0;
    *(int *)&(this->ReplicatedObjectRefCount)._padding_ = (int)pTVar11->_padding_;
    *piVar4 = *(int *)((longlong)&pTVar11->_padding_ + 4);
    pTVar11->_padding_ = 0;
    *(int *)&(this->ReplicatedObjectRefCount)._padding_ = (int)pTVar11->_padding_;
    (this->ReplicatedObjectRefCount).NumPreAllocatedChunks = pTVar11->NumPreAllocatedChunks;
    *(undefined4 *)&pTVar11->_padding_ = 0;
    pTVar11->NumPreAllocatedChunks = 0;
  }
  pvVar12 = (void *)0x0;
  iVar17 = 0;
  pvVar15 = pvVar12;
  if (0 < local_90.NumPreAllocatedChunks) {
    do {
      if (pvVar15 == (void *)0x0) {
        pvVar15 = *(void **)((longlong)pvVar12 + local_90._padding_);
      }
      *(undefined8 *)((longlong)pvVar12 + local_90._padding_) = 0;
      iVar17 = iVar17 + 1;
      pvVar12 = (void *)((longlong)pvVar12 + 8);
    } while (iVar17 < local_90.NumPreAllocatedChunks);
  }
  operator_delete__(pvVar15);
  local_90.NumPreAllocatedChunks = 0;
  TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&local_90);
  pTVar13 = TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>::
            TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>(&local_70,uVar20,Zero)
  ;
  pTVar2 = &this->ReplicatedObjectStateBuffers;
  if (pTVar2 != pTVar13) {
    puVar5 = (undefined8 *)pTVar2->_padding_;
    for (iVar17 = (int)(this->ReplicatedObjectStateBuffers)._padding_; iVar17 != 0;
        iVar17 = iVar17 + -1) {
      ::operator_delete((void *)*puVar5,800);
      puVar5 = puVar5 + 1;
    }
    piVar4 = (int *)((longlong)&(this->ReplicatedObjectStateBuffers)._padding_ + 4);
    *(undefined4 *)&(this->ReplicatedObjectStateBuffers)._padding_ = 0;
    if (*piVar4 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar2,0,piVar4);
    }
    if ((void *)pTVar2->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pTVar2->_padding_);
    }
    pTVar2->_padding_ = pTVar13->_padding_;
    pTVar13->_padding_ = 0;
    *(int *)&(this->ReplicatedObjectStateBuffers)._padding_ = (int)pTVar13->_padding_;
    *piVar4 = *(int *)((longlong)&pTVar13->_padding_ + 4);
    pTVar13->_padding_ = 0;
    *(int *)&(this->ReplicatedObjectStateBuffers)._padding_ = (int)pTVar13->_padding_;
    (this->ReplicatedObjectStateBuffers).NumPreAllocatedChunks = pTVar13->NumPreAllocatedChunks;
    *(undefined4 *)&pTVar13->_padding_ = 0;
    pTVar13->NumPreAllocatedChunks = 0;
  }
  pvVar10 = (void *)0x0;
  pvVar15 = pvVar10;
  pvVar12 = pvVar10;
  if (0 < local_70.NumPreAllocatedChunks) {
    do {
      if (pvVar15 == (void *)0x0) {
        pvVar15 = *(void **)((longlong)pvVar10 + local_70._padding_);
      }
      *(undefined8 *)((longlong)pvVar10 + local_70._padding_) = 0;
      uVar19 = (int)pvVar12 + 1;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar12 = (void *)(ulonglong)uVar19;
    } while ((int)uVar19 < local_70.NumPreAllocatedChunks);
  }
  operator_delete__(pvVar15);
  local_70.NumPreAllocatedChunks = 0;
  TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&local_70);
  pTVar14 = TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>::
            TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>
                      (&local_50,uVar20,Zero);
  pTVar3 = &this->ReplicatedInstances;
  if (pTVar3 != pTVar14) {
    puVar5 = (undefined8 *)pTVar3->_padding_;
    for (iVar17 = (int)(this->ReplicatedInstances)._padding_; iVar17 != 0; iVar17 = iVar17 + -1) {
      ::operator_delete((void *)*puVar5,800);
      puVar5 = puVar5 + 1;
    }
    piVar4 = (int *)((longlong)&(this->ReplicatedInstances)._padding_ + 4);
    *(undefined4 *)&(this->ReplicatedInstances)._padding_ = 0;
    if (*piVar4 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar3,0,piVar4);
    }
    if ((void *)pTVar3->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pTVar3->_padding_);
    }
    pTVar3->_padding_ = pTVar14->_padding_;
    pTVar14->_padding_ = 0;
    *(int *)&(this->ReplicatedInstances)._padding_ = (int)pTVar14->_padding_;
    *piVar4 = *(int *)((longlong)&pTVar14->_padding_ + 4);
    pTVar14->_padding_ = 0;
    *(int *)&(this->ReplicatedInstances)._padding_ = (int)pTVar14->_padding_;
    (this->ReplicatedInstances).NumPreAllocatedChunks = pTVar14->NumPreAllocatedChunks;
    *(undefined4 *)&pTVar14->_padding_ = 0;
    pTVar14->NumPreAllocatedChunks = 0;
  }
  pvVar10 = (void *)0x0;
  pvVar15 = pvVar10;
  pvVar12 = pvVar10;
  if (0 < local_50.NumPreAllocatedChunks) {
    do {
      if (pvVar15 == (void *)0x0) {
        pvVar15 = *(void **)((longlong)pvVar10 + local_50._padding_);
      }
      *(undefined8 *)((longlong)pvVar10 + local_50._padding_) = 0;
      uVar19 = (int)pvVar12 + 1;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar12 = (void *)(ulonglong)uVar19;
    } while ((int)uVar19 < local_50.NumPreAllocatedChunks);
  }
  operator_delete__(pvVar15);
  local_50.NumPreAllocatedChunks = 0;
  TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&local_50);
  local_e8.Value = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_b8 = 0xff;
  this_01 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
            ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                          *)this_00,0);
  FReplicatedObjectData::operator=(this_01,(FReplicatedObjectData *)&local_e8._s_0);
  InitNetBitArray(this,&(this->ScopeFrameData).CurrentFrameScopableInternalIndices);
  InitNetBitArray(this,&(this->ScopeFrameData).PrevFrameScopableInternalIndices);
  InitNetBitArray(this,&this->GlobalScopableInternalIndices);
  InitNetBitArray(this,&this->RelevantObjectsInternalIndices);
  InitNetBitArray(this,&this->PolledObjectsInternalIndices);
  InitNetBitArray(this,&this->DirtyObjectsToQuantize);
  InitNetBitArray(this,&this->AssignedInternalIndices);
  InitNetBitArray(this,&this->SubObjectInternalIndices);
  InitNetBitArray(this,&this->DependentObjectInternalIndices);
  InitNetBitArray(this,&this->ObjectsWithCreationDependencies);
  InitNetBitArray(this,&this->ObjectsWithDependentObjectsInternalIndices);
  InitNetBitArray(this,&this->DestroyedStartupObjectInternalIndices);
  InitNetBitArray(this,&this->WantToBeDormantInternalIndices);
  InitNetBitArray(this,&this->ObjectsWithPreUpdate);
  InitNetBitArray(this,&this->DormantObjectsPendingFlushNet);
  InitNetBitArray(this,&this->ObjectsWithFullPushBasedDirtiness);
  pFVar6 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedInternalIndices).BitCount == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(uint *)pFVar6 = *(uint *)pFVar6 | 1;
  return;
}

// InitNetBitArray @ 14427e420

void __thiscall
UE::Net::Private::FNetRefHandleManager::InitNetBitArray
          (FNetRefHandleManager *this,FNetBitArray *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::Net::FNetBitArray_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FNetBitArray *local_res10 [3];
  
  local_res10[0] = param_1;
  FNetBitArray::Init(param_1,this->CurrentMaxInternalNetRefIndex);
  pTVar6 = &this->OwnedNetBitArrays;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->OwnedNetBitArrays).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OwnedNetBitArrays).ArrayNum;
  piVar1 = &(this->OwnedNetBitArrays).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->OwnedNetBitArrays).ArrayNum = iVar5 + 1;
  *(FNetBitArray **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// IsSubObject @ 144282fc0

bool __thiscall
UE::Net::Private::FNetRefHandleManager::IsSubObject(FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->SubObjectInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->SubObjectInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// MakeNetRefHandle @ 144283b30

FNetRefHandle __cdecl
UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle(ulong64 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetRefHandle FVar3;
  undefined4 in_register_00000014;
  ulonglong uVar4;
  uint in_R8D;
  
  uVar4 = CONCAT44(in_register_00000014,param_2) & 0x3fffffffffffff;
  if (uVar4 != CONCAT44(in_register_00000014,param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Id & FNetRefHandle::IdMask) == Id",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x48d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
      return (FNetRefHandle)FVar3.field0_0x0;
    }
  }
  if (0x3fe < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReplicationSystemId < FNetRefHandle::MaxReplicationSystemId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x48e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
      return (FNetRefHandle)FVar3.field0_0x0;
    }
  }
  *(ulonglong *)param_1 = (ulonglong)(in_R8D + 1) << 0x36 | uVar4;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// MakeNetRefHandleFromId @ 144283be0

FNetRefHandle __cdecl
UE::Net::Private::FNetRefHandleManager::MakeNetRefHandleFromId(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  FNetRefHandle FVar3;
  ulonglong in_RDX;
  ulonglong uVar4;
  
  uVar4 = in_RDX & 0x3fffffffffffff;
  if (uVar4 == in_RDX) {
    *(ulonglong *)param_1 = uVar4;
    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4467568253371153253>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                     ,0x49b,"(Id & FNetRefHandle::IdMask) == Id");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3.field0_0x0 = (FNetRefHandle_u_0)(*pcVar1)();
    return (FNetRefHandle)FVar3.field0_0x0;
  }
  *(ulonglong *)param_1 = uVar4;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// MakeNetRefHandleId @ 144283c60

ulong64 __cdecl
UE::Net::Private::FNetRefHandleManager::MakeNetRefHandleId(ulong64 param_1,bool param_2)

{
  return param_1 * 2 | (ulonglong)param_2;
}

// MaxInternalNetRefIndexIncreased @ 144283c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRefHandleManager::MaxInternalNetRefIndexIncreased
          (FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::MaxInternalNetRefIndexIncreased(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased>
  FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::MaxInternalNetRefIndexIncreased(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased>
         )0x0) {
      pFVar11 = ::FName::FName(&local_78,"STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased,*pFVar11,
                 L"STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased;
  if (StatPtr_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::MaxInternalNetRefIndexIncreased(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased>
       )0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_UE::Net::Private::FNetRefHandleManager::MaxInternalNetRefIndexIncreased(unsigned_int)_::_2_::FStat_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased,
                          *pFVar11,L"STAT_FNetRefHandleManager_MaxInternalNetRefIndexIncreased",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  local_88 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = local_88.ComparisonIndex.Value;
  uVar15 = local_88.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar13.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                   ,0x93);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar13.Value;
      uStackX_c = uVar15;
      FThreadStats::AddMessage(local_88,CycleScopeStart);
      bVar7 = true;
      goto LAB_144283e0e;
    }
  }
  bVar7 = false;
  local_88 = local_68;
LAB_144283e0e:
  if (__CsvProfilerStat148 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("MaxInternalIndexIncreasedCount",_GCsvCategory_IrisCommon.Index);
    __CsvProfilerStat148 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("MaxInternalIndexIncreasedCount",_GCsvCategory_IrisCommon.Index,1,Accumulate);
  pFVar16 = (this->OwnedNetBitArrays).AllocatorInstance.Data;
  iVar4 = (this->OwnedNetBitArrays).ArrayNum;
  pFVar3 = pFVar16 + (longlong)iVar4 * 8;
  do {
    if ((this->OwnedNetBitArrays).ArrayNum != iVar4) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<UE::Net::FNetBitArray_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar16 == pFVar3) {
      TMulticastDelegate<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnMaxInternalNetRefIndexIncreased,param_1);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && (local_88 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_58.NameAndInfo.Index = local_88.ComparisonIndex.Value;
          local_58.NameAndInfo.Number = local_88.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_80);
          local_58.StatData.Pad[4] = '\0';
          local_58.StatData.Pad[5] = '\0';
          local_58.StatData.Pad[6] = '\0';
          local_58.StatData.Pad[7] = '\0';
          local_58.StatData.Pad[0] = local_80.s.LowPart._0_1_;
          local_58.StatData.Pad[1] = local_80.s.LowPart._1_1_;
          local_58.StatData.Pad[2] = local_80.s.LowPart._2_1_;
          local_58.StatData.Pad[3] = local_80.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_58);
          piVar2 = &this_01->ScopeCount;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      return;
    }
    this_00 = *(TArray<unsigned_int,TSizedDefaultAllocator<32>_> **)pFVar16;
    uVar15 = param_1 + 0x1f >> 5;
    *(uint *)&this_00[1].AllocatorInstance.Data = param_1;
    iVar14 = this_00->ArrayNum;
    if (iVar14 < (int)uVar15) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,uVar15 - iVar14);
    }
    else if ((int)uVar15 < iVar14) {
      iVar14 = iVar14 - uVar15;
      if (iVar14 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        param_1 = local_res10;
        if (iVar14 == 0) goto LAB_144283f1e;
      }
      pFVar1 = (this_00->AllocatorInstance).Data + (ulonglong)uVar15 * 4;
      iVar10 = (this_00->ArrayNum - uVar15) - iVar14;
      if (iVar10 != 0) {
        memmove(pFVar1,pFVar1 + (longlong)iVar14 * 4,(longlong)iVar10 << 2);
      }
      this_00->ArrayNum = this_00->ArrayNum - iVar14;
      param_1 = local_res10;
    }
LAB_144283f1e:
    iVar14 = *(int *)&this_00[1].AllocatorInstance.Data;
    if (iVar14 != 0) {
      pFVar1 = (this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 4 + -4;
      *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)iVar14 & 0x1fU);
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// OnPostSendUpdate @ 1442855e0

void __thiscall UE::Net::Private::FNetRefHandleManager::OnPostSendUpdate(FNetRefHandleManager *this)

{
  FNetBitArray::Copy(&(this->ScopeFrameData).PrevFrameScopableInternalIndices,
                     &(this->ScopeFrameData).CurrentFrameScopableInternalIndices);
  (this->ScopeFrameData).bIsValid = 0;
  if (__CsvProfilerStat1206 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("ActiveReplicatedObjectCount",_GCsvCategory_IrisCommon.Index);
    __CsvProfilerStat1206 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("ActiveReplicatedObjectCount",_GCsvCategory_IrisCommon.Index,
             (float)this->ActiveObjectCount,Set);
  return;
}

// OnPreSendUpdate @ 144285660

void __thiscall UE::Net::Private::FNetRefHandleManager::OnPreSendUpdate(FNetRefHandleManager *this)

{
  FNetBitArray::Copy(&(this->ScopeFrameData).CurrentFrameScopableInternalIndices,
                     &this->GlobalScopableInternalIndices);
  (this->ScopeFrameData).bIsValid = 1;
  return;
}

// PrintObjectFromIndex @ 144287930

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FString * __thiscall
UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
          (FNetRefHandleManager *this,FString *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FReplicatedObjectData *pFVar5;
  TObjectPtr<UObject>_u_0 *pTVar6;
  ulonglong local_res20;
  FName local_b8;
  TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FName local_48;
  FName local_40;
  
  if (param_1 == 0) {
    ::FString::FString(__return_storage_ptr__,L"InvalidObject (InternalIndex: Invalid)");
    return __return_storage_ptr__;
  }
  pFVar1 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedInternalIndices).BitCount <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"UnassignedObject (InternalIndex: %u)");
  }
  else {
    GetNetRefHandleFromInternalIndex(this,(uint)&local_res20);
    pFVar5 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,param_1);
    if (pFVar5->SubObjectRootIndex == 0) {
      if ((local_res20 == 0) || ((local_res20 & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_98,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_98,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                          ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                           &this->ReplicatedInstances,param_1)->field0_0x0;
      if (pTVar6->DebugPtr == (UObject *)0x0) {
        ::FString::FString(&local_a8,L"None");
      }
      else {
        local_b8 = *(FName *)((longlong)pTVar6->DebugPtr + 0x18);
        ::FName::ToString(&local_b8,&local_a8);
      }
      ::FString::PrintfImpl(__return_storage_ptr__,L"RootObject %s (InternalIndex: %u) (%s)");
      local_58.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      }
    }
    else {
      GetNetRefHandleFromInternalIndex(this,(uint)&local_b0);
      if ((local_b0 == (TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)0x0) ||
         (((ulonglong)local_b0 & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_58,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      local_b8 = (FName)L"";
      if (local_58.Data.ArrayNum != 0) {
        local_b8 = (FName)local_58.Data.AllocatorInstance;
      }
      local_b0 = (TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                 &this->ReplicatedInstances;
      pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                          (local_b0,pFVar5->SubObjectRootIndex)->field0_0x0;
      if (pTVar6->DebugPtr == (UObject *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_48 = *(FName *)((longlong)pTVar6->DebugPtr + 0x18);
        ::FName::ToString(&local_48,&local_68);
      }
      if ((local_res20 == 0) || ((local_res20 & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_78,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_78,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                          (local_b0,param_1)->field0_0x0;
      if (pTVar6->DebugPtr == (UObject *)0x0) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        local_40 = *(FName *)((longlong)pTVar6->DebugPtr + 0x18);
        ::FName::ToString(&local_40,&local_88);
      }
      ::FString::PrintfImpl
                (__return_storage_ptr__,
                 L"SubObject %s (InternalIndex: %u) (%s) tied to RootObject %s (InternalIndex: %u) (%s)"
                );
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// PrintObjectFromNetRefHandle @ 144287d00

FString * __thiscall
UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
          (FNetRefHandleManager *this,FString *__return_storage_ptr__,FNetRefHandle param_1)

{
  uint uVar1;
  FString local_18;
  
  uVar1 = GetInternalIndex(this,param_1);
  if (uVar1 != 0) {
    PrintObjectFromIndex(this,__return_storage_ptr__,uVar1);
    return __return_storage_ptr__;
  }
  if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
    ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
  }
  else {
    ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"NetObject None (InternalIndex: None) (%s)");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RemoveCreationDependency @ 14428e7c0

void __thiscall
UE::Net::Private::FNetRefHandleManager::RemoveCreationDependency
          (FNetRefHandleManager *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  uint uVar1;
  uint uVar2;
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  FNetRefHandle_u_0 local_res10;
  FNetRefHandle_u_0 local_res18;
  uint local_res20 [2];
  FNetRefHandleManager *local_38;
  FNetRefHandle_u_0 *local_30;
  FNetRefHandle_u_0 *local_28;
  
  local_res10 = param_1.field0_0x0;
  local_res18 = param_2.field0_0x0;
  uVar1 = GetInternalIndex(this,param_1);
  local_res20[0] = uVar1;
  uVar2 = GetInternalIndex(this,param_2);
  if ((uVar1 == 0) || (uVar2 == 0)) {
    local_30 = &local_res10;
    local_28 = &local_res18;
    local_38 = this;
    `UE::Net::Private::FNetRefHandleManager::RemoveCreationDependency'::__l5::<lambda_1>::operator()
              (&local_38);
  }
  else {
    this_00 = FNetDependencyData::GetCreationDependencyInfoArray(&this->SubObjects,uVar2);
    if (this_00 !=
        (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Remove
                (this_00,local_res20);
      if (this_00->ArrayNum == 0) {
        FNetBitArray::ClearBit(&this->ObjectsWithCreationDependencies,uVar2);
        return;
      }
    }
  }
  return;
}

// RemoveDependentObject @ 14428ea70

void __thiscall
UE::Net::Private::FNetRefHandleManager::RemoveDependentObject
          (FNetRefHandleManager *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = GetInternalIndex(this,param_1);
  uVar2 = GetInternalIndex(this,param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    InternalRemoveDependentObject(this,uVar1,uVar2,All);
  }
  return;
}

// RemoveDependentObject @ 14428ead0

void __thiscall
UE::Net::Private::FNetRefHandleManager::RemoveDependentObject
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  uint uVar1;
  
  uVar1 = GetInternalIndex(this,param_1);
  if (uVar1 != 0) {
    InternalRemoveAllDependencies(this,uVar1);
    return;
  }
  return;
}

// RemoveFromScope @ 14428f660

void __thiscall
UE::Net::Private::FNetRefHandleManager::RemoveFromScope(FNetRefHandleManager *this,uint param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar2 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedInternalIndices).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (ulonglong)(param_1 >> 5) * 4;
  if ((*(uint *)(pFVar2 + lVar1) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4467568253371153880>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x228,"AssignedInternalIndices.GetBit(InternalIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar2 = (this->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data;
    if ((this->GlobalScopableInternalIndices).BitCount <= param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) & ~(1 << (param_1 & 0x1f));
  }
  return;
}

// RemoveSubObject @ 1442900d0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRefHandleManager::RemoveSubObject
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  uint uVar1;
  FReplicatedObjectData *pFVar2;
  
  uVar1 = GetInternalIndex(this,param_1);
  if (uVar1 != 0) {
    pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this->ReplicatedObjectData,uVar1);
    if (pFVar2->SubObjectRootIndex != 0) {
      InternalRemoveSubObject(this,pFVar2->SubObjectRootIndex,uVar1,true);
    }
  }
  return;
}

// SetSubObjectNetCondition @ 144294830

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetRefHandleManager::SetSubObjectNetCondition
          (FNetRefHandleManager *this,uint param_1,schar param_2,bool *param_3)

{
  ForElementType<signed_char> *pFVar1;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  FReplicatedObjectData *pFVar10;
  FDependencyInfo *pFVar11;
  ForElementType<signed_char> FVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  ForElementType<signed_char> FVar17;
  uint *puVar18;
  FSparseArrayAllocationInfo local_38;
  
  if (param_1 == 0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4467568253371153672>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                       ,0x2f8,"SubObjectInternalIndex != InvalidInternalIndex");
    if (bVar6) goto code_r0x0001442949d1;
  }
  else {
    pFVar10 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
              ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                            *)&this->ReplicatedObjectData,param_1);
    uVar9 = pFVar10->SubObjectParentIndex;
    if (uVar9 == 0) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4467568253371153669>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                         ,0x2fb,"SubObjectParentIndex != InvalidInternalIndex");
      if (bVar6) goto code_r0x0001442949d1;
    }
    else if (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
             *(int *)&(this->SubObjects).DependencyInfos.field_0x34) {
      puVar13 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->SubObjects).DependencyInfos.field_0x38;
      }
      iVar8 = *(int *)(puVar13 +
                      (ulonglong)
                      (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U & uVar9) * 4);
      if (iVar8 != -1) {
        lVar4 = *(longlong *)&(this->SubObjects).DependencyInfos;
        do {
          lVar3 = lVar4 + (longlong)iVar8 * 0x28;
          if (*(uint *)(lVar4 + (longlong)iVar8 * 0x28) == uVar9) {
            FVar17 = (ForElementType<signed_char>)0x0;
            FVar12 = (ForElementType<signed_char>)(lVar3 + 4);
            if (lVar3 == 0) {
              FVar12 = FVar17;
            }
            if ((FVar12 != (ForElementType<signed_char>)0x0) &&
               (*(int *)((longlong)FVar12 + 4) != -1)) {
              puVar18 = (uint *)((longlong)*(int *)((longlong)FVar12 + 4) * 0x30 +
                                *(longlong *)&(this->SubObjects).DependentObjectsStorage);
              if (*(int *)((longlong)FVar12 + 0x10) != -1) {
                FVar17 = (ForElementType<signed_char>)
                         (*(longlong *)&(this->SubObjects).SubObjectConditionalsStorage +
                         (longlong)*(int *)((longlong)FVar12 + 0x10) * 0x18);
              }
              puVar14 = *(uint **)(puVar18 + 8);
              if (*(uint **)(puVar18 + 8) == (uint *)0x0) {
                puVar14 = puVar18;
              }
              puVar16 = puVar14;
              goto joined_r0x000144294996;
            }
            break;
          }
          iVar8 = *(int *)(lVar3 + 0x20);
        } while (iVar8 != -1);
      }
    }
  }
  goto LAB_1442949d2;
joined_r0x000144294996:
  if (puVar16 == puVar14 + (int)puVar18[10]) goto LAB_1442949a5;
  if (*puVar16 == param_1) {
    uVar15 = (uint)((longlong)puVar16 - (longlong)puVar14 >> 2);
    if (uVar15 != 0xffffffff) {
      if (FVar17 == (ForElementType<signed_char>)0x0) {
        if (param_2 == '\0') {
          *param_3 = false;
          return true;
        }
        pFVar11 = FNetDependencyData::GetOrCreateCacheEntry(&this->SubObjects,uVar9);
        if ((pFVar11->ArrayIndices[1] == 0xffffffff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Entry.ArrayIndices[EArrayType::ChildSubObjects] != FDependencyInfo::InvalidCacheIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetDependencyData.cpp"
                               ,0x52,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (pFVar11->SubObjectConditionalArrayIndex == 0xffffffff) {
          TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AddUninitialized
                    ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
                     &(this->SubObjects).SubObjectConditionalsStorage,&local_38);
          pFVar1 = (ForElementType<signed_char> *)((longlong)local_38.Pointer + 0x10);
          pFVar11->SubObjectConditionalArrayIndex = local_38.Index;
          puVar2 = (uchar *)((longlong)local_38.Pointer + 0x14);
          *(ForElementType<signed_char> *)((longlong)local_38.Pointer + 8) =
               (ForElementType<signed_char>)0x0;
          pFVar1->InlineData[0] = '\0';
          pFVar1->InlineData[1] = '\0';
          pFVar1->InlineData[2] = '\0';
          pFVar1->InlineData[3] = '\0';
          puVar2[0] = '\b';
          puVar2[1] = '\0';
          puVar2[2] = '\0';
          puVar2[3] = '\0';
          uVar9 = *(uint *)(*(longlong *)&(this->SubObjects).DependentObjectsStorage + 0x28 +
                           (longlong)(int)pFVar11->ArrayIndices[1] * 0x30);
          FVar17 = (ForElementType<signed_char>)local_38.Pointer;
          if ((int)uVar9 < 1) {
            if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
            }
          }
          else {
            iVar8 = Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_>
                              (1,1,uVar9,local_38.Pointer,(int *)pFVar1,(int *)puVar2);
            FVar12 = *(ForElementType<signed_char> *)((longlong)local_38.Pointer + 8);
            if (*(ForElementType<signed_char> *)((longlong)local_38.Pointer + 8) ==
                (ForElementType<signed_char>)0x0) {
              FVar12 = (ForElementType<signed_char>)local_38.Pointer;
            }
            memset((void *)((longlong)FVar12 + (longlong)iVar8),0,(longlong)(int)uVar9);
          }
        }
        else {
          FVar17 = (ForElementType<signed_char>)
                   (*(longlong *)&(this->SubObjects).SubObjectConditionalsStorage +
                   (longlong)(int)pFVar11->SubObjectConditionalArrayIndex * 0x18);
        }
      }
      if ((*(uint *)((longlong)FVar17 + 0x10) != puVar18[10]) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SubObjectConditionals->Num() == SubObjectsArray->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                             ,0x312,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar9 = 0;
      if ((int)uVar15 < *(int *)((longlong)FVar17 + 0x10)) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar12 = *(ForElementType<signed_char> *)((longlong)FVar17 + 8);
      if (*(ForElementType<signed_char> *)((longlong)FVar17 + 8) == (ForElementType<signed_char>)0x0
         ) {
        FVar12 = FVar17;
      }
      *param_3 = *(char *)((longlong)FVar12 + (longlong)(int)uVar15) != param_2;
      uVar9 = 0;
      if ((int)uVar15 < *(int *)((longlong)FVar17 + 0x10)) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar12 = *(ForElementType<signed_char> *)((longlong)FVar17 + 8);
      if (*(ForElementType<signed_char> *)((longlong)FVar17 + 8) == (ForElementType<signed_char>)0x0
         ) {
        FVar12 = FVar17;
      }
      *(schar *)((longlong)FVar12 + (longlong)(int)uVar15) = param_2;
      return true;
    }
    goto LAB_1442949a5;
  }
  puVar16 = puVar16 + 1;
  goto joined_r0x000144294996;
LAB_1442949a5:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4467568253371153661>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                     ,0x303,"SubObjectArrayIndex != INDEX_NONE");
  if (bVar6) {
code_r0x0001442949d1:
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
LAB_1442949d2:
  *param_3 = false;
  return false;
}

// GetChildSubObjects @ 1442c2440

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Net::Private::FNetRefHandleManager::GetChildSubObjects
          (FNetRefHandleManager *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->SubObjects).DependencyInfos.field_0x8 !=
      *(int *)&(this->SubObjects).DependencyInfos.field_0x34) {
    puVar4 = *(undefined1 **)&(this->SubObjects).DependencyInfos.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SubObjects).DependencyInfos.field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SubObjects).DependencyInfos.field_0x48 - 1U & param_1
                              ) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)&(this->SubObjects).DependencyInfos;
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x28;
        if (*(uint *)(lVar3 + (longlong)iVar2 * 0x28) == param_1) {
          lVar3 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar3 = 0;
          }
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -1)) {
            MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                      (__return_storage_ptr__,
                       (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)*(int *)(lVar3 + 4) * 0x30 +
                          *(longlong *)&(this->SubObjects).DependentObjectsStorage));
            return __return_storage_ptr__;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNetObjectRefCount @ 1442c29a0

ushort __thiscall
UE::Net::Private::FNetRefHandleManager::GetNetObjectRefCount
          (FNetRefHandleManager *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar2 = (int)param_1 / 100;
  uVar5 = 0;
  if ((int)uVar2 < (int)(this->ReplicatedObjectRefCount)._padding_) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return *(ushort *)
          (*(longlong *)((this->ReplicatedObjectRefCount)._padding_ + (longlong)(int)uVar2 * 8) +
          (longlong)((int)param_1 % 100) * 2);
}

// GetReplicatedObjectDataNoCheck @ 1442c3b70

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectData * __thiscall
UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
          (FNetRefHandleManager *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  
  uVar2 = (int)param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (int)(this->ReplicatedObjectData)._padding_) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReplicatedObjectData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FReplicatedObjectData *)
         ((ulonglong)(uint)((int)param_1 % 100) * 0x38 +
         *(longlong *)((this->ReplicatedObjectData)._padding_ + (longlong)(int)uVar2 * 8));
}

// GetReplicatedObjectStateBufferNoCheck @ 1442c3d40

uchar * __thiscall
UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectStateBufferNoCheck
          (FNetRefHandleManager *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  
  uVar2 = (int)param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (int)(this->ReplicatedObjectStateBuffers)._padding_) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar1)();
      return puVar5;
    }
  }
  return *(uchar **)
          (*(longlong *)((this->ReplicatedObjectStateBuffers)._padding_ + (longlong)(int)uVar2 * 8)
          + (ulonglong)(uint)((int)param_1 % 100) * 8);
}

// IsNetRefHandleAssigned @ 1442c7320

bool __thiscall
UE::Net::Private::FNetRefHandleManager::IsNetRefHandleAssigned
          (FNetRefHandleManager *this,FNetRefHandle param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  
  uVar2 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->RefHandleToInternalIndex).field_0x8 !=
      *(int *)&(this->RefHandleToInternalIndex).field_0x34) {
    puVar3 = *(undefined1 **)&(this->RefHandleToInternalIndex).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->RefHandleToInternalIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                              (ulonglong)(*(int *)&(this->RefHandleToInternalIndex).field_0x48 - 1))
                              * 4);
    if (iVar1 != -1) {
      do {
        if ((*(ulonglong *)(*(longlong *)&this->RefHandleToInternalIndex + (longlong)iVar1 * 0x18) &
            0x3fffffffffffff) == uVar2) goto LAB_1442c7392;
        iVar1 = *(int *)(*(longlong *)&this->RefHandleToInternalIndex + 0x10 +
                        (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1442c7392:
  return iVar1 != -1;
}

// IsScopableIndex @ 1442c73d0

bool __thiscall
UE::Net::Private::FNetRefHandleManager::IsScopableIndex(FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->GlobalScopableInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// ~FNetRefHandleManager @ 1442f84c0

void __thiscall
UE::Net::Private::FNetRefHandleManager::~FNetRefHandleManager(FNetRefHandleManager *this)

{
  int *piVar1;
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *pTVar2;
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *pTVar3;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *pTVar4;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  
  pFVar6 = (this->OwnedNetBitArrays).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInternalNetRefIndicesFreed).field_0x8,
             *(int *)&(this->OnInternalNetRefIndicesFreed).field_0x10);
  pvVar8 = *(void **)&(this->OnInternalNetRefIndicesFreed).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInternalNetRefIndicesFreed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNetChunkedArrayIncrease).field_0x8,
             *(int *)&(this->OnNetChunkedArrayIncrease).field_0x10);
  pvVar8 = *(void **)&(this->OnNetChunkedArrayIncrease).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNetChunkedArrayIncrease);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaxInternalNetRefIndexIncreased).field_0x8,
             *(int *)&(this->OnMaxInternalNetRefIndexIncreased).field_0x10);
  pvVar8 = *(void **)&(this->OnMaxInternalNetRefIndexIncreased).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaxInternalNetRefIndexIncreased);
  FNetDependencyData::~FNetDependencyData(&this->SubObjects);
  pvVar9 = (void *)0x0;
  pTVar2 = &this->ReplicatedInstances;
  pvVar8 = pvVar9;
  pvVar10 = pvVar9;
  pvVar13 = pvVar9;
  if (0 < (this->ReplicatedInstances).NumPreAllocatedChunks) {
    do {
      if (pvVar8 == (void *)0x0) {
        pvVar8 = *(void **)((longlong)pvVar10 + pTVar2->_padding_);
      }
      uVar12 = (int)pvVar13 + 1;
      *(undefined8 *)((longlong)pvVar10 + pTVar2->_padding_) = 0;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar13 = (void *)(ulonglong)uVar12;
    } while ((int)uVar12 < (this->ReplicatedInstances).NumPreAllocatedChunks);
  }
  operator_delete__(pvVar8);
  (this->ReplicatedInstances).NumPreAllocatedChunks = 0;
  puVar7 = (undefined8 *)pTVar2->_padding_;
  for (iVar11 = (int)(this->ReplicatedInstances)._padding_; iVar11 != 0; iVar11 = iVar11 + -1) {
    ::operator_delete((void *)*puVar7,800);
    puVar7 = puVar7 + 1;
  }
  piVar1 = (int *)((longlong)&(this->ReplicatedInstances)._padding_ + 4);
  *(undefined4 *)&(this->ReplicatedInstances)._padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar2,0,piVar1);
  }
  if ((void *)pTVar2->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pTVar2->_padding_);
  }
  pTVar3 = &this->ReplicatedObjectRefCount;
  pvVar8 = pvVar9;
  pvVar10 = pvVar9;
  pvVar13 = pvVar9;
  if (0 < (this->ReplicatedObjectRefCount).NumPreAllocatedChunks) {
    do {
      if (pvVar8 == (void *)0x0) {
        pvVar8 = *(void **)((longlong)pvVar10 + pTVar3->_padding_);
      }
      uVar12 = (int)pvVar13 + 1;
      *(undefined8 *)((longlong)pvVar10 + pTVar3->_padding_) = 0;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar13 = (void *)(ulonglong)uVar12;
    } while ((int)uVar12 < (this->ReplicatedObjectRefCount).NumPreAllocatedChunks);
  }
  operator_delete__(pvVar8);
  (this->ReplicatedObjectRefCount).NumPreAllocatedChunks = 0;
  puVar7 = (undefined8 *)pTVar3->_padding_;
  for (iVar11 = (int)(this->ReplicatedObjectRefCount)._padding_; iVar11 != 0; iVar11 = iVar11 + -1)
  {
    ::operator_delete((void *)*puVar7,200);
    puVar7 = puVar7 + 1;
  }
  piVar1 = (int *)((longlong)&(this->ReplicatedObjectRefCount)._padding_ + 4);
  *(undefined4 *)&(this->ReplicatedObjectRefCount)._padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar3,0,piVar1);
  }
  if ((void *)pTVar3->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pTVar3->_padding_);
  }
  pTVar4 = &this->ReplicatedObjectStateBuffers;
  pvVar8 = pvVar9;
  pvVar10 = pvVar9;
  pvVar13 = pvVar9;
  if (0 < (this->ReplicatedObjectStateBuffers).NumPreAllocatedChunks) {
    do {
      if (pvVar8 == (void *)0x0) {
        pvVar8 = *(void **)((longlong)pvVar10 + pTVar4->_padding_);
      }
      uVar12 = (int)pvVar13 + 1;
      *(undefined8 *)((longlong)pvVar10 + pTVar4->_padding_) = 0;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar13 = (void *)(ulonglong)uVar12;
    } while ((int)uVar12 < (this->ReplicatedObjectStateBuffers).NumPreAllocatedChunks);
  }
  operator_delete__(pvVar8);
  (this->ReplicatedObjectStateBuffers).NumPreAllocatedChunks = 0;
  puVar7 = (undefined8 *)pTVar4->_padding_;
  for (iVar11 = (int)(this->ReplicatedObjectStateBuffers)._padding_; iVar11 != 0;
      iVar11 = iVar11 + -1) {
    ::operator_delete((void *)*puVar7,800);
    puVar7 = puVar7 + 1;
  }
  piVar1 = (int *)((longlong)&(this->ReplicatedObjectStateBuffers)._padding_ + 4);
  *(undefined4 *)&(this->ReplicatedObjectStateBuffers)._padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar4,0,piVar1);
  }
  if ((void *)pTVar4->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pTVar4->_padding_);
  }
  pTVar5 = &this->ReplicatedObjectData;
  pvVar8 = pvVar9;
  pvVar10 = pvVar9;
  if (0 < (this->ReplicatedObjectData).NumPreAllocatedChunks) {
    do {
      if (pvVar9 == (void *)0x0) {
        pvVar9 = *(void **)((longlong)pvVar8 + pTVar5->_padding_);
      }
      uVar12 = (int)pvVar10 + 1;
      *(undefined8 *)((longlong)pvVar8 + pTVar5->_padding_) = 0;
      pvVar8 = (void *)((longlong)pvVar8 + 8);
      pvVar10 = (void *)(ulonglong)uVar12;
    } while ((int)uVar12 < (this->ReplicatedObjectData).NumPreAllocatedChunks);
  }
  operator_delete__(pvVar9);
  (this->ReplicatedObjectData).NumPreAllocatedChunks = 0;
  puVar7 = (undefined8 *)pTVar5->_padding_;
  for (iVar11 = (int)(this->ReplicatedObjectData)._padding_; iVar11 != 0; iVar11 = iVar11 + -1) {
    ::operator_delete((void *)*puVar7,0x15e0);
    puVar7 = puVar7 + 1;
  }
  piVar1 = (int *)((longlong)&(this->ReplicatedObjectData)._padding_ + 4);
  *(undefined4 *)&(this->ReplicatedObjectData)._padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar5,0,piVar1);
  }
  if ((void *)pTVar5->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pTVar5->_padding_);
  }
  pFVar6 = (this->PendingDestroyInternalIndices).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  *(undefined4 *)&(this->DestroyedStartupObject).field_0x48 = 0;
  pvVar8 = *(void **)&(this->DestroyedStartupObject).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DestroyedStartupObject);
  pFVar6 = (this->ObjectsWithFullPushBasedDirtiness).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->ObjectsWithPreUpdate).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DormantObjectsPendingFlushNet).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->WantToBeDormantInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DestroyedStartupObjectInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->ObjectsWithCreationDependencies).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DependentObjectInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->SubObjectInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->AssignedInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DirtyObjectsToQuantize).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->PolledObjectsInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->RelevantObjectsInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.AllocatorInstance.Data
  ;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  *(undefined4 *)&(this->NetHandleToInternalIndex).field_0x48 = 0;
  pvVar8 = *(void **)&(this->NetHandleToInternalIndex).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetHandleToInternalIndex);
  *(undefined4 *)&(this->RefHandleToInternalIndex).field_0x48 = 0;
  pvVar8 = *(void **)&(this->RefHandleToInternalIndex).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RefHandleToInternalIndex);
  return;
}

// GetIsDestroyedStartupObject @ 144303aa0

bool __thiscall
UE::Net::Private::FNetRefHandleManager::GetIsDestroyedStartupObject
          (FNetRefHandleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->DestroyedStartupObjectInternalIndices).Storage.AllocatorInstance.Data;
  if ((this->DestroyedStartupObjectInternalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// operator() @ 1504b4c60

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::CreateNetObjectFromRemote'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371154046>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371154046>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4d20;
    }
  }
  bVar2 = false;
LAB_1504b4d20:
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

// operator() @ 1504b4ee0

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::InternalAddSubObject'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153800>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153800>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4fa0;
    }
  }
  bVar2 = false;
LAB_1504b4fa0:
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

// operator() @ 1504b52a0

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::AddCreationDependency'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153509>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153509>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b530e;
    }
  }
  bVar2 = false;
LAB_1504b530e:
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

// operator() @ 1504b5340

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::AddDependentObject'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153596>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153596>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b53ae;
    }
  }
  bVar2 = false;
LAB_1504b53ae:
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

// operator() @ 1504b55f0

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::InternalCreateNetObject'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371154223>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371154223>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5640

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::RemoveCreationDependency'::__l5::<lambda_1>::operator()
          (void *this)

{
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0_s_0 FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FNetRefHandle_u_0_s_0 FVar6;
  FNetRefHandle_u_0_s_0 FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar5 = false;
  bVar4 = false;
  bVar8 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153467>);
  if (bVar8) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
    pFVar1 = *(FNetRefHandle_u_0 **)((longlong)this + 8);
    FVar2 = pFVar1->_s_0;
    uVar10 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                       (*(FNetRefHandleManager **)this,(FNetRefHandle)FVar2);
    if (uVar10 == 0) {
      if ((pFVar1->Id == 0 && pFVar1->ReplicationSystemId == 0) ||
         ((&pFVar1->_s_0)->ReplicationSystemId == 0)) {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      ::FString::PrintfImpl(&local_28,L"NetObject None (InternalIndex: None) (%s)");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (*(FNetRefHandleManager **)this,&local_28,uVar10);
    }
    bVar5 = true;
    bVar4 = true;
    bVar8 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153467>,&::ENSURE_Static);
    if (bVar8) {
      bVar8 = true;
      goto LAB_1504b5789;
    }
  }
  bVar8 = false;
LAB_1504b5789:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 1504b5f40

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::InternalRemoveSubObject'::__l25::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153709>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)this,&local_18,**(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153709>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b5fae;
    }
  }
  bVar2 = false;
LAB_1504b5fae:
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

// operator() @ 1504b66f0

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::Deinit'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371154324>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371154324>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b6a40

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::AddCreationDependency'::__l8::<lambda_2>::operator()
          (void *this)

{
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0_s_0 FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FNetRefHandle_u_0_s_0 FVar6;
  FNetRefHandle_u_0_s_0 FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar5 = false;
  bVar4 = false;
  bVar8 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153500>);
  if (bVar8) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
    pFVar1 = *(FNetRefHandle_u_0 **)((longlong)this + 8);
    FVar2 = pFVar1->_s_0;
    uVar10 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                       (*(FNetRefHandleManager **)this,(FNetRefHandle)FVar2);
    if (uVar10 == 0) {
      if ((pFVar1->Id == 0 && pFVar1->ReplicationSystemId == 0) ||
         ((&pFVar1->_s_0)->ReplicationSystemId == 0)) {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      ::FString::PrintfImpl(&local_28,L"NetObject None (InternalIndex: None) (%s)");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (*(FNetRefHandleManager **)this,&local_28,uVar10);
    }
    bVar5 = true;
    bVar4 = true;
    bVar8 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153500>,&::ENSURE_Static);
    if (bVar8) {
      bVar8 = true;
      goto LAB_1504b6b89;
    }
  }
  bVar8 = false;
LAB_1504b6b89:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 1504b6d50

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::InternalCreateNetObject'::__l26::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371154216>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371154216>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b6e10;
    }
  }
  bVar2 = false;
LAB_1504b6e10:
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

// operator() @ 1504b7390

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::InternalAddSubObject'::__l14::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153769>);
  if (bVar4) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)this,&local_18,**(uint **)((longlong)this + 0x10));
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)this,&local_28,**(uint **)((longlong)this + 8));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153769>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b7436;
    }
  }
  bVar4 = false;
LAB_1504b7436:
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

// operator() @ 1504b7640

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::AddDependentObject'::__l51::<lambda_3>::operator()
          (void *this)

{
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0_s_0 FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FNetRefHandle_u_0_s_0 FVar6;
  FNetRefHandle_u_0_s_0 FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  bVar4 = false;
  bVar8 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153557>);
  if (bVar8) {
    UE::Net::LexToString
              (*(EDependentObjectSchedulingHint *)(**(longlong **)((longlong)this + 0x20) + 4));
    UE::Net::LexToString(**(EDependentObjectSchedulingHint **)((longlong)this + 0x18));
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)this,&local_28,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
    pFVar1 = *(FNetRefHandle_u_0 **)((longlong)this + 8);
    FVar2 = pFVar1->_s_0;
    uVar10 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                       (*(FNetRefHandleManager **)this,(FNetRefHandle)FVar2);
    if (uVar10 == 0) {
      if ((pFVar1->Id == 0 && pFVar1->ReplicationSystemId == 0) ||
         ((&pFVar1->_s_0)->ReplicationSystemId == 0)) {
        ::FString::PrintfImpl(&local_48,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_48,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      ::FString::PrintfImpl(&local_38,L"NetObject None (InternalIndex: None) (%s)");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (*(FNetRefHandleManager **)this,&local_38,uVar10);
    }
    bVar5 = true;
    bVar4 = true;
    bVar8 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153557>,&::ENSURE_Static);
    if (bVar8) {
      bVar8 = true;
      goto LAB_1504b77d3;
    }
  }
  bVar8 = false;
LAB_1504b77d3:
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 1504b7920

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::AddCreationDependency'::__l11::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153493>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153493>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b79a0

bool __thiscall
`UE::Net::Private::FNetRefHandleManager::AddDependentObject'::__l90::<lambda_4>::operator()
          (void *this)

{
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0_s_0 FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FNetRefHandle_u_0_s_0 FVar6;
  FNetRefHandle_u_0_s_0 FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar5 = false;
  bVar4 = false;
  bVar8 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4467568253371153545>);
  if (bVar8) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
    pFVar1 = *(FNetRefHandle_u_0 **)((longlong)this + 8);
    FVar2 = pFVar1->_s_0;
    uVar10 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                       (*(FNetRefHandleManager **)this,(FNetRefHandle)FVar2);
    if (uVar10 == 0) {
      if ((pFVar1->Id == 0 && pFVar1->ReplicationSystemId == 0) ||
         ((&pFVar1->_s_0)->ReplicationSystemId == 0)) {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      ::FString::PrintfImpl(&local_28,L"NetObject None (InternalIndex: None) (%s)");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (*(FNetRefHandleManager **)this,&local_28,uVar10);
    }
    bVar5 = true;
    bVar4 = true;
    bVar8 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4467568253371153545>,&::ENSURE_Static);
    if (bVar8) {
      bVar8 = true;
      goto LAB_1504b7ae9;
    }
  }
  bVar8 = false;
LAB_1504b7ae9:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  return false;
}

