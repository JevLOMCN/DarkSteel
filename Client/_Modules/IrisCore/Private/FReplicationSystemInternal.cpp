// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FReplicationSystemInternal @ 1442f64f0

FReplicationSystemInternal * __thiscall
UE::Net::Private::FReplicationSystemInternal::FReplicationSystemInternal
          (FReplicationSystemInternal *this,FReplicationSystemInternalInitParams *param_1)

{
  FNetBitArray *this_00;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FReplicationConnections *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  FReplicationSystemInternal *pFVar13;
  FScriptContainerElement *_Dst;
  int iVar14;
  
  *(undefined8 *)&(this->ReplicationProtocolManager).RegisteredProtocols = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).RegisteredProtocols.field_0x48 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).ProtocolToInfoMap.field_0x48 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x30 = 0xffffffff
  ;
  *(undefined4 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationProtocolManager).DescriptorToProtocolMap.field_0x48 = 0;
  (this->ReplicationProtocolManager).PendingDestroyProtocols.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicationProtocolManager).PendingDestroyProtocols.ArrayNum = 0;
  (this->ReplicationProtocolManager).PendingDestroyProtocols.ArrayMax = 0;
  FNetRefHandleManager::FNetRefHandleManager
            (&this->NetRefHandleManager,&this->ReplicationProtocolManager);
  uVar6 = param_1->MaxReplicatedObjectCount;
  uVar7 = param_1->NetChunkedArrayCount;
  uVar8 = param_1->MaxReplicationWriterObjectCount;
  (this->InternalInitParams).ReplicationSystemId = param_1->ReplicationSystemId;
  (this->InternalInitParams).MaxReplicatedObjectCount = uVar6;
  (this->InternalInitParams).NetChunkedArrayCount = uVar7;
  (this->InternalInitParams).MaxReplicationWriterObjectCount = uVar8;
  bVar11 = param_1->bAllowParallelTasks;
  bVar9 = param_1->bAllowMinimalUpdateIfNoConnections;
  uVar10 = param_1->field_0x13;
  (this->InternalInitParams).bUseRemoteObjectReferences = param_1->bUseRemoteObjectReferences;
  (this->InternalInitParams).bAllowParallelTasks = bVar11;
  (this->InternalInitParams).bAllowMinimalUpdateIfNoConnections = bVar9;
  (this->InternalInitParams).field_0x13 = uVar10;
  FDirtyNetObjectTracker::FDirtyNetObjectTracker(&this->DirtyNetObjectTracker);
  FReplicationStateStorage::FReplicationStateStorage(&this->ReplicationStateStorage);
  FReplicationStateDescriptorRegistry::FReplicationStateDescriptorRegistry
            (&this->ReplicationStateDescriptorRegistry);
  this->ReplicationBridge = (UObjectReplicationBridge *)0x0;
  pFVar4 = &this->Connections;
  this->IrisObjectReferencePackageMap = (UIrisObjectReferencePackageMap *)0x0;
  this_00 = &(this->Connections).ValidConnections;
  (this->ChangeMaskCache).Indices.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0;
  piVar1 = &(this->Connections).Connections.ArrayNum;
  (this->ChangeMaskCache).Indices.ArrayNum = 0;
  piVar2 = &(this->Connections).ReplicationViews.ArrayNum;
  (this->ChangeMaskCache).Indices.ArrayMax = 1;
  (this->ChangeMaskCache).Storage.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ChangeMaskCache).Storage.ArrayNum = 0;
  (this->ChangeMaskCache).Storage.ArrayMax = 1;
  (pFVar4->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->Connections).Connections.ArrayMax = 0;
  (this->Connections).ReplicationViews.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  piVar3 = &(this->Connections).ReplicationViews.ArrayMax;
  *piVar3 = 0;
  (this_00->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ValidConnections.Storage.ArrayNum = 0;
  (this->Connections).ValidConnections.Storage.ArrayMax = 0;
  (this->Connections).ValidConnections.BitCount = 0x80;
  FNetBitArray::Init(this_00,0x80);
  iVar14 = *piVar1;
  if (iVar14 < 0x80) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,0x80 - iVar14,(ForAnyElementType *)pFVar4,piVar1,
                        &(this->Connections).Connections.ArrayMax);
    memset((pFVar4->Connections).AllocatorInstance.Data + (longlong)iVar12 * 0x28,0,
           (longlong)(0x80 - iVar14) * 0x28);
  }
  else if (0x80 < iVar14) {
    iVar14 = iVar14 + -0x80;
    if (iVar14 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FReplicationSystemInternal *)(*pcVar5)();
        return pFVar13;
      }
    }
    else if (iVar14 == 0) goto LAB_1442f6776;
    _Dst = (pFVar4->Connections).AllocatorInstance.Data + 0x1400;
    iVar12 = (*piVar1 - iVar14) + -0x80;
    if (iVar12 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar14 * 0x28,(longlong)iVar12 * 0x28);
    }
    *piVar1 = *piVar1 - iVar14;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)pFVar4,*piVar1,&(this->Connections).Connections.ArrayMax)
    ;
  }
