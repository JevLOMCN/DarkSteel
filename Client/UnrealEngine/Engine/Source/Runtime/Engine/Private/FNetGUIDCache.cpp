// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 52

// FNetGUIDCache @ 148088e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetGUIDCache * __thiscall
FNetGUIDCache::FNetGUIDCache(FNetGUIDCache *this,UNetDriver *param_1,ulong64 param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  ulong64 local_res18 [2];
  
  *(undefined8 *)&this->ObjectLookup = 0;
  *(undefined8 *)&(this->ObjectLookup).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectLookup).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FNetGUIDCache__6B_;
  *(undefined4 *)&(this->ObjectLookup).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectLookup).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectLookup).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectLookup).field_0x48 = 0;
  *(undefined8 *)&this->NetGUIDLookup = 0;
  *(undefined8 *)&(this->NetGUIDLookup).field_0x8 = 0;
  *(undefined8 *)&(this->NetGUIDLookup).field_0x20 = 0;
  *(undefined4 *)&(this->NetGUIDLookup).field_0x28 = 0;
  *(undefined4 *)&(this->NetGUIDLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetGUIDLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetGUIDLookup).field_0x34 = 0;
  *(undefined8 *)&(this->NetGUIDLookup).field_0x40 = 0;
  *(undefined4 *)&(this->NetGUIDLookup).field_0x48 = 0;
  *(undefined8 *)&(this->ImportedNetGuids).Elements = 0;
  *(undefined8 *)&(this->ImportedNetGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ImportedNetGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ImportedNetGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ImportedNetGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportedNetGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportedNetGuids).Elements.field_0x34 = 0;
  (this->ImportedNetGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ImportedNetGuids).HashSize = 0;
  *(undefined8 *)&this->PendingOuterNetGuids = 0;
  *(undefined8 *)&(this->PendingOuterNetGuids).field_0x8 = 0;
  *(undefined8 *)&(this->PendingOuterNetGuids).field_0x20 = 0;
  *(undefined4 *)&(this->PendingOuterNetGuids).field_0x28 = 0;
  *(undefined4 *)&(this->PendingOuterNetGuids).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingOuterNetGuids).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingOuterNetGuids).field_0x34 = 0;
  *(undefined8 *)&(this->PendingOuterNetGuids).field_0x40 = 0;
  *(undefined4 *)&(this->PendingOuterNetGuids).field_0x48 = 0;
  this->Driver = param_1;
  this->NetworkChecksumMode = SaveAndUse;
  this->AsyncLoadMode = UseCVar;
  this->IsExportingNetGUIDBunch = false;
  *(undefined8 *)&this->PendingAsyncPackages = 0;
  *(undefined8 *)&(this->PendingAsyncPackages).field_0x8 = 0;
  *(undefined8 *)&(this->PendingAsyncPackages).field_0x20 = 0;
  *(undefined4 *)&(this->PendingAsyncPackages).field_0x28 = 0;
  *(undefined4 *)&(this->PendingAsyncPackages).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAsyncPackages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingAsyncPackages).field_0x34 = 0;
  *(undefined8 *)&(this->PendingAsyncPackages).field_0x40 = 0;
  *(undefined4 *)&(this->PendingAsyncPackages).field_0x48 = 0;
  *(undefined8 *)&this->NetFieldExportGroupMap = 0;
  *(undefined8 *)&(this->NetFieldExportGroupMap).field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupMap).field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupMap).field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExportGroupMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExportGroupMap).field_0x34 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupMap).field_0x40 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupMap).field_0x48 = 0;
  *(undefined8 *)&this->NetFieldExportGroupPathToIndex = 0;
  *(undefined8 *)&(this->NetFieldExportGroupPathToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupPathToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupPathToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupPathToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExportGroupPathToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExportGroupPathToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupPathToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupPathToIndex).field_0x48 = 0;
  *(undefined8 *)&this->NetFieldExportGroupIndexToGroup = 0;
  *(undefined8 *)&(this->NetFieldExportGroupIndexToGroup).field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupIndexToGroup).field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupIndexToGroup).field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupIndexToGroup).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExportGroupIndexToGroup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExportGroupIndexToGroup).field_0x34 = 0;
  *(undefined8 *)&(this->NetFieldExportGroupIndexToGroup).field_0x40 = 0;
  *(undefined4 *)&(this->NetFieldExportGroupIndexToGroup).field_0x48 = 0;
  (this->SyncLoadedGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncLoadedGUIDs).ArrayNum = 0;
  (this->SyncLoadedGUIDs).ArrayMax = 0;
  *(undefined8 *)&this->History = 0;
  *(undefined8 *)&(this->History).field_0x8 = 0;
  *(undefined8 *)&(this->History).field_0x20 = 0;
  *(undefined4 *)&(this->History).field_0x28 = 0;
  *(undefined4 *)&(this->History).field_0x2c = 0x80;
  *(undefined4 *)&(this->History).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->History).field_0x34 = 0;
  *(undefined8 *)&(this->History).field_0x40 = 0;
  *(undefined4 *)&(this->History).field_0x48 = 0;
  *(undefined8 *)&this->PendingAsyncLoadRequests = 0;
  *(undefined8 *)&(this->PendingAsyncLoadRequests).field_0x8 = 0;
  *(undefined8 *)&(this->PendingAsyncLoadRequests).field_0x20 = 0;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x28 = 0;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x34 = 0;
  *(undefined8 *)&(this->PendingAsyncLoadRequests).field_0x40 = 0;
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x48 = 0;
  uVar2 = 0;
  if (0 < GDelinquencyNumberOfTopOffendersToTrack) {
    uVar2 = GDelinquencyNumberOfTopOffendersToTrack;
  }
  local_res18[0] = param_2;
  FDelinquencyAnalytics::FDelinquencyAnalytics
            (&(this->DelinquentAsyncLoads).DelinquentAsyncLoads,uVar2);
  (this->DelinquentAsyncLoads).MaxConcurrentAsyncLoads = 0;
  *(undefined8 *)&this->QueuedBunchObjectReferences = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).field_0x34 = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).field_0x48 = 0;
  *(undefined8 *)&this->UnmappedStablyNamedGuids_OuterToInner = 0;
  *(undefined8 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x8 = 0;
  *(undefined8 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x20 = 0;
  *(undefined4 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x28 = 0;
  *(undefined4 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x34 = 0;
  *(undefined8 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x40 = 0;
  *(undefined4 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x48 = 0;
  this->TrackingOwnerOrPawnHelper = (FIsOwnerOrPawnHelper *)0x0;
  this->UniqueNetFieldExportGroupPathIndex = 0;
  pwVar1 = FCommandLine::Get();
  FParse::Value(pwVar1,L"NetworkGuidSeed=",local_res18);
  this->UniqueNetIDs[1] = (int)local_res18[0];
  this->UniqueNetIDs[0] = (int)local_res18[0];
  this->NetworkGuidIndex[1] = local_res18[0];
  this->NetworkGuidIndex[0] = local_res18[0];
  return this;
}

// ~FNetGUIDCache @ 14808e600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::~FNetGUIDCache(FNetGUIDCache *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FNetGUIDCache__6B_;
  *(undefined4 *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnmappedStablyNamedGuids_OuterToInner);
  *(undefined4 *)&(this->QueuedBunchObjectReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QueuedBunchObjectReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QueuedBunchObjectReferences);
  (this->DelinquentAsyncLoads).DelinquentAsyncLoads.AllDelinquents.HashSize = 0;
  FVar2 = (this->DelinquentAsyncLoads).DelinquentAsyncLoads.AllDelinquents.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DelinquentAsyncLoads).DelinquentAsyncLoads.AllDelinquents.Elements);
  pFVar3 = (this->DelinquentAsyncLoads).DelinquentAsyncLoads.TopOffenders.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->PendingAsyncLoadRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingAsyncLoadRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingAsyncLoadRequests);
  *(undefined4 *)&(this->History).field_0x48 = 0;
  pvVar1 = *(void **)&(this->History).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->History);
  pFVar3 = (this->SyncLoadedGUIDs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->NetFieldExportGroupIndexToGroup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NetFieldExportGroupIndexToGroup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetFieldExportGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetFieldExportGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetFieldExportGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetFieldExportGroupIndexToGroup);
  *(undefined4 *)&(this->NetFieldExportGroupPathToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NetFieldExportGroupPathToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetFieldExportGroupPathToIndex);
  *(undefined4 *)&(this->NetFieldExportGroupMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NetFieldExportGroupMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetFieldExportGroupMap);
  *(undefined4 *)&(this->PendingAsyncPackages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingAsyncPackages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingAsyncPackages);
  *(undefined4 *)&(this->PendingOuterNetGuids).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingOuterNetGuids).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingOuterNetGuids);
  (this->ImportedNetGuids).HashSize = 0;
  FVar2 = (this->ImportedNetGuids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ImportedNetGuids).Elements);
  *(undefined4 *)&(this->NetGUIDLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NetGUIDLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetGUIDLookup);
  *(undefined4 *)&(this->ObjectLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FNetGuidCacheObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FNetGuidCacheObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FNetGuidCacheObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectLookup);
  return;
}

// AssignNewNetGUIDFromPath_Server @ 1480973b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall
FNetGUIDCache::AssignNewNetGUIDFromPath_Server
          (FNetGUIDCache *this,FString *param_1,UObject *param_2,UClass *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  FNetworkGUID FVar5;
  ulonglong uVar6;
  FNetworkGUID_u_0 local_res8;
  UClass *in_stack_00000028;
  undefined1 local_18 [16];
  
  cVar2 = (**(code **)(this->_padding_ + 8))();
  if (cVar2 == '\0') {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x1;
  }
  else {
    GetOrAssignNetGUID(this,(UObject *)local_18,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_3);
    uVar6 = this->NetworkGuidIndex[1] + 1;
    this->NetworkGuidIndex[1] = uVar6;
    if (0x7fffffffffffffff < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetIndex <= (((uint64) 0xffffffffffffffff) >> 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\NetworkGuid.h"
                         ,0x71,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar5.field0_0x0 = (FNetworkGUID_u_0)(*pcVar1)();
        return (FNetworkGUID)FVar5.field0_0x0;
      }
    }
    local_res8.ObjectId = uVar6 * 2 | 1;
    uVar4 = GetClassNetworkChecksum(this,in_stack_00000028);
    RegisterNetGUIDFromPath_Server
              (this,(FNetworkGUID *)&local_res8,(FString *)param_2,(FNetworkGUID *)local_18,uVar4,
               true,true);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_res8;
  }
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// AssignNewNetGUID_Server @ 1480974b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall FNetGUIDCache::AssignNewNetGUID_Server(FNetGUIDCache *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FNetworkGUID FVar5;
  longlong lVar6;
  UObject *in_R8;
  
  cVar3 = (**(code **)(this->_padding_ + 8))();
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsNetGUIDAuthority()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xccf,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
      return (FNetworkGUID)FVar5.field0_0x0;
    }
  }
  if (in_R8 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xc72,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
      return (FNetworkGUID)FVar5.field0_0x0;
    }
  }
  cVar3 = (**(code **)(*(longlong *)in_R8 + 0x210))();
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object->IsSupportedForNetworking()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xc73,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
      return (FNetworkGUID)FVar5.field0_0x0;
    }
  }
  cVar3 = (**(code **)(*(longlong *)in_R8 + 0x208))();
  lVar6 = 0x160;
  if (cVar3 != '\0') {
    lVar6 = 0x168;
  }
  plVar1 = (longlong *)((longlong)&this->_padding_ + lVar6);
  *plVar1 = *plVar1 + 1;
  FNetworkGUID::CreateFromIndex
            ((ulong64)param_1,SUB81(*(undefined8 *)((longlong)&this->_padding_ + lVar6),0));
  RegisterNetGUID_Server(this,(FNetworkGUID *)param_1,in_R8);
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTrace::TraceObjectCreated
              (this->Driver->NetTraceId,*(ulong64 *)param_1,
               *(FName *)(*(longlong *)&in_R8->field_0x10 + 0x18),0,0);
  }
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// AsyncPackageCallback @ 1480975f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FNetGUIDCache::AsyncPackageCallback
          (FNetGUIDCache *this,FName *param_1,UPackage *param_2,Type param_3)

