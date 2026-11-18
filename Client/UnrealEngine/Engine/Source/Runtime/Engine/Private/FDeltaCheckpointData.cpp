// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FDeltaCheckpointData @ 148441800

FDeltaCheckpointData * __thiscall
FDeltaCheckpointData::FDeltaCheckpointData(FDeltaCheckpointData *this)

{
  (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordingDeletedNetStartupActors).ArrayNum = 0;
  (this->RecordingDeletedNetStartupActors).ArrayMax = 0;
  *(undefined8 *)&(this->DestroyedNetStartupActors).Elements = 0;
  *(undefined8 *)&(this->DestroyedNetStartupActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DestroyedNetStartupActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x30 = 0xffffffff;
  (this->DestroyedNetStartupActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DestroyedNetStartupActors).HashSize = 0;
  *(undefined8 *)&(this->DestroyedDynamicActors).Elements = 0;
  *(undefined8 *)&(this->DestroyedDynamicActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DestroyedDynamicActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DestroyedDynamicActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DestroyedDynamicActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DestroyedDynamicActors).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DestroyedDynamicActors).Elements.field_0x30 = 0xffffffff;
  (this->DestroyedDynamicActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DestroyedDynamicActors).HashSize = 0;
  *(undefined8 *)&this->ChannelsToClose = 0;
  *(undefined8 *)&(this->ChannelsToClose).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelsToClose).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelsToClose).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelsToClose).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelsToClose).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelsToClose).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelsToClose).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelsToClose).field_0x48 = 0;
  return this;
}

// ~FDeltaCheckpointData @ 148445910

