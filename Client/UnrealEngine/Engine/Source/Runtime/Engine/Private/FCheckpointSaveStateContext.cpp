// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FCheckpointSaveStateContext @ 148445720

void __thiscall
FReplayHelper::FCheckpointSaveStateContext::~FCheckpointSaveStateContext
          (FCheckpointSaveStateContext *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->NameTableMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameTableMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameTableMap);
  DestructItems<FString,int>
            ((FString *)(this->CheckpointDeletedNetStartupActors).AllocatorInstance.Data,
             (this->CheckpointDeletedNetStartupActors).ArrayNum);
  pFVar2 = (this->CheckpointDeletedNetStartupActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NetGuidCacheSnapshot).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DeltaChannelCloseKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDeltaCheckpointData::~FDeltaCheckpointData(&this->DeltaCheckpointData);
  *(undefined4 *)&(this->PendingActorToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingActorToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingActorToIndex);
  pFVar2 = (this->PendingCheckpointActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPackageMapAckState::~FPackageMapAckState(&this->CheckpointAckState);
  return;
}

// CountBytes @ 14845d840

void __thiscall
FReplayHelper::FCheckpointSaveStateContext::CountBytes
          (FCheckpointSaveStateContext *this,FArchive *param_1)

{
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"FCheckpointSaveStateContext::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  FPackageMapAckState::CountBytes(&this->CheckpointAckState,param_1);
  ::FString::FString(&local_48,"CheckpointAckState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->PendingCheckpointActors).ArrayNum * 0xc,
             (longlong)(this->PendingCheckpointActors).ArrayMax * 0xc);
  ::FString::FString(&local_48,"PendingCheckpointActors");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                *)&this->PendingActorToIndex,param_1);
  ::FString::FString(&local_48,"PendingActorToIndex");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  FDeltaCheckpointData::CountBytes(&this->DeltaCheckpointData,param_1);
  ::FString::FString(&local_48,"DeltaCheckpointData");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->DeltaChannelCloseKeys).ArrayNum << 3,
             (longlong)(this->DeltaChannelCloseKeys).ArrayMax << 3);
  ::FString::FString(&local_48,"DeltaChannelCloseKeys");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->NetGuidCacheSnapshot).ArrayNum * 0x38,
             (longlong)(this->NetGuidCacheSnapshot).ArrayMax * 0x38);
  ::FString::FString(&local_48,"NetGuidCacheSnapshot");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->CheckpointDeletedNetStartupActors).ArrayNum << 4,
             (longlong)(this->CheckpointDeletedNetStartupActors).ArrayMax << 4);
  ::FString::FString(&local_48,"CheckpointDeletedNetStartupActors");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->NameTableMap,param_1);
  ::FString::FString(&local_48,"NameTableMap");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