LAB_1442f6776:
  iVar14 = *piVar2;
  if (iVar14 < 0x80) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x130,8,0x80 - iVar14,
                        &(this->Connections).ReplicationViews.AllocatorInstance,piVar2,piVar3);
    DefaultConstructItems<UE::Net::FReplicationView,int>
              ((this->Connections).ReplicationViews.AllocatorInstance.Data +
               (longlong)iVar12 * 0x130,0x80 - iVar14);
  }
  else if (0x80 < iVar14) {
    iVar14 = iVar14 + -0x80;
    if (iVar14 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FReplicationSystemInternal *)(*pcVar5)();
        return pFVar13;
      }
    }
    else if (iVar14 == 0) goto LAB_1442f6826;
    TArray<UE::Net::FReplicationView,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&(this->Connections).ReplicationViews,0x80,iVar14);
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,&(this->Connections).ReplicationViews.AllocatorInstance,*piVar2,piVar3);
  }
LAB_1442f6826:
  FReplicationFiltering::FReplicationFiltering(&this->Filtering);
  FNetObjectGroups::FNetObjectGroups(&this->Groups);
  FReplicationConditionals::FReplicationConditionals(&this->Conditionals);
  FReplicationPrioritization::FReplicationPrioritization(&this->Prioritization);
  FObjectReferenceCache::FObjectReferenceCache(&this->ObjectReferenceCache);
  FNetBlobManager::FNetBlobManager(&this->NetBlobManager);
  (this->WorldLocations).ValidInfoIndexes.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldLocations).ValidInfoIndexes.Storage.ArrayNum = 0;
  (this->WorldLocations).ValidInfoIndexes.Storage.ArrayMax = 0;
  (this->WorldLocations).ValidInfoIndexes.BitCount = 0;
  (this->WorldLocations).ObjectsWithDirtyInfo.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldLocations).ObjectsWithDirtyInfo.Storage.ArrayNum = 0;
  (this->WorldLocations).ObjectsWithDirtyInfo.Storage.ArrayMax = 0;
  (this->WorldLocations).ObjectsWithDirtyInfo.BitCount = 0;
  (this->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.Storage.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  (this->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.Storage.ArrayNum = 0;
  (this->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.Storage.ArrayMax = 0;
  (this->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.BitCount = 0;
  (this->WorldLocations).StorageIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldLocations).StorageIndexes.ArrayNum = 0;
  (this->WorldLocations).StorageIndexes.ArrayMax = 0;
  (this->WorldLocations).ReservedStorageSlot.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldLocations).ReservedStorageSlot.Storage.ArrayNum = 0;
  (this->WorldLocations).ReservedStorageSlot.Storage.ArrayMax = 0;
  (this->WorldLocations).ReservedStorageSlot.BitCount = 0;
  TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>::
  TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
            (&(this->WorldLocations).StoredObjectInfo,0,Constructor);
  (this->WorldLocations).NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->WorldLocations).bLockdownDirtyList = false;
  FDeltaCompressionBaselineManager::FDeltaCompressionBaselineManager
            (&this->DeltaCompressionBaselineManager);
  FDeltaCompressionBaselineInvalidationTracker::FDeltaCompressionBaselineInvalidationTracker
            (&this->DeltaCompressionBaselineInvalidationTracker);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SendStats,4000);
  (this->SendStats).Stats.HugeObjectWaitingForAckTimeInSeconds = 0.0;
  (this->SendStats).Stats.HugeObjectStallingTimeInSeconds = 0.0;
  (this->SendStats).Stats.ScheduledForReplicationRootObjectCount = 0;
  (this->SendStats).Stats.ReplicatedRootObjectCount = 0;
  (this->SendStats).Stats.ReplicatedObjectCount = 0;
  (this->SendStats).Stats.ReplicatedDestructionInfoCount = 0;
  (this->SendStats).Stats.DeltaCompressedObjectCount = 0;
  (this->SendStats).Stats.ReplicatedObjectStatesMaskedOut = 0;
  (this->SendStats).Stats.ActiveHugeObjectCount = 0;
  (this->SendStats).Stats.HugeObjectsWaitingForAckCount = 0;
  (this->SendStats).Stats.HugeObjectsStallingCount = 0;
  (this->SendStats).Stats.ReplicatingConnectionCount = 0;
  FNetTypeStats::FNetTypeStats(&this->TypeStats);
  (this->TickReplicationStats).PendingObjectCount = 0;
  (this->TickReplicationStats).PendingDependentObjectCount = 0;
  (this->TickReplicationStats).HugeObjectSendQueue = 0;
  (this->TickReplicationStats).MaxPendingObjectCount = 0;
  (this->TickReplicationStats).MaxPendingDependentObjectCount = 0;
  (this->TickReplicationStats).MaxHugeObjectSendQueue = 0;
  (this->TickReplicationStats).SampleCount = 0;
  (this->AccumulatedReplicationStats).PendingObjectCount = 0;
  (this->AccumulatedReplicationStats).PendingDependentObjectCount = 0;
  (this->AccumulatedReplicationStats).HugeObjectSendQueue = 0;
  (this->AccumulatedReplicationStats).MaxPendingObjectCount = 0;
  (this->AccumulatedReplicationStats).MaxPendingDependentObjectCount = 0;
  (this->AccumulatedReplicationStats).MaxHugeObjectSendQueue = 0;
  (this->AccumulatedReplicationStats).SampleCount = 0;
  *(undefined8 *)&this->ForwardNetRPCCallMulticastDelegate = 0;
  *(undefined8 *)&(this->ForwardNetRPCCallMulticastDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ForwardNetRPCCallMulticastDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ForwardNetRPCCallMulticastDelegate).field_0x18 = 2;
  this->Id = param_1->ReplicationSystemId;
  this->bBlockFilterChanges = false;
  this->bAllowParallelTasks = param_1->bAllowParallelTasks;
  this->bIsInParallelPhase = false;
  return this;
}

