// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 51

// FReplicationReader @ 1442ae120

FReplicationReader * __thiscall
UE::Net::Private::FReplicationReader::FReplicationReader(FReplicationReader *this)

{
  code *pcVar1;
  bool bVar2;
  FReplicationReader *pFVar3;
  IConsoleVariable *pIVar4;
  
  (this->Parameters).SmallObjectBitThreshold = 0xa0;
  (this->Parameters).MaxInternalNetRefIndex = 0;
  (this->Parameters).MaxReplicationWriterObjectCount = 0;
  (this->Parameters).PacketSendWindowSize = 0;
  (this->Parameters).ConnectionId = 0;
  (this->Parameters).ReplicationSystem = (UReplicationSystem *)0x0;
  (this->Parameters).bAllowSendingAttachmentsToObjectsNotInScope = false;
  (this->Parameters).bAllowReceivingAttachmentsFromRemoteObjectsNotInScope = false;
  (this->Parameters).bAllowDelayingAttachmentsWithUnresolvedReferences = false;
  (this->Parameters).MaxFailedSmallObjectCount = 10;
  (this->Parameters).NumBitsUsedForBatchSize = 0x10;
  (this->Parameters).NumBitsUsedForHugeObjectBatchSize = 0x20;
  FMemStackBase::FMemStackBase(&this->TempLinearAllocator,Small);
  FMemStackChangeMaskAllocator::FMemStackChangeMaskAllocator
            (&this->TempChangeMaskAllocator,&this->TempLinearAllocator);
  *(undefined8 *)&this->HotUnresolvedHandleCache = 0;
  *(undefined8 *)&(this->HotUnresolvedHandleCache).field_0x8 = 0;
  *(undefined8 *)&(this->HotUnresolvedHandleCache).field_0x20 = 0;
  this->ReplicationSystemInternal = (FReplicationSystemInternal *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->StateStorage = (FReplicationStateStorage *)0x0;
  *(undefined4 *)&(this->HotUnresolvedHandleCache).field_0x28 = 0;
  *(undefined4 *)&(this->HotUnresolvedHandleCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->HotUnresolvedHandleCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HotUnresolvedHandleCache).field_0x34 = 0;
  *(undefined8 *)&(this->HotUnresolvedHandleCache).field_0x40 = 0;
  *(undefined4 *)&(this->HotUnresolvedHandleCache).field_0x48 = 0;
  *(undefined8 *)&this->ColdUnresolvedHandleCache = 0;
  *(undefined8 *)&(this->ColdUnresolvedHandleCache).field_0x8 = 0;
  *(undefined8 *)&(this->ColdUnresolvedHandleCache).field_0x20 = 0;
  *(undefined4 *)&(this->ColdUnresolvedHandleCache).field_0x28 = 0;
  *(undefined4 *)&(this->ColdUnresolvedHandleCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColdUnresolvedHandleCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColdUnresolvedHandleCache).field_0x34 = 0;
  *(undefined8 *)&(this->ColdUnresolvedHandleCache).field_0x40 = 0;
  *(undefined4 *)&(this->ColdUnresolvedHandleCache).field_0x48 = 0;
  *(undefined8 *)&(this->VisitedUnresolvedHandles).Elements = 0;
  *(undefined8 *)&(this->VisitedUnresolvedHandles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedUnresolvedHandles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x34 = 0;
  (this->VisitedUnresolvedHandles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedUnresolvedHandles).HashSize = 0;
  *(undefined8 *)&(this->InternalObjectsToResolve).Elements = 0;
  *(undefined8 *)&(this->InternalObjectsToResolve).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InternalObjectsToResolve).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x34 = 0;
  (this->InternalObjectsToResolve).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InternalObjectsToResolve).HashSize = 0;
  *(undefined8 *)&this->ReplicatedObjects = 0;
  *(undefined8 *)&(this->ReplicatedObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicatedObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicatedObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x48 = 0;
  this->ObjectsToDispatchArray = (FObjectsToDispatchArray *)0x0;
  (this->ObjectsWithAttachmentPendingResolve).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithAttachmentPendingResolve).ArrayNum = 0;
  (this->ObjectsWithAttachmentPendingResolve).ArrayMax = 0;
  *(undefined8 *)&this->UnresolvedHandleToDependents = 0;
  *(undefined8 *)&(this->UnresolvedHandleToDependents).field_0x8 = 0;
  *(undefined8 *)&(this->UnresolvedHandleToDependents).field_0x20 = 0;
  *(undefined4 *)&(this->UnresolvedHandleToDependents).field_0x28 = 0;
  *(undefined4 *)&(this->UnresolvedHandleToDependents).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnresolvedHandleToDependents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnresolvedHandleToDependents).field_0x34 = 0;
  *(undefined8 *)&(this->UnresolvedHandleToDependents).field_0x40 = 0;
  *(undefined4 *)&(this->UnresolvedHandleToDependents).field_0x48 = 0;
  *(undefined8 *)&this->ResolvedDynamicHandleToDependents = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleToDependents).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleToDependents).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleToDependents).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleToDependents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedDynamicHandleToDependents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolvedDynamicHandleToDependents).field_0x34 = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleToDependents).field_0x40 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleToDependents).field_0x48 = 0;
  *(undefined8 *)&(this->PendingBatchHolder).PendingBatches = 0;
  *(undefined8 *)&(this->PendingBatchHolder).PendingBatches.field_0x8 = 0;
  *(undefined8 *)&(this->PendingBatchHolder).PendingBatches.field_0x20 = 0;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x28 = 0;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x34 = 0;
  *(undefined8 *)&(this->PendingBatchHolder).PendingBatches.field_0x40 = 0;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x48 = 0;
  (this->BrokenObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrokenObjects).ArrayNum = 0;
  (this->BrokenObjects).ArrayMax = 0;
  *(undefined8 *)&this->BlockedMustBeMappedLastWarningTime = 0;
  *(undefined8 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x8 = 0;
  *(undefined8 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x20 = 0;
  *(undefined4 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x28 = 0;
  *(undefined4 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x34 = 0;
  *(undefined8 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x40 = 0;
  *(undefined4 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x48 = 0;
  (this->TempMustBeMappedReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempMustBeMappedReferences).ArrayNum = 0;
  (this->TempMustBeMappedReferences).ArrayMax = 0;
  *(undefined8 *)&this->UnresolvedReferencesCache = 0;
  *(undefined8 *)&(this->UnresolvedReferencesCache).field_0x8 = 0;
  *(undefined8 *)&(this->UnresolvedReferencesCache).field_0x20 = 0;
  *(undefined4 *)&(this->UnresolvedReferencesCache).field_0x28 = 0;
  *(undefined4 *)&(this->UnresolvedReferencesCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnresolvedReferencesCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnresolvedReferencesCache).field_0x34 = 0;
  *(undefined8 *)&(this->UnresolvedReferencesCache).field_0x40 = 0;
  *(undefined4 *)&(this->UnresolvedReferencesCache).field_0x48 = 0;
  *(undefined8 *)&this->MappedDynamicReferencesCache = 0;
  *(undefined8 *)&(this->MappedDynamicReferencesCache).field_0x8 = 0;
  *(undefined8 *)&(this->MappedDynamicReferencesCache).field_0x20 = 0;
  *(undefined4 *)&(this->MappedDynamicReferencesCache).field_0x28 = 0;
  *(undefined4 *)&(this->MappedDynamicReferencesCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedDynamicReferencesCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedDynamicReferencesCache).field_0x34 = 0;
  *(undefined8 *)&(this->MappedDynamicReferencesCache).field_0x40 = 0;
  *(undefined4 *)&(this->MappedDynamicReferencesCache).field_0x48 = 0;
  this->NetBlobHandlerManager = (FNetBlobHandlerManager *)0x0;
  this->NetObjectBlobType = 0xffffffff;
  FNetObjectAttachmentsReader::FNetObjectAttachmentsReader(&this->Attachments);
  (this->ResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  (this->ResolveContext).ConnectionId = 0;
  (this->ResolveContext).AsyncLoadingPriority = -1;
  (this->ResolveContext).bForceSyncLoad = false;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReplicationReader *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"net.DelayUnmappedRPCs",0);
  this->DelayAttachmentsWithUnresolvedReferences = pIVar4;
  this->NumHandlesPendingResolveLastUpdate = 0;
  this->StreamDebugFeatures = None;
  return this;
}

// ~FReplicationReader @ 1442b0830

void __thiscall UE::Net::Private::FReplicationReader::~FReplicationReader(FReplicationReader *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  
  if (*(int *)&(this->ReplicatedObjects).field_0x8 != *(int *)&(this->ReplicatedObjects).field_0x34)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReplicatedObjects.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                       ,0x164,
                       L"Possible leak detected in FReplicationReader. Nothing should be registered after Deinit()"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 !=
      *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingBatchHolder.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                       ,0x165,
                       L"Possible leak detected in FReplicationReader. Nothing should be registered after Deinit()"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNetObjectAttachmentsReader::~FNetObjectAttachmentsReader(&this->Attachments);
  *(undefined4 *)&(this->MappedDynamicReferencesCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MappedDynamicReferencesCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappedDynamicReferencesCache);
  *(undefined4 *)&(this->UnresolvedReferencesCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnresolvedReferencesCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnresolvedReferencesCache);
  pFVar2 = (this->TempMustBeMappedReferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->BlockedMustBeMappedLastWarningTime).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlockedMustBeMappedLastWarningTime).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BlockedMustBeMappedLastWarningTime);
  pFVar2 = (this->BrokenObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingBatchHolder).PendingBatches.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingBatchHolder);
  *(undefined4 *)&(this->ResolvedDynamicHandleToDependents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResolvedDynamicHandleToDependents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResolvedDynamicHandleToDependents);
  *(undefined4 *)&(this->UnresolvedHandleToDependents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnresolvedHandleToDependents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnresolvedHandleToDependents);
  pFVar2 = (this->ObjectsWithAttachmentPendingResolve).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ReplicatedObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReplicatedObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicatedObjects);
  (this->InternalObjectsToResolve).HashSize = 0;
  FVar3 = (this->InternalObjectsToResolve).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InternalObjectsToResolve).Elements);
  (this->VisitedUnresolvedHandles).HashSize = 0;
  FVar3 = (this->VisitedUnresolvedHandles).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisitedUnresolvedHandles).Elements);
  *(undefined4 *)&(this->ColdUnresolvedHandleCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColdUnresolvedHandleCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColdUnresolvedHandleCache);
  *(undefined4 *)&(this->HotUnresolvedHandleCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HotUnresolvedHandleCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HotUnresolvedHandleCache);
  if ((GIsCriticalError == false) && ((this->TempLinearAllocator).NumMarks != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->TempLinearAllocator,(FTaggedMemory *)0x0);
  return;
}

// operator() @ 1442b15c0

void __thiscall
`UE::Net::Private::FReplicationReader::DispatchStateData'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (UE::Net::Private::bImmediateDispatchEndReplicationForSubObjects) {
    lVar7 = *(longlong *)this;
    iVar1 = **(int **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = (longlong)iVar1 * 0x20 + lVar7;
    for (; lVar7 != lVar10; lVar7 = lVar7 + 0x20) {
      uVar2 = (*(uint **)(lVar7 + 8))[4];
      if ((uVar2 & 0x40) != 0) {
        UE::Net::Private::FReplicationReader::EndReplication
                  (*(FReplicationReader **)((longlong)this + 0x10),**(uint **)(lVar7 + 8),
                   (bool)((byte)(uVar2 >> 4) & 1),(bool)((byte)(uVar2 >> 3) & 1));
      }
    }
  }
  lVar7 = *(longlong *)this;
  iVar1 = **(int **)((longlong)this + 8);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar10 = (longlong)iVar1 * 0x20 + lVar7;
  for (; lVar7 != lVar10; lVar7 = lVar7 + 0x20) {
    uVar2 = *(uint *)(*(longlong *)(lVar7 + 8) + 0x10);
    if (((uVar2 & 2) != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
      uVar3 = *(uint *)(*(longlong *)((longlong)this + 0x18) + 0x360);
      *(uint *)(*(longlong *)((longlong)this + 0x18) + 0x360) = (uVar2 & 0xff ^ uVar3) & 1 ^ uVar3;
      UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions
                (*(FContext **)(lVar7 + 0x10),*(FNetSerializationContext **)((longlong)this + 0x18))
      ;
    }
  }
  puVar8 = *(undefined8 **)this;
  iVar1 = **(int **)((longlong)this + 8);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar9 = puVar8 + (longlong)iVar1 * 4;
  for (; puVar8 != puVar9; puVar8 = puVar8 + 4) {
    puVar4 = (uint *)puVar8[1];
    if (((byte)puVar4[4] & 3) == 3) {
      UObjectReplicationBridge::PostApplyInitialState
                (*(UObjectReplicationBridge **)(*(longlong *)((longlong)this + 0x10) + 0x80),*puVar4
                );
    }
    if ((puVar4[4] & 4) != 0) {
      UE::Net::Private::FReplicationReader::ResolveAndDispatchAttachments
                (*(FReplicationReader **)((longlong)this + 0x10),
                 *(FNetSerializationContext **)((longlong)this + 0x18),
                 (FReplicatedObjectInfo *)*puVar8,
                 *(ENetObjectAttachmentDispatchFlags *)(puVar8 + 3) ^ Reliable | Unreliable);
    }
    if ((FContext *)puVar8[2] != (FContext *)0x0) {
      UE::Net::Private::FDequantizeAndApplyHelper::Deinitialize((FContext *)puVar8[2]);
    }
  }
  **(undefined4 **)((longlong)this + 8) = 0;
  return;
}

// operator() @ 1442b1ac0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Net::Private::FReplicationReader::ProcessQueuedBatches'::__l2::<lambda_1>::operator()
          (void *this,FPendingBatchData *param_1,FNetRefHandle param_2)

{
  ulonglong *puVar1;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  undefined8 *puVar3;
  ForElementType<unsigned_int> FVar4;
  FNetRefHandleManager *pFVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FNetBitStreamReader *pFVar17;
  uint *puVar18;
  FReplicatedObjectData *pFVar19;
  ulonglong *puVar20;
  ForElementType<unsigned_int> FVar21;
  longlong lVar22;
  ForElementType<UE::Net::FNetRefHandle> FVar23;
  uint *puVar24;
  ForAnyElementType *pFVar25;
  ForElementType<UE::Net::Private::FQueuedDataChunk> FVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  ForElementType<UE::Net::Private::FQueuedDataChunk> FVar29;
  ulonglong uVar30;
  FNetRefHandle_u_0 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_167 [7];
  FNetRefHandle_u_0 local_160;
  uint local_158;
  ForElementType<UE::Net::Private::FQueuedDataChunk> local_150;
  ForElementType<UE::Net::Private::FQueuedDataChunk> local_148;
  FMemMark local_140;
  void *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  TArray<UE::Net::Private::FQueuedDataChunk,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  TArrayView<unsigned_int_const_,int> local_e0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FNetBitStreamReader local_68;
  
  local_res18 = param_2.field0_0x0;
  if (5 < (byte)LogIris._0_1_) {
    UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_b8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar17 = UE::Net::FNetBitStreamReader::FNetBitStreamReader(&local_68);
  puVar3 = *(undefined8 **)((longlong)this + 8);
  uVar10 = *(undefined8 *)&pFVar17->BufferBitCapacity;
  *puVar3 = pFVar17->Buffer;
  puVar3[1] = uVar10;
  uVar10 = *(undefined8 *)&pFVar17->OverflowBitCount;
  puVar3[2] = *(undefined8 *)&pFVar17->BufferBitPosition;
  puVar3[3] = uVar10;
  UE::Net::FNetBitStreamReader::~FNetBitStreamReader(&local_68);
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  local_100 = 0;
  uStack_f8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  (*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0 = (FNetRefHandle_u_0_s_0)local_res18;
  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x310) = 0;
  UE::Net::FNetSerializationContext::AddReadJournalEntry
            (*(FNetSerializationContext **)((longlong)this + 0x10),L"ProcessQueuedBatches");
  local_108 = &param_1->QueuedDataChunks;
  FVar29 = (param_1->QueuedDataChunks).AllocatorInstance.SecondaryData;
  local_158 = (param_1->QueuedDataChunks).ArrayNum;
  uVar28 = (ulonglong)(int)local_158;
  if (FVar29 == (ForElementType<UE::Net::Private::FQueuedDataChunk>)0x0) {
    FVar29 = (ForElementType<UE::Net::Private::FQueuedDataChunk>)local_108;
  }
  FVar26 = (ForElementType<UE::Net::Private::FQueuedDataChunk>)((longlong)FVar29 + uVar28 * 0xc);
  local_150 = FVar26;
  do {
    local_148 = FVar29;
    if (local_108->ArrayNum != (int)uVar28) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FQueuedDataChunk,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (FVar29 == FVar26) {
      FVar23 = (param_1->ResolvedReferences).AllocatorInstance.SecondaryData;
      iVar15 = (param_1->ResolvedReferences).ArrayNum;
      if (FVar23 == (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar23 = (ForElementType<UE::Net::FNetRefHandle>)&param_1->ResolvedReferences;
      }
      FVar2 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar23 + (longlong)iVar15 * 8);
      while( true ) {
        if ((param_1->ResolvedReferences).ArrayNum != iVar15) {
          `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_167);
        }
        if (FVar23 == FVar2) break;
        UE::Net::Private::FObjectReferenceCache::RemoveTrackedQueuedBatchObjectReference
                  (*(FObjectReferenceCache **)(*(longlong *)this + 0x4b0),
                   (FNetRefHandle)*(FNetRefHandle_u_0 *)FVar23);
        FVar23 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar23 + 8);
      }
      return;
    }
    FVar4 = (param_1->DataChunkStorage).AllocatorInstance.SecondaryData;
    FVar21 = (ForElementType<unsigned_int>)param_1;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = FVar4;
    }
    UE::Net::FNetBitStreamReader::InitBits
              (*(FNetBitStreamReader **)((longlong)this + 8),
               (void *)((longlong)FVar21 + (ulonglong)*(uint *)FVar29 * 4),
               *(uint *)((longlong)FVar29 + 4) & 0x3fffffff);
    if ((int)*(uint *)((longlong)FVar29 + 4) < 0) {
      pFVar17 = *(FNetBitStreamReader **)((longlong)this + 8);
      UE::Net::FNetBitStreamReader::ReadBits(pFVar17,0x20);
      UE::Net::FNetBitStreamReader::ReadBits(pFVar17,0x20);
      uVar13 = UE::Net::FNetBitStreamReader::ReadBits
                         (*(FNetBitStreamReader **)((longlong)this + 8),1);
      uVar14 = UE::Net::FNetBitStreamReader::ReadBits
                         (*(FNetBitStreamReader **)((longlong)this + 8),1);
      UE::Net::Private::FNetRefHandleManager::MakeNetRefHandleFromId((ulong64)&local_160);
      uVar28 = local_160.Value & 0x3fffffffffffff;
      pFVar5 = (*(FReplicationReader **)this)->NetRefHandleManager;
      if (*(int *)&(pFVar5->RefHandleToInternalIndex).field_0x8 !=
          *(int *)&(pFVar5->RefHandleToInternalIndex).field_0x34) {
        puVar6 = *(undefined1 **)&(pFVar5->RefHandleToInternalIndex).field_0x40;
        puVar27 = &(pFVar5->RefHandleToInternalIndex).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar27 = puVar6;
        }
        iVar15 = *(int *)(puVar27 +
                         ((uVar28 >> 0x20) * 0x17 + uVar28 &
                         (ulonglong)(*(int *)&(pFVar5->RefHandleToInternalIndex).field_0x48 - 1)) *
                         4);
        if (iVar15 != -1) {
          do {
            lVar22 = *(longlong *)&pFVar5->RefHandleToInternalIndex + (longlong)iVar15 * 0x18;
            if ((*(ulonglong *)
                  (*(longlong *)&pFVar5->RefHandleToInternalIndex + (longlong)iVar15 * 0x18) &
                0x3fffffffffffff) == uVar28) {
              puVar18 = (uint *)(lVar22 + 8);
              if (lVar22 == 0) {
                puVar18 = (uint *)0x0;
              }
              if (((puVar18 != (uint *)0x0) && (uVar16 = *puVar18, uVar16 != 0)) &&
                 (UE::Net::Private::FReplicationReader::EndReplication
                            (*(FReplicationReader **)this,uVar16,false,(bool)((byte)uVar13 & 1)),
                 (uVar14 & 1) != 0)) {
                UE::Net::Private::FNetRefHandleManager::GetSubObjects
                          (*(FNetRefHandleManager **)(*(longlong *)this + 0x70),&local_e0,uVar16);
                puVar18 = local_e0.DataPtr + local_e0.ArrayNum;
                for (puVar24 = local_e0.DataPtr; puVar24 != puVar18; puVar24 = puVar24 + 1) {
                  uVar13 = *puVar24;
                  pFVar5 = *(FNetRefHandleManager **)(*(longlong *)this + 0x70);
                  pFVar7 = (pFVar5->AssignedInternalIndices).Storage.AllocatorInstance.Data;
                  if (((pFVar5->AssignedInternalIndices).BitCount <= uVar13) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index < BitCount",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                          ,0x2c1,L""), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (((*(uint *)(pFVar7 + (ulonglong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1) ==
                       0) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("AssignedInternalIndices.GetBit(InternalIndex)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                                  ,0x245,L""), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar19 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                                      (pFVar5,uVar13);
                  uVar28 = (pFVar19->RefHandle).field0_0x0.Value;
                  if ((uVar28 == 0) || ((uVar28 & 1) != 0)) {
                    bVar11 = false;
                  }
                  else {
                    bVar11 = true;
                  }
                  UE::Net::Private::FReplicationReader::EndReplication
                            (*(FReplicationReader **)this,uVar13,false,bVar11);
                }
              }
              break;
            }
            iVar15 = *(int *)(lVar22 + 0x10);
          } while (iVar15 != -1);
        }
      }
      uVar28 = 0;
      lVar22 = *(longlong *)this;
      pFVar25 = (ForAnyElementType *)(lVar22 + 800);
      if ((((FNetRefHandle_u_0 *)pFVar25->Data <= &local_160) &&
          (&local_160 < (FNetRefHandle_u_0 *)pFVar25->Data + *(int *)(lVar22 + 0x32c))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar15 = *(int *)(lVar22 + 0x328);
      if (0 < iVar15) {
        bVar11 = false;
        uVar30 = uVar28;
        do {
          uVar14 = (uint)uVar28;
          uVar13 = 0;
          if ((int)uVar14 < iVar15) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar13 = uVar14;
          if (((local_160.Value ^ *(ulonglong *)(pFVar25->Data + uVar30)) & 0x3fffffffffffff) == 0)
          {
            uVar13 = uVar14 - 1;
            uVar30 = uVar30 - 8;
            bVar11 = true;
            uVar16 = 0;
            if ((int)uVar14 < *(int *)(lVar22 + 0x328)) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar15 = ~uVar14 + *(int *)(lVar22 + 0x328);
            if (1 < iVar15) {
              iVar15 = 1;
            }
            if (iVar15 != 0) {
              memmove(pFVar25->Data + (longlong)(int)uVar14 * 8,
                      pFVar25->Data + (longlong)(*(int *)(lVar22 + 0x328) - iVar15) * 8,
                      (longlong)iVar15 << 3);
            }
            *(int *)(lVar22 + 0x328) = *(int *)(lVar22 + 0x328) + -1;
          }
          iVar15 = *(int *)(lVar22 + 0x328);
          uVar28 = (ulonglong)(uVar13 + 1);
          uVar30 = uVar30 + 8;
        } while ((int)(uVar13 + 1) < iVar15);
        FVar29 = local_148;
        if (bVar11) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,pFVar25,iVar15,(int *)(lVar22 + 0x32c));
          FVar29 = local_148;
        }
      }
      FVar26 = local_150;
      if (5 < (byte)LogIris._0_1_) {
        UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_98);
        UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_160._s_0,&local_a8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        FVar26 = local_150;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          FVar26 = local_150;
        }
      }
    }
    else {
      puVar20 = *(ulonglong **)(*(longlong *)this + 800);
      puVar1 = puVar20 + *(int *)(*(longlong *)this + 0x328);
      if (puVar20 != puVar1) {
        do {
          if ((*puVar20 & 0x3fffffffffffff) == (local_res18.Value & 0x3fffffffffffff))
          goto LAB_1442b2091;
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar1);
      }
      lVar22 = *(longlong *)this;
      local_140.Mem = (FMemStackBase *)(lVar22 + 0x30);
      local_140.Top = (local_140.Mem)->Top;
      local_140.SavedChunk = *(FTaggedMemory **)(lVar22 + 0x40);
      local_140.bPopped = false;
      local_140.NextTopmostMark = *(FMemMark **)(lVar22 + 0x48);
      *(FMemMark **)(lVar22 + 0x48) = &local_140;
      *(int *)(lVar22 + 0x50) = *(int *)(lVar22 + 0x50) + 1;
      local_110 = 0;
      local_10c = 0x40;
      local_118 = FMemStackBase::Alloc((FMemStackBase *)(*(longlong *)this + 0x30),0x600,0x10);
      if (local_118 == (void *)0x0) {
        local_118 = (void *)0x0;
      }
      else {
        lVar22 = 0x40;
        puVar18 = (uint *)((longlong)local_118 + 0x10);
        do {
          *puVar18 = *puVar18 & 0xfffffc00;
          puVar18[-4] = 0;
          puVar18[-2] = 0;
          puVar18[-1] = 0;
          puVar18 = puVar18 + 6;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      *(void ***)(*(longlong *)this + 0x218) = &local_118;
      *(uint *)(*(longlong *)this + 0x4dc) = *(uint *)((longlong)FVar29 + 8);
      UE::Net::Private::FReplicationReader::ReadObjectsInBatch
                (*(FReplicationReader **)this,*(FNetSerializationContext **)((longlong)this + 0x10),
                 (FNetRefHandle)local_res18._s_0,
                 (bool)((byte)(*(uint *)((longlong)FVar29 + 4) >> 0x1e) & 1),
                 *(uint *)((longlong)FVar29 + 4) & 0x3fffffff);
      if ((((*(FNetSerializationContext **)((longlong)this + 0x10))->ErrorContext).Error !=
           (FName)0x0) ||
         (bVar11 = UE::Net::FNetSerializationContext::IsBitStreamOverflown
                             (*(FNetSerializationContext **)((longlong)this + 0x10)), bVar11)) {
        TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
                  ((TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)this + 800),(FNetRefHandle *)&local_res18._s_0);
        if (1 < (byte)LogIris._0_1_) {
          UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_88);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        if (*(FName *)(*(longlong *)((longlong)this + 0x10) + 8) ==
            UE::Net::GNetError_BrokenNetHandle) {
          local_c8 = 0;
          plVar8 = *(longlong **)(*(longlong *)this + 0x80);
          uStack_c0 = 0;
          local_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = uStack_bc;
          (**(code **)(*plVar8 + 0x358))
                    (plVar8,2,local_res18.Value,*(undefined4 *)(*(longlong *)this + 0xc),&local_78);
          puVar3 = *(undefined8 **)((longlong)this + 0x10);
          local_f0 = 0;
          uStack_e8 = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
      }
      UE::Net::Private::FReplicationReader::DispatchStateData
                (*(FReplicationReader **)this,*(FNetSerializationContext **)((longlong)this + 0x10))
      ;
      UE::Net::Private::FReplicationReader::ResolveAndDispatchUnresolvedReferences
                (*(FReplicationReader **)this);
      UE::Net::Private::FReplicationReader::DispatchEndReplication
                (*(FReplicationReader **)this,*(FNetSerializationContext **)((longlong)this + 0x10))
      ;
      *(undefined8 *)(*(longlong *)this + 0x218) = 0;
      if (local_140.bPopped == false) {
        if (((local_140.Mem)->TopMark != &local_140) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mem.TopMark == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                ,0x215,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_140.bPopped = true;
        (local_140.Mem)->NumMarks = (local_140.Mem)->NumMarks + -1;
        if (local_140.SavedChunk != (local_140.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_140.Mem,local_140.SavedChunk);
        }
        (local_140.Mem)->Top = local_140.Top;
        (local_140.Mem)->TopMark = local_140.NextTopmostMark;
      }
    }
LAB_1442b2091:
    FVar29 = (ForElementType<UE::Net::Private::FQueuedDataChunk>)((longlong)FVar29 + 0xc);
    uVar28 = (ulonglong)local_158;
  } while( true );
}

// operator() @ 1442b2490

void __thiscall
`UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking'::__l3::<lambda_1>::operator()
          (void *this,uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  FNetRefHandle_u_0 local_res8;
  uint local_res10 [2];
  int iStack_3c;
  
  lVar1 = *(longlong *)this;
  local_res10[0] = param_1;
  if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
    TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)(lVar1 + 8),param_1,local_res10);
  }
  uVar3 = local_res10[0];
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar5 = -1;
  iStack_3c = -1;
  if ((int)plVar2[9] != 0) {
    plVar4 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar4 = plVar2 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)plVar2[9] - 1U & (longlong)(int)local_res10[0]) * 4);
    iStack_3c = iVar5;
    if (iVar5 != -1) {
      do {
        iVar5 = *(int *)(*plVar2 + 0x10 + (longlong)iStack_3c * 0x18);
        if (*(uint *)(*plVar2 + (longlong)iStack_3c * 0x18) == local_res10[0]) break;
        iStack_3c = iVar5;
      } while (iVar5 != -1);
    }
  }
  do {
    do {
      if (iStack_3c == -1) {
        return;
      }
      local_res8 = *(FNetRefHandle_u_0 *)(*plVar2 + 8 + (longlong)iStack_3c * 0x18);
      TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
      ::EmplaceByHash<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
                ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                  *)(lVar1 + 8),param_1,local_res10,(FNetRefHandle *)&local_res8._s_0);
      iStack_3c = iVar5;
    } while (iVar5 == -1);
    do {
      iVar5 = *(int *)(*plVar2 + 0x10 + (longlong)iStack_3c * 0x18);
      if (*(uint *)(*plVar2 + (longlong)iStack_3c * 0x18) == uVar3) break;
      iStack_3c = iVar5;
    } while (iVar5 != -1);
  } while( true );
}

// operator() @ 1442b25f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
`UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_Fast'::__l3::<lambda_1>::
operator()(void *this,uint param_1)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FNetRefHandleManager *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
  *this_01;
  bool bVar7;
  int iVar8;
  FNetRefHandle *pFVar9;
  ForElementType<UE::Net::FNetRefHandle> FVar10;
  FNetRefHandle this_02;
  FReplicatedObjectData *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ForElementType<UE::Net::FNetRefHandle> FVar17;
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  *this_03;
  int iVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTVar21;
  uint local_res10 [2];
  char local_res18;
  undefined2 local_res20 [4];
  FNetRefHandle_u_0 local_168;
  uint local_160 [2];
  FNetRefHandle_u_0 local_158;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_150;
  uint uStack_148;
  int iStack_144;
  int local_140;
  int local_138 [2];
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_130;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_128;
  uint uStack_120;
  int iStack_11c;
  int local_118;
  undefined8 local_110;
  int iStack_108;
  int iStack_104;
  int local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  TBaseKeyIterator<0> local_e0;
  TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&> local_c8;
  FNetRefHandle_u_0 *local_b8;
  undefined2 *local_b0;
  FNetRefHandle_u_0 *local_a8;
  uint *local_a0;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  lVar14 = *(longlong *)this;
  pTVar21 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
             *)(lVar14 + 8);
  uVar16 = (ulonglong)(int)param_1;
  local_res18 = '\0';
  iStack_11c = -1;
  local_130 = pTVar21;
  local_128 = pTVar21;
  local_150 = pTVar21;
  local_res10[0] = param_1;
  uStack_148 = param_1;
  uStack_120 = param_1;
  if (*(int *)(lVar14 + 0x50) == 0) {
    local_118 = -1;
    iVar8 = iStack_11c;
    iVar18 = local_118;
  }
  else {
    lVar13 = *(longlong *)(lVar14 + 0x48);
    if (*(longlong *)(lVar14 + 0x48) == 0) {
      lVar13 = lVar14 + 0x40;
    }
    iVar8 = *(int *)(lVar13 + ((longlong)*(int *)(lVar14 + 0x50) - 1U & uVar16) * 4);
    iStack_11c = iVar8;
    iVar18 = iVar8;
    local_118 = iVar8;
    if (iVar8 != -1) {
      do {
        iVar18 = *(int *)(*(longlong *)&pTVar21->Elements + 0x10 + (longlong)iVar8 * 0x18);
        iStack_11c = iVar8;
        local_118 = iVar18;
        if (*(uint *)(*(longlong *)&pTVar21->Elements + (longlong)iVar8 * 0x18) == param_1) break;
        iVar8 = iVar18;
        iStack_11c = iVar18;
      } while (iVar18 != -1);
    }
  }
joined_r0x0001442b26ea:
  iStack_144 = iVar8;
  local_140 = iVar18;
  if (iVar8 != -1) {
    local_168 = (FNetRefHandle_u_0)
                *(FNetRefHandle_u_0 *)
                 &((FNetRefHandle_u_0 *)
                  (*(longlong *)&pTVar21->Elements + 8 + (longlong)iVar8 * 0x18))->_s_0;
    pFVar9 = TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
             ::FindPair(*(TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                          **)((longlong)this + 8),(uint)uVar16,(FNetRefHandle *)&local_168._s_0);
    if (pFVar9 == (FNetRefHandle *)0x0) {
      TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
      ::RemoveByIndex(pTVar21,iVar8);
      iStack_144 = 0xffffffff;
      bVar7 = UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::
              RemoveUnresolvedHandleCount
                        (*(FReplicatedObjectInfo **)this,(FNetRefHandle)local_168._s_0);
      if (bVar7) {
        FVar17 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)this + 0x10);
        local_res18 = '\x01';
        FVar1 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar17 + 0x100);
        FVar10 = FVar17;
        if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar10 = FVar1;
        }
        if ((ulonglong)FVar10 <= &local_168) {
          FVar10 = FVar17;
          if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FVar10 = FVar1;
          }
          if (&local_168 <
              (FNetRefHandle_u_0 *)
              ((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x10c) * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar8 = *(int *)((longlong)FVar17 + 0x108);
        if (iVar8 == *(int *)((longlong)FVar17 + 0x10c)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                            (0x808,(ForElementType<UE::Net::FNetRefHandle> *)FVar17,
                             (int *)((longlong)FVar17 + 0x10c));
        }
        *(int *)((longlong)FVar17 + 0x108) = iVar8 + 1;
        if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar17 + 0x100) !=
            (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar17 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar17 + 0x100);
        }
        ((FNetRefHandle_u_0 *)((longlong)FVar17 + (longlong)iVar8 * 8))->_s_0 =
             (FNetRefHandle_u_0_s_0)local_168;
        iVar8 = *(int *)(*(longlong *)this + 0x158);
        TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                  (&local_e0,
                   (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                    *)(*(longlong *)((longlong)this + 0x18) + 0x230),(FNetRefHandle *)&local_168);
        pFVar9 = local_e0.Key;
        this_01 = local_e0.Set;
        iVar15 = local_e0.NextIndex;
joined_r0x0001442b2872:
        local_e0.NextIndex = iVar15;
        if (local_e0.Index != -1) {
          if (*(int *)(*(longlong *)&this_01->Elements + 8 + (longlong)local_e0.Index * 0x18) ==
              iVar8) {
            TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
            ::RemoveByIndex(this_01,local_e0.Index);
          }
          local_e0.Index = iVar15;
          if (iVar15 == -1) goto LAB_1442b28f1;
          do {
            iVar15 = *(int *)(*(longlong *)&this_01->Elements + 0x10 +
                             (longlong)local_e0.Index * 0x18);
            if ((*(ulonglong *)(*(longlong *)&this_01->Elements + (longlong)local_e0.Index * 0x18) &
                0x3fffffffffffff) == (pFVar9->field0_0x0 & 0x3fffffffffffff)) break;
            local_e0.Index = iVar15;
          } while (iVar15 != -1);
          goto joined_r0x0001442b2872;
        }
LAB_1442b28f1:
        UE::Net::Private::FReplicationReader::RemoveFromUnresolvedCache
                  (*(FReplicationReader **)((longlong)this + 0x18),(FNetRefHandle)local_168._s_0);
        if (5 < (byte)LogIris._0_1_) {
          this_02 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                              (*(FNetRefHandleManager **)
                                (*(longlong *)((longlong)this + 0x18) + 0x70),(uint)local_98);
          UE::Net::FNetRefHandle::ToString((FNetRefHandle *)this_02.field0_0x0,&local_80);
          UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_168._s_0,&local_90);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar16 = (ulonglong)local_res10[0];
    }
    iStack_144 = iVar18;
    if (iVar18 == -1) goto LAB_1442b29ef;
    iVar8 = iVar18;
    do {
      iVar18 = *(int *)(*(longlong *)&pTVar21->Elements + 0x10 + (longlong)iVar8 * 0x18);
      if (*(uint *)(*(longlong *)&pTVar21->Elements + (longlong)iVar8 * 0x18) == param_1) break;
      iVar8 = iVar18;
    } while (iVar18 != -1);
    goto joined_r0x0001442b26ea;
  }
LAB_1442b29ef:
  cVar6 = local_res18;
  plVar2 = *(longlong **)((longlong)this + 8);
  iStack_108 = (int)uVar16;
  iStack_104 = -1;
  if ((int)plVar2[9] == 0) {
    local_100 = -1;
  }
  else {
    plVar12 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar12 = plVar2 + 7;
    }
    local_100 = *(int *)((longlong)plVar12 +
                        ((longlong)(int)plVar2[9] - 1U & (longlong)iStack_108) * 4);
    iStack_104 = local_100;
    if (local_100 != -1) {
      do {
        local_100 = *(int *)(*plVar2 + 0x10 + (longlong)iStack_104 * 0x18);
        if (*(int *)(*plVar2 + (longlong)iStack_104 * 0x18) == iStack_108) break;
        iStack_104 = local_100;
      } while (local_100 != -1);
    }
  }
  local_110._0_4_ = SUB84(plVar2,0);
  local_110._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
  iStack_f0 = iStack_108;
  local_f8 = (undefined4)local_110;
  uStack_f4 = local_110._4_4_;
  iStack_ec = iStack_104;
  pTVar21 = local_130;
  local_e8 = local_100;
  do {
    local_110 = plVar2;
    if (iStack_ec == -1) {
LAB_1442b2dde:
      if (cVar6 != '\0') {
        TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
        ::Shrink((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                  *)(*(longlong *)this + 0xa8));
      }
      return;
    }
    local_158 = (FNetRefHandle_u_0)
                ((FNetRefHandle_u_0 *)
                (*(longlong *)CONCAT44(uStack_f4,local_f8) + 8 + (longlong)iStack_ec * 0x18))->Value
    ;
    if (pTVar21->HashSize == 0) {
LAB_1442b2b75:
      TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
      ::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
                ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                  *)pTVar21,local_res10,(FNetRefHandle *)&local_158._s_0);
      lVar14 = *(longlong *)this;
      uVar16 = local_158.Value & 0x3fffffffffffff;
      this_03 = (TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                 *)(lVar14 + 0xa8);
      local_res20[0] = 0;
      uVar20 = (int)(uVar16 >> 0x20) * 0x17 + (int)uVar16;
      if (*(int *)(lVar14 + 0xb0) != *(int *)(lVar14 + 0xdc)) {
        lVar13 = lVar14 + 0xe0;
        if (*(longlong *)(lVar14 + 0xe8) != 0) {
          lVar13 = *(longlong *)(lVar14 + 0xe8);
        }
        iVar8 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar14 + 0xf0) - 1U & uVar20) * 4);
        if (iVar8 != -1) {
          do {
            lVar14 = *(longlong *)&this_03->Elements + (longlong)iVar8 * 0x18;
            if ((*(ulonglong *)(*(longlong *)&this_03->Elements + (longlong)iVar8 * 0x18) &
                0x3fffffffffffff) == uVar16) {
              if (lVar14 != 0) goto LAB_1442b2c40;
              break;
            }
            iVar8 = *(int *)(lVar14 + 0x10);
          } while (iVar8 != -1);
        }
      }
      local_b8 = &local_158;
      local_b0 = local_res20;
      TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<UE::Net::FNetRefHandle_const_&,short_&&>_>
                (this_03,(uint)local_138,
                 (TPairInitializer<UE::Net::FNetRefHandle_const_&,short_&&> *)(ulonglong)uVar20,
                 (bool *)&local_b8);
      lVar14 = *(longlong *)&this_03->Elements + (longlong)local_138[0] * 0x18;
LAB_1442b2c40:
      *(short *)(lVar14 + 8) = *(short *)(lVar14 + 8) + 1;
      local_160[0] = *(uint *)(*(longlong *)this + 0x158);
      local_a8 = &local_158;
      local_a0 = local_160;
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  *)(*(longlong *)((longlong)this + 0x18) + 0x230),&local_c8,(bool *)&local_a8);
      uVar20 = local_160[0];
      if (5 < (byte)LogIris._0_1_) {
        this_00 = *(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x18) + 0x70);
        pFVar4 = (this_00->AssignedInternalIndices).Storage.AllocatorInstance.Data;
        if ((this_00->AssignedInternalIndices).BitCount <= local_160[0]) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if ((*(uint *)(pFVar4 + (ulonglong)(uVar20 >> 5) * 4) >> (uVar20 & 0x1f) & 1) == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AssignedInternalIndices.GetBit(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                             ,0x245,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar11 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                            (this_00,uVar20);
        local_c8.Value = *(uint **)&(pFVar11->RefHandle).field0_0x0;
        UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_c8.Value,local_60);
        UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_158._s_0,&local_70);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      uVar16 = (ulonglong)local_res10[0];
      pTVar21 = local_130;
    }
    else {
      FVar3 = (pTVar21->Hash).SecondaryData;
      FVar19 = (ForElementType<FSetElementId>)&pTVar21->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = FVar3;
      }
      iVar15 = (int)uVar16;
      iVar8 = *(int *)((longlong)FVar19 + ((longlong)pTVar21->HashSize - 1U & (longlong)iVar15) * 4)
      ;
      iVar18 = iVar8;
      if (iVar8 != -1) {
        lVar14 = *(longlong *)
                  &((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                     *)&pTVar21->Elements)->Elements;
        do {
          iVar8 = *(int *)(lVar14 + 0x10 + (longlong)iVar18 * 0x18);
          if (*(int *)(lVar14 + (longlong)iVar18 * 0x18) == iVar15) break;
          iVar18 = iVar8;
        } while (iVar8 != -1);
      }
      if (iVar18 == -1) goto LAB_1442b2b75;
      lVar14 = *(longlong *)
                &((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                   *)&pTVar21->Elements)->Elements;
      while (lVar13 = (longlong)iVar18 * 3 + 1,
            (*(ulonglong *)(lVar14 + lVar13 * 8) & 0x3fffffffffffff) !=
            (local_158.Value & 0x3fffffffffffff)) {
        do {
          iVar18 = iVar8;
          if (iVar18 == -1) goto LAB_1442b2b75;
          iVar8 = *(int *)(lVar14 + 0x10 + (longlong)iVar18 * 0x18);
        } while (*(int *)(lVar14 + (longlong)iVar18 * 0x18) != iVar15);
      }
      if (lVar14 + lVar13 * 8 == 0) goto LAB_1442b2b75;
    }
    iStack_ec = local_e8;
    if (local_e8 == -1) goto LAB_1442b2dde;
    do {
      local_e8 = *(int *)(*(longlong *)CONCAT44(uStack_f4,local_f8) + 0x10 +
                         (longlong)iStack_ec * 0x18);
      plVar2 = local_110;
      if (*(int *)(*(longlong *)CONCAT44(uStack_f4,local_f8) + (longlong)iStack_ec * 0x18) ==
          iStack_f0) break;
      iStack_ec = local_e8;
    } while (local_e8 != -1);
  } while( true );
}

// operator() @ 1442b3550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
`UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_Fast'::__l9::<lambda_2>::
operator()(void *this,uint param_1)

{
  longlong *plVar1;
  ForElementType<FSetElementId> FVar2;
  FNetRefHandleManager *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
  *this_01;
  bool bVar5;
  FNetRefHandle *pFVar6;
  FNetRefHandle this_02;
  FReplicatedObjectData *pFVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  *this_03;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTVar17;
  char cVar18;
  longlong *local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  FNetRefHandle_u_0 local_158;
  FNetRefHandle_u_0 local_150;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_148;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_140;
  uint uStack_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int iStack_120;
  int iStack_11c;
  int local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_f8;
  uint uStack_f0;
  int iStack_ec;
  int local_e8;
  TBaseKeyIterator<0> local_e0;
  TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&> local_c8;
  FNetRefHandle_u_0 *local_b8;
  longlong **local_b0;
  FNetRefHandle_u_0 *local_a8;
  uint *local_a0;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  lVar10 = *(longlong *)this;
  pTVar17 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
             *)(lVar10 + 0x58);
  uVar14 = (ulonglong)(int)param_1;
  local_res18[0] = local_res18[0] & 0xffffff00;
  iStack_134 = -1;
  if (*(int *)(lVar10 + 0xa0) == 0) {
    local_130 = -1;
  }
  else {
    lVar9 = *(longlong *)(lVar10 + 0x98);
    if (*(longlong *)(lVar10 + 0x98) == 0) {
      lVar9 = lVar10 + 0x90;
    }
    local_130 = *(int *)(lVar9 + ((longlong)*(int *)(lVar10 + 0xa0) - 1U & uVar14) * 4);
    iStack_134 = local_130;
    if (local_130 != -1) {
      do {
        local_130 = *(int *)(*(longlong *)&pTVar17->Elements + 0x10 + (longlong)iStack_134 * 0x18);
        if (*(uint *)(*(longlong *)&pTVar17->Elements + (longlong)iStack_134 * 0x18) == param_1)
        break;
        iStack_134 = local_130;
      } while (local_130 != -1);
    }
  }
  local_e8 = local_130;
  iStack_ec = iStack_134;
  cVar18 = '\0';
  iVar12 = local_130;
  iVar11 = iStack_134;
  local_res8 = this;
  local_res10[0] = param_1;
  local_148 = pTVar17;
  local_140 = pTVar17;
  uStack_138 = param_1;
  uStack_f0 = param_1;
  local_f8 = pTVar17;
  if (iStack_134 != -1) {
    do {
      local_150 = (FNetRefHandle_u_0)
                  *(FNetRefHandle_u_0 *)
                   &((FNetRefHandle_u_0 *)
                    (*(longlong *)&pTVar17->Elements + 8 + (longlong)iVar11 * 0x18))->_s_0;
      iStack_ec = iVar11;
      local_e8 = iVar12;
      pFVar6 = TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               ::FindPair(*(TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                            **)((longlong)this + 8),(uint)uVar14,(FNetRefHandle *)&local_150._s_0);
      if (pFVar6 == (FNetRefHandle *)0x0) {
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTVar17,iVar11);
        bVar5 = UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::
                RemoveResolvedDynamicHandleCount
                          (*(FReplicatedObjectInfo **)this,(FNetRefHandle)local_150._s_0);
        if (bVar5) {
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          iVar11 = *(int *)(*(longlong *)this + 0x158);
          TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                    (&local_e0,
                     (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                      *)(*(longlong *)((longlong)this + 0x10) + 0x280),(FNetRefHandle *)&local_150);
          pFVar6 = local_e0.Key;
          this_01 = local_e0.Set;
          iVar13 = local_e0.NextIndex;
joined_r0x0001442b36de:
          local_e0.NextIndex = iVar13;
          if (local_e0.Index != -1) {
            if (*(int *)(*(longlong *)&this_01->Elements + 8 + (longlong)local_e0.Index * 0x18) ==
                iVar11) {
              TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
              ::RemoveByIndex(this_01,local_e0.Index);
            }
            this = local_res8;
            local_e0.Index = iVar13;
            if (iVar13 == -1) goto LAB_1442b3761;
            do {
              iVar13 = *(int *)(*(longlong *)&this_01->Elements + 0x10 +
                               (longlong)local_e0.Index * 0x18);
              if ((*(ulonglong *)(*(longlong *)&this_01->Elements + (longlong)local_e0.Index * 0x18)
                  & 0x3fffffffffffff) == (pFVar6->field0_0x0 & 0x3fffffffffffff)) break;
              local_e0.Index = iVar13;
            } while (iVar13 != -1);
            goto joined_r0x0001442b36de;
          }
LAB_1442b3761:
          if (5 < (byte)LogIris._0_1_) {
            this_02 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                                (*(FNetRefHandleManager **)
                                  (*(longlong *)((longlong)this + 0x10) + 0x70),(uint)local_98);
            UE::Net::FNetRefHandle::ToString((FNetRefHandle *)this_02.field0_0x0,&local_80);
            UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_150._s_0,&local_90);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
        }
        uVar14 = (ulonglong)local_res10[0];
      }
      iStack_ec = iVar12;
      if (iVar12 == -1) break;
      do {
        local_e8 = *(int *)(*(longlong *)&pTVar17->Elements + 0x10 + (longlong)iVar12 * 0x18);
        iStack_ec = iVar12;
        if (*(uint *)(*(longlong *)&pTVar17->Elements + (longlong)iVar12 * 0x18) == param_1) break;
        iStack_ec = local_e8;
        iVar12 = local_e8;
      } while (local_e8 != -1);
      iVar12 = local_e8;
      iVar11 = iStack_ec;
    } while (iStack_ec != -1);
    cVar18 = (char)local_res18[0];
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  iStack_120 = (int)uVar14;
  iStack_11c = -1;
  if ((int)plVar1[9] == 0) {
    local_118 = -1;
  }
  else {
    plVar8 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar8 = plVar1 + 7;
    }
    local_118 = *(int *)((longlong)plVar8 +
                        ((longlong)(int)plVar1[9] - 1U & (longlong)iStack_120) * 4);
    iStack_11c = local_118;
    if (local_118 != -1) {
      do {
        local_118 = *(int *)(*plVar1 + 0x10 + (longlong)iStack_11c * 0x18);
        if (*(int *)(*plVar1 + (longlong)iStack_11c * 0x18) == iStack_120) break;
        iStack_11c = local_118;
      } while (local_118 != -1);
    }
  }
  local_128._0_4_ = SUB84(plVar1,0);
  local_128._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  iStack_108 = iStack_120;
  local_110 = (undefined4)local_128;
  uStack_10c = local_128._4_4_;
  iStack_104 = iStack_11c;
  pTVar17 = local_148;
  local_100 = local_118;
  do {
    local_128 = plVar1;
    if (iStack_104 == -1) {
LAB_1442b3c4e:
      if (cVar18 != '\0') {
        TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
        ::Shrink((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                  *)(*(longlong *)this + 0xf8));
      }
      return;
    }
    local_158 = (FNetRefHandle_u_0)
                ((FNetRefHandle_u_0 *)
                (*(longlong *)CONCAT44(uStack_10c,local_110) + 8 + (longlong)iStack_104 * 0x18))->
                Value;
    if (pTVar17->HashSize == 0) {
LAB_1442b39d5:
      TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
      ::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
                ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                  *)pTVar17,local_res10,(FNetRefHandle *)&local_158._s_0);
      lVar10 = *(longlong *)this;
      uVar14 = local_158.Value & 0x3fffffffffffff;
      this_03 = (TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                 *)(lVar10 + 0xf8);
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffff0000);
      uVar16 = (int)(uVar14 >> 0x20) * 0x17 + (int)uVar14;
      if (*(int *)(lVar10 + 0x100) != *(int *)(lVar10 + 300)) {
        lVar9 = lVar10 + 0x130;
        if (*(longlong *)(lVar10 + 0x138) != 0) {
          lVar9 = *(longlong *)(lVar10 + 0x138);
        }
        iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar10 + 0x140) - 1U & uVar16) * 4);
        if (iVar12 != -1) {
          do {
            lVar10 = *(longlong *)&this_03->Elements + (longlong)iVar12 * 0x18;
            if ((*(ulonglong *)(*(longlong *)&this_03->Elements + (longlong)iVar12 * 0x18) &
                0x3fffffffffffff) == uVar14) {
              if (lVar10 != 0) goto LAB_1442b3aa6;
              break;
            }
            iVar12 = *(int *)(lVar10 + 0x10);
          } while (iVar12 != -1);
        }
      }
      local_b8 = &local_158;
      local_b0 = &local_res8;
      TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<UE::Net::FNetRefHandle_const_&,short_&&>_>
                (this_03,(uint)local_res20,
                 (TPairInitializer<UE::Net::FNetRefHandle_const_&,short_&&> *)(ulonglong)uVar16,
                 (bool *)&local_b8);
      lVar10 = *(longlong *)&this_03->Elements + (longlong)local_res20[0] * 0x18;
LAB_1442b3aa6:
      *(short *)(lVar10 + 8) = *(short *)(lVar10 + 8) + 1;
      local_res18[0] = *(uint *)(*(longlong *)this + 0x158);
      local_a8 = &local_158;
      local_a0 = local_res18;
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  *)(*(longlong *)((longlong)this + 0x10) + 0x280),&local_c8,(bool *)&local_a8);
      uVar16 = local_res18[0];
      if (5 < (byte)LogIris._0_1_) {
        this_00 = *(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x70);
        pFVar3 = (this_00->AssignedInternalIndices).Storage.AllocatorInstance.Data;
        if ((this_00->AssignedInternalIndices).BitCount <= local_res18[0]) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((*(uint *)(pFVar3 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AssignedInternalIndices.GetBit(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                             ,0x245,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar7 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                           (this_00,uVar16);
        local_c8.Value = *(uint **)&(pFVar7->RefHandle).field0_0x0;
        UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_c8.Value,local_60);
        UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_158._s_0,&local_70);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      uVar14 = (ulonglong)local_res10[0];
      pTVar17 = local_148;
    }
    else {
      FVar2 = (pTVar17->Hash).SecondaryData;
      FVar15 = (ForElementType<FSetElementId>)&pTVar17->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = FVar2;
      }
      iVar13 = (int)uVar14;
      iVar12 = *(int *)((longlong)FVar15 + ((longlong)pTVar17->HashSize - 1U & (longlong)iVar13) * 4
                       );
      iVar11 = iVar12;
      if (iVar12 != -1) {
        lVar10 = *(longlong *)
                  &((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                     *)&pTVar17->Elements)->Elements;
        do {
          iVar12 = *(int *)(lVar10 + 0x10 + (longlong)iVar11 * 0x18);
          if (*(int *)(lVar10 + (longlong)iVar11 * 0x18) == iVar13) break;
          iVar11 = iVar12;
        } while (iVar12 != -1);
      }
      if (iVar11 == -1) goto LAB_1442b39d5;
      lVar10 = *(longlong *)
                &((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                   *)&pTVar17->Elements)->Elements;
      while (lVar9 = (longlong)iVar11 * 3 + 1,
            (*(ulonglong *)(lVar10 + lVar9 * 8) & 0x3fffffffffffff) !=
            (local_158.Value & 0x3fffffffffffff)) {
        do {
          iVar11 = iVar12;
          if (iVar11 == -1) goto LAB_1442b39d5;
          iVar12 = *(int *)(lVar10 + 0x10 + (longlong)iVar11 * 0x18);
        } while (*(int *)(lVar10 + (longlong)iVar11 * 0x18) != iVar13);
      }
      if (lVar10 + lVar9 * 8 == 0) goto LAB_1442b39d5;
    }
    iStack_104 = local_100;
    if (local_100 == -1) goto LAB_1442b3c4e;
    do {
      local_100 = *(int *)(*(longlong *)CONCAT44(uStack_10c,local_110) + 0x10 +
                          (longlong)iStack_104 * 0x18);
      plVar1 = local_128;
      if (*(int *)(*(longlong *)CONCAT44(uStack_10c,local_110) + (longlong)iStack_104 * 0x18) ==
          iStack_108) break;
      iStack_104 = local_100;
    } while (local_100 != -1);
  } while( true );
}

// BuildUnresolvedChangeMaskAndUpdateObjectReferenceTracking @ 1442b67a0

void __thiscall
UE::Net::Private::FReplicationReader::BuildUnresolvedChangeMaskAndUpdateObjectReferenceTracking
          (FReplicationReader *this,
          FResolveAndCollectUnresolvedAndResolvedReferenceCollector *param_1,
          FNetBitArrayView *param_2,FReplicatedObjectInfo *param_3,FNetBitArrayView *param_4,
          TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  FNetRefHandle_u_0 FVar5;
  code *pcVar6;
  FNetBitArrayView *pFVar7;
  bool bVar8;
  FNetRefHandle *pFVar9;
  uchar *puVar10;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar11;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar12;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *this_01;
  undefined1 local_98 [4];
  uint local_94;
  uint local_90 [2];
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_88;
  FNetRefHandle_u_0 local_80;
  FNetRefHandle_u_0 local_78 [2];
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  
  pFVar7 = param_4;
  memset(param_4->Storage,0,(ulonglong)param_4->WordCount << 2);
  this_01 = &this->UnresolvedReferencesCache;
  local_88 = this_01;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
           *)this_01);
  this_00 = &this->MappedDynamicReferencesCache;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
           *)this_00);
  FVar11 = (param_1->UnresolvedReferenceInfos).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->UnresolvedReferenceInfos).ArrayNum;
  iVar2 = *piVar1;
  FVar12 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)param_1;
  if (FVar11 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
    FVar12 = FVar11;
  }
  puVar10 = (uchar *)((longlong)FVar12 + 0x18);
  do {
    if (*piVar1 != iVar2) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<UE::Net::FNetReferenceCollector::FReferenceInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if ((ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)(puVar10 + -0x18) ==
        (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
        ((longlong)iVar2 * 0x20 + (longlong)FVar12)) {
      FVar11 = (param_1->ResolvedReferenceInfos).AllocatorInstance.SecondaryData;
      iVar2 = (param_1->ResolvedReferenceInfos).ArrayNum;
      if (FVar11 == (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FVar11 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                 &param_1->ResolvedReferenceInfos;
      }
      FVar12 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
               ((longlong)iVar2 * 0x20 + (longlong)FVar11);
      while( true ) {
        if ((param_1->ResolvedReferenceInfos).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Net::FNetReferenceCollector::FReferenceInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_98);
        }
        if (FVar11 == FVar12) break;
        FVar5 = (FNetRefHandle_u_0)((FNetRefHandle_u_0 *)((longlong)FVar11 + 8))->Value;
        if ((FVar5.Value != 0) && ((FVar5.Value & 1) == 0)) {
          if (*(int *)((longlong)FVar11 + 0x1c) == 0) {
            local_90[0] = 0xffffffff;
          }
          else {
            local_90[0] = *(uint *)((longlong)FVar11 + 0x18);
          }
          local_78[0] = FVar5;
          pFVar9 = TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                   ::FindPair(this_00,local_90[0],(FNetRefHandle *)&local_78[0]._s_0);
          if (pFVar9 == (FNetRefHandle *)0x0) {
            TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
            ::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle>
                      ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                        *)this_00,local_90,(FNetRefHandle *)&local_78[0]._s_0);
          }
        }
        FVar11 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                 ((longlong)FVar11 + 0x20);
      }
      local_68.Storage = param_2->Storage;
      local_68.WordCount = param_2->WordCount;
      local_68.BitCount = param_2->BitCount;
      if (bUseOptObjectRefTracking == false) {
        local_58.Storage = local_68.Storage;
        local_58._8_8_ = local_68._8_8_;
        UpdateObjectReferenceTracking
                  (this,param_3,&local_58,param_1->bIncludeInitState,param_5,local_88,this_00);
      }
      else {
        UpdateObjectReferenceTracking_Fast
                  (this,param_3,&local_68,param_1->bIncludeInitState,param_5,local_88,this_00);
      }
      return;
    }
    if (*(uint *)(puVar10 + 4) == 0) {
LAB_1442b68c5:
      local_94 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)puVar10;
      puVar4 = pFVar7->Storage;
      if ((pFVar7->BitCount <= uVar3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4[uVar3 >> 5] = puVar4[uVar3 >> 5] | 1 << (uVar3 & 0x1f);
      this_01 = local_88;
      if (*(uint *)(puVar10 + 4) == 0) goto LAB_1442b68c5;
      local_94 = *(uint *)puVar10;
    }
    local_80 = *(FNetRefHandle_u_0 *)(puVar10 + -0x10);
    pFVar9 = TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
             ::FindPair(this_01,local_94,(FNetRefHandle *)&local_80._s_0);
    if (pFVar9 == (FNetRefHandle *)0x0) {
      TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
      ::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle>
                ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                  *)this_01,&local_94,(FNetRefHandle *)&local_80._s_0);
    }
    puVar10 = puVar10 + 0x20;
  } while( true );
}

// CleanupObjectData @ 1442b7020

void __thiscall
UE::Net::Private::FReplicationReader::CleanupObjectData
          (FReplicationReader *this,FReplicatedObjectInfo *param_1)

{
  if ((param_1->InternalIndex != 0) && (0x40 < (param_1->field7_0x15c)._s_1.ChangeMaskBitCount)) {
    FGlobalChangeMaskAllocator::Free
              (&this->PersistentChangeMaskAllocator,
               (void *)(param_1->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer);
  }
  if (((param_1->field7_0x15c).Value & 0xc00000) != 0x800000) {
    FReplicationStateStorage::FreeBaseline
              (this->StateStorage,param_1->InternalIndex,
               param_1->StoredBaselines[(param_1->field7_0x15c).Value >> 0x16 & 3]);
  }
  if (((param_1->field7_0x15c).Value & 0x3000000) != 0x2000000) {
    FReplicationStateStorage::FreeBaseline
              (this->StateStorage,param_1->InternalIndex,
               param_1->StoredBaselines[(param_1->field7_0x15c).Value >> 0x18 & 3]);
  }
  return;
}

// CleanupReferenceTracking @ 1442b70d0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::CleanupReferenceTracking
          (FReplicationReader *this,FReplicatedObjectInfo *param_1)

{
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  FNetRefHandleManager *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
  *pTVar7;
  FNetRefHandle *pFVar8;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar9;
  bool bVar10;
  FReplicatedObjectData *pFVar11;
  longlong lVar12;
  int iVar13;
  FNetRefHandle_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1d8 [2];
  FNetRefHandle_u_0 local_1d0;
  undefined8 local_1c8;
  FNetRefHandle_u_0 local_1c0;
  TBaseKeyIterator<0> local_1b8;
  TBaseKeyIterator<0> local_1a0;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  FNetRefHandle_u_0 local_148;
  FNetRefHandle_u_0 local_140;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  local_1d8[0] = param_1->InternalIndex;
  pTVar1 = &param_1->UnresolvedObjectReferences;
  iVar3 = *(int *)&(param_1->UnresolvedObjectReferences).field_0x28;
  local_178 = &(param_1->UnresolvedObjectReferences).field_0x10;
  iStack_180 = 0;
  local_1c8 = 1;
  local_168 = 0;
  iStack_16c = 0;
  uStack_17c = 1;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(param_1->UnresolvedObjectReferences).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_178;
    }
    uStack_17c = *puVar20;
    while (uStack_17c == 0) {
      lVar12 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      iStack_16c = iVar3;
      uStack_17c = 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1442b718e;
      uStack_17c = puVar20[lVar12 + 1];
    }
    uStack_17c = -uStack_17c & uStack_17c;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_158 = (int)lVar12;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar3 < iStack_16c) {
      iStack_16c = iVar3;
    }
  }
LAB_1442b718e:
  uVar17 = *(uint *)&(param_1->UnresolvedObjectReferences).field_0x28;
  puVar22 = &(param_1->UnresolvedObjectReferences).field_0x10;
  iStack_160 = *(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
               *(int *)&(param_1->UnresolvedObjectReferences).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_17c,iStack_180);
  uStack_170 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_16c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_168;
  uStack_e0 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar1;
  local_108 = pTVar1;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_178;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar16 = *(uint *)&(param_1->UnresolvedObjectReferences).field_0x28;
  if (uVar17 != uVar16) {
    puVar19 = *(undefined1 **)&(param_1->UnresolvedObjectReferences).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar22;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1442b7290;
      uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_154 = (int)lVar12;
    uVar17 = local_154 + -1 + uVar15;
    if ((int)uVar16 < (int)uVar17) {
      uVar17 = uVar16;
    }
  }
LAB_1442b7290:
  while( true ) {
    pTVar9 = local_108;
    if (*(int *)(&local_108->field_0x0 + 8) - *(int *)(&local_108->field_0x0 + 0x34) !=
        (int)uStack_e0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar15 = local_1d8[0];
    if (((TStack_100.CurrentBitIndex == uVar17) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) && (pTVar9 == pTVar1)
       ) break;
    FVar14 = (FNetRefHandle_u_0)
             *(FNetRefHandle_u_0 *)
              &((FNetRefHandle_u_0 *)
               (*(longlong *)&pTVar9->field_0x0 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x18))
               ->_s_0;
    local_1d0 = FVar14;
    TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_1b8,
               (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                *)&this->UnresolvedHandleToDependents,(FNetRefHandle *)&local_1d0);
    pFVar8 = local_1b8.Key;
    pTVar7 = local_1b8.Set;
    iVar3 = local_1b8.NextIndex;
joined_r0x0001442b7303:
    local_1b8.NextIndex = iVar3;
    if (local_1b8.Index != -1) {
      if (*(uint *)(*(longlong *)&pTVar7->Elements + 8 + (longlong)local_1b8.Index * 0x18) == uVar15
         ) {
        TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTVar7,local_1b8.Index);
      }
      FVar14 = local_1d0;
      local_1b8.Index = iVar3;
      if (iVar3 == -1) goto LAB_1442b738f;
      do {
        iVar3 = *(int *)(*(longlong *)&pTVar7->Elements + 0x10 + (longlong)local_1b8.Index * 0x18);
        if ((*(ulonglong *)(*(longlong *)&pTVar7->Elements + (longlong)local_1b8.Index * 0x18) &
            0x3fffffffffffff) == (pFVar8->field0_0x0 & 0x3fffffffffffff)) break;
        local_1b8.Index = iVar3;
      } while (iVar3 != -1);
      goto joined_r0x0001442b7303;
    }
LAB_1442b738f:
    RemoveFromUnresolvedCache(this,(FNetRefHandle)FVar14);
    uVar15 = local_1d8[0];
    if (5 < (byte)LogIris._0_1_) {
      pFVar4 = this->NetRefHandleManager;
      pFVar5 = (pFVar4->AssignedInternalIndices).Storage.AllocatorInstance.Data;
      if (((pFVar4->AssignedInternalIndices).BitCount <= local_1d8[0]) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(uint *)(pFVar5 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AssignedInternalIndices.GetBit(InternalIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                              ,0x245,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(pFVar4,uVar15);
      local_148._s_0 = *(FNetRefHandle_u_0_s_0 *)&(pFVar11->RefHandle).field0_0x0;
      FNetRefHandle::ToString((FNetRefHandle *)&local_148._s_0,&local_98);
      FNetRefHandle::ToString((FNetRefHandle *)&local_1d0._s_0,&local_a8);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
           *)pTVar1);
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
           *)&param_1->UnresolvedHandleCount);
  pTVar1 = &param_1->ResolvedDynamicObjectReferences;
  iStack_130 = 0;
  iVar3 = *(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x28;
  local_128 = &(param_1->ResolvedDynamicObjectReferences).field_0x10;
  local_118 = 0;
  iStack_11c = 0;
  if (iVar3 == 0) {
LAB_1442b7561:
    uStack_12c = (uint)local_1c8;
  }
  else {
    puVar20 = *(uint **)&(param_1->ResolvedDynamicObjectReferences).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_128;
    }
    uStack_12c = *puVar20;
    while (uStack_12c == 0) {
      lVar12 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_1442b7561;
      uStack_12c = puVar20[lVar12 + 1];
    }
    uStack_12c = -uStack_12c & uStack_12c;
    uVar2 = (ulonglong)uStack_12c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_150 = (int)lVar12;
    iStack_11c = local_118 + -1 + local_150;
    if (iVar3 < iStack_11c) {
      iStack_11c = iVar3;
    }
  }
  uVar17 = *(uint *)&(param_1->ResolvedDynamicObjectReferences).field_0x28;
  puVar22 = &(param_1->ResolvedDynamicObjectReferences).field_0x10;
  iStack_114 = iStack_16c;
  iStack_110 = *(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x8 -
               *(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iStack_130);
  iVar13 = (int)uVar17 >> 5;
  TStack_d0._28_4_ = iStack_16c;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = pTVar1;
  local_d8 = pTVar1;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar16 = *(uint *)&(param_1->ResolvedDynamicObjectReferences).field_0x28;
  if (uVar17 != uVar16) {
    puVar19 = *(undefined1 **)&(param_1->ResolvedDynamicObjectReferences).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar22;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1442b7670;
      uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_14c = (int)lVar12;
    uVar17 = (uVar15 - 1) + local_14c;
    if ((int)uVar16 < (int)uVar17) {
      uVar17 = uVar16;
    }
  }
LAB_1442b7670:
  do {
    pTVar9 = local_d8;
    if (*(int *)(&local_d8->field_0x0 + 8) - *(int *)(&local_d8->field_0x0 + 0x34) != (int)uStack_b0
       ) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    uVar15 = local_1d8[0];
    if (((TStack_d0.CurrentBitIndex == uVar17) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) && (pTVar9 == pTVar1))
    {
      TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
               *)pTVar1);
      TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
               *)&param_1->ResolvedDynamicHandleCount);
      pFVar5 = (this->ObjectsWithAttachmentPendingResolve).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_1d8) &&
          ((FScriptContainerElement *)local_1d8 <
           pFVar5 + (longlong)(this->ObjectsWithAttachmentPendingResolve).ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = (this->ObjectsWithAttachmentPendingResolve).ArrayNum;
      if (iVar3 != 0) {
        pFVar5 = (this->ObjectsWithAttachmentPendingResolve).AllocatorInstance.Data;
        iVar21 = 0;
        bVar10 = *(uint *)pFVar5 != local_1d8[0];
        lVar12 = 0;
        uVar17 = local_1d8[0];
        iVar13 = 0;
        do {
          iVar18 = iVar13;
          do {
            lVar12 = lVar12 + 1;
            iVar18 = iVar18 + 1;
            if (iVar3 <= lVar12) break;
          } while (bVar10 == (*(uint *)(pFVar5 + lVar12 * 4) != uVar17));
          if (bVar10 != false) {
            if (iVar21 != iVar13) {
              memmove(pFVar5 + (longlong)iVar21 * 4,pFVar5 + (longlong)iVar13 * 4,
                      (longlong)(iVar18 - iVar13) << 2);
              uVar17 = local_1d8[0];
            }
            iVar21 = iVar21 + (iVar18 - iVar13);
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar13 = iVar18;
        } while (lVar12 < iVar3);
        (this->ObjectsWithAttachmentPendingResolve).ArrayNum = iVar21;
      }
      return;
    }
    local_1c0 = *(FNetRefHandle_u_0 *)
                 (*(longlong *)&pTVar9->field_0x0 + 8 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_1a0,
               (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                *)&this->ResolvedDynamicHandleToDependents,(FNetRefHandle *)&local_1c0);
    pFVar8 = local_1a0.Key;
    pTVar7 = local_1a0.Set;
    uVar16 = uVar15;
    iVar3 = local_1a0.NextIndex;
joined_r0x0001442b76e1:
    local_1a0.NextIndex = iVar3;
    if (local_1a0.Index != -1) {
      if (*(uint *)(*(longlong *)&pTVar7->Elements + 8 + (longlong)local_1a0.Index * 0x18) == uVar15
         ) {
        TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTVar7,local_1a0.Index);
      }
      uVar16 = local_1d8[0];
      local_1a0.Index = iVar3;
      if (iVar3 == -1) goto LAB_1442b7775;
      do {
        iVar3 = *(int *)(*(longlong *)&pTVar7->Elements + 0x10 + (longlong)local_1a0.Index * 0x18);
        if ((*(ulonglong *)(*(longlong *)&pTVar7->Elements + (longlong)local_1a0.Index * 0x18) &
            0x3fffffffffffff) == (pFVar8->field0_0x0 & 0x3fffffffffffff)) break;
        local_1a0.Index = iVar3;
      } while (iVar3 != -1);
      goto joined_r0x0001442b76e1;
    }
LAB_1442b7775:
    if (5 < (byte)LogIris._0_1_) {
      pFVar4 = this->NetRefHandleManager;
      pFVar5 = (pFVar4->AssignedInternalIndices).Storage.AllocatorInstance.Data;
      if (((pFVar4->AssignedInternalIndices).BitCount <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(uint *)(pFVar5 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AssignedInternalIndices.GetBit(InternalIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                              ,0x245,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(pFVar4,uVar16);
      local_140._s_0 = *(FNetRefHandle_u_0_s_0 *)&(pFVar11->RefHandle).field0_0x0;
      FNetRefHandle::ToString((FNetRefHandle *)&local_140._s_0,local_78);
      FNetRefHandle::ToString((FNetRefHandle *)&local_1c0._s_0,&local_88);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  } while( true );
}

// Deinit @ 1442baf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Net::Private::FReplicationReader::Deinit(FReplicationReader *this)

{
  FNetRefHandle_u_0 *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TMap<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FNetRefHandle_u_0 *pFVar11;
  FPendingBatchHolder *this_00;
  TMap<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>_>
  *pTVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a0;
  TMap<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  FPendingBatchHolder::CreateConstIterator(&this->PendingBatchHolder,(TConstIterator *)&local_a8);
  if (local_a0.CurrentBitIndex < (local_a0.Array)->NumBits) {
    do {
      lVar9 = *(longlong *)(*local_a8 + 8 + (longlong)local_a0.CurrentBitIndex * 0x18);
      if (2 < (byte)LogIris._0_1_) {
        FNetRefHandle::ToString((FNetRefHandle *)(lVar9 + 0x130),&local_50);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      if (this->ObjectReferenceCache != (FObjectReferenceCache *)0x0) {
        iVar10 = *(int *)(lVar9 + 0x128);
        pFVar11 = (FNetRefHandle_u_0 *)(lVar9 + 0x100);
        if (*(FNetRefHandle_u_0 **)(lVar9 + 0x120) != (FNetRefHandle_u_0 *)0x0) {
          pFVar11 = *(FNetRefHandle_u_0 **)(lVar9 + 0x120);
        }
        pFVar1 = pFVar11 + iVar10;
        while( true ) {
          if (*(int *)(lVar9 + 0x128) != iVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar11 == pFVar1) break;
          FObjectReferenceCache::RemoveTrackedQueuedBatchObjectReference
                    (this->ObjectReferenceCache,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar11->_s_0)
          ;
          pFVar11 = pFVar11 + 1;
        }
      }
      local_a0.UnvisitedBitMask = local_a0.UnvisitedBitMask & ~local_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a0);
    } while (local_a0.CurrentBitIndex < (local_a0.Array)->NumBits);
  }
  this_00 = &this->PendingBatchHolder;
  bVar6 = 1 < *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x48;
  if (!bVar6) {
    TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8);
  puVar18 = &(this->PendingBatchHolder).PendingBatches.field_0xc;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x8 = 0;
  if (*(int *)puVar18 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar18);
  }
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x34 = 0;
  iVar10 = *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x2c;
  *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->PendingBatchHolder).PendingBatches.field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->PendingBatchHolder).PendingBatches.field_0x48 = 1;
    TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReplicatedObjects).field_0x10;
  iVar14 = 0;
  iVar10 = *(int *)&(this->ReplicatedObjects).field_0x28;
  pTVar12 = &this->ReplicatedObjects;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->ReplicatedObjects).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_78.Array;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1442bb165;
      uVar13 = puVar17[lVar9 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar16 + -1 + local_res18;
    if (iVar10 < iVar8) {
LAB_1442bb165:
      iVar8 = iVar10;
    }
  }
  puVar18 = &(this->ReplicatedObjects).field_0x10;
  uVar13 = *(uint *)&(this->ReplicatedObjects).field_0x28;
  uVar19 = uVar13 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uVar7,iVar14);
  iVar10 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar16;
  uStack_58 = CONCAT44(uStack_ac,
                       *(int *)&(this->ReplicatedObjects).field_0x8 -
                       *(int *)&(this->ReplicatedObjects).field_0x34);
  local_80 = pTVar12;
  if (((int)uVar13 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->ReplicatedObjects).field_0x28;
  if (uVar13 != uVar7) {
    puVar3 = *(undefined1 **)&(this->ReplicatedObjects).field_0x20;
    puVar15 = puVar18;
    if (puVar3 != (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar19 = uVar19 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1442bb270;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar19;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_1442bb270:
  while( true ) {
    pTVar5 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar13) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) && (pTVar5 == pTVar12)
       ) break;
    CleanupObjectData(this,(FReplicatedObjectInfo *)
                           (*(longlong *)pTVar5 + (longlong)TStack_78.CurrentBitIndex * 0x178 + 8));
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  pTVar12 = &this->ReplicatedObjects;
  bVar6 = 1 < *(int *)&(this->ReplicatedObjects).field_0x48;
  if (!bVar6) {
    TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
                      *)pTVar12);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar12,0,*(int *)&(this->ReplicatedObjects).field_0x8);
  puVar18 = &(this->ReplicatedObjects).field_0xc;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x8 = 0;
  if (*(int *)puVar18 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x178,8,0,(ForAnyElementType *)pTVar12,0,(int *)puVar18);
  }
  *(undefined4 *)&(this->ReplicatedObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x34 = 0;
  iVar10 = *(int *)&(this->ReplicatedObjects).field_0x2c;
  *(undefined4 *)&(this->ReplicatedObjects).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->ReplicatedObjects).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReplicatedObjects).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->ReplicatedObjects).field_0x48 = 1;
    TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
              *)pTVar12);
  }
  return;
}

// DeserializeObjectStateDelta @ 1442bcb00

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::DeserializeObjectStateDelta
          (FReplicationReader *this,FNetSerializationContext *param_1,uint param_2,
          FDispatchObjectInfo *param_3,FReplicatedObjectInfo *param_4,FReplicatedObjectData *param_5
          ,uint *param_6)

{
  FReplicatedObjectInfo_u_348 *pFVar1;
  FNetBitStreamReader *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  FChangeMaskStorageOrPointer *pFVar8;
  FNetTraceCollector *pFVar9;
  
  this_00 = param_1->BitStreamReader;
  uVar4 = FNetBitStreamReader::ReadBits(this_00,2);
  if (uVar4 == 2) {
    uVar4 = FNetBitStreamReader::ReadBits(this_00,2);
    if (this_00->OverflowBitCount == 0) {
      pFVar8 = &param_3->ChangeMaskOrPointer;
      *param_6 = uVar4;
      if (0x40 < (param_4->field7_0x15c)._s_1.ChangeMaskBitCount) {
        pFVar8 = (FChangeMaskStorageOrPointer *)pFVar8->ChangeMaskOrPointer;
      }
      FReplicationProtocolOperations::DeserializeWithMask
                (param_1,(uint *)pFVar8,param_5->ReceiveStateBuffer,param_5->Protocol);
      return;
    }
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  else {
    uVar5 = FNetBitStreamReader::ReadBits(this_00,1);
    if (this_00->OverflowBitCount == 0) {
      pFVar1 = &param_4->field7_0x15c;
      if ((uVar5 & 1) == 0) {
        uVar5 = pFVar1->Value;
        if ((uVar4 == (uVar5 >> 0x16 & 3)) && ((uVar5 & 0x3000000) != 0x2000000)) {
          FReplicationStateStorage::FreeBaseline
                    (this->StateStorage,param_2,param_4->StoredBaselines[uVar5 >> 0x18 & 3]);
          param_4->StoredBaselines[*(byte *)((longlong)&param_4->field7_0x15c + 3) & 3] =
               (uchar *)0x0;
          pFVar1->Value = pFVar1->Value & 0xfeffffff;
          pFVar1->Value = pFVar1->Value | 0x2000000;
        }
      }
      else {
        *param_6 = uVar4 - 1 & 1;
      }
      if ((param_4->StoredBaselines[uVar4] == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectInfo.StoredBaselines[BaselineIndex]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                             ,0x2e1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0xffffffff;
      pFVar9 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar9 = param_1->TraceCollector;
      }
      if (pFVar9 != (FNetTraceCollector *)0x0) {
        uVar5 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,this_00->BufferBitPosition);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          DeltaCompressed = CreatePersistentNetDebugName(L"DeltaCompressed",0xf);
          _Init_thread_footer(&::_TSS0);
        }
        uVar6 = FNetTrace::TraceName(DeltaCompressed);
        FVar7 = (pFVar9->Events).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
        }
        *(uint *)((longlong)FVar7 + (ulonglong)uVar5 * 0x10) = uVar6;
      }
      pFVar8 = &param_3->ChangeMaskOrPointer;
      if (0x40 < (pFVar1->_s_1).ChangeMaskBitCount) {
        pFVar8 = (FChangeMaskStorageOrPointer *)pFVar8->ChangeMaskOrPointer;
      }
      FReplicationProtocolOperations::DeserializeWithMaskDelta
                (param_1,(uint *)pFVar8,param_5->ReceiveStateBuffer,param_4->StoredBaselines[uVar4],
                 param_5->Protocol);
      if (uVar5 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar9,uVar5,this_00->BufferBitPosition);
      }
    }
    else if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  return;
}

// DispatchEndReplication @ 1442be310

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::DispatchEndReplication
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  FDispatchObjectInfo *pFVar1;
  longlong lVar2;
  uint uVar3;
  FNetRefHandleManager *pFVar4;
  undefined1 *puVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FReplicatedObjectData *pFVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  FDispatchObjectInfo *pFVar17;
  
  uVar3 = this->ObjectsToDispatchArray->ObjectsToDispatchCount;
  pFVar17 = this->ObjectsToDispatchArray->ObjectsToDispatch;
  if (((int)uVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar1 = pFVar17 + (int)uVar3;
  do {
    if (pFVar17 == pFVar1) {
      return;
    }
    puVar15 = (uint *)0x0;
    if ((pFVar17->bDeferredEndReplication != 0) &&
       (EndReplication(this,pFVar17->InternalIndex,pFVar17->bTearOff,pFVar17->bDestroy),
       pFVar17->bProcessEndReplicationForHierarchy != 0)) {
      pFVar4 = this->NetRefHandleManager;
      puVar16 = puVar15;
      if (*(int *)&(pFVar4->SubObjects).DependencyInfos.field_0x8 !=
          *(int *)&(pFVar4->SubObjects).DependencyInfos.field_0x34) {
        puVar5 = *(undefined1 **)&(pFVar4->SubObjects).DependencyInfos.field_0x40;
        puVar13 = &(pFVar4->SubObjects).DependencyInfos.field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar13 = puVar5;
        }
        iVar11 = *(int *)(puVar13 +
                         (ulonglong)
                         (*(int *)&(pFVar4->SubObjects).DependencyInfos.field_0x48 - 1U &
                         pFVar17->InternalIndex) * 4);
        if (iVar11 != -1) {
          lVar6 = *(longlong *)&(pFVar4->SubObjects).DependencyInfos;
          do {
            lVar2 = lVar6 + (longlong)iVar11 * 0x28;
            if (*(uint *)(lVar6 + (longlong)iVar11 * 0x28) == pFVar17->InternalIndex) {
              puVar14 = (uint *)(lVar2 + 4);
              if (lVar2 == 0) {
                puVar14 = puVar15;
              }
              if ((puVar14 != (uint *)0x0) && (*puVar14 != 0xffffffff)) {
                puVar14 = (uint *)((longlong)(int)*puVar14 * 0x30 +
                                  *(longlong *)&(pFVar4->SubObjects).DependentObjectsStorage);
                puVar15 = (uint *)(ulonglong)puVar14[10];
                puVar16 = puVar14;
                if (*(uint **)(puVar14 + 8) != (uint *)0x0) {
                  puVar16 = *(uint **)(puVar14 + 8);
                }
                if (((int)puVar14[10] < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              break;
            }
            iVar11 = *(int *)(lVar2 + 0x20);
          } while (iVar11 != -1);
        }
      }
      puVar15 = puVar16 + (int)puVar15;
      for (; puVar16 != puVar15; puVar16 = puVar16 + 1) {
        pFVar4 = this->NetRefHandleManager;
        uVar3 = *puVar16;
        pFVar7 = (pFVar4->AssignedInternalIndices).Storage.AllocatorInstance.Data;
        if (((pFVar4->AssignedInternalIndices).BitCount <= uVar3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((*(uint *)(pFVar7 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("AssignedInternalIndices.GetBit(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                ,0x245,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar12 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(pFVar4,uVar3);
        uVar8 = (pFVar12->RefHandle).field0_0x0.Value;
        if ((uVar8 == 0) || ((uVar8 & 1) != 0)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        EndReplication(this,uVar3,pFVar17->bTearOff,bVar10);
      }
    }
    pFVar17 = pFVar17 + 1;
  } while( true );
}

// DispatchStateData @ 1442be5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::DispatchStateData
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  FNetRefHandle_u_0 *this_00;
  FNetSerializationContext *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  FReplicatedObjectInfo *pFVar11;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar12;
  uint uVar13;
  longlong lVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  ForElementType<UE::Net::FNetRefHandle> FVar17;
  FNetRefHandle_u_0 *pFVar18;
  FReplicatedObjectInfo *pFVar19;
  uint *****pppppuVar20;
  byte bVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  ForElementType<UE::Net::FNetRefHandle> FVar26;
  uint uVar27;
  longlong lVar28;
  FDispatchObjectInfo *pFVar29;
  uchar *puVar30;
  FChangeMaskStorageOrPointer *pFVar31;
  uint uVar32;
  bool bVar33;
  undefined1 auStackY_b18 [32];
  undefined1 local_ad7 [3];
  uint local_ad4 [3];
  FNetBitArrayView local_ac8;
  FNetBitArrayView local_ab8;
  FDispatchObjectInfo *local_aa8;
  FNetBitArrayView local_a98;
  FNetRefHandle_u_0 *local_a88;
  FReplicatedObjectInfo *local_a80;
  uint ****local_a78;
  uint uStack_a70;
  uint uStack_a6c;
  uint ****local_a68;
  uint uStack_a60;
  uint uStack_a5c;
  uint ****local_a58;
  undefined1 auStack_a50 [8];
  undefined8 *local_a48;
  uint *local_a40;
  FReplicationReader *local_a38;
  FNetSerializationContext *local_a30;
  uint local_a28;
  uint ****local_a20;
  uint ****local_a18;
  FNetSerializationContext *local_a10;
  FChangeMaskStorageOrPointer *local_a08;
  undefined8 *local_a00;
  FDispatchObjectInfo *local_9f8;
  FReplicatedObjectInfo *local_9f0;
  FDispatchObjectInfo *pFStack_9e8;
  FContext *local_9e0;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  FDequantizeAndApplyParameters local_9d0;
  FNetBitArrayView local_998;
  FString local_988;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_978
  ;
  FResolveAndCollectUnresolvedAndResolvedReferenceCollector local_868;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  bVar33 = -1 < CpuChannel->Enabled;
  local_a88 = (FNetRefHandle_u_0 *)this;
  local_a10 = param_1;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2171,"FReplicationReader::DispatchStateData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0x87b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2171);
  }
  auVar4 = ZEXT816(0x20) * ZEXT416(this->ObjectsToDispatchArray->ObjectsToDispatchCount);
  uVar10 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  local_a48 = FMemStackBase::Alloc(&this->TempLinearAllocator,uVar10,0x10);
  uVar27 = 0;
  local_ad4[0] = 0;
  uVar32 = this->ObjectsToDispatchArray->ObjectsToDispatchCount;
  pFVar29 = this->ObjectsToDispatchArray->ObjectsToDispatch;
  local_a40 = local_ad4;
  local_aa8 = pFVar29;
  local_a38 = this;
  local_a30 = param_1;
  local_a00 = local_a48;
  if (((int)uVar32 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = local_a88;
  local_9f8 = pFVar29 + (int)uVar32;
  if (pFVar29 != local_9f8) {
    do {
      pFVar19 = (FReplicatedObjectInfo *)0x0;
      uVar32 = pFVar29->InternalIndex;
      pFVar11 = pFVar19;
      if (*(int *)(this_00 + 0x3a) != *(int *)((longlong)this_00 + 0x1fc)) {
        pFVar18 = this_00 + 0x40;
        if ((FNetRefHandle_u_0 *)this_00[0x41].Value != (FNetRefHandle_u_0 *)0x0) {
          pFVar18 = (FNetRefHandle_u_0 *)this_00[0x41].Value;
        }
        iVar8 = *(int *)((longlong)pFVar18 + (ulonglong)(*(int *)(this_00 + 0x42) - 1U & uVar32) * 4
                        );
        if (iVar8 != -1) {
          do {
            pFVar11 = (FReplicatedObjectInfo *)((longlong)iVar8 * 0x178 + this_00[0x39].Value);
            if ((uint)(pFVar11->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer == uVar32) break;
            iVar8 = *(int *)&pFVar11[1].UnresolvedObjectReferences;
            pFVar11 = pFVar19;
          } while (iVar8 != -1);
        }
      }
      uVar10 = this_00[0xe].Value;
      local_a80 = (FReplicatedObjectInfo *)&pFVar11->UnresolvedObjectReferences;
      if (pFVar11 == (FReplicatedObjectInfo *)0x0) {
        local_a80 = pFVar19;
      }
      uVar13 = (int)uVar32 / 100;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)(uVar10 + 0x2a8)) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar24 = local_a48;
      lVar14 = (ulonglong)(uint)((int)uVar32 % 100) * 0x38;
      lVar28 = *(longlong *)(*(longlong *)(uVar10 + 0x2a0) + (longlong)(int)uVar13 * 8);
      uVar32 = *(uint *)(lVar28 + 0x28 + lVar14);
      local_a88 = (FNetRefHandle_u_0 *)(lVar28 + lVar14);
      if (uVar32 == 0) {
        uVar32 = pFVar29->InternalIndex;
      }
      if ((uVar32 != uVar27) && (local_ad4[0] != 0)) {
        if (bImmediateDispatchEndReplicationForSubObjects != false) {
          uVar27 = *local_a40;
          if (((int)uVar27 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar22 = puVar24 + (longlong)(int)uVar27 * 4;
          for (; puVar24 != puVar22; puVar24 = puVar24 + 4) {
            uVar27 = ((uint *)puVar24[1])[4];
            if ((uVar27 & 0x40) != 0) {
              EndReplication(local_a38,*(uint *)puVar24[1],(bool)((byte)(uVar27 >> 4) & 1),
                             (bool)((byte)(uVar27 >> 3) & 1));
            }
          }
        }
        puVar24 = local_a48;
        uVar27 = *local_a40;
        if (((int)uVar27 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar23 = puVar24 + (longlong)(int)uVar27 * 4;
        puVar22 = local_a48;
        for (; local_a48 = puVar22, puVar24 != puVar23; puVar24 = puVar24 + 4) {
          if (((*(uint *)(puVar24[1] + 0x10) & 2) != 0) && (puVar24[2] != 0)) {
            *(uint *)&local_a30->field_0x360 =
                 (*(uint *)(puVar24[1] + 0x10) & 0xff ^
                 ZPULL(*(undefined4 *)&local_a30->field_0x360,0,1)) & 1 ^
                 *(undefined4 *)&local_a30->field_0x360;
            FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions
                      ((FContext *)puVar24[2],local_a30);
          }
          puVar22 = local_a48;
        }
        uVar27 = *local_a40;
        if (((int)uVar27 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar24 = puVar22 + (longlong)(int)uVar27 * 4;
        for (; puVar22 != puVar24; puVar22 = puVar22 + 4) {
          puVar2 = (uint *)puVar22[1];
          if (((byte)puVar2[4] & 3) == 3) {
            UObjectReplicationBridge::PostApplyInitialState(local_a38->ReplicationBridge,*puVar2);
          }
          if ((puVar2[4] & 4) != 0) {
            ResolveAndDispatchAttachments
                      (local_a38,local_a30,(FReplicatedObjectInfo *)*puVar22,
                       *(ENetObjectAttachmentDispatchFlags *)(puVar22 + 3) ^ Reliable | Unreliable);
          }
          if ((FContext *)puVar22[2] != (FContext *)0x0) {
            FDequantizeAndApplyHelper::Deinitialize((FContext *)puVar22[2]);
          }
        }
        *local_a40 = 0;
      }
      pFVar11 = local_a80;
      pFVar18 = local_a88;
      local_9f0 = local_a80;
      local_9e0 = (FContext *)0x0;
      uStack_9d8 = 0;
      local_a28 = uVar32;
      pFStack_9e8 = pFVar29;
      if ((pFVar29->bShouldCallSubObjectCreatedFromReplication != 0) &&
         (*(uint *)(local_a88 + 5) != 0)) {
        UObjectReplicationBridge::SubObjectCreatedFromReplication
                  ((UObjectReplicationBridge *)this_00[0x10],*(uint *)(local_a88 + 5),
                   (FNetRefHandle)*(FNetRefHandle_u_0 *)&local_a88->_s_0);
      }
      uVar13 = *(uint *)&pFVar29->field_0x10;
      if (((pFVar29->bHasAttachments != 0) && (bExecuteReliableRPCsBeforeApplyState != false)) &&
         (ZPULL(uVar13,0,1) == 0)) {
        uStack_9d8 = 1;
        ResolveAndDispatchAttachments
                  ((FReplicationReader *)&this_00->_s_0,local_a10,pFVar11,Reliable);
        uVar13 = ((uint)*(ushort *)((longlong)&pFVar11->field7_0x15c + 2) ^
                 *(uint *)&pFVar29->field_0x10) & 4 ^ *(uint *)&pFVar29->field_0x10;
        *(uint *)&pFVar29->field_0x10 = uVar13;
      }
      uVar27 = uVar32;
      if ((uVar13 & 2) != 0) {
        uVar32 = (pFVar11->field7_0x15c).Value;
        uVar13 = uVar32 & 0xffff;
        pFVar31 = &local_aa8->ChangeMaskOrPointer;
        local_a08 = pFVar31;
        if (uVar13 < 0x41) {
          FNetBitArrayView::FNetBitArrayView(&local_ac8,(uint *)pFVar31,uVar13);
          pFVar19 = pFVar11;
        }
        else {
          FNetBitArrayView::FNetBitArrayView(&local_ac8,(uint *)pFVar31->ChangeMaskOrPointer,uVar13)
          ;
          pFVar19 = (FReplicatedObjectInfo *)
                    (pFVar11->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer;
        }
        FNetBitArrayView::FNetBitArrayView(&local_ab8,(uint *)pFVar19,uVar13);
        local_a98.Storage = &local_a98.BitCount;
        local_a20 = (uint ****)0x0;
        local_a98.WordCount = 0;
        local_a98.BitCount = 0;
        bVar21 = *(byte *)((longlong)&pFVar11->field7_0x15c + 2) & 1;
        if (bVar21 == 0) {
          local_a98.Storage = local_ac8.Storage;
          local_a98._8_8_ = CONCAT44(local_ac8.BitCount,local_ac8.WordCount);
        }
        else if (bDispatchUnresolvedPreviouslyReceivedChanges == false) {
          if (uVar13 < 0x41) {
            uStack_a70 = uVar13 + 0x1f >> 5;
            local_a98.Storage = (uint *)&local_a20;
            if (uVar13 == 0) {
              local_a98.Storage = &uStack_a6c;
            }
          }
          else {
            local_a98.Storage =
                 FMemStackChangeMaskAllocator::Alloc
                           ((FMemStackChangeMaskAllocator *)&this_00[0xb]._s_0,
                            (uVar13 + 0x1f >> 5) << 2,4);
            uStack_a70 = uVar13 + 0x1f >> 5;
            pFVar11 = local_a80;
            local_a20 = (uint ****)local_a98.Storage;
          }
          local_a98._8_8_ = CONCAT44(uVar32,uStack_a70) & 0xffffffffffff;
          local_a78 = (uint ****)local_a98.Storage;
          uStack_a6c = uVar13;
          if (((local_a98.Storage == local_ac8.Storage) || (uVar13 != local_ac8.BitCount)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x644,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((local_a98.Storage == local_ab8.Storage) ||
              (local_a98.BitCount != local_ab8.BitCount)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x645,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_a98.WordCount != 0) {
            uVar25 = local_a98._8_8_ & 0xffffffff;
            pppppuVar16 = (uint *****)local_a98.Storage;
            pppppuVar15 = (uint *****)local_ac8.Storage;
            pppppuVar20 = (uint *****)local_ab8.Storage;
            do {
              uVar9 = *(uint *)pppppuVar20;
              pppppuVar20 = (uint *****)((longlong)pppppuVar20 + 4);
              *(uint *)pppppuVar16 = *(uint *)pppppuVar15 | uVar9;
              pppppuVar15 = (uint *****)((longlong)pppppuVar15 + 4);
              uVar25 = uVar25 - 1;
              pppppuVar16 = (uint *****)((longlong)pppppuVar16 + 4);
            } while (uVar25 != 0);
          }
        }
        else {
          if (((local_ac8.Storage == local_ab8.Storage) ||
              (local_ac8.BitCount != local_ab8.BitCount)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x64b,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_ac8.WordCount != 0) {
            uVar25 = (ulonglong)local_ac8.WordCount;
            pppppuVar15 = (uint *****)local_ac8.Storage;
            pppppuVar20 = (uint *****)local_ab8.Storage;
            do {
              uVar9 = *(uint *)pppppuVar20;
              pppppuVar20 = (uint *****)((longlong)pppppuVar20 + 4);
              *(uint *)pppppuVar15 = *(uint *)pppppuVar15 | uVar9;
              pppppuVar15 = (uint *****)((longlong)pppppuVar15 + 4);
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
          local_a98._8_8_ = CONCAT44(local_ac8.BitCount,local_ac8.WordCount);
          local_a98.Storage = local_ac8.Storage;
        }
        local_868.UnresolvedReferenceInfos.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
        local_868.UnresolvedReferenceInfos.ArrayNum = 0;
        local_868.ResolvedReferenceInfos.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
        local_868.ResolvedReferenceInfos.ArrayNum = 0;
        local_868.UnresolvedReferenceInfos.ArrayMax = 0x20;
        local_868.ResolvedReferenceInfos.ArrayMax = 0x20;
        local_868.bIncludeInitState = false;
        FResolveAndCollectUnresolvedAndResolvedReferenceCollector::CollectReferences
                  (&local_868,(FObjectReferenceCache *)this_00[0x96],
                   (FNetObjectResolveContext *)&this_00[0x97]._s_0,
                   (bool)(((byte)((pFVar11->field7_0x15c).Value >> 0x11) |
                          local_aa8->bIsInitialState) & 1),&local_a98,(uchar *)pFVar18[4],
                   (FReplicationProtocol *)pFVar18[2]);
        if (((bVar21 != 0) || (0 < local_868.UnresolvedReferenceInfos.ArrayNum)) ||
           (0 < local_868.ResolvedReferenceInfos.ArrayNum)) {
          local_a58 = (uint ****)(auStack_a50 + 4);
          local_a18 = (uint ****)0x0;
          auStack_a50 = (undefined1  [8])0x0;
          if ((bVar21 == 0) || (bDispatchUnresolvedPreviouslyReceivedChanges != false)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
            if (uVar13 < 0x41) {
              uStack_a60 = uVar13 + 0x1f >> 5;
              local_a68 = (uint ****)&local_a18;
              if (uVar13 == 0) {
                local_a68 = (uint ****)&uStack_a5c;
              }
            }
            else {
              local_a68 = FMemStackChangeMaskAllocator::Alloc
                                    ((FMemStackChangeMaskAllocator *)&this_00[0xb]._s_0,
                                     (uVar13 + 0x1f >> 5) << 2,4);
              uStack_a60 = uVar13 + 0x1f >> 5;
              pFVar11 = local_a80;
              local_a18 = local_a68;
            }
            auStack_a50 = (undefined1  [8])(CONCAT44(uVar32,uStack_a60) & 0xffffffffffff);
            uStack_a5c = uVar13;
            local_a58 = local_a68;
            if (((local_a68 == (uint ****)local_ab8.Storage) || (uVar13 != local_ab8.BitCount)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x5d8,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((auStack_a50._0_4_ != 0) && (local_ab8.WordCount != 0)) {
              memcpy(local_a58,local_ab8.Storage,((ulonglong)auStack_a50 & 0xffffffff) << 2);
            }
          }
          local_978.AllocatorInstance.SecondaryData = (ForElementType<UE::Net::FNetRefHandle>)0x0;
          local_978.ArrayNum = 0;
          local_978.ArrayMax = 0x20;
          local_998.Storage = local_a98.Storage;
          local_998.WordCount = local_a98.WordCount;
          local_998.BitCount = local_a98.BitCount;
          BuildUnresolvedChangeMaskAndUpdateObjectReferenceTracking
                    ((FReplicationReader *)&this_00->_s_0,&local_868,&local_998,pFVar11,&local_ab8,
                     &local_978);
          FVar26 = local_978.AllocatorInstance.SecondaryData;
          if (bVar6) {
            if ((((uint ****)local_ac8.Storage == local_a58) ||
                (local_ac8.BitCount != auStack_a50._4_4_)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*this).GetData() != (ArrayA).GetData() && (*this).GetNumBits() == (ArrayA).GetNumBits()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x651,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((local_ac8.Storage == local_ab8.Storage) ||
                (local_ac8.BitCount != local_ab8.BitCount)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*this).GetData() != (ArrayB).GetData() && (*this).GetNumBits() == (ArrayB).GetNumBits()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x652,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = local_868.ResolvedReferenceInfos.ArrayNum;
            if (local_ac8.WordCount != 0) {
              uVar25 = (ulonglong)local_ac8.WordCount;
              pppppuVar16 = (uint *****)local_ac8.Storage;
              pppppuVar15 = (uint *****)local_a58;
              pppppuVar20 = (uint *****)local_ab8.Storage;
              do {
                uVar32 = *(uint *)pppppuVar20;
                pppppuVar20 = (uint *****)((longlong)pppppuVar20 + 4);
                uVar9 = *(uint *)pppppuVar15;
                pppppuVar15 = (uint *****)((longlong)pppppuVar15 + 4);
                *(uint *)pppppuVar16 = *(uint *)pppppuVar16 | ~uVar32 & uVar9;
                uVar25 = uVar25 - 1;
                pppppuVar16 = (uint *****)((longlong)pppppuVar16 + 4);
              } while (uVar25 != 0);
            }
            FVar26 = local_978.AllocatorInstance.SecondaryData;
            if (local_978.ArrayNum != 0) {
              lVar28 = (longlong)local_868.ResolvedReferenceInfos.ArrayNum;
              FVar12 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                       &local_868.ResolvedReferenceInfos;
              if (local_868.ResolvedReferenceInfos.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
                FVar12 = local_868.ResolvedReferenceInfos.AllocatorInstance.SecondaryData;
              }
              puVar30 = (uchar *)((longlong)FVar12 + 0x18);
              while( true ) {
                if (local_868.ResolvedReferenceInfos.ArrayNum != iVar8) {
                  local_ad7[0] = 0;
                  `TCheckedPointerIterator<UE::Net::FNetReferenceCollector::FReferenceInfo_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_ad7);
                  FVar26 = local_978.AllocatorInstance.SecondaryData;
                }
                puVar2 = local_ac8.Storage;
                pFVar11 = local_a80;
                pFVar31 = local_a08;
                pFVar18 = local_a88;
                uVar27 = local_a28;
                if ((ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
                    (puVar30 + -0x18) ==
                    (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
                    (lVar28 * 0x20 + (longlong)FVar12)) break;
                FVar17 = (ForElementType<UE::Net::FNetRefHandle>)&local_978;
                if (FVar26 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
                  FVar17 = FVar26;
                }
                FVar1 = (ForElementType<UE::Net::FNetRefHandle>)
                        ((longlong)FVar17 + (longlong)local_978.ArrayNum * 8);
                if (FVar17 == FVar1) {
LAB_1442bf028:
                  puVar30 = puVar30 + 0x20;
                }
                else {
                  do {
                    if ((*(ulonglong *)FVar17 & 0x3fffffffffffff) ==
                        (*(ulonglong *)(puVar30 + -0x10) & 0x3fffffffffffff)) {
                      uVar32 = *(uint *)puVar30;
                      if ((local_ac8.BitCount <= uVar32) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Index < BitCount",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                             ,0x2a2,L""), bVar6)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      *(uint *)((longlong)puVar2 + (ulonglong)(uVar32 >> 5) * 4) =
                           *(uint *)((longlong)puVar2 + (ulonglong)(uVar32 >> 5) * 4) |
                           1 << (uVar32 & 0x1f);
                      FVar26 = local_978.AllocatorInstance.SecondaryData;
                      goto LAB_1442bf028;
                    }
                    FVar17 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar17 + 8);
                  } while (FVar17 != FVar1);
                  puVar30 = puVar30 + 0x20;
                }
              }
            }
          }
          if (FVar26 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FMemory::Free((void *)FVar26);
          }
        }
        pFVar5 = local_a10;
        if (pFVar18[3].Value == 0) {
          if (5 < (byte)LogIris._0_1_) {
            FNetRefHandle::ToString((FNetRefHandle *)&pFVar18->_s_0,&local_988);
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_988.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          local_9d0.Allocator = (FMemStackBase *)(this_00 + 6);
          *(uint *)&local_a10->field_0x360 =
               (local_aa8->bIsInitialState ^ ZPULL(*(undefined4 *)&local_a10->field_0x360,0,1)) & 1
               ^ *(undefined4 *)&local_a10->field_0x360;
          if (0x40 < uVar13) {
            pFVar31 = (FChangeMaskStorageOrPointer *)pFVar31->ChangeMaskOrPointer;
          }
          if (((pFVar11->field7_0x15c).Value >> 0x10 & 1) == 0) {
            local_9d0.UnresolvedReferencesChangeMaskData = (uint *)0x0;
          }
          else {
            local_9d0.UnresolvedReferencesChangeMaskData = (uint *)pFVar11;
            if (0x40 < uVar13) {
              local_9d0.UnresolvedReferencesChangeMaskData =
                   (uint *)(pFVar11->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer;
            }
          }
          local_9d0.InstanceProtocol = *(FReplicationInstanceProtocol **)(pFVar18 + 3);
          local_9d0.Protocol = *(FReplicationProtocol **)(pFVar18 + 2);
          local_9d0.bHasUnresolvedInitReferences =
               (bool)((byte)((pFVar11->field7_0x15c).Value >> 0x11) & 1);
          local_9d0.SrcObjectStateBuffer = *(uchar **)(pFVar18 + 4);
          local_9d0.ChangeMaskData = (uint *)pFVar31;
          local_9e0 = FDequantizeAndApplyHelper::Initialize(local_a10,&local_9d0);
          FDequantizeAndApplyHelper::ApplyAndCallLegacyPreApplyFunction(local_9e0,pFVar5);
        }
        if (local_868.ResolvedReferenceInfos.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
          FMemory::Free((void *)local_868.ResolvedReferenceInfos.AllocatorInstance.SecondaryData);
        }
        pFVar29 = local_aa8;
        if (local_868.UnresolvedReferenceInfos.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
          FMemory::Free((void *)local_868.UnresolvedReferenceInfos.AllocatorInstance.SecondaryData);
          pFVar29 = local_aa8;
        }
      }
      pFVar29 = pFVar29 + 1;
      local_a00[(ulonglong)local_ad4[0] * 4] = local_9f0;
      (local_a00 + (ulonglong)local_ad4[0] * 4)[1] = pFStack_9e8;
      local_a00[(ulonglong)local_ad4[0] * 4 + 2] = local_9e0;
      (local_a00 + (ulonglong)local_ad4[0] * 4 + 2)[1] = CONCAT44(uStack_9d4,uStack_9d8);
      local_ad4[0] = local_ad4[0] + 1;
      local_aa8 = pFVar29;
    } while (pFVar29 != local_9f8);
  }
  `UE::Net::Private::FReplicationReader::DispatchStateData'::__l2::<lambda_1>::operator()
            (&local_a48);
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoesParentExist @ 1442bf6f0

bool __thiscall
UE::Net::Private::FReplicationReader::DoesParentExist
          (FReplicationReader *this,FNetRefHandle param_1)

{
  bool bVar1;
  
  if (param_1.field0_0x0 == 0) {
    return true;
  }
  bVar1 = FNetRefHandleManager::IsNetRefHandleAssigned(this->NetRefHandleManager,param_1);
  return bVar1;
}

// EndReplication @ 1442bf900

void __thiscall
UE::Net::Private::FReplicationReader::EndReplication
          (FReplicationReader *this,uint param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  FReplicatedObjectInfo *pFVar6;
  EReplicationBridgeDestroyInstanceReason EVar7;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4393424413328933543>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                       ,0x2a7,"InternalIndex != ObjectIndexForOOBAttachment");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (*(int *)&(this->ReplicatedObjects).field_0x8 !=
           *(int *)&(this->ReplicatedObjects).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ReplicatedObjects).field_0x38;
    }
    uVar3 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      while (puVar4 = (uint *)((longlong)(int)uVar3 * 0x178 +
                              *(longlong *)&(this->ReplicatedObjects).field_0x0), *puVar4 != param_1
            ) {
        uVar3 = puVar4[0x5c];
        if (uVar3 == 0xffffffff) {
          return;
        }
      }
      EVar7 = DoNotDestroy;
      pFVar6 = (FReplicatedObjectInfo *)(puVar4 + 2);
      if (puVar4 == (uint *)0x0) {
        pFVar6 = (FReplicatedObjectInfo *)0x0;
      }
      if (pFVar6 != (FReplicatedObjectInfo *)0x0) {
        CleanupReferenceTracking(this,pFVar6);
        FNetObjectAttachmentsReader::DropAllAttachments(&this->Attachments,Normal,param_1);
        if (param_2) {
          EVar7 = TearOff;
        }
        else if (param_3) {
          EVar7 = Destroy;
        }
        UObjectReplicationBridge::DestroyNetObjectFromRemote(this->ReplicationBridge,param_1,EVar7);
        CleanupObjectData(this,pFVar6);
        if (*(int *)&(this->ReplicatedObjects).field_0x8 !=
            *(int *)&(this->ReplicatedObjects).field_0x34) {
          local_res10[0] = param_1;
          TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
                      *)&this->ReplicatedObjects,param_1,local_res10);
        }
      }
    }
  }
  return;
}

// EnqueueEndReplication @ 1442bfaa0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationReader::EnqueueEndReplication
          (FReplicationReader *this,FPendingBatchData *param_1,bool param_2,bool param_3,
          FNetRefHandle param_4)

{
  int *piVar1;
  TArray<UE::Net::Private::FQueuedDataChunk,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<UE::Net::Private::FQueuedDataChunk> FVar9;
  ulonglong uVar10;
  uint local_88;
  uint uStack_84;
  undefined4 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FNetBitStreamWriter local_48;
  
  if (5 < (byte)LogIris._0_1_) {
    FNetRefHandle::ToString(&param_1->Owner,&local_68);
    FNetRefHandle::ToString(&param_4,&local_78);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  piVar1 = &(param_1->DataChunkStorage).ArrayNum;
  uStack_84 = 0x80000042;
  local_88 = *piVar1;
  local_80 = 0;
  Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
            (4,4,3,(ForElementType<unsigned_int> *)param_1,piVar1,
             &(param_1->DataChunkStorage).ArrayMax);
  FNetBitStreamWriter::FNetBitStreamWriter(&local_48);
  FVar3 = (param_1->DataChunkStorage).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<unsigned_int>)param_1;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FVar8 = FVar3;
  }
  FNetBitStreamWriter::InitBytes(&local_48,(void *)((longlong)FVar8 + (ulonglong)local_88 * 4),0xc);
  uVar10 = (ulonglong)param_4.field0_0x0 & 0x3fffffffffffff;
  FNetBitStreamWriter::WriteBits(&local_48,(uint)uVar10,0x20);
  FNetBitStreamWriter::WriteBits(&local_48,(uint)(uVar10 >> 0x20),0x20);
  FNetBitStreamWriter::WriteBits(&local_48,(uint)param_2,1);
  FNetBitStreamWriter::WriteBits(&local_48,(uint)param_3,1);
  FNetBitStreamWriter::CommitWrites(&local_48);
  if ((0x42 < local_48.BufferBitPosition - local_48.BufferBitStartOffset) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4393424413328935601>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                         ,0xab1,"Writer.GetPosBits() <= MaxNumDataBits"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uStack_84 = local_48.BufferBitPosition - local_48.BufferBitStartOffset & 0x3fffffff |
              uStack_84 & 0xc0000000;
  if (local_48.OverflowBitCount == 0) {
    FVar9 = (param_1->QueuedDataChunks).AllocatorInstance.SecondaryData;
    pTVar2 = &param_1->QueuedDataChunks;
    if (FVar9 == (ForElementType<UE::Net::Private::FQueuedDataChunk>)0x0) {
      FVar9 = (ForElementType<UE::Net::Private::FQueuedDataChunk>)pTVar2;
    }
    if ((((ulonglong)FVar9 <= &local_88) &&
        (&local_88 <
         (uint *)((longlong)FVar9 + (longlong)(param_1->QueuedDataChunks).ArrayMax * 0xc))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (param_1->QueuedDataChunks).ArrayNum;
    piVar1 = &(param_1->QueuedDataChunks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FQueuedDataChunk>_>
                        (0x40c,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->QueuedDataChunks).ArrayNum = iVar7 + 1;
    FVar9 = (param_1->QueuedDataChunks).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Net::Private::FQueuedDataChunk>)0x0) {
      FVar9 = (ForElementType<UE::Net::Private::FQueuedDataChunk>)pTVar2;
    }
    bVar5 = true;
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_84,local_88);
    *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + (longlong)iVar7 * 0xc) = local_80;
  }
  else {
    if (1 < (byte)LogIris._0_1_) {
      FNetRefHandle::ToString(&param_4,&local_58);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4393424413328935609>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                       ,0xab9,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = false;
  }
  FNetBitStreamWriter::~FNetBitStreamWriter(&local_48);
  return bVar5;
}

// GetReplicatedObjectInfo @ 1442c3c20

FReplicatedObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::GetReplicatedObjectInfo(FReplicationReader *this,uint param_1)

{
  int iVar1;
  FReplicatedObjectInfo *pFVar2;
  FReplicatedObjectInfo *pFVar3;
  undefined1 *puVar4;
  FReplicatedObjectInfo *pFVar5;
  
  pFVar5 = (FReplicatedObjectInfo *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->ReplicatedObjects).field_0x8 != *(int *)&(this->ReplicatedObjects).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ReplicatedObjects).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FReplicatedObjectInfo *)
                 ((longlong)iVar1 * 0x178 + *(longlong *)&this->ReplicatedObjects);
        if ((uint)(pFVar2->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer == param_1) break;
        iVar1 = *(int *)&pFVar2[1].UnresolvedObjectReferences;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FReplicatedObjectInfo *)&pFVar2->UnresolvedObjectReferences;
  if (pFVar2 == (FReplicatedObjectInfo *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// GetReplicatedObjectInfo @ 1442c3cb0

FReplicatedObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::GetReplicatedObjectInfo(FReplicationReader *this,uint param_1)

{
  int iVar1;
  FReplicatedObjectInfo *pFVar2;
  FReplicatedObjectInfo *pFVar3;
  undefined1 *puVar4;
  FReplicatedObjectInfo *pFVar5;
  
  pFVar5 = (FReplicatedObjectInfo *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->ReplicatedObjects).field_0x8 != *(int *)&(this->ReplicatedObjects).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ReplicatedObjects).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FReplicatedObjectInfo *)
                 ((longlong)iVar1 * 0x178 + *(longlong *)&this->ReplicatedObjects);
        if ((uint)(pFVar2->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer == param_1) break;
        iVar1 = *(int *)&pFVar2[1].UnresolvedObjectReferences;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FReplicatedObjectInfo *)&pFVar2->UnresolvedObjectReferences;
  if (pFVar2 == (FReplicatedObjectInfo *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// Init @ 1442c43d0

void __thiscall
UE::Net::Private::FReplicationReader::Init(FReplicationReader *this,FReplicationParameters *param_1)

{
  UReplicationSystem *pUVar1;
  UPartialNetObjectAttachmentHandler *pUVar2;
  UObject *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  FReplicationSystemInternal *pFVar12;
  UObjectReplicationBridge *pUVar13;
  FNetTokenStore *this_00;
  FNetTokenStoreState *pFVar14;
  FNetObjectAttachmentsReaderInitParams local_res8;
  
  uVar4 = param_1->MaxReplicationWriterObjectCount;
  uVar5 = param_1->PacketSendWindowSize;
  uVar6 = param_1->ConnectionId;
  (this->Parameters).MaxInternalNetRefIndex = param_1->MaxInternalNetRefIndex;
  (this->Parameters).MaxReplicationWriterObjectCount = uVar4;
  (this->Parameters).PacketSendWindowSize = uVar5;
  (this->Parameters).ConnectionId = uVar6;
  bVar7 = param_1->bAllowSendingAttachmentsToObjectsNotInScope;
  bVar8 = param_1->bAllowReceivingAttachmentsFromRemoteObjectsNotInScope;
  bVar9 = param_1->bAllowDelayingAttachmentsWithUnresolvedReferences;
  uVar10 = param_1->field_0x1b;
  uVar4 = param_1->SmallObjectBitThreshold;
  (this->Parameters).ReplicationSystem = param_1->ReplicationSystem;
  (this->Parameters).bAllowSendingAttachmentsToObjectsNotInScope = bVar7;
  (this->Parameters).bAllowReceivingAttachmentsFromRemoteObjectsNotInScope = bVar8;
  (this->Parameters).bAllowDelayingAttachmentsWithUnresolvedReferences = bVar9;
  (this->Parameters).field_0x1b = uVar10;
  (this->Parameters).SmallObjectBitThreshold = uVar4;
  uVar4 = param_1->NumBitsUsedForBatchSize;
  uVar5 = param_1->NumBitsUsedForHugeObjectBatchSize;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  (this->Parameters).MaxFailedSmallObjectCount = param_1->MaxFailedSmallObjectCount;
  (this->Parameters).NumBitsUsedForBatchSize = uVar4;
  (this->Parameters).NumBitsUsedForHugeObjectBatchSize = uVar5;
  *(undefined4 *)&(this->Parameters).field_0x2c = uVar11;
  pFVar12 = UReplicationSystem::GetReplicationSystemInternal((this->Parameters).ReplicationSystem);
  this->ReplicationSystemInternal = pFVar12;
  this->NetRefHandleManager = &pFVar12->NetRefHandleManager;
  this->StateStorage = &pFVar12->ReplicationStateStorage;
  this->NetBlobHandlerManager = &(pFVar12->NetBlobManager).BlobHandlerManager;
  pUVar1 = (this->Parameters).ReplicationSystem;
  this->ObjectReferenceCache = &pFVar12->ObjectReferenceCache;
  pUVar13 = UReplicationSystem::GetReplicationBridge(pUVar1);
  pUVar1 = (this->Parameters).ReplicationSystem;
  this->ReplicationBridge = pUVar13;
  (this->ResolveContext).ConnectionId = param_1->ConnectionId;
  this_00 = UReplicationSystem::GetNetTokenStore(pUVar1);
  pFVar14 = FNetTokenStore::GetRemoteNetTokenStoreState(this_00,param_1->ConnectionId);
  (this->ResolveContext).RemoteNetTokenStoreState = pFVar14;
  pUVar2 = (UPartialNetObjectAttachmentHandler *)
           (this->ReplicationSystemInternal->NetBlobManager).PartialNetObjectAttachmentHandler.
           Object;
  if (pUVar2 != (UPartialNetObjectAttachmentHandler *)0x0) {
    local_res8.PartialNetObjectAttachmentHandler = pUVar2;
    FNetObjectAttachmentsReader::Init(&this->Attachments,&local_res8);
  }
  pUVar3 = (this->ReplicationSystemInternal->NetBlobManager).NetObjectBlobHandler.Object;
  if (pUVar3 != (UObject *)0x0) {
    this->NetObjectBlobType = *(uint *)&pUVar3[1].field_0x8;
  }
  StartReplication(this,0);
  return;
}

// MoveResolvedObjectReferenceToUnresolvedInReplicationInfo @ 1442c7df0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationReader::MoveResolvedObjectReferenceToUnresolvedInReplicationInfo
          (FReplicationReader *this,FReplicatedObjectInfo *param_1,FNetRefHandle param_2)

{
  uint uVar1;
  FNetRefHandleManager *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  short *psVar9;
  FReplicatedObjectData *pFVar10;
  ulonglong uVar11;
  FReplicatedObjectInfo *pFVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  byte bVar16;
  short local_res10 [4];
  FNetRefHandle_u_0 local_res18;
  uint local_res20 [2];
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  FNetRefHandle_u_0 local_b8;
  FNetBitArrayView local_b0;
  FString local_a0;
  FString local_90;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_58;
  
  uVar13 = (param_1->field7_0x15c).Value;
  bVar6 = false;
  bVar15 = false;
  bVar14 = (byte)(uVar13 >> 0x10) & 1;
  bVar16 = (byte)(uVar13 >> 0x11) & 1;
  pFVar12 = param_1;
  if (0x40 < (uVar13 & 0xffff)) {
    pFVar12 = (FReplicatedObjectInfo *)(param_1->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer;
  }
  local_res18 = param_2.field0_0x0;
  FNetBitArrayView::FNetBitArrayView(&local_b0,(uint *)pFVar12,uVar13 & 0xffff);
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_80,
             (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&param_1->ResolvedDynamicObjectReferences);
  local_c0 = 0;
  stack0xffffffffffffff18 = local_80._16_16_;
  auStack_f0._0_8_ = local_80._8_8_;
  local_d8 = local_60;
  pTStack_d0 = pTStack_58;
  uVar11 = local_80._24_8_ >> 0x20;
  uVar13 = local_80._28_4_;
  local_c8 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&param_1->ResolvedDynamicObjectReferences;
  if ((int)uVar13 < *(int *)(local_80._16_8_ + 0x18)) {
    do {
      puVar5 = local_b0.Storage;
      bVar15 = bVar6;
      if (((local_res18.Value ^
           *(ulonglong *)(*(longlong *)local_80._0_8_ + 8 + (longlong)(int)uVar11 * 0x18)) &
          0x3fffffffffffff) == 0) {
        bVar15 = true;
        uVar1 = *(uint *)(*(longlong *)local_80._0_8_ + (longlong)(int)uVar13 * 0x18);
        local_res20[0] = uVar1;
        if (uVar1 == 0xffffffff) {
          bVar16 = 1;
        }
        else {
          bVar14 = 1;
          if ((local_b0.BitCount <= uVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          puVar5[uVar1 >> 5] = puVar5[uVar1 >> 5] | 1 << (uVar1 & 0x1f);
        }
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_d0,uVar13);
        local_c0 = CONCAT11(local_c0._1_1_,1);
        if (bUseOptObjectRefTracking != false) {
          FReplicatedObjectInfo::RemoveResolvedDynamicHandleCount
                    (param_1,(FNetRefHandle)local_res18._s_0);
        }
        TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
        ::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
                  ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                    *)&param_1->UnresolvedObjectReferences,local_res20,
                   (FNetRefHandle *)&local_res18._s_0);
        if (bUseOptObjectRefTracking != false) {
          local_res10[0] = 0;
          psVar9 = TMapBase<UE::Net::FNetRefHandle,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>_>
                   ::FindOrAddImpl<UE::Net::FNetRefHandle_const_&,short>
                             ((TMapBase<UE::Net::FNetRefHandle,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>_>
                               *)&param_1->UnresolvedHandleCount,
                              (int)((local_res18.Value & 0x3fffffffffffff) >> 0x20) * 0x17 +
                              (int)(local_res18.Value & 0x3fffffffffffff),
                              (FNetRefHandle *)&local_res18._s_0,local_res10);
          *psVar9 = *psVar9 + 1;
        }
        if (5 < (byte)LogIris._0_1_) {
          uVar13 = param_1->InternalIndex;
          this_00 = this->NetRefHandleManager;
          pFVar2 = (this_00->AssignedInternalIndices).Storage.AllocatorInstance.Data;
          if (((this_00->AssignedInternalIndices).BitCount <= uVar13) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if (((*(uint *)(pFVar2 + (ulonglong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("AssignedInternalIndices.GetBit(InternalIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                 ,0x245,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar10 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_00,uVar13);
          local_b8._s_0 = *(FNetRefHandle_u_0_s_0 *)&(pFVar10->RefHandle).field0_0x0;
          FNetRefHandle::ToString((FNetRefHandle *)&local_b8._s_0,&local_90);
          FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_a0);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
      }
      uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
      uVar11 = (ulonglong)uStack_dc;
      uVar13 = uStack_dc;
      bVar6 = bVar15;
    } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
    if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
      uVar13 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar8 = 1;
      }
      else {
        uVar11 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_c8->HashSize < iVar8)) || (iVar8 < local_c8->HashSize)) {
        local_c8->HashSize = iVar8;
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::Rehash(local_c8);
      }
    }
  }
  uVar13 = ((uint)bVar16 << 0x11 ^ (param_1->field7_0x15c).Value) & 0x20000 ^
           (param_1->field7_0x15c).Value;
  (param_1->field7_0x15c).Value = ((uint)bVar14 << 0x10 ^ uVar13) & 0x10000 ^ uVar13;
  return bVar15;
}

// PrintObjectInfo @ 1442cfec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FString * __thiscall
UE::Net::Private::FReplicationReader::PrintObjectInfo
          (FReplicationReader *this,FString *__return_storage_ptr__,uint param_1,
          FNetRefHandle param_2)

{
  longlong lVar1;
  FNetRefHandle *pFVar2;
  FNetRefHandle_u_0 *pFVar3;
  int iVar4;
  longlong lVar5;
  FNetRefHandle_u_0 FVar6;
  FScriptContainerElement *pFVar7;
  FNetRefHandle_u_0 FVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  FReplicatedObjectData *pFVar12;
  FNetRefHandle FVar13;
  void *pvVar14;
  FNetRefHandle_u_0 *pFVar15;
  FString *pFVar16;
  undefined1 *puVar17;
  ulong64 uVar18;
  FNetRefHandle *this_00;
  ulonglong uVar19;
  int iVar20;
  uint *puVar21;
  undefined1 auStack_4b8 [32];
  undefined1 local_498 [8];
  FNetRefHandle_u_0 local_490;
  FString *local_488;
  FString local_480;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_488 = __return_storage_ptr__;
  if (*(int *)&(this->ReplicatedObjects).field_0x8 != *(int *)&(this->ReplicatedObjects).field_0x34)
  {
    puVar17 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ReplicatedObjects).field_0x38;
    }
    uVar9 = *(uint *)(puVar17 +
                     (ulonglong)(*(int *)&(this->ReplicatedObjects).field_0x48 - 1U & param_1) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x178 + *(longlong *)&this->ReplicatedObjects);
        if (*puVar11 == param_1) {
          puVar21 = puVar11 + 2;
          if (puVar11 == (uint *)0x0) {
            puVar21 = (uint *)0x0;
          }
          if (puVar21 != (uint *)0x0) {
            local_468.Base = local_448;
            local_468.bIsDynamic = false;
            local_468.bIsExternal = false;
            local_468.CurPos = local_448;
            local_468.End = (wchar_t *)local_48;
            pFVar12 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                                (this->NetRefHandleManager,param_1);
            uVar9 = pFVar12->SubObjectRootIndex;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L"Status info: 0x%llx (%s)");
            if (uVar9 != 0) {
              FVar13 = FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                                 (this->NetRefHandleManager,(uint)&local_490);
              param_2.field0_0x0 = *(FNetRefHandle_u_0 *)FVar13.field0_0x0;
            }
            uVar19 = (ulonglong)param_2.field0_0x0 & 0x3fffffffffffff;
            if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 ==
                *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) goto LAB_1442d00b0;
            puVar17 = *(undefined1 **)&(this->PendingBatchHolder).PendingBatches.field_0x40;
            if (puVar17 == (undefined1 *)0x0) {
              puVar17 = &(this->PendingBatchHolder).PendingBatches.field_0x38;
            }
            iVar10 = *(int *)(puVar17 +
                             ((ulonglong)
                              (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x48 - 1) &
                             (uVar19 >> 0x20) * 0x17 + uVar19) * 4);
            if (iVar10 == -1) goto LAB_1442d00b0;
            lVar5 = *(longlong *)&(this->PendingBatchHolder).PendingBatches;
            goto LAB_1442d0090;
          }
          break;
        }
        uVar9 = puVar11[0x5c];
      } while (uVar9 != 0xffffffff);
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"No object info for (InternalIndex: %u)");
  return __return_storage_ptr__;
  while (iVar10 = *(int *)(lVar1 + 0x10), iVar10 != -1) {
LAB_1442d0090:
    lVar1 = lVar5 + (longlong)iVar10 * 0x18;
    if ((*(ulonglong *)(lVar5 + (longlong)iVar10 * 0x18) & 0x3fffffffffffff) == uVar19) {
      pFVar15 = (FNetRefHandle_u_0 *)(lVar1 + 8);
      if (lVar1 == 0) {
        pFVar15 = (FNetRefHandle_u_0 *)0x0;
      }
      if ((pFVar15 != (FNetRefHandle_u_0 *)0x0) &&
         (FVar6 = (FNetRefHandle_u_0)pFVar15->Value, local_490 = FVar6, FVar6.Value != 0)) {
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_468,L"| PendingBatches: QueuedChunks: %d | PendingReferences(%d): ");
        iVar10 = *(int *)(FVar6.Value + 0xf8);
        this_00 = *(FNetRefHandle **)(FVar6.Value + 0xf0);
        if (*(FNetRefHandle **)(FVar6.Value + 0xf0) == (FNetRefHandle *)0x0) {
          this_00 = (FNetRefHandle *)(FVar6.Value + 0xd0);
        }
        pFVar2 = this_00 + iVar10;
        while( true ) {
          if (*(int *)(FVar6.Value + 0xf8) != iVar10) {
            `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_498);
          }
          FVar8 = local_490;
          if (this_00 == pFVar2) break;
          pFVar16 = FNetRefHandle::ToString(this_00,&local_480);
          iVar4 = (pFVar16->Data).ArrayNum;
          pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
          iVar20 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar20 = 0;
          }
          uVar18 = (ulong64)iVar20;
          if (local_468.End < local_468.CurPos + uVar18) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,uVar18);
          }
          if (iVar20 != 0) {
            pvVar14 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar7,uVar18 * 2);
            local_468.CurPos = (wchar_t *)((longlong)pvVar14 + uVar18 * 2);
          }
          if (local_468.End < local_468.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,2);
          }
          local_468.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_468.CurPos,2,", ",2);
          if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_480.Data.AllocatorInstance.Data);
          }
          this_00 = this_00 + 1;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L" | CreationDependentParents(%d): ");
        iVar10 = *(int *)(FVar8.Value + 0x160);
        pFVar15 = *(FNetRefHandle_u_0 **)(FVar8.Value + 0x158);
        if (*(FNetRefHandle_u_0 **)(FVar8.Value + 0x158) == (FNetRefHandle_u_0 *)0x0) {
          pFVar15 = (FNetRefHandle_u_0 *)(FVar8.Value + 0x138);
        }
        pFVar3 = pFVar15 + iVar10;
        while( true ) {
          if (*(int *)(FVar8.Value + 0x160) != iVar10) {
            `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_498);
          }
          __return_storage_ptr__ = local_488;
          if (pFVar15 == pFVar3) break;
          local_490 = *pFVar15;
          pFVar16 = FNetRefHandle::ToString((FNetRefHandle *)&local_490._s_0,&local_480);
          iVar4 = (pFVar16->Data).ArrayNum;
          pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
          iVar20 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar20 = 0;
          }
          uVar18 = (ulong64)iVar20;
          if (local_468.End < local_468.CurPos + uVar18) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,uVar18);
          }
          if (iVar20 != 0) {
            pvVar14 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar7,uVar18 * 2);
            local_468.CurPos = (wchar_t *)((longlong)pvVar14 + uVar18 * 2);
          }
          if (local_468.End < local_468.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,2);
          }
          local_468.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_468.CurPos,2,", ",2);
          if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_480.Data.AllocatorInstance.Data);
          }
          pFVar15 = pFVar15 + 1;
        }
        goto LAB_1442d0329;
      }
      break;
    }
  }
LAB_1442d00b0:
  if (local_468.End < local_468.CurPos + 0x12) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,0x12);
  }
  pvVar14 = FGenericPlatformString::Memcpy(local_468.CurPos,L"| NoPendingBatches",0x24);
  local_468.CurPos = (wchar_t *)((longlong)pvVar14 + 0x24);
LAB_1442d0329:
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_468.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return __return_storage_ptr__;
}

// ProcessHugeObject @ 1442d4de0

void __thiscall
UE::Net::Private::FReplicationReader::ProcessHugeObject
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  bool bVar1;
  FNetObjectAttachmentReceiveQueue *this_00;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar2;
  
  bVar1 = FNetObjectAttachmentsReader::HasUnprocessedAttachments(&this->Attachments,HugeObject,0);
  if (bVar1) {
    this_00 = FNetObjectAttachmentsReader::GetQueue(&this->Attachments,HugeObject,0);
    pTVar2 = FNetObjectAttachmentReceiveQueue::PeekReliable(this_00);
    while (pTVar2 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
      ProcessHugeObjectAttachment(this,param_1,pTVar2);
      FNetObjectAttachmentReceiveQueue::PopReliable(this_00);
      if ((param_1->ErrorContext).Error != (FName)0x0) {
        return;
      }
      pTVar2 = FNetObjectAttachmentReceiveQueue::PeekReliable(this_00);
    }
    pTVar2 = FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_00);
    while (pTVar2 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
      ProcessHugeObjectAttachment(this,param_1,pTVar2);
      FNetObjectAttachmentReceiveQueue::PopUnreliable(this_00);
      if ((param_1->ErrorContext).Error != (FName)0x0) {
        return;
      }
      pTVar2 = FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_00);
    }
  }
  return;
}

// ProcessHugeObjectAttachment @ 1442d4ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Net::Private::FReplicationReader::ProcessHugeObjectAttachment
          (FReplicationReader *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2)

{
  FNetBlob *pFVar1;
  void *pvVar2;
  code *pcVar3;
  FName FVar4;
  wchar_t *pwVar5;
  FNetRefHandle_u_0 FVar6;
  wchar_t *pwVar7;
  FNetRefHandle_u_0 FVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FNetSerializationContext *pFVar11;
  FNetSerializationContext *pFVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  EReplicationDataStreamDebugFeatures EVar16;
  FNetSerializationContext *pFVar17;
  FNetSerializationContext *pFVar18;
  longlong lVar19;
  ForElementType<FNetTracePacketContentEvent> FVar20;
  FNetTraceCollector *pFVar21;
  bool bVar22;
  undefined1 auStack_1938 [32];
  FHeader local_1918 [2];
  FNetBitStreamReader local_1910;
  FNetSerializationContext local_18e8;
  FNetTraceCollector local_1578;
  ulonglong local_40;
  
  FVar4 = GNetError_UnsupportedNetBlob;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1938;
  if ((param_2->Reference->CreationInfo).Type != this->NetObjectBlobType) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
    return;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2652,"FReplicationReader_ProcessHugeObjectAttachment",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0xa5c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2652);
  }
  FNetTraceCollector::FNetTraceCollector(&local_1578,0x100);
  pFVar1 = param_2->Reference;
  FNetBitStreamReader::FNetBitStreamReader(&local_1910);
  uVar14 = *(uint *)&pFVar1[1].BlobDescriptor.Reference;
  pvVar2 = (void *)pFVar1[1]._padding_;
  if (((int)pFVar1[1].CreationInfo.Type < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNetBitStreamReader::InitBits(&local_1910,pvVar2,uVar14);
  lVar19 = 6;
  pFVar11 = param_1;
  pFVar12 = &local_18e8;
  do {
    pFVar18 = pFVar12;
    pFVar17 = pFVar11;
    FVar4 = (pFVar17->ErrorContext).Error;
    pwVar5 = (pFVar17->ReadJournal).Entries[0].Name;
    FVar6 = (pFVar17->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
    (pFVar18->ErrorContext).ObjectHandle.field0_0x0 =
         (pFVar17->ErrorContext).ObjectHandle.field0_0x0;
    (pFVar18->ErrorContext).Error = FVar4;
    uVar14 = (pFVar17->ReadJournal).Entries[0].BitOffset;
    uVar9 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[0].field_0x14;
    pwVar7 = (pFVar17->ReadJournal).Entries[1].Name;
    (pFVar18->ReadJournal).Entries[0].Name = pwVar5;
    (pFVar18->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar6;
    FVar6 = (pFVar17->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
    uVar15 = (pFVar17->ReadJournal).Entries[1].BitOffset;
    uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[1].field_0x14;
    (pFVar18->ReadJournal).Entries[0].BitOffset = uVar14;
    *(undefined4 *)&(pFVar18->ReadJournal).Entries[0].field_0x14 = uVar9;
    (pFVar18->ReadJournal).Entries[1].Name = pwVar7;
    pwVar5 = (pFVar17->ReadJournal).Entries[2].Name;
    FVar8 = (pFVar17->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
    (pFVar18->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar6;
    (pFVar18->ReadJournal).Entries[1].BitOffset = uVar15;
    *(undefined4 *)&(pFVar18->ReadJournal).Entries[1].field_0x14 = uVar10;
    uVar14 = (pFVar17->ReadJournal).Entries[2].BitOffset;
    uVar9 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[2].field_0x14;
    pwVar7 = (pFVar17->ReadJournal).Entries[3].Name;
    (pFVar18->ReadJournal).Entries[2].Name = pwVar5;
    (pFVar18->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar8;
    FVar6 = (pFVar17->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
    uVar15 = (pFVar17->ReadJournal).Entries[3].BitOffset;
    uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[3].field_0x14;
    (pFVar18->ReadJournal).Entries[2].BitOffset = uVar14;
    *(undefined4 *)&(pFVar18->ReadJournal).Entries[2].field_0x14 = uVar9;
    (pFVar18->ReadJournal).Entries[3].Name = pwVar7;
    pwVar5 = (pFVar17->ReadJournal).Entries[4].Name;
    FVar8 = (pFVar17->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
    (pFVar18->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar6;
    (pFVar18->ReadJournal).Entries[3].BitOffset = uVar15;
    *(undefined4 *)&(pFVar18->ReadJournal).Entries[3].field_0x14 = uVar10;
    (pFVar18->ReadJournal).Entries[4].Name = pwVar5;
    (pFVar18->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar8;
    lVar19 = lVar19 + -1;
    pFVar11 = (FNetSerializationContext *)&(pFVar17->ReadJournal).Entries[4].BitOffset;
    pFVar12 = (FNetSerializationContext *)&(pFVar18->ReadJournal).Entries[4].BitOffset;
  } while (lVar19 != 0);
  uVar9 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[4].field_0x14;
  pwVar5 = (pFVar17->ReadJournal).Entries[5].Name;
  FVar6 = (pFVar17->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
  uVar14 = (pFVar17->ReadJournal).Entries[5].BitOffset;
  uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[5].field_0x14;
  (pFVar18->ReadJournal).Entries[4].BitOffset = (pFVar17->ReadJournal).Entries[4].BitOffset;
  *(undefined4 *)&(pFVar18->ReadJournal).Entries[4].field_0x14 = uVar9;
  (pFVar18->ReadJournal).Entries[5].Name = pwVar5;
  pwVar5 = (pFVar17->ReadJournal).Entries[6].Name;
  FVar8 = (pFVar17->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
  (pFVar18->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar6;
  (pFVar18->ReadJournal).Entries[5].BitOffset = uVar14;
  *(undefined4 *)&(pFVar18->ReadJournal).Entries[5].field_0x14 = uVar10;
  uVar14 = (pFVar17->ReadJournal).Entries[6].BitOffset;
  uVar9 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[6].field_0x14;
  pwVar7 = (pFVar17->ReadJournal).Entries[7].Name;
  (pFVar18->ReadJournal).Entries[6].Name = pwVar5;
  (pFVar18->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar8;
  FVar6 = (pFVar17->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
  uVar15 = (pFVar17->ReadJournal).Entries[7].BitOffset;
  uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[7].field_0x14;
  (pFVar18->ReadJournal).Entries[6].BitOffset = uVar14;
  *(undefined4 *)&(pFVar18->ReadJournal).Entries[6].field_0x14 = uVar9;
  (pFVar18->ReadJournal).Entries[7].Name = pwVar7;
  pwVar5 = (pFVar17->ReadJournal).Entries[8].Name;
  FVar8 = (pFVar17->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
  uVar14 = (pFVar17->ReadJournal).Entries[8].BitOffset;
  uVar9 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[8].field_0x14;
  (pFVar18->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar6;
  (pFVar18->ReadJournal).Entries[7].BitOffset = uVar15;
  *(undefined4 *)&(pFVar18->ReadJournal).Entries[7].field_0x14 = uVar10;
  (pFVar18->ReadJournal).Entries[8].Name = pwVar5;
  (pFVar18->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar8;
  (pFVar18->ReadJournal).Entries[8].BitOffset = uVar14;
  *(undefined4 *)&(pFVar18->ReadJournal).Entries[8].field_0x14 = uVar9;
  local_18e8.BitStreamReader = &local_1910;
  local_18e8.BitStreamWriter = (FNetBitStreamWriter *)0x0;
  local_18e8.ReadJournal.NumEntries = 0;
  local_18e8.TraceCollector = &local_1578;
  FNetSerializationContext::AddReadJournalEntry(&local_18e8,L"HugeObject");
  uVar14 = 0xffffffff;
  pFVar21 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar21 = &local_1578;
  }
  if (pFVar21 != (FNetTraceCollector *)0x0) {
    uVar14 = FNetTrace::BeginPacketContentEvent(pFVar21,NameId,local_1910.BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Name = CreatePersistentNetDebugName(L"HugeObjectState",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar15 = FNetTrace::TraceName(::Name);
    FVar20 = (pFVar21->Events).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar21->Events;
    }
    *(uint *)((longlong)FVar20 + (ulonglong)uVar14 * 0x10) = uVar15;
  }
  local_1918[0].ObjectCount = 0;
  FNetObjectBlob::DeserializeHeader(&local_18e8,local_1918);
  EVar16 = FNetBitStreamReader::ReadBits(local_18e8.BitStreamReader,2);
  this->StreamDebugFeatures = EVar16;
  if ((((local_18e8.ErrorContext.Error == (FName)0x0) &&
       (bVar13 = FNetSerializationContext::IsBitStreamOverflown(&local_18e8), !bVar13)) &&
      (local_1918[0].ObjectCount != 0)) || ((param_1->ErrorContext).Error != (FName)0x0)) {
    FObjectsToDispatchArray::Grow
              (this->ObjectsToDispatchArray,local_1918[0].ObjectCount + 0x20,
               &this->TempLinearAllocator);
    ReadObjects(this,&local_18e8,local_1918[0].ObjectCount,1);
    if ((local_18e8.ErrorContext.Error == (FName)0x0) &&
       (bVar13 = FNetSerializationContext::IsBitStreamOverflown(&local_18e8), !bVar13))
    goto LAB_1442d51f7;
  }
  FVar4 = GNetError_BitStreamError;
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
LAB_1442d51f7:
  if (uVar14 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar21,uVar14,local_1910.BufferBitPosition);
    uVar14 = 0xffffffff;
  }
  if (param_1->TraceCollector != (FNetTraceCollector *)0x0) {
    FNetTrace::FoldTraceCollector
              (param_1->TraceCollector,&local_1578,param_1->BitStreamReader->BufferBitPosition,0);
  }
  if (uVar14 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar21,uVar14,local_1910.BufferBitPosition);
  }
  FNetBitStreamReader::~FNetBitStreamReader(&local_1910);
  if (local_1578.ReferencedObjectIds.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_1578.ReferencedObjectIds.AllocatorInstance.SecondaryData);
  }
  if (local_1578.Events.AllocatorInstance.SecondaryData !=
      (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FMemory::Free((void *)local_1578.Events.AllocatorInstance.SecondaryData);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessQueuedBatches @ 1442d5330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Net::Private::FReplicationReader::ProcessQueuedBatches(FReplicationReader *this)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  UObjectReplicationBridge *pUVar4;
  FNetRefHandle_u_0 FVar5;
  FNetRefHandle_u_0_s_0 FVar6;
  FNetRefHandle FVar7;
  undefined1 *puVar8;
  code *pcVar9;
  double dVar10;
  FNetRefHandle_u_0_s_0 FVar11;
  double dVar12;
  FReplicationReader *pFVar13;
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FNetRefHandle_u_0 *pFVar20;
  FNetRefHandle_u_0 *pFVar21;
  FNetRefHandle_u_0 FVar22;
  double *pdVar23;
  FString *pFVar24;
  undefined8 *puVar25;
  ForElementType<FSetElementId> FVar26;
  ulonglong *puVar27;
  wchar_t *pwVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  FNetRefHandle_u_0 *pFVar31;
  int iVar32;
  ForElementType<UE::Net::FNetRefHandle> FVar33;
  ForElementType<UE::Net::FNetRefHandle> FVar34;
  int *piVar35;
  TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
  *this_00;
  FPendingBatchData *pFVar36;
  FNetRefHandle_u_0 FVar37;
  undefined1 auStackY_6e8 [32];
  undefined1 local_694;
  undefined1 local_693;
  undefined1 local_692;
  undefined1 local_691;
  undefined1 local_690;
  undefined1 local_68f [7];
  FNetRefHandle_u_0 local_688;
  FReplicationReader *local_680;
  FNetRefHandle_u_0 local_678;
  FPendingBatchData *local_670;
  int *local_668;
  ForAnyElementType local_660;
  undefined8 local_658;
  ForAnyElementType local_650;
  int local_648;
  int local_644;
  FNetRefHandle_u_0 local_640;
  FNetRefHandle_u_0 local_638;
  FNetRefHandle_u_0 local_630;
  int local_628;
  int local_624;
  FNetRefHandle_u_0 local_620;
  LARGE_INTEGER local_618;
  FNetRefHandle_u_0 *local_610;
  ForElementType<UE::Net::FNetRefHandle> local_608;
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *local_600;
  int *local_5f8;
  TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
  *local_5f0;
  FNetRefHandle_u_0 local_5e8;
  FNetRefHandle_u_0 *local_5e0;
  LARGE_INTEGER local_5d8 [2];
  FNetRefHandle_u_0 local_5c8;
  undefined8 local_5c0;
  FString local_5b8;
  longlong *local_5a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5a0;
  FReplicationReader *local_580;
  FNetBitStreamReader *local_578;
  undefined8 *local_570;
  ForElementType<UE::Net::FNetRefHandle> local_568;
  ForElementType<UE::Net::FNetRefHandle> *local_560;
  undefined8 local_558;
  int iStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  int iStack_540;
  undefined4 uStack_53c;
  FInternalNetSerializationContext local_538;
  FString local_500;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  int iStack_4e0;
  undefined4 uStack_4dc;
  FString local_4d8;
  FString local_4c8;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  int iStack_4b0;
  undefined4 uStack_4ac;
  FString local_4a8;
  FString local_498;
  FNetBitStreamReader local_488;
  FInitParameters local_468;
  TSet<TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  local_438;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d0 [95];
  undefined4 local_d8;
  FNetBitStreamReader *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FInternalNetSerializationContext *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FNetBlobManager *local_98;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_680 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NetTraceNameId_2766 =
         CreatePersistentNetDebugName(L"ReplicationReader.PendingQueuedBatches",0x26);
    _Init_thread_footer(&::_TSS0);
  }
  iVar3 = *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8;
  iVar18 = *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34;
  uVar16 = FNetTrace::TraceName(NetTraceNameId_2766);
  FNetTrace::TraceFrameStatsCounter
            (((this->Parameters).ReplicationSystem)->Id,uVar16,iVar3 - iVar18);
  this_00 = (TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
             *)&this->PendingBatchHolder;
  if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 ==
      *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
    return;
  }
  local_468.ReplicationSystem = (this->Parameters).ReplicationSystem;
  local_468.ObjectResolveContext.bForceSyncLoad = (this->ResolveContext).bForceSyncLoad;
  local_468.ObjectResolveContext._17_7_ = *(undefined7 *)&(this->ResolveContext).field_0x11;
  local_538.bSerializeObjectReferencesAsRemoteIds = 0;
  local_538.bInlineObjectReferenceExports = 0;
  local_538.bDowngradeAutonomousProxyRole = 0;
  local_538.ReplicationSystem = (UReplicationSystem *)0x0;
  local_538.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  local_468.ObjectResolveContext.RemoteNetTokenStoreState =
       (this->ResolveContext).RemoteNetTokenStoreState;
  local_468.ObjectResolveContext.ConnectionId = (this->ResolveContext).ConnectionId;
  local_468.ObjectResolveContext.AsyncLoadingPriority = (this->ResolveContext).AsyncLoadingPriority;
  local_538.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_538.ResolveContext.ConnectionId = 0;
  local_538.ResolveContext.AsyncLoadingPriority = -1;
  local_538.ResolveContext.bForceSyncLoad = false;
  local_538.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_468.PackageMap = this->ReplicationSystemInternal->IrisObjectReferencePackageMap;
  local_5f0 = this_00;
  FInternalNetSerializationContext::Init(&local_538,&local_468);
  FNetBitStreamReader::FNetBitStreamReader(&local_488);
  lVar19 = 0x20;
  local_3e8 = 0;
  puVar25 = local_3d0;
  local_3e0 = 0;
  do {
    *puVar25 = 0;
    puVar25 = puVar25 + 3;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  local_88 = local_88 & 0xfffffffc;
  local_d0 = &local_488;
  local_90 = (this->ResolveContext).ConnectionId;
  local_b8 = &local_538;
  local_d8 = 0;
  local_98 = &this->ReplicationSystemInternal->NetBlobManager;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_8c = 0xffffffff;
  local_630 = (FNetRefHandle_u_0)::operator_new(0x10);
  if ((int *)local_630.Value == (int *)0x0) {
    local_630.Value = 0;
  }
  else {
    *(undefined8 *)local_630 = 0;
    ((int *)(local_630.Value + 8))[0] = 0;
    ((int *)(local_630.Value + 8))[1] = 0;
  }
  FVar37 = local_630;
  local_578 = &local_488;
  local_570 = &local_3e8;
  local_438.Elements._0_8_ = 0;
  local_438.Elements._8_8_ = 0;
  local_438.Elements._32_8_ = 0;
  local_438.Elements._40_4_ = 0;
  local_438.Elements._44_4_ = 0x80;
  local_438.Elements._48_4_ = 0xffffffff;
  local_438.Elements._52_4_ = 0;
  local_438.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_438.HashSize = 0;
  local_678 = local_630;
  local_580 = this;
  FPendingBatchHolder::CreateConstIterator
            ((FPendingBatchHolder *)this_00,(TConstIterator *)&local_5a8);
  dVar12 = __real_4170000000000000;
  FVar22 = FVar37;
  if (local_5a0.CurrentBitIndex < (local_5a0.Array)->NumBits) {
    local_600 = &this->TempMustBeMappedReferences;
    local_5f8 = &(this->TempMustBeMappedReferences).ArrayMax;
    do {
      piVar35 = local_5f8;
      pTVar14 = local_600;
      pFVar36 = *(FPendingBatchData **)(*local_5a8 + 8 + (longlong)local_5a0.CurrentBitIndex * 0x18)
      ;
      local_670 = pFVar36;
      local_638 = FVar37;
      if ((pFVar36 == (FPendingBatchData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("PendingBatchData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                              ,0xb5f,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_688 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)&(pFVar36->Owner).field0_0x0._s_0;
      iVar3 = *piVar35;
      pTVar14->ArrayNum = 0;
      if (iVar3 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar14->AllocatorInstance,0,piVar35);
      }
      UpdateUnresolvedMustBeMappedReferences
                (this,(FNetRefHandle)local_688._s_0,pTVar14,pFVar36->IrisAsyncLoadingPriority);
      pFVar13 = local_680;
      iVar3 = (pFVar36->PendingMustBeMappedReferences).ArrayNum;
      local_610 = (FNetRefHandle_u_0 *)&pFVar36->CreationDependentParents;
      FVar34 = (pFVar36->CreationDependentParents).AllocatorInstance.SecondaryData;
      piVar35 = &(pFVar36->CreationDependentParents).ArrayNum;
      iVar18 = *piVar35;
      iVar32 = 0;
      FVar33 = (ForElementType<UE::Net::FNetRefHandle>)local_610;
      if (FVar34 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar33 = FVar34;
      }
      FVar34 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar33 + (longlong)iVar18 * 8);
      local_668 = piVar35;
      while( true ) {
        if (*piVar35 != iVar18) {
          local_68f[0] = 0;
          `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_68f);
        }
        FVar37 = local_638;
        pFVar36 = local_670;
        if (FVar33 == FVar34) break;
        FVar37 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)FVar33;
        local_5e8 = FVar37;
        if (((FVar37 != 0) &&
            (bVar15 = FNetRefHandleManager::IsNetRefHandleAssigned
                                (pFVar13->NetRefHandleManager,(FNetRefHandle)FVar37), !bVar15)) &&
           (iVar32 = iVar32 + 1, iVar3 == 0)) {
          uVar30 = (ulonglong)FVar37 & 0x3fffffffffffff;
          uVar16 = (int)(uVar30 >> 0x20) * 0x17 + (int)uVar30;
          if (local_438.Elements._8_4_ != local_438.Elements._52_4_) {
            FVar26 = (ForElementType<FSetElementId>)&local_438.Hash;
            if (local_438.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_438.Hash.SecondaryData;
            }
            iVar17 = *(int *)((longlong)FVar26 + (ulonglong)(local_438.HashSize - 1U & uVar16) * 4);
            while (iVar17 != -1) {
              puVar27 = (ulonglong *)((longlong)iVar17 * 0xa0 + local_438.Elements._0_8_);
              if ((*puVar27 & 0x3fffffffffffff) == uVar30) {
                if (puVar27 != (ulonglong *)0x0) goto LAB_1442d5803;
                break;
              }
              iVar17 = (int)puVar27[0x13];
            }
          }
          local_5e0 = &local_5e8;
          TSet<TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<UE::Net::FNetRefHandle_const_&>_>
                    (&local_438,(uint)&local_628,
                     (TKeyInitializer<UE::Net::FNetRefHandle_const_&> *)(ulonglong)uVar16,
                     (bool *)&local_5e0);
          puVar27 = (ulonglong *)((longlong)local_628 * 0xa0 + local_438.Elements._0_8_);
LAB_1442d5803:
          pFVar21 = (FNetRefHandle_u_0 *)puVar27[0x11];
          pFVar31 = (FNetRefHandle_u_0 *)(puVar27 + 1);
          pFVar20 = pFVar21;
          if (pFVar21 == (FNetRefHandle_u_0 *)0x0) {
            pFVar20 = pFVar31;
          }
          if (pFVar20 <= &local_688) {
            if (pFVar21 == (FNetRefHandle_u_0 *)0x0) {
              pFVar21 = pFVar31;
            }
            if ((&local_688 < pFVar21 + *(int *)((longlong)puVar27 + 0x94)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          iVar17 = (int)puVar27[0x12];
          if (iVar17 == *(int *)((longlong)puVar27 + 0x94)) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                               (0x808,(ForElementType<UE::Net::FNetRefHandle> *)&pFVar31->_s_0,
                                (int *)((longlong)puVar27 + 0x94));
          }
          *(int *)(puVar27 + 0x12) = iVar17 + 1;
          if ((FNetRefHandle_u_0 *)puVar27[0x11] != (FNetRefHandle_u_0 *)0x0) {
            pFVar31 = (FNetRefHandle_u_0 *)puVar27[0x11];
          }
          pFVar31[iVar17]._s_0 = (FNetRefHandle_u_0_s_0)local_688;
        }
        FVar33 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar33 + 8);
      }
      if ((iVar32 == 0) && (iVar3 == 0)) {
        `UE::Net::Private::FReplicationReader::ProcessQueuedBatches'::__l2::<lambda_1>::operator()
                  (&local_580,local_670,(FNetRefHandle)local_688._s_0);
        FVar22 = (FNetRefHandle_u_0)::operator_new(0x10);
        if ((int *)FVar22.Value != (int *)0x0) {
          *(undefined8 *)FVar22 = 0;
          ((FNetRefHandle_u_0 *)(FVar22.Value + 8))->_s_0 = (FNetRefHandle_u_0_s_0)local_688;
          *(FNetRefHandle_u_0 *)FVar37 = FVar22;
          local_678 = FVar22;
        }
      }
      else {
        iVar18 = local_670->PendingBatchTryProcessCount + 1;
        local_670->PendingBatchTryProcessCount = iVar18;
        if ((0 < QueuedBatchTimeoutWarningInterval) &&
           ((QueuedBatchTimeoutWarningInterval < iVar18 &&
            (bVar15 = FWindowsPlatformMisc::IsDebuggerPresent(), !bVar15)))) {
          QueryPerformanceCounter(local_5d8);
          dVar10 = (double)local_5d8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
          if (pFVar36->NextWarningTimeout <= dVar10) {
            QueryPerformanceCounter(&local_618);
            pFVar13 = local_680;
            if (iVar32 != 0) {
              if (2 < (byte)LogIris._0_1_) {
                FNetRefHandleManager::PrintObjectFromNetRefHandle
                          (local_680->NetRefHandleManager,&local_500,(FNetRefHandle)local_688._s_0);
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_500.Data.AllocatorInstance.Data);
                }
              }
              local_660.Data = (FScriptContainerElement *)0x0;
              local_658 = 0;
              iVar18 = *local_668;
              pFVar31 = local_610;
              if ((FNetRefHandle_u_0 *)local_610[4].Value != (FNetRefHandle_u_0 *)0x0) {
                pFVar31 = (FNetRefHandle_u_0 *)local_610[4].Value;
              }
              pFVar21 = pFVar31 + iVar18;
              while( true ) {
                if (*local_668 != iVar18) {
                  local_694 = 0;
                  `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_694);
                }
                if (pFVar31 == pFVar21) break;
                local_640 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)&pFVar31->_s_0;
                if (ZPULL(local_640,0,0x36) == 0 && pFVar31->ReplicationSystemId == 0) {
                  bVar15 = true;
                }
                else {
                  bVar15 = FNetRefHandleManager::IsNetRefHandleAssigned
                                     (pFVar13->NetRefHandleManager,(FNetRefHandle)local_640._s_0);
                }
                if (2 < (byte)LogIris._0_1_) {
                  FNetRefHandleManager::PrintObjectFromNetRefHandle
                            (pFVar13->NetRefHandleManager,&local_498,(FNetRefHandle)local_640._s_0);
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_498.Data.AllocatorInstance.Data);
                  }
                }
                if (bVar15 == false) {
                  if (((local_660.Data <= &local_640) &&
                      (&local_640 <
                       (FNetRefHandle_u_0 *)(local_660.Data + (longlong)local_658._4_4_ * 8))) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((int)local_658 == local_658._4_4_) {
                    iVar32 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_660,(int *)((longlong)&local_658 + 4));
                    local_658 = CONCAT44(local_658._4_4_,iVar32);
                  }
                  lVar19 = (longlong)(int)local_658;
                  local_658 = CONCAT44(local_658._4_4_,(int)local_658 + 1);
                  ((FNetRefHandle_u_0 *)(local_660.Data + lVar19 * 8))->_s_0 =
                       (FNetRefHandle_u_0_s_0)local_640;
                }
                pFVar31 = pFVar31 + 1;
              }
              pUVar4 = pFVar13->ReplicationBridge;
              iVar18 = (int)local_658;
              pcVar9 = *(code **)(pUVar4->_padding_ + 0x358);
              local_548 = (FNetRefHandle_u_0 *)local_660.Data;
              if (((int)local_658 < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iStack_540 = iVar18;
              local_4e8 = (undefined4)local_548;
              uStack_4e4 = local_548._4_4_;
              iStack_4e0 = iVar18;
              uStack_4dc = uStack_53c;
              (*pcVar9)(pUVar4,4,local_688.Value,(pFVar13->Parameters).ConnectionId);
              pFVar36 = local_670;
              if ((FNetRefHandle_u_0 *)local_660.Data != (FNetRefHandle_u_0 *)0x0) {
                FMemory::Free(local_660.Data);
                pFVar36 = local_670;
              }
            }
            if (iVar3 != 0) {
              local_648 = 0;
              local_650.Data = (FScriptContainerElement *)0x0;
              local_644 = 0;
              if (MaxMustBeMappedHandleArray < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum((ulonglong)(uint)MaxMustBeMappedHandleArray);
              }
              if (0 < MaxMustBeMappedHandleArray) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,MaxMustBeMappedHandleArray,&local_650,0,&local_644);
              }
              iVar3 = (pFVar36->PendingMustBeMappedReferences).ArrayNum;
              FVar34 = (ForElementType<UE::Net::FNetRefHandle>)
                       &pFVar36->PendingMustBeMappedReferences;
              FVar33 = (pFVar36->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
              if (FVar33 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
                FVar34 = FVar33;
              }
              FVar33 = (ForElementType<UE::Net::FNetRefHandle>)
                       ((longlong)FVar34 + (longlong)iVar3 * 8);
              iVar18 = local_648;
              while( true ) {
                if ((pFVar36->PendingMustBeMappedReferences).ArrayNum != iVar3) {
                  local_693 = 0;
                  `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_693);
                  iVar18 = local_648;
                }
                if ((FVar34 == FVar33) || (MaxMustBeMappedHandleArray <= iVar18)) break;
                local_608 = (ForElementType<UE::Net::FNetRefHandle>)0x0;
                uVar16 = (int)((*(FNetRefHandle_u_0 *)FVar34 & 0x3fffffffffffff) >> 0x20) * 0x17 +
                         (int)(*(FNetRefHandle_u_0 *)FVar34 & 0x3fffffffffffff);
                iVar32 = TSet<TTuple<UE::Net::FNetRefHandle,double>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<UE::Net::FNetRefHandle>
                                   ((TSet<TTuple<UE::Net::FNetRefHandle,double>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>,FDefaultSetAllocator>
                                     *)&pFVar13->BlockedMustBeMappedLastWarningTime,uVar16,
                                    (FNetRefHandle *)FVar34);
                if ((iVar32 == -1) ||
                   (lVar19 = *(longlong *)&pFVar13->BlockedMustBeMappedLastWarningTime +
                             (longlong)iVar32 * 0x18, lVar19 == 0)) {
                  local_560 = &local_608;
                  local_568 = FVar34;
                  TSet<TTuple<UE::Net::FNetRefHandle,double>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>,FDefaultSetAllocator>
                  ::EmplaceByHash<TPairInitializer<UE::Net::FNetRefHandle_const_&,double_&&>_>
                            ((TSet<TTuple<UE::Net::FNetRefHandle,double>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>,FDefaultSetAllocator>
                              *)&pFVar13->BlockedMustBeMappedLastWarningTime,(uint)&local_624,
                             (TPairInitializer<UE::Net::FNetRefHandle_const_&,double_&&> *)
                             (ulonglong)uVar16,(bool *)&local_568);
                  lVar19 = *(longlong *)&pFVar13->BlockedMustBeMappedLastWarningTime +
                           (longlong)local_624 * 0x18;
                  iVar18 = local_648;
                }
                if ((*(double *)(lVar19 + 8) == 0.0) ||
                   ((double)QueuedBatchWarningRepeatTime < dVar10 - *(double *)(lVar19 + 8))) {
                  if (iVar18 == local_644) {
                    iVar18 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_650,&local_644);
                  }
                  local_648 = iVar18 + 1;
                  ((FNetRefHandle_u_0 *)(local_650.Data + (longlong)iVar18 * 8))->_s_0 =
                       *(FNetRefHandle_u_0_s_0 *)FVar34;
                  pdVar23 = TMapBase<UE::Net::FNetRefHandle,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>_>
                            ::FindChecked((TMapBase<UE::Net::FNetRefHandle,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>_>
                                           *)&pFVar13->BlockedMustBeMappedLastWarningTime,
                                          (FNetRefHandle *)FVar34);
                  *pdVar23 = dVar10;
                  iVar18 = local_648;
                }
                FVar34 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar34 + 8);
                pFVar36 = local_670;
              }
              if (iVar18 != 0) {
                pFVar24 = FNetRefHandleManager::PrintObjectFromNetRefHandle
                                    (pFVar13->NetRefHandleManager,&local_4d8,
                                     (FNetRefHandle)local_688._s_0);
                if ((pFVar24->Data).ArrayNum == 0) {
                  pwVar28 = L"";
                }
                else {
                  pwVar28 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                }
                ::FString::FString(&local_5b8,pwVar28);
                if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                }
                if (2 < (byte)LogIris._0_1_) {
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
                iVar3 = (pFVar36->PendingMustBeMappedReferences).ArrayNum;
                FVar34 = (ForElementType<UE::Net::FNetRefHandle>)
                         &pFVar36->PendingMustBeMappedReferences;
                FVar33 = (pFVar36->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
                if (FVar33 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
                  FVar34 = FVar33;
                }
                FVar33 = (ForElementType<UE::Net::FNetRefHandle>)
                         ((longlong)FVar34 + (longlong)iVar3 * 8);
                while( true ) {
                  if ((pFVar36->PendingMustBeMappedReferences).ArrayNum != iVar3) {
                    local_692 = 0;
                    `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_692);
                  }
                  iVar18 = local_648;
                  if (FVar34 == FVar33) break;
                  if (4 < (byte)LogIris._0_1_) {
                    local_5c8 = *(FNetRefHandle_u_0 *)FVar34;
                    local_5c0 = 0;
                    FObjectReferenceCache::DescribeObjectReference
                              (pFVar13->ObjectReferenceCache,&local_4c8,
                               (FNetObjectReference *)&local_5c8._s_0,&pFVar13->ResolveContext);
                    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
                    }
                  }
                  FVar34 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar34 + 8);
                }
                pUVar4 = pFVar13->ReplicationBridge;
                pcVar9 = *(code **)(pUVar4->_padding_ + 0x358);
                local_558 = local_650.Data;
                if ((local_648 < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iStack_550 = iVar18;
                local_4b8 = (undefined4)local_558;
                uStack_4b4 = local_558._4_4_;
                iStack_4b0 = iVar18;
                uStack_4ac = uStack_54c;
                (*pcVar9)(pUVar4,3,local_688.Value,(pFVar13->Parameters).ConnectionId);
                if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                }
              }
              if (local_650.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_650.Data);
              }
            }
            pFVar36->NextWarningTimeout = (double)QueuedBatchWarningRepeatTime + dVar10;
          }
          pFVar36->PendingBatchTryProcessCount = 0;
        }
      }
      FVar37 = local_678;
      local_5a0.UnvisitedBitMask = local_5a0.UnvisitedBitMask & ~local_5a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5a0);
      this = local_680;
      FVar22 = local_630;
      this_00 = local_5f0;
    } while (local_5a0.CurrentBitIndex < (local_5a0.Array)->NumBits);
  }
LAB_1442d6082:
  do {
    do {
                    /* WARNING: Load size is inaccurate */
      FVar5._s_0 = *FVar22._s_0;
      if ((int *)FVar5.Value == (int *)0x0) {
        local_438.HashSize = 0;
        if (local_438.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_438.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_438.Elements);
        do {
                    /* WARNING: Load size is inaccurate */
          FVar37._s_0 = *FVar22._s_0;
          ::operator_delete((void *)FVar22,0x10);
          FVar22 = FVar37;
        } while ((int *)FVar37.Value != (int *)0x0);
        FNetBitStreamReader::~FNetBitStreamReader(&local_488);
        return;
      }
      FVar6 = ((FNetRefHandle_u_0 *)(FVar5.Value + 8))->_s_0;
      ((int *)(FVar5.Value + 8))[0] = 0;
      ((int *)(FVar5.Value + 8))[1] = 0;
      local_630.Value = FVar5.Value;
      ::operator_delete((void *)FVar22,0x10);
      if (5 < (byte)LogIris._0_1_) {
        FNetRefHandleManager::PrintObjectFromNetRefHandle
                  (this->NetRefHandleManager,&local_4a8,(FNetRefHandle)FVar6);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
      }
      local_620._s_0 = FVar6;
      if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 !=
          *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
        uVar30 = ((FNetRefHandle_u_0 *)(FVar5.Value + 8))->Id;
        TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::Net::FNetRefHandle>
                  (this_00,(int)(uVar30 >> 0x20) * 0x17 + (int)uVar30,
                   (FNetRefHandle *)&local_620._s_0);
      }
      uVar30 = (((FNetRefHandle_u_0 *)(FVar5.Value + 8))->_s_0).Id;
      FVar22.Value = FVar5.Value;
    } while (local_438.Elements._8_4_ == local_438.Elements._52_4_);
    FVar26 = (ForElementType<FSetElementId>)&local_438.Hash;
    if (local_438.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar26 = local_438.Hash.SecondaryData;
    }
    iVar18 = (int)(uVar30 >> 0x20);
    for (iVar3 = *(int *)((longlong)FVar26 +
                         (ulonglong)(iVar18 * 0x17 + (int)uVar30 & local_438.HashSize - 1U) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0xa0 + 0x98 + local_438.Elements._0_8_)) {
      if ((*(ulonglong *)((longlong)iVar3 * 0xa0 + local_438.Elements._0_8_) & 0x3fffffffffffff) ==
          uVar30) {
        FVar26 = (ForElementType<FSetElementId>)&local_438.Hash;
        if (local_438.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar26 = local_438.Hash.SecondaryData;
        }
        iVar3 = *(int *)((longlong)FVar26 +
                        (ulonglong)(local_438.HashSize - 1U & iVar18 * 0x17 + (int)uVar30) * 4);
        goto joined_r0x0001442d61d9;
      }
    }
  } while( true );
joined_r0x0001442d61d9:
  if (iVar3 == -1) goto LAB_1442d6203;
  puVar27 = (ulonglong *)((longlong)iVar3 * 0xa0 + local_438.Elements._0_8_);
  if ((*puVar27 & 0x3fffffffffffff) == uVar30) {
    if (puVar27 == (ulonglong *)0x0) goto LAB_1442d6207;
    goto LAB_1442d622d;
  }
  iVar3 = (int)puVar27[0x13];
  goto joined_r0x0001442d61d9;
LAB_1442d6203:
  puVar27 = (ulonglong *)0x0;
LAB_1442d6207:
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar15) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1442d622d:
  local_638.Value = (ulong64)(puVar27 + 1);
  local_670 = (FPendingBatchData *)(puVar27 + 0x12);
  iVar3 = *(int *)(local_670->DataChunkStorage).AllocatorInstance.InlineData;
  if ((int *)((FNetRefHandle_u_0 *)(puVar27 + 0x11))->Value != (int *)0x0) {
    local_638.Value = ((FNetRefHandle_u_0 *)(puVar27 + 0x11))->Value;
  }
  piVar35 = (int *)(local_638.Value + (longlong)iVar3 * 8);
  local_668 = piVar35;
  while( true ) {
    FVar22 = local_638;
    local_620 = FVar37;
    if (*(int *)(local_670->DataChunkStorage).AllocatorInstance.InlineData != iVar3) {
      local_691 = 0;
      `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_691);
    }
    if ((int *)FVar22.Value == piVar35) break;
    FVar7.field0_0x0 = *(FNetRefHandle_u_0 *)FVar22;
    uVar30 = (ulonglong)FVar7.field0_0x0 & 0x3fffffffffffff;
    if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 !=
        *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
      puVar8 = *(undefined1 **)&(this->PendingBatchHolder).PendingBatches.field_0x40;
      puVar29 = &(this->PendingBatchHolder).PendingBatches.field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar29 = puVar8;
      }
      iVar18 = *(int *)(puVar29 +
                       ((ulonglong)
                        (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x48 - 1) &
                       (uVar30 >> 0x20) * 0x17 + uVar30) * 4);
      if (iVar18 != -1) {
        lVar19 = *(longlong *)&(this->PendingBatchHolder).PendingBatches;
        do {
          lVar2 = lVar19 + (longlong)iVar18 * 0x18;
          if ((*(ulonglong *)(lVar19 + (longlong)iVar18 * 0x18) & 0x3fffffffffffff) == uVar30) {
            puVar25 = (undefined8 *)(lVar2 + 8);
            if (lVar2 == 0) {
              puVar25 = (undefined8 *)0x0;
            }
            if ((puVar25 != (undefined8 *)0x0) &&
               (pFVar36 = (FPendingBatchData *)*puVar25, FVar37 = local_678,
               pFVar36 != (FPendingBatchData *)0x0)) {
              FVar34 = (ForElementType<UE::Net::FNetRefHandle>)&pFVar36->CreationDependentParents;
              FVar33 = (pFVar36->CreationDependentParents).AllocatorInstance.SecondaryData;
              piVar1 = &(pFVar36->CreationDependentParents).ArrayNum;
              iVar18 = *piVar1;
              bVar15 = true;
              if (FVar33 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
                FVar34 = FVar33;
              }
              FVar33 = (ForElementType<UE::Net::FNetRefHandle>)
                       ((longlong)FVar34 + (longlong)iVar18 * 8);
              goto LAB_1442d6390;
            }
            break;
          }
          iVar18 = *(int *)(lVar2 + 0x10);
        } while (iVar18 != -1);
      }
    }
LAB_1442d643d:
    local_638.Value = local_638.Value + 8;
  }
  FVar22 = local_630;
  this_00 = (TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
             *)&this->PendingBatchHolder;
  goto LAB_1442d6082;
LAB_1442d6390:
  if (*piVar1 != iVar18) {
    local_690 = 0;
    `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_690);
  }
  if (FVar34 == FVar33) {
    this = local_680;
    piVar35 = local_668;
    FVar37 = local_678;
    if (bVar15 != false) {
      `UE::Net::Private::FReplicationReader::ProcessQueuedBatches'::__l2::<lambda_1>::operator()
                (&local_580,pFVar36,FVar7);
      FVar22 = (FNetRefHandle_u_0)::operator_new(0x10);
      this = local_680;
      piVar35 = local_668;
      FVar37 = local_678;
      if ((int *)FVar22.Value != (int *)0x0) {
        ((FNetRefHandle_u_0 *)(FVar22.Value + 8))->_s_0 = (FNetRefHandle_u_0_s_0)FVar7.field0_0x0;
        *(undefined8 *)FVar22 = 0;
        *(FNetRefHandle_u_0 *)local_620 = FVar22;
        FVar37 = FVar22;
        local_678 = FVar22;
      }
    }
    goto LAB_1442d643d;
  }
  if (*(FNetRefHandle_u_0 *)FVar34 == 0) {
    bVar15 = true;
    FVar34 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar34 + 8);
  }
  else {
    bVar15 = FNetRefHandleManager::IsNetRefHandleAssigned
                       (local_680->NetRefHandleManager,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar34);
    this = local_680;
    piVar35 = local_668;
    FVar37 = local_678;
    if (!bVar15) goto LAB_1442d643d;
    FVar34 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar34 + 8);
  }
  goto LAB_1442d6390;
}

// Read @ 1442d7c30

void __thiscall
UE::Net::Private::FReplicationReader::Read
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  FNetBitStreamReader *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  EReplicationDataStreamDebugFeatures EVar6;
  uint uVar7;
  FNetObjectAttachmentReceiveQueue *this_01;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  int *piVar10;
  FName FVar11;
  FNetTraceCollector *pFVar12;
  FMemMark local_c8;
  FInitParameters local_a0;
  FInternalNetSerializationContext local_78;
  FObjectsToDispatchArray local_40;
  
  local_a0.ReplicationSystem = (this->Parameters).ReplicationSystem;
  local_78.bSerializeObjectReferencesAsRemoteIds = 0;
  local_78.bInlineObjectReferenceExports = 0;
  local_78.bDowngradeAutonomousProxyRole = 0;
  this_00 = param_1->BitStreamReader;
  local_a0.ObjectResolveContext.bForceSyncLoad = (this->ResolveContext).bForceSyncLoad;
  local_a0.ObjectResolveContext._17_7_ = *(undefined7 *)&(this->ResolveContext).field_0x11;
  local_78.ReplicationSystem = (UReplicationSystem *)0x0;
  local_78.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  local_a0.ObjectResolveContext.RemoteNetTokenStoreState =
       (this->ResolveContext).RemoteNetTokenStoreState;
  local_a0.ObjectResolveContext.ConnectionId = (this->ResolveContext).ConnectionId;
  local_a0.ObjectResolveContext.AsyncLoadingPriority = (this->ResolveContext).AsyncLoadingPriority;
  local_78.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_78.ResolveContext.ConnectionId = 0;
  local_78.ResolveContext.AsyncLoadingPriority = -1;
  local_78.ResolveContext.bForceSyncLoad = false;
  local_78.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_a0.PackageMap = this->ReplicationSystemInternal->IrisObjectReferencePackageMap;
  FInternalNetSerializationContext::Init(&local_78,&local_a0);
  pFVar1 = param_1->BitStreamReader;
  uVar4 = 0xffffffff;
  param_1->LocalConnectionId = (this->Parameters).ConnectionId;
  param_1->InternalContext = &local_78;
  param_1->NetBlobReceiver = (INetBlobReceiver *)&this->ReplicationSystemInternal->NetBlobManager;
  pFVar12 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar12 = param_1->TraceCollector;
  }
  if (pFVar12 != (FNetTraceCollector *)0x0) {
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,pFVar1->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ReplicationData = CreatePersistentNetDebugName(L"ReplicationData",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar5 = FNetTrace::TraceName(ReplicationData);
    FVar9 = (pFVar12->Events).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
    }
    *(uint *)((longlong)FVar9 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  EVar6 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,2);
  this->StreamDebugFeatures = EVar6;
  if (((param_1->ErrorContext).Error == (FName)0x0) &&
     (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
    local_c8.Top = (this->TempLinearAllocator).Top;
    local_c8.SavedChunk = (this->TempLinearAllocator).TopChunk;
    local_c8.NextTopmostMark = (this->TempLinearAllocator).TopMark;
    local_c8.bPopped = false;
    (this->TempLinearAllocator).TopMark = &local_c8;
    piVar10 = &(this->TempLinearAllocator).NumMarks;
    *piVar10 = *piVar10 + 1;
    local_c8.Mem = &this->TempLinearAllocator;
    uVar7 = FNetBitStreamReader::ReadBits(this_00,0x10);
    uVar5 = this_00->OverflowBitCount;
    if ((uVar5 == 0) && (uVar7 < 0x2000)) {
      if (uVar7 != 0) {
        FObjectsToDispatchArray::FObjectsToDispatchArray
                  (&local_40,uVar7 + 0x20,&this->TempLinearAllocator);
        this->ObjectsToDispatchArray = &local_40;
        uVar5 = ReadRootObjectsPendingDestroy(this,param_1);
        if (((((param_1->ErrorContext).Error == (FName)0x0) &&
             (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) &&
            ((uVar7 - uVar5 != 0 || (this->ObjectsToDispatchArray->ObjectsToDispatchCount != 0))))
           && ((ReadObjects(this,param_1,uVar7 - uVar5,0),
               (param_1->ErrorContext).Error == (FName)0x0 &&
               (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)))) {
          bVar3 = FNetObjectAttachmentsReader::HasUnprocessedAttachments
                            (&this->Attachments,HugeObject,0);
          if (bVar3) {
            this_01 = FNetObjectAttachmentsReader::GetQueue(&this->Attachments,HugeObject,0);
            pTVar8 = FNetObjectAttachmentReceiveQueue::PeekReliable(this_01);
            while (pTVar8 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
              ProcessHugeObjectAttachment(this,param_1,pTVar8);
              FNetObjectAttachmentReceiveQueue::PopReliable(this_01);
              if ((param_1->ErrorContext).Error != (FName)0x0) goto LAB_1442d80f8;
              pTVar8 = FNetObjectAttachmentReceiveQueue::PeekReliable(this_01);
            }
            pTVar8 = FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_01);
            while (pTVar8 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
              ProcessHugeObjectAttachment(this,param_1,pTVar8);
              FNetObjectAttachmentReceiveQueue::PopUnreliable(this_01);
              if ((param_1->ErrorContext).Error != (FName)0x0) goto LAB_1442d80f8;
              pTVar8 = FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_01);
            }
          }
          if (((param_1->ErrorContext).Error == (FName)0x0) &&
             (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
            piVar10 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c);
            if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              NetTraceNameId_3194 =
                   CreatePersistentNetDebugName(L"ReplicationReader.ReadObjectBatchCount",0x26);
              _Init_thread_footer(&::_TSS0);
            }
            uVar5 = FNetTrace::TraceName(NetTraceNameId_3194);
            FNetTrace::TracePacketStatsCounter
                      (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,
                       uVar5,uVar7);
            if ((*piVar10 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              NetTraceNameId_3195 =
                   CreatePersistentNetDebugName
                             (L"ReplicationReader.ReadObjectsAndSubObjectsToDispatchCount",0x39);
              _Init_thread_footer(&::_TSS1);
            }
            uVar5 = this->ObjectsToDispatchArray->ObjectsToDispatchCount;
            uVar7 = FNetTrace::TraceName(NetTraceNameId_3195);
            FNetTrace::TracePacketStatsCounter
                      (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,
                       uVar7,uVar5);
            DispatchStateData(this,param_1);
            if (((param_1->ErrorContext).Error == (FName)0x0) &&
               (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
              ResolveAndDispatchUnresolvedReferences(this);
              DispatchEndReplication(this,param_1);
              this->ObjectsToDispatchArray = (FObjectsToDispatchArray *)0x0;
            }
          }
        }
      }
    }
    else {
      FVar11 = GNetError_BitStreamError;
      if (uVar5 != 0) {
        FVar11 = GNetError_BitStreamOverflow;
      }
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar11);
    }
LAB_1442d80f8:
    if (local_c8.bPopped == false) {
      if (((local_c8.Mem)->TopMark != &local_c8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_c8.bPopped = true;
      (local_c8.Mem)->NumMarks = (local_c8.Mem)->NumMarks + -1;
      if (local_c8.SavedChunk != (local_c8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_c8.Mem,local_c8.SavedChunk);
      }
      (local_c8.Mem)->Top = local_c8.Top;
      (local_c8.Mem)->TopMark = local_c8.NextTopmostMark;
      local_c8.Top = (uchar *)0x0;
    }
  }
  if (uVar4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar12,uVar4,pFVar1->BufferBitPosition);
  }
  return;
}

// ReadNetRefHandleId @ 1442d81d0

FNetRefHandle __thiscall
UE::Net::Private::FReplicationReader::ReadNetRefHandleId
          (FReplicationReader *this,FNetSerializationContext *param_1,FNetBitStreamReader *param_2)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  ulong64 uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *this_00;
  FNetBitStreamReader *in_R9;
  FNetRefHandle_u_0 local_res18 [2];
  
  lVar1 = *(longlong *)&param_2[0x18].OverflowBitCount;
  this_00 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    this_00 = *(FNetTraceCollector **)&param_2[0x19].BufferBitCapacity;
  }
  uVar3 = 0xffffffff;
  if (this_00 == (FNetTraceCollector *)0x0) {
    uVar4 = ReadPackedUint64(in_R9);
    FNetRefHandleManager::MakeNetRefHandleFromId((ulong64)local_res18);
  }
  else {
    uVar3 = FNetTrace::BeginPacketContentEvent(this_00,Object,*(uint *)(lVar1 + 0x10));
    FVar5 = (this_00->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&this_00->Events;
    }
    *(undefined8 *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) = 0;
    uVar4 = ReadPackedUint64(in_R9);
    FNetRefHandleManager::MakeNetRefHandleFromId((ulong64)local_res18);
    if (uVar3 != 0xffffffff) {
      FVar5 = (this_00->Events).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar5 = (ForElementType<FNetTracePacketContentEvent>)&this_00->Events;
      }
      *(ulong64 *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) =
           local_res18[0].Value & 0x3fffffffffffff;
      FNetTraceCollector::AddReferencedObjectId(this_00,local_res18[0].Value & 0x3fffffffffffff);
    }
  }
  FVar2 = GNetError_InvalidNetHandle;
  if ((local_res18[0].Value & 0x3fffffffffffff) == uVar4) {
    (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = (ulong64)local_res18[0];
  }
  else {
    FNetSerializationContext::SetBitStreamOverflow((FNetSerializationContext *)param_2);
    FNetErrorContext::SetError((FNetErrorContext *)param_2,FVar2);
    (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
  }
  if (uVar3 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this_00,uVar3,*(uint *)(lVar1 + 0x10));
  }
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// ReadObjectBatch @ 1442d8320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationReader::ReadObjectBatch
          (FReplicationReader *this,FNetSerializationContext *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FNetBitStreamReader *this_00;
  FInternalNetSerializationContext *pFVar3;
  FNetRefHandle_u_0_s_0 FVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  FNetRefHandle FVar15;
  FNetRefHandle_u_0 *pFVar16;
  FNetRefHandle_u_0 *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FNetRefHandle_u_0 *pFVar20;
  FNetRefHandle_u_0 *pFVar21;
  ulonglong uVar22;
  FName FVar23;
  ulonglong uVar24;
  FNetRefHandle_u_0 *pFVar25;
  undefined1 auStackY_248 [32];
  EIrisAsyncLoadingPriority local_1f7 [7];
  FNetRefHandle_u_0 local_1f0;
  undefined1 local_1e8 [8];
  FNetRefHandle_u_0 local_1e0;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  FNetRefHandle_u_0 *local_1c8;
  FNetRefHandle_u_0 local_1c0;
  EReplicationDataStreamDebugFeatures local_1b8;
  uint local_1b0;
  ulonglong local_1a8;
  FNetRefHandle_u_0 local_1a0;
  FNetRefHandle_u_0 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  FReplicationBridgeSerializationContext local_180;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [40];
  FString local_130;
  FString local_120;
  FNetRefHandle_u_0 local_110 [2];
  FString local_100;
  FString local_f0;
  FNetRefHandle_u_0 local_e0 [2];
  FString local_d0;
  FString local_c0;
  FNetRefHandle_u_0 local_b0 [3];
  FNetRefHandle_u_0 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FNetRefHandle_u_0 local_78 [4];
  FNetRefHandle_u_0 *local_58;
  FNetRefHandle_u_0 local_50;
  ulonglong local_48;
  FNetRefHandle_u_0 *pFVar26;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this_00 = param_1->BitStreamReader;
  pFVar26 = (FNetRefHandle_u_0 *)0x0;
  pFVar25 = (FNetRefHandle_u_0 *)0x0;
  uVar12 = 0;
  local_1b0 = 0xffffffff;
  pFVar21 = pFVar26;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
  }
  local_198 = pFVar21;
  if (pFVar21 != (FNetRefHandle_u_0 *)0x0) {
    local_1b0 = FNetTrace::BeginPacketContentEvent
                          ((FNetTraceCollector *)&pFVar21->_s_0,NameId,this_00->BufferBitPosition);
    uVar22 = (ulonglong)local_1b0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Batch = CreatePersistentNetDebugName(L"Batch",5);
      _Init_thread_footer(&::_TSS0);
    }
    uVar9 = FNetTrace::TraceName(Batch);
    pFVar16 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
    if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
      pFVar16 = pFVar21 + 0x23;
    }
    *(uint *)(pFVar16 + uVar22 * 2) = uVar9;
  }
  FNetSerializationContext::AddReadJournalEntry(param_1,L"ReadObjectBatch");
  uVar9 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar9 & 1) != 0) {
    pFVar3 = param_1->InternalContext;
    local_180.ConnectionId = (this->Parameters).ConnectionId;
    local_180.bIsDestructionInfo = true;
    if (pFVar3 == (FInternalNetSerializationContext *)0x0) {
      local_1e0 = (FNetRefHandle_u_0)((ulonglong)(uint)local_1e0._4_4_ << 0x20);
    }
    else {
      uVar9 = *(uint *)&pFVar3->field_0x30;
      pFVar3->bInlineObjectReferenceExports = 1;
      local_1e0 = (FNetRefHandle_u_0)(CONCAT44(local_1e0._4_4_,uVar9) & 0xffffffff00000002);
    }
    local_180.SerializationContext = param_1;
    UObjectReplicationBridge::ReadAndExecuteDestructionInfoFromRemote
              (this->ReplicationBridge,&local_180);
    if (((this->StreamDebugFeatures & Sentinels) != None) &&
       (bVar7 = ReadAndVerifySentinelBits(param_1->BitStreamReader,L"DestructionInfo",8),
       FVar23 = GNetError_BitStreamError, !bVar7)) {
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar23);
    }
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar7 = FNetSerializationContext::IsBitStreamOverflown(param_1), uVar9 = 1, bVar7)) {
      if (1 < (byte)LogIris._0_1_) {
        FNetSerializationContext::PrintReadJournal(param_1,(FString *)(local_158 + 8));
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if ((FName)local_158._8_8_ != (FName)0x0) {
          FMemory::Free((void *)local_158._8_8_);
        }
      }
      FVar23 = GNetError_BitStreamError;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar23);
      uVar9 = uVar12;
    }
    if (pFVar3 != (FInternalNetSerializationContext *)0x0) {
      pFVar3->bInlineObjectReferenceExports = 0;
      *(uint *)&pFVar3->field_0x30 = *(uint *)&pFVar3->field_0x30 | local_1e0._0_4_;
    }
    goto LAB_1442d94f2;
  }
  uVar9 = 0;
  if (((this->StreamDebugFeatures & Sentinels) == None) ||
     (bVar7 = ReadAndVerifySentinelBits(param_1->BitStreamReader,L"Object",8),
     FVar23 = GNetError_BitStreamError, bVar7)) {
    ReadNetRefHandleId(this,(FNetSerializationContext *)&local_1f0._s_0,
                       (FNetBitStreamReader *)param_1);
    puVar14 = &(this->Parameters).NumBitsUsedForBatchSize;
    if ((param_2 & 1) != 0) {
      puVar14 = &(this->Parameters).NumBitsUsedForHugeObjectBatchSize;
    }
    local_1cc = *puVar14;
    pFVar21 = pFVar26;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
    }
    if (pFVar21 == (FNetRefHandle_u_0 *)0x0) {
      uVar10 = FNetBitStreamReader::ReadBits(this_00,local_1cc);
    }
    else {
      local_1d0 = FNetTrace::BeginPacketContentEvent
                            ((FNetTraceCollector *)&pFVar21->_s_0,NameId,this_00->BufferBitPosition)
      ;
      uVar22 = (ulonglong)local_1d0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        BatchSize = CreatePersistentNetDebugName(L"BatchSize",9);
        _Init_thread_footer(&::_TSS0);
      }
      uVar10 = FNetTrace::TraceName(BatchSize);
      pFVar16 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
      if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
        pFVar16 = pFVar21 + 0x23;
      }
      *(uint *)(pFVar16 + uVar22 * 2) = uVar10;
      uVar10 = FNetBitStreamReader::ReadBits(this_00,local_1cc);
      if (local_1d0 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent
                  ((FNetTraceCollector *)&pFVar21->_s_0,local_1d0,this_00->BufferBitPosition);
      }
    }
    (param_1->ErrorContext).ObjectHandle.field0_0x0 = local_1f0;
    FVar23 = GNetError_InvalidValue;
    if (((param_1->ErrorContext).Error == (FName)0x0) &&
       (bVar7 = FNetSerializationContext::IsBitStreamOverflown(param_1),
       FVar23 = GNetError_InvalidValue, !bVar7)) {
      uVar11 = uVar12;
      if (this_00->OverflowBitCount == 0) {
        uVar11 = this_00->BufferBitCapacity - this_00->BufferBitPosition;
      }
      if (uVar10 <= uVar11) {
        local_1d8 = (this_00->BufferBitPosition - this_00->BufferBitStartOffset) + uVar10;
        local_1d0 = FNetBitStreamReader::ReadBits(this_00,1);
        local_1d0 = local_1d0 & 0xffffff01;
        uVar10 = FNetBitStreamReader::ReadBits(this_00,1);
        local_58 = (FNetRefHandle_u_0 *)0x0;
        local_50.Value._0_4_ = 0;
        local_50.Value._4_4_ = 4;
        uVar11 = FNetBitStreamReader::ReadBits(this_00,1);
        while ((uVar11 & 1) != 0) {
          FVar15 = ReadNetRefHandle((FNetSerializationContext *)local_158);
          if (local_50.Value._0_4_ == local_50.Value._4_4_) {
            local_50.Value._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                           (0x808,(ForElementType<UE::Net::FNetRefHandle> *)&local_78[0]._s_0,
                            (int *)((longlong)&local_50 + 4));
          }
          lVar18 = (longlong)(int)local_50.Value._0_4_;
          pFVar21 = local_78;
          if (local_58 != (FNetRefHandle_u_0 *)0x0) {
            pFVar21 = local_58;
          }
                    /* WARNING: Load size is inaccurate */
          local_50.Value._0_4_ = local_50.Value._0_4_ + 1;
          pFVar21[lVar18] = (FNetRefHandle_u_0)*FVar15.field0_0x0;
          uVar11 = FNetBitStreamReader::ReadBits(this_00,1);
        }
        piVar1 = &(this->TempMustBeMappedReferences).ArrayMax;
        (this->TempMustBeMappedReferences).ArrayNum = 0;
        local_1d4 = local_1d8;
        if (*piVar1 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->TempMustBeMappedReferences).AllocatorInstance,0,piVar1);
        }
        local_1f7[0] = Invalid;
        if ((uVar10 & 1) == 0) {
LAB_1442d8860:
          pFVar19 = (this->BrokenObjects).AllocatorInstance.Data;
          pFVar2 = pFVar19 + (longlong)(this->BrokenObjects).ArrayNum * 8;
          pFVar21 = pFVar26;
          if (pFVar19 != pFVar2) {
            do {
              if ((*(ulonglong *)pFVar19 & 0x3fffffffffffff) == (local_1f0.Value & 0x3fffffffffffff)
                 ) {
                uVar22 = local_1f0.Value & 0x3fffffffffffff;
                uVar12 = 0xffffffff;
                if (GNetTraceRuntimeVerbosity != 0) {
                  pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
                }
                if (pFVar21 != (FNetRefHandle_u_0 *)0x0) {
                  uVar12 = FNetTrace::BeginPacketContentEvent
                                     ((FNetTraceCollector *)&pFVar21->_s_0,Object,
                                      this_00->BufferBitPosition);
                  pFVar25 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
                  if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
                    pFVar25 = pFVar21 + 0x23;
                  }
                  pFVar25[(ulonglong)uVar12 * 2].Value = uVar22;
                  if (uVar22 != 0) {
                    FNetTraceCollector::AddReferencedObjectId
                              ((FNetTraceCollector *)&pFVar21->_s_0,uVar22);
                  }
                }
                pFVar25 = pFVar26;
                if (GNetTraceRuntimeVerbosity != 0) {
                  pFVar25 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
                }
                uVar9 = 0xffffffff;
                if (pFVar25 != (FNetRefHandle_u_0 *)0x0) {
                  uVar9 = FNetTrace::BeginPacketContentEvent
                                    ((FNetTraceCollector *)&pFVar25->_s_0,NameId,
                                     this_00->BufferBitPosition);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    SkippedData = CreatePersistentNetDebugName(L"SkippedData",0xb);
                    _Init_thread_footer(&::_TSS0);
                  }
                  uVar10 = FNetTrace::TraceName(SkippedData);
                  pFVar16 = (FNetRefHandle_u_0 *)pFVar25[0x223].Value;
                  if ((FNetRefHandle_u_0 *)pFVar25[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
                    pFVar16 = pFVar25 + 0x23;
                  }
                  *(uint *)(pFVar16 + (ulonglong)uVar9 * 2) = uVar10;
                }
                FNetBitStreamReader::Seek(this_00,local_1d4);
                if (uVar9 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent
                            ((FNetTraceCollector *)&pFVar25->_s_0,uVar9,this_00->BufferBitPosition);
                }
                goto joined_r0x0001442d8aad;
              }
              pFVar19 = pFVar19 + 8;
            } while (pFVar19 != pFVar2);
          }
          uVar22 = (ulonglong)(int)local_50.Value._0_4_;
          bVar7 = true;
          if (0 < (int)local_50.Value._0_4_) {
            local_1e0.Value._0_4_ = local_50.Value._0_4_;
            pFVar16 = local_78;
            if (local_58 != (FNetRefHandle_u_0 *)0x0) {
              pFVar16 = local_58;
            }
            local_1c8 = pFVar16 + uVar22;
            uVar24 = uVar22;
            while( true ) {
              pFVar20 = local_1c8;
              if ((int)uVar22 != (int)uVar24) {
                local_1e8[0] = 0;
                `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_1e8);
              }
              if (pFVar16 == pFVar20) break;
              FVar4 = pFVar16->_s_0;
              local_1a0._s_0 = FVar4;
              if (pFVar16->Id == 0 && pFVar16->ReplicationSystemId == 0) {
                bVar8 = true;
              }
              else {
                bVar8 = FNetRefHandleManager::IsNetRefHandleAssigned
                                  (this->NetRefHandleManager,(FNetRefHandle)FVar4);
                if (!bVar8) {
                  pFVar19 = (this->BrokenObjects).AllocatorInstance.Data;
                  pFVar2 = pFVar19 + (longlong)(this->BrokenObjects).ArrayNum * 8;
                  if (pFVar19 != pFVar2) {
                    do {
                      if ((*(ulonglong *)pFVar19 & 0x3fffffffffffff) == (pFVar16->_s_0).Id) {
                        if (1 < (byte)LogIris._0_1_) {
                          FNetRefHandle::ToString((FNetRefHandle *)&local_1a0._s_0,&local_100);
                          FNetRefHandle::ToString
                                    ((FNetRefHandle *)&local_1f0._s_0,(FString *)&local_110[0]._s_0)
                          ;
                          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                          if ((void *)local_110[0].Value != (void *)0x0) {
                            FMemory::Free((void *)local_110[0]);
                          }
                          if (local_100.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_100.Data.AllocatorInstance.Data);
                          }
                        }
                        TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
                        AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
                                  (&this->BrokenObjects,(FNetRefHandle *)&local_1f0._s_0);
                        uVar22 = local_1f0.Value & 0x3fffffffffffff;
                        uVar12 = 0xffffffff;
                        if (GNetTraceRuntimeVerbosity != 0) {
                          pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
                        }
                        if (pFVar21 != (FNetRefHandle_u_0 *)0x0) {
                          uVar12 = FNetTrace::BeginPacketContentEvent
                                             ((FNetTraceCollector *)&pFVar21->_s_0,Object,
                                              this_00->BufferBitPosition);
                          pFVar25 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
                          if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0)
                          {
                            pFVar25 = pFVar21 + 0x23;
                          }
                          pFVar25[(ulonglong)uVar12 * 2].Value = uVar22;
                          if (uVar22 != 0) {
                            FNetTraceCollector::AddReferencedObjectId
                                      ((FNetTraceCollector *)&pFVar21->_s_0,uVar22);
                          }
                        }
                        pFVar25 = pFVar26;
                        if (GNetTraceRuntimeVerbosity != 0) {
                          pFVar25 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
                        }
                        uVar9 = 0xffffffff;
                        if (pFVar25 != (FNetRefHandle_u_0 *)0x0) {
                          uVar9 = FNetTrace::BeginPacketContentEvent
                                            ((FNetTraceCollector *)&pFVar25->_s_0,NameId,
                                             this_00->BufferBitPosition);
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
                             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                            SkippedData = CreatePersistentNetDebugName(L"SkippedData",0xb);
                            _Init_thread_footer(&::_TSS0);
                          }
                          uVar10 = FNetTrace::TraceName(SkippedData);
                          pFVar16 = (FNetRefHandle_u_0 *)pFVar25[0x223].Value;
                          if ((FNetRefHandle_u_0 *)pFVar25[0x223].Value == (FNetRefHandle_u_0 *)0x0)
                          {
                            pFVar16 = pFVar25 + 0x23;
                          }
                          *(uint *)(pFVar16 + (ulonglong)uVar9 * 2) = uVar10;
                        }
                        FNetBitStreamReader::Seek(this_00,local_1d4);
                        if (uVar9 != 0xffffffff) {
                          FNetTrace::EndPacketContentEvent
                                    ((FNetTraceCollector *)&pFVar25->_s_0,uVar9,
                                     this_00->BufferBitPosition);
                        }
                        goto joined_r0x0001442d8aad;
                      }
                      pFVar19 = pFVar19 + 8;
                    } while (pFVar19 != pFVar2);
                  }
                }
              }
              if ((bVar7) && (bVar8 != false)) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              uVar22 = (ulonglong)(uint)local_50.Value._0_4_;
              pFVar16 = pFVar16 + 1;
              uVar24 = (ulonglong)local_1e0 & 0xffffffff;
            }
          }
          bVar8 = FObjectReferenceCache::ShouldAsyncLoad(this->ObjectReferenceCache);
          pFVar16 = pFVar26;
          if (bVar8) {
            pFVar16 = (FNetRefHandle_u_0 *)
                      UpdateUnresolvedMustBeMappedReferences
                                (this,(FNetRefHandle)local_1f0._s_0,
                                 &this->TempMustBeMappedReferences,local_1f7[0]);
          }
          if (!bVar7) {
            if (pFVar16 == (FNetRefHandle_u_0 *)0x0) {
              pFVar16 = (FNetRefHandle_u_0 *)
                        FPendingBatchHolder::FindOrCreate
                                  (&this->PendingBatchHolder,(FNetRefHandle)local_1f0._s_0);
            }
            uVar6 = local_50.Value._0_4_;
            pFVar20 = pFVar16 + 0x27;
            if (pFVar20 != local_78) {
              lVar18 = (longlong)(int)local_50.Value._0_4_;
              piVar1 = (int *)((longlong)pFVar16 + 0x164);
              *(undefined4 *)(pFVar16 + 0x2c) = local_50.Value._0_4_;
              local_1c8 = local_78;
              if (local_58 != (FNetRefHandle_u_0 *)0x0) {
                local_1c8 = local_58;
              }
              if ((local_50.Value._0_4_ == 0) && (*piVar1 == 0)) {
                *piVar1 = 4;
              }
              else {
                Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                          (8,8,local_50.Value._0_4_,*piVar1,
                           (ForElementType<UE::Net::FNetRefHandle> *)&pFVar20->_s_0,
                           local_50.Value._0_4_,piVar1);
                if ((FNetRefHandle_u_0 *)pFVar16[0x2b].Value != (FNetRefHandle_u_0 *)0x0) {
                  pFVar20 = (FNetRefHandle_u_0 *)pFVar16[0x2b].Value;
                }
                if (uVar6 != 0) {
                  memcpy(pFVar20,local_1c8,lVar18 << 3);
                }
              }
            }
          }
          if (pFVar16 == (FNetRefHandle_u_0 *)0x0) {
            uVar9 = ReadObjectsInBatch(this,param_1,(FNetRefHandle)local_1f0._s_0,local_1d0._0_1_,
                                       local_1d8);
            if (((param_1->ErrorContext).Error == (FName)0x0) &&
               (bVar7 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar7))
            goto LAB_1442d9110;
            if ((param_1->ErrorContext).Error == GNetError_BrokenNetHandle) {
              local_168 = 0;
              uStack_160 = 0;
              local_98.Value._0_4_ = 0;
              local_98.Value._4_4_ = 0;
              uStack_90 = 0;
              uStack_8c = uStack_15c;
              (**(code **)(this->ReplicationBridge->_padding_ + 0x358))
                        (this->ReplicationBridge,2,local_1f0.Value,(this->Parameters).ConnectionId);
              if (1 < (byte)LogIris._0_1_) {
                FNetRefHandle::ToString((FNetRefHandle *)&local_1f0._s_0,&local_88);
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
                        (&this->BrokenObjects,(FNetRefHandle *)&local_1f0._s_0);
              uVar22 = local_1f0.Value & 0x3fffffffffffff;
              local_190 = 0;
              uStack_188 = 0;
              uVar12 = 0xffffffff;
              (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
              (param_1->ErrorContext).Error.ComparisonIndex = 0;
              (param_1->ErrorContext).Error.Number = 0;
              if (GNetTraceRuntimeVerbosity != 0) {
                pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
              }
              if (pFVar21 != (FNetRefHandle_u_0 *)0x0) {
                uVar12 = FNetTrace::BeginPacketContentEvent
                                   ((FNetTraceCollector *)&pFVar21->_s_0,Object,
                                    this_00->BufferBitPosition);
                pFVar25 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
                if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
                  pFVar25 = pFVar21 + 0x23;
                }
                pFVar25[(ulonglong)uVar12 * 2].Value = uVar22;
                if (uVar22 != 0) {
                  FNetTraceCollector::AddReferencedObjectId
                            ((FNetTraceCollector *)&pFVar21->_s_0,uVar22);
                }
              }
              pFVar25 = pFVar26;
              if (GNetTraceRuntimeVerbosity != 0) {
                pFVar25 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
              }
              uVar9 = 0xffffffff;
              if (pFVar25 != (FNetRefHandle_u_0 *)0x0) {
                uVar9 = FNetTrace::BeginPacketContentEvent
                                  ((FNetTraceCollector *)&pFVar25->_s_0,NameId,
                                   this_00->BufferBitPosition);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  SkippedData = CreatePersistentNetDebugName(L"SkippedData",0xb);
                  _Init_thread_footer(&::_TSS0);
                }
                uVar10 = FNetTrace::TraceName(SkippedData);
                pFVar16 = (FNetRefHandle_u_0 *)pFVar25[0x223].Value;
                if ((FNetRefHandle_u_0 *)pFVar25[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
                  pFVar16 = pFVar25 + 0x23;
                }
                *(uint *)(pFVar16 + (ulonglong)uVar9 * 2) = uVar10;
              }
              FNetBitStreamReader::Seek(this_00,local_1d4);
              if (uVar9 != 0xffffffff) {
                FNetTrace::EndPacketContentEvent
                          ((FNetTraceCollector *)&pFVar25->_s_0,uVar9,this_00->BufferBitPosition);
              }
              goto joined_r0x0001442d8aad;
            }
          }
          else {
            if (5 < (byte)LogIris._0_1_) {
              local_1e0.Value._0_4_ = *(undefined4 *)(pFVar16 + 0x1f);
              FNetRefHandle::ToString((FNetRefHandle *)&local_1f0._s_0,&local_f0);
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,0xffffffff);
            if (local_1f7[0] != Invalid) {
              uVar12 = (uint)local_1f7[0];
            }
            *(char *)((longlong)pFVar16 + 0x17c) = (char)uVar12;
            local_1e0.Value = local_1f0.Value & 0x3fffffffffffff;
            if (GNetTraceRuntimeVerbosity != 0) {
              pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
            }
            local_1c8 = pFVar21;
            if (pFVar21 != (FNetRefHandle_u_0 *)0x0) {
              uVar12 = FNetTrace::BeginPacketContentEvent
                                 ((FNetTraceCollector *)&pFVar21->_s_0,Object,
                                  this_00->BufferBitPosition);
              local_1a8 = (ulonglong)uVar12;
              pFVar25 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
              if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
                pFVar25 = pFVar21 + 0x23;
              }
              pFVar25[local_1a8 * 2].Value = (ulong64)local_1e0;
              if (local_1e0 != (FNetRefHandle_u_0)0x0) {
                FNetTraceCollector::AddReferencedObjectId
                          ((FNetTraceCollector *)&pFVar21->_s_0,(ulong64)local_1e0);
              }
            }
            pFVar21 = pFVar26;
            if (GNetTraceRuntimeVerbosity != 0) {
              pFVar21 = (FNetRefHandle_u_0 *)param_1->TraceCollector;
            }
            local_1e0.Value._0_4_ = 0xffffffff;
            if (pFVar21 != (FNetRefHandle_u_0 *)0x0) {
              uVar12 = FNetTrace::BeginPacketContentEvent
                                 ((FNetTraceCollector *)&pFVar21->_s_0,NameId,
                                  this_00->BufferBitPosition);
              local_1e0.Value._0_4_ = uVar12;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                QueuedBatch = CreatePersistentNetDebugName(L"QueuedBatch",0xb);
                _Init_thread_footer(&::_TSS0);
              }
              uVar12 = FNetTrace::TraceName(QueuedBatch);
              pFVar25 = (FNetRefHandle_u_0 *)pFVar21[0x223].Value;
              if ((FNetRefHandle_u_0 *)pFVar21[0x223].Value == (FNetRefHandle_u_0 *)0x0) {
                pFVar25 = pFVar21 + 0x23;
              }
              *(uint *)(pFVar25 + ((ulonglong)local_1e0 & 0xffffffff) * 2) = uVar12;
            }
            local_1c0.Value._0_4_ = *(undefined4 *)(pFVar16 + 0x11);
            uVar12 = (this_00->BufferBitStartOffset - this_00->BufferBitPosition) + local_1d8;
            local_1c0.Value._4_4_ = local_1d0 << 0x1e | uVar12 & 0x3fffffff;
            local_1b8 = this->StreamDebugFeatures;
            Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,uVar12 + 0x1f >> 5,(ForElementType<unsigned_int> *)&pFVar16->_s_0,
                       (int *)&pFVar16[0x11].Value,(int *)((longlong)pFVar16 + 0x8c));
            pFVar25 = pFVar16;
            if ((FNetRefHandle_u_0 *)pFVar16[0x10].Value != (FNetRefHandle_u_0 *)0x0) {
              pFVar25 = (FNetRefHandle_u_0 *)pFVar16[0x10].Value;
            }
            FNetBitStreamReader::ReadBitStream
                      (this_00,(uint *)((longlong)pFVar25 +
                                       (ulonglong)(uint)local_1c0.Value._0_4_ * 4),
                       local_1c0.Value._4_4_ & 0x3fffffff);
            if (((param_1->ErrorContext).Error != (FName)0x0) ||
               (bVar7 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar7)) {
              if (1 < (byte)LogIris._0_1_) {
                FNetSerializationContext::PrintReadJournal(param_1,&local_d0);
                FNetRefHandle::ToString
                          ((FNetRefHandle *)&local_1f0._s_0,(FString *)&local_e0[0]._s_0);
                Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u_FReplicationRea_150baa878,
                           (FLogCategoryBase *)&LogIris);
                if ((void *)local_e0[0].Value != (void *)0x0) {
                  FMemory::Free((void *)local_e0[0]);
                }
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
              }
              if (local_1e0._0_4_ != 0xffffffff) {
                FNetTrace::EndPacketContentEvent
                          ((FNetTraceCollector *)&pFVar21->_s_0,local_1e0._0_4_,
                           this_00->BufferBitPosition);
              }
              uVar12 = (uint)local_1a8;
              pFVar21 = local_1c8;
joined_r0x0001442d8aad:
              pFVar25 = (FNetRefHandle_u_0 *)0x0;
              if (uVar12 != 0xffffffff) {
                FNetTrace::EndPacketContentEvent
                          ((FNetTraceCollector *)&pFVar21->_s_0,uVar12,this_00->BufferBitPosition);
                pFVar25 = pFVar26;
              }
            }
            else {
              pFVar25 = pFVar16 + 0x12;
              pFVar20 = (FNetRefHandle_u_0 *)pFVar16[0x18].Value;
              pFVar17 = pFVar20;
              if (pFVar20 == (FNetRefHandle_u_0 *)0x0) {
                pFVar17 = pFVar25;
              }
              if (pFVar17 <= &local_1c0) {
                if (pFVar20 == (FNetRefHandle_u_0 *)0x0) {
                  pFVar20 = pFVar25;
                }
                if ((&local_1c0 <
                     (FNetRefHandle_u_0 *)
                     ((longlong)pFVar20 + (longlong)*(int *)((longlong)pFVar16 + 0xcc) * 0xc)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar12 = (*pcVar5)();
                  return uVar12;
                }
              }
              iVar13 = *(int *)(pFVar16 + 0x19);
              if (iVar13 == *(int *)((longlong)pFVar16 + 0xcc)) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FQueuedDataChunk>_>
                                   (0x40c,(ForElementType<UE::Net::Private::FQueuedDataChunk> *)
                                          &pFVar25->_s_0,(int *)((longlong)pFVar16 + 0xcc));
              }
              *(int *)(pFVar16 + 0x19) = iVar13 + 1;
              if ((FNetRefHandle_u_0 *)pFVar16[0x18].Value != (FNetRefHandle_u_0 *)0x0) {
                pFVar25 = (FNetRefHandle_u_0 *)pFVar16[0x18].Value;
              }
              *(ulonglong *)((longlong)pFVar25 + (longlong)iVar13 * 0xc) =
                   CONCAT44(local_1c0.Value._4_4_,local_1c0.Value._0_4_);
              *(EReplicationDataStreamDebugFeatures *)
               ((longlong)pFVar25 + (longlong)iVar13 * 0xc + 8) = local_1b8;
              if (local_1e0._0_4_ != 0xffffffff) {
                FNetTrace::EndPacketContentEvent
                          ((FNetTraceCollector *)&pFVar21->_s_0,local_1e0._0_4_,
                           this_00->BufferBitPosition);
              }
              if ((uint)local_1a8 != 0xffffffff) {
                FNetTrace::EndPacketContentEvent
                          ((FNetTraceCollector *)&local_1c8->_s_0,(uint)local_1a8,
                           this_00->BufferBitPosition);
              }
LAB_1442d9110:
              if (this_00->BufferBitPosition - this_00->BufferBitStartOffset == local_1d8) {
                FNetBitStreamReader::Seek(this_00,local_1d4);
                pFVar25 = (FNetRefHandle_u_0 *)(ulonglong)uVar9;
              }
              else {
                bVar7 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<4393424413328934090>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                                   ,0x4ca,"Reader.GetPosBits() == BatchEndOrStartOfExportsPos");
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  uVar12 = (*pcVar5)();
                  return uVar12;
                }
                if (1 < (byte)LogIris._0_1_) {
                  FNetSerializationContext::PrintReadJournal(param_1,(FString *)&local_b0[0]._s_0);
                  FNetRefHandle::ToString((FNetRefHandle *)&local_1f0._s_0,&local_c0);
                  Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                  }
                  if ((void *)local_b0[0].Value != (void *)0x0) {
                    FMemory::Free((void *)local_b0[0]);
                  }
                }
                FVar23 = GNetError_BitStreamOverflow;
                FNetSerializationContext::SetBitStreamOverflow(param_1);
                FNetErrorContext::SetError(&param_1->ErrorContext,FVar23);
                pFVar25 = pFVar26;
              }
            }
          }
        }
        else {
          uVar10 = this_00->BufferBitPosition;
          uVar11 = this_00->BufferBitStartOffset;
          FNetBitStreamReader::Seek(this_00,local_1d8);
          FObjectReferenceCache::ReadExports
                    (this->ObjectReferenceCache,(FNetRefHandle *)&local_1f0._s_0,param_1,
                     &this->TempMustBeMappedReferences,local_1f7);
          if (((param_1->ErrorContext).Error == (FName)0x0) &&
             (bVar7 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar7)) {
            local_1d4 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
            FNetBitStreamReader::Seek(this_00,uVar10 - uVar11);
            goto LAB_1442d8860;
          }
          if (1 < (byte)LogIris._0_1_) {
            FNetSerializationContext::PrintReadJournal(param_1,&local_120);
            FNetRefHandle::ToString((FNetRefHandle *)&local_1f0._s_0,&local_130);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
          }
        }
        uVar9 = (uint)pFVar25;
        if (local_58 != (FNetRefHandle_u_0 *)0x0) {
          FMemory::Free(local_58);
        }
        goto LAB_1442d94f2;
      }
    }
  }
  else {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar23);
    FVar23 = GNetError_BitStreamError;
    if (1 < (byte)LogIris._0_1_) {
      FNetSerializationContext::PrintReadJournal(param_1,(FString *)(local_158 + 0x18));
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      FVar23 = GNetError_BitStreamError;
      if ((void *)local_158._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._24_8_);
        FVar23 = GNetError_BitStreamError;
      }
    }
  }
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar23);
LAB_1442d94f2:
  if (local_1b0 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent
              ((FNetTraceCollector *)&local_198->_s_0,local_1b0,this_00->BufferBitPosition);
  }
  return uVar9;
}

// ReadObjects @ 1442da5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::ReadObjects
          (FReplicationReader *this,FNetSerializationContext *param_1,uint param_2,uint param_3)

{
  FNetBitStreamReader *pFVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  atomic<unsigned_char> *paVar5;
  int iVar6;
  bool bVar7;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2620,"ReplicationReader_ReadObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0xa3c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2620);
  }
  pFVar1 = param_1->BitStreamReader;
  while ((((param_2 != 0 && ((param_1->ErrorContext).Error == (FName)0x0)) &&
          (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) &&
         ((bGracefullyHandleReachingEndOfBitstream == false ||
          ((pFVar1->OverflowBitCount == 0 &&
           (pFVar1->BufferBitCapacity != pFVar1->BufferBitPosition))))))) {
    ReadObjectBatch(this,param_1,param_3);
    param_2 = param_2 - 1;
  }
  if ((1 < (byte)LogIris._0_1_) &&
     (((param_1->ErrorContext).Error != (FName)0x0 ||
      (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)))) {
    FNetSerializationContext::PrintReadJournal(param_1,&local_48);
    local_res10 = (param_1->ErrorContext).Error;
    ::FName::ToString(&local_res10,&local_58);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (((param_1->ErrorContext).Error != (FName)0x0) ||
     (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)) {
    pcVar4 = "!Context.HasErrorOrOverflow()";
    iVar6 = 0xa49;
    paVar5 = &bGEnsureHasExecuted<4393424413328935497>;
  }
  else {
    if (bGracefullyHandleReachingEndOfBitstream == false) goto LAB_1442da84f;
    if ((byte)LogIris._0_1_ < 2) {
      if (param_2 == 0) goto LAB_1442da84f;
    }
    else {
      if (param_2 == 0) goto LAB_1442da84f;
      FNetSerializationContext::PrintReadJournal(param_1,&local_38);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pcVar4 = "ObjectBatchCountToRead == 0";
    iVar6 = 0xa4f;
    paVar5 = &bGEnsureHasExecuted<4393424413328935503>;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (paVar5,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                     ,iVar6,pcVar4);
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1442da84f:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReadObjectsAndSubObjectsPendingDestroy @ 1442da890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationReader::ReadObjectsAndSubObjectsPendingDestroy
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  FNetBitStreamReader *this_00;
  undefined1 *puVar4;
  longlong lVar5;
  FObjectsToDispatchArray *this_01;
  FDispatchObjectInfo *pFVar6;
  FDispatchObjectInfo *pFVar7;
  FNetRefHandle_u_0 FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FNetRefHandle FVar16;
  ForElementType<FNetTracePacketContentEvent> FVar17;
  undefined8 *puVar18;
  ForElementType<FNetTracePacketContentEvent> FVar19;
  undefined1 *puVar20;
  FNetRefHandle_u_0 FVar21;
  ulonglong uVar22;
  FNetTraceCollector *this_02;
  FNetTraceCollector *pFVar23;
  uint local_res18;
  uint local_res20;
  FNetRefHandle_u_0 local_78;
  FNetTraceCollector *local_70;
  FName local_60;
  FNetRefHandle_u_0 local_50;
  uint uStack_48;
  undefined4 uStack_44;
  wchar_t *local_40;
  
  this_00 = param_1->BitStreamReader;
  pFVar23 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar23 = param_1->TraceCollector;
  }
  local_res20 = 0xffffffff;
  local_70 = pFVar23;
  if (pFVar23 != (FNetTraceCollector *)0x0) {
    local_res20 = FNetTrace::BeginPacketContentEvent(pFVar23,NameId,this_00->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ObjectsAndSubObjectsPendingDestroy =
           CreatePersistentNetDebugName(L"ObjectsAndSubObjectsPendingDestroy",0x22);
      _Init_thread_footer(&::_TSS0);
    }
    uVar10 = FNetTrace::TraceName(ObjectsAndSubObjectsPendingDestroy);
    FVar19 = (pFVar23->Events).AllocatorInstance.SecondaryData;
    if (FVar19 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar19 = (ForElementType<FNetTracePacketContentEvent>)&pFVar23->Events;
    }
    *(uint *)((longlong)FVar19 + (ulonglong)local_res20 * 0x10) = uVar10;
  }
  uVar11 = FNetBitStreamReader::ReadBits(this_00,0x10);
  uVar10 = 0;
  if ((((param_1->ErrorContext).Error == (FName)0x0) &&
      (bVar9 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar9)) &&
     (local_res18 = 0, uVar10 = uVar11, uVar11 != 0)) {
    do {
      uVar12 = 0xffffffff;
      this_02 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        this_02 = param_1->TraceCollector;
      }
      if (this_02 != (FNetTraceCollector *)0x0) {
        uVar12 = FNetTrace::BeginPacketContentEvent(this_02,Object,this_00->BufferBitPosition);
        FVar19 = (this_02->Events).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FNetTracePacketContentEvent>)&this_02->Events;
        if (FVar19 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar17 = FVar19;
        }
        *(undefined8 *)((longlong)FVar17 + (ulonglong)uVar12 * 0x10) = 0;
      }
      ReadNetRefHandleId(this,(FNetSerializationContext *)&local_78._s_0,
                         (FNetBitStreamReader *)param_1);
      FVar21 = local_78;
      uVar13 = FNetBitStreamReader::ReadBits(this_00,1);
      if ((uVar13 & 1) != 0) {
        FVar16 = ReadNetRefHandleId(this,(FNetSerializationContext *)&stack0xffffffffffffff98,
                                    (FNetBitStreamReader *)param_1);
                    /* WARNING: Load size is inaccurate */
        FVar21._s_0 = *FVar16.field0_0x0;
      }
      uVar13 = FNetBitStreamReader::ReadBits(this_00,1);
      if (((param_1->ErrorContext).Error != (FName)0x0) ||
         (bVar9 = FNetSerializationContext::IsBitStreamOverflown(param_1), FVar8 = local_78, bVar9))
      {
        pFVar23 = local_70;
        if (uVar12 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(this_02,uVar12,this_00->BufferBitPosition);
          pFVar23 = local_70;
        }
        break;
      }
      uVar22 = FVar21.Value & 0x3fffffffffffff;
      if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 !=
          *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
        puVar4 = *(undefined1 **)&(this->PendingBatchHolder).PendingBatches.field_0x40;
        puVar20 = &(this->PendingBatchHolder).PendingBatches.field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar20 = puVar4;
        }
        iVar14 = *(int *)(puVar20 +
                         ((ulonglong)
                          (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x48 - 1) &
                         (uVar22 >> 0x20) * 0x17 + uVar22) * 4);
        if (iVar14 != -1) {
          lVar5 = *(longlong *)&(this->PendingBatchHolder).PendingBatches;
          do {
            lVar2 = lVar5 + (longlong)iVar14 * 0x18;
            if ((*(ulonglong *)(lVar5 + (longlong)iVar14 * 0x18) & 0x3fffffffffffff) == uVar22) {
              puVar18 = (undefined8 *)(lVar2 + 8);
              if (lVar2 == 0) {
                puVar18 = (undefined8 *)0x0;
              }
              if ((puVar18 != (undefined8 *)0x0) &&
                 ((FPendingBatchData *)*puVar18 != (FPendingBatchData *)0x0)) {
                EnqueueEndReplication
                          (this,(FPendingBatchData *)*puVar18,(bool)((byte)uVar13 & 1),false,
                           (FNetRefHandle)local_78._s_0);
                if (uVar12 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent(this_02,uVar12,this_00->BufferBitPosition);
                }
                goto LAB_1442dac97;
              }
              break;
            }
            iVar14 = *(int *)(lVar2 + 0x10);
          } while (iVar14 != -1);
        }
      }
      uVar15 = FNetRefHandleManager::GetInternalIndex
                         (this->NetRefHandleManager,(FNetRefHandle)local_78._s_0);
      if (uVar15 == 0) {
        if (5 < (byte)LogIris._0_1_) {
          FNetRefHandle::ToString
                    ((FNetRefHandle *)&local_78._s_0,(FString *)&stack0xffffffffffffffa0);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_60 != (FName)0x0) {
            FMemory::Free((void *)local_60);
          }
        }
      }
      else {
        if (uVar12 != 0xffffffff) {
          FVar19 = (this_02->Events).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<FNetTracePacketContentEvent>)&this_02->Events;
          if (FVar19 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar17 = FVar19;
          }
          *(ulong64 *)((longlong)FVar17 + (ulonglong)uVar12 * 0x10) = FVar8.Value & 0x3fffffffffffff
          ;
          FNetTraceCollector::AddReferencedObjectId(this_02,FVar8.Value & 0x3fffffffffffff);
        }
        if (bDeferEndReplication == false) {
          EndReplication(this,uVar15,false,(bool)((byte)uVar13 & 1));
        }
        else {
          this_01 = this->ObjectsToDispatchArray;
          FObjectsToDispatchArray::Grow(this_01,1,&this->TempLinearAllocator);
          local_50.Value = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          local_40 = (wchar_t *)0x0;
          uVar3 = this_01->ObjectsToDispatchCount;
          pFVar6 = this_01->ObjectsToDispatch;
          pFVar7 = pFVar6 + uVar3;
          *(undefined8 *)pFVar7 = 0;
          (pFVar7->ChangeMaskOrPointer).ChangeMaskOrPointer = 0;
          *(undefined8 *)&pFVar6[uVar3].field_0x10 = 0;
          uVar3 = this_01->ObjectsToDispatchCount;
          pFVar7 = this_01->ObjectsToDispatch;
          pFVar7[uVar3].InternalIndex = uVar15;
          *(uint *)&pFVar7[uVar3].field_0x10 =
               (uVar13 & 1) << 3 | *(uint *)&pFVar7[uVar3].field_0x10 & 0xfffffee0 | 0x20;
          puVar1 = &this->ObjectsToDispatchArray->ObjectsToDispatchCount;
          *puVar1 = *puVar1 + 1;
        }
      }
      if (uVar12 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(this_02,uVar12,this_00->BufferBitPosition);
      }
LAB_1442dac97:
      local_res18 = local_res18 + 1;
      pFVar23 = local_70;
    } while (local_res18 < uVar11);
  }
  if (local_res20 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar23,local_res20,this_00->BufferBitPosition);
  }
  return uVar10;
}

// ReadObjectsInBatch @ 1442dad70

uint __thiscall
UE::Net::Private::FReplicationReader::ReadObjectsInBatch
          (FReplicationReader *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          bool param_3,uint param_4)

{
  FNetBitStreamReader *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((this->StreamDebugFeatures & BatchSizePerObject) != None) {
    uVar5 = ReadObjectsInBatchWithSizes(this,param_1,param_2,param_3,param_4);
    return uVar5;
  }
  uVar7 = 0;
  pFVar1 = param_1->BitStreamReader;
  uVar5 = uVar7;
  if (param_3) {
    ReadObjectInBatch(this,param_1,param_2,false);
    if ((param_1->ErrorContext).Error != (FName)0x0) {
      return 0;
    }
    bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1);
    if (bVar4) {
      return 0;
    }
    uVar5 = 1;
  }
  uVar6 = pFVar1->BufferBitPosition - pFVar1->BufferBitStartOffset;
  if (param_4 < uVar6) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4393424413328933743>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                       ,0x36f,"Reader.GetPosBits() <= BatchEndBitPosition");
    FVar3 = GNetError_BitStreamOverflow;
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar3);
    uVar8 = uVar7;
  }
  else {
    while (((uVar8 = uVar5, uVar6 < param_4 &&
            (ReadObjectInBatch(this,param_1,param_2,true), uVar8 = uVar7,
            (param_1->ErrorContext).Error == (FName)0x0)) &&
           (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar4))) {
      uVar5 = uVar5 + 1;
      uVar6 = pFVar1->BufferBitPosition - pFVar1->BufferBitStartOffset;
    }
  }
  return uVar8;
}

// ReadObjectsInBatchWithSizes @ 1442daeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationReader::ReadObjectsInBatchWithSizes
          (FReplicationReader *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          bool param_3,uint param_4)

{
  ForElementType<FNetTracePacketContentEvent> FVar1;
  FNetRefHandle_u_0 FVar2;
  FNetRefHandle_u_0 FVar3;
  FNetRefHandle_u_0 FVar4;
  FNetRefHandle_u_0 FVar5;
  FNetRefHandle_u_0 FVar6;
  FName FVar7;
  FNetRefHandle_u_0 *pFVar8;
  FNetSerializationContext *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FNetBitStreamReader *pFVar14;
  FNetRefHandle_u_0 *pFVar15;
  FNetRefHandle_u_0 *pFVar16;
  undefined8 *puVar17;
  FNetSerializationContext *pFVar18;
  FNetRefHandle_u_0 *pFVar19;
  ForElementType<FNetTracePacketContentEvent> FVar20;
  FNetTraceCollector *pFVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_7c8 [32];
  FNetBitStreamReader local_7a8;
  FNetBitStreamReader local_788;
  FString local_768;
  FString local_758;
  FNetBitStreamReader local_748;
  FNetRefHandle_u_0 local_728 [99];
  FNetBitStreamReader *local_410;
  undefined8 local_408;
  FNetRefHandle_u_0 local_3b8;
  FName FStack_3b0;
  undefined8 auStack_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  pFVar14 = param_1->BitStreamReader;
  local_758.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  FNetBitStreamReader::CreateSubstream
            (pFVar14,&local_7a8,
             (pFVar14->BufferBitStartOffset - pFVar14->BufferBitPosition) + param_4);
  uVar22 = 0;
  puVar17 = auStack_3a0;
  local_3b8.Value = 0;
  lVar13 = 0x20;
  FStack_3b0.ComparisonIndex.Value = 0;
  FStack_3b0.Number = 0;
  do {
    *puVar17 = 0;
    puVar17 = puVar17 + 3;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_58 = local_58 & 0xfffffffc;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  FNetBitStreamReader::FNetBitStreamReader(&local_788);
  bVar23 = !param_3;
  local_768.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    if ((local_7a8.OverflowBitCount != 0) ||
       (local_7a8.BufferBitCapacity == local_7a8.BufferBitPosition)) goto LAB_1442db3b8;
    uVar10 = 0xffffffff;
    pFVar21 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar21 = param_1->TraceCollector;
    }
    if (pFVar21 != (FNetTraceCollector *)0x0) {
      uVar10 = FNetTrace::BeginPacketContentEvent(pFVar21,NameId,local_7a8.BufferBitPosition);
      if ((*(int *)(*(longlong *)local_768.Data.AllocatorInstance.Data + 0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        BatchSize = CreatePersistentNetDebugName(L"BatchSize",9);
        _Init_thread_footer(&::_TSS0);
      }
      uVar11 = FNetTrace::TraceName(BatchSize);
      FVar1 = (pFVar21->Events).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar21->Events;
      if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar20 = FVar1;
      }
      *(uint *)((longlong)FVar20 + (ulonglong)uVar10 * 0x10) = uVar11;
    }
    uVar11 = FNetBitStreamReader::ReadBits
                       (&local_7a8,(this->Parameters).NumBitsUsedForHugeObjectBatchSize);
    pFVar14 = FNetBitStreamReader::CreateSubstream(&local_7a8,&local_748,uVar11);
    local_788.Buffer = pFVar14->Buffer;
    local_788.BufferBitCapacity = pFVar14->BufferBitCapacity;
    local_788.BufferBitStartOffset = pFVar14->BufferBitStartOffset;
    local_788.BufferBitPosition = pFVar14->BufferBitPosition;
    local_788.PendingWord = pFVar14->PendingWord;
    local_788.OverflowBitCount = pFVar14->OverflowBitCount;
    local_788._28_4_ = *(undefined4 *)&pFVar14->field_0x1c;
    FNetBitStreamReader::~FNetBitStreamReader(&local_748);
    uVar12 = local_788.BufferBitCapacity - local_788.BufferBitPosition;
    if (local_788.OverflowBitCount != 0) {
      uVar12 = 0;
    }
    if (uVar12 != uVar11) break;
    if (uVar10 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar21,uVar10,local_7a8.BufferBitPosition);
    }
    this = (FReplicationReader *)local_758.Data.AllocatorInstance.Data;
    lVar13 = 6;
    pFVar8 = local_728;
    pFVar9 = param_1;
    do {
      pFVar18 = pFVar9;
      pFVar15 = pFVar8;
      FVar2 = *(FNetRefHandle_u_0 *)&(pFVar18->ErrorContext).Error;
      FVar3 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[0].Name;
      FVar4 = (pFVar18->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
      pFVar9 = (FNetSerializationContext *)&(pFVar18->ReadJournal).Entries[4].BitOffset;
      *pFVar15 = (pFVar18->ErrorContext).ObjectHandle.field0_0x0;
      pFVar15[1] = FVar2;
      FVar2 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[0].BitOffset;
      FVar5 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[1].Name;
      pFVar15[2] = FVar3;
      pFVar15[3] = FVar4;
      FVar3 = (pFVar18->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
      FVar4 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[1].BitOffset;
      pFVar15[4] = FVar2;
      pFVar15[5] = FVar5;
      FVar2 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[2].Name;
      FVar5 = (pFVar18->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
      pFVar15[6] = FVar3;
      pFVar15[7] = FVar4;
      FVar3 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[2].BitOffset;
      FVar4 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[3].Name;
      pFVar15[8] = FVar2;
      pFVar15[9] = FVar5;
      FVar2 = (pFVar18->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
      FVar5 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[3].BitOffset;
      pFVar15[10] = FVar3;
      pFVar15[0xb] = FVar4;
      FVar3 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[4].Name;
      FVar4 = (pFVar18->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
      pFVar15[0xc] = FVar2;
      pFVar15[0xd] = FVar5;
      pFVar15[0xe] = FVar3;
      pFVar15[0xf] = FVar4;
      lVar13 = lVar13 + -1;
      pFVar8 = pFVar15 + 0x10;
    } while (lVar13 != 0);
    FVar2 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[5].Name;
    lVar13 = 6;
    FVar3 = (pFVar18->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
    FVar4 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[5].BitOffset;
    pFVar15[0x10] = *(FNetRefHandle_u_0 *)pFVar9;
    pFVar15[0x11] = FVar2;
    FVar2 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[6].Name;
    FVar5 = (pFVar18->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
    pFVar15[0x12] = FVar3;
    pFVar15[0x13] = FVar4;
    FVar3 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[6].BitOffset;
    FVar4 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[7].Name;
    pFVar15[0x14] = FVar2;
    pFVar15[0x15] = FVar5;
    FVar5 = (pFVar18->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
    FVar6 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[7].BitOffset;
    pFVar15[0x16] = FVar3;
    pFVar15[0x17] = FVar4;
    FVar3 = (FNetRefHandle_u_0)(pFVar18->ReadJournal).Entries[8].Name;
    FVar4 = (pFVar18->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
    FVar2 = *(FNetRefHandle_u_0 *)&(pFVar18->ReadJournal).Entries[8].BitOffset;
    pFVar15[0x18] = FVar5;
    pFVar15[0x19] = FVar6;
    pFVar15[0x1a] = FVar3;
    pFVar15[0x1b] = FVar4;
    pFVar15[0x1c] = FVar2;
    local_410 = &local_788;
    local_408 = 0;
    pFVar8 = local_728;
    pFVar15 = &local_3b8;
    do {
      pFVar19 = pFVar15;
      pFVar16 = pFVar8;
      FVar2 = pFVar16[1];
      FVar3 = pFVar16[2];
      FVar4 = pFVar16[3];
      *pFVar19 = *pFVar16;
      pFVar19[1] = FVar2;
      FVar2 = pFVar16[4];
      FVar5 = pFVar16[5];
      pFVar19[2] = FVar3;
      pFVar19[3] = FVar4;
      FVar3 = pFVar16[6];
      FVar4 = pFVar16[7];
      pFVar19[4] = FVar2;
      pFVar19[5] = FVar5;
      FVar2 = pFVar16[8];
      FVar5 = pFVar16[9];
      pFVar19[6] = FVar3;
      pFVar19[7] = FVar4;
      FVar3 = pFVar16[10];
      FVar4 = pFVar16[0xb];
      pFVar19[8] = FVar2;
      pFVar19[9] = FVar5;
      FVar2 = pFVar16[0xc];
      FVar5 = pFVar16[0xd];
      pFVar19[10] = FVar3;
      pFVar19[0xb] = FVar4;
      FVar3 = pFVar16[0xe];
      FVar4 = pFVar16[0xf];
      pFVar19[0xc] = FVar2;
      pFVar19[0xd] = FVar5;
      pFVar19[0xe] = FVar3;
      pFVar19[0xf] = FVar4;
      lVar13 = lVar13 + -1;
      pFVar8 = pFVar16 + 0x10;
      pFVar15 = pFVar19 + 0x10;
    } while (lVar13 != 0);
    FVar2 = pFVar16[0x11];
    FVar3 = pFVar16[0x12];
    FVar4 = pFVar16[0x13];
    pFVar19[0x10] = pFVar16[0x10];
    pFVar19[0x11] = FVar2;
    FVar2 = pFVar16[0x14];
    FVar5 = pFVar16[0x15];
    pFVar19[0x12] = FVar3;
    pFVar19[0x13] = FVar4;
    FVar3 = pFVar16[0x16];
    FVar4 = pFVar16[0x17];
    pFVar19[0x14] = FVar2;
    pFVar19[0x15] = FVar5;
    FVar5 = pFVar16[0x18];
    FVar6 = pFVar16[0x19];
    pFVar19[0x16] = FVar3;
    pFVar19[0x17] = FVar4;
    FVar3 = pFVar16[0x1a];
    FVar4 = pFVar16[0x1b];
    FVar2 = pFVar16[0x1c];
    pFVar19[0x18] = FVar5;
    pFVar19[0x19] = FVar6;
    pFVar19[0x1a] = FVar3;
    pFVar19[0x1b] = FVar4;
    pFVar19[0x1c] = FVar2;
    ReadObjectInBatch((FReplicationReader *)local_758.Data.AllocatorInstance.Data,
                      (FNetSerializationContext *)&local_3b8._s_0,param_2,bVar23);
    if ((FStack_3b0 != (FName)0x0) ||
       (bVar23 = FNetSerializationContext::IsBitStreamOverflown
                           ((FNetSerializationContext *)&local_3b8._s_0), bVar23)) {
      FNetBitStreamReader::DiscardSubstream(&local_7a8,&local_788);
      FNetBitStreamReader::DiscardSubstream(param_1->BitStreamReader,&local_7a8);
      FVar7 = FStack_3b0;
      if (local_788.OverflowBitCount != 0) {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
      }
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
LAB_1442db3b8:
      uVar10 = 0;
      if (((param_1->ErrorContext).Error == (FName)0x0) &&
         (bVar23 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar23)) {
        FNetBitStreamReader::CommitSubstream(param_1->BitStreamReader,&local_7a8);
        uVar10 = uVar22;
      }
      FNetBitStreamReader::~FNetBitStreamReader(&local_788);
      FNetBitStreamReader::~FNetBitStreamReader(&local_7a8);
      return uVar10;
    }
    if (local_788.OverflowBitCount == 0) {
      if (local_788.BufferBitCapacity != local_788.BufferBitPosition) {
        FNetBitStreamReader::DiscardSubstream(&local_7a8,&local_788);
        FNetBitStreamReader::DiscardSubstream(param_1->BitStreamReader,&local_7a8);
        FVar7 = GNetError_BitStreamError;
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
        if (1 < (byte)LogIris._0_1_) {
          FNetSerializationContext::PrintReadJournal
                    ((FNetSerializationContext *)&local_3b8._s_0,&local_768);
          FNetRefHandle::ToString((FNetRefHandle *)&local_3b8._s_0,&local_758);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if ((FReplicationReader *)local_758.Data.AllocatorInstance.Data !=
              (FReplicationReader *)0x0) {
            FMemory::Free(local_758.Data.AllocatorInstance.Data);
          }
          if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_768.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1442db3b8;
      }
    }
    FNetBitStreamReader::CommitSubstream(&local_7a8,&local_788);
    uVar22 = uVar22 + 1;
    bVar23 = true;
  }
  FNetBitStreamReader::DiscardSubstream(&local_7a8,&local_788);
  FNetBitStreamReader::DiscardSubstream(param_1->BitStreamReader,&local_7a8);
  FVar7 = GNetError_BitStreamError;
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
  if (uVar10 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar21,uVar10,local_7a8.BufferBitPosition);
  }
  goto LAB_1442db3b8;
}

// ReadObjectsInBatchWithoutSizes @ 1442db480

uint __thiscall
UE::Net::Private::FReplicationReader::ReadObjectsInBatchWithoutSizes
          (FReplicationReader *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          bool param_3,uint param_4)

{
  FNetBitStreamReader *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = param_1->BitStreamReader;
  uVar6 = 0;
  if (param_3) {
    ReadObjectInBatch(this,param_1,param_2,false);
    if ((param_1->ErrorContext).Error != (FName)0x0) {
      return 0;
    }
    bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1);
    if (bVar4) {
      return 0;
    }
    uVar6 = 1;
  }
  uVar5 = pFVar1->BufferBitPosition - pFVar1->BufferBitStartOffset;
  if (param_4 < uVar5) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4393424413328933743>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                       ,0x36f,"Reader.GetPosBits() <= BatchEndBitPosition");
    FVar3 = GNetError_BitStreamOverflow;
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar3);
  }
  else {
    while( true ) {
      if (param_4 <= uVar5) {
        return uVar6;
      }
      ReadObjectInBatch(this,param_1,param_2,true);
      if (((param_1->ErrorContext).Error != (FName)0x0) ||
         (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar4)) break;
      uVar6 = uVar6 + 1;
      uVar5 = pFVar1->BufferBitPosition - pFVar1->BufferBitStartOffset;
    }
  }
  return 0;
}

// ReadObjectsPendingDestroy @ 1442db590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationReader::ReadObjectsPendingDestroy
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FObjectsToDispatchArray *this_00;
  FDispatchObjectInfo *pFVar6;
  FDispatchObjectInfo *pFVar7;
  FNetRefHandle_u_0 FVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FNetTraceCollector *pFVar16;
  ForElementType<FNetTracePacketContentEvent> FVar17;
  ForElementType<FNetTracePacketContentEvent> FVar18;
  uint *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  FNetTraceCollector *this_01;
  FNetBitStreamReader *this_02;
  uint uStackX_20;
  uint uStack_98;
  FNetRefHandle_u_0 FStack_90;
  FNetBitStreamReader *pFStack_88;
  FNetTraceCollector *pFStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  FNetRefHandle_u_0 FStack_60;
  TArrayView<unsigned_int_const_,int> TStack_58;
  FNetRefHandle_u_0 aFStack_48 [2];
  
  this_02 = param_1->BitStreamReader;
  pFVar16 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar16 = param_1->TraceCollector;
  }
  uStack_98 = 0xffffffff;
  pFStack_88 = this_02;
  pFStack_80 = pFVar16;
  if (pFVar16 != (FNetTraceCollector *)0x0) {
    uStack_98 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,this_02->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      RootObjectsPendingDestroy = CreatePersistentNetDebugName(L"RootObjectsPendingDestroy",0x19);
      _Init_thread_footer(&::_TSS0);
    }
    uVar11 = FNetTrace::TraceName(RootObjectsPendingDestroy);
    FVar18 = (pFVar16->Events).AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar18 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
    }
    *(uint *)((longlong)FVar18 + (ulonglong)uStack_98 * 0x10) = uVar11;
  }
  uVar12 = FNetBitStreamReader::ReadBits(this_02,0x10);
  uVar11 = 0;
  if ((((param_1->ErrorContext).Error == (FName)0x0) &&
      (bVar9 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar9)) &&
     (uStackX_20 = 0, uVar11 = uVar12, uVar12 != 0)) {
    do {
      uVar13 = 0xffffffff;
      this_01 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        this_01 = param_1->TraceCollector;
      }
      if (this_01 != (FNetTraceCollector *)0x0) {
        uVar13 = FNetTrace::BeginPacketContentEvent(this_01,Object,this_02->BufferBitPosition);
        FVar18 = (this_01->Events).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FNetTracePacketContentEvent>)&this_01->Events;
        if (FVar18 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar17 = FVar18;
        }
        *(undefined8 *)((longlong)FVar17 + (ulonglong)uVar13 * 0x10) = 0;
      }
      ReadNetRefHandleId(this,(FNetSerializationContext *)&FStack_90._s_0,
                         (FNetBitStreamReader *)param_1);
      uVar14 = FNetBitStreamReader::ReadBits(this_02,1);
      bVar9 = (bool)((byte)uVar14 & 1);
      if (((param_1->ErrorContext).Error != (FName)0x0) ||
         (bVar10 = FNetSerializationContext::IsBitStreamOverflown(param_1), FVar8 = FStack_90,
         bVar10)) {
        pFVar16 = pFStack_80;
        if (uVar13 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(this_01,uVar13,this_02->BufferBitPosition);
          pFVar16 = pFStack_80;
        }
        break;
      }
      uVar21 = FStack_90.Value & 0x3fffffffffffff;
      if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 !=
          *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
        puVar4 = *(undefined1 **)&(this->PendingBatchHolder).PendingBatches.field_0x40;
        puVar20 = &(this->PendingBatchHolder).PendingBatches.field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar20 = puVar4;
        }
        iVar15 = *(int *)(puVar20 +
                         ((uVar21 >> 0x20) * 0x17 + uVar21 &
                         (ulonglong)
                         (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x48 - 1)) * 4);
        if (iVar15 != -1) {
          lVar5 = *(longlong *)&(this->PendingBatchHolder).PendingBatches;
          do {
            lVar2 = lVar5 + (longlong)iVar15 * 0x18;
            if ((*(ulonglong *)(lVar5 + (longlong)iVar15 * 0x18) & 0x3fffffffffffff) == uVar21) {
              pFVar16 = (FNetTraceCollector *)(lVar2 + 8);
              if (lVar2 == 0) {
                pFVar16 = (FNetTraceCollector *)0x0;
              }
              if ((pFVar16 != (FNetTraceCollector *)0x0) &&
                 (*(FPendingBatchData **)pFVar16->NestingStack != (FPendingBatchData *)0x0)) {
                EnqueueEndReplication
                          (this,*(FPendingBatchData **)pFVar16->NestingStack,bVar9,true,
                           (FNetRefHandle)FStack_90._s_0);
                if (uVar13 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent(this_01,uVar13,this_02->BufferBitPosition);
                }
                goto LAB_1442db8ea;
              }
              break;
            }
            iVar15 = *(int *)(lVar2 + 0x10);
          } while (iVar15 != -1);
        }
      }
      uVar14 = FNetRefHandleManager::GetInternalIndex
                         (this->NetRefHandleManager,(FNetRefHandle)FStack_90._s_0);
      if (uVar14 == 0) {
        if (5 < (byte)LogIris._0_1_) {
          FNetRefHandle::ToString((FNetRefHandle *)&FStack_90._s_0,(FString *)&aFStack_48[0]._s_0);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if ((void *)aFStack_48[0].Value != (void *)0x0) {
            FMemory::Free((void *)aFStack_48[0]);
          }
        }
        TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::RemoveSwap
                  (&this->BrokenObjects,(FNetRefHandle *)&FStack_90._s_0,Default);
      }
      else {
        if (uVar13 != 0xffffffff) {
          FVar18 = (this_01->Events).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<FNetTracePacketContentEvent>)&this_01->Events;
          if (FVar18 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar17 = FVar18;
          }
          *(ulong64 *)((longlong)FVar17 + (ulonglong)uVar13 * 0x10) = FVar8.Value & 0x3fffffffffffff
          ;
          FNetTraceCollector::AddReferencedObjectId(this_01,FVar8.Value & 0x3fffffffffffff);
        }
        if (bDeferEndReplication == false) {
          EndReplication(this,uVar14,false,bVar9);
          FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&TStack_58,uVar14);
          puVar1 = TStack_58.DataPtr + TStack_58.ArrayNum;
          this_02 = pFStack_88;
          for (puVar19 = TStack_58.DataPtr; pFStack_88 = this_02, puVar19 != puVar1;
              puVar19 = puVar19 + 1) {
            uVar14 = *puVar19;
            FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                      (this->NetRefHandleManager,(uint)&FStack_60);
            if ((FStack_60.Value == 0) || ((FStack_60.Value & 1) != 0)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            EndReplication(this,uVar14,false,bVar9);
            this_02 = pFStack_88;
          }
        }
        else {
          this_00 = this->ObjectsToDispatchArray;
          FObjectsToDispatchArray::Grow(this_00,1,&this->TempLinearAllocator);
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          uVar3 = this_00->ObjectsToDispatchCount;
          pFVar6 = this_00->ObjectsToDispatch;
          pFVar7 = pFVar6 + uVar3;
          *(undefined8 *)pFVar7 = 0;
          (pFVar7->ChangeMaskOrPointer).ChangeMaskOrPointer = 0;
          *(undefined8 *)&pFVar6[uVar3].field_0x10 = 0;
          uVar3 = this_00->ObjectsToDispatchCount;
          pFVar7 = this_00->ObjectsToDispatch;
          pFVar7[uVar3].InternalIndex = uVar14;
          *(uint *)&pFVar7[uVar3].field_0x10 =
               (uint)bVar9 << 3 | *(uint *)&pFVar7[uVar3].field_0x10 & 0xfffffee0 | 0xa0;
          puVar1 = &this->ObjectsToDispatchArray->ObjectsToDispatchCount;
          *puVar1 = *puVar1 + 1;
          this_02 = pFStack_88;
        }
      }
      if (uVar13 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(this_01,uVar13,this_02->BufferBitPosition);
      }
LAB_1442db8ea:
      uStackX_20 = uStackX_20 + 1;
      pFVar16 = pFStack_80;
    } while (uStackX_20 < uVar12);
  }
  if (uStack_98 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar16,uStack_98,this_02->BufferBitPosition);
  }
  return uVar11;
}

// ReadRootObjectsPendingDestroy @ 1442db5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationReader::ReadRootObjectsPendingDestroy
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FObjectsToDispatchArray *this_00;
  FDispatchObjectInfo *pFVar6;
  FDispatchObjectInfo *pFVar7;
  FNetRefHandle_u_0 FVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FNetTraceCollector *pFVar16;
  ForElementType<FNetTracePacketContentEvent> FVar17;
  ForElementType<FNetTracePacketContentEvent> FVar18;
  uint *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  FNetTraceCollector *this_01;
  FNetBitStreamReader *this_02;
  uint local_res20;
  uint local_98;
  FNetRefHandle_u_0 local_90;
  FNetBitStreamReader *local_88;
  FNetTraceCollector *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  FNetRefHandle_u_0 local_60;
  TArrayView<unsigned_int_const_,int> local_58;
  FNetRefHandle_u_0 local_48 [2];
  
  this_02 = param_1->BitStreamReader;
  pFVar16 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar16 = param_1->TraceCollector;
  }
  local_98 = 0xffffffff;
  local_88 = this_02;
  local_80 = pFVar16;
  if (pFVar16 != (FNetTraceCollector *)0x0) {
    local_98 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,this_02->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      RootObjectsPendingDestroy = CreatePersistentNetDebugName(L"RootObjectsPendingDestroy",0x19);
      _Init_thread_footer(&::_TSS0);
    }
    uVar11 = FNetTrace::TraceName(RootObjectsPendingDestroy);
    FVar18 = (pFVar16->Events).AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar18 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
    }
    *(uint *)((longlong)FVar18 + (ulonglong)local_98 * 0x10) = uVar11;
  }
  uVar12 = FNetBitStreamReader::ReadBits(this_02,0x10);
  uVar11 = 0;
  if ((((param_1->ErrorContext).Error == (FName)0x0) &&
      (bVar9 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar9)) &&
     (local_res20 = 0, uVar11 = uVar12, uVar12 != 0)) {
    do {
      uVar13 = 0xffffffff;
      this_01 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        this_01 = param_1->TraceCollector;
      }
      if (this_01 != (FNetTraceCollector *)0x0) {
        uVar13 = FNetTrace::BeginPacketContentEvent(this_01,Object,this_02->BufferBitPosition);
        FVar18 = (this_01->Events).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FNetTracePacketContentEvent>)&this_01->Events;
        if (FVar18 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar17 = FVar18;
        }
        *(undefined8 *)((longlong)FVar17 + (ulonglong)uVar13 * 0x10) = 0;
      }
      ReadNetRefHandleId(this,(FNetSerializationContext *)&local_90._s_0,
                         (FNetBitStreamReader *)param_1);
      uVar14 = FNetBitStreamReader::ReadBits(this_02,1);
      bVar9 = (bool)((byte)uVar14 & 1);
      if (((param_1->ErrorContext).Error != (FName)0x0) ||
         (bVar10 = FNetSerializationContext::IsBitStreamOverflown(param_1), FVar8 = local_90, bVar10
         )) {
        pFVar16 = local_80;
        if (uVar13 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(this_01,uVar13,this_02->BufferBitPosition);
          pFVar16 = local_80;
        }
        break;
      }
      uVar21 = local_90.Value & 0x3fffffffffffff;
      if (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x8 !=
          *(int *)&(this->PendingBatchHolder).PendingBatches.field_0x34) {
        puVar4 = *(undefined1 **)&(this->PendingBatchHolder).PendingBatches.field_0x40;
        puVar20 = &(this->PendingBatchHolder).PendingBatches.field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar20 = puVar4;
        }
        iVar15 = *(int *)(puVar20 +
                         ((uVar21 >> 0x20) * 0x17 + uVar21 &
                         (ulonglong)
                         (*(int *)&(this->PendingBatchHolder).PendingBatches.field_0x48 - 1)) * 4);
        if (iVar15 != -1) {
          lVar5 = *(longlong *)&(this->PendingBatchHolder).PendingBatches;
          do {
            lVar2 = lVar5 + (longlong)iVar15 * 0x18;
            if ((*(ulonglong *)(lVar5 + (longlong)iVar15 * 0x18) & 0x3fffffffffffff) == uVar21) {
              pFVar16 = (FNetTraceCollector *)(lVar2 + 8);
              if (lVar2 == 0) {
                pFVar16 = (FNetTraceCollector *)0x0;
              }
              if ((pFVar16 != (FNetTraceCollector *)0x0) &&
                 (*(FPendingBatchData **)pFVar16->NestingStack != (FPendingBatchData *)0x0)) {
                EnqueueEndReplication
                          (this,*(FPendingBatchData **)pFVar16->NestingStack,bVar9,true,
                           (FNetRefHandle)local_90._s_0);
                if (uVar13 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent(this_01,uVar13,this_02->BufferBitPosition);
                }
                goto LAB_1442db8ea;
              }
              break;
            }
            iVar15 = *(int *)(lVar2 + 0x10);
          } while (iVar15 != -1);
        }
      }
      uVar14 = FNetRefHandleManager::GetInternalIndex
                         (this->NetRefHandleManager,(FNetRefHandle)local_90._s_0);
      if (uVar14 == 0) {
        if (5 < (byte)LogIris._0_1_) {
          FNetRefHandle::ToString((FNetRefHandle *)&local_90._s_0,(FString *)&local_48[0]._s_0);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if ((void *)local_48[0].Value != (void *)0x0) {
            FMemory::Free((void *)local_48[0]);
          }
        }
        TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::RemoveSwap
                  (&this->BrokenObjects,(FNetRefHandle *)&local_90._s_0,Default);
      }
      else {
        if (uVar13 != 0xffffffff) {
          FVar18 = (this_01->Events).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<FNetTracePacketContentEvent>)&this_01->Events;
          if (FVar18 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar17 = FVar18;
          }
          *(ulong64 *)((longlong)FVar17 + (ulonglong)uVar13 * 0x10) = FVar8.Value & 0x3fffffffffffff
          ;
          FNetTraceCollector::AddReferencedObjectId(this_01,FVar8.Value & 0x3fffffffffffff);
        }
        if (bDeferEndReplication == false) {
          EndReplication(this,uVar14,false,bVar9);
          FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_58,uVar14);
          puVar1 = local_58.DataPtr + local_58.ArrayNum;
          this_02 = local_88;
          for (puVar19 = local_58.DataPtr; local_88 = this_02, puVar19 != puVar1;
              puVar19 = puVar19 + 1) {
            uVar14 = *puVar19;
            FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                      (this->NetRefHandleManager,(uint)&local_60);
            if ((local_60.Value == 0) || ((local_60.Value & 1) != 0)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            EndReplication(this,uVar14,false,bVar9);
            this_02 = local_88;
          }
        }
        else {
          this_00 = this->ObjectsToDispatchArray;
          FObjectsToDispatchArray::Grow(this_00,1,&this->TempLinearAllocator);
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uVar3 = this_00->ObjectsToDispatchCount;
          pFVar6 = this_00->ObjectsToDispatch;
          pFVar7 = pFVar6 + uVar3;
          *(undefined8 *)pFVar7 = 0;
          (pFVar7->ChangeMaskOrPointer).ChangeMaskOrPointer = 0;
          *(undefined8 *)&pFVar6[uVar3].field_0x10 = 0;
          uVar3 = this_00->ObjectsToDispatchCount;
          pFVar7 = this_00->ObjectsToDispatch;
          pFVar7[uVar3].InternalIndex = uVar14;
          *(uint *)&pFVar7[uVar3].field_0x10 =
               (uint)bVar9 << 3 | *(uint *)&pFVar7[uVar3].field_0x10 & 0xfffffee0 | 0xa0;
          puVar1 = &this->ObjectsToDispatchArray->ObjectsToDispatchCount;
          *puVar1 = *puVar1 + 1;
          this_02 = local_88;
        }
      }
      if (uVar13 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(this_01,uVar13,this_02->BufferBitPosition);
      }
LAB_1442db8ea:
      local_res20 = local_res20 + 1;
      pFVar16 = local_80;
    } while (local_res20 < uVar12);
  }
  if (local_98 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar16,local_98,this_02->BufferBitPosition);
  }
  return uVar11;
}

// ReadSentinel @ 1442dbb10

bool __thiscall
UE::Net::Private::FReplicationReader::ReadSentinel
          (FReplicationReader *this,FNetSerializationContext *param_1,wchar_t *param_2)

{
  FName FVar1;
  bool bVar2;
  
  if ((this->StreamDebugFeatures & Sentinels) != None) {
    bVar2 = ReadAndVerifySentinelBits(param_1->BitStreamReader,param_2,8);
    FVar1 = GNetError_BitStreamError;
    if (!bVar2) {
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    }
    return bVar2;
  }
  return true;
}

// ReadStreamDebugFeatures @ 1442dbb90

void __thiscall
UE::Net::Private::FReplicationReader::ReadStreamDebugFeatures
          (FReplicationReader *this,FNetSerializationContext *param_1)

{
  EReplicationDataStreamDebugFeatures EVar1;
  
  EVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,2);
  this->StreamDebugFeatures = EVar1;
  return;
}

// RemoveFromUnresolvedCache @ 1442decc0

void __thiscall
UE::Net::Private::FReplicationReader::RemoveFromUnresolvedCache
          (FReplicationReader *this,FNetRefHandle param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  FNetRefHandle_u_0 local_res10 [3];
  
  if (bUseResolvingHandleCache) {
    uVar2 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    uVar3 = (int)(uVar2 >> 0x20) * 0x17 + (int)uVar2;
    if (*(int *)&(this->UnresolvedHandleToDependents).field_0x8 !=
        *(int *)&(this->UnresolvedHandleToDependents).field_0x34) {
      puVar4 = *(undefined1 **)&(this->UnresolvedHandleToDependents).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->UnresolvedHandleToDependents).field_0x38;
      }
      iVar1 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->UnresolvedHandleToDependents).field_0x48 - 1U &
                                uVar3) * 4);
      if (iVar1 != -1) {
        do {
          if ((*(ulonglong *)
                (*(longlong *)&this->UnresolvedHandleToDependents + (longlong)iVar1 * 0x18) &
              0x3fffffffffffff) == uVar2) {
            return;
          }
          iVar1 = *(int *)(*(longlong *)&this->UnresolvedHandleToDependents + 0x10 +
                          (longlong)iVar1 * 0x18);
        } while (iVar1 != -1);
      }
    }
    local_res10[0] = param_1.field0_0x0;
    if (*(int *)&(this->HotUnresolvedHandleCache).field_0x8 !=
        *(int *)&(this->HotUnresolvedHandleCache).field_0x34) {
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Net::FNetRefHandle>
                ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->HotUnresolvedHandleCache,uVar3,(FNetRefHandle *)&local_res10[0]._s_0);
    }
    if (*(int *)&(this->ColdUnresolvedHandleCache).field_0x8 !=
        *(int *)&(this->ColdUnresolvedHandleCache).field_0x34) {
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Net::FNetRefHandle>
                ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->ColdUnresolvedHandleCache,uVar3,(FNetRefHandle *)&local_res10[0]._s_0);
    }
  }
  return;
}

// RemoveResolvedObjectReferenceInReplicationInfo @ 1442df210

void __thiscall
UE::Net::Private::FReplicationReader::RemoveResolvedObjectReferenceInReplicationInfo
          (FReplicationReader *this,FReplicatedObjectInfo *param_1,FNetRefHandle param_2)

{
  FNetRefHandle_u_0_s_0 FVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&param_1->ResolvedDynamicObjectReferences);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    uVar5 = local_78._28_4_;
    local_18 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)&param_1->ResolvedDynamicObjectReferences;
    do {
      FVar1 = ((FNetRefHandle_u_0 *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18))->_s_0;
      if ((((FNetRefHandle_u_0 *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18))->_s_0).Id ==
          ((ulonglong)param_2.field0_0x0 & 0x3fffffffffffff)) {
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        local_10 = '\x01';
        if (bUseOptObjectRefTracking != false) {
          FReplicatedObjectInfo::RemoveResolvedDynamicHandleCount(param_1,(FNetRefHandle)FVar1);
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// RemoveUnresolvedObjectReferenceInReplicationInfo @ 1442dfc50

void __thiscall
UE::Net::Private::FReplicationReader::RemoveUnresolvedObjectReferenceInReplicationInfo
          (FReplicationReader *this,FReplicatedObjectInfo *param_1,FNetRefHandle param_2)

{
  FNetRefHandle_u_0_s_0 FVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&param_1->UnresolvedObjectReferences);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    uVar5 = local_78._28_4_;
    local_18 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)&param_1->UnresolvedObjectReferences;
    do {
      FVar1 = ((FNetRefHandle_u_0 *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18))->_s_0;
      if ((((FNetRefHandle_u_0 *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18))->_s_0).Id ==
          ((ulonglong)param_2.field0_0x0 & 0x3fffffffffffff)) {
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        local_10 = '\x01';
        if (bUseOptObjectRefTracking != false) {
          FReplicatedObjectInfo::RemoveUnresolvedHandleCount(param_1,(FNetRefHandle)FVar1);
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// ResolveAndDispatchAttachments @ 1442e0c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::ResolveAndDispatchAttachments
          (FReplicationReader *this,FNetSerializationContext *param_1,FReplicatedObjectInfo *param_2
          ,ENetObjectAttachmentDispatchFlags param_3)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FNetObjectAttachmentReceiveQueue *this_00;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar10;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar11;
  FReplicatedObjectInfo_u_348 *pFVar12;
  longlong lVar13;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar14;
  uint uVar15;
  undefined1 auStackY_4c8 [32];
  uint local_478 [2];
  FReplicatedObjectInfo *local_470;
  ENetObjectAttachmentDispatchFlags local_468;
  ENetObjectAttachmentType local_464;
  FNetReferenceCollector local_460;
  ulonglong local_48;
  
  if (param_3 == None) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_468 = param_3 & Unreliable;
  local_470 = param_2;
  if ((((this->Parameters).bAllowDelayingAttachmentsWithUnresolvedReferences == false) ||
      (this->DelayAttachmentsWithUnresolvedReferences == (IConsoleVariable *)0x0)) ||
     (iVar9 = (**(code **)(*(longlong *)this->DelayAttachmentsWithUnresolvedReferences + 200))(),
     iVar9 < 1)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  uVar3 = param_2->InternalIndex;
  uVar15 = 0;
  local_464 = (ENetObjectAttachmentType)(uVar3 == 0);
  local_478[0] = uVar3;
  this_00 = FNetObjectAttachmentsReader::GetQueue(&this->Attachments,local_464,uVar3);
  FVar6 = NetError_FailedToFindAttachmentQueue;
  if (this_00 == (FNetObjectAttachmentReceiveQueue *)0x0) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar6);
    if ((uVar3 != 0) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4393424413328936172>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                           ,0xcec,"AttachmentType == ENetObjectAttachmentType::OutOfBand"), bVar8))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((param_3 & Reliable) != None) {
      pTVar10 = FNetObjectAttachmentReceiveQueue::PeekReliable(this_00);
      param_2 = local_470;
      while (local_470 = param_2, pTVar10 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
        if ((((pTVar10->Reference->CreationInfo).Flags & Reliable) != None) && (bVar8)) {
          local_460.ReferenceInfos.ArrayMax = 0x20;
          local_460.Traits = None;
          local_460.ReferenceInfos.AllocatorInstance.SecondaryData =
               (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
          local_460.ReferenceInfos.ArrayNum = 0;
          FNetBlob::CollectObjectReferences(pTVar10->Reference,param_1,&local_460);
          lVar13 = (longlong)local_460.ReferenceInfos.ArrayNum;
          FVar11 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)&local_460;
          if (local_460.ReferenceInfos.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
            FVar11 = local_460.ReferenceInfos.AllocatorInstance.SecondaryData;
          }
          if ((local_460.ReferenceInfos.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar14 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                   (lVar13 * 0x20 + (longlong)FVar11);
          for (; FVar11 != FVar14;
              FVar11 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                       ((longlong)FVar11 + 0x20)) {
            bVar7 = FObjectReferenceCache::IsNetRefHandlePending
                              (this->ObjectReferenceCache,
                               (FNetRefHandle)
                               *(FNetRefHandle_u_0 *)
                                &((FNetRefHandle_u_0 *)((longlong)FVar11 + 8))->_s_0,
                               &this->PendingBatchHolder);
            if (bVar7) {
              if (5 < (byte)LogIris._0_1_) {
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              }
              param_2 = local_470;
              if (local_460.ReferenceInfos.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
                FMemory::Free((void *)local_460.ReferenceInfos.AllocatorInstance.SecondaryData);
                param_2 = local_470;
              }
              goto LAB_1442e0e9e;
            }
          }
          if (local_460.ReferenceInfos.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
            FMemory::Free((void *)local_460.ReferenceInfos.AllocatorInstance.SecondaryData);
          }
        }
        FNetBlobHandlerManager::OnNetBlobReceived(this->NetBlobHandlerManager,param_1,pTVar10);
        FNetObjectAttachmentReceiveQueue::PopReliable(this_00);
        if ((param_1->ErrorContext).Error != (FName)0x0) {
          return;
        }
        pTVar10 = FNetObjectAttachmentReceiveQueue::PeekReliable(this_00);
        param_2 = local_470;
      }
    }
LAB_1442e0e9e:
    if (local_468 != None) {
      pTVar10 = FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_00);
      while (pTVar10 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
        FNetBlobHandlerManager::OnNetBlobReceived(this->NetBlobHandlerManager,param_1,pTVar10);
        FNetObjectAttachmentReceiveQueue::PopUnreliable(this_00);
        if ((param_1->ErrorContext).Error != (FName)0x0) {
          return;
        }
        pTVar10 = FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_00);
      }
    }
    bVar8 = FNetObjectAttachmentReceiveQueue::IsSafeToDestroy(this_00);
    if (bVar8) {
      FNetObjectAttachmentsReader::DropAllAttachments(&this->Attachments,local_464,local_478[0]);
    }
    else {
      bVar8 = FNetObjectAttachmentReceiveQueue::HasUnprocessed(this_00);
      uVar15 = (uint)bVar8;
      if (bVar8) {
        pFVar12 = &param_2->field7_0x15c;
        if ((pFVar12->Value & 0x40000) == 0) {
          pTVar2 = &this->ObjectsWithAttachmentPendingResolve;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_478) &&
              ((FScriptContainerElement *)local_478 <
               pFVar4 + (longlong)(this->ObjectsWithAttachmentPendingResolve).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->ObjectsWithAttachmentPendingResolve).ArrayNum;
          piVar1 = &(this->ObjectsWithAttachmentPendingResolve).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ObjectsWithAttachmentPendingResolve).ArrayNum = iVar9 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_478[0];
        }
        goto LAB_1442e1041;
      }
    }
  }
  pFVar12 = &param_2->field7_0x15c;
  if ((pFVar12->Value & 0x40000) != 0) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->ObjectsWithAttachmentPendingResolve,local_478,Default);
  }
LAB_1442e1041:
  pFVar12->Value = pFVar12->Value & 0xfffbffff;
  pFVar12->Value = pFVar12->Value | uVar15 << 0x12;
  return;
}

// ResolveAndDispatchUnresolvedReferences @ 1442e10a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::ResolveAndDispatchUnresolvedReferences
          (FReplicationReader *this)

{
  TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *pTVar1;
  TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
  *this_00;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar2;
  FNetRefHandle *pFVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  UObjectReplicationBridge *pUVar6;
  FNetRefHandleManager *this_01;
  code *pcVar7;
  FReplicationReader *this_02;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  TMultiMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>_>
  *pTVar10;
  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  int *piVar16;
  UObject *pUVar17;
  FReplicatedObjectData *pFVar18;
  undefined8 *puVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<FSetElementId> FVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  undefined1 *puVar31;
  int *piVar32;
  int iVar33;
  TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *pTVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  uint uVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 auStackY_608 [32];
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5;
  uint local_5d4;
  bool local_5d0 [8];
  FReplicationReader *local_5c8;
  ulonglong local_5c0;
  TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *local_5b8;
  uint uStack_5b0;
  uint uStack_5ac;
  undefined1 *local_5a8;
  undefined4 uStack_5a0;
  uint uStack_59c;
  uint local_598;
  undefined4 uStack_594;
  int iStack_590;
  undefined4 uStack_58c;
  TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *local_588;
  uint local_580;
  uint local_57c;
  uint local_578;
  ForElementType<unsigned_int> local_570;
  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
  *local_568;
  FNetRefHandle *pFStack_560;
  undefined8 local_558;
  int local_550;
  int local_54c;
  FNetRefHandle local_548;
  int local_540;
  uint local_53c;
  undefined4 local_538;
  uint local_534;
  int local_530;
  int local_52c;
  LARGE_INTEGER local_528;
  TMultiMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>_>
  *local_520;
  FNetRefHandle_u_0 local_518;
  TMultiMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>_>
  *local_510;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_508;
  undefined8 uStack_4e8;
  TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
  *local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d8;
  undefined8 uStack_4b8;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_4b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a8;
  undefined8 uStack_488;
  TBaseKeyIterator<1> local_480;
  FInternalNetSerializationContext local_468;
  FInitParameters local_430;
  undefined4 local_3ec;
  undefined4 local_3cc;
  undefined4 local_3ac;
  FNetRefHandle_u_0 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390 [95];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FInternalNetSerializationContext *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  ulonglong local_38;
  int *piVar30;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_608;
  bVar38 = -1 < CpuChannel->Enabled;
  local_5c8 = this;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2403,
               "FReplicationReader_ResolveAndDispatchUnresolvedReferences",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0x963);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2403);
  }
  if (__CsvProfilerStat2404 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("ResolveAndDispatchUnresolvedReferences",_GCsvCategory_IrisClient.Index);
    __CsvProfilerStat2404 = true;
  }
  local_578 = _GCsvCategory_IrisClient.Index;
  FCsvProfiler::BeginStat
            ("ResolveAndDispatchUnresolvedReferences",_GCsvCategory_IrisClient.Index,
             "CSV_ResolveAndDispatchUnresolvedReferences");
  local_430.ReplicationSystem = (this->Parameters).ReplicationSystem;
  local_430.ObjectResolveContext.bForceSyncLoad = (this->ResolveContext).bForceSyncLoad;
  local_430.ObjectResolveContext._17_7_ = *(undefined7 *)&(this->ResolveContext).field_0x11;
  piVar30 = (int *)0x0;
  local_468.bSerializeObjectReferencesAsRemoteIds = 0;
  local_468.bInlineObjectReferenceExports = 0;
  local_468.bDowngradeAutonomousProxyRole = 0;
  local_468.ReplicationSystem = (UReplicationSystem *)0x0;
  local_468.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  local_430.ObjectResolveContext.RemoteNetTokenStoreState =
       (this->ResolveContext).RemoteNetTokenStoreState;
  local_430.ObjectResolveContext.ConnectionId = (this->ResolveContext).ConnectionId;
  local_430.ObjectResolveContext.AsyncLoadingPriority = (this->ResolveContext).AsyncLoadingPriority;
  local_468.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_468.ResolveContext.ConnectionId = 0;
  local_468.ResolveContext.AsyncLoadingPriority = -1;
  local_468.ResolveContext.bForceSyncLoad = false;
  local_468.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_430.PackageMap = this->ReplicationSystemInternal->IrisObjectReferencePackageMap;
  FInternalNetSerializationContext::Init(&local_468,&local_430);
  lVar14 = 0x20;
  local_3a8.Value = 0;
  puVar19 = local_390;
  local_3a0 = 0;
  do {
    *puVar19 = 0;
    puVar19 = puVar19 + 3;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  local_50 = (this->ResolveContext).ConnectionId;
  pTVar1 = &this->VisitedUnresolvedHandles;
  local_48 = local_48 & 0xfffffffc;
  local_78 = &local_468;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_4c = 0xffffffff;
  local_588 = pTVar1;
  if (*(int *)&(this->VisitedUnresolvedHandles).Elements.field_0x8 !=
      *(int *)&(this->VisitedUnresolvedHandles).Elements.field_0x34) {
    TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar1);
    iVar23 = *(int *)&(this->VisitedUnresolvedHandles).Elements.field_0xc;
    *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x8 = 0;
    if (iVar23 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar1,0,
                 (int *)&(this->VisitedUnresolvedHandles).Elements.field_0xc);
    }
    *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->VisitedUnresolvedHandles).Elements.field_0x28 = 0;
  }
  if (*(int *)&(this->InternalObjectsToResolve).Elements.field_0x8 !=
      *(int *)&(this->InternalObjectsToResolve).Elements.field_0x34) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->InternalObjectsToResolve);
    iVar23 = *(int *)&(this->InternalObjectsToResolve).Elements.field_0xc;
    *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x8 = 0;
    if (iVar23 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->InternalObjectsToResolve,0,
                 (int *)&(this->InternalObjectsToResolve).Elements.field_0xc);
    }
    *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->InternalObjectsToResolve).Elements.field_0x28 = 0;
  }
  QueryPerformanceCounter(&local_528);
  uVar28 = 0;
  local_57c = uVar28;
  if (0 < HotResolvingLifetimeMS) {
    local_57c = HotResolvingLifetimeMS;
  }
  local_580 = uVar28;
  if (0 < ColdResolvingRetryTimeMS) {
    local_580 = ColdResolvingRetryTimeMS;
  }
  uStack_5ac = 1;
  local_520 = &this->UnresolvedHandleToDependents;
  local_5c0 = 1;
  local_5a8 = &(this->UnresolvedHandleToDependents).field_0x10;
  uVar37 = (ulonglong)
           ((double)local_528.QuadPart * FGenericPlatformTime::SecondsPerCycle *
            __real_408f400000000000 + ___real_420f400000000000);
  local_5d4 = (uint)uVar37;
  uVar27 = *(uint *)&(this->UnresolvedHandleToDependents).field_0x28;
  uStack_59c = uVar28;
  uStack_5b0 = uVar28;
  local_598 = uVar28;
  if (uVar27 != 0) {
    puVar15 = *(uint **)&(this->UnresolvedHandleToDependents).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_5a8;
    }
    uVar26 = *puVar15;
    piVar16 = piVar30;
    piVar32 = piVar30;
    local_598 = 0;
    uStack_5b0 = 0;
    while (uVar26 == 0) {
      iVar23 = (int)piVar16;
      local_598 = (int)piVar32 + 0x20;
      piVar32 = (int *)(ulonglong)local_598;
      uStack_5b0 = iVar23 + 1;
      piVar16 = (int *)(ulonglong)uStack_5b0;
      uStack_59c = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_5b0)
      goto LAB_1442e1415;
      uVar26 = puVar15[(longlong)iVar23 + 1];
    }
    uStack_5ac = -uVar26 & uVar26;
    uVar4 = (ulonglong)uStack_5ac * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_550 = (int)lVar14;
    uStack_59c = local_550 + -1 + local_598;
    if ((int)uVar27 < (int)uStack_59c) {
      uStack_59c = uVar27;
    }
  }
LAB_1442e1415:
  local_5b8 = (TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
               *)&this->UnresolvedHandleToDependents;
  uStack_594 = local_3ec;
  iStack_590 = *(int *)&(this->UnresolvedHandleToDependents).field_0x8 -
               *(int *)&(this->UnresolvedHandleToDependents).field_0x34;
  uVar26 = *(uint *)&(this->UnresolvedHandleToDependents).field_0x28;
  uVar36 = uVar26 & 0xffffffe0;
  local_570 = (ForElementType<unsigned_int>)&(local_5c8->UnresolvedHandleToDependents).field_0x10;
  TStack_508._padding_ = CONCAT44(uStack_5ac,uStack_5b0);
  uStack_5a0 = 0xffffffff;
  TStack_508.CurrentBitIndex = uStack_59c;
  TStack_508.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar26 >> 5;
  TStack_508._28_4_ = local_3ec;
  TStack_508.BaseBitIndex = local_598;
  uStack_4e8 = CONCAT44(uStack_58c,iStack_590);
  local_510 = (TMultiMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>_>
               *)local_5b8;
  TStack_508.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5a8;
  if (((int)uVar26 < 0) || ((int)uVar27 < (int)uVar26)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar37 = (ulonglong)local_5d4;
  }
  FVar9 = local_570;
  uVar8 = local_580;
  uVar27 = *(int *)((longlong)local_570 + 0x18);
  if (uVar26 != uVar27) {
    FVar29 = *(ForElementType<unsigned_int> *)((longlong)local_570 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_570 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_570;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar23 * 4);
    while (uVar26 == 0) {
      lVar14 = (longlong)iVar23;
      uVar36 = uVar36 + 0x20;
      iVar23 = iVar23 + 1;
      uVar26 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_1442e1547;
      uVar26 = *(uint *)((undefined1 *)((longlong)FVar29 + 4) + lVar14 * 4);
    }
    uVar4 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_54c = (int)lVar14;
    uVar26 = local_54c + -1 + uVar36;
    if ((int)uVar27 < (int)uVar26) {
      uVar26 = uVar27;
    }
  }
LAB_1442e1547:
  do {
    pTVar10 = local_510;
    uVar27 = (uint)uVar37;
    if (*(int *)&local_510->field_0x8 - *(int *)&local_510->field_0x34 != (int)uStack_4e8) {
      local_5d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5d7);
      uVar27 = local_5d4;
    }
    pTVar1 = local_588;
    if (((TStack_508.CurrentBitIndex == uVar26) &&
        ((ForElementType<unsigned_int>)TStack_508.Array == FVar9)) && (pTVar10 == local_520)) break;
    lVar14 = *(longlong *)pTVar10;
    pFVar3 = (FNetRefHandle *)(lVar14 + (longlong)TStack_508.CurrentBitIndex * 0x18);
    uVar37 = *(ulonglong *)(lVar14 + (longlong)TStack_508.CurrentBitIndex * 0x18) & 0x3fffffffffffff
    ;
    uVar36 = (int)(uVar37 >> 0x20) * 0x17 + (int)uVar37;
    if (*(int *)&(local_588->Elements).field_0x8 != *(int *)&(local_588->Elements).field_0x34) {
      FVar5 = (local_588->Hash).SecondaryData;
      FVar21 = (ForElementType<FSetElementId>)&local_588->Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = FVar5;
      }
      iVar23 = *(int *)((longlong)FVar21 + (ulonglong)(local_588->HashSize - 1U & uVar36) * 4);
      if (iVar23 != -1) {
        do {
          if ((*(ulonglong *)(*(longlong *)&local_588->Elements + (longlong)iVar23 * 0x10) &
              0x3fffffffffffff) == uVar37) goto LAB_1442e170b;
          iVar23 = *(int *)(*(longlong *)&local_588->Elements + 8 + (longlong)iVar23 * 0x10);
        } while (iVar23 != -1);
      }
    }
    if (bUseResolvingHandleCache == false) {
LAB_1442e16f8:
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Emplace<UE::Net::FNetRefHandle_const_&>(local_588,&local_548,(bool *)pFVar3);
    }
    else {
      this_00 = &local_5c8->HotUnresolvedHandleCache;
      if (*(int *)&(local_5c8->HotUnresolvedHandleCache).field_0x8 !=
          *(int *)&(local_5c8->HotUnresolvedHandleCache).field_0x34) {
        puVar31 = *(undefined1 **)&(local_5c8->HotUnresolvedHandleCache).field_0x40;
        puVar22 = &(local_5c8->HotUnresolvedHandleCache).field_0x38;
        if (puVar31 != (undefined1 *)0x0) {
          puVar22 = puVar31;
        }
        iVar23 = *(int *)(puVar22 +
                         (ulonglong)
                         (*(int *)&(local_5c8->HotUnresolvedHandleCache).field_0x48 - 1U & uVar36) *
                         4);
        if (iVar23 != -1) {
          do {
            lVar14 = *(longlong *)&this_00->field_0x0 + (longlong)iVar23 * 0x18;
            if ((*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar23 * 0x18) &
                0x3fffffffffffff) == uVar37) {
              piVar16 = (int *)(lVar14 + 8);
              if (lVar14 == 0) {
                piVar16 = piVar30;
              }
              if (piVar16 != (int *)0x0) {
                if (local_57c < uVar27 - *piVar16) {
                  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
                  ::RemoveImpl<UE::Net::FNetRefHandle>
                            ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
                              *)this_00,uVar36,pFVar3);
                  TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
                  ::Emplace<UE::Net::FNetRefHandle_const_&>
                            ((TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
                              *)&local_5c8->ColdUnresolvedHandleCache,pFVar3);
                }
                goto LAB_1442e16f8;
              }
              break;
            }
            iVar23 = *(int *)(lVar14 + 0x10);
          } while (iVar23 != -1);
        }
      }
      puVar15 = TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
                ::Find((TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
                        *)&local_5c8->ColdUnresolvedHandleCache,pFVar3);
      if (puVar15 == (uint *)0x0) {
        TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
        ::Emplace<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>
                  ((TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
                    *)this_00,pFVar3,&local_5d4);
        goto LAB_1442e16f8;
      }
      if (uVar8 <= uVar27 - *puVar15) {
        *puVar15 = uVar27;
        goto LAB_1442e16f8;
      }
    }
LAB_1442e170b:
    TStack_508.UnvisitedBitMask = TStack_508.UnvisitedBitMask & ~TStack_508._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_508);
    uVar37 = (ulonglong)local_5d4;
  } while( true );
  uVar27 = *(uint *)&(local_588->Elements).field_0x28;
  pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_588->Elements).field_0x10;
  uStack_5ac = (uint)local_5c0;
  uStack_59c = uVar28;
  local_598 = uVar28;
  if (uVar27 != 0) {
    puVar15 = *(uint **)&(local_588->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar35;
    }
    uVar26 = *puVar15;
    piVar16 = piVar30;
    local_598 = 0;
    uVar28 = 0;
    while (uVar26 == 0) {
      iVar23 = (int)piVar30;
      local_598 = (int)piVar16 + 0x20;
      piVar16 = (int *)(ulonglong)local_598;
      uVar28 = iVar23 + 1;
      piVar30 = (int *)(ulonglong)uVar28;
      uStack_59c = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
      goto LAB_1442e17ad;
      uVar26 = puVar15[(longlong)iVar23 + 1];
    }
    uStack_5ac = -uVar26 & uVar26;
    uVar37 = (ulonglong)uStack_5ac * 2 + 1;
    lVar14 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_548.field0_0x0.Value._4_4_ = (undefined4)lVar14;
    uStack_59c = (local_598 - 1) + local_548.field0_0x0.Value._4_4_;
    if ((int)uVar27 < (int)uStack_59c) {
      uStack_59c = uVar27;
    }
  }
LAB_1442e17ad:
  uVar26 = *(uint *)&(local_588->Elements).field_0x28;
  uStack_594 = local_3cc;
  iStack_590 = *(int *)&(local_588->Elements).field_0x8 - *(int *)&(local_588->Elements).field_0x34;
  local_5b8 = local_588;
  uVar36 = uVar26 & 0xffffffe0;
  uStack_5a0 = 0xffffffff;
  TStack_4d8._padding_ = CONCAT44(uStack_5ac,uVar28);
  TStack_4d8.CurrentBitIndex = uStack_59c;
  TStack_4d8.UnvisitedBitMask = 0xffffffff;
  local_4e0 = local_588;
  iVar23 = (int)uVar26 >> 5;
  TStack_4d8._28_4_ = local_3cc;
  TStack_4d8.BaseBitIndex = local_598;
  uStack_4b8 = CONCAT44(uStack_58c,iStack_590);
  uStack_5b0 = uVar28;
  local_5a8 = (undefined1 *)pTVar35;
  TStack_4d8.Array = pTVar35;
  if ((((int)uVar26 < 0) || ((int)uVar27 < (int)uVar26)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_02 = local_5c8;
  uVar28 = *(uint *)&(pTVar1->Elements).field_0x28;
  pTVar34 = local_588;
  if (uVar26 != uVar28) {
    puVar31 = *(undefined1 **)&(pTVar1->Elements).field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = (undefined1 *)pTVar35;
    }
    uVar27 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar23 * 4);
    while (uVar27 == 0) {
      lVar14 = (longlong)iVar23;
      uVar36 = uVar36 + 0x20;
      iVar23 = iVar23 + 1;
      uVar26 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_1442e18d0;
      uVar27 = *(uint *)(puVar31 + lVar14 * 4 + 4);
    }
    uVar37 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_540 = (int)lVar14;
    uVar26 = (uVar36 - 1) + local_540;
    if ((int)uVar28 < (int)uVar26) {
      uVar26 = uVar28;
    }
  }
LAB_1442e18d0:
  while( true ) {
    pTVar1 = local_4e0;
    if (*(int *)&(local_4e0->Elements).field_0x8 - *(int *)&(local_4e0->Elements).field_0x34 !=
        (int)uStack_4b8) {
      local_5d6 = 0;
      `TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5d6);
    }
    if (((TStack_4d8.CurrentBitIndex == uVar26) && (TStack_4d8.Array == pTVar35)) &&
       (pTVar1 == pTVar34)) break;
    local_518 = (FNetRefHandle_u_0)
                *(FNetRefHandle_u_0 *)
                 &((FNetRefHandle_u_0 *)
                  (*(longlong *)&pTVar1->Elements + (longlong)TStack_4d8.CurrentBitIndex * 0x10))->
                  _s_0;
    pUVar17 = FObjectReferenceCache::ResolveObjectReferenceHandleInternal
                        (this_02->ObjectReferenceCache,(FNetRefHandle)local_518,
                         &this_02->ResolveContext,local_5d0);
    if (pUVar17 != (UObject *)0x0) {
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                (&local_480,
                 (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  *)&this_02->UnresolvedHandleToDependents,(FNetRefHandle *)&local_518);
      pFVar3 = local_480.Key;
      pTVar11 = local_480.Set;
      local_558 = CONCAT44(local_480.NextIndex,local_480.Index);
      local_568 = local_480.Set;
      pFStack_560 = local_480.Key;
      iVar23 = local_480.NextIndex;
      iVar33 = local_480.Index;
      if (local_480.Index != -1) {
        do {
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
          Emplace<unsigned_int_const_&>
                    (&this_02->InternalObjectsToResolve,&local_53c,
                     (bool *)(*(longlong *)&pTVar11->Elements + ((longlong)iVar33 * 3 + 1) * 8));
          local_558 = CONCAT44(local_558._4_4_,iVar23);
          if (iVar23 == -1) break;
          lVar14 = *(longlong *)&pTVar11->Elements;
          do {
            iVar24 = iVar23;
            iVar23 = *(int *)(lVar14 + 0x10 + (longlong)iVar24 * 0x18);
            uVar37 = *(ulonglong *)(lVar14 + (longlong)iVar24 * 0x18) & 0x3fffffffffffff;
            iVar33 = iVar24;
            if (uVar37 == (pFVar3->field0_0x0 & 0x3fffffffffffff)) break;
            iVar33 = iVar23;
          } while (iVar23 != -1);
          local_558 = CONCAT44(iVar23,iVar33);
          iVar13 = iVar23;
          if (uVar37 == (pFVar3->field0_0x0 & 0x3fffffffffffff)) {
            iVar13 = iVar24;
          }
        } while (iVar13 != -1);
        pTVar34 = &this_02->VisitedUnresolvedHandles;
        pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this_02->VisitedUnresolvedHandles).Elements.field_0x10;
      }
    }
    TStack_4d8.UnvisitedBitMask = TStack_4d8.UnvisitedBitMask & ~TStack_4d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d8);
  }
  iVar23 = (this_02->ObjectsWithAttachmentPendingResolve).ArrayNum;
  iVar33 = 0;
  pFVar25 = (this_02->ObjectsWithAttachmentPendingResolve).AllocatorInstance.Data;
  if ((iVar23 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &this_02->InternalObjectsToResolve;
  uVar28 = *(int *)&(this_02->InternalObjectsToResolve).Elements.field_0x8 -
           *(int *)&(this_02->InternalObjectsToResolve).Elements.field_0x34;
  uVar27 = uVar28 + iVar23;
  if (uVar28 < uVar27) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar2,uVar27);
    iVar24 = (uint)local_5c0;
    if (3 < uVar27) {
      uVar37 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_538 = (undefined4)lVar14;
      iVar24 = (uint)local_5c0 << ((byte)lVar14 & 0x1f);
    }
    iVar13 = (this_02->InternalObjectsToResolve).HashSize;
    if ((iVar13 == 0) || (iVar13 < iVar24)) {
      (this_02->InternalObjectsToResolve).HashSize = iVar24;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(pTVar2);
    }
  }
  pFVar20 = pFVar25 + (longlong)iVar23 * 4;
  for (; pFVar25 != pFVar20; pFVar25 = pFVar25 + 4) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>(pTVar2,&local_534,(bool *)pFVar25);
  }
  puVar31 = &(this_02->InternalObjectsToResolve).Elements.field_0x10;
  iVar23 = *(int *)&(this_02->InternalObjectsToResolve).Elements.field_0x28;
  local_598 = 0;
  uStack_59c = 0;
  if (iVar23 != 0) {
    puVar15 = *(uint **)&(this_02->InternalObjectsToResolve).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar31;
    }
    uVar28 = *puVar15;
    while (uVar28 == 0) {
      lVar14 = (longlong)iVar33;
      local_598 = local_598 + 0x20;
      iVar33 = iVar33 + 1;
      uStack_59c = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar33) goto LAB_1442e1b82;
      uVar28 = puVar15[lVar14 + 1];
    }
    local_5c0 = (ulonglong)(-uVar28 & uVar28);
    uVar37 = local_5c0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_530 = (int)lVar14;
    uStack_59c = local_598 + -1 + local_530;
    if (iVar23 < (int)uStack_59c) {
      uStack_59c = iVar23;
    }
  }
LAB_1442e1b82:
  uVar28 = *(uint *)&(this_02->InternalObjectsToResolve).Elements.field_0x28;
  local_5b8 = (TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
               *)&this_02->InternalObjectsToResolve;
  uStack_5ac = (uint)local_5c0;
  uVar27 = uVar28 & 0xffffffe0;
  iStack_590 = *(int *)&(this_02->InternalObjectsToResolve).Elements.field_0x8 -
               *(int *)&(this_02->InternalObjectsToResolve).Elements.field_0x34;
  TStack_4a8._padding_ = CONCAT44(uStack_5ac,iVar33);
  uStack_5a0 = 0xffffffff;
  TStack_4a8.CurrentBitIndex = uStack_59c;
  TStack_4a8.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar28 >> 5;
  TStack_4a8._28_4_ = local_3ac;
  TStack_4a8.BaseBitIndex = local_598;
  uStack_488 = CONCAT44(uStack_58c,iStack_590);
  uStack_5b0 = iVar33;
  local_5a8 = puVar31;
  local_4b0 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_5b8;
  TStack_4a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar31;
  if ((((int)uVar28 < 0) || (iVar23 < (int)uVar28)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar26 = *(uint *)&(this_02->InternalObjectsToResolve).Elements.field_0x28;
  if (uVar28 != uVar26) {
    puVar22 = *(undefined1 **)&(this_02->InternalObjectsToResolve).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar31;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar24 * 4);
    while (uVar28 == 0) {
      lVar14 = (longlong)iVar24;
      uVar27 = uVar27 + 0x20;
      iVar24 = iVar24 + 1;
      uVar28 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_1442e1cb0;
      uVar28 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar37 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_52c = (int)lVar14;
    uVar28 = local_52c + -1 + uVar27;
    if ((int)uVar26 < (int)uVar28) {
      uVar28 = uVar26;
    }
  }
LAB_1442e1cb0:
  do {
    pTVar2 = local_4b0;
    if (*(int *)&(local_4b0->Elements).field_0x8 - *(int *)&(local_4b0->Elements).field_0x34 !=
        (int)uStack_488) {
      local_5d5 = 0;
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5d5);
    }
    if (((TStack_4a8.CurrentBitIndex == uVar28) &&
        (TStack_4a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
       (pTVar2 == &this_02->InternalObjectsToResolve)) {
      uVar28 = *(int *)&(this_02->VisitedUnresolvedHandles).Elements.field_0x8 -
               *(int *)&(this_02->VisitedUnresolvedHandles).Elements.field_0x34;
      if ((this_02->NumHandlesPendingResolveLastUpdate != uVar28) ||
         (0 < (this_02->ObjectsWithAttachmentPendingResolve).ArrayNum)) {
        this_02->NumHandlesPendingResolveLastUpdate = uVar28;
      }
      FCsvProfiler::EndStat("ResolveAndDispatchUnresolvedReferences",local_578);
      if (bVar38) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar27 = *(uint *)(*(longlong *)&pTVar2->Elements + (longlong)TStack_4a8.CurrentBitIndex * 0xc);
    if (bForceObjectsToStall != false) {
      pUVar6 = this_02->ReplicationBridge;
      if ((pUVar6 == (UObjectReplicationBridge *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Bridge",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ObjectReplicationBridge.h"
                              ,0x2c8,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pUVar6->DebugObjectsForcedToStall).ArrayNum != 0) {
        this_01 = this_02->NetRefHandleManager;
        pFVar25 = (this_01->AssignedInternalIndices).Storage.AllocatorInstance.Data;
        if (((this_01->AssignedInternalIndices).BitCount <= uVar27) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((*(uint *)(pFVar25 + (ulonglong)(uVar27 >> 5) * 4) >> (uVar27 & 0x1f) & 1) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("AssignedInternalIndices.GetBit(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                ,0x245,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar18 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this_01,uVar27);
        pUVar6 = this_02->ReplicationBridge;
        uVar37 = (pFVar18->RefHandle).field0_0x0.Value;
        if ((pUVar6 == (UObjectReplicationBridge *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Bridge",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ObjectReplicationBridge.h"
                                ,0x2ce,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar20 = (pUVar6->DebugObjectsForcedToStall).AllocatorInstance.Data;
        pFVar25 = pFVar20 + (longlong)(pUVar6->DebugObjectsForcedToStall).ArrayNum * 8;
        if (pFVar20 != pFVar25) {
          do {
            if ((*(ulonglong *)pFVar20 & 0x3fffffffffffff) == (uVar37 & 0x3fffffffffffff))
            goto LAB_1442e1e56;
            pFVar20 = pFVar20 + 8;
          } while (pFVar20 != pFVar25);
        }
      }
    }
    ResolveAndDispatchUnresolvedReferencesForObject
              (this_02,(FNetSerializationContext *)&local_3a8._s_0,uVar27);
LAB_1442e1e56:
    TStack_4a8.UnvisitedBitMask = TStack_4a8.UnvisitedBitMask & ~TStack_4a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a8);
  } while( true );
}

// ResolveAndDispatchUnresolvedReferencesForObject @ 1442e1f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::ResolveAndDispatchUnresolvedReferencesForObject
          (FReplicationReader *this,FNetSerializationContext *param_1,uint param_2)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  ushort uVar2;
  undefined4 uVar3;
  FNetHandle_u_0 FVar4;
  FProperty *pFVar5;
  code *pcVar6;
  FNetBitArrayView FVar7;
  FNetSerializationContext *pFVar8;
  FReplicationReader *this_00;
  uint ****ppppuVar9;
  byte bVar10;
  bool bVar11;
  FReplicatedObjectInfo *pFVar12;
  FReplicatedObjectData *pFVar13;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar14;
  FContext *pFVar15;
  uint uVar16;
  ForElementType<UE::Net::FNetRefHandle> FVar17;
  uint uVar18;
  uchar *puVar19;
  byte bVar20;
  ulonglong uVar21;
  byte bVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStackY_ac8 [32];
  byte local_a88;
  undefined1 local_a86 [6];
  FNetSerializationContext *local_a80;
  ENetObjectAttachmentDispatchFlags local_a78;
  FReplicatedObjectInfo *local_a70;
  FReplicationReader *local_a68;
  uint local_a60;
  undefined8 local_a58;
  uint ****local_a48;
  uint uStack_a40;
  uint uStack_a3c;
  uint local_a38;
  FReplicatedObjectData *local_a30;
  FNetBitArrayView local_a28;
  FNetBitArrayView local_a18;
  uint ****local_a08;
  FString local_a00;
  FDequantizeAndApplyParameters local_9f0;
  FString local_9b8;
  FNetBitArrayView local_9a8;
  FString local_998;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_988
  ;
  FResolveAndCollectUnresolvedAndResolvedReferenceCollector local_878;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_ac8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_a80 = param_1;
  local_a68 = this;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2031,
               "FReplicationReader_ResolveAndDispatchUnresolvedReferencesForObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0x7ef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2031);
  }
  pFVar12 = GetReplicatedObjectInfo(this,param_2);
  local_a70 = pFVar12;
  if (pFVar12 == (FReplicatedObjectInfo *)0x0) {
    if ((1 < (byte)LogIris._0_1_) && (bHasLogged == false)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    bHasLogged = true;
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4393424413328934904>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                        ,0x7f8,"false");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_a60 = (pFVar12->field7_0x15c).Value >> 0x12 & 0xffffff01;
    local_a78 = None;
    if (((pFVar12->field7_0x15c).Value & 0x30000) != 0) {
      pFVar13 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                          (this->NetRefHandleManager,pFVar12->InternalIndex);
      local_a30 = pFVar13;
      if (6 < (byte)LogIris._0_1_) {
        FNetRefHandle::ToString(&pFVar13->RefHandle,&local_9b8);
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = (pFVar12->field7_0x15c).Value;
      uVar18 = uVar16 & 0xffff;
      bVar22 = (byte)(uVar16 >> 0x11) & 1;
      local_a58 = (FReplicatedObjectData *)(CONCAT44(local_a58._4_4_,uVar16) & 0xffffffff0000ffff);
      if (uVar18 < 0x41) {
        FNetBitArrayView::FNetBitArrayView(&local_a28,(uint *)pFVar12,uVar18);
        local_a08 = (uint ****)0x0;
        uStack_a40 = uVar18 + 0x1f >> 5;
        local_a48 = (uint ****)&local_a08;
        if (uVar18 == 0) {
          local_a48 = (uint ****)&uStack_a3c;
        }
      }
      else {
        FNetBitArrayView::FNetBitArrayView
                  (&local_a28,(uint *)(pFVar12->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer,
                   uVar18);
        local_a48 = FMemStackChangeMaskAllocator::Alloc
                              (&local_a68->TempChangeMaskAllocator,(uVar18 + 0x1f >> 5) << 2,4);
        uStack_a40 = uVar18 + 0x1f >> 5;
        local_a08 = local_a48;
      }
      uStack_a3c = uVar18;
      memset(local_a48,0,(ulonglong)uStack_a40 << 2);
      uVar16 = uStack_a40;
      ppppuVar9 = local_a48;
      FVar7.WordCount = uStack_a40;
      FVar7.Storage = (uint *)local_a48;
      FVar7.BitCount = uStack_a3c;
      if (((local_a48 == (uint ****)local_a28.Storage) || (uStack_a3c != local_a28.BitCount)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x5d8,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((uVar16 != 0) && (local_a28.WordCount != 0)) {
        memcpy(ppppuVar9,local_a28.Storage,(ulonglong)uVar16 << 2);
      }
      this_00 = local_a68;
      local_878.UnresolvedReferenceInfos.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
      local_878.UnresolvedReferenceInfos.ArrayNum = 0;
      local_878.ResolvedReferenceInfos.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
      local_878.ResolvedReferenceInfos.ArrayNum = 0;
      local_878.bIncludeInitState = false;
      local_878.UnresolvedReferenceInfos.ArrayMax = 0x20;
      local_878.ResolvedReferenceInfos.ArrayMax = 0x20;
      FResolveAndCollectUnresolvedAndResolvedReferenceCollector::CollectReferences
                (&local_878,local_a68->ObjectReferenceCache,&local_a68->ResolveContext,
                 (bool)((byte)((pFVar12->field7_0x15c).Value >> 0x11) & 1),&local_a28,
                 pFVar13->ReceiveStateBuffer,pFVar13->Protocol);
      local_988.ArrayMax = 0x20;
      local_988.AllocatorInstance.SecondaryData = (ForElementType<UE::Net::FNetRefHandle>)0x0;
      local_988.ArrayNum = 0;
      local_9a8 = FVar7;
      BuildUnresolvedChangeMaskAndUpdateObjectReferenceTracking
                (this_00,&local_878,&local_9a8,pFVar12,&local_a28,&local_988);
      memset(local_a48,0,(ulonglong)uStack_a40 << 2);
      ppppuVar9 = local_a48;
      local_a18.BitCount = uStack_a3c;
      local_a18.WordCount = uStack_a40;
      bVar20 = 0;
      local_a18.Storage = (uint *)local_a48;
      local_a88 = 0;
      if (local_988.ArrayNum != 0) {
        uVar21 = (ulonglong)local_878.ResolvedReferenceInfos.ArrayNum;
        local_a38 = local_878.ResolvedReferenceInfos.ArrayNum;
        FVar14 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                 &local_878.ResolvedReferenceInfos;
        if (local_878.ResolvedReferenceInfos.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
          FVar14 = local_878.ResolvedReferenceInfos.AllocatorInstance.SecondaryData;
        }
        lVar23 = uVar21 * 0x20;
        puVar19 = (uchar *)((longlong)FVar14 + 8);
LAB_1442e2310:
        do {
          if (local_878.ResolvedReferenceInfos.ArrayNum != (uint)uVar21) {
            local_a86[0] = 0;
            `TCheckedPointerIterator<UE::Net::FNetReferenceCollector::FReferenceInfo_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_a86);
          }
          if ((ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)(puVar19 + -8) ==
              (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
              (lVar23 + (longlong)FVar14)) {
            pFVar13 = local_a30;
            uVar18 = (uint)local_a58;
            break;
          }
          FVar17 = (ForElementType<UE::Net::FNetRefHandle>)&local_988;
          if (local_988.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FVar17 = local_988.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<UE::Net::FNetRefHandle>)
                  ((longlong)FVar17 + (longlong)local_988.ArrayNum * 8);
          bVar10 = local_a88;
          if (FVar17 == FVar1) {
LAB_1442e2405:
            local_a88 = bVar10;
            uVar21 = (ulonglong)local_a38;
            puVar19 = puVar19 + 0x20;
          }
          else {
            do {
              if ((*(ulonglong *)FVar17 & 0x3fffffffffffff) ==
                  (*(ulonglong *)puVar19 & 0x3fffffffffffff)) {
                bVar20 = bVar22;
                bVar10 = bVar22;
                if (*(int *)(puVar19 + 0x14) == 0) goto LAB_1442e2405;
                uVar16 = *(uint *)(puVar19 + 0x10);
                if ((local_a18.BitCount <= uVar16) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar21 = (ulonglong)local_a38;
                *(uint *)((longlong)ppppuVar9 + (ulonglong)(uVar16 >> 5) * 4) =
                     *(uint *)((longlong)ppppuVar9 + (ulonglong)(uVar16 >> 5) * 4) |
                     1 << (uVar16 & 0x1f);
                puVar19 = puVar19 + 0x20;
                bVar20 = local_a88;
                goto LAB_1442e2310;
              }
              FVar17 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar17 + 8);
            } while (FVar17 != FVar1);
            uVar21 = (ulonglong)local_a38;
            puVar19 = puVar19 + 0x20;
          }
        } while( true );
      }
      pFVar12 = local_a70;
      pFVar8 = local_a80;
      param_1 = local_a80;
      if (pFVar13->InstanceProtocol == (FReplicationInstanceProtocol *)0x0) {
        if (5 < (byte)LogIris._0_1_) {
          FNetRefHandle::ToString(&pFVar13->RefHandle,&local_998);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          param_1 = local_a80;
          if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_998.Data.AllocatorInstance.Data);
            param_1 = local_a80;
          }
        }
      }
      else {
        uVar21 = 0;
        if (local_a18.WordCount != 0) {
          do {
            if (*(int *)((longlong)ppppuVar9 + uVar21 * 4) != 0) goto LAB_1442e244b;
            uVar16 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar16;
          } while (uVar16 < local_a18.WordCount);
        }
        if (bVar20 != 0) {
LAB_1442e244b:
          if ((((char)local_a60 != '\0') && (bExecuteReliableRPCsBeforeApplyState != false)) &&
             (bVar20 == 0)) {
            local_a78 = Reliable;
            ResolveAndDispatchAttachments(local_a68,local_a80,local_a70,Reliable);
          }
          uVar3 = *(undefined4 *)&pFVar8->field_0x360;
          local_9f0.ChangeMaskData = (uint *)ppppuVar9;
          local_9f0.Allocator = &local_a68->TempLinearAllocator;
          *(uint *)&pFVar8->field_0x360 = ((uint)bVar20 ^ ZPULL(uVar3,0,1)) & 1 ^ uVar3;
          if (((pFVar12->field7_0x15c).Value >> 0x10 & 1) == 0) {
            local_9f0.UnresolvedReferencesChangeMaskData = (uint *)0x0;
          }
          else {
            local_9f0.UnresolvedReferencesChangeMaskData = (uint *)pFVar12;
            if (0x40 < uVar18) {
              local_9f0.UnresolvedReferencesChangeMaskData =
                   (uint *)(pFVar12->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer;
            }
          }
          local_9f0.InstanceProtocol = pFVar13->InstanceProtocol;
          local_9f0.Protocol = pFVar13->Protocol;
          local_9f0.bHasUnresolvedInitReferences =
               (bool)((byte)((pFVar12->field7_0x15c).Value >> 0x11) & 1);
          local_9f0.SrcObjectStateBuffer = pFVar13->ReceiveStateBuffer;
          if ((bResolvedObjectsDispatchDebugging != false) && (6 < (byte)LogIris._0_1_)) {
            uVar16 = (local_9f0.Protocol)->ReplicationStateCount;
            uVar18 = 0;
            pFVar13 = (FReplicatedObjectData *)(local_9f0.Protocol)->ReplicationStateDescriptors;
            local_a58 = pFVar13;
            if (((int)uVar16 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_a30 = (FReplicatedObjectData *)(&pFVar13->RefHandle + (int)uVar16);
            if (pFVar13 != local_a30) {
              do {
                FVar4 = *(FNetHandle_u_0 *)&pFVar13->RefHandle;
                bVar11 = FNetBitArrayView::IsAnyBitSet
                                   (&local_a18,uVar18,(uint)*(ushort *)((longlong)FVar4 + 0x86));
                if (bVar11) {
                  uVar2 = *(ushort *)((longlong)FVar4 + 0x7c);
                  uVar21 = 0;
                  if (uVar2 != 0) {
                    do {
                      bVar11 = FNetBitArrayView::IsAnyBitSet
                                         (&local_a18,
                                          (*(FReplicationStateMemberChangeMaskDescriptor **)
                                            ((longlong)FVar4 + 8))[uVar21].BitOffset + uVar18,
                                          (uint)(*(FReplicationStateMemberChangeMaskDescriptor **)
                                                  ((longlong)FVar4 + 8))[uVar21].BitCount);
                      if (((bVar11) &&
                          (pFVar5 = (*(FProperty ***)((longlong)FVar4 + 0x38))[uVar21],
                          pFVar5 != (FProperty *)0x0)) && (6 < (byte)LogIris._0_1_)) {
                        bVar11 = IsThisNotNull(pFVar5,"FField::GetName");
                        if (bVar11) {
                          ::FName::ToString((FName *)&pFVar5->_padding_,&local_a00);
                        }
                        else {
                          ::FString::FString(&local_a00,L"None");
                        }
                        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                        if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_a00.Data.AllocatorInstance.Data);
                        }
                      }
                      uVar16 = (int)uVar21 + 1;
                      uVar21 = (ulonglong)uVar16;
                      pFVar13 = local_a58;
                    } while (uVar16 != uVar2);
                  }
                }
                pFVar13 = (FReplicatedObjectData *)&pFVar13->NetHandle;
                uVar18 = uVar18 + *(ushort *)((longlong)FVar4 + 0x86);
                local_a58 = pFVar13;
              } while (pFVar13 != local_a30);
            }
          }
          param_1 = local_a80;
          pFVar15 = FDequantizeAndApplyHelper::Initialize(local_a80,&local_9f0);
          FDequantizeAndApplyHelper::ApplyAndCallLegacyFunctions(pFVar15,param_1);
          FDequantizeAndApplyHelper::Deinitialize(pFVar15);
        }
      }
      if (local_988.AllocatorInstance.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0)
      {
        FMemory::Free((void *)local_988.AllocatorInstance.SecondaryData);
      }
      if (local_878.ResolvedReferenceInfos.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FMemory::Free((void *)local_878.ResolvedReferenceInfos.AllocatorInstance.SecondaryData);
      }
      this = local_a68;
      if (local_878.UnresolvedReferenceInfos.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FMemory::Free((void *)local_878.UnresolvedReferenceInfos.AllocatorInstance.SecondaryData);
        this = local_a68;
      }
    }
    if ((char)local_a60 != '\0') {
      ResolveAndDispatchAttachments(this,param_1,local_a70,local_a78 ^ Reliable | Unreliable);
    }
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StartReplication @ 1442e5f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::StartReplication(FReplicationReader *this,uint param_1)

{
  TMap<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FReplicatedObjectInfo *pFVar4;
  FReplicatedObjectData *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  FReplicatedObjectInfo *pFVar8;
  uint uVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8 [2];
  TKeyInitializer<unsigned_int_&> local_1b0;
  uint *local_1a8 [2];
  undefined1 local_194 [380];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = &this->ReplicatedObjects;
  local_1b8[0] = param_1;
  if (*(int *)&(this->ReplicatedObjects).field_0x8 != *(int *)&(this->ReplicatedObjects).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ReplicatedObjects).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x178 + *(longlong *)&this_00->field_0x0) == param_1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ReplicatedObjects.Contains(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                             ,0x274,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FReplicatedObjectInfo *)(*pcVar1)();
            return pFVar4;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x178 + 0x170 + *(longlong *)&this_00->field_0x0);
      } while (iVar3 != -1);
    }
  }
  local_1a8[0] = local_1b8;
  TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_&>_>
            ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo,0>,FDefaultSetAllocator>
              *)this_00,&local_1b0,(bool *)local_1a8);
  pFVar8 = (FReplicatedObjectInfo *)
           (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_1b0.Key * 0x178 + 8);
  pFVar4 = FReplicatedObjectInfo::FReplicatedObjectInfo((FReplicatedObjectInfo *)(local_194 + 0xc));
  (pFVar8->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer =
       (pFVar4->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer;
  if (&pFVar8->UnresolvedObjectReferences != &pFVar4->UnresolvedObjectReferences) {
    TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)&pFVar8->UnresolvedObjectReferences,
               (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)&pFVar4->UnresolvedObjectReferences);
  }
  if (&pFVar8->ResolvedDynamicObjectReferences != &pFVar4->ResolvedDynamicObjectReferences) {
    TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)&pFVar8->ResolvedDynamicObjectReferences,
               (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                *)&pFVar4->ResolvedDynamicObjectReferences);
  }
  if (&pFVar8->UnresolvedHandleCount != &pFVar4->UnresolvedHandleCount) {
    TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                *)&pFVar8->UnresolvedHandleCount,
               (TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                *)&pFVar4->UnresolvedHandleCount);
  }
  if (&pFVar8->ResolvedDynamicHandleCount != &pFVar4->ResolvedDynamicHandleCount) {
    TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                *)&pFVar8->ResolvedDynamicHandleCount,
               (TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                *)&pFVar4->ResolvedDynamicHandleCount);
  }
  pFVar8->StoredBaselines[0] = pFVar4->StoredBaselines[0];
  pFVar8->StoredBaselines[1] = pFVar4->StoredBaselines[1];
  pFVar8->InternalIndex = pFVar4->InternalIndex;
  pFVar8->field7_0x15c = pFVar4->field7_0x15c;
  (pFVar8->field7_0x15c)._s_1.ChangeMaskBitCount = (pFVar4->field7_0x15c)._s_1.ChangeMaskBitCount;
  uVar6 = ((pFVar8->field7_0x15c).Value ^ (pFVar4->field7_0x15c).Value) & 0x10000 ^
          (pFVar8->field7_0x15c).Value;
  (pFVar8->field7_0x15c).Value = uVar6;
  uVar6 = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0x20000 ^ uVar6;
  (pFVar8->field7_0x15c).Value = uVar6;
  uVar6 = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0x40000 ^ uVar6;
  (pFVar8->field7_0x15c).Value = uVar6;
  uVar6 = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0x80000 ^ uVar6;
  (pFVar8->field7_0x15c).Value = uVar6;
  uVar6 = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0x100000 ^ uVar6;
  (pFVar8->field7_0x15c).Value = uVar6;
  uVar6 = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0x200000 ^ uVar6;
  (pFVar8->field7_0x15c).Value = uVar6;
  uVar6 = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0xc00000 ^ uVar6;
  (pFVar8->field7_0x15c).Value = uVar6;
  (pFVar8->field7_0x15c).Value = (uVar6 ^ (pFVar4->field7_0x15c).Value) & 0x3000000 ^ uVar6;
  *(uint *)&pFVar8->field_0x160 =
       (ZPULL(*(undefined4 *)&pFVar8->field_0x160,0,7) ^ pFVar4->Padding) & 0x7f ^
       *(undefined4 *)&pFVar8->field_0x160;
  FReplicatedObjectInfo::~FReplicatedObjectInfo((FReplicatedObjectInfo *)(local_194 + 0xc));
  pFVar8->InternalIndex = local_1b8[0];
  if (local_1b8[0] != 0) {
    pFVar5 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                       (this->NetRefHandleManager,local_1b8[0]);
    (pFVar8->field7_0x15c)._s_1.ChangeMaskBitCount = (ushort)pFVar5->Protocol->ChangeMaskBitCount;
    uVar6 = (pFVar8->field7_0x15c).Value & 0xffff;
    uVar9 = uVar6 + 0x1f >> 5;
    if (uVar6 < 0x41) {
      pFVar4 = pFVar8;
      if (uVar6 == 0) {
        pFVar4 = (FReplicatedObjectInfo *)local_194;
      }
    }
    else {
      pFVar4 = FGlobalChangeMaskAllocator::Alloc(&this->PersistentChangeMaskAllocator,uVar9 * 4,4);
      (pFVar8->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer = (ulong64)pFVar4;
    }
    memset(pFVar4,0,(ulonglong)uVar9 << 2);
  }
  return pFVar8;
}

// UpdateObjectReferenceTracking @ 1442e8b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking
          (FReplicationReader *this,FReplicatedObjectInfo *param_1,FNetBitArrayView *param_2,
          bool param_3,
          TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_4,TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                   *param_5,
          TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
          *param_6)

{
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar1;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *this_00;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  FNetRefHandleManager *pFVar3;
  code *pcVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  undefined8 uVar6;
  FReplicatedObjectInfo *pFVar7;
  FReplicationReader *pFVar8;
  longlong *plVar9;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar10;
  int iVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar12;
  FNetRefHandle *pFVar13;
  ForElementType<UE::Net::FNetRefHandle> FVar14;
  FReplicatedObjectData *pFVar15;
  ulonglong uVar16;
  byte bVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  char cVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  ForElementType<unsigned_int> FVar24;
  ForElementType<FSetElementId> FVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  undefined1 *puVar32;
  FReplicatedObjectInfo *pFVar33;
  bool bVar34;
  undefined1 auStack_7a8 [32];
  FNetRefHandle_u_0 *local_788;
  ForElementType<UE::Net::FNetRefHandle> local_780;
  longlong local_778;
  longlong local_770;
  undefined8 local_768;
  char local_758;
  undefined1 local_757;
  undefined1 local_756;
  undefined1 local_755 [5];
  ulonglong local_750;
  uint local_748 [2];
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_740;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_738;
  int local_718;
  undefined4 uStack_714;
  undefined1 local_710 [8];
  FNetRefHandle_u_0 local_708;
  FReplicatedObjectInfo *local_700;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_6f8;
  undefined8 uStack_6f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  int local_6d0;
  undefined4 uStack_6cc;
  uint local_6c8 [2];
  FReplicationReader *local_6c0;
  uint local_6b8;
  uint uStack_6b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6b0;
  undefined4 local_6a8;
  uint uStack_6a4;
  uint uStack_6a0;
  undefined4 uStack_69c;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_698;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_690;
  undefined8 local_670;
  FNetBitArrayView *local_668;
  TBaseKeyIterator<0> local_660;
  TBaseKeyIterator<0> local_648;
  FNetRefHandle_u_0 local_630;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_628;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_588;
  int local_568;
  int local_564;
  FNetRefHandle local_560;
  int local_558;
  int local_554;
  TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&> local_550;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_540;
  ulonglong local_538;
  ulonglong local_530;
  <lambda_1> local_528;
  FNetRefHandle_u_0 local_518;
  undefined4 local_510;
  FNetRefHandle local_50c;
  undefined1 local_504 [12];
  longlong *local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f0;
  undefined4 local_4d0;
  FNetRefHandle local_4cc;
  longlong *local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b8;
  undefined8 uStack_498;
  undefined1 local_490 [12];
  uint uStack_484;
  TBitArray<FDefaultBitArrayAllocator> *local_480;
  undefined8 uStack_478;
  longlong local_470;
  int iStack_468;
  undefined4 uStack_464;
  undefined1 local_460 [12];
  uint uStack_454;
  TBitArray<FDefaultBitArrayAllocator> *local_450;
  undefined8 uStack_448;
  longlong local_440;
  int iStack_438;
  undefined4 uStack_434;
  undefined1 local_430 [12];
  uint uStack_424;
  TBitArray<FDefaultBitArrayAllocator> *local_420;
  undefined8 uStack_418;
  longlong local_410;
  int iStack_408;
  undefined4 uStack_404;
  undefined1 local_400 [12];
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *local_3f0;
  undefined8 uStack_3e8;
  longlong local_3e0;
  undefined8 uStack_3d8;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c8;
  undefined8 uStack_3a8;
  ulonglong *local_3a0;
  uint *local_398;
  <lambda_2> local_390;
  FNetRefHandle_u_0 *local_380;
  uint *local_378;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  TRangedForIterator local_330;
  TRangedForIterator local_300;
  TRangedForIterator local_2d0;
  TRangedForIterator local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  undefined4 local_1b4;
  undefined4 local_194;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  FScriptContainerElement local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  local_540 = param_6;
  bVar34 = CpuChannel->Enabled < 0;
  local_700 = param_1;
  local_6c0 = this;
  local_668 = param_2;
  if (bVar34) {
    local_758 = '\0';
  }
  else {
    local_758 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1559,"FReplicationReader_UpdateObjectReferenceTracking",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0x617);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1559);
  }
  cVar20 = !bVar34;
  pTVar1 = &param_1->UnresolvedObjectReferences;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
             *)pTVar1,
            ((*(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
             *(int *)&(param_1->UnresolvedObjectReferences).field_0x34) -
            *(int *)&param_5->field_0x34) + *(int *)&param_5->field_0x8);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_750 = 1;
  uVar21 = *(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
           *(int *)&(param_1->UnresolvedObjectReferences).field_0x34;
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar21);
    iVar11 = (uint)local_750;
    if (3 < uVar21) {
      uVar26 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_510 = (undefined4)lVar19;
      iVar11 = (uint)local_750 << ((byte)lVar19 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar11)) {
      local_50 = iVar11;
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Rehash((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
              *)local_98);
    }
  }
  local_608._padding_._0_4_ = 0;
  puVar32 = &(param_1->UnresolvedObjectReferences).field_0x10;
  local_608._padding_._4_4_ = (undefined4)local_750;
  local_608.UnvisitedBitMask = 0xffffffff;
  local_608.CurrentBitIndex = 0;
  local_608.BaseBitIndex = 0;
  local_608.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar32;
  if (*(int *)&(param_1->UnresolvedObjectReferences).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
  }
  TStack_738._padding_ = CONCAT44(local_608._padding_._4_4_,(undefined4)local_608._padding_);
  TStack_738._16_8_ = CONCAT44(local_608.CurrentBitIndex,local_608.UnvisitedBitMask);
  TStack_738._24_8_ = CONCAT44(local_608._28_4_,local_608.BaseBitIndex);
  local_718 = *(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
              *(int *)&(param_1->UnresolvedObjectReferences).field_0x34;
  TStack_738.Array = local_608.Array;
  local_480 = local_608.Array;
  uStack_464 = uStack_714;
  local_740 = pTVar1;
  local_490._0_8_ = pTVar1;
  unique0x10002d59 = TStack_738._padding_;
  uStack_478 = TStack_738._16_8_;
  local_470 = TStack_738._24_8_;
  iStack_468 = local_718;
  pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_270,(TBitArray<FDefaultBitArrayAllocator> *)puVar32,
                       *(int *)&(param_1->UnresolvedObjectReferences).field_0x28);
  TStack_738._padding_ = pTVar12->_padding_;
  TStack_738.Array = pTVar12->Array;
  TStack_738.UnvisitedBitMask = pTVar12->UnvisitedBitMask;
  TStack_738.CurrentBitIndex = pTVar12->CurrentBitIndex;
  TStack_738._24_8_ = *(undefined8 *)&pTVar12->BaseBitIndex;
  local_718 = *(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
              *(int *)&(param_1->UnresolvedObjectReferences).field_0x34;
  local_330.InitialNum = local_718;
  local_330._44_4_ = uStack_714;
  local_740 = pTVar1;
  local_330._padding_ = (longlong)pTVar1;
  local_330._padding_ = TStack_738._padding_;
  local_330._padding_ = (longlong)TStack_738.Array;
  local_330._padding_ = TStack_738._16_8_;
  local_330._padding_ = TStack_738._24_8_;
  bVar34 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_490,&local_330);
  if (bVar34) {
    do {
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Emplace<UE::Net::FNetRefHandle_const_&>
                ((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                  *)local_98,&local_50c,
                 (bool *)(*(longlong *)(undefined1 *)local_490._0_8_ +
                         ((longlong)uStack_478._4_4_ * 3 + 1) * 8));
      uStack_478 = CONCAT44(uStack_478._4_4_,(uint)uStack_478 & ~uStack_484);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_490 + 8));
      bVar34 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_490,&local_330);
    } while (bVar34);
  }
  local_528.NewUnresolvedReferences = param_5;
  local_528.ReplicationInfo = param_1;
  FNetBitArrayHelper::
  ForAllSetBits<_UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_::__l3::<lambda_1>_&>
            (local_668->Storage,local_668->WordCount,local_668->BitCount,&local_528);
  if (param_3) {
    `UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking'::__l3::<lambda_1>::
    operator()(&local_528,0xffffffff);
  }
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  uVar21 = *(int *)&param_5->field_0x8 - *(int *)&param_5->field_0x34;
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,uVar21);
    iVar11 = (uint)local_750;
    if (3 < uVar21) {
      uVar26 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_50c.field0_0x0.Value._4_4_ = (undefined4)lVar19;
      iVar11 = (uint)local_750 << ((byte)lVar19 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar11)) {
      local_a0 = iVar11;
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Rehash((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
              *)local_e8);
    }
  }
  pFVar33 = local_700;
  local_5e8._padding_._0_4_ = 0;
  iVar11 = (int)local_750;
  local_5e8.UnvisitedBitMask = 0xffffffff;
  local_5e8.CurrentBitIndex = 0;
  local_5e8.BaseBitIndex = 0;
  local_5e8._padding_._4_4_ = iVar11;
  local_5e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar32;
  if (*(int *)&(local_700->UnresolvedObjectReferences).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e8);
  }
  TStack_738._padding_ = CONCAT44(local_5e8._padding_._4_4_,(undefined4)local_5e8._padding_);
  TStack_738._16_8_ = CONCAT44(local_5e8.CurrentBitIndex,local_5e8.UnvisitedBitMask);
  TStack_738._24_8_ = CONCAT44(local_5e8._28_4_,local_5e8.BaseBitIndex);
  iStack_438 = *(int *)&(pFVar33->UnresolvedObjectReferences).field_0x8 -
               *(int *)&(pFVar33->UnresolvedObjectReferences).field_0x34;
  TStack_738.Array = local_5e8.Array;
  local_450 = local_5e8.Array;
  uStack_434 = uStack_714;
  local_740 = pTVar1;
  local_460._0_8_ = pTVar1;
  unique0x10002d79 = TStack_738._padding_;
  uStack_448 = TStack_738._16_8_;
  local_440 = TStack_738._24_8_;
  local_718 = iStack_438;
  pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_250,(TBitArray<FDefaultBitArrayAllocator> *)puVar32,
                       *(int *)&(pFVar33->UnresolvedObjectReferences).field_0x28);
  TStack_738._padding_ = pTVar12->_padding_;
  TStack_738.Array = pTVar12->Array;
  TStack_738.UnvisitedBitMask = pTVar12->UnvisitedBitMask;
  TStack_738.CurrentBitIndex = pTVar12->CurrentBitIndex;
  TStack_738._24_8_ = *(undefined8 *)&pTVar12->BaseBitIndex;
  local_718 = *(int *)&(pFVar33->UnresolvedObjectReferences).field_0x8 -
              *(int *)&(pFVar33->UnresolvedObjectReferences).field_0x34;
  local_300.InitialNum = local_718;
  local_300._44_4_ = uStack_714;
  local_740 = pTVar1;
  local_300._padding_ = (longlong)pTVar1;
  local_300._padding_ = TStack_738._padding_;
  local_300._padding_ = (longlong)TStack_738.Array;
  local_300._padding_ = TStack_738._16_8_;
  local_300._padding_ = TStack_738._24_8_;
  bVar34 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_460,&local_300);
  if (bVar34) {
    do {
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Emplace<UE::Net::FNetRefHandle_const_&>
                ((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                  *)local_e8,(FNetRefHandle *)local_504,
                 (bool *)(*(longlong *)(undefined1 *)local_460._0_8_ +
                         ((longlong)uStack_448._4_4_ * 3 + 1) * 8));
      uStack_448 = CONCAT44(uStack_448._4_4_,(uint)uStack_448 & ~uStack_454);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_460 + 8));
      bVar34 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_460,&local_300);
    } while (bVar34);
  }
  (pFVar33->field7_0x15c).Value = (pFVar33->field7_0x15c).Value & 0xfffeffff;
  uVar21 = 0;
  if (0 < local_e8._8_4_ - local_b4) {
    uVar21 = 0x10000;
  }
  (pFVar33->field7_0x15c).Value = (pFVar33->field7_0x15c).Value | uVar21;
  uVar21 = (pFVar33->field7_0x15c).Value;
  pFVar13 = TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
            ::Find((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                    *)pTVar1,0xffffffff);
  local_748[0] = pFVar33->InternalIndex;
  local_628.UnvisitedBitMask = 0xffffffff;
  local_628.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  (pFVar33->field7_0x15c).Value =
       -(uint)(pFVar13 != (FNetRefHandle *)0x0) & 0x20000 | uVar21 & 0xfffdffff;
  local_628._padding_._0_4_ = 0;
  local_628.CurrentBitIndex = 0;
  local_628.BaseBitIndex = 0;
  local_628._padding_._4_4_ = iVar11;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_628);
  }
  TStack_738._padding_ = CONCAT44(local_628._padding_._4_4_,(undefined4)local_628._padding_);
  local_740 = (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               *)local_98;
  TStack_738._16_8_ = CONCAT44(local_628.CurrentBitIndex,local_628.UnvisitedBitMask);
  TStack_738._24_8_ = CONCAT44(local_628._28_4_,local_628.BaseBitIndex);
  iStack_408 = local_98._8_4_ - local_64;
  TStack_738.Array = local_628.Array;
  local_420 = local_628.Array;
  uStack_404 = uStack_714;
  local_430._0_8_ = local_740;
  unique0x10002d99 = TStack_738._padding_;
  uStack_418 = TStack_738._16_8_;
  local_410 = TStack_738._24_8_;
  local_718 = iStack_408;
  pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_230,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70
                      );
  local_740 = (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               *)local_98;
  TStack_738._padding_ = pTVar12->_padding_;
  TStack_738.Array = pTVar12->Array;
  TStack_738.UnvisitedBitMask = pTVar12->UnvisitedBitMask;
  TStack_738.CurrentBitIndex = pTVar12->CurrentBitIndex;
  TStack_738._24_8_ = *(undefined8 *)&pTVar12->BaseBitIndex;
  local_718 = local_98._8_4_ - local_64;
  local_2d0.InitialNum = local_98._8_4_ - local_64;
  local_2d0._44_4_ = uStack_714;
  local_2d0._padding_ = (longlong)local_740;
  local_2d0._padding_ = TStack_738._padding_;
  local_2d0._padding_ = (longlong)TStack_738.Array;
  local_2d0._padding_ = TStack_738._16_8_;
  local_2d0._padding_ = TStack_738._24_8_;
  bVar34 = TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_430,&local_2d0);
  pFVar8 = local_6c0;
  if (bVar34) {
    do {
      local_708 = (FNetRefHandle_u_0)
                  *(FNetRefHandle_u_0 *)
                   &((FNetRefHandle_u_0 *)
                    (*(longlong *)local_430._0_8_ + (longlong)uStack_418._4_4_ * 0x10))->_s_0;
      uVar26 = ZPULL(local_708,0,0x36);
      if (local_e8._8_4_ != local_b4) {
        FVar25 = (ForElementType<FSetElementId>)local_b0;
        if (local_a8 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_a8;
        }
        for (iVar11 = *(int *)((longlong)FVar25 +
                              ((uVar26 >> 0x20) * 0x17 + uVar26 & (ulonglong)(local_a0 - 1)) * 4);
            iVar11 != -1; iVar11 = *(int *)(local_e8._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
          if ((*(ulonglong *)(local_e8._0_8_ + (longlong)iVar11 * 0x10) & 0x3fffffffffffff) ==
              uVar26) goto LAB_1442e94fd;
        }
      }
      FVar2 = (param_4->AllocatorInstance).SecondaryData;
      FVar14 = (ForElementType<UE::Net::FNetRefHandle>)param_4;
      if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar14 = FVar2;
      }
      if ((ulonglong)FVar14 <= &local_708) {
        FVar14 = (ForElementType<UE::Net::FNetRefHandle>)param_4;
        if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar14 = FVar2;
        }
        if (&local_708 < (FNetRefHandle_u_0 *)((longlong)FVar14 + (longlong)param_4->ArrayMax * 8))
        {
          local_770 = (longlong)param_4->ArrayNum;
          local_768 = 8;
          local_780 = (ForElementType<UE::Net::FNetRefHandle>)param_4;
          if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            local_780 = FVar2;
          }
          local_788 = &local_708;
          local_778 = (longlong)param_4->ArrayMax;
          bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar34) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar11 = param_4->ArrayNum;
      if (iVar11 == param_4->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                           (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar11 + 1;
      FVar2 = (param_4->AllocatorInstance).SecondaryData;
      FVar14 = (ForElementType<UE::Net::FNetRefHandle>)param_4;
      if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar14 = FVar2;
      }
      ((FNetRefHandle_u_0 *)((longlong)FVar14 + (longlong)iVar11 * 8))->_s_0 =
           (FNetRefHandle_u_0_s_0)local_708;
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                (&local_648,
                 (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  *)&pFVar8->UnresolvedHandleToDependents,(FNetRefHandle *)&local_708);
      if (local_648.Index != -1) {
        lVar19 = *(longlong *)&(local_648.Set)->Elements;
        do {
          if (*(uint *)(lVar19 + 8 + (longlong)local_648.Index * 0x18) == local_748[0]) {
            TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
            ::RemoveByIndex(local_648.Set,local_648.Index);
            local_648.Index = -1;
            break;
          }
          local_648.Index = local_648.NextIndex;
          if (local_648.NextIndex == -1) break;
          do {
            local_648.NextIndex = *(int *)(lVar19 + 0x10 + (longlong)local_648.Index * 0x18);
            if ((*(ulonglong *)(lVar19 + (longlong)local_648.Index * 0x18) & 0x3fffffffffffff) ==
                ((local_648.Key)->field0_0x0 & 0x3fffffffffffff)) break;
            local_648.Index = local_648.NextIndex;
          } while (local_648.NextIndex != -1);
        } while (local_648.Index != -1);
      }
      RemoveFromUnresolvedCache(pFVar8,(FNetRefHandle)local_708._s_0);
      uVar21 = local_748[0];
      if (5 < (byte)LogIris._0_1_) {
        pFVar3 = pFVar8->NetRefHandleManager;
        bVar34 = FNetBitArray::GetBit(&pFVar3->AssignedInternalIndices,local_748[0]);
        if ((!bVar34) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("AssignedInternalIndices.GetBit(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                ,0x245,L""), bVar34)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(pFVar3,uVar21);
        local_518._s_0 = *(FNetRefHandle_u_0_s_0 *)&(pFVar15->RefHandle).field0_0x0;
        FNetRefHandle::ToString((FNetRefHandle *)&local_518._s_0,&local_360);
        FNetRefHandle::ToString((FNetRefHandle *)&local_708._s_0,&local_340);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
      }
LAB_1442e94fd:
      uStack_418 = CONCAT44(uStack_418._4_4_,(uint)uStack_418 & ~uStack_424);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_430 + 8));
      bVar34 = TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_430,&local_2d0);
    } while (bVar34);
    iVar11 = (int)local_750;
    pFVar33 = local_700;
  }
  local_5c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_5c8._padding_._0_4_ = 0;
  local_5c8.UnvisitedBitMask = 0xffffffff;
  local_5c8.CurrentBitIndex = 0;
  local_5c8.BaseBitIndex = 0;
  local_5c8._padding_._4_4_ = iVar11;
  if (local_c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5c8);
  }
  uStack_6f0 = CONCAT44(local_5c8._padding_._4_4_,(undefined4)local_5c8._padding_);
  local_6f8 = (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               *)local_e8;
  uStack_6e0 = CONCAT44(local_5c8.CurrentBitIndex,local_5c8.UnvisitedBitMask);
  uStack_6d8 = CONCAT44(local_5c8._28_4_,local_5c8.BaseBitIndex);
  local_6d0 = local_e8._8_4_ - local_b4;
  pTStack_6e8 = local_5c8.Array;
  uStack_3d8._4_4_ = uStack_6cc;
  uStack_3d8._0_4_ = local_6d0;
  local_3f0 = local_5c8.Array;
  local_400._0_8_ = local_6f8;
  unique0x10002db9 = uStack_6f0;
  uStack_3e8 = uStack_6e0;
  local_3e0 = uStack_6d8;
  pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_210,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),local_c0
                      );
  local_6f8 = (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               *)local_e8;
  uStack_6f0 = pTVar12->_padding_;
  pTStack_6e8 = pTVar12->Array;
  uStack_6e0._0_4_ = pTVar12->UnvisitedBitMask;
  uStack_6e0._4_4_ = pTVar12->CurrentBitIndex;
  uStack_6d8 = *(longlong *)&pTVar12->BaseBitIndex;
  local_6d0 = local_e8._8_4_ - local_b4;
  local_2a0._44_4_ = uStack_6cc;
  local_2a0.InitialNum = local_6d0;
  local_2a0._padding_ = (longlong)local_6f8;
  local_2a0._padding_ = uStack_6f0;
  local_2a0._padding_ = (longlong)pTStack_6e8;
  local_2a0._padding_ = uStack_6e0;
  local_2a0._padding_ = uStack_6d8;
  bVar34 = TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_400,&local_2a0);
  pFVar8 = local_6c0;
  if (bVar34) {
    do {
      local_630 = (FNetRefHandle_u_0)
                  ((FNetRefHandle_u_0 *)
                  (*(longlong *)local_400._0_8_ + (longlong)uStack_3e8._4_4_ * 0x10))->Value;
      uVar26 = local_630.Value & 0x3fffffffffffff;
      if (local_98._8_4_ != local_64) {
        FVar25 = (ForElementType<FSetElementId>)local_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_58;
        }
        for (iVar11 = *(int *)((longlong)FVar25 +
                              ((uVar26 >> 0x20) * 0x17 + uVar26 & (ulonglong)(local_50 - 1)) * 4);
            iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
          if ((*(ulonglong *)(local_98._0_8_ + (longlong)iVar11 * 0x10) & 0x3fffffffffffff) ==
              uVar26) goto LAB_1442e9803;
        }
      }
      local_380 = &local_630;
      local_378 = local_748;
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  *)&pFVar8->UnresolvedHandleToDependents,
                 (TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&> *)
                 (local_504 + 4),(bool *)&local_380);
      uVar21 = local_748[0];
      if (5 < (byte)LogIris._0_1_) {
        pFVar3 = pFVar8->NetRefHandleManager;
        bVar34 = FNetBitArray::GetBit(&pFVar3->AssignedInternalIndices,local_748[0]);
        if ((!bVar34) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("AssignedInternalIndices.GetBit(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                ,0x245,L""), bVar34)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(pFVar3,uVar21);
        local_550.Value = *(uint **)&(pFVar15->RefHandle).field0_0x0;
        FNetRefHandle::ToString((FNetRefHandle *)&local_550.Value,&local_370);
        FNetRefHandle::ToString((FNetRefHandle *)&local_630._s_0,&local_350);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
      }
LAB_1442e9803:
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,(uint)uStack_3e8 & ~uStack_3f4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_400 + 8));
      bVar34 = TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_400,&local_2a0);
    } while (bVar34);
    iVar11 = (int)local_750;
    pFVar33 = local_700;
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  pTVar1 = local_540;
  if (bRemapDynamicObjects == false) goto LAB_1442ea61c;
  this_00 = &pFVar33->ResolvedDynamicObjectReferences;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
             *)this_00,
            ((*(int *)&local_540->field_0x8 - *(int *)&local_540->field_0x34) -
            *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x34) +
            *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x8);
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_138._8_8_ = 0;
  local_10c = 0x80;
  local_108 = -1;
  uVar21 = *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x8 -
           *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x34;
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_138,uVar21);
    iVar29 = iVar11;
    if (3 < uVar21) {
      uVar26 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_4d0 = (undefined4)lVar19;
      iVar29 = iVar11 << ((byte)lVar19 & 0x1f);
    }
    if ((local_f0 == 0) || (local_f0 < iVar29)) {
      local_f0 = iVar29;
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Rehash((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
              *)local_138);
    }
  }
  puVar32 = &(pFVar33->ResolvedDynamicObjectReferences).field_0x10;
  local_5a8._padding_._0_4_ = 0;
  local_5a8.UnvisitedBitMask = 0xffffffff;
  local_5a8.CurrentBitIndex = 0;
  local_5a8.BaseBitIndex = 0;
  local_5a8._padding_._4_4_ = iVar11;
  local_5a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar32;
  if (*(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5a8);
  }
  TStack_690._padding_ = CONCAT44(local_5a8._padding_._4_4_,(undefined4)local_5a8._padding_);
  TStack_690.CurrentBitIndex = local_5a8.CurrentBitIndex;
  TStack_690.UnvisitedBitMask = local_5a8.UnvisitedBitMask;
  TStack_690._28_4_ = local_5a8._28_4_;
  TStack_690.BaseBitIndex = local_5a8.BaseBitIndex;
  TStack_690.Array = local_5a8.Array;
  local_670 = CONCAT44(local_670._4_4_,
                       *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x8 -
                       *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x34);
  TStack_3c8.Array = local_5a8.Array;
  uStack_3a8 = local_670;
  local_698 = this_00;
  local_3d0 = this_00;
  TStack_3c8._padding_ = TStack_690._padding_;
  TStack_3c8._16_8_ = TStack_690._16_8_;
  TStack_3c8._24_8_ = TStack_690._24_8_;
  pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1f0,(TBitArray<FDefaultBitArrayAllocator> *)puVar32,
                       *(int *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x28);
  TStack_690._padding_ = pTVar12->_padding_;
  pTVar5 = pTVar12->Array;
  uVar6._0_4_ = pTVar12->UnvisitedBitMask;
  uVar6._4_4_ = pTVar12->CurrentBitIndex;
  TStack_690.BaseBitIndex = pTVar12->BaseBitIndex;
  TStack_690._28_4_ = *(undefined4 *)&pTVar12->field_0x1c;
  TStack_690.Array = pTVar5;
  TStack_690._16_8_ = uVar6;
  while( true ) {
    pTVar10 = local_3d0;
    if (*(int *)(&local_3d0->field_0x0 + 8) - *(int *)(&local_3d0->field_0x0 + 0x34) !=
        (int)uStack_3a8) {
      local_757 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_757);
    }
    pFVar7 = local_700;
    if (((TStack_3c8.CurrentBitIndex == uVar6._4_4_) && (TStack_3c8.Array == pTVar5)) &&
       (pTVar10 == this_00)) break;
    TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
    Emplace<UE::Net::FNetRefHandle_const_&>
              ((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                *)local_138,&local_4cc,
               (bool *)(*(longlong *)&pTVar10->field_0x0 +
                       ((longlong)TStack_3c8.CurrentBitIndex * 3 + 1) * 8));
    TStack_3c8.UnvisitedBitMask = TStack_3c8.UnvisitedBitMask & ~TStack_3c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c8);
  }
  local_390.ReplicationInfo = local_700;
  local_390.NewMappedDynamicReferences = pTVar1;
  FNetBitArrayHelper::
  ForAllSetBits<_UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_::__l67::<lambda_2>_&>
            (local_668->Storage,local_668->WordCount,local_668->BitCount,&local_390);
  uVar26 = 0;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (ForElementType<unsigned_int>)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = -1;
  local_154 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  uVar21 = *(int *)&(pFVar7->ResolvedDynamicObjectReferences).field_0x8 -
           *(int *)&(pFVar7->ResolvedDynamicObjectReferences).field_0x34;
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_188,uVar21);
    uVar31 = (uint)local_750;
    uVar30 = uVar31;
    if (3 < uVar21) {
      uVar22 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_4cc.field0_0x0.Value._4_4_ = (undefined4)lVar19;
      uVar30 = uVar31 << ((byte)lVar19 & 0x1f);
    }
    if ((local_140 == 0) || ((int)local_140 < (int)uVar30)) {
      local_140 = uVar30;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
      }
      if (uVar30 != 0) {
        uVar21 = uVar30;
        if (uVar30 < 2) {
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            uVar21 = 0;
            goto LAB_1442e9bba;
          }
        }
        else {
LAB_1442e9bba:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_148,0,uVar21,4);
        }
        if (0 < (int)uVar30) {
          uVar27 = (ulonglong)uVar30;
          uVar22 = uVar26;
          do {
            FVar18.Data = local_150;
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_148.Data;
            }
            uVar16 = (longlong)(int)uVar30 - 1U & uVar22;
            uVar22 = uVar22 + 1;
            *(undefined4 *)(FVar18.Data + uVar16 * 4) = 0xffffffff;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
      }
      if (local_140 != 0) {
        pTStack_6b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
        local_6b8 = 0;
        uStack_6a4 = 0;
        uStack_6a0 = 0;
        uStack_6b4 = uVar31;
        if (local_160 != 0) {
          FVar24 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
          if (local_168 != (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_168;
          }
          uVar21 = *(uint *)FVar24;
          uVar22 = uVar26;
          while (uVar21 == 0) {
            uStack_6a0 = (int)uVar22 + 0x20;
            uVar22 = (ulonglong)uStack_6a0;
            iVar11 = (int)uVar26;
            local_6b8 = iVar11 + 1;
            uVar26 = (ulonglong)local_6b8;
            if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_6b8) goto LAB_1442e9cdc;
            uVar21 = ((uint *)((longlong)FVar24 + 4))[iVar11];
          }
          uStack_6b4 = -uVar21 & uVar21;
          uVar26 = (ulonglong)uStack_6b4 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_568 = (int)lVar19;
          uStack_6a4 = local_568 + -1 + uStack_6a0;
          uVar26 = (ulonglong)uStack_6a4;
          if ((int)local_160 < (int)uStack_6a4) {
LAB_1442e9cdc:
            uVar26 = (ulonglong)local_160;
            uStack_6a4 = local_160;
          }
        }
        local_6a8 = 0xffffffff;
        local_4f8 = (longlong *)local_188;
        local_4f0._padding_ = CONCAT44(uStack_6b4,local_6b8);
        local_4f0.CurrentBitIndex = uStack_6a4;
        local_4f0.UnvisitedBitMask = 0xffffffff;
        local_4f0._28_4_ = uStack_69c;
        local_4f0.BaseBitIndex = uStack_6a0;
        local_4f0.Array = pTStack_6b0;
        if ((int)uVar26 < (int)local_160) {
          do {
            puVar28 = (ulonglong *)((longlong)(int)uVar26 * 0x10 + *local_4f8);
            uVar21 = (int)((*puVar28 & 0x3fffffffffffff) >> 0x20) * 0x17 +
                     (int)(*puVar28 & 0x3fffffffffffff) & local_140 - 1;
            *(uint *)((longlong)puVar28 + 0xc) = uVar21;
            FVar18.Data = local_150;
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_148.Data;
            }
            uVar22 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar21;
            *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(FVar18.Data + uVar22 * 4);
            *(int *)(FVar18.Data + uVar22 * 4) = (int)uVar26;
            local_4f0.UnvisitedBitMask = local_4f0.UnvisitedBitMask & ~local_4f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4f0);
            uVar26 = (ulonglong)(uint)local_4f0.CurrentBitIndex;
          } while (local_4f0.CurrentBitIndex < (local_4f0.Array)->NumBits);
        }
      }
    }
  }
  local_588._padding_._4_4_ = (undefined4)local_750;
  local_588.UnvisitedBitMask = 0xffffffff;
  local_588._padding_._0_4_ = 0;
  local_588.CurrentBitIndex = 0;
  local_588.BaseBitIndex = 0;
  local_588.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar32;
  if (*(int *)&(pFVar7->ResolvedDynamicObjectReferences).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_588);
  }
  uVar21 = *(uint *)&(pFVar7->ResolvedDynamicObjectReferences).field_0x28;
  local_6d0 = *(int *)&(pFVar7->ResolvedDynamicObjectReferences).field_0x8 -
              *(int *)&(pFVar7->ResolvedDynamicObjectReferences).field_0x34;
  uStack_6f0 = CONCAT44(local_588._padding_._4_4_,(undefined4)local_588._padding_);
  uStack_6e0._4_4_ = local_588.CurrentBitIndex;
  uStack_6e0._0_4_ = local_588.UnvisitedBitMask;
  uStack_6d8._4_4_ = local_588._28_4_;
  uStack_6d8._0_4_ = local_588.BaseBitIndex;
  uVar30 = uVar21 & 0xffffffe0;
  pTStack_6e8 = local_588.Array;
  iVar11 = (int)uVar21 >> 5;
  local_670 = CONCAT44(uStack_6cc,local_6d0);
  TStack_690.Array = local_588.Array;
  local_6f8 = this_00;
  local_698 = this_00;
  TStack_690._padding_ = uStack_6f0;
  TStack_690._16_8_ = uStack_6e0;
  TStack_690._24_8_ = uStack_6d8;
  if (((int)uVar21 < 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar34)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar31 = *(uint *)&(pFVar33->ResolvedDynamicObjectReferences).field_0x28;
  if (uVar21 != uVar31) {
    puVar23 = *(undefined1 **)&(pFVar33->ResolvedDynamicObjectReferences).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar32;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar11 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar11;
      uVar30 = uVar30 + 0x20;
      iVar11 = iVar11 + 1;
      uVar21 = uVar31;
      if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1442e9f00;
      uVar21 = *(uint *)(puVar23 + lVar19 * 4 + 4);
    }
    uVar26 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_564 = (int)lVar19;
    uVar21 = local_564 + -1 + uVar30;
    if ((int)uVar31 < (int)uVar21) {
      uVar21 = uVar31;
    }
  }
LAB_1442e9f00:
  while( true ) {
    pTVar1 = local_698;
    if (*(int *)(&local_698->field_0x0 + 8) - *(int *)(&local_698->field_0x0 + 0x34) !=
        (int)local_670) {
      local_756 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_756);
    }
    uVar30 = local_110;
    if (((TStack_690.CurrentBitIndex == uVar21) &&
        (TStack_690.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar32)) &&
       (pTVar1 == this_00)) break;
    TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
    Emplace<UE::Net::FNetRefHandle_const_&>
              ((TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
                *)local_188,&local_560,
               (bool *)(*(longlong *)&pTVar1->field_0x0 +
                       ((longlong)TStack_690.CurrentBitIndex * 3 + 1) * 8));
    TStack_690.UnvisitedBitMask = TStack_690.UnvisitedBitMask & ~TStack_690._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_690);
  }
  iVar11 = 0;
  uStack_6d8._0_4_ = 0;
  local_6c8[0] = local_700->InternalIndex;
  uVar21 = (uint)local_750;
  uStack_6e0._4_4_ = 0;
  if (local_110 != 0) {
    FVar24 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_118;
    }
    uVar31 = *(uint *)FVar24;
    while (uVar31 == 0) {
      lVar19 = (longlong)iVar11;
      uStack_6d8._0_4_ = (int)uStack_6d8 + 0x20;
      iVar11 = iVar11 + 1;
      uStack_6e0._4_4_ = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1442ea003;
      uVar31 = ((uint *)((longlong)FVar24 + 4))[lVar19];
    }
    uVar21 = -uVar31 & uVar31;
    uVar26 = (ulonglong)uVar21 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_560.field0_0x0.Value._4_4_ = (undefined4)lVar19;
    uStack_6e0._4_4_ = local_560.field0_0x0.Value._4_4_ + -1 + (int)uStack_6d8;
    if ((int)local_110 < (int)uStack_6e0._4_4_) {
      uStack_6e0._4_4_ = local_110;
    }
  }
LAB_1442ea003:
  local_6f8 = (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               *)local_138;
  pTStack_6e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  local_6d0 = local_138._8_4_ - local_104;
  uVar31 = local_110 & 0xffffffe0;
  uStack_6f0 = CONCAT44(uVar21,iVar11);
  uStack_6e0._0_4_ = 0xffffffff;
  uStack_6d8._4_4_ = local_1b4;
  TStack_4b8._padding_ = uStack_6f0;
  iVar11 = (int)local_110 >> 5;
  uStack_498 = CONCAT44(uStack_6cc,local_6d0);
  bVar17 = (byte)local_110;
  TStack_4b8.UnvisitedBitMask = 0xffffffff;
  TStack_4b8.CurrentBitIndex = uStack_6e0._4_4_;
  TStack_4b8.BaseBitIndex = (int)uStack_6d8;
  TStack_4b8._28_4_ = local_1b4;
  local_4c0 = (longlong *)local_6f8;
  TStack_4b8.Array = pTStack_6e8;
  if (((int)local_110 < 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar34)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = local_6c0;
  if (uVar30 != local_110) {
    FVar24 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_118;
    }
    uVar21 = -1 << (bVar17 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar11 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar11;
      uVar31 = uVar31 + 0x20;
      iVar11 = iVar11 + 1;
      uVar30 = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1442ea128;
      uVar21 = ((uint *)((longlong)FVar24 + 4))[lVar19];
    }
    uVar26 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_558 = (int)lVar19;
    uVar30 = (uVar31 - 1) + local_558;
    if ((int)local_110 < (int)uVar30) {
      uVar30 = local_110;
    }
  }
LAB_1442ea128:
  while( true ) {
    plVar9 = local_4c0;
    if ((int)local_4c0[1] - *(int *)((longlong)local_4c0 + 0x34) != (int)uStack_498) {
      local_755[0] = 0;
      `TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_755);
    }
    uVar21 = local_160;
    if (((TStack_4b8.CurrentBitIndex == uVar30) &&
        (TStack_4b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
       (plVar9 == (longlong *)local_138)) break;
    local_538 = *(ulonglong *)(*plVar9 + (longlong)TStack_4b8.CurrentBitIndex * 0x10);
    uVar26 = local_538 & 0x3fffffffffffff;
    if (local_188._8_4_ != local_154) {
      FVar18.Data = local_150;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FVar18.Data = local_148.Data;
      }
      for (iVar11 = *(int *)(FVar18.Data +
                            ((uVar26 >> 0x20) * 0x17 + uVar26 & (ulonglong)(local_140 - 1)) * 4);
          iVar11 != -1; iVar11 = *(int *)(local_188._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
        if ((*(ulonglong *)(local_188._0_8_ + (longlong)iVar11 * 0x10) & 0x3fffffffffffff) == uVar26
           ) goto LAB_1442ea2d1;
      }
    }
    TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_660,
               (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                *)&pFVar8->ResolvedDynamicHandleToDependents,(FNetRefHandle *)&local_538);
    if (local_660.Index != -1) {
      lVar19 = *(longlong *)&(local_660.Set)->Elements;
      do {
        if (*(uint *)(lVar19 + 8 + (longlong)local_660.Index * 0x18) == local_6c8[0]) {
          TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
          ::RemoveByIndex(local_660.Set,local_660.Index);
          local_660.Index = -1;
          break;
        }
        local_660.Index = local_660.NextIndex;
        if (local_660.NextIndex == -1) break;
        do {
          local_660.NextIndex = *(int *)(lVar19 + 0x10 + (longlong)local_660.Index * 0x18);
          if ((*(ulonglong *)(lVar19 + (longlong)local_660.Index * 0x18) & 0x3fffffffffffff) ==
              ((local_660.Key)->field0_0x0 & 0x3fffffffffffff)) break;
          local_660.Index = local_660.NextIndex;
        } while (local_660.NextIndex != -1);
      } while (local_660.Index != -1);
    }
LAB_1442ea2d1:
    TStack_4b8.UnvisitedBitMask = TStack_4b8.UnvisitedBitMask & ~TStack_4b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b8);
  }
  iVar11 = 0;
  iVar29 = 0;
  TStack_738.CurrentBitIndex = 0;
  if (local_160 != 0) {
    FVar24 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
    if (local_168 != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_168;
    }
    uVar30 = *(uint *)FVar24;
    while (uVar30 == 0) {
      lVar19 = (longlong)iVar11;
      iVar29 = iVar29 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_738.CurrentBitIndex = local_160;
      if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1442ea376;
      uVar30 = ((uint *)((longlong)FVar24 + 4))[lVar19];
    }
    local_750 = (ulonglong)(-uVar30 & uVar30);
    uVar26 = local_750 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_554 = (int)lVar19;
    TStack_738.CurrentBitIndex = local_554 + -1 + iVar29;
    if ((int)local_160 < TStack_738.CurrentBitIndex) {
      TStack_738.CurrentBitIndex = local_160;
    }
  }
LAB_1442ea376:
  local_740 = (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
               *)local_188;
  uVar30 = local_160 & 0xffffffe0;
  TStack_738.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
  local_6d0 = local_188._8_4_ - local_154;
  uStack_6e0 = CONCAT44(TStack_738.CurrentBitIndex,0xffffffff);
  TStack_738._padding_ = CONCAT44((int)local_750,iVar11);
  uStack_6d8 = CONCAT44(local_194,iVar29);
  iVar11 = (int)local_160 >> 5;
  uStack_714 = uStack_6cc;
  local_718 = local_6d0;
  bVar17 = (byte)local_160;
  TStack_738.UnvisitedBitMask = 0xffffffff;
  TStack_738._24_8_ = uStack_6d8;
  local_6f8 = local_740;
  uStack_6f0 = TStack_738._padding_;
  pTStack_6e8 = TStack_738.Array;
  if (((int)local_160 < 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar34)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = local_6c0;
  if (uVar21 != local_160) {
    FVar24 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
    if (local_168 != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_168;
    }
    uVar21 = -1 << (bVar17 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar11 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar11;
      uVar30 = uVar30 + 0x20;
      iVar11 = iVar11 + 1;
      uVar21 = local_160;
      if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1442ea4a0;
      uVar21 = ((uint *)((longlong)FVar24 + 4))[lVar19];
    }
    uVar26 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar21 = (int)lVar19 + -1 + uVar30;
    if ((int)local_160 < (int)uVar21) {
      uVar21 = local_160;
    }
  }
LAB_1442ea4a0:
  while( true ) {
    pTVar1 = local_740;
    if ((int)*(longlong *)((longlong)local_740 + 8) - *(int *)((longlong)local_740 + 0x34) !=
        local_718) {
      `TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_710);
    }
    cVar20 = local_758;
    if (((TStack_738.CurrentBitIndex == uVar21) &&
        (TStack_738.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10))) &&
       (pTVar1 == (TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                   *)local_188)) break;
    local_530 = *(ulonglong *)(*(longlong *)pTVar1 + (longlong)TStack_738.CurrentBitIndex * 0x10);
    if ((local_530 != 0) && ((local_530 & 1) == 0)) {
      uVar26 = local_530 & 0x3fffffffffffff;
      if (local_138._8_4_ != local_104) {
        FVar25 = (ForElementType<FSetElementId>)local_100;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_f8;
        }
        for (iVar11 = *(int *)((longlong)FVar25 +
                              ((uVar26 >> 0x20) * 0x17 + uVar26 & (ulonglong)(local_f0 - 1)) * 4);
            iVar11 != -1; iVar11 = *(int *)(local_138._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
          if ((*(ulonglong *)(local_138._0_8_ + (longlong)iVar11 * 0x10) & 0x3fffffffffffff) ==
              uVar26) goto LAB_1442ea5a1;
        }
      }
      local_3a0 = &local_530;
      local_398 = local_6c8;
      TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  *)&pFVar8->ResolvedDynamicHandleToDependents,&local_550,(bool *)&local_3a0);
    }
LAB_1442ea5a1:
    TStack_738.UnvisitedBitMask = TStack_738.UnvisitedBitMask & ~TStack_738._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_738);
  }
  local_140 = 0;
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
LAB_1442ea61c:
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateObjectReferenceTracking_Fast @ 1442ea680

void __thiscall
UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_Fast
          (FReplicationReader *this,FReplicatedObjectInfo *param_1,FNetBitArrayView *param_2,
          bool param_3,
          TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_4,TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                   *param_5,
          TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
          *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  FReplicatedObjectInfo *local_68;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *local_60;
  FReplicationReader *local_58;
  FReplicationReader *local_50;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1706,"FReplicationReader_UpdateObjectReferenceTracking",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
               ,0x6aa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1706);
  }
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
             *)&param_1->UnresolvedObjectReferences,
            ((*(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
             *(int *)&(param_1->UnresolvedObjectReferences).field_0x34) -
            *(int *)&param_5->field_0x34) + *(int *)&param_5->field_0x8);
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
             *)&param_1->UnresolvedHandleCount,
            ((*(int *)&(param_1->UnresolvedObjectReferences).field_0x8 -
             *(int *)&(param_1->UnresolvedObjectReferences).field_0x34) -
            *(int *)&param_5->field_0x34) + *(int *)&param_5->field_0x8);
  uVar1 = param_2->WordCount;
  local_58 = (FReplicationReader *)param_4;
  puVar9 = param_2->Storage;
  uVar6 = 0;
  uVar4 = 0xffffffff >> (-(char)param_2->BitCount & 0x1fU);
  uVar2 = uVar6;
  uVar5 = uVar6;
  puVar11 = puVar9;
  local_68 = param_1;
  local_60 = param_5;
  local_50 = this;
  if (uVar1 != 0) {
    do {
      iVar10 = (int)uVar5;
      uVar7 = 0xffffffff;
      if ((int)uVar2 == uVar1 - 1) {
        uVar7 = uVar4;
      }
      for (uVar7 = uVar7 & *puVar11; uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          `UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_Fast'::__l3::
          <lambda_1>::operator()(&local_68,(uint)uVar5);
        }
        uVar5 = (ulonglong)((uint)uVar5 + 1);
      }
      uVar7 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar7;
      uVar5 = (ulonglong)(iVar10 + 0x20);
      puVar11 = puVar11 + 1;
    } while (uVar7 < uVar1);
  }
  if (param_3) {
    `UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_Fast'::__l3::<lambda_1>::
    operator()(&local_68,0xffffffff);
  }
  uVar8 = 0;
  uVar7 = (param_1->field7_0x15c).Value;
  if (0 < *(int *)&(param_1->UnresolvedHandleCount).field_0x8 -
          *(int *)&(param_1->UnresolvedHandleCount).field_0x34) {
    uVar8 = 0x10000;
  }
  (param_1->field7_0x15c).Value = uVar8 | uVar7 & 0xfffeffff;
  uVar5 = uVar6;
  if (*(int *)&(param_1->UnresolvedObjectReferences).field_0x8 !=
      *(int *)&(param_1->UnresolvedObjectReferences).field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->UnresolvedObjectReferences).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(param_1->UnresolvedObjectReferences).field_0x38;
    }
    iVar10 = *(int *)(puVar3 + (ulonglong)
                               (*(int *)&(param_1->UnresolvedObjectReferences).field_0x48 - 1) * 4);
    if (iVar10 != -1) {
      do {
        uVar5 = *(longlong *)&param_1->UnresolvedObjectReferences + (longlong)iVar10 * 0x18;
        if (*(int *)(*(longlong *)&param_1->UnresolvedObjectReferences + (longlong)iVar10 * 0x18) ==
            -1) break;
        iVar10 = *(int *)(uVar5 + 0x10);
        uVar5 = uVar6;
      } while (iVar10 != -1);
    }
  }
  uVar2 = uVar5 + 8;
  if (uVar5 == 0) {
    uVar2 = uVar6;
  }
  (param_1->field7_0x15c).Value = -(uint)(uVar2 != 0) & 0x20000 | uVar8 | uVar7 & 0xfffcffff;
  if (bRemapDynamicObjects != false) {
    TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
               *)&param_1->ResolvedDynamicObjectReferences,
              ((*(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x8 -
               *(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x34) -
              *(int *)&param_6->field_0x34) + *(int *)&param_6->field_0x8);
    TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
               *)&param_1->ResolvedDynamicHandleCount,
              ((*(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x8 -
               *(int *)&(param_1->ResolvedDynamicObjectReferences).field_0x34) -
              *(int *)&param_6->field_0x34) + *(int *)&param_6->field_0x8);
    local_60 = param_6;
    uVar5 = uVar6;
    local_68 = param_1;
    local_58 = this;
    if (uVar1 != 0) {
      do {
        iVar10 = (int)uVar5;
        uVar7 = 0xffffffff;
        if ((int)uVar6 == uVar1 - 1) {
          uVar7 = uVar4;
        }
        for (uVar7 = uVar7 & *puVar9; uVar7 != 0; uVar7 = uVar7 >> 1) {
          if ((uVar7 & 1) != 0) {
            `UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_Fast'::__l9::
            <lambda_2>::operator()(&local_68,(uint)uVar5);
          }
          uVar5 = (ulonglong)((uint)uVar5 + 1);
        }
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
        puVar9 = puVar9 + 1;
        uVar5 = (ulonglong)(iVar10 + 0x20);
      } while (uVar7 < uVar1);
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateUnresolvableReferenceTracking @ 1442eb480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking(FReplicationReader *this)

{
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar1;
  FNetRefHandleManager *pFVar2;
  longlong lVar3;
  undefined1 *puVar4;
  FNetRefHandle_u_0_s_0 FVar5;
  code *pcVar6;
  FNetRefHandle_u_0 FVar7;
  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ForElementType<unsigned_int> FVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  FReplicatedObjectInfo *pFVar16;
  FScriptContainerElement *pFVar17;
  FReplicatedObjectInfo *pFVar18;
  ForElementType<unsigned_int> FVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  undefined1 auStackY_638 [32];
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6 [6];
  FNetRefHandle_u_0 local_5e0;
  int local_5d8;
  uint local_5d4;
  TBaseKeyIterator<1> local_5d0;
  TBaseKeyIterator<1> local_5b8;
  FReplicationReader *local_5a0;
  FScriptContainerElement *local_598;
  longlong *local_588;
  undefined1 auStack_580 [16];
  uint uStack_570;
  uint uStack_56c;
  longlong local_568;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_560;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_558;
  undefined2 local_550;
  longlong *local_548;
  undefined1 auStack_540 [16];
  uint uStack_530;
  uint uStack_52c;
  longlong local_528;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_520;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *local_518;
  undefined2 local_510;
  undefined4 local_508;
  undefined4 local_504;
  TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&> local_500;
  FScriptContainerElement *local_4f0;
  FReplicationReader *local_4e8;
  int *local_4e0;
  FReplicationReader *local_4d8;
  int *local_4d0;
  FReplicationReader *local_4c8;
  int *local_4c0;
  FNetRefHandle_u_0 *local_4b8;
  uint *local_4b0;
  undefined1 local_4a8 [32];
  longlong local_488;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_480;
  undefined1 local_478 [32];
  longlong local_458;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  *pTStack_450;
  ForElementType<unsigned_int> local_448;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_448.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40 = 0;
  local_3c = 0x100;
  iVar11 = (this->NetRefHandleManager->PendingDestroyInternalIndices).ArrayNum;
  pFVar17 = (this->NetRefHandleManager->PendingDestroyInternalIndices).AllocatorInstance.Data;
  local_5a0 = this;
  local_598 = pFVar17;
  if ((iVar11 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_4f0 = pFVar17 + (longlong)iVar11 * 4;
  FVar19 = local_448.SecondaryData;
  if (pFVar17 != local_4f0) {
    do {
      iVar11 = *(int *)pFVar17;
      pFVar2 = this->NetRefHandleManager;
      uVar10 = iVar11 / 100;
      uVar20 = 0;
      if ((int)uVar10 < (int)(pFVar2->ReplicatedObjectData)._padding_) {
        uVar20 = ~uVar10 >> 0x1f;
      }
      local_5d8 = iVar11;
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar19 = local_448.SecondaryData, bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_500.Value =
           (uint *)(*(longlong *)
                     ((pFVar2->ReplicatedObjectData)._padding_ + (longlong)(int)uVar10 * 8) +
                   (ulonglong)(uint)(iVar11 % 100) * 0x38);
      local_5e0 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)local_500.Value;
      if ((local_5e0.Value != 0) && ((local_5e0.Value & 1) == 0)) {
        if ((*(byte *)((longlong)local_500.Value + 0x32) & 2) != 0) {
          local_40 = 0;
          if ((int)local_3c < 0) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,0,&local_448,0,(int *)&local_3c);
            FVar19 = local_448.SecondaryData;
          }
          uVar10 = local_40;
          TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                    (&local_5d0,
                     (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                      *)&this->UnresolvedHandleToDependents,(FNetRefHandle *)&local_5e0);
          pTVar8 = local_5d0.Set;
          iVar11 = local_5d0.NextIndex;
joined_r0x0001442eb668:
          local_5d0.NextIndex = iVar11;
          if (local_5d0.Index != -1) {
            FVar21 = (ForElementType<unsigned_int>)
                     (*(longlong *)&pTVar8->Elements + ((longlong)local_5d0.Index * 3 + 1) * 8);
            FVar13 = (ForElementType<unsigned_int>)&local_448;
            if (FVar19 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = FVar19;
            }
            if ((ulonglong)FVar13 <= (ulonglong)FVar21) {
              FVar13 = (ForElementType<unsigned_int>)&local_448;
              if (FVar19 != (ForElementType<unsigned_int>)0x0) {
                FVar13 = FVar19;
              }
              if (((ulonglong)FVar21 < (ulonglong)((longlong)FVar13 + (longlong)(int)local_3c * 4))
                 && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar19 = local_448.SecondaryData, uVar10 = local_40, bVar9
                    )) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (uVar10 == local_3c) {
              uVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                 (0x404,&local_448,(int *)&local_3c);
              FVar19 = local_448.SecondaryData;
            }
            local_40 = uVar10 + 1;
            FVar13 = (ForElementType<unsigned_int>)&local_448;
            if (FVar19 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = FVar19;
            }
            *(uint *)((longlong)FVar13 + (longlong)(int)uVar10 * 4) = *(uint *)FVar21;
            local_5d0.Index = iVar11;
            if (iVar11 == -1) goto LAB_1442eb7e8;
            lVar3 = *(longlong *)&pTVar8->Elements;
            do {
              iVar11 = *(int *)(lVar3 + 0x10 + (longlong)local_5d0.Index * 0x18);
              FVar19 = local_448.SecondaryData;
              uVar10 = local_40;
              if ((*(ulonglong *)(lVar3 + (longlong)local_5d0.Index * 0x18) & 0x3fffffffffffff) ==
                  ((local_5d0.Key)->field0_0x0 & 0x3fffffffffffff)) break;
              local_5d0.Index = iVar11;
            } while (iVar11 != -1);
            goto joined_r0x0001442eb668;
          }
LAB_1442eb7e8:
          if (*(int *)&(this->UnresolvedHandleToDependents).field_0x8 !=
              *(int *)&(this->UnresolvedHandleToDependents).field_0x34) {
            TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
            ::RemoveImpl<UE::Net::FNetRefHandle>
                      ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                        *)&this->UnresolvedHandleToDependents,
                       (int)((local_5e0.Value & 0x3fffffffffffff) >> 0x20) * 0x17 +
                       (int)(local_5e0.Value & 0x3fffffffffffff),(FNetRefHandle *)&local_5e0._s_0);
          }
          RemoveFromUnresolvedCache(this,(FNetRefHandle)local_5e0._s_0);
          uVar10 = local_40;
          uVar14 = (ulonglong)(int)local_40;
          FVar21 = (ForElementType<unsigned_int>)&local_448;
          if (local_448.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar21 = local_448.SecondaryData;
          }
          FVar13 = (ForElementType<unsigned_int>)((longlong)FVar21 + uVar14 * 4);
          while( true ) {
            if ((uint)uVar14 != uVar10) {
              local_5e8 = 0;
              `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_5e8);
            }
            FVar19 = local_448.SecondaryData;
            if (FVar21 == FVar13) break;
            if (*(int *)&(this->ReplicatedObjects).field_0x8 !=
                *(int *)&(this->ReplicatedObjects).field_0x34) {
              puVar4 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
              puVar15 = &(this->ReplicatedObjects).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar15 = puVar4;
              }
              uVar20 = *(uint *)(puVar15 +
                                (ulonglong)
                                (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U &
                                *(uint *)FVar21) * 4);
              if (uVar20 != 0xffffffff) {
                do {
                  puVar12 = (uint *)((longlong)(int)uVar20 * 0x178 +
                                    *(longlong *)&this->ReplicatedObjects);
                  if (*puVar12 == *(uint *)FVar21) {
                    pFVar18 = (FReplicatedObjectInfo *)(puVar12 + 2);
                    if (puVar12 == (uint *)0x0) {
                      pFVar18 = (FReplicatedObjectInfo *)0x0;
                    }
                    if (pFVar18 != (FReplicatedObjectInfo *)0x0) goto LAB_1442eb902;
                    goto LAB_1442eb8e4;
                  }
                  uVar20 = puVar12[0x5c];
                } while (uVar20 != 0xffffffff);
              }
            }
            pFVar18 = (FReplicatedObjectInfo *)0x0;
LAB_1442eb8e4:
            local_4e0 = &local_5d8;
            local_4e8 = this;
            bVar9 = `UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking'::
                    __l17::<lambda_1>::operator()(&local_4e8);
            if (bVar9) {
LAB_1442eb902:
              FVar7 = local_5e0;
              pTVar1 = &pFVar18->UnresolvedObjectReferences;
              TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              ::TIterator::TIterator
                        ((TIterator *)local_4a8,
                         (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                          *)pTVar1);
              local_550 = 0;
              stack0xfffffffffffffa88 = local_4a8._16_16_;
              local_588 = (longlong *)local_4a8._0_8_;
              auStack_580._0_8_ = local_4a8._8_8_;
              local_568 = local_488;
              pTStack_560 = pTStack_480;
              uVar14 = local_4a8._24_8_ >> 0x20;
              local_558 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                           *)pTVar1;
              if (local_4a8._28_4_ < *(int *)(local_4a8._16_8_ + 0x18)) {
                do {
                  FVar5 = ((FNetRefHandle_u_0 *)(*local_588 + 8 + (longlong)(int)uVar14 * 0x18))->
                          _s_0;
                  if ((((FNetRefHandle_u_0 *)(*local_588 + 8 + (longlong)(int)uVar14 * 0x18))->_s_0)
                      .Id == (FVar7.Value & 0x3fffffffffffff)) {
                    TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                    ::RemoveByIndex(pTStack_560,(int)uVar14);
                    local_550 = CONCAT11(local_550._1_1_,1);
                    if (bUseOptObjectRefTracking != false) {
                      FReplicatedObjectInfo::RemoveUnresolvedHandleCount
                                (pFVar18,(FNetRefHandle)FVar5);
                    }
                  }
                  uStack_570 = uStack_570 & ~auStack_580._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_580);
                  this = local_5a0;
                  uVar14 = (ulonglong)uStack_56c;
                } while ((int)uStack_56c < *(int *)(auStack_580._8_8_ + 0x18));
                if (((char)local_550 != '\0') && (local_550._1_1_ != '\0')) {
                  uVar20 = *(int *)&(local_558->Elements).field_0x8 -
                           *(int *)&(local_558->Elements).field_0x34;
                  if (uVar20 < 4) {
                    iVar11 = 1;
                  }
                  else {
                    uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
                    lVar3 = 0x3f;
                    if (uVar14 != 0) {
                      for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                      }
                    }
                    local_508 = (undefined4)lVar3;
                    iVar11 = 1 << ((byte)lVar3 & 0x1f);
                  }
                  if (((0 < (int)uVar20) && (local_558->HashSize < iVar11)) ||
                     (iVar11 < local_558->HashSize)) {
                    local_558->HashSize = iVar11;
                    TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                    ::Rehash(local_558);
                  }
                }
              }
            }
            uVar14 = (ulonglong)local_40;
            FVar21 = (ForElementType<unsigned_int>)((longlong)FVar21 + 4);
          }
        }
        local_40 = 0;
        if ((int)local_3c < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,0,&local_448,0,(int *)&local_3c);
          FVar19 = local_448.SecondaryData;
        }
        uVar10 = local_40;
        TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  (&local_5b8,
                   (TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                    *)&this->ResolvedDynamicHandleToDependents,(FNetRefHandle *)&local_5e0);
        pTVar8 = local_5b8.Set;
        iVar11 = local_5b8.NextIndex;
joined_r0x0001442ebae1:
        local_5b8.NextIndex = iVar11;
        if (local_5b8.Index != -1) {
          FVar21 = (ForElementType<unsigned_int>)
                   (*(longlong *)&pTVar8->Elements + ((longlong)local_5b8.Index * 3 + 1) * 8);
          FVar13 = (ForElementType<unsigned_int>)&local_448;
          if (FVar19 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = FVar19;
          }
          if ((ulonglong)FVar13 <= (ulonglong)FVar21) {
            FVar13 = (ForElementType<unsigned_int>)&local_448;
            if (FVar19 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = FVar19;
            }
            if (((ulonglong)FVar21 < (ulonglong)((longlong)FVar13 + (longlong)(int)local_3c * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), FVar19 = local_448.SecondaryData, uVar10 = local_40, bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (uVar10 == local_3c) {
            uVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,&local_448,(int *)&local_3c);
            FVar19 = local_448.SecondaryData;
          }
          local_40 = uVar10 + 1;
          FVar13 = (ForElementType<unsigned_int>)&local_448;
          if (FVar19 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = FVar19;
          }
          *(uint *)((longlong)FVar13 + (longlong)(int)uVar10 * 4) = *(uint *)FVar21;
          FVar19 = local_448.SecondaryData;
          uVar10 = local_40;
          local_5b8.Index = iVar11;
          if (iVar11 == -1) goto LAB_1442ebc63;
          lVar3 = *(longlong *)&pTVar8->Elements;
          do {
            iVar11 = *(int *)(lVar3 + 0x10 + (longlong)local_5b8.Index * 0x18);
            if ((*(ulonglong *)(lVar3 + (longlong)local_5b8.Index * 0x18) & 0x3fffffffffffff) ==
                ((local_5b8.Key)->field0_0x0 & 0x3fffffffffffff)) break;
            local_5b8.Index = iVar11;
          } while (iVar11 != -1);
          goto joined_r0x0001442ebae1;
        }
LAB_1442ebc63:
        if (0 < (int)uVar10) {
          if (*(int *)&(this->ResolvedDynamicHandleToDependents).field_0x8 !=
              *(int *)&(this->ResolvedDynamicHandleToDependents).field_0x34) {
            TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
            ::RemoveImpl<UE::Net::FNetRefHandle>
                      ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                        *)&this->ResolvedDynamicHandleToDependents,
                       (int)((local_5e0.Value & 0x3fffffffffffff) >> 0x20) * 0x17 +
                       (int)(local_5e0.Value & 0x3fffffffffffff),(FNetRefHandle *)&local_5e0._s_0);
            FVar19 = local_448.SecondaryData;
            uVar10 = local_40;
          }
          if ((*(byte *)((longlong)local_500.Value + 0x32) & 2) == 0) {
            FVar21 = (ForElementType<unsigned_int>)&local_448;
            if (FVar19 != (ForElementType<unsigned_int>)0x0) {
              FVar21 = FVar19;
            }
            pFVar18 = (FReplicatedObjectInfo *)0x0;
            FVar13 = (ForElementType<unsigned_int>)((longlong)FVar21 + (longlong)(int)uVar10 * 4);
            uVar20 = uVar10;
            while( true ) {
              if (uVar20 != uVar10) {
                local_5e6[0] = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_5e6);
              }
              FVar19 = local_448.SecondaryData;
              if (FVar21 == FVar13) break;
              local_5d4 = *(uint *)FVar21;
              pFVar16 = pFVar18;
              if (*(int *)&(this->ReplicatedObjects).field_0x8 !=
                  *(int *)&(this->ReplicatedObjects).field_0x34) {
                puVar4 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
                puVar15 = &(this->ReplicatedObjects).field_0x38;
                if (puVar4 != (undefined1 *)0x0) {
                  puVar15 = puVar4;
                }
                uVar20 = *(uint *)(puVar15 +
                                  (ulonglong)
                                  (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U & local_5d4) *
                                  4);
                if (uVar20 != 0xffffffff) {
                  do {
                    puVar12 = (uint *)((longlong)(int)uVar20 * 0x178 +
                                      *(longlong *)&this->ReplicatedObjects);
                    if (*puVar12 == local_5d4) {
                      pFVar16 = (FReplicatedObjectInfo *)(puVar12 + 2);
                      if (puVar12 == (uint *)0x0) {
                        pFVar16 = pFVar18;
                      }
                      if (pFVar16 != (FReplicatedObjectInfo *)0x0) goto LAB_1442ebfa9;
                      break;
                    }
                    uVar20 = puVar12[0x5c];
                  } while (uVar20 != 0xffffffff);
                }
              }
              local_4c0 = &local_5d8;
              local_4c8 = this;
              bVar9 = `UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking'::
                      __l39::<lambda_3>::operator()(&local_4c8);
              if (bVar9) {
LAB_1442ebfa9:
                bVar9 = MoveResolvedObjectReferenceToUnresolvedInReplicationInfo
                                  (this,pFVar16,(FNetRefHandle)local_5e0._s_0);
                if (bVar9) {
                  local_4b8 = &local_5e0;
                  local_4b0 = &local_5d4;
                  TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>_>
                            ((TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
                              *)&this->UnresolvedHandleToDependents,&local_500,(bool *)&local_4b8);
                }
              }
              FVar21 = (ForElementType<unsigned_int>)((longlong)FVar21 + 4);
              uVar20 = local_40;
            }
          }
          else {
            FVar21 = (ForElementType<unsigned_int>)&local_448;
            if (FVar19 != (ForElementType<unsigned_int>)0x0) {
              FVar21 = FVar19;
            }
            FVar13 = (ForElementType<unsigned_int>)((longlong)FVar21 + (longlong)(int)uVar10 * 4);
            uVar20 = uVar10;
            while( true ) {
              if (uVar20 != uVar10) {
                local_5e7 = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_5e7);
              }
              FVar19 = local_448.SecondaryData;
              if (FVar21 == FVar13) break;
              if (*(int *)&(this->ReplicatedObjects).field_0x8 !=
                  *(int *)&(this->ReplicatedObjects).field_0x34) {
                puVar4 = *(undefined1 **)&(this->ReplicatedObjects).field_0x40;
                puVar15 = &(this->ReplicatedObjects).field_0x38;
                if (puVar4 != (undefined1 *)0x0) {
                  puVar15 = puVar4;
                }
                uVar20 = *(uint *)(puVar15 +
                                  (ulonglong)
                                  (*(int *)&(this->ReplicatedObjects).field_0x48 - 1U &
                                  *(uint *)FVar21) * 4);
                if (uVar20 != 0xffffffff) {
                  do {
                    puVar12 = (uint *)((longlong)(int)uVar20 * 0x178 +
                                      *(longlong *)&this->ReplicatedObjects);
                    if (*puVar12 == *(uint *)FVar21) {
                      pFVar18 = (FReplicatedObjectInfo *)(puVar12 + 2);
                      if (puVar12 == (uint *)0x0) {
                        pFVar18 = (FReplicatedObjectInfo *)0x0;
                      }
                      if (pFVar18 != (FReplicatedObjectInfo *)0x0) goto LAB_1442ebd82;
                      goto LAB_1442ebd64;
                    }
                    uVar20 = puVar12[0x5c];
                  } while (uVar20 != 0xffffffff);
                }
              }
              pFVar18 = (FReplicatedObjectInfo *)0x0;
LAB_1442ebd64:
              local_4d0 = &local_5d8;
              local_4d8 = this;
              bVar9 = `UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking'::
                      __l30::<lambda_2>::operator()(&local_4d8);
              if (bVar9) {
LAB_1442ebd82:
                FVar7 = local_5e0;
                pTVar1 = &pFVar18->ResolvedDynamicObjectReferences;
                TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                ::TIterator::TIterator
                          ((TIterator *)local_478,
                           (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                            *)pTVar1);
                local_510 = 0;
                stack0xfffffffffffffac8 = local_478._16_16_;
                local_548 = (longlong *)local_478._0_8_;
                auStack_540._0_8_ = local_478._8_8_;
                local_528 = local_458;
                pTStack_520 = pTStack_450;
                uVar14 = local_478._24_8_ >> 0x20;
                local_518 = (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                             *)pTVar1;
                if (local_478._28_4_ < *(int *)(local_478._16_8_ + 0x18)) {
                  do {
                    FVar5 = ((FNetRefHandle_u_0 *)(*local_548 + 8 + (longlong)(int)uVar14 * 0x18))->
                            _s_0;
                    if ((((FNetRefHandle_u_0 *)(*local_548 + 8 + (longlong)(int)uVar14 * 0x18))->
                        _s_0).Id == (FVar7.Value & 0x3fffffffffffff)) {
                      TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                      ::RemoveByIndex(pTStack_520,(int)uVar14);
                      local_510 = CONCAT11(local_510._1_1_,1);
                      if (bUseOptObjectRefTracking != false) {
                        FReplicatedObjectInfo::RemoveResolvedDynamicHandleCount
                                  (pFVar18,(FNetRefHandle)FVar5);
                      }
                    }
                    uStack_530 = uStack_530 & ~auStack_540._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_540);
                    this = local_5a0;
                    uVar14 = (ulonglong)uStack_52c;
                  } while ((int)uStack_52c < *(int *)(auStack_540._8_8_ + 0x18));
                  if (((char)local_510 != '\0') && (local_510._1_1_ != '\0')) {
                    uVar20 = *(int *)&(local_518->Elements).field_0x8 -
                             *(int *)&(local_518->Elements).field_0x34;
                    if (uVar20 < 4) {
                      iVar11 = 1;
                    }
                    else {
                      uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
                      lVar3 = 0x3f;
                      if (uVar14 != 0) {
                        for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                        }
                      }
                      local_504 = (undefined4)lVar3;
                      iVar11 = 1 << ((byte)lVar3 & 0x1f);
                    }
                    if (((0 < (int)uVar20) && (local_518->HashSize < iVar11)) ||
                       (iVar11 < local_518->HashSize)) {
                      local_518->HashSize = iVar11;
                      TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                      ::Rehash(local_518);
                    }
                  }
                }
              }
              FVar21 = (ForElementType<unsigned_int>)((longlong)FVar21 + 4);
              uVar20 = local_40;
            }
          }
        }
      }
      pFVar17 = local_598 + 4;
      local_598 = pFVar17;
    } while (pFVar17 != local_4f0);
  }
  if (FVar19 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar19);
  }
  return;
}

// UpdateUnresolvedMustBeMappedReferences @ 1442ec0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FPendingBatchData * __thiscall
UE::Net::Private::FReplicationReader::UpdateUnresolvedMustBeMappedReferences
          (FReplicationReader *this,FNetRefHandle param_1,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_2,
          EIrisAsyncLoadingPriority param_3)

{
  int *piVar1;
  FNetRefHandle_u_0 *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UE::Net::FNetRefHandle> FVar4;
  uint uVar5;
  UObjectReplicationBridge *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ENetObjectReferenceResolveResult EVar10;
  int iVar11;
  FPendingBatchData *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForElementType<UE::Net::FNetRefHandle> FVar15;
  ForElementType<UE::Net::FNetRefHandle> FVar16;
  ForElementType<UE::Net::FNetRefHandle> FVar17;
  ForElementType<UE::Net::FNetRefHandle> FVar18;
  ForElementType<UE::Net::FNetRefHandle> FVar19;
  FReplicationReader *pFVar20;
  EIrisAsyncLoadingPriority EVar21;
  FNetRefHandle_u_0 *pFVar22;
  undefined1 auStackY_158 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106 [6];
  FNetRefHandle_u_0 local_100;
  FPendingBatchData *local_f8;
  FReplicationReader *local_f0;
  FNetRefHandle_u_0 local_e8;
  FPendingBatchHolder *local_e0;
  FNetRefHandle_u_0 local_d8;
  FNetRefHandle_u_0 local_d0;
  undefined8 local_c8;
  ForElementType<UE::Net::FNetRefHandle> local_c0;
  int local_98;
  int local_94;
  ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_> local_90;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e0 = &this->PendingBatchHolder;
  local_f0 = this;
  pFVar12 = FPendingBatchHolder::Find(local_e0,param_1);
  EVar21 = Default;
  if (param_3 != Invalid) {
    EVar21 = param_3;
  }
  local_f8 = pFVar12;
  if (pFVar12 != (FPendingBatchData *)0x0) {
    FVar19 = (pFVar12->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
    if (FVar19 == (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar19 = (ForElementType<UE::Net::FNetRefHandle>)&pFVar12->PendingMustBeMappedReferences;
    }
    iVar9 = (pFVar12->PendingMustBeMappedReferences).ArrayNum;
    FVar18 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar19 + (longlong)iVar9 * 8);
    while( true ) {
      if ((pFVar12->PendingMustBeMappedReferences).ArrayNum != iVar9) {
        local_108 = 0;
        `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (FVar19 == FVar18) break;
      local_d8 = *(FNetRefHandle_u_0 *)FVar19;
      TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UE::Net::FNetRefHandle_const_&>(param_2,(FNetRefHandle *)&local_d8._s_0);
      FVar19 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar19 + 8);
    }
    if (local_f8->IrisAsyncLoadingPriority != Invalid) {
      EVar21 = local_f8->IrisAsyncLoadingPriority;
    }
  }
  uVar5 = param_2->ArrayNum;
  local_c0.SecondaryData = (ForElementType<UE::Net::FNetRefHandle>)0x0;
  local_48 = 0;
  local_98 = 0;
  local_94 = 4;
  local_90.SecondaryData = (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0;
  local_44 = 4;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (4 < (int)uVar5) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
              (8,8,uVar5,&local_c0,0,&local_94);
  }
  uVar5 = param_2->ArrayNum;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (local_44 < (int)uVar5) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
              (0x10,8,uVar5,&local_90,local_48,&local_44);
  }
  iVar9 = ConvertAsyncLoadingPriority(EVar21);
  (local_f0->ResolveContext).AsyncLoadingPriority = iVar9;
  pFVar22 = (FNetRefHandle_u_0 *)(param_2->AllocatorInstance).Data;
  iVar9 = param_2->ArrayNum;
  pFVar2 = pFVar22 + iVar9;
  while( true ) {
    pFVar20 = local_f0;
    if (param_2->ArrayNum != iVar9) {
      local_107 = 0;
      `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_107);
    }
    if (pFVar22 == pFVar2) break;
    local_100 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)&pFVar22->_s_0;
    local_e8.Value = 0;
    local_c8 = 0;
    local_d0 = local_100;
    EVar10 = FObjectReferenceCache::ResolveObjectReference
                       (pFVar20->ObjectReferenceCache,(FNetObjectReference *)&local_d0._s_0,
                        &pFVar20->ResolveContext,(UObject **)&local_e8);
    if (bForceObjectsToStall != false) {
      pUVar6 = pFVar20->ReplicationBridge;
      if ((pUVar6 == (UObjectReplicationBridge *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bridge",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ObjectReplicationBridge.h"
                             ,0x2ce,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FPendingBatchData *)(*pcVar7)();
        return pFVar12;
      }
      pFVar13 = (pUVar6->DebugObjectsForcedToStall).AllocatorInstance.Data;
      pFVar3 = pFVar13 + (longlong)(pUVar6->DebugObjectsForcedToStall).ArrayNum * 8;
      pFVar20 = local_f0;
      if (pFVar13 != pFVar3) {
        do {
          if ((*(ulonglong *)pFVar13 & 0x3fffffffffffff) ==
              ((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff)) goto LAB_1442ec367;
          pFVar13 = pFVar13 + 8;
        } while (pFVar13 != pFVar3);
      }
    }
    if (((EVar10 & HasUnresolvedMustBeMappedReferences) == None) ||
       (bVar8 = FObjectReferenceCache::IsNetRefHandleBroken
                          (pFVar20->ObjectReferenceCache,(FNetRefHandle)local_100._s_0,true), bVar8)
       ) {
      if (EVar10 == None) {
        iVar11 = local_48;
        if (local_48 == local_44) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
                             (0x810,&local_90,&local_44);
        }
        local_48 = iVar11 + 1;
        FVar19 = (ForElementType<UE::Net::FNetRefHandle>)&local_90;
        if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0
           ) {
          FVar19 = (ForElementType<UE::Net::FNetRefHandle>)local_90.SecondaryData;
        }
        ((FNetRefHandle_u_0 *)((longlong)FVar19 + (longlong)iVar11 * 0x10))->_s_0 =
             (FNetRefHandle_u_0_s_0)local_100;
        ((FNetRefHandle_u_0 *)((longlong)FVar19 + 8))[(longlong)iVar11 * 2] = local_e8;
      }
      pFVar22 = pFVar22 + 1;
    }
    else {
LAB_1442ec367:
      FVar19 = (ForElementType<UE::Net::FNetRefHandle>)&local_c0;
      if (local_c0.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar19 = local_c0.SecondaryData;
      }
      if ((ulonglong)FVar19 <= &local_100) {
        FVar19 = (ForElementType<UE::Net::FNetRefHandle>)&local_c0;
        if (local_c0.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar19 = local_c0.SecondaryData;
        }
        if ((&local_100 < (FNetRefHandle_u_0 *)((longlong)FVar19 + (longlong)local_94 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FPendingBatchData *)(*pcVar7)();
          return pFVar12;
        }
      }
      if (local_98 == local_94) {
        local_98 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                             (0x808,&local_c0,&local_94);
      }
      lVar14 = (longlong)local_98;
      FVar19 = (ForElementType<UE::Net::FNetRefHandle>)&local_c0;
      if (local_c0.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar19 = local_c0.SecondaryData;
      }
      pFVar22 = pFVar22 + 1;
      local_98 = local_98 + 1;
      ((FNetRefHandle_u_0 *)((longlong)FVar19 + lVar14 * 8))->_s_0 =
           (FNetRefHandle_u_0_s_0)local_100;
    }
  }
  if (local_98 == 0) {
    if (local_f8 == (FPendingBatchData *)0x0) goto LAB_1442ec4d5;
    (local_f8->PendingMustBeMappedReferences).ArrayNum = 0;
    if ((local_f8->PendingMustBeMappedReferences).ArrayMax < 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                (8,8,0,&(local_f8->PendingMustBeMappedReferences).AllocatorInstance,0,
                 &(local_f8->PendingMustBeMappedReferences).ArrayMax);
    }
  }
  else {
    pFVar12 = local_f8;
    if (local_f8 == (FPendingBatchData *)0x0) {
      pFVar12 = FPendingBatchHolder::FindOrCreate(local_e0,param_1);
    }
    if (&pFVar12->PendingMustBeMappedReferences !=
        (TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
        &local_c0) {
      if (local_c0.SecondaryData == (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        memmove(&pFVar12->PendingMustBeMappedReferences,&local_c0,0x20);
      }
      FVar19 = (pFVar12->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
      if (FVar19 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FMemory::Free((void *)FVar19);
      }
      (pFVar12->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData =
           local_c0.SecondaryData;
      local_c0.SecondaryData = (ForElementType<UE::Net::FNetRefHandle>)0x0;
      (pFVar12->PendingMustBeMappedReferences).ArrayNum = local_98;
      (pFVar12->PendingMustBeMappedReferences).ArrayMax = local_94;
      local_98 = 0;
      local_94 = 4;
    }
    pFVar20 = local_f0;
    local_f8 = pFVar12;
    if (pFVar12 == (FPendingBatchData *)0x0) goto LAB_1442ec4d5;
  }
  iVar9 = local_48;
  pFVar20 = local_f0;
  FVar19 = (ForElementType<UE::Net::FNetRefHandle>)&local_90;
  if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0) {
    FVar19 = (ForElementType<UE::Net::FNetRefHandle>)local_90.SecondaryData;
  }
  FVar18 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)local_48 * 0x10 + (longlong)FVar19);
  while( true ) {
    if (local_48 != iVar9) {
      local_106[0] = 0;
      `TCheckedPointerIterator<TTuple<UE::Net::FNetRefHandle,UObject_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_106);
    }
    pFVar12 = local_f8;
    if (FVar19 == FVar18) break;
    FVar17 = (ForElementType<UE::Net::FNetRefHandle>)&local_f8->ResolvedReferences;
    FVar16 = (local_f8->ResolvedReferences).AllocatorInstance.SecondaryData;
    FVar15 = FVar17;
    if (FVar16 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar15 = FVar16;
    }
    FVar4 = (ForElementType<UE::Net::FNetRefHandle>)
            ((longlong)FVar15 + (longlong)(local_f8->ResolvedReferences).ArrayNum * 8);
    if (FVar15 != FVar4) {
      do {
        if ((*(ulonglong *)FVar15 & 0x3fffffffffffff) == (*(ulonglong *)FVar19 & 0x3fffffffffffff))
        goto LAB_1442ec6a8;
        FVar15 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar15 + 8);
      } while (FVar15 != FVar4);
    }
    FVar15 = FVar17;
    if (FVar16 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar15 = FVar16;
    }
    if ((ulonglong)FVar15 <= (ulonglong)FVar19) {
      if (FVar16 == (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar16 = FVar17;
      }
      if (((ulonglong)FVar19 <
           (ulonglong)((longlong)FVar16 + (longlong)(local_f8->ResolvedReferences).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FPendingBatchData *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar11 = (pFVar12->ResolvedReferences).ArrayNum;
    piVar1 = &(pFVar12->ResolvedReferences).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                         (0x808,(ForElementType<UE::Net::FNetRefHandle> *)FVar17,piVar1);
      (pFVar12->ResolvedReferences).ArrayNum = iVar11;
    }
    (pFVar12->ResolvedReferences).ArrayNum = iVar11 + 1;
    FVar16 = (pFVar12->ResolvedReferences).AllocatorInstance.SecondaryData;
    if (FVar16 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar17 = FVar16;
    }
    ((FNetRefHandle_u_0 *)((longlong)FVar17 + (longlong)iVar11 * 8))->_s_0 =
         *(FNetRefHandle_u_0_s_0 *)FVar19;
    FObjectReferenceCache::AddTrackedQueuedBatchObjectReference
              (pFVar20->ObjectReferenceCache,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar19,
               (UObject *)*(FNetRefHandle_u_0 *)((longlong)FVar19 + 8));
LAB_1442ec6a8:
    FVar19 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar19 + 0x10);
  }
LAB_1442ec4d5:
  pFVar12 = local_f8;
  (pFVar20->ResolveContext).AsyncLoadingPriority = -1;
  if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0) {
    FMemory::Free((void *)local_90.SecondaryData);
  }
  if (local_c0.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FMemory::Free((void *)local_c0.SecondaryData);
  }
  return pFVar12;
}

// operator() @ 1504b8860

bool __thiscall
`UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking'::__l17::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4393424413328935416>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x70),&local_18,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4393424413328935416>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b88d2;
    }
  }
  bVar2 = false;
LAB_1504b88d2:
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

// operator() @ 1504b8aa0

bool __thiscall
`UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking'::__l30::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4393424413328935436>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x70),&local_18,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4393424413328935436>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b8b12;
    }
  }
  bVar2 = false;
LAB_1504b8b12:
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

// operator() @ 1504b8b90

bool __thiscall
`UE::Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking'::__l39::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4393424413328935447>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x70),&local_18,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4393424413328935447>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b8c02;
    }
  }
  bVar2 = false;
LAB_1504b8c02:
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