{
  byte bVar1;
  FNetworkGUID FVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  double dVar7;
  TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  UObject *pUVar13;
  longlong lVar14;
  double *pdVar15;
  char *pcVar16;
  FString *pFVar17;
  size_t sVar18;
  ulonglong uVar19;
  FNetworkGUID_u_0 *pFVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong _Size;
  FNetworkGUID_u_0 *this_00;
  wchar_t *_Str;
  FNetworkGUID_u_0 *pFVar23;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_1198 [32];
  undefined1 local_1168 [8];
  int local_1160;
  undefined4 uStack_115c;
  FLLMScope local_1158 [2];
  int *local_1150;
  FName local_1148;
  UPackage *local_1140;
  FNetworkGUID_u_0 *local_1138;
  TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *local_1130;
  FName local_1128;
  FName local_1120;
  FMemScope local_1118;
  FDelinquencyNameTimePair local_1110;
  FString local_1100;
  FString local_10f0;
  FString local_10e0;
  FString local_10d0;
  FString local_10c0;
  FString local_10b0;
  FString local_10a0;
  FString local_1090;
  FString local_1080;
  undefined8 uStack_106d;
  undefined1 local_1065 [4093];
  ulonglong local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x14809760e;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1198;
  local_1140 = param_2;
  FLLMScope::FLLMScope(local_1158,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
  local_1148 = LLMTagDeclaration_GuidCache.UniqueName;
  FMemScope::FMemScope(&local_1118,&local_1148,true);
  if (((param_2 != (UPackage *)0x0) && (bVar9 = UPackage::IsFullyLoaded(param_2), !bVar9)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package == nullptr || Package->IsFullyLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xe4f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1130 = TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                       *)&this->PendingAsyncLoadRequests,*param_1);
  pFVar23 = (FNetworkGUID_u_0 *)&local_1130->field_0x8;
  if (local_1130 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    pFVar23 = (FNetworkGUID_u_0 *)0x0;
  }
  if (pFVar23 == (FNetworkGUID_u_0 *)0x0) {
    if (1 < (byte)LogNetPackageMap._0_1_) {
      ::FName::ToString(param_1,&local_1080);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1080.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148097ccc;
  }
  local_1150 = (int *)&local_1130->field_0x20;
  uStack_40 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if ((FNetworkGUID_u_0 *)pFVar23[2].ObjectId != (FNetworkGUID_u_0 *)0x0) {
    pFVar23 = (FNetworkGUID_u_0 *)pFVar23[2].ObjectId;
  }
  if (local_1130 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    local_1150 = (int *)&DAT_00000018;
  }
  local_1160 = *local_1150;
  local_1138 = pFVar23 + local_1160;
  while( true ) {
    pFVar20 = local_1138;
    if (*local_1150 != local_1160) {
      local_1168[0] = 0;
      `TCheckedPointerIterator<FNetworkGUID_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1168);
    }
    pTVar8 = local_1130;
    if (pFVar23 == pFVar20) break;
    FVar2.field0_0x0 = (FNetworkGUID_u_0)pFVar23->ObjectId;
    if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
      puVar3 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
      puVar21 = &(this->ObjectLookup).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar21 = puVar3;
      }
      uVar10 = *(uint *)(puVar21 +
                        (ulonglong)
                        (*(int *)&(this->ObjectLookup).field_0x48 - 1U &
                        FVar2.field0_0x0._4_4_ * 0x17 + FVar2.field0_0x0.Value) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar20 = (FNetworkGUID_u_0 *)
                    ((longlong)(int)uVar10 * 0x40 + *(longlong *)&this->ObjectLookup);
          if ((FNetworkGUID_u_0)pFVar20->ObjectId == FVar2.field0_0x0) {
            this_00 = pFVar20 + 1;
            if (pFVar20 == (FNetworkGUID_u_0 *)0x0) {
              this_00 = (FNetworkGUID_u_0 *)0x0;
            }
            if (this_00 != (FNetworkGUID_u_0 *)0x0) {
              if (((*(byte *)(this_00 + 5) & 4) == 0) && (1 < (byte)LogNetPackageMap._0_1_)) {
                ::FString::PrintfImpl(&local_1100,L"%llu");
                ::FName::ToString(param_1,&local_10d0);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                if (local_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_10d0.Data.AllocatorInstance.Data);
                }
                if (local_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1100.Data.AllocatorInstance.Data);
                }
              }
              bVar1 = *(byte *)(this_00 + 5);
              *(byte *)(this_00 + 5) = bVar1 & 0xfb;
              if ((local_1140 == (UPackage *)0x0) &&
                 (*(byte *)(this_00 + 5) = bVar1 & 0xfb | 8, 1 < (byte)LogNetPackageMap._0_1_)) {
                ::FString::PrintfImpl(&local_10f0,L"%llu");
                ::FName::ToString(param_1,&local_10c0);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
                }
                if (local_10f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_10f0.Data.AllocatorInstance.Data);
                }
              }
              pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
              if (pUVar13 != (UObject *)0x0) {
                UpdateQueuedBunchObjectReference(this,FVar2,pUVar13);
                lVar14 = (**(code **)(*(longlong *)pUVar13 + 0x180))(pUVar13);
                if ((lVar14 != 0) &&
                   (plVar4 = *(longlong **)(lVar14 + 0x1b0), plVar4 != (longlong *)0x0)) {
                  (**(code **)(*plVar4 + 0x760))(plVar4,pUVar13);
                }
              }
              goto LAB_148097951;
            }
            break;
          }
          uVar10 = pFVar20[7].Value;
        } while (uVar10 != 0xffffffff);
      }
    }
    if (1 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&local_10e0,L"%llu");
      ::FName::ToString(param_1,&local_10b0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_10b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10b0.Data.AllocatorInstance.Data);
      }
      if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
      }
    }
LAB_148097951:
    pFVar23 = pFVar23 + 1;
  }
  pdVar15 = (double *)&local_1130->field_0x28;
  if (local_1130 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    pdVar15 = (double *)&DAT_00000020;
  }
  dVar7 = this->Driver->ElapsedTime - *pdVar15;
  if ((0.0 < GGuidCacheTrackAsyncLoadingGUIDThreshold) &&
     ((double)GGuidCacheTrackAsyncLoadingGUIDThreshold <= dVar7)) {
    local_1110.Name = *param_1;
    local_1110.TimeSeconds = (float)dVar7;
    FDelinquencyAnalytics::Add(&(this->DelinquentAsyncLoads).DelinquentAsyncLoads,&local_1110);
  }
  pcVar16 = &pTVar8->field_0x30;
  if (pTVar8 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    pcVar16 = &DAT_00000028;
  }
  if (((*pcVar16 != '\0') && (0.0 < GGuidCacheTrackAsyncLoadingGUIDThresholdOwner)) &&
     (((double)GGuidCacheTrackAsyncLoadingGUIDThresholdOwner <= dVar7 &&
      ((this->Driver->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)))) {
    ::FName::ToString(param_1,&local_10a0);
    FCsvProfiler::RecordEventfInternal
              (_GCsvCategory_PackageMap.Index,
               L"Owner Net Stall Async Load (Package=%s|LoadTime=%.2f)");
    if (local_10a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10a0.Data.AllocatorInstance.Data);
    }
    if (-1 < BookmarkChannel->Enabled) {
      if (__BookmarkPoint3720 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint3720,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                   ,0xe88,L"PackageMap/Owner Net Stall Async Load (Package=%s|LoadTime=%.2f)");
        __BookmarkPoint3720 = true;
      }
      pFVar17 = ::FName::ToString(param_1,&local_1090);
      if ((pFVar17->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
      uVar10 = CallstackTrace_GetCurrentId();
      if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
        uVar22 = 0xd;
        uStack_106d._5_2_ = 0xc202;
        local_1065._0_2_ = 0;
        pdVar15 = (double *)(local_1065 + 2);
LAB_148097ba3:
        uStack_106d._7_1_ = 0x88;
        *pdVar15 = dVar7;
        if (((longlong)pdVar15 + (8 - ((longlong)&uStack_106d + 5)) != uVar22) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PayloadBufferPtr - Buffer == FormatArgsSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                               ,0x44,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((ushort)uVar22 != 0) {
          FMiscTrace::OutputBookmarkInternal
                    (&__BookmarkPoint3720,uVar10,(ushort)uVar22,
                     (uchar *)((longlong)&uStack_106d + 5));
        }
      }
      else {
        sVar18 = wcslen(_Str);
        iVar11 = (int)sVar18 * 2 + 2;
        if (0xffff < iVar11) {
          iVar11 = 0xffff;
        }
        uVar22 = (longlong)iVar11 + 0xb;
        if (uVar22 < 0x1001) {
          uStack_106d._5_2_ = 0xc202;
          sVar18 = wcslen(_Str);
          uVar12 = (int)sVar18 * 2 + 2;
          uVar19 = (ulonglong)uVar12;
          if (0xffff < (int)uVar12) {
            uVar19 = 0xffff;
          }
          _Size = uVar19 & 0xffff;
          memcpy(local_1065,_Str,_Size);
          if ((short)uVar19 == -1) {
            local_1160 = 0x2e002e;
            uStack_115c = 0x2e;
            *(undefined8 *)((longlong)&uStack_106d + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
          }
          pdVar15 = (double *)(local_1065 + _Size);
          goto LAB_148097ba3;
        }
      }
      if (local_1090.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1090.Data.AllocatorInstance.Data);
      }
    }
  }
  FVar5 = *param_1;
  local_1128 = FVar5;
  if (*(int *)&(this->PendingAsyncLoadRequests).field_0x8 !=
      *(int *)&(this->PendingAsyncLoadRequests).field_0x34) {
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                         *)&this->PendingAsyncLoadRequests,FVar5.Number + uVar10,&local_1128);
  }
  FVar5 = *param_1;
  local_1120 = FVar5;
  if (*(int *)&(this->PendingAsyncPackages).field_0x8 !=
      *(int *)&(this->PendingAsyncPackages).field_0x34) {
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
                         *)&this->PendingAsyncPackages,FVar5.Number + uVar10,&local_1120);
  }
LAB_148097ccc:
  FMemScope::~FMemScope(&local_1118);
  FLLMScope::~FLLMScope(local_1158);
  return;
}

// CanClientLoadObject @ 148098460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNetGUIDCache::CanClientLoadObject(FNetGUIDCache *this,UObject *param_1,FNetworkGUID *param_2)

{
  ulonglong uVar1;
  UPackage *pUVar2;
  FNetGuidCacheObject *pFVar3;
  bool bVar4;
  
  uVar1 = (param_2->field0_0x0).ObjectId;
  if ((uVar1 != 0) && ((uVar1 & 1) != 0)) {
    if (param_1 == (UObject *)0x0) {
      if (uVar1 == 1) {
        return true;
      }
      pFVar3 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
               ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                       *)&this->ObjectLookup,param_2);
      if (pFVar3 == (FNetGuidCacheObject *)0x0) {
        return true;
      }
      bVar4 = pFVar3->bNoLoad == 0;
    }
    else {
      pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
      bVar4 = ((uint)pUVar2->PackageFlagsPrivate & 0x20000) == 0;
    }
    if (bVar4) {
      return true;
    }
  }
  return false;
}

// CleanReferences @ 148098ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::CleanReferences(FNetGUIDCache *this)

{
  TMap<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
  *this_00;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *this_01;
  double dVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  FNetworkGUID_u_0 *pFVar11;
  FNetGuidCacheObject *pFVar12;
  UObject *pUVar13;
  FString *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  undefined1 auStack_3d8 [32];
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  longlong *local_3a8;
  undefined1 auStack_3a0 [16];
  uint uStack_390;
  uint uStack_38c;
  longlong local_388;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_380;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *local_378;
  undefined2 local_370;
  longlong *local_368;
  undefined1 auStack_360 [16];
  uint uStack_350;
  uint uStack_34c;
  longlong local_348;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *pTStack_340;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *local_338;
  char local_330;
  char cStack_32f;
  longlong *local_328;
  undefined1 auStack_320 [16];
  uint uStack_310;
  uint uStack_30c;
  longlong local_308;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_300;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *local_2f8;
  char local_2f0;
  char cStack_2ef;
  longlong *local_2e8;
  undefined1 auStack_2e0 [16];
  uint uStack_2d0;
  uint uStack_2cc;
  longlong local_2c8;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *pTStack_2c0;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *local_2b8;
  undefined2 local_2b0;
  FWeakObjectPtr local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  ulonglong local_288;
  ulonglong uStack_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  LARGE_INTEGER local_268;
  FWeakObjectPtr local_260;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FArchiveCountMemGUID local_218;
  undefined1 local_178 [32];
  longlong local_158;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_150;
  undefined1 local_148 [32];
  longlong local_128;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *pTStack_120;
  undefined1 local_118 [32];
  longlong local_f8;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  QueryPerformanceCounter(&local_268);
  local_b8.Pairs.Elements._44_4_ = 0x80;
  local_b8.Pairs.Elements._0_8_ = 0;
  this_00 = &this->ObjectLookup;
  local_b8.Pairs.Elements._8_8_ = 0;
  local_b8.Pairs.Elements._32_8_ = 0;
  local_b8.Pairs.Elements._40_4_ = 0;
  local_b8.Pairs.Elements._48_4_ = 0xffffffff;
  local_b8.Pairs.Elements._52_4_ = 0;
  local_b8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.Pairs.HashSize = 0;
  dVar4 = (double)local_268.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_178,
             (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
              *)this_00);
  dVar5 = __real_4056800000000000;
  iVar25 = 1;
  local_2f0 = '\0';
  cStack_2ef = '\0';
  stack0xfffffffffffffce8 = local_178._16_16_;
  local_328 = (longlong *)local_178._0_8_;
  auStack_320._0_8_ = local_178._8_8_;
  local_308 = local_158;
  pTStack_300 = pTStack_150;
  uVar16 = local_178._24_8_ >> 0x20;
  iVar10 = 1;
  local_2f8 = (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
               *)this_00;
  if (local_178._28_4_ < *(int *)(local_178._16_8_ + 0x18)) {
    do {
      lVar20 = (longlong)(int)uVar16 * 0x40;
      lVar15 = *local_328;
      dVar1 = *(double *)(lVar20 + 0x28 + lVar15);
      lVar21 = lVar20 + lVar15;
      if (dVar1 == 0.0) {
        bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar21 + 8));
        if (bVar7) {
          if ((*(byte *)(lVar20 + lVar15) & 1) != 0) {
            pFVar11 = &TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                       ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                                 (&local_b8,
                                  (uint)((ulonglong)*(undefined8 *)(lVar21 + 8) >> 0x20) ^
                                  (uint)*(undefined8 *)(lVar21 + 8),
                                  (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(lVar21 + 8))->
                       field0_0x0;
            if (pFVar11->ObjectId == 0) {
              pFVar11->ObjectId = ((FNetworkGUID_u_0 *)(lVar20 + lVar15))->ObjectId;
            }
            else {
              if (((FNetworkGUID_u_0 *)(lVar20 + lVar15))->ObjectId <= pFVar11->ObjectId)
              goto LAB_1480991c0;
              pFVar12 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                        ::FindChecked((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                                       *)this_00,(FNetworkGUID *)pFVar11);
              pFVar12->ReadOnlyTimestamp = dVar4;
              *pFVar11 = *(FNetworkGUID_u_0 *)(lVar20 + lVar15);
            }
          }
        }
        else {
LAB_1480991c0:
          *(double *)(lVar21 + 0x28) = dVar4;
        }
      }
      else if (dVar5 < dVar4 - dVar1) {
        TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_300,(int)uVar16);
        local_2f0 = '\x01';
      }
      uStack_310 = uStack_310 & ~auStack_320._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_320);
      uVar16 = (ulonglong)uStack_30c;
    } while ((int)uStack_30c < *(int *)(auStack_320._8_8_ + 0x18));
    if ((local_2f0 != '\0') && (cStack_2ef != '\0')) {
      uVar23 = *(int *)&(local_2f8->Elements).field_0x8 - *(int *)&(local_2f8->Elements).field_0x34;
      iVar9 = iVar10;
      if (3 < uVar23) {
        uVar16 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_278 = (undefined4)lVar21;
        iVar9 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar23) && (local_2f8->HashSize < iVar9)) || (iVar9 < local_2f8->HashSize)) {
        local_2f8->HashSize = iVar9;
        TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
        ::Rehash(local_2f8);
      }
    }
  }
  this_01 = &this->NetGUIDLookup;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_148,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              *)this_01);
  local_330 = '\0';
  cStack_32f = '\0';
  local_368 = (longlong *)local_148._0_8_;
  auStack_360._0_8_ = local_148._8_8_;
  stack0xfffffffffffffca8 = local_148._16_16_;
  local_348 = local_128;
  pTStack_340 = pTStack_120;
  uVar16 = local_148._24_8_ >> 0x20;
  local_338 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
               *)this_01;
  if ((int)local_148._28_4_ < *(int *)(local_148._16_8_ + 0x18)) {
    uVar18 = (ulonglong)local_148._28_4_;
    do {
      plVar6 = local_368;
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_368 + (longlong)(int)uVar16 * 0x18))
      ;
      if (bVar7) {
        uVar16 = *(ulonglong *)(*plVar6 + 8 + (longlong)(int)uVar16 * 0x18);
        if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
          puVar2 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
          puVar24 = &(this->ObjectLookup).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar24 = puVar2;
          }
          iVar9 = *(int *)(puVar24 +
                          ((uVar16 >> 0x20) * 0x17 + uVar16 &
                          (ulonglong)(*(int *)&(this->ObjectLookup).field_0x48 - 1)) * 4);
          if (iVar9 != -1) {
            do {
              if (*(ulonglong *)((longlong)iVar9 * 0x40 + *(longlong *)&this_00->field_0x0) ==
                  uVar16) goto LAB_148099335;
              iVar9 = *(int *)((longlong)iVar9 * 0x40 + 0x38 + *(longlong *)&this_00->field_0x0);
            } while (iVar9 != -1);
          }
        }
      }
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_340,(int)uVar18);
      local_330 = '\x01';
LAB_148099335:
      uStack_350 = uStack_350 & ~auStack_360._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_360);
      uVar16 = (ulonglong)uStack_34c;
      uVar18 = uVar16;
    } while ((int)uStack_34c < *(int *)(auStack_360._8_8_ + 0x18));
    if ((local_330 != '\0') && (cStack_32f != '\0')) {
      uVar23 = *(int *)&(local_338->Elements).field_0x8 - *(int *)&(local_338->Elements).field_0x34;
      iVar9 = iVar10;
      if (3 < uVar23) {
        uVar16 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_274 = (undefined4)lVar21;
        iVar9 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar23) && (local_338->HashSize < iVar9)) || (iVar9 < local_338->HashSize)) {
        local_338->HashSize = iVar9;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
        ::Rehash(local_338);
      }
    }
  }
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_118,
             (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
              *)this_00);
  local_370 = 0;
  stack0xfffffffffffffc68 = local_118._16_16_;
  local_3a8 = (longlong *)local_118._0_8_;
  auStack_3a0._0_8_ = local_118._8_8_;
  local_388 = local_f8;
  pTStack_380 = pTStack_f0;
  uVar16 = local_118._24_8_ >> 0x20;
  local_378 = (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
               *)this_00;
  if (local_118._28_4_ < *(int *)(local_118._16_8_ + 0x18)) {
    do {
      plVar6 = local_3a8;
      if ((*(longlong *)((longlong)(int)uVar16 * 0x40 + *local_3a8) == 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!It.Key().IsDefault()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xc18,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = *(ulonglong *)((longlong)(int)uStack_38c * 0x40 + *plVar6);
      if ((uVar16 == 0) || ((uVar16 & 1) != 0)) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      if (((*(byte *)((longlong)(int)uStack_38c * 0x40 + *plVar6) & 1) == bVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("It.Key().IsStatic() != It.Key().IsDynamic()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xc19,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar21 = (longlong)(int)uStack_38c * 0x40;
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar6 + 8 + lVar21));
      if (bVar7) {
        lVar15 = *plVar6;
        local_260 = *(FWeakObjectPtr *)(lVar15 + 8 + lVar21);
        iVar9 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                          ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                            *)this_01,local_260.ObjectSerialNumber ^ local_260.ObjectIndex,
                           (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_260);
        if ((iVar9 == -1) ||
           (lVar20 = *(longlong *)&this_01->field_0x0 + (longlong)iVar9 * 0x18, lVar20 == 0)) {
          lVar20 = 0;
        }
        else {
          lVar20 = *(longlong *)(lVar20 + 8);
        }
        if ((lVar20 != *(longlong *)(lVar15 + lVar21)) &&
           (*(double *)(*plVar6 + 0x28 + lVar21) == 0.0)) {
          ::FString::PrintfImpl(&local_258,L"%llu");
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_258.Data.ArrayNum != 0) {
            FVar19.Data = local_258.Data.AllocatorInstance.Data;
          }
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + 8 + lVar21));
          pFVar14 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar13,&local_238,(UObject *)0x0);
          if ((pFVar14->Data).ArrayNum == 0) {
            local_3b8 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_3b8 = (pFVar14->Data).AllocatorInstance.Data;
          }
          local_3b0 = FVar19.Data;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!It.Value().Object.IsValid() || NetGUIDLookup.FindRef(It.Value().Object) == It.Key() || It.Value().ReadOnlyTimestamp != 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xc1b,
                             L"Failed to validate ObjectLookup map in UPackageMap. Object \'%s\' was not in the NetGUIDLookup map with with value \'%s\'."
                            );
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      uStack_390 = uStack_390 & ~auStack_3a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3a0);
      uVar16 = (ulonglong)uStack_38c;
    } while ((int)uStack_38c < *(int *)(auStack_3a0._8_8_ + 0x18));
    if (((char)local_370 != '\0') && (local_370._1_1_ != '\0')) {
      uVar23 = *(int *)&(local_378->Elements).field_0x8 - *(int *)&(local_378->Elements).field_0x34;
      if (3 < uVar23) {
        uVar16 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_270 = (undefined4)lVar21;
        iVar10 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar23) && (local_378->HashSize < iVar10)) || (iVar10 < local_378->HashSize)) {
        local_378->HashSize = iVar10;
        TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
        ::Rehash(local_378);
      }
    }
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_e8,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              *)this_01);
  stack0xfffffffffffffd28 = local_e8._16_16_;
  local_2e8 = (longlong *)local_e8._0_8_;
  auStack_2e0._0_8_ = local_e8._8_8_;
  local_2b0 = 0;
  local_2c8 = local_c8;
  pTStack_2c0 = pTStack_c0;
  uVar16 = local_e8._24_8_ >> 0x20;
  local_2b8 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
               *)this_01;
  if (local_e8._28_4_ < *(int *)(local_e8._16_8_ + 0x18)) {
    do {
      plVar6 = local_2e8;
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_2e8 + (longlong)(int)uVar16 * 0x18))
      ;
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("It.Key().IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xc21,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar15 = (longlong)(int)uStack_2cc;
      lVar21 = *plVar6;
      uVar16 = *(ulonglong *)(lVar21 + 8 + lVar15 * 0x18);
      if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
        puVar2 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
        puVar24 = &(this->ObjectLookup).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar24 = puVar2;
        }
        iVar10 = *(int *)(puVar24 +
                         ((uVar16 >> 0x20) * 0x17 + uVar16 &
                         (ulonglong)(*(int *)&(this->ObjectLookup).field_0x48 - 1)) * 4);
        if (iVar10 != -1) {
          do {
            puVar17 = (ulonglong *)((longlong)iVar10 * 0x40 + *(longlong *)&this_00->field_0x0);
            if (*puVar17 == uVar16) {
              if (puVar17 != (ulonglong *)0x0) {
                local_2a8 = *(FWeakObjectPtr *)(puVar17 + 1);
                uStack_2a0 = puVar17[2];
                local_298 = puVar17[3];
                uStack_290 = puVar17[4];
                local_288 = puVar17[5];
                uStack_280 = puVar17[6];
                goto LAB_1480997a9;
              }
              break;
            }
            iVar10 = (int)puVar17[7];
          } while (iVar10 != -1);
        }
      }
      local_288 = 0;
      local_2a8.ObjectIndex = 0;
      local_2a8.ObjectSerialNumber = 0;
      uStack_2a0 = 0;
      local_298 = 0;
      uStack_290 = uStack_290 & 0xffffffff00000000;
      uStack_280 = uStack_280 & 0xfffffffffffffff0 | 0x10;
LAB_1480997a9:
      bVar7 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_2a8,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(lVar21 + lVar15 * 0x18));
      if (!bVar7) {
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + lVar15 * 0x18));
        pFVar14 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar13,&local_228,(UObject *)0x0);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        ::FString::PrintfImpl(&local_248,L"%llu");
        local_3b8 = (FScriptContainerElement *)L"";
        if (local_248.Data.ArrayNum != 0) {
          local_3b8 = local_248.Data.AllocatorInstance.Data;
        }
        local_3b0 = (FScriptContainerElement *)pwVar22;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectLookup.FindRef(It.Value() ).Object == It.Key()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0xc22,
                           L"Failed to validate NetGUIDLookup map in UPackageMap. GUID \'%s\' was not in the ObjectLookup map with with object \'%s\'."
                          );
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uStack_2d0 = uStack_2d0 & ~auStack_2e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2e0);
      uVar16 = (ulonglong)uStack_2cc;
    } while ((int)uStack_2cc < *(int *)(auStack_2e0._8_8_ + 0x18));
    if (((char)local_2b0 != '\0') && (local_2b0._1_1_ != '\0')) {
      uVar23 = *(int *)&(local_2b8->Elements).field_0x8 - *(int *)&(local_2b8->Elements).field_0x34;
      if (3 < uVar23) {
        uVar16 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar25 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar23) && (local_2b8->HashSize < iVar25)) || (iVar25 < local_2b8->HashSize)) {
        local_2b8->HashSize = iVar25;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
        ::Rehash(local_2b8);
      }
    }
  }
  FArchiveState::FArchiveState((FArchiveState *)&local_218);
  local_218._padding_._3_1_ = local_218._padding_._3_1_ | 4;
  local_218._padding_ = (longlong)&___7FArchiveCountMemGUID__6B_;
  local_218.Mem = 0;
  FArchiveCountMemGUID::CountBytes
            (&local_218,(longlong)*(int *)&(this->ObjectLookup).field_0x8 << 6,
             (longlong)*(int *)&(this->ObjectLookup).field_0xc << 6);
  (**(code **)(local_218._padding_ + 0x10))
            (&local_218,(ulonglong)(*(int *)&(this->ObjectLookup).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(this->ObjectLookup).field_0x2c + 0x1fU >> 5) << 2);
  lVar21 = (longlong)*(int *)&(this->ObjectLookup).field_0x48 << 2;
  (**(code **)(local_218._padding_ + 0x10))(&local_218,lVar21,lVar21);
  (**(code **)(local_218._padding_ + 0x10))
            (&local_218,(longlong)*(int *)&(this->NetGUIDLookup).field_0x8 * 0x18,
             (longlong)*(int *)&(this->NetGUIDLookup).field_0xc * 0x18);
  (**(code **)(local_218._padding_ + 0x10))
            (&local_218,(ulonglong)(*(int *)&(this->NetGUIDLookup).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(this->NetGUIDLookup).field_0x2c + 0x1fU >> 5) << 2);
  lVar21 = (longlong)*(int *)&(this->NetGUIDLookup).field_0x48 << 2;
  (**(code **)(local_218._padding_ + 0x10))(&local_218,lVar21,lVar21);
  if (4 < (byte)LogNetPackageMap._0_1_) {
    local_3b8 = (FScriptContainerElement *)(local_218.Mem >> 10);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  }
  FArchive::~FArchive((FArchive *)&local_218);
  local_b8.Pairs.HashSize = 0;
  if (local_b8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_b8);
  return;
}

// CollectReferences @ 14809a630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::CollectReferences(FNetGUIDCache *this,FReferenceCollector *param_1)

{
  TMap<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>_>
  *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  int iVar3;
  ulonglong uVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  FString local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  this_00 = &this->QueuedBunchObjectReferences;
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
              *)this_00);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar4 = local_98._24_8_ >> 0x20;
  uVar7 = local_98._28_4_;
  local_38 = (TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
              *)this_00;
  if ((int)uVar7 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar4 * 0x20 + *local_68;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar6 + 0x10);
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_14809a704:
        TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar7);
        local_30 = '\x01';
      }
      else {
        aVar1 = pTVar5->SharedReferenceCount;
        do {
          if (aVar1 == (atomic<int>)0x0) {
            pTVar5 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14809a704;
          }
          LOCK();
          aVar2 = pTVar5->SharedReferenceCount;
          bVar8 = aVar1 == aVar2;
          if (bVar8) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
            aVar2 = aVar1;
          }
          UNLOCK();
          aVar1 = aVar2;
        } while (!bVar8);
        lVar6 = *(longlong *)(lVar6 + 8);
        if (lVar6 == 0) goto LAB_14809a704;
        if (((*(longlong *)(lVar6 + 8) != 0) &&
            ((**(code **)(param_1->_padding_ + 0x88))(param_1,lVar6 + 8,this->Driver,0),
            *(longlong *)(lVar6 + 8) == 0)) && (2 < (byte)LogNetPackageMap._0_1_)) {
          ::FString::PrintfImpl(&local_a8,L"%llu");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar4 = (ulonglong)uStack_4c;
      uVar7 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar7 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_38->HashSize < iVar3)) || (iVar3 < local_38->HashSize)) {
        local_38->HashSize = iVar3;
        TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
             *)this_00);
  return;
}

// ConsumeAsyncLoadDelinquencyAnalytics @ 14809aa30

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
FNetGUIDCache::ConsumeAsyncLoadDelinquencyAnalytics
          (FNetGUIDCache *this,FNetAsyncLoadDelinquencyAnalytics *param_1)

{
  FDelinquencyAnalytics::operator=
            (&param_1->DelinquentAsyncLoads,&(this->DelinquentAsyncLoads).DelinquentAsyncLoads);
  param_1->MaxConcurrentAsyncLoads = (this->DelinquentAsyncLoads).MaxConcurrentAsyncLoads;
  (this->DelinquentAsyncLoads).MaxConcurrentAsyncLoads =
       *(int *)&(this->PendingAsyncLoadRequests).field_0x8 -
       *(int *)&(this->PendingAsyncLoadRequests).field_0x34;
  return;
}

// CountBytes @ 14809b240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::CountBytes(FNetGUIDCache *this,FArchive *param_1)

{
  TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
  *pTVar1;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *pTVar2;
  TMap<FNetworkGUID,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>_>
  *pTVar3;
  TMap<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>_>
  *this_00;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
  *pTVar10;
  TMap<FString,TSharedPtr<FNetFieldExportGroup,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>_>
  *pTVar11;
  bool bVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 *puVar22;
  uint uVar23;
  TMap<FString,TSharedPtr<FNetFieldExportGroup,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>_>
  *this_01;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356 [6];
  FScopeMarker local_350;
  undefined1 local_328 [8];
  ulonglong local_320;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_318;
  int iStack_310;
  uint uStack_30c;
  undefined1 *local_308;
  undefined4 uStack_300;
  int iStack_2fc;
  int local_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
  *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 local_2c0;
  int local_2b8;
  uint uStack_2b4;
  undefined1 *puStack_2b0;
  undefined4 local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  TMap<FString,TSharedPtr<FNetFieldExportGroup,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>_>
  *local_240;
  TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  TMap<FString,TSharedPtr<FNetFieldExportGroup,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  TMap<FNetworkGUID,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_7c;
  undefined4 local_5c;
  undefined4 local_3c;
  
  ::FString::FString(&local_178,"FNetGuidCache::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_350,param_1,&local_178);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                *)&this->ObjectLookup,param_1);
  ::FString::FString(&local_168,"ObjectLookup");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_168,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                *)&this->NetGUIDLookup,param_1);
  ::FString::FString(&local_158,"NetGUIDLookup");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_158,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
            (&this->ImportedNetGuids,param_1);
  ::FString::FString(&local_148,"ImportedNetGuids");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_148,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  pTVar1 = &this->PendingOuterNetGuids;
  TSet<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)pTVar1,param_1);
  local_278.UnvisitedBitMask = 0xffffffff;
  puVar22 = &(this->PendingOuterNetGuids).field_0x10;
  local_320 = 1;
  local_278._padding_._4_4_ = 1;
  local_278._padding_._0_4_ = 0;
  local_278.CurrentBitIndex = 0;
  local_278.BaseBitIndex = 0;
  local_278.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
  if (*(int *)&(this->PendingOuterNetGuids).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
  }
  TStack_2e0._padding_ = CONCAT44(local_278._padding_._4_4_,(undefined4)local_278._padding_);
  TStack_2e0.CurrentBitIndex = local_278.CurrentBitIndex;
  TStack_2e0.UnvisitedBitMask = local_278.UnvisitedBitMask;
  TStack_2e0._28_4_ = local_278._28_4_;
  TStack_2e0.BaseBitIndex = local_278.BaseBitIndex;
  TStack_2e0.Array = local_278.Array;
  local_2c0 = CONCAT44(local_2c0._4_4_,
                       *(int *)&(this->PendingOuterNetGuids).field_0x8 -
                       *(int *)&(this->PendingOuterNetGuids).field_0x34);
  TStack_230.Array = local_278.Array;
  uStack_210 = local_2c0;
  local_2e8 = pTVar1;
  local_238 = pTVar1;
  TStack_230._padding_ = TStack_2e0._padding_;
  TStack_230._16_8_ = TStack_2e0._16_8_;
  TStack_230._24_8_ = TStack_2e0._24_8_;
  pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar22,
                       *(int *)&(this->PendingOuterNetGuids).field_0x28);
  TStack_2e0._padding_ = pTVar13->_padding_;
  pTVar21 = pTVar13->Array;
  uVar9._0_4_ = pTVar13->UnvisitedBitMask;
  uVar9._4_4_ = pTVar13->CurrentBitIndex;
  TStack_2e0.BaseBitIndex = pTVar13->BaseBitIndex;
  TStack_2e0._28_4_ = *(undefined4 *)&pTVar13->field_0x1c;
  TStack_2e0.Array = pTVar21;
  TStack_2e0._16_8_ = uVar9;
  while( true ) {
    pTVar10 = local_238;
    if (*(int *)(&local_238->field_0x0 + 8) - *(int *)(&local_238->field_0x0 + 0x34) !=
        (int)uStack_210) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_230.CurrentBitIndex == uVar9._4_4_) && (TStack_230.Array == pTVar21)) &&
       (pTVar10 == pTVar1)) break;
    lVar16 = *(longlong *)&pTVar10->field_0x0 + (longlong)TStack_230.CurrentBitIndex * 0x60;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(lVar16 + 0x10) << 4,(longlong)*(int *)(lVar16 + 0x14) << 4
              );
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)(*(int *)(lVar16 + 0x30) + 0x1fU >> 5) << 2,
               (ulonglong)(*(int *)(lVar16 + 0x34) + 0x1fU >> 5) << 2);
    lVar16 = (longlong)*(int *)(lVar16 + 0x50) << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar16,lVar16);
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  ::FString::FString(&local_138,"PendingOuterNetGuids");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_138,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
                *)&this->PendingAsyncPackages,param_1);
  ::FString::FString(&local_d8,"PendingAsyncPackages");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_d8,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  this_01 = &this->NetFieldExportGroupMap;
  local_240 = this_01;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                *)this_01,param_1);
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NetFieldExportGroupMap).field_0x10;
  iVar5 = *(int *)&(this->NetFieldExportGroupMap).field_0x28;
  local_2b8 = 0;
  uVar18 = (uint)local_320;
  iStack_2a4 = 0;
  iStack_2a0 = 0;
  uStack_2b4 = uVar18;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->NetFieldExportGroupMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar21;
    }
    uVar23 = *puVar20;
    iStack_2a0 = 0;
    local_2b8 = 0;
    while (uVar23 == 0) {
      iStack_2a0 = iStack_2a0 + 0x20;
      lVar16 = (longlong)local_2b8;
      local_2b8 = local_2b8 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2b8) goto LAB_14809b738;
      uVar23 = puVar20[lVar16 + 1];
    }
    uStack_2b4 = -uVar23 & uVar23;
    uVar4 = (ulonglong)uStack_2b4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_258 = (int)lVar16;
    iStack_2a4 = local_258 + -1 + iStack_2a0;
    if (iVar5 < iStack_2a4) {
LAB_14809b738:
      iStack_2a4 = iVar5;
    }
  }
  local_2a8 = 0xffffffff;
  uVar23 = *(uint *)&(this->NetFieldExportGroupMap).field_0x28;
  TStack_2e0._padding_ = CONCAT44(uStack_2b4,local_2b8);
  bVar14 = (byte)uVar23 & 0x1f;
  TStack_2e0.CurrentBitIndex = iStack_2a4;
  TStack_2e0.UnvisitedBitMask = 0xffffffff;
  TStack_2e0._28_4_ = uStack_29c;
  TStack_2e0.BaseBitIndex = iStack_2a0;
  local_2c0 = CONCAT44(local_2c0._4_4_,
                       *(int *)&(this->NetFieldExportGroupMap).field_0x8 -
                       *(int *)&(this->NetFieldExportGroupMap).field_0x34);
  local_298._padding_._0_4_ = (int)uVar23 >> 5;
  local_298._padding_._4_4_ = uVar18 << bVar14;
  local_298.UnvisitedBitMask = -1 << bVar14;
  local_298.BaseBitIndex = uVar23 & 0xffffffe0;
  uStack_1e0 = local_2c0;
  local_2e8 = (TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
               *)this_01;
  TStack_2e0.Array = pTVar21;
  puStack_2b0 = (undefined1 *)pTVar21;
  local_298.Array = pTVar21;
  local_298.CurrentBitIndex = uVar23;
  local_208 = this_01;
  TStack_200._padding_ = TStack_2e0._padding_;
  TStack_200.Array = pTVar21;
  TStack_200._16_8_ = TStack_2e0._16_8_;
  TStack_200._24_8_ = TStack_2e0._24_8_;
  if ((((int)uVar23 < 0) || (iVar5 < (int)uVar23)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar18 = local_298.CurrentBitIndex;
  if (uVar23 != *(uint *)&(this->NetFieldExportGroupMap).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_298);
    uVar18 = local_298.CurrentBitIndex;
    pTVar21 = local_298.Array;
  }
  while( true ) {
    pTVar11 = local_208;
    if (*(int *)(&local_208->field_0x0 + 8) - *(int *)(&local_208->field_0x0 + 0x34) !=
        (int)uStack_1e0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_200.CurrentBitIndex == uVar18) && (TStack_200.Array == pTVar21)) &&
       (pTVar11 == this_01)) break;
    lVar7 = *(longlong *)&pTVar11->field_0x0;
    lVar16 = lVar7 + (longlong)TStack_200.CurrentBitIndex * 0x28;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(lVar16 + 8) * 2,
               (longlong)*(int *)(lVar7 + 0xc + (longlong)TStack_200.CurrentBitIndex * 0x28) * 2);
    lVar16 = *(longlong *)(lVar16 + 0x10);
    if (lVar16 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x30,0x30);
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(lVar16 + 8) * 2,(longlong)*(int *)(lVar16 + 0xc) * 2);
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(lVar16 + 0x20) * 0x28,
                 (longlong)*(int *)(lVar16 + 0x24) * 0x28);
      iVar5 = *(int *)(lVar16 + 0x20);
      lVar17 = *(longlong *)(lVar16 + 0x18);
      lVar7 = lVar17 + (longlong)iVar5 * 0x28;
      while( true ) {
        if (*(int *)(lVar16 + 0x20) != iVar5) {
          local_358 = 0;
          `TCheckedPointerIterator<FNetFieldExport_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_358);
        }
        this_01 = local_240;
        if (lVar17 == lVar7) break;
        lVar17 = lVar17 + 0x28;
      }
    }
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
  }
  ::FString::FString(&local_e8,"NetFieldExportGroupMap");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_e8,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  pTVar2 = &this->NetFieldExportGroupPathToIndex;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                *)pTVar2,param_1);
  local_308 = &(this->NetFieldExportGroupPathToIndex).field_0x10;
  iVar5 = *(int *)&(this->NetFieldExportGroupPathToIndex).field_0x28;
  local_2f8 = 0;
  iStack_310 = 0;
  uStack_30c = (uint)local_320;
  iStack_2fc = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->NetFieldExportGroupPathToIndex).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_308;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar16 = (longlong)iStack_310;
      local_2f8 = local_2f8 + 0x20;
      iStack_310 = iStack_310 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_310) goto LAB_14809ba16;
      uVar18 = puVar20[lVar16 + 1];
    }
    uStack_30c = -uVar18 & uVar18;
    uVar4 = (ulonglong)uStack_30c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_254 = (int)lVar16;
    iStack_2fc = local_254 + -1 + local_2f8;
    if (iVar5 < iStack_2fc) {
LAB_14809ba16:
      iStack_2fc = iVar5;
    }
  }
  puVar22 = &(this->NetFieldExportGroupPathToIndex).field_0x10;
  uVar18 = *(uint *)&(this->NetFieldExportGroupPathToIndex).field_0x28;
  uStack_2f4 = local_7c;
  iStack_2f0 = *(int *)&(this->NetFieldExportGroupPathToIndex).field_0x8 -
               *(int *)&(this->NetFieldExportGroupPathToIndex).field_0x34;
  uVar23 = uVar18 & 0xffffffe0;
  uStack_300 = 0xffffffff;
  TStack_1d0.CurrentBitIndex = iStack_2fc;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  TStack_1d0._padding_ = CONCAT44(uStack_30c,iStack_310);
  iVar15 = (int)uVar18 >> 5;
  TStack_1d0._28_4_ = local_7c;
  TStack_1d0.BaseBitIndex = local_2f8;
  uStack_1b0 = CONCAT44(uStack_2ec,iStack_2f0);
  local_318 = pTVar2;
  local_1d8 = pTVar2;
  TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_308;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->NetFieldExportGroupPathToIndex).field_0x28;
  if (uVar18 != uVar6) {
    puVar19 = *(undefined1 **)&(this->NetFieldExportGroupPathToIndex).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar15;
      uVar23 = uVar23 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14809bb30;
      uVar18 = *(uint *)(puVar19 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_250 = (int)lVar16;
    uVar18 = local_250 + -1 + uVar23;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14809bb30:
  while( true ) {
    pTVar2 = local_1d8;
    if (*(int *)(&local_1d8->field_0x0 + 8) - *(int *)(&local_1d8->field_0x0 + 0x34) !=
        (int)uStack_1b0) {
      local_357 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_357);
    }
    if (((TStack_1d0.CurrentBitIndex == uVar18) &&
        (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar2 == &this->NetFieldExportGroupPathToIndex)) break;
    lVar16 = *(longlong *)&pTVar2->field_0x0;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)((longlong)TStack_1d0.CurrentBitIndex * 0x20 + 8 + lVar16)
                       * 2,
               (longlong)*(int *)((longlong)TStack_1d0.CurrentBitIndex * 0x20 + 0xc + lVar16) * 2);
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
  }
  ::FString::FString(&local_c8,"NetFieldExportGroupPathToIndex");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_c8,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
                *)&this->NetFieldExportGroupIndexToGroup,param_1);
  ::FString::FString(&local_128,"NetFieldExportGroupIndexToGroup");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_128,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  pTVar3 = &this->History;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                *)pTVar3,param_1);
  local_308 = &(this->History).field_0x10;
  iVar5 = *(int *)&(this->History).field_0x28;
  iStack_310 = 0;
  local_2f8 = 0;
  uStack_30c = (uint)local_320;
  iStack_2fc = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->History).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_308;
    }
    uVar18 = *puVar20;
    local_2f8 = 0;
    while (uVar18 == 0) {
      lVar16 = (longlong)iStack_310;
      local_2f8 = local_2f8 + 0x20;
      iStack_310 = iStack_310 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_310) goto LAB_14809bd55;
      uVar18 = puVar20[lVar16 + 1];
    }
    uStack_30c = -uVar18 & uVar18;
    uVar4 = (ulonglong)uStack_30c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_24c = (int)lVar16;
    iStack_2fc = local_24c + -1 + local_2f8;
    if (iVar5 < iStack_2fc) {
LAB_14809bd55:
      iStack_2fc = iVar5;
    }
  }
  puVar22 = &(this->History).field_0x10;
  uVar18 = *(uint *)&(this->History).field_0x28;
  uStack_2f4 = local_5c;
  iStack_2f0 = *(int *)&(this->History).field_0x8 - *(int *)&(this->History).field_0x34;
  uVar23 = uVar18 & 0xffffffe0;
  TStack_1a0._padding_ = CONCAT44(uStack_30c,iStack_310);
  uStack_300 = 0xffffffff;
  TStack_1a0.CurrentBitIndex = iStack_2fc;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_1a0._28_4_ = local_5c;
  TStack_1a0.BaseBitIndex = local_2f8;
  uStack_180 = CONCAT44(uStack_2ec,iStack_2f0);
  local_318 = (TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
               *)pTVar3;
  local_1a8 = pTVar3;
  TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_308;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->History).field_0x28;
  if (uVar18 != uVar6) {
    puVar19 = *(undefined1 **)&(this->History).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar15;
      uVar23 = uVar23 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14809be71;
      uVar18 = *(uint *)(puVar19 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_248 = (int)lVar16;
    uVar18 = (uVar23 - 1) + local_248;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14809be71:
  while( true ) {
    pTVar3 = local_1a8;
    if (*(int *)(&local_1a8->field_0x0 + 8) - *(int *)(&local_1a8->field_0x0 + 0x34) !=
        (int)uStack_180) {
      local_356[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_356);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar18) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar3 == &this->History)) break;
    lVar16 = *(longlong *)&pTVar3->field_0x0;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)
                       *(int *)((longlong)TStack_1a0.CurrentBitIndex * 0x20 + 0x10 + lVar16) * 2,
               (longlong)*(int *)((longlong)TStack_1a0.CurrentBitIndex * 0x20 + 0x14 + lVar16) * 2);
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  ::FString::FString(&local_118,"History");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_118,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  FDelinquencyAnalytics::CountBytes(&(this->DelinquentAsyncLoads).DelinquentAsyncLoads,param_1);
  ::FString::FString(&local_108,"DelinquentAsyncLoads");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_108,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_350.PreWorkPos = *(ulong64 *)&local_350.Ar[1].field_0x8;
  }
  this_00 = &this->QueuedBunchObjectReferences;
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
                *)this_00,param_1);
  iStack_310 = 0;
  local_308 = &(this->QueuedBunchObjectReferences).field_0x10;
  iVar5 = *(int *)&(this->QueuedBunchObjectReferences).field_0x28;
  local_2f8 = 0;
  iStack_2fc = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->QueuedBunchObjectReferences).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_308;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar16 = (longlong)iStack_310;
      local_2f8 = local_2f8 + 0x20;
      iStack_310 = iStack_310 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_310) goto LAB_14809c089;
      uVar18 = puVar20[lVar16 + 1];
    }
    local_320 = (ulonglong)(-uVar18 & uVar18);
    uVar4 = local_320 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_244 = (int)lVar16;
    iStack_2fc = local_2f8 + -1 + local_244;
    if (iVar5 < iStack_2fc) {
LAB_14809c089:
      iStack_2fc = iVar5;
    }
  }
  puVar22 = &(this->QueuedBunchObjectReferences).field_0x10;
  uVar18 = *(uint *)&(this->QueuedBunchObjectReferences).field_0x28;
  uVar23 = uVar18 & 0xffffffe0;
  uStack_2f4 = local_3c;
  iStack_2f0 = *(int *)&(this->QueuedBunchObjectReferences).field_0x8 -
               *(int *)&(this->QueuedBunchObjectReferences).field_0x34;
  uStack_30c = (uint)local_320;
  uStack_300 = 0xffffffff;
  TStack_2e0.CurrentBitIndex = iStack_2fc;
  TStack_2e0.UnvisitedBitMask = 0xffffffff;
  TStack_2e0._padding_ = CONCAT44(uStack_30c,iStack_310);
  iVar15 = (int)uVar18 >> 5;
  TStack_2e0._28_4_ = local_3c;
  TStack_2e0.BaseBitIndex = local_2f8;
  local_2c0 = CONCAT44(uStack_2ec,iStack_2f0);
  local_318 = (TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
               *)this_00;
  local_2e8 = (TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
               *)this_00;
  TStack_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_308;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->QueuedBunchObjectReferences).field_0x28;
  if (uVar18 != uVar6) {
    puVar19 = *(undefined1 **)&(this->QueuedBunchObjectReferences).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar15;
      uVar23 = uVar23 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14809c1b0;
      uVar18 = *(uint *)(puVar19 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar18 = (int)lVar16 + -1 + uVar23;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14809c1b0:
  while( true ) {
    pTVar1 = local_2e8;
    if (*(int *)(&local_2e8->field_0x0 + 8) - *(int *)(&local_2e8->field_0x0 + 0x34) !=
        (int)local_2c0) {
      `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_328);
    }
    if (((TStack_2e0.CurrentBitIndex == uVar18) &&
        (TStack_2e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar1 == (TMap<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
                   *)this_00)) break;
    lVar16 = *(longlong *)&pTVar1->field_0x0;
    if (((*(longlong *)((longlong)TStack_2e0.CurrentBitIndex * 0x20 + 8 + lVar16) != 0) &&
        (lVar16 = *(longlong *)((longlong)TStack_2e0.CurrentBitIndex * 0x20 + 0x10 + lVar16),
        lVar16 != 0)) && (0 < *(int *)(lVar16 + 8))) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x10,0x10);
    }
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  ::FString::FString(&local_f8,"QueuedBunchObjectReferences");
  if (local_350.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_350.ScopeStack,&local_f8,
               *(longlong *)&local_350.Ar[1].field_0x8 - local_350.PreWorkPos);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_350);
  return;
}

// Describe @ 14809dd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FNetGUIDCache::Describe(FNetGUIDCache *this,FString *__return_storage_ptr__,FNetworkGUID *param_1)

{
  FNetGuidCacheObject *this_00;
  UObject *this_01;
  int iVar1;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::PrintfImpl(&local_58,L"%llu");
  ::FString::PrintfImpl(__return_storage_ptr__,L"NetworkGUID [%s]");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((((param_1->field0_0x0).ObjectId == 0) || ((param_1->field0_0x0).ObjectId == 1)) ||
     (this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                        *)&this->ObjectLookup,param_1), this_00 == (FNetGuidCacheObject *)0x0)) {
    ::FString::AppendChars(__return_storage_ptr__,L" Unregistered",0xd);
  }
  else {
    this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_58,(UObject *)0x0,None);
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    GenerateFullNetGUIDPath_r(this,param_1,&local_68);
    ::FString::PrintfImpl(&local_38,L"%llu");
    ::FString::PrintfImpl
              (&local_48,
               L" NoLoad [%d] Pending [%d] Broken [%d] Outer [%s] FullPath [%s] Object [%s]");
    iVar1 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindUnmappedStablyNamedGuidsWithOuter @ 1480a23a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> * __thiscall
FNetGUIDCache::FindUnmappedStablyNamedGuidsWithOuter(FNetGUIDCache *this,FNetworkGUID param_1)

{
  uint uVar1;
  FNetworkGUID_u_0 *pFVar2;
  undefined1 *puVar3;
  FNetworkGUID_u_0 *pFVar4;
  
  if (*(int *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x8 !=
      *(int *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x34) {
    puVar3 = *(undefined1 **)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->UnmappedStablyNamedGuids_OuterToInner).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(this->UnmappedStablyNamedGuids_OuterToInner).field_0x48 -
                                1U & param_1.field0_0x0._4_4_ * 0x17 + param_1.field0_0x0.Value) * 4
                     );
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FNetworkGUID_u_0 *)
                 ((longlong)(int)uVar1 * 0x30 +
                 *(longlong *)&this->UnmappedStablyNamedGuids_OuterToInner);
        if ((FNetworkGUID_u_0)pFVar4->ObjectId == param_1.field0_0x0) {
          pFVar2 = pFVar4 + 1;
          if (pFVar4 == (FNetworkGUID_u_0 *)0x0) {
            pFVar2 = (FNetworkGUID_u_0 *)0x0;
          }
          return (TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *)pFVar2;
        }
        uVar1 = pFVar4[5].Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *)0x0;
}

// FullNetGUIDPath @ 1480a25f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FNetGUIDCache::FullNetGUIDPath
          (FNetGUIDCache *this,FString *__return_storage_ptr__,FNetworkGUID *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  GenerateFullNetGUIDPath_r(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GenerateFullNetGUIDPath_r @ 1480a27f0

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
FNetGUIDCache::GenerateFullNetGUIDPath_r(FNetGUIDCache *this,FNetworkGUID *param_1,FString *param_2)

{
  FName FVar1;
  bool bVar2;
  FNetGuidCacheObject *this_00;
  UObject *pUVar3;
  int iVar4;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1->field0_0x0).ObjectId == 0) {
    return;
  }
  this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
            ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                    *)&this->ObjectLookup,param_1);
  if (this_00 == (FNetGuidCacheObject *)0x0) {
    ::FString::PrintfImpl(&local_48,L"%llu");
    ::FString::PrintfImpl(&local_58,L"[%s]NOT_IN_CACHE");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
  }
  else {
    GenerateFullNetGUIDPath_r(this,&this_00->OuterGUID,param_2);
    if (1 < (param_2->Data).ArrayNum) {
      ::FString::AppendChars(param_2,L".",1);
    }
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar2) {
      if (((this_00->PathName != (FName)0x0) &&
          (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
          FVar1.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18,
          FVar1.Number = *(uint *)&pUVar3->field_0x1c, FVar1 != this_00->PathName)) &&
         (2 < (byte)LogNetPackageMap._0_1_)) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res10.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res10,&local_48);
        ::FName::ToString(&this_00->PathName,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      local_res10.Number = *(uint *)&pUVar3->field_0x1c;
      ::FName::ToString(&local_res10,&local_38);
      ::FString::PrintfImpl(&local_58,L"%llu");
      ::FString::PrintfImpl(&local_48,L"[%s]%s");
      iVar4 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(param_2,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_1480a2b12;
    }
    if (this_00->PathName != (FName)0x0) {
      ::FName::ToString(&this_00->PathName,&local_58);
      ::FString::PrintfImpl(&local_48,L"%llu");
      ::FString::PrintfImpl(&local_38,L"[%s]%s");
      iVar4 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(param_2,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
      goto LAB_1480a2b12;
    }
    ::FString::PrintfImpl(&local_48,L"%llu");
    ::FString::PrintfImpl(&local_38,L"[%s]EMPTY");
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
LAB_1480a2b12:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAsyncLoadDelinquencyAnalytics @ 1480a40e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetAsyncLoadDelinquencyAnalytics * __thiscall
FNetGUIDCache::GetAsyncLoadDelinquencyAnalytics(FNetGUIDCache *this)

{
  return &this->DelinquentAsyncLoads;
}

// GetCacheObject @ 1480a4150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetGuidCacheObject * __thiscall
FNetGUIDCache::GetCacheObject(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  FNetGuidCacheObject *pFVar1;
  
  if (((param_1->field0_0x0).ObjectId != 0) && ((param_1->field0_0x0).ObjectId != 1)) {
    pFVar1 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
             ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                     *)&this->ObjectLookup,param_1);
    return pFVar1;
  }
  return (FNetGuidCacheObject *)0x0;
}

// GetClassNetworkChecksum @ 1480a4170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FNetGUIDCache::GetClassNetworkChecksum(FNetGUIDCache *this,UClass *param_1)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FClassNetCache *pFVar5;
  
  pUVar1 = this->Driver;
  if ((pUVar1->NetCache).Object == (FClassNetCacheMgr *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar5 = FClassNetCacheMgr::GetClassNetCache((pUVar1->NetCache).Object,param_1);
  return pFVar5->ClassChecksum;
}

// GetNetGUID @ 1480a6440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall FNetGUIDCache::GetNetGUID(FNetGUIDCache *this,UObject *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  UObject *in_R8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 uVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (in_R8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(in_R8);
  }
  uVar5 = 0;
  uVar4 = 0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (in_R8 == (UObject *)0x0)) {
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    if (in_R8 == (UObject *)0x0) goto LAB_1480a6506;
  }
  else {
    UE::GC::MarkAsReachable(in_R8);
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  }
  bVar2 = SupportsObject(this,in_R8,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res18);
  uVar4 = uVar5;
  if (bVar2) {
    local_res20 = local_res18;
    iVar3 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&this->NetGUIDLookup,
                       local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20);
    if ((iVar3 != -1) &&
       (lVar1 = *(longlong *)&this->NetGUIDLookup + (longlong)iVar3 * 0x18, lVar1 != 0)) {
      uVar4 = *(undefined8 *)(lVar1 + 8);
    }
  }
LAB_1480a6506:
  *(undefined8 *)param_1 = uVar4;
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// GetNetworkChecksum @ 1480a6bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FNetGUIDCache::GetNetworkChecksum(FNetGUIDCache *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  uint uVar3;
  UClass *pUVar4;
  
  if (param_1 == (UObject *)0x0) {
    return 0;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  pUVar2 = *(UClass **)&param_1->field_0x10;
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    param_1 = (UObject *)pUVar2;
  }
  uVar3 = GetClassNetworkChecksum(this,(UClass *)param_1);
  return uVar3;
}

// GetObjectFromNetGUID @ 1480a6e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
FNetGUIDCache::GetObjectFromNetGUID(FNetGUIDCache *this,FNetworkGUID *param_1,bool param_2)

{
  ulonglong uVar1;
  FName FVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  FNetGuidCacheObject *this_00;
  UClass *pUVar11;
  FNetGuidCacheObject *pFVar12;
  UObjectBaseUtility *pUVar13;
  UPackage *pUVar14;
  UClass *pUVar15;
  size_t sVar16;
  UClass *pUVar17;
  FUObjectItem *pFVar18;
  FString *pFVar19;
  UClass *pUVar20;
  ForAnyElementType FVar21;
  wchar_t *pwVar22;
  undefined1 *puVar23;
  FName local_res20;
  FLLMScope local_298 [2];
  FWeakObjectPtr local_290;
  FWeakObjectPtr local_288;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FName local_1b0;
  UClass *local_1a8;
  FWeakObjectPtr local_1a0;
  UClass *local_198;
  FMemScope local_190;
  UClass *local_188;
  FString local_180;
  TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,FNetworkGUID_const_&> local_170;
  int iStack_160;
  undefined4 uStack_15c;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FWeakObjectPtr *local_118;
  FNetworkGUID *local_110;
  FPackagePath local_108;
  FString local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  int local_4c;
  
  FLLMScope::FLLMScope(local_298,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_GuidCache.UniqueName;
  FMemScope::FMemScope(&local_190,&local_res20,true);
  if ((param_1->field0_0x0).ObjectId == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8846227299280875876>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xe9c,"NetGUID.IsValid()");
    if (!bVar5) {
      pUVar11 = (UClass *)0x0;
      goto LAB_1480a7d65;
    }
code_r0x0001480a6f0d:
    pcVar3 = (code *)swi(3);
    pUVar10 = (UObject *)(*pcVar3)();
    return pUVar10;
  }
  if ((param_1->field0_0x0).ObjectId == 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8846227299280875871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xea1,"!NetGUID.IsDefault()");
    if (bVar5) goto code_r0x0001480a6f0d;
  }
  else {
    this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
              ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                      *)&this->ObjectLookup,param_1);
    if (this_00 != (FNetGuidCacheObject *)0x0) {
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if (bVar5) {
        pUVar11 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        if (((FName)pUVar11->_padding_ != this_00->PathName) &&
           ((((param_1->field0_0x0).ObjectId == 0 || (((param_1->field0_0x0).ObjectId & 1) != 0)) &&
            (cVar6 = (**(code **)(this->_padding_ + 8))(this), cVar6 == '\0')))) {
          ::FName::ToString(&this_00->PathName,&local_f8);
          local_1b0 = (FName)pUVar11->_padding_;
          ::FName::ToString(&local_1b0,&local_180);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object->GetFName() == CacheObjectPtr->PathName || NetGUID.IsDynamic() || IsNetGUIDAuthority()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xeba,L"ObjectName: \'%s\', CacheObjectPathName: \'%s\'");
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pUVar10 = (UObject *)(*pcVar3)();
            return pUVar10;
          }
        }
        goto LAB_1480a7d65;
      }
      if (this_00->bIsBroken != '\0') goto LAB_1480a701f;
      uVar8 = 0;
      pUVar11 = (UClass *)0x0;
      if (this_00->bIsPending != '\0') goto LAB_1480a7d65;
      iVar9 = 0;
      if (this_00->PathName == (FName)0x0) {
        if ((((param_1->field0_0x0).ObjectId == 0) || (((param_1->field0_0x0).ObjectId & 1) != 0))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NetGUID.IsDynamic()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                  ,0xece,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pUVar10 = (UObject *)(*pcVar3)();
          return pUVar10;
        }
        goto LAB_1480a7d65;
      }
      uVar1 = (this_00->OuterGUID).field0_0x0.ObjectId;
      pUVar13 = (UObjectBaseUtility *)0x0;
      if (uVar1 != 0) {
        pFVar12 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                  ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                          *)&this->ObjectLookup,&this_00->OuterGUID);
        if (pFVar12 == (FNetGuidCacheObject *)0x0) {
          if ((uVar1 & 1) == 0) goto LAB_1480a7d65;
          if (1 < (byte)LogNetPackageMap._0_1_) {
            local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_220.Data.ArrayNum = 0;
            local_220.Data.ArrayMax = 0;
            GenerateFullNetGUIDPath_r(this,param_1,&local_220);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            FVar21.Data = local_220.Data.AllocatorInstance.Data;
LAB_1480a7143:
            if (FVar21.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar21.Data);
            }
          }
        }
        else {
          if (pFVar12->bIsBroken == '\0') {
            pUVar13 = (UObjectBaseUtility *)GetObjectFromNetGUID(this,&this_00->OuterGUID,param_2);
            if (pUVar13 != (UObjectBaseUtility *)0x0) goto LAB_1480a71d6;
            bVar5 = ShouldIgnoreWhenMissing(this,&this_00->OuterGUID);
            if ((bVar5) || ((byte)LogNetPackageMap._0_1_ < 2)) goto LAB_1480a7d65;
            local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_200.Data.ArrayNum = 0;
            local_200.Data.ArrayMax = 0;
            GenerateFullNetGUIDPath_r(this,param_1,&local_200);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            local_128.Data.AllocatorInstance.Data = local_200.Data.AllocatorInstance.Data;
            goto LAB_1480a799f;
          }
          if (1 < (byte)LogNetPackageMap._0_1_) {
            local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_210.Data.ArrayNum = 0;
            local_210.Data.ArrayMax = 0;
            GenerateFullNetGUIDPath_r(this,param_1,&local_210);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            FVar21.Data = local_210.Data.AllocatorInstance.Data;
            goto LAB_1480a7143;
          }
        }
        this_00->bIsBroken = '\x01';
        goto LAB_1480a7d65;
      }
LAB_1480a71d6:
      if ((this_00->bIsPending != '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CacheObjectPtr->bIsPending",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xf00,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pUVar10 = (UObject *)(*pcVar3)();
        return pUVar10;
      }
      if (pUVar13 != (UObjectBaseUtility *)0x0) {
        pUVar14 = UObjectBaseUtility::GetPackage(pUVar13);
        bVar5 = UPackage::IsFullyLoaded(pUVar14);
        if ((!bVar5) &&
           (pUVar14 = UObjectBaseUtility::GetPackage(pUVar13),
           ((uint)pUVar14->PackageFlagsPrivate & 0x100010) == 0)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8846227299280875774>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xf02,
                             "ObjOuter == nullptr || ObjOuter->GetPackage()->IsFullyLoaded() || ObjOuter->GetPackage()->HasAnyPackageFlags(TreatAsLoadedFlags)"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pUVar10 = (UObject *)(*pcVar3)();
            return pUVar10;
          }
          if (1 < (byte)LogNetPackageMap._0_1_) {
            if (*(longlong *)&pUVar13->field_0x10 == 0) {
              ::FString::FString(&local_1d0,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName(pUVar13,&local_1d0,(UObject *)0x0,None);
            }
            local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f0.Data.ArrayNum = 0;
            local_1f0.Data.ArrayMax = 0;
            GenerateFullNetGUIDPath_r(this,param_1,&local_1f0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
            }
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      pUVar15 = (UClass *)
                FindObjectFast<UObject>((UObject *)pUVar13,this_00->PathName,None,RF_NoFlags);
      if (((*(byte *)&param_1->field0_0x0 & 1) == 0) ||
         (bVar5 = true, (this_00->OuterGUID).field0_0x0.ObjectId != 0)) {
        bVar5 = false;
      }
      cVar6 = (**(code **)(this->_padding_ + 8))(this);
      local_res20.ComparisonIndex.Value._0_1_ = cVar6;
      if (pUVar15 == (UClass *)0x0) {
        if (this_00->bNoLoad == 0) {
          if ((cVar6 != '\0') && (2 < (byte)LogNetPackageMap._0_1_)) {
            local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_270.Data.ArrayNum = 0;
            local_270.Data.ArrayMax = 0;
            GenerateFullNetGUIDPath_r(this,param_1,&local_270);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data.AllocatorInstance.Data);
            }
          }
          if (bVar5) {
            bVar7 = ShouldAsyncLoad(this);
            if (bVar7) {
              FVar2 = this_00->PathName;
              uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
              if (*(int *)&(this->PendingAsyncLoadRequests).field_0x8 !=
                  *(int *)&(this->PendingAsyncLoadRequests).field_0x34) {
                puVar23 = *(undefined1 **)&(this->PendingAsyncLoadRequests).field_0x40;
                if (puVar23 == (undefined1 *)0x0) {
                  puVar23 = &(this->PendingAsyncLoadRequests).field_0x38;
                }
                iVar9 = *(int *)(puVar23 +
                                (ulonglong)
                                (*(int *)&(this->PendingAsyncLoadRequests).field_0x48 - 1U &
                                uVar8 + FVar2.Number) * 4);
                if (iVar9 != -1) {
                  do {
                    if (*(FName *)((longlong)iVar9 * 0x40 +
                                  *(longlong *)&this->PendingAsyncLoadRequests) == FVar2) {
                      ValidateAsyncLoadingPackage(this,this_00,(FNetworkGUID)param_1->field0_0x0);
                      goto LAB_1480a7d65;
                    }
                    iVar9 = *(int *)((longlong)iVar9 * 0x40 + 0x38 +
                                    *(longlong *)&this->PendingAsyncLoadRequests);
                  } while (iVar9 != -1);
                }
              }
              StartAsyncLoadingPackage(this,this_00,(FNetworkGUID)param_1->field0_0x0,false);
              if ((byte)LogNetPackageMap._0_1_ < 5) goto LAB_1480a7d65;
              ::FString::PrintfImpl(&local_280,L"%llu");
              ::FName::ToString(&this_00->PathName,&local_e8);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
              local_128.Data.AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                local_128.Data.AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
              }
              goto LAB_1480a799f;
            }
            FPackagePath::FromPackageNameChecked(&local_108,this_00->PathName);
            pUVar15 = (UClass *)
                      LoadPackage((UPackage *)0x0,&local_108,0,(FArchive *)0x0,
                                  (FLinkerInstancingContext *)0x0,(FPackagePath *)0x0);
            TArray<FNetworkGUID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNetworkGUID_const_&>
                      (&this->SyncLoadedGUIDs,param_1);
          }
          else {
            local_280.Data.ArrayMax = local_4c;
            local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_280.Data.ArrayNum = 0;
            pFVar19 = ::FName::ToString(&this_00->PathName,&local_b8);
            if ((pFVar19->Data).ArrayNum == 0) {
              local_170.Value = (FNetworkGUID *)0x15060d16c;
LAB_1480a755e:
              sVar16 = wcslen((wchar_t *)local_170.Value);
              iVar9 = (int)sVar16;
            }
            else {
              local_170.Value = (FNetworkGUID *)(pFVar19->Data).AllocatorInstance.Data;
              if ((FScriptContainerElement *)local_170.Value != (FScriptContainerElement *)0x0)
              goto LAB_1480a755e;
            }
            iStack_160 = iVar9;
            pUVar15 = Z_Construct_UClass_UObject_NoRegister();
            local_d8._12_4_ = local_280.Data.ArrayMax;
            local_d8.Size = local_280.Data.ArrayNum;
            local_c8._12_4_ = uStack_15c;
            local_c8.Size = iStack_160;
            local_d8.DataPtr = (wchar_t *)local_280.Data.AllocatorInstance.Data;
            local_c8.DataPtr = (wchar_t *)local_170.Value;
            pUVar15 = (UClass *)
                      StaticLoadObject(pUVar15,(UObject *)pUVar13,&local_c8,&local_d8,2,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            bVar7 = ShouldAsyncLoad(this);
            if ((bVar7) && (1 < (byte)LogNetPackageMap._0_1_)) {
              ::FString::PrintfImpl(&local_158,L"%llu");
              ::FName::ToString(&this_00->PathName,&local_a8);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
          }
          if (pUVar15 != (UClass *)0x0) goto LAB_1480a76c4;
        }
        if ((this_00->bIgnoreWhenMissing != '\0') ||
           (this_00->field_0x28 = this_00->field_0x28 | 8, (byte)LogNetPackageMap._0_1_ < 2))
        goto LAB_1480a7d65;
        local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.Data.ArrayNum = 0;
        local_260.Data.ArrayMax = 0;
        GenerateFullNetGUIDPath_r(this,param_1,&local_260);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        local_128.Data.AllocatorInstance.Data = local_260.Data.AllocatorInstance.Data;
LAB_1480a799f:
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        goto LAB_1480a7d65;
      }
LAB_1480a76c4:
      if (bVar5) {
        pUVar17 = Z_Construct_UClass_UPackage_NoRegister();
        iVar9 = (int)pUVar17->_padding_;
        if (((*(int *)(pUVar15->_padding_ + 0x38) < iVar9) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
             &pUVar17->_padding_)) || (pUVar15 == (UClass *)0x0)) {
          this_00->bIsBroken = '\x01';
          if ((byte)LogNetPackageMap._0_1_ < 2) goto LAB_1480a7d65;
          ::FString::PrintfImpl(&local_128,L"%llu");
          ::FName::ToString(&this_00->PathName,&local_68);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          goto LAB_1480a799f;
        }
        bVar5 = UPackage::IsFullyLoaded((UPackage *)pUVar15);
        if ((!bVar5) && ((pUVar15->_padding_ & 0x10001000000000) == 0)) {
          bVar5 = ShouldAsyncLoad(this);
          if ((bVar5) &&
             (pFVar18 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)((longlong)&pUVar15->_padding_ + 4)),
             ((pFVar18->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
            StartAsyncLoadingPackage(this,this_00,(FNetworkGUID)param_1->field0_0x0,true);
            if ((byte)LogNetPackageMap._0_1_ < 5) goto LAB_1480a7d65;
            ::FString::PrintfImpl(&local_148,L"%llu");
            ::FName::ToString(&this_00->PathName,&local_98);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            local_128.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
              local_128.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
            }
            goto LAB_1480a799f;
          }
          if ((GbNetCheckNoLoadPackages != false) && (this_00->bNoLoad != 0)) goto LAB_1480a7d65;
          if (4 < (byte)LogNetPackageMap._0_1_) {
            ::FString::PrintfImpl(&local_138,L"%llu");
            ::FName::ToString(&this_00->PathName,&local_88);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
          }
          pFVar19 = ::FName::ToString(&this_00->PathName,&local_78);
          if ((pFVar19->Data).ArrayNum == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
          pUVar15 = (UClass *)
                    LoadPackage((UPackage *)0x0,pwVar22,0,(FArchive *)0x0,
                                (FLinkerInstancingContext *)0x0);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          TArray<FNetworkGUID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNetworkGUID_const_&>
                    (&this->SyncLoadedGUIDs,param_1);
        }
      }
      pTVar4 = CVarIgnoreNetworkChecksumMismatch.Ref;
      if (this_00->NetworkChecksum == 0) {
LAB_1480a7af2:
        if ((pUVar15 == (UClass *)0x0) ||
           (bVar5 = UE::Net::ObjectLevelHasFinishedLoading((UObject *)pUVar15,this->Driver), bVar5))
        {
          local_188 = pUVar15;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar15);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_188);
          if (((char)local_res20.ComparisonIndex.Value == '\0') &&
             (GbAllowClientRemapCacheObject != false)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((this_00->ReadOnlyTimestamp == 0.0) || (bVar5)) {
LAB_1480a7c3c:
            if (0.0 < this_00->ReadOnlyTimestamp) {
              if (2 < (byte)LogNetPackageMap._0_1_) {
                local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_230.Data.ArrayNum = 0;
                local_230.Data.ArrayMax = 0;
                GenerateFullNetGUIDPath_r(this,param_1,&local_230);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_230.Data.AllocatorInstance.Data);
                }
              }
              if (bVar5) {
                this_00->ReadOnlyTimestamp = 0.0;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            local_288.ObjectIndex = 0;
            local_288.ObjectSerialNumber = 0;
            local_198 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FWeakObjectPtr::operator=(&local_288,(FObjectPtr)&local_198);
            local_118 = &local_288;
            local_110 = param_1;
            TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,FNetworkGUID_const_&>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&this->NetGUIDLookup,&local_170,(bool *)&local_118);
            if ((pUVar15 != (UClass *)0x0) && (GNetTraceRuntimeVerbosity != 0)) {
              cVar6 = (**(code **)(this->_padding_ + 8))(this);
              FNetTrace::TraceObjectCreated
                        (this->Driver->NetTraceId,(param_1->field0_0x0).ObjectId,
                         *(FName *)(pUVar15->_padding_ + 0x18),0,(uint)(cVar6 == '\0'));
            }
          }
          else {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            local_290.ObjectIndex = 0;
            local_290.ObjectSerialNumber = 0;
            local_1a8 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FWeakObjectPtr::operator=(&local_290,(FObjectPtr)&local_1a8);
            local_1a0 = local_290;
            iVar9 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                              ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                                *)&this->NetGUIDLookup,
                               local_290.ObjectSerialNumber ^ local_290.ObjectIndex,
                               (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_1a0);
            if (iVar9 == -1) goto LAB_1480a7c3c;
          }
          UpdateQueuedBunchObjectReference
                    (this,(FNetworkGUID)param_1->field0_0x0,(UObject *)pUVar15);
          pUVar11 = pUVar15;
          goto LAB_1480a7d65;
        }
        if ((byte)LogNetPackageMap._0_1_ < 6) goto LAB_1480a7d65;
        if (pUVar15->_padding_ == 0) {
          ::FString::FString(&local_1c0,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar15,&local_1c0,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        local_1e0.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
      }
      else {
        bVar5 = IsInParallelGameThread();
        if (bVar5) {
LAB_1480a78fe:
          pUVar13 = (UObjectBaseUtility *)0x0;
        }
        else {
          bVar5 = IsInGameThread();
          pUVar13 = (UObjectBaseUtility *)&DAT_00000004;
          if (bVar5) goto LAB_1480a78fe;
        }
        if (*(int *)((longlong)pTVar4->ShadowedValue + (longlong)&pUVar13->field_0x0) != 0)
        goto LAB_1480a7af2;
        if (pUVar15 != (UClass *)0x0) {
          pUVar20 = Z_Construct_UClass_UClass_NoRegister();
          pUVar17 = (UClass *)pUVar15->_padding_;
          iVar9 = (int)pUVar20->_padding_;
          if ((iVar9 <= (int)pUVar17->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar9 * 8) ==
              &pUVar20->_padding_)) {
            pUVar17 = pUVar15;
          }
          uVar8 = GetClassNetworkChecksum(this,pUVar17);
        }
        if (this_00->NetworkChecksum == uVar8) goto LAB_1480a7af2;
        if (this->NetworkChecksumMode != SaveAndUse) {
          if (5 < (byte)LogNetPackageMap._0_1_) {
            local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_240.Data.ArrayNum = 0;
            local_240.Data.ArrayMax = 0;
            GenerateFullNetGUIDPath_r(this,param_1,&local_240);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_1480a7af2;
        }
        local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.Data.ArrayNum = 0;
        local_250.Data.ArrayMax = 0;
        GenerateFullNetGUIDPath_r(this,param_1,&local_250);
        ::FString::PrintfImpl
                  (&local_1e0,
                   L"GetObjectFromNetGUID: Network checksum mismatch. FullNetGUIDPath: %s, %u, %u");
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        if (2 < (byte)LogNetPackageMap._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        }
        this_00->bIsBroken = '\x01';
        BroadcastNetFailure(this->Driver,NetChecksumMismatch,&local_1e0);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      goto LAB_1480a7d65;
    }
  }
LAB_1480a701f:
  pUVar11 = (UClass *)0x0;
LAB_1480a7d65:
  FMemScope::~FMemScope(&local_190);
  FLLMScope::~FLLMScope(local_298);
  return (UObject *)pUVar11;
}

// GetOrAssignNetGUID @ 1480a7fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall
FNetGUIDCache::GetOrAssignNetGUID
          (FNetGUIDCache *this,UObject *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FWeakObjectPtr FVar9;
  undefined1 *puVar10;
  FWeakObjectPtr *in_R9;
  FWeakObjectPtr FVar11;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (in_R9 == (FWeakObjectPtr *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (param_2 != (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = (FWeakObjectPtr)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    FVar9 = local_res18;
  }
  else {
    FVar9 = *in_R9;
  }
  local_res18 = FVar9;
  local_res20 = FVar9;
  if ((param_2 == (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) ||
     (bVar2 = SupportsObject(this,(UObject *)param_2,
                             (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res18), !bVar2)) {
    if (5 < (byte)LogNetPackageMap._0_1_) {
      if (param_2 == (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_78,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    *(undefined8 *)param_1 = 0;
    return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
  }
  uVar3 = (**(code **)(this->_padding_ + 8))(this);
  local_res18.ObjectIndex._0_1_ = uVar3;
  local_88 = FVar9;
  iVar4 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                      *)&this->NetGUIDLookup,FVar9.ObjectSerialNumber ^ FVar9.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_88);
  if ((iVar4 == -1) ||
     (lVar8 = *(longlong *)&(this->NetGUIDLookup).field_0x0 + (longlong)iVar4 * 0x18, lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 8);
  }
  FVar11.ObjectIndex = 0;
  FVar11.ObjectSerialNumber = 0;
  if (lVar8 == 0) goto LAB_1480a8567;
  if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
    iVar4 = (int)((ulonglong)lVar8 >> 0x20) * 0x17;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ObjectLookup).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->ObjectLookup).field_0x48 - 1U & (int)lVar8 + iVar4)
                    * 4);
    if (iVar5 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar5 * 0x40 + *(longlong *)&this->ObjectLookup);
        if (*plVar7 == lVar8) {
          local_88 = (FWeakObjectPtr)(plVar7 + 1);
          if (plVar7 == (longlong *)0x0) {
            local_88 = FVar11;
          }
          if ((local_88 != (FWeakObjectPtr)0x0) &&
             (0.0 < (double)*(FWeakObjectPtr *)((longlong)local_88 + 0x20))) {
            if ((byte)LogNetPackageMap._0_1_ < 3) goto LAB_1480a8423;
            puVar10 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
            local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78.Data.ArrayNum = 0;
            local_78.Data.ArrayMax = 0;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = &(this->ObjectLookup).field_0x38;
            }
            iVar4 = *(int *)(puVar10 +
                            (ulonglong)
                            (*(int *)&(this->ObjectLookup).field_0x48 - 1U & (int)lVar8 + iVar4) * 4
                            );
            if (iVar4 == -1) goto LAB_1480a81d7;
            goto LAB_1480a81c0;
          }
          break;
        }
        iVar5 = (int)plVar7[7];
      } while (iVar5 != -1);
    }
  }
  goto LAB_1480a843e;
  while (iVar4 = (int)plVar7[7], iVar4 != -1) {
LAB_1480a81c0:
    plVar7 = (longlong *)((longlong)iVar4 * 0x40 + *(longlong *)&this->ObjectLookup);
    if (*plVar7 == lVar8) {
      FVar9 = (FWeakObjectPtr)(plVar7 + 1);
      if (plVar7 == (longlong *)0x0) {
        FVar9 = FVar11;
      }
      if (FVar9 != (FWeakObjectPtr)0x0) {
        GenerateFullNetGUIDPath_r(this,(FNetworkGUID *)((longlong)FVar9 + 8),&local_78);
        if (1 < local_78.Data.ArrayNum) {
          ::FString::AppendChars(&local_78,L".",1);
        }
        bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)FVar9);
        if (bVar2) {
          if (((*(FWeakObjectPtr *)((longlong)FVar9 + 0x10) != (FWeakObjectPtr)0x0) &&
              (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar9),
              FVar1.ObjectIndex = *(int *)&pUVar6->field_0x18,
              FVar1.ObjectSerialNumber = *(int *)&pUVar6->field_0x1c,
              FVar1 != *(FWeakObjectPtr *)((longlong)FVar9 + 0x10))) &&
             (2 < (byte)LogNetPackageMap._0_1_)) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar9);
            local_80.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
            local_80.Number = *(uint *)&pUVar6->field_0x1c;
            ::FName::ToString(&local_80,&local_68);
            local_80 = (FName)L"";
            if (local_68.Data.ArrayNum != 0) {
              local_80 = (FName)local_68.Data.AllocatorInstance;
            }
            ::FName::ToString((FName *)((longlong)FVar9 + 0x10),&local_48);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar9);
          local_80.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
          local_80.Number = *(uint *)&pUVar6->field_0x1c;
          ::FName::ToString(&local_80,&local_48);
          ::FString::PrintfImpl(&local_58,L"%llu");
          ::FString::PrintfImpl(&local_68,L"[%s]%s");
          iVar4 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          ::FString::AppendChars(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar4);
          if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          }
        }
        else if (*(FWeakObjectPtr *)((longlong)FVar9 + 0x10) == (FWeakObjectPtr)0x0) {
          ::FString::PrintfImpl(&local_58,L"%llu");
          ::FString::PrintfImpl(&local_48,L"[%s]EMPTY");
          iVar4 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          ::FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
          local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
            local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          }
        }
        else {
          ::FName::ToString((FName *)((longlong)FVar9 + 0x10),&local_68);
          ::FString::PrintfImpl(&local_58,L"%llu");
          ::FString::PrintfImpl(&local_48,L"[%s]%s");
          iVar4 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          ::FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
          if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        goto LAB_1480a83eb;
      }
      break;
    }
  }
LAB_1480a81d7:
  ::FString::PrintfImpl(&local_58,L"%llu");
  ::FString::PrintfImpl(&local_48,L"[%s]NOT_IN_CACHE");
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_1480a83eb:
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  FVar9 = local_res20;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    FVar9 = local_res20;
  }
LAB_1480a8423:
  if (((char)local_res18.ObjectIndex != '\0') || (GbAllowClientRemapCacheObject == false)) {
    TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
    ::Remove((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
              *)&this->NetGUIDLookup,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)FVar9);
LAB_1480a8567:
    if ((char)local_res18.ObjectIndex == '\0') {
      if (5 < (byte)LogNetPackageMap._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      *(undefined8 *)param_1 = 1;
      return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
    }
    (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
    return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
  }
  ((FWeakObjectPtr *)((longlong)local_88 + 0x20))->ObjectIndex = 0;
  ((FWeakObjectPtr *)((longlong)local_88 + 0x20))->ObjectSerialNumber = 0;
LAB_1480a843e:
  *(longlong *)param_1 = lVar8;
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// GetOuterNetGUID @ 1480a8650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall FNetGUIDCache::GetOuterNetGUID(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  FNetworkGUID FVar1;
  FNetGuidCacheObject *pFVar2;
  FNetworkGUID_u_0 *in_R8;
  
  FVar1.field0_0x0 = (FNetworkGUID_u_0)in_R8->ObjectId;
  (param_1->field0_0x0).ObjectId = 0;
  if ((FVar1.field0_0x0 != 0) && (FVar1.field0_0x0 != 1)) {
    pFVar2 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
             ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                     *)&this->ObjectLookup,(FNetworkGUID *)in_R8);
    if (pFVar2 != (FNetGuidCacheObject *)0x0) {
      param_1->field0_0x0 = (pFVar2->OuterGUID).field0_0x0;
    }
  }
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// IsDynamicObject @ 1480b37c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsDynamicObject(FNetGUIDCache *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xc72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x210))(param_1);
  if (cVar4 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object->IsSupportedForNetworking()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0xc73,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x208))(param_1);
  return cVar4 == '\0';
}

// IsGUIDBroken @ 1480b3870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsGUIDBroken(FNetGUIDCache *this,FNetworkGUID *param_1,bool param_2)

{
  FNetGuidCacheObject *pFVar1;
  
  if (((param_1->field0_0x0).ObjectId != 0) && ((param_1->field0_0x0).ObjectId != 1)) {
    pFVar1 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
             ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                     *)&this->ObjectLookup,param_1);
    if (pFVar1 != (FNetGuidCacheObject *)0x0) {
      return pFVar1->bIsBroken;
    }
    return param_2;
  }
  return false;
}

// IsGUIDLoaded @ 1480b3980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsGUIDLoaded(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  bool bVar1;
  FNetGuidCacheObject *this_00;
  
  if (((param_1->field0_0x0).ObjectId != 0) && ((param_1->field0_0x0).ObjectId != 1)) {
    this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
              ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                      *)&this->ObjectLookup,param_1);
    if (this_00 != (FNetGuidCacheObject *)0x0) {
      bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this_00->Object,(void *)0x0);
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}

// IsGUIDNoLoad @ 1480b39d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsGUIDNoLoad(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  FNetGuidCacheObject *pFVar1;
  
  if (((param_1->field0_0x0).ObjectId != 0) && ((param_1->field0_0x0).ObjectId != 1)) {
    pFVar1 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
             ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                     *)&this->ObjectLookup,param_1);
    if ((pFVar1 != (FNetGuidCacheObject *)0x0) && (pFVar1->bNoLoad != 0)) {
      return true;
    }
  }
  return false;
}

// IsGUIDPending @ 1480b3a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsGUIDPending(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  FNetGuidCacheObject *pFVar1;
  
  if (((param_1->field0_0x0).ObjectId != 0) && ((param_1->field0_0x0).ObjectId != 1)) {
    pFVar1 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
             ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                     *)&this->ObjectLookup,param_1);
    if ((pFVar1 != (FNetGuidCacheObject *)0x0) && (pFVar1->bIsPending != '\0')) {
      return true;
    }
  }
  return false;
}

// IsGUIDRegistered @ 1480b3bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsGUIDRegistered(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = (param_1->field0_0x0).ObjectId;
  if ((uVar1 == 0) || (uVar1 == 1)) {
    return false;
  }
  if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ObjectLookup).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->ObjectLookup).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar2 * 0x40 + *(longlong *)&this->ObjectLookup) == uVar1)
        goto LAB_1480b3c2b;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + *(longlong *)&this->ObjectLookup);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1480b3c2b:
  return iVar2 != -1;
}

// IsHistoryEnabled @ 1480b3c40

bool __cdecl FNetGUIDCache::IsHistoryEnabled(void)

{
  return bIsNetGuidCacheHistoryEnabled != 0;
}

// IsNetGUIDAuthority @ 1480b3c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsNetGUIDAuthority(FNetGUIDCache *this)

{
  char cVar1;
  
  if (this->Driver != (UNetDriver *)0x0) {
    cVar1 = (**(code **)(this->Driver->_padding_ + 0x3f8))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// IsTrackingOwnerOrPawn @ 1480b4090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::IsTrackingOwnerOrPawn(FNetGUIDCache *this)

{
  int iVar1;
  FIsOwnerOrPawnHelper *pFVar2;
  AActor *pAVar3;
  char cVar4;
  UClass *pUVar5;
  AActor *pAVar6;
  
  pFVar2 = this->TrackingOwnerOrPawnHelper;
  if (pFVar2 == (FIsOwnerOrPawnHelper *)0x0) {
    return false;
  }
  cVar4 = pFVar2->CachedResult;
  if (cVar4 != -1) goto LAB_1480b413a;
  cVar4 = false;
  if (((pFVar2->ChannelActor != (AActor *)0x0) &&
      (pAVar3 = pFVar2->ConnectionActor, pAVar3 != (AActor *)0x0)) &&
     (cVar4 = pFVar2->ChannelActor == pAVar3, !(bool)cVar4)) {
    pUVar5 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      cVar4 = false;
    }
    else {
      pAVar3 = pAVar3[1].PrimaryActorTick.Target;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar3 == (AActor *)0x0)) {
        pAVar6 = pFVar2->ChannelActor;
        if (pAVar3 == (AActor *)0x0) {
          cVar4 = pAVar6 == (AActor *)0x0;
          goto LAB_1480b4137;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
        pAVar6 = pFVar2->ChannelActor;
      }
      cVar4 = pAVar3 == pAVar6;
    }
  }
LAB_1480b4137:
  pFVar2->CachedResult = cVar4;
LAB_1480b413a:
  if (cVar4 == '\0') {
    return false;
  }
  return true;
}

// RegisterNetGUIDFromPath_Client @ 1480c2fe0

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
FNetGUIDCache::RegisterNetGUIDFromPath_Client
          (FNetGUIDCache *this,FNetworkGUID *param_1,FString *param_2,FNetworkGUID *param_3,
          uint param_4,bool param_5,bool param_6)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FWeakObjectPtr this_00;
  FString *pFVar8;
  FName *pFVar9;
  FNetworkGUID_u_0 FVar10;
  wchar_t *pwVar11;
  FNetworkGUID_u_0 FVar12;
  FName local_res10;
  FNetworkGUID_u_0 local_1c0;
  undefined8 local_1b8;
  FWeakObjectPtr local_1b0;
  FNetworkGUID_u_0 local_1a8;
  undefined8 local_1a0;
  FNetworkGUID_u_0 local_198;
  undefined8 local_190;
  FNetworkGUID_u_0 local_188;
  undefined8 local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FNetGuidCacheObject local_98;
  FString local_68;
  FString local_58;
  FString local_48;
  
  cVar5 = (**(code **)(this->_padding_ + 8))();
  pwVar11 = L"";
  if ((cVar5 != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsNetGUIDAuthority()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd8d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1->field0_0x0).ObjectId == 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NetGUID.IsDefault()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd8e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (4 < (byte)LogNetPackageMap._0_1_) {
    ::FString::PrintfImpl(&local_168,L"%llu");
    ::FString::PrintfImpl(&local_178,L"%llu");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (FWeakObjectPtr)
            TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
            ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                    *)&this->ObjectLookup,param_1);
  FVar10.ObjectId = 0;
  local_1b0 = this_00;
  if (this_00 == (FWeakObjectPtr)0x0) {
    local_98.ReadOnlyTimestamp = 0.0;
    local_98.bDirtyForReplay = '\x01';
    local_98.bIsBroken = '\0';
    local_98.bIsPending = '\0';
    local_98.bIgnoreWhenMissing = '\0';
    local_98.bNoLoad = '\0';
    local_98.Object.WeakPtr.ObjectIndex = 0;
    local_98.Object.WeakPtr.ObjectSerialNumber = 0;
    if ((param_2->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar9 = ::FName::FName(&local_res10,pwVar11);
    local_98.PathName = *pFVar9;
    local_98.OuterGUID.field0_0x0 = param_3->field0_0x0;
    local_98.NetworkChecksum = param_4;
    local_98._40_1_ = local_98._40_1_ & 0xfc | param_6 * '\x02' | param_5;
    RegisterNetGUID_Internal(this,param_1,&local_98);
    return;
  }
  local_1c0.ObjectId = 0;
  local_1b8 = 0;
  bVar6 = false;
  local_res10.ComparisonIndex.Value._0_1_ = '\0';
  bVar4 = false;
  pFVar8 = ::FName::ToString((FName *)((longlong)this_00 + 0x10),&local_68);
  iVar7 = (param_2->Data).ArrayNum;
  iVar2 = (pFVar8->Data).ArrayNum;
  if (iVar2 == iVar7) {
    if (1 < iVar2) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar6 = iVar7 != 0;
    }
  }
  else {
    bVar6 = iVar7 + iVar2 != 1;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar12.ObjectId = FVar10.ObjectId;
  if (bVar6) {
    if (2 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&local_158,L"%llu");
      ::FName::ToString((FName *)((longlong)this_00 + 0x10),&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_148,L"%llu");
    ::FName::ToString((FName *)((longlong)this_00 + 0x10),&local_48);
    ::FString::PrintfImpl
              ((FString *)&local_1a8,L"Path mismatch. Path: %s, Expected: %s, NetGUID: %s");
    FVar12 = local_1a8;
    local_1b8 = local_1a0;
    local_1a0 = 0;
    local_1c0.ObjectId = local_1a8.ObjectId;
    local_1a8.ObjectId = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    local_res10.ComparisonIndex.Value._0_1_ = '\x01';
  }
  if (((FNetworkGUID_u_0 *)((longlong)this_00 + 8))->ObjectId != (param_3->field0_0x0).ObjectId) {
    if (2 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&local_118,L"%llu");
      ::FString::PrintfImpl(&local_128,L"%llu");
      ::FString::PrintfImpl(&local_138,L"%llu");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_e8,L"%llu");
    ::FString::PrintfImpl(&local_f8,L"%llu");
    ::FString::PrintfImpl(&local_108,L"%llu");
    ::FString::PrintfImpl
              ((FString *)&local_198,
               L"Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s");
    if ((void *)FVar12.ObjectId != (void *)0x0) {
      FMemory::Free((void *)FVar12);
    }
    FVar12 = local_198;
    local_1b8 = local_190;
    local_190 = 0;
    local_1c0.ObjectId = local_198.ObjectId;
    local_198.ObjectId = 0;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
    this_00 = local_1b0;
  }
  bVar6 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar6) {
    local_1b0 = *(FWeakObjectPtr *)this_00;
    iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&this->NetGUIDLookup,local_1b0.ObjectSerialNumber ^ local_1b0.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_1b0);
    if ((iVar7 != -1) &&
       (lVar1 = *(longlong *)&this->NetGUIDLookup + (longlong)iVar7 * 0x18, lVar1 != 0)) {
      FVar10 = (FNetworkGUID_u_0)((FNetworkGUID_u_0 *)(lVar1 + 8))->ObjectId;
    }
    if ((void *)FVar10.ObjectId != (void *)(param_1->field0_0x0).ObjectId) {
      if (2 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_c8,L"%llu");
        ::FString::PrintfImpl(&local_d8,L"%llu");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(&local_a8,L"%llu");
      ::FString::PrintfImpl(&local_b8,L"%llu");
      ::FString::PrintfImpl
                ((FString *)&local_188,L"Netguid mismatch. Path: %s, NetGUID: %s, Expected: %s");
      if ((void *)FVar12.ObjectId != (void *)0x0) {
        FMemory::Free((void *)FVar12);
      }
      FVar12 = local_188;
      local_1b8 = local_180;
      local_180 = 0;
      local_1c0.ObjectId = local_188.ObjectId;
      local_188.ObjectId = 0;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
      goto LAB_1480c364a;
    }
  }
  bVar6 = false;
LAB_1480c364a:
  if ((((char)local_res10.ComparisonIndex.Value != '\0') || (bVar4)) || (bVar6)) {
    BroadcastNetFailure(this->Driver,NetGuidMismatch,(FString *)&local_1c0);
    FVar12 = local_1c0;
  }
  if ((void *)FVar12.ObjectId != (void *)0x0) {
    FMemory::Free((void *)FVar12);
  }
  return;
}

// RegisterNetGUIDFromPath_Server @ 1480c3740

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
FNetGUIDCache::RegisterNetGUIDFromPath_Server
          (FNetGUIDCache *this,FNetworkGUID *param_1,FString *param_2,FNetworkGUID *param_3,
          uint param_4,bool param_5,bool param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FName *pFVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName local_res10;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FNetGuidCacheObject local_98;
  FString local_68;
  FString local_58;
  FString local_48;
  
  cVar4 = (**(code **)(this->_padding_ + 8))();
  pwVar9 = L"";
  if ((cVar4 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsNetGUIDAuthority()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xdd1,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1->field0_0x0).ObjectId == 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NetGUID.IsDefault()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xdd2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (4 < (byte)LogNetPackageMap._0_1_) {
    ::FString::PrintfImpl(&local_158,L"%llu");
    ::FString::PrintfImpl(&local_148,L"%llu");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  local_158.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
       ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
               *)&this->ObjectLookup,param_1);
  FVar10.Data = (FScriptContainerElement *)0x0;
  if ((FNetGuidCacheObject *)local_158.Data.AllocatorInstance.Data == (FNetGuidCacheObject *)0x0) {
    local_98.ReadOnlyTimestamp = 0.0;
    local_98.bDirtyForReplay = '\x01';
    local_98.bIsBroken = '\0';
    local_98.bIsPending = '\0';
    local_98.bIgnoreWhenMissing = '\0';
    local_98.bNoLoad = '\0';
    local_98.Object.WeakPtr.ObjectIndex = 0;
    local_98.Object.WeakPtr.ObjectSerialNumber = 0;
    if ((param_2->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res10,pwVar9);
    local_98.PathName = *pFVar8;
    local_98.OuterGUID.field0_0x0 = param_3->field0_0x0;
    local_98.NetworkChecksum = param_4;
    local_98._40_1_ = local_98._40_1_ & 0xfc | param_6 * '\x02' | param_5;
    RegisterNetGUID_Internal(this,param_1,&local_98);
  }
  else {
    local_148.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         &((FNetGuidCacheObject *)local_158.Data.AllocatorInstance.Data)->PathName;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    bVar5 = false;
    local_res10.ComparisonIndex.Value._0_1_ = '\0';
    bVar3 = false;
    pFVar7 = ::FName::ToString((FName *)local_148.Data.AllocatorInstance.Data,&local_68);
    iVar6 = (param_2->Data).ArrayNum;
    iVar1 = (pFVar7->Data).ArrayNum;
    if (iVar1 == iVar6) {
      if (1 < iVar1) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar5 = iVar6 != 0;
      }
    }
    else {
      bVar5 = iVar6 + iVar1 != 1;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      FVar10.Data = local_148.Data.AllocatorInstance.Data;
      if (2 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_118,L"%llu");
        FVar10.Data = local_148.Data.AllocatorInstance.Data;
        ::FName::ToString((FName *)local_148.Data.AllocatorInstance.Data,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(&local_108,L"%llu");
      ::FName::ToString((FName *)FVar10.Data,&local_48);
      ::FString::PrintfImpl(&local_138,L"Path mismatch. Path: %s, Expected: %s, NetGUID: %s");
      FVar10.Data = local_138.Data.AllocatorInstance.Data;
      local_168.Data.ArrayNum = local_138.Data.ArrayNum;
      local_168.Data.ArrayMax = local_138.Data.ArrayMax;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      local_168.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_res10.ComparisonIndex.Value._0_1_ = '\x01';
    }
    if (((FNetworkGUID_u_0 *)(local_158.Data.AllocatorInstance.Data + 8))->ObjectId !=
        (param_3->field0_0x0).ObjectId) {
      if (2 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_d8,L"%llu");
        ::FString::PrintfImpl(&local_e8,L"%llu");
        ::FString::PrintfImpl(&local_f8,L"%llu");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(&local_a8,L"%llu");
      ::FString::PrintfImpl(&local_b8,L"%llu");
      ::FString::PrintfImpl(&local_c8,L"%llu");
      ::FString::PrintfImpl
                (&local_128,L"Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s");
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      FVar10.Data = local_128.Data.AllocatorInstance.Data;
      local_168.Data.ArrayNum = local_128.Data.ArrayNum;
      local_168.Data.ArrayMax = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_168.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    if (((char)local_res10.ComparisonIndex.Value != '\0') || (bVar3)) {
      BroadcastNetFailure(this->Driver,NetGuidMismatch,&local_168);
      FVar10.Data = local_168.Data.AllocatorInstance.Data;
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  return;
}

// RegisterNetGUID_Client @ 1480c3ce0

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
FNetGUIDCache::RegisterNetGUID_Client(FNetGUIDCache *this,FNetworkGUID *param_1,UObject *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FNetGuidCacheObject *this_00;
  UObject *this_01;
  wchar_t *pwVar6;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *this_02;
  FNetworkGUID_u_0 *pFVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_168;
  UObject *local_160;
  FWeakObjectPtr local_158;
  UObject *local_150;
  FString local_148;
  UObject *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FNetGuidCacheObject local_d0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_res10 = (FWeakObjectPtr)((ulonglong)local_res10 & 0xffffffff00000000);
  cVar3 = (**(code **)(this->_padding_ + 8))();
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsNetGUIDAuthority()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd47,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_2 != (UObject *)0x0) && ((*(uint *)&param_2->field_0x8 >> 0x1e & 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Object || IsValid(Object)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd48,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1->field0_0x0).ObjectId == 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NetGUID.IsDefault()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd49,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((param_1->field0_0x0).ObjectId == 0) || (((param_1->field0_0x0).ObjectId & 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetGUID.IsDynamic()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd4a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (4 < (byte)LogNetPackageMap._0_1_) {
    if (param_2 != (UObject *)0x0) {
      local_168.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_168.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_168,&local_120);
    }
    ::FString::PrintfImpl(&local_130,L"%llu");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if ((param_2 != (UObject *)0x0) &&
       (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  local_168 = (FName)&this->ObjectLookup;
  this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
            ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                    *)local_168,param_1);
  if (this_00 == (FNetGuidCacheObject *)0x0) goto LAB_1480c40e2;
  if ((this_00->PathName != (FName)0x0) && (2 < (byte)LogNetPackageMap._0_1_)) {
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    GenerateFullNetGUIDPath_r(this,param_1,&local_148);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if ((this_01 == (UObject *)0x0) || (this_01 == param_2)) {
    if (5 < (byte)LogNetPackageMap._0_1_) {
      if (this_01 != (UObject *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_70,(UObject *)0x0);
      }
      if (param_2 != (UObject *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_80,(UObject *)0x0);
      }
      ::FString::PrintfImpl(&local_100,L"%llu");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if ((param_2 != (UObject *)0x0) &&
         (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (this_01 != (UObject *)0x0) goto LAB_1480c40a4;
    }
  }
  else if (2 < (byte)LogNetPackageMap._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_90,(UObject *)0x0);
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_a0,(UObject *)0x0);
    }
    ::FString::PrintfImpl(&local_110,L"%llu");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    local_70.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    if ((param_2 != (UObject *)0x0) &&
       (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      local_70.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    }
LAB_1480c40a4:
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  ::Remove((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
            *)&this->NetGUIDLookup,
           (TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)(this_00->Object).WeakPtr);
  TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
  ::Remove((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
            *)local_168,param_1);
LAB_1480c40e2:
  this_02 = &this->NetGUIDLookup;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_160 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_160);
  local_158 = local_res10;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                      *)this_02,local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_158);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this_02->field_0x0 + (longlong)iVar5 * 0x18;
    bVar4 = false;
    pFVar7 = (FNetworkGUID_u_0 *)(lVar1 + 8);
    if (lVar1 == 0) {
      pFVar7 = (FNetworkGUID_u_0 *)0x0;
    }
    if (pFVar7 != (FNetworkGUID_u_0 *)0x0) {
      if (2 < (byte)LogNetPackageMap._0_1_) {
        if (((param_1->field0_0x0).ObjectId != 0) && (((param_1->field0_0x0).ObjectId & 1) == 0)) {
          bVar4 = true;
        }
        pwVar6 = L"FALSE";
        local_158 = (FWeakObjectPtr)0x1506e3578;
        if (bVar4) {
          local_158 = (FWeakObjectPtr)0x1506e3568;
        }
        ::FString::PrintfImpl(&local_e0,L"%llu");
        local_160 = (UObject *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          local_160 = (UObject *)local_e0.Data.AllocatorInstance.Data;
        }
        if ((pFVar7->ObjectId == 0) || ((pFVar7->ObjectId & 1) != 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pwVar6 = L"TRUE";
        }
        local_150 = (UObject *)pwVar6;
        ::FString::PrintfImpl(&local_f0,L"%llu");
        if (param_2 != (UObject *)0x0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,local_60,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if ((param_2 != (UObject *)0x0) &&
           (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if ((UObject *)local_e0.Data.AllocatorInstance.Data != (UObject *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
      ::Remove((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                *)local_168,(FNetworkGUID *)pFVar7);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_150 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_150);
      TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
      ::Remove((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                *)this_02,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_res18);
    }
  }
  local_d0.OuterGUID.field0_0x0.ObjectId = (FNetworkGUID_u_0)0x0;
  local_d0.ReadOnlyTimestamp = 0.0;
  local_d0.bDirtyForReplay = '\x01';
  local_d0.bIsBroken = '\0';
  local_d0.bIsPending = '\0';
  local_d0.bIgnoreWhenMissing = '\0';
  local_d0.bNoLoad = '\0';
  local_d0.PathName.ComparisonIndex.Value = 0;
  local_d0.PathName.Number = 0;
  local_d0.NetworkChecksum = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_138 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_138);
  local_d0.Object.WeakPtr = local_res20;
  RegisterNetGUID_Internal(this,param_1,&local_d0);
  return;
}

// RegisterNetGUID_Internal @ 1480c43d0

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
FNetGUIDCache::RegisterNetGUID_Internal
          (FNetGUIDCache *this,FNetworkGUID *param_1,FNetGuidCacheObject *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  UObject *pUVar6;
  undefined1 *puVar7;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [24];
  TPairInitializer<FNetworkGUID_const_&,FString_&&> local_a8;
  FWeakObjectPtr local_98;
  FMemScope local_90;
  FNetworkGUID *local_88;
  FNetGuidCacheObject *local_80;
  FNetGuidCacheObject *local_78;
  FNetworkGUID *local_70;
  FNetworkGUID *local_68;
  FString *local_60;
  FNetworkGUID *local_58;
  FString *local_50;
  FString local_48;
  FString local_38;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
  local_a8._4_8_ = LLMTagDeclaration_GuidCache.UniqueName;
  FMemScope::FMemScope(&local_90,(FName *)((longlong)&local_a8.Key + 4),true);
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectLookup).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->ObjectLookup).field_0x48 - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x40 + *(longlong *)&this->ObjectLookup) == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ObjectLookup.Contains( NetGUID )",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xd0b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 + *(longlong *)&this->ObjectLookup);
      } while (iVar5 != -1);
    }
  }
  local_88 = param_1;
  local_80 = param_2;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
            ((TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
              *)&this->ObjectLookup,
             (TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&> *)local_res10,
             (bool *)&local_88);
  bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&param_2->Object,(void *)0x0);
  if (bVar3) {
    if (bIsNetGuidCacheHistoryEnabled == 0) goto LAB_1480c460f;
    local_58 = param_1;
    local_50 = ::FName::ToString(&param_2->PathName,&local_38);
    TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,FString_&&>_>
              ((TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                *)&this->History,&local_a8,(bool *)&local_58);
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    local_98 = (param_2->Object).WeakPtr;
    iVar5 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&this->NetGUIDLookup,local_98.ObjectSerialNumber ^ local_98.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_98);
    if ((iVar5 != -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!NetGUIDLookup.Contains( CacheObject.Object )",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0xd11,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78 = param_2;
    local_70 = param_1;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                *)&this->NetGUIDLookup,
               (TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
                *)(local_res10 + 8),(bool *)&local_78);
    if (GNetTraceRuntimeVerbosity != 0) {
      cVar4 = (**(code **)(this->_padding_ + 8))(this);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      FNetTrace::TraceObjectCreated
                (this->Driver->NetTraceId,(param_1->field0_0x0).ObjectId,
                 *(FName *)(*(longlong *)&pUVar6->field_0x10 + 0x18),0,(uint)(cVar4 == '\0'));
    }
    if (bIsNetGuidCacheHistoryEnabled == 0) goto LAB_1480c460f;
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    local_68 = param_1;
    local_60 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar6,&local_48,(UObject *)0x0);
    TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,FString_&&>_>
              ((TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                *)&this->History,
               (TPairInitializer<FNetworkGUID_const_&,FString_&&> *)(local_res10 + 0x10),
               (bool *)&local_68);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_1480c460f:
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RegisterNetGUID_Server @ 1480c4640

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
FNetGUIDCache::RegisterNetGUID_Server(FNetGUIDCache *this,FNetworkGUID *param_1,UObject *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FNetworkGUID FVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  byte bVar9;
  undefined1 *puVar10;
  UClass *pUVar11;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  FNetGuidCacheObject local_48;
  
  if (((param_2 == (UObject *)0x0) || ((*(uint *)&param_2->field_0x8 >> 0x1e & 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Object)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (**(code **)(this->_padding_ + 8))();
  if ((cVar4 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsNetGUIDAuthority()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd31,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1->field0_0x0).ObjectId == 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NetGUID.IsDefault()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xd32,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ObjectLookup).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ObjectLookup).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->ObjectLookup).field_0x48 - 1) &
                    (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x40 + *(longlong *)&this->ObjectLookup) == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ObjectLookup.Contains( NetGUID )",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xd33,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 + *(longlong *)&this->ObjectLookup);
      } while (iVar5 != -1);
    }
  }
  local_48.ReadOnlyTimestamp = 0.0;
  local_48.bDirtyForReplay = '\x01';
  local_48.bIsBroken = '\0';
  local_48.bIsPending = '\0';
  local_48.bIgnoreWhenMissing = '\0';
  local_48.bNoLoad = '\0';
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  local_48.Object.WeakPtr = local_res8;
  FVar6 = GetOrAssignNetGUID(this,(UObject *)(local_res10 + 1),
                             *(TWeakObjectPtr<UObject,FWeakObjectPtr> **)&param_2->field_0x20);
  local_48.OuterGUID.field0_0x0 = *(FNetworkGUID_u_0 *)FVar6.field0_0x0;
  local_48.PathName.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_48.PathName.Number = *(uint *)&param_2->field_0x1c;
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  pUVar11 = *(UClass **)&param_2->field_0x10;
  iVar5 = (int)pUVar7->_padding_;
  if (((iVar5 <= (int)pUVar11->_padding_) &&
      ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar5 * 8) == &pUVar7->_padding_)
      ) && (param_2 != (UObject *)0x0)) {
    pUVar11 = (UClass *)param_2;
  }
  local_48.NetworkChecksum = GetClassNetworkChecksum(this,pUVar11);
  if (((param_1->field0_0x0).ObjectId == 0) || (((param_1->field0_0x0).ObjectId & 1) == 0)) {
    bVar9 = 1;
  }
  else {
    pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
    bVar9 = (byte)((uint)pUVar8->PackageFlagsPrivate >> 0x11) & 1;
  }
  bVar9 = local_48._40_1_ & 0xfe | bVar9;
  local_48._40_1_ = (bVar9 * '\x02' ^ bVar9) & 2 ^ bVar9;
  RegisterNetGUID_Internal(this,param_1,&local_48);
  return;
}

// RemoveActorNetGUIDs @ 1480c8fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::RemoveActorNetGUIDs(FNetGUIDCache *this,AActor *param_1)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FWeakObjectPtr *pFVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  RemoveNetGUID(this,(UObject *)param_1);
  if (&param_1->ReplicatedSubObjects != (FSubObjectRegistry *)0x0) {
    iVar4 = (param_1->ReplicatedSubObjects).Registry.ArrayNum;
    pFVar13 = (FWeakObjectPtr *)(param_1->ReplicatedSubObjects).Registry.AllocatorInstance.Data;
    pFVar2 = (FWeakObjectPtr *)((longlong)pFVar13 + (longlong)iVar4 * 0x14);
    while( true ) {
      if ((param_1->ReplicatedSubObjects).Registry.ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Net::FSubObjectRegistry::FEntry_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar2) break;
      pUVar9 = FWeakObjectPtr::Get(pFVar13);
      RemoveNetGUID(this,pUVar9);
      pFVar13 = (FWeakObjectPtr *)&pFVar13[2].ObjectSerialNumber;
    }
  }
  pTVar10 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      (&param_1->OwnedComponents);
  iVar4 = *(int *)&(pTVar10->Elements).field_0x28;
  puVar1 = &(pTVar10->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar19 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(pTVar10->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    iVar19 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1480c90cd;
      uVar15 = puVar20[lVar12 + 1];
    }
    uVar7 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar8 = iVar19 + -1 + local_res20;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_1480c90cd:
  uVar15 = *(uint *)&(pTVar10->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar17);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar19;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(pTVar10->Elements).field_0x8 -
                       *(int *)&(pTVar10->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(pTVar10->Elements).field_0x28;
  if (uVar15 != uVar7) {
    puVar18 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1480c91d0;
      uVar15 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_1480c91d0:
  do {
    if (*(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pUVar9 = *(UObject **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    RemoveNetGUID(this,pUVar9);
    pFVar11 = (param_1->ReplicatedComponentsInfo).AllocatorInstance.Data;
    pFVar16 = pFVar11 + (longlong)(param_1->ReplicatedComponentsInfo).ArrayNum * 0x28;
    for (; pFVar11 != pFVar16; pFVar11 = pFVar11 + 0x28) {
      if (*(UObject **)pFVar11 == pUVar9) {
        pFVar16 = pFVar11 + 0x18;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar16 = (FScriptContainerElement *)0x0;
        }
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          iVar4 = *(int *)(pFVar16 + 8);
          pFVar13 = *(FWeakObjectPtr **)pFVar16;
          pFVar2 = (FWeakObjectPtr *)((longlong)pFVar13 + (longlong)iVar4 * 0x14);
          while( true ) {
            if (*(int *)(pFVar16 + 8) != iVar4) {
              `TCheckedPointerIterator<UE::Net::FSubObjectRegistry::FEntry_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (pFVar13 == pFVar2) break;
            pUVar9 = FWeakObjectPtr::Get(pFVar13);
            RemoveNetGUID(this,pUVar9);
            pFVar13 = (FWeakObjectPtr *)&pFVar13[2].ObjectSerialNumber;
          }
        }
        break;
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// RemoveNetGUID @ 1480ca040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::RemoveNetGUID(FNetGUIDCache *this,UObject *param_1)

{
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  uint uVar11;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FWeakObjectPtr local_68;
  UObject *local_60;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *local_58;
  
  this_00 = &this->NetGUIDLookup;
  local_58 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  local_68 = local_res10;
  iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                      *)this_00,local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_68);
  if (iVar7 != -1) {
    lVar3 = *(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18;
    plVar10 = (longlong *)(lVar3 + 8);
    if (lVar3 == 0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      lVar3 = *plVar10;
      puVar1 = &(this->ObjectLookup).field_0x38;
      puVar9 = &(this->ObjectLookup).field_0x40;
      puVar2 = &(this->ObjectLookup).field_0x48;
      uVar11 = (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3;
      if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
        puVar8 = *(undefined1 **)puVar9;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = puVar1;
        }
        iVar7 = *(int *)(puVar8 + (ulonglong)(*(int *)puVar2 - 1U & uVar11) * 4);
        if (iVar7 != -1) {
          do {
            if (*(longlong *)((longlong)iVar7 * 0x40 + *(longlong *)&this->ObjectLookup) == lVar3) {
              if (iVar7 != -1) goto LAB_1480ca1ce;
              break;
            }
            iVar7 = *(int *)((longlong)iVar7 * 0x40 + 0x38 + *(longlong *)&this->ObjectLookup);
          } while (iVar7 != -1);
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8846227299280875429>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x105b,"ObjectLookup.Contains(NetGUID)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
LAB_1480ca1ce:
      if (*(int *)&(this->ObjectLookup).field_0x8 != *(int *)&(this->ObjectLookup).field_0x34) {
        puVar9 = *(undefined1 **)puVar9;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = puVar1;
        }
        iVar7 = *(int *)(puVar9 + ((longlong)*(int *)puVar2 - 1U & (longlong)(int)uVar11) * 4);
        if (iVar7 != -1) {
          do {
            if (*(longlong *)((longlong)iVar7 * 0x40 + *(longlong *)&this->ObjectLookup) == lVar3) {
              TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                               *)&this->ObjectLookup,iVar7);
              break;
            }
            iVar7 = *(int *)((longlong)iVar7 * 0x40 + 0x38 + *(longlong *)&this->ObjectLookup);
          } while (iVar7 != -1);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_60 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_60);
      TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
      ::Remove((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                *)local_58,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_res18);
      return true;
    }
  }
  return false;
}