void __thiscall FDeltaCheckpointData::~FDeltaCheckpointData(FDeltaCheckpointData *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->ChannelsToClose).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelsToClose).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChannelsToClose);
  (this->DestroyedDynamicActors).HashSize = 0;
  FVar2 = (this->DestroyedDynamicActors).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DestroyedDynamicActors).Elements);
  (this->DestroyedNetStartupActors).HashSize = 0;
  FVar2 = (this->DestroyedNetStartupActors).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DestroyedNetStartupActors).Elements);
  DestructItems<FString,int>
            ((FString *)(this->RecordingDeletedNetStartupActors).AllocatorInstance.Data,
             (this->RecordingDeletedNetStartupActors).ArrayNum);
  pFVar3 = (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator= @ 148446f50

FDeltaCheckpointData * __thiscall
FDeltaCheckpointData::operator=(FDeltaCheckpointData *this,FDeltaCheckpointData *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TMap<FNetworkGUID,EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,EChannelCloseReason,0>_>
  *pTVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  ForElementType<FSetElementId> FVar7;
  TMap<FNetworkGUID,EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,EChannelCloseReason,0>_>
  *pTVar8;
  
  if (this != param_1) {
    DestructItems<FString,int>
              ((FString *)(this->RecordingDeletedNetStartupActors).AllocatorInstance.Data,
               (this->RecordingDeletedNetStartupActors).ArrayNum);
    pFVar5 = (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data =
         (param_1->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
    (param_1->RecordingDeletedNetStartupActors).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->RecordingDeletedNetStartupActors).ArrayNum =
         (param_1->RecordingDeletedNetStartupActors).ArrayNum;
    (this->RecordingDeletedNetStartupActors).ArrayMax =
         (param_1->RecordingDeletedNetStartupActors).ArrayMax;
    (param_1->RecordingDeletedNetStartupActors).ArrayNum = 0;
    (param_1->RecordingDeletedNetStartupActors).ArrayMax = 0;
  }
  pTVar1 = &param_1->DestroyedNetStartupActors;
  this_00 = &this->DestroyedNetStartupActors;
  if (this_00 != pTVar1) {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,
                      *(int *)&(this->DestroyedNetStartupActors).Elements.field_0x8);
    if (*(void **)&this_00->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->Elements);
    }
    puVar2 = &(param_1->DestroyedNetStartupActors).Elements.field_0x10;
    *(undefined8 *)&this_00->Elements = *(undefined8 *)&pTVar1->Elements;
    puVar3 = &(this->DestroyedNetStartupActors).Elements.field_0x10;
    *(undefined8 *)&pTVar1->Elements = 0;
    *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x8 =
         *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x8;
    *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0xc =
         *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0xc;
    *(undefined8 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->DestroyedNetStartupActors).Elements.field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar6 = *(void **)&(this->DestroyedNetStartupActors).Elements.field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(undefined8 *)&(this->DestroyedNetStartupActors).Elements.field_0x20 =
           *(undefined8 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x20;
      *(undefined8 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x28 =
           *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x28;
      *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x2c =
           *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x2c;
      *(undefined8 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x30 =
         *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x30;
    *(undefined4 *)&(this->DestroyedNetStartupActors).Elements.field_0x34 =
         *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x34;
    *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->DestroyedNetStartupActors).Elements.field_0x34 = 0;
    if ((param_1->DestroyedNetStartupActors).Hash.SecondaryData ==
        (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->DestroyedNetStartupActors).Hash.InlineData =
           *(undefined4 *)(param_1->DestroyedNetStartupActors).Hash.InlineData;
    }
    FVar7 = (this->DestroyedNetStartupActors).Hash.SecondaryData;
    if (FVar7 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    (this->DestroyedNetStartupActors).Hash.SecondaryData =
         (param_1->DestroyedNetStartupActors).Hash.SecondaryData;
    (param_1->DestroyedNetStartupActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->DestroyedNetStartupActors).HashSize = (param_1->DestroyedNetStartupActors).HashSize;
    (param_1->DestroyedNetStartupActors).HashSize = 0;
  }
  if (&this->DestroyedDynamicActors != &param_1->DestroyedDynamicActors) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
    Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
              (&this->DestroyedDynamicActors,&param_1->DestroyedDynamicActors);
  }
  pTVar8 = &param_1->ChannelsToClose;
  pTVar4 = &this->ChannelsToClose;
  if (pTVar4 != pTVar8) {
    if (*(void **)pTVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar4);
    }
    puVar2 = &(param_1->ChannelsToClose).field_0x10;
    *(undefined8 *)pTVar4 = *(undefined8 *)pTVar8;
    puVar3 = &(this->ChannelsToClose).field_0x10;
    *(undefined8 *)pTVar8 = 0;
    *(undefined4 *)&(this->ChannelsToClose).field_0x8 =
         *(undefined4 *)&(param_1->ChannelsToClose).field_0x8;
    *(undefined4 *)&(this->ChannelsToClose).field_0xc =
         *(undefined4 *)&(param_1->ChannelsToClose).field_0xc;
    *(undefined8 *)&(param_1->ChannelsToClose).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->ChannelsToClose).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar6 = *(void **)&(this->ChannelsToClose).field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(undefined8 *)&(this->ChannelsToClose).field_0x20 =
           *(undefined8 *)&(param_1->ChannelsToClose).field_0x20;
      *(undefined8 *)&(param_1->ChannelsToClose).field_0x20 = 0;
      *(undefined4 *)&(this->ChannelsToClose).field_0x28 =
           *(undefined4 *)&(param_1->ChannelsToClose).field_0x28;
      *(undefined4 *)&(this->ChannelsToClose).field_0x2c =
           *(undefined4 *)&(param_1->ChannelsToClose).field_0x2c;
      *(undefined8 *)&(param_1->ChannelsToClose).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ChannelsToClose).field_0x30 =
         *(undefined4 *)&(param_1->ChannelsToClose).field_0x30;
    *(undefined4 *)&(this->ChannelsToClose).field_0x34 =
         *(undefined4 *)&(param_1->ChannelsToClose).field_0x34;
    *(undefined4 *)&(param_1->ChannelsToClose).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ChannelsToClose).field_0x34 = 0;
    if (*(longlong *)&(param_1->ChannelsToClose).field_0x40 == 0) {
      *(undefined4 *)&(this->ChannelsToClose).field_0x38 =
           *(undefined4 *)&(param_1->ChannelsToClose).field_0x38;
    }
    pvVar6 = *(void **)&(this->ChannelsToClose).field_0x40;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    *(undefined8 *)&(this->ChannelsToClose).field_0x40 =
         *(undefined8 *)&(param_1->ChannelsToClose).field_0x40;
    *(undefined8 *)&(param_1->ChannelsToClose).field_0x40 = 0;
    *(undefined4 *)&(this->ChannelsToClose).field_0x48 =
         *(undefined4 *)&(param_1->ChannelsToClose).field_0x48;
    *(undefined4 *)&(param_1->ChannelsToClose).field_0x48 = 0;
  }
  return this;
}

// CountBytes @ 1484cc310

void __thiscall FDeltaCheckpointData::CountBytes(FDeltaCheckpointData *this,FArchive *param_1)

{
  longlong lVar1;
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"FDeltaCheckpointData::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->RecordingDeletedNetStartupActors).ArrayNum << 4,
             (longlong)(this->RecordingDeletedNetStartupActors).ArrayMax << 4);
  ::FString::FString(&local_48,"RecordingDeletedNetStartupActors");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->DestroyedNetStartupActors).Elements.field_0x8 * 0x18,
             (longlong)*(int *)&(this->DestroyedNetStartupActors).Elements.field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)
                     (*(int *)&(this->DestroyedNetStartupActors).Elements.field_0x28 + 0x1fU >> 5)
                     << 2,
             (ulonglong)
             (*(int *)&(this->DestroyedNetStartupActors).Elements.field_0x2c + 0x1fU >> 5) << 2);
  lVar1 = (longlong)(this->DestroyedNetStartupActors).HashSize << 2;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
  ::FString::FString(&local_48,"DestroyedNetStartupActors");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
            (&this->DestroyedDynamicActors,param_1);
  ::FString::FString(&local_48,"DestroyedDynamicActors");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  TSet<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
  ::CountBytes(&this->ChannelsToClose,param_1);
  ::FString::FString(&local_48,"ChannelsToClose");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