// ~FReplicationSystemInternal @ 1442f8ea0

void __thiscall
UE::Net::Private::FReplicationSystemInternal::~FReplicationSystemInternal
          (FReplicationSystemInternal *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> FVar4;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ForwardNetRPCCallMulticastDelegate).field_0x8,
             *(int *)&(this->ForwardNetRPCCallMulticastDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ForwardNetRPCCallMulticastDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ForwardNetRPCCallMulticastDelegate);
  FNetTypeStats::~FNetTypeStats(&this->TypeStats);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendStats);
  FDeltaCompressionBaselineInvalidationTracker::~FDeltaCompressionBaselineInvalidationTracker
            (&this->DeltaCompressionBaselineInvalidationTracker);
  FDeltaCompressionBaselineManager::~FDeltaCompressionBaselineManager
            (&this->DeltaCompressionBaselineManager);
  FWorldLocations::~FWorldLocations(&this->WorldLocations);
  FNetBlobManager::~FNetBlobManager(&this->NetBlobManager);
  FObjectReferenceCache::~FObjectReferenceCache(&this->ObjectReferenceCache);
  FReplicationPrioritization::~FReplicationPrioritization(&this->Prioritization);
  FReplicationConditionals::~FReplicationConditionals(&this->Conditionals);
  FNetObjectGroups::~FNetObjectGroups(&this->Groups);
  FReplicationFiltering::~FReplicationFiltering(&this->Filtering);
  pFVar2 = (this->Connections).ValidConnections.Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Net::FReplicationView,int>
            ((FReplicationView *)(this->Connections).ReplicationViews.AllocatorInstance.Data,
             (this->Connections).ReplicationViews.ArrayNum);
  pFVar2 = (this->Connections).ReplicationViews.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Connections).Connections.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->ChangeMaskCache).Storage.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->ChangeMaskCache).Indices.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  *(undefined4 *)&(this->ReplicationStateDescriptorRegistry).RegisteredDescriptorsMap.field_0x48 = 0
  ;
  pvVar1 = *(void **)&(this->ReplicationStateDescriptorRegistry).RegisteredDescriptorsMap.field_0x40
  ;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationStateDescriptorRegistry);
  FReplicationStateStorage::~FReplicationStateStorage(&this->ReplicationStateStorage);
  FDirtyNetObjectTracker::~FDirtyNetObjectTracker(&this->DirtyNetObjectTracker);
  FNetRefHandleManager::~FNetRefHandleManager(&this->NetRefHandleManager);
  FReplicationProtocolManager::~FReplicationProtocolManager(&this->ReplicationProtocolManager);
  return;
}