// ReportSyncLoadedGUIDs @ 1480cb220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::ReportSyncLoadedGUIDs(FNetGUIDCache *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNetworkGUID_u_0 *pFVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FNetworkGUID_u_0 *pFVar10;
  undefined1 local_res8 [8];
  FNetworkGUID_u_0 local_res10;
  FNetworkGUID_u_0 *local_res18;
  FDestructionSentinel local_78;
  undefined4 local_60;
  UNetDriver *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  UObject *local_40;
  
  if (bNetReportSyncLoads) {
    pFVar10 = (FNetworkGUID_u_0 *)(this->SyncLoadedGUIDs).AllocatorInstance.Data;
    iVar1 = (this->SyncLoadedGUIDs).ArrayNum;
    local_res18 = pFVar10 + iVar1;
    while( true ) {
      pFVar4 = local_res18;
      if ((this->SyncLoadedGUIDs).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNetworkGUID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar4) break;
      local_res10 = *pFVar10;
      local_40 = GetObjectFromNetGUID(this,(FNetworkGUID *)&local_res10,false);
      local_58 = this->Driver;
      local_60 = 0;
      local_50 = 0;
      uStack_48 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnSyncLoadDetected,(FWriteAccessScope *)&local_78);
      bVar3 = false;
      FNetDelegates::OnSyncLoadDetected._28_4_ = FNetDelegates::OnSyncLoadDetected._28_4_ + 1;
      uVar8 = FNetDelegates::OnSyncLoadDetected._16_4_ - 1;
      if (-1 < (int)uVar8) {
        lVar9 = (longlong)(int)uVar8 << 4;
        bVar3 = false;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (int)FNetDelegates::OnSyncLoadDetected._16_4_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((*(int *)(lVar9 + 8 + FNetDelegates::OnSyncLoadDetected._8_8_) == 0) ||
              (*(longlong **)(lVar9 + FNetDelegates::OnSyncLoadDetected._8_8_) == (longlong *)0x0))
             || (cVar6 = (**(code **)(**(longlong **)
                                        (lVar9 + FNetDelegates::OnSyncLoadDetected._8_8_) + 0x68))()
                , cVar6 == '\0')) {
            bVar3 = true;
          }
          lVar9 = lVar9 + -0x10;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      FNetDelegates::OnSyncLoadDetected._28_4_ = FNetDelegates::OnSyncLoadDetected._28_4_ + -1;
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FNetDelegates::OnSyncLoadDetected,false);
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      pFVar10 = pFVar10 + 1;
    }
  }
  (this->SyncLoadedGUIDs).ArrayNum = 0;
  if ((this->SyncLoadedGUIDs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SyncLoadedGUIDs).AllocatorInstance,0,&(this->SyncLoadedGUIDs).ArrayMax)
    ;
  }
  return;
}

// ResetAsyncLoadDelinquencyAnalytics @ 1480cc570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::ResetAsyncLoadDelinquencyAnalytics(FNetGUIDCache *this)

{
  FDelinquencyAnalytics::Reset(&(this->DelinquentAsyncLoads).DelinquentAsyncLoads);
  (this->DelinquentAsyncLoads).MaxConcurrentAsyncLoads = 0;
  return;
}

// ResetCacheForDemo @ 1480cc5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::ResetCacheForDemo(FNetGUIDCache *this)

{
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
           *)&this->ObjectLookup);
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
           *)&this->NetGUIDLookup);
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
           *)&this->NetFieldExportGroupMap);
  TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
           *)&this->NetFieldExportGroupIndexToGroup);
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->NetFieldExportGroupPathToIndex);
  return;
}

// ResetReplayDirtyTracking @ 1480cca70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::ResetReplayDirtyTracking(FNetGUIDCache *this)

{
  TMap<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
  *pTVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_e0;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *local_d8;
  undefined2 local_d0;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_60;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  pTVar1 = &this->ObjectLookup;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
              *)pTVar1);
  iVar12 = 1;
  local_d0 = 0;
  stack0xffffffffffffff08 = local_88._16_16_;
  auStack_100._0_8_ = local_88._8_8_;
  local_e8 = local_68;
  pTStack_e0 = pTStack_60;
  uVar9 = local_88._24_8_ >> 0x20;
  local_d8 = (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      uStack_f0 = uStack_f0 & ~auStack_100._4_4_;
      pbVar3 = (byte *)((longlong)(int)uVar9 * 0x40 + 0x30 + *(longlong *)local_88._0_8_);
      *pbVar3 = *pbVar3 | 0x10;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_100);
      uVar9 = (ulonglong)uStack_ec;
    } while ((int)uStack_ec < *(int *)(auStack_100._8_8_ + 0x18));
    if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar8 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_res10 = (undefined4)lVar5;
        iVar8 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_d8->HashSize < iVar8)) || (iVar8 < local_d8->HashSize)) {
        local_d8->HashSize = iVar8;
        TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
        ::Rehash(local_d8);
      }
    }
  }
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_58,
             (TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
              *)&this->NetFieldExportGroupMap);
  local_90 = 0;
  stack0xffffffffffffff48 = local_58._16_16_;
  local_c8 = (longlong *)local_58._0_8_;
  auStack_c0._0_8_ = local_58._8_8_;
  local_a8 = local_38;
  pTStack_a0 = pTStack_30;
  uVar9 = local_58._24_8_ >> 0x20;
  local_98 = (TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
              *)&this->NetFieldExportGroupMap;
  if (local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
    do {
      lVar4 = *(longlong *)(*local_c8 + 0x10 + (longlong)(int)uVar9 * 0x28);
      lVar5 = *local_c8 + (longlong)(int)uVar9 * 0x28;
      if (lVar4 != 0) {
        iVar8 = *(int *)(lVar4 + 0x20);
        lVar10 = *(longlong *)(lVar4 + 0x18);
        lVar2 = lVar10 + (longlong)iVar8 * 0x28;
        while( true ) {
          if (*(int *)(lVar4 + 0x20) != iVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FNetFieldExport,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (lVar10 == lVar2) break;
          *(undefined1 *)(lVar10 + 0x21) = 1;
          lVar10 = lVar10 + 0x28;
        }
        if ((*(longlong *)(lVar5 + 0x10) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)(*(longlong *)(lVar5 + 0x10) + 0x28) = 1;
      }
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar9 = (ulonglong)uStack_ac;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
      if (3 < uVar11) {
        uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_98->HashSize < iVar12)) || (iVar12 < local_98->HashSize)) {
        local_98->HashSize = iVar12;
        TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_98);
      }
    }
  }
  return;
}

// SetAsyncLoadMode @ 1480d2910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetGUIDCache::SetAsyncLoadMode(FNetGUIDCache *this,EAsyncLoadMode param_1)

{
  this->AsyncLoadMode = param_1;
  return;
}

// SetNetworkChecksumMode @ 1480d3870

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
FNetGUIDCache::SetNetworkChecksumMode(FNetGUIDCache *this,ENetworkChecksumMode param_1)

{
  this->NetworkChecksumMode = param_1;
  return;
}

// ShouldAsyncLoad @ 1480d3c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::ShouldAsyncLoad(FNetGUIDCache *this)

{
  EAsyncLoadMode EVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FNetGUIDCache *local_res8 [4];
  
  pTVar2 = CVarAllowAsyncLoading.Ref;
  EVar1 = this->AsyncLoadMode;
  if (EVar1 == UseCVar) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        return 0 < pTVar2->ShadowedValue[1];
      }
    }
    return 0 < pTVar2->ShadowedValue[0];
  }
  if (EVar1 != ForceDisable) {
    if (EVar1 == ForceEnable) {
      return true;
    }
    local_res8[0] = this;
    `FNetGUIDCache::ShouldAsyncLoad'::__l4::<lambda_1>::operator()(local_res8);
  }
  return false;
}

// ShouldIgnoreWhenMissing @ 1480d41d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::ShouldIgnoreWhenMissing(FNetGUIDCache *this,FNetworkGUID *param_1)

{
  char cVar1;
  bool bVar2;
  FNetGuidCacheObject *pFVar3;
  FNetGuidCacheObject *this_00;
  UObject *this_01;
  UPackage *this_02;
  
  if (((param_1->field0_0x0).ObjectId == 0) || (((param_1->field0_0x0).ObjectId & 1) != 0)) {
    cVar1 = (**(code **)(this->_padding_ + 8))();
    if ((cVar1 != '\0') ||
       (pFVar3 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                 ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                         *)&this->ObjectLookup,param_1), this_00 = pFVar3,
       pFVar3 == (FNetGuidCacheObject *)0x0)) {
      return false;
    }
    while ((this_00->OuterGUID).field0_0x0.ObjectId != 0) {
      this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                        *)&this->ObjectLookup,&this_00->OuterGUID);
      if (this_00 == (FNetGuidCacheObject *)0x0) {
        return pFVar3->bIgnoreWhenMissing;
      }
    }
    if (this_00->bIsPending == '\0') {
      bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this_00->Object,(void *)0x0);
      if (!bVar2) {
        this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        this_02 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
        bVar2 = UPackage::IsFullyLoaded(this_02);
        if (!bVar2) {
          return true;
        }
      }
      return pFVar3->bIgnoreWhenMissing;
    }
  }
  return true;
}

// StartAsyncLoadingPackage @ 1480d51a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FNetGUIDCache::StartAsyncLoadingPackage
          (FNetGUIDCache *this,FNetGuidCacheObject *param_1,FNetworkGUID param_2,bool param_3)

{
  FName *this_00;
  uchar *puVar1;
  FNetworkGUID_u_0 *pFVar2;
  uint uVar3;
  UNetDriver *pUVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  *pTVar10;
  FString *pFVar11;
  uint uVar12;
  longlong lVar13;
  FNetworkGUID_u_0 FVar14;
  ulonglong uVar15;
  TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_01;
  FNetworkGUID_u_0 local_res18;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [4];
  FLLMScope local_134;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  FNetworkGUID_u_0 local_118;
  undefined1 local_110 [8];
  FName local_108;
  FNetworkGUID_u_0 local_100;
  UNetDriver *local_f8;
  FMemScope local_f0;
  FName *local_e8;
  FNetworkGUID_u_0 *local_e0;
  FName *local_d8;
  FNetworkGUID_u_0 *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  FString local_90;
  undefined1 local_80 [24];
  FNetworkGUID_u_0 local_68 [2];
  FNetworkGUID_u_0 local_58;
  uint local_50;
  int local_4c;
  double local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res18 = param_2.field0_0x0;
  FLLMScope::FLLMScope(&local_134,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
  local_108 = LLMTagDeclaration_GuidCache.UniqueName;
  FMemScope::FMemScope(&local_f0,&local_108,true);
  local_e0 = &local_res18;
  this_00 = &param_1->PathName;
  local_e8 = this_00;
  TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FNetworkGUID_const_&>_>
            ((TSet<TTuple<FName,FNetworkGUID>,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>,FDefaultSetAllocator>
              *)&this->PendingAsyncPackages,
             (TPairInitializer<FName_const_&,FNetworkGUID_const_&> *)local_110,(bool *)&local_e8);
  local_48 = this->Driver->ElapsedTime;
  local_118 = local_res18;
  local_58.ObjectId = 0;
  local_50 = 0;
  local_4c = 2;
  local_40 = 0;
  if ((local_68 <= &local_118) && (&local_118 < local_68 + 2)) {
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
  if (local_50 == local_4c) {
    local_50 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetworkGUID>_>
                         (0x808,(ForElementType<FNetworkGUID> *)local_68,&local_4c);
  }
  FVar14 = (FNetworkGUID_u_0)local_68;
  if ((FNetworkGUID_u_0 *)local_58.ObjectId != (FNetworkGUID_u_0 *)0x0) {
    FVar14 = local_58;
  }
  lVar13 = (longlong)(int)local_50;
  local_50 = local_50 + 1;
  *(FNetworkGUID_u_0 *)(FVar14.ObjectId + lVar13 * 8) = local_118;
  local_40 = IsTrackingOwnerOrPawn(this);
  param_1->bIsPending = '\x01';
  pTVar7 = TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                   *)&this->PendingAsyncLoadRequests,*this_00);
  uVar3 = local_50;
  this_01 = (TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
            &pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) {
    this_01 = (TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  if (this_01 ==
      (TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    local_d0 = local_68;
    local_d8 = this_00;
    TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,FNetGUIDCache::FPendingAsyncLoadRequest_&&>_>
              ((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                *)&this->PendingAsyncLoadRequests,
               (TPairInitializer<FName_&,FNetGUIDCache::FPendingAsyncLoadRequest_&&> *)
               (local_110 + 4),(bool *)&local_d8);
    uVar12 = *(int *)&(this->PendingAsyncLoadRequests).field_0x8 -
             *(int *)&(this->PendingAsyncLoadRequests).field_0x34;
    uVar3 = (this->DelinquentAsyncLoads).MaxConcurrentAsyncLoads;
    local_130 = (undefined1  [8])0x0;
    if (uVar12 < uVar3) {
      uVar12 = uVar3;
    }
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    (this->DelinquentAsyncLoads).MaxConcurrentAsyncLoads = uVar12;
    pUVar4 = this->Driver;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_b0);
    local_98 = &local_128;
    puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::`2'::<lambda_1>_>
                 ::_vftable_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UNetDriver *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      puVar8[3] = 0;
      local_f8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UNetDriver *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_f8);
      puVar8[4] = pUVar4;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    pTVar10 = TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                        (local_80,(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                                   *)local_130);
    pFVar11 = ::FName::ToString(this_00,&local_90);
    LoadPackageAsync(pFVar11,pTVar10,0,PKG_None,-1);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_c8);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_130);
  }
  else {
    uVar15 = (ulonglong)(int)local_50;
    FVar14 = (FNetworkGUID_u_0)local_68;
    if ((FNetworkGUID_u_0 *)local_58.ObjectId != (FNetworkGUID_u_0 *)0x0) {
      FVar14 = local_58;
    }
    pFVar2 = (FNetworkGUID_u_0 *)(FVar14.ObjectId + uVar15 * 8);
    while( true ) {
      if ((uint)uVar15 != uVar3) {
        `TCheckedPointerIterator<FNetworkGUID_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_138);
      }
      if ((FNetworkGUID_u_0 *)FVar14.ObjectId == pFVar2) break;
                    /* WARNING: Load size is inaccurate */
      local_100.ObjectId = *FVar14.ObjectId;
      TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<FNetworkGUID_const_&>(this_01,(FNetworkGUID *)&local_100);
      uVar15 = (ulonglong)local_50;
      FVar14.ObjectId = FVar14.ObjectId + 8;
    }
    puVar1 = this_01[1].AllocatorInstance.InlineData + 8;
    *puVar1 = *puVar1 | local_40;
  }
  if ((FNetworkGUID_u_0 *)local_58.ObjectId != (FNetworkGUID_u_0 *)0x0) {
    FMemory::Free((void *)local_58);
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(&local_134);
  return;
}

// SupportsObject @ 1480d5900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNetGUIDCache::SupportsObject
          (FNetGUIDCache *this,UObject *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  UWorld *this_00;
  FWeakObjectPtr local_res10 [2];
  UObject *local_res20;
  FString local_18;
  
  if (param_1 != (UObject *)0x0) {
    if (param_2 == (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_res10[0].ObjectIndex = 0;
      local_res10[0].ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    }
    else {
      local_res10[0] = param_2->WeakPtr;
    }
    iVar4 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&this->NetGUIDLookup,
                       local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_res10);
    if ((((iVar4 == -1) ||
         (lVar1 = *(longlong *)&this->NetGUIDLookup + (longlong)iVar4 * 0x18, lVar1 == 0)) ||
        (*(longlong *)(lVar1 + 8) == 0)) &&
       ((cVar2 = (**(code **)(*(longlong *)param_1 + 0x208))(param_1), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*(longlong *)param_1 + 0x210))(param_1), cVar2 == '\0')))) {
      this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      if (((this_00 == (UWorld *)0x0) || (bVar3 = UWorld::IsRecordingClientReplay(this_00), !bVar3))
         && (2 < (byte)LogNetPackageMap._0_1_)) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None)
        ;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
  }
  return true;
}

// TrackQueuedBunchObjectReference @ 1480dcfc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FQueuedBunchObjectReference,1> * __thiscall
FNetGUIDCache::TrackQueuedBunchObjectReference
          (FNetGUIDCache *this,TSharedRef<FQueuedBunchObjectReference,1> *__return_storage_ptr__,
          FNetworkGUID param_1,UObject *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  uint uVar4;
  atomic<int> aVar5;
  TSharedRef<FQueuedBunchObjectReference,1> *pTVar6;
  FNetworkGUID_u_0 *pFVar7;
  FNetworkGUID_u_0 *pFVar8;
  FSharedReferencer<1> FVar9;
  undefined1 *puVar10;
  bool bVar11;
  FNetworkGUID_u_0 local_res18;
  TRawPtrProxy<FQueuedBunchObjectReference> local_68;
  FNetworkGUID_u_0 *local_60;
  FQueuedBunchObjectReference **local_58;
  FQueuedBunchObjectReference *local_48;
  FNetworkGUID_u_0 *pFStack_40;
  TSharedRef<FQueuedBunchObjectReference,1> local_38 [2];
  
  local_res18 = param_1.field0_0x0;
  if (*(int *)&(this->QueuedBunchObjectReferences).field_0x8 !=
      *(int *)&(this->QueuedBunchObjectReferences).field_0x34) {
    puVar10 = *(undefined1 **)&(this->QueuedBunchObjectReferences).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->QueuedBunchObjectReferences).field_0x38;
    }
    uVar4 = *(uint *)(puVar10 +
                     (((ulonglong)param_1.field0_0x0 >> 0x20) * 0x17 + (longlong)param_1.field0_0x0
                     & (ulonglong)(*(int *)&(this->QueuedBunchObjectReferences).field_0x48 - 1)) * 4
                     );
    if (uVar4 != 0xffffffff) {
      do {
        pFVar7 = (FNetworkGUID_u_0 *)
                 ((longlong)(int)uVar4 * 0x20 +
                 *(longlong *)&(this->QueuedBunchObjectReferences).field_0x0);
        if ((FNetworkGUID_u_0)pFVar7->ObjectId == param_1.field0_0x0) {
          pFVar8 = pFVar7 + 1;
          if (pFVar7 == (FNetworkGUID_u_0 *)0x0) {
            pFVar8 = (FNetworkGUID_u_0 *)0x0;
          }
          if (pFVar8 != (FNetworkGUID_u_0 *)0x0) {
            FVar9.ReferenceController = (TReferenceControllerBase<1> *)pFVar8[1].ObjectId;
            pFVar7 = (FNetworkGUID_u_0 *)FVar9.ReferenceController;
            if ((FNetworkGUID_u_0 *)FVar9.ReferenceController == (FNetworkGUID_u_0 *)0x0)
            goto LAB_1480dd081;
            aVar2 = (atomic<int>)
                    ((FNetworkGUID_u_0 *)((longlong)FVar9.ReferenceController + 8))->Value;
            goto joined_r0x0001480dd067;
          }
          break;
        }
        uVar4 = pFVar7[3].Value;
      } while (uVar4 != 0xffffffff);
    }
  }
  goto LAB_1480dd089;
  while( true ) {
    LOCK();
    aVar5 = (atomic<int>)((FNetworkGUID_u_0 *)((longlong)FVar9.ReferenceController + 8))->Value;
    bVar11 = aVar2 == aVar5;
    if (bVar11) {
      ((FNetworkGUID_u_0 *)((longlong)FVar9.ReferenceController + 8))->Value = (int)aVar2 + 1;
      aVar5 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar5;
    if (bVar11) break;
joined_r0x0001480dd067:
    pFVar7 = (FNetworkGUID_u_0 *)0x0;
    if (aVar2 == (atomic<int>)0x0) goto LAB_1480dd081;
  }
  pFVar7 = (FNetworkGUID_u_0 *)FVar9.ReferenceController;
  if ((FQueuedBunchObjectReference *)pFVar8->ObjectId != (FQueuedBunchObjectReference *)0x0) {
    __return_storage_ptr__->Object = (FQueuedBunchObjectReference *)pFVar8->ObjectId;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar9.ReferenceController;
    LOCK();
    ((FNetworkGUID_u_0 *)((longlong)FVar9.ReferenceController + 8))->Value =
         ((FNetworkGUID_u_0 *)((longlong)FVar9.ReferenceController + 8))->Value + 1;
    UNLOCK();
    if ((__return_storage_ptr__->Object == (FQueuedBunchObjectReference *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FQueuedBunchObjectReference,1> *)(*pcVar3)();
      return pTVar6;
    }
    goto LAB_1480dd1b5;
  }
LAB_1480dd081:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
LAB_1480dd089:
  local_68.Object = ::operator_new(0x10);
  if ((FNetworkGUID_u_0 *)local_68.Object == (FNetworkGUID_u_0 *)0x0) {
    local_68.Object = (FQueuedBunchObjectReference *)0x0;
  }
  else {
    *(FNetworkGUID_u_0 *)local_68.Object = local_res18;
    *(UObject **)((longlong)local_68.Object + 8) = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
  }
  TSharedRef<FQueuedBunchObjectReference,1>::
  TSharedRef<FQueuedBunchObjectReference,1><FQueuedBunchObjectReference>(local_38,&local_68);
  local_48 = local_38[0].Object;
  pFStack_40 = (FNetworkGUID_u_0 *)local_38[0].SharedReferenceCount.ReferenceController;
  if ((FNetworkGUID_u_0 *)local_38[0].SharedReferenceCount.ReferenceController !=
      (FNetworkGUID_u_0 *)0x0) {
    LOCK();
    (local_38[0].SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38[0].SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = &local_res18;
  local_58 = &local_48;
  TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNetworkGUID_const_&,TWeakPtr<FQueuedBunchObjectReference,1>_&&>_>
            ((TSet<TTuple<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakPtr<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
              *)&this->QueuedBunchObjectReferences,
             (TPairInitializer<FNetworkGUID_const_&,TWeakPtr<FQueuedBunchObjectReference,1>_&&> *)
             &stack0x00000008,(bool *)&local_60);
  if (pFStack_40 != (FNetworkGUID_u_0 *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)((longlong)pFStack_40 + 0xc);
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pFStack_40->ObjectId + 8))(pFStack_40,1);
    }
  }
  __return_storage_ptr__->Object = local_38[0].Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38[0].SharedReferenceCount.ReferenceController;
  FVar9.ReferenceController = local_38[0].SharedReferenceCount.ReferenceController;
  if ((FNetworkGUID_u_0 *)local_38[0].SharedReferenceCount.ReferenceController !=
      (FNetworkGUID_u_0 *)0x0) {
    LOCK();
    (local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_1480dd1b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return __return_storage_ptr__;
}

// UpdateQueuedBunchObjectReference @ 1480e1730

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
FNetGUIDCache::UpdateQueuedBunchObjectReference
          (FNetGUIDCache *this,FNetworkGUID param_1,UObject *param_2)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  FNetworkGUID_u_0 *pFVar4;
  FNetworkGUID_u_0 *pFVar5;
  FNetworkGUID_u_0 *pFVar6;
  undefined1 *puVar7;
  bool bVar8;
  
  if (*(int *)&(this->QueuedBunchObjectReferences).field_0x8 !=
      *(int *)&(this->QueuedBunchObjectReferences).field_0x34) {
    puVar7 = *(undefined1 **)&(this->QueuedBunchObjectReferences).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->QueuedBunchObjectReferences).field_0x38;
    }
    uVar2 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->QueuedBunchObjectReferences).field_0x48 - 1U &
                               param_1.field0_0x0._4_4_ * 0x17 + param_1.field0_0x0.Value) * 4);
    if (uVar2 != 0xffffffff) {
      while (pFVar4 = (FNetworkGUID_u_0 *)
                      ((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->QueuedBunchObjectReferences
                      ), (FNetworkGUID_u_0)pFVar4->ObjectId != param_1.field0_0x0) {
        uVar2 = pFVar4[3].Value;
        if (uVar2 == 0xffffffff) {
          return;
        }
      }
      pFVar5 = pFVar4 + 1;
      if (pFVar4 == (FNetworkGUID_u_0 *)0x0) {
        pFVar5 = (FNetworkGUID_u_0 *)0x0;
      }
      if (pFVar5 != (FNetworkGUID_u_0 *)0x0) {
        pFVar4 = (FNetworkGUID_u_0 *)pFVar5[1].ObjectId;
        pFVar6 = pFVar4;
        if (pFVar4 != (FNetworkGUID_u_0 *)0x0) {
          uVar2 = pFVar4[1].Value;
          do {
            pFVar6 = (FNetworkGUID_u_0 *)0x0;
            if (uVar2 == 0) goto LAB_1480e17f1;
            LOCK();
            uVar3 = pFVar4[1].Value;
            bVar8 = uVar2 == uVar3;
            if (bVar8) {
              pFVar4[1].Value = uVar2 + 1;
              uVar3 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar3;
          } while (!bVar8);
          uVar1 = pFVar5->ObjectId;
          pFVar6 = pFVar4;
          if (uVar1 != 0) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(param_2);
            }
            *(UObject **)(uVar1 + 8) = param_2;
          }
        }
LAB_1480e17f1:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar6);
      }
    }
  }
  return;
}

// ValidateAsyncLoadingPackage @ 1480e31c0

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
FNetGUIDCache::ValidateAsyncLoadingPackage
          (FNetGUIDCache *this,FNetGuidCacheObject *param_1,FNetworkGUID param_2)

{
  FName *this_00;
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *pTVar4;
  FNetworkGUID_u_0 *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  FNetworkGUID_u_0 local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = &param_1->PathName;
  pTVar4 = TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest>,TDefaultMapHashableKeyFuncs<FName,FNetGUIDCache::FPendingAsyncLoadRequest,0>,FDefaultSetAllocator>
                   *)&this->PendingAsyncLoadRequests,*this_00);
  if ((pTVar4 == (TTuple<FName,FNetGUIDCache::FPendingAsyncLoadRequest> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8 = param_2.field0_0x0;
  TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FNetworkGUID_const_&>
            ((TArray<FNetworkGUID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             &pTVar4->field_0x8,(FNetworkGUID *)&local_res8);
  param_1->bIsPending = '\x01';
  uVar8 = *(int *)&pTVar4->field_0x20 - 1;
  uVar6 = 0;
  if ((int)uVar8 < *(int *)&pTVar4->field_0x20) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar7 = *(undefined1 **)&pTVar4->field_0x18;
  if (*(undefined1 **)&pTVar4->field_0x18 == (undefined1 *)0x0) {
    puVar7 = &pTVar4->field_0x8;
  }
  if ((FNetworkGUID_u_0)
      ((FNetworkGUID_u_0 *)(puVar7 + (longlong)*(int *)&pTVar4->field_0x20 * 8 + -8))->ObjectId ==
      param_2.field0_0x0) {
    if (4 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&local_58,L"%llu");
      ::FName::ToString(this_00,&local_38);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (4 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&local_68,L"%llu");
      uVar8 = *(int *)&pTVar4->field_0x20 - 1;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&pTVar4->field_0x20) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::PrintfImpl(&local_78,L"%llu");
      ::FName::ToString(this_00,&local_48);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = &TMapBase<FName,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>_>
              ::FindChecked((TMapBase<FName,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetworkGUID,0>_>
                             *)&this->PendingAsyncPackages,*this_00)->field0_0x0;
    *pFVar5 = param_2.field0_0x0;
  }
  bVar1 = pTVar4->field_0x30;
  bVar3 = IsTrackingOwnerOrPawn(this);
  pTVar4->field_0x30 = bVar3 | bVar1;
  return;
}

// operator() @ 150523990

bool __thiscall `FNetGUIDCache::ShouldAsyncLoad'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280875309>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280875309>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

