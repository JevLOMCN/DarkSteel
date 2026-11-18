// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 79

// StaticClass @ 148076470

UClass * __cdecl UPackageMapClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PackageMapClient",
               &Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton,
               StaticRegisterNativesUPackageMapClient,0x4b8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPackageMapClient>,
               InternalVTableHelperCtorCaller<UPackageMapClient>,local_res8,UPackageMap::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton;
}

// UPackageMapClient @ 14808c370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPackageMapClient * __thiscall
UPackageMapClient::UPackageMapClient(UPackageMapClient *this,FVTableHelper *param_1)

{
  UPackageMap::UPackageMap((UPackageMap *)this,param_1);
  this->_padding_ = (longlong)&___7UPackageMapClient__6B_;
  *(undefined8 *)&this->NetGUIDExportCountMap = 0;
  *(undefined8 *)&(this->NetGUIDExportCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->NetGUIDExportCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->NetGUIDExportCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x48 = 0;
  (this->ExportGUIDArchives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportGUIDArchives).ArrayNum = 0;
  (this->ExportGUIDArchives).ArrayMax = 0;
  *(undefined8 *)&(this->CurrentExportNetGUIDs).Elements = 0;
  *(undefined8 *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentExportNetGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x34 = 0;
  (this->CurrentExportNetGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentExportNetGUIDs).HashSize = 0;
  *(undefined8 *)&this->CurrentQueuedBunchNetGUIDs = 0;
  *(undefined8 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x34 = 0;
  *(undefined8 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x48 = 0;
  (this->PendingAckGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAckGUIDs).ArrayNum = 0;
  (this->PendingAckGUIDs).ArrayMax = 0;
  FPackageMapAckState::FPackageMapAckState(&this->AckState);
  (this->ExportBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportBunches).ArrayNum = 0;
  (this->ExportBunches).ArrayMax = 0;
  (this->GuidCache).Object = (FNetGUIDCache *)0x0;
  (this->GuidCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MustBeMappedGuidsInLastBunch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MustBeMappedGuidsInLastBunch).ArrayNum = 0;
  (this->MustBeMappedGuidsInLastBunch).ArrayMax = 0;
  *(undefined8 *)&(this->NetFieldExports).Elements = 0;
  *(undefined8 *)&(this->NetFieldExports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x34 = 0;
  (this->NetFieldExports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NetFieldExports).HashSize = 0;
  FDelinquencyAnalytics::FDelinquencyAnalytics
            (&(this->DelinquentQueuedActors).DelinquentQueuedActors,0);
  (this->DelinquentQueuedActors).MaxConcurrentQueuedActors = 0;
  (this->TrackedSyncLoadedGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedSyncLoadedGUIDs).ArrayNum = 0;
  (this->TrackedSyncLoadedGUIDs).ArrayMax = 0;
  (this->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)0x0;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  *(undefined8 *)&(this->AcknowledgedExportedNetTokens).Elements = 0;
  *(undefined8 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x34 = 0;
  (this->AcknowledgedExportedNetTokens).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AcknowledgedExportedNetTokens).HashSize = 0;
  *(undefined8 *)&this->NetTokenPendingAckMap = 0;
  *(undefined8 *)&(this->NetTokenPendingAckMap).field_0x8 = 0;
  *(undefined8 *)&(this->NetTokenPendingAckMap).field_0x20 = 0;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x28 = 0;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x34 = 0;
  *(undefined8 *)&(this->NetTokenPendingAckMap).field_0x40 = 0;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x48 = 0;
  return this;
}

// UPackageMapClient @ 14808c5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPackageMapClient * __thiscall
UPackageMapClient::UPackageMapClient(UPackageMapClient *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UPackageMap::UPackageMap((UPackageMap *)this,param_1);
  this->_padding_ = (longlong)&___7UPackageMapClient__6B_;
  *(undefined8 *)&this->NetGUIDExportCountMap = 0;
  *(undefined8 *)&(this->NetGUIDExportCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->NetGUIDExportCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->NetGUIDExportCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x48 = 0;
  this->Connection = (UNetConnection *)0x0;
  (this->ExportGUIDArchives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportGUIDArchives).ArrayNum = 0;
  (this->ExportGUIDArchives).ArrayMax = 0;
  *(undefined8 *)&(this->CurrentExportNetGUIDs).Elements = 0;
  *(undefined8 *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentExportNetGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x34 = 0;
  (this->CurrentExportNetGUIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentExportNetGUIDs).HashSize = 0;
  *(undefined8 *)&this->CurrentQueuedBunchNetGUIDs = 0;
  *(undefined8 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x34 = 0;
  *(undefined8 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x48 = 0;
  (this->PendingAckGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAckGUIDs).ArrayNum = 0;
  (this->PendingAckGUIDs).ArrayMax = 0;
  FPackageMapAckState::FPackageMapAckState(&this->AckState);
  (this->ExportBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportBunches).ArrayNum = 0;
  (this->ExportBunches).ArrayMax = 0;
  (this->GuidCache).Object = (FNetGUIDCache *)0x0;
  (this->GuidCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MustBeMappedGuidsInLastBunch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MustBeMappedGuidsInLastBunch).ArrayNum = 0;
  (this->MustBeMappedGuidsInLastBunch).ArrayMax = 0;
  *(undefined8 *)&(this->NetFieldExports).Elements = 0;
  *(undefined8 *)&(this->NetFieldExports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NetFieldExports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x34 = 0;
  (this->NetFieldExports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NetFieldExports).HashSize = 0;
  uVar1 = 0;
  if (0 < GDelinquencyNumberOfTopOffendersToTrack) {
    uVar1 = GDelinquencyNumberOfTopOffendersToTrack;
  }
  FDelinquencyAnalytics::FDelinquencyAnalytics
            (&(this->DelinquentQueuedActors).DelinquentQueuedActors,uVar1);
  (this->DelinquentQueuedActors).MaxConcurrentQueuedActors = 0;
  (this->TrackedSyncLoadedGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedSyncLoadedGUIDs).ArrayNum = 0;
  (this->TrackedSyncLoadedGUIDs).ArrayMax = 0;
  (this->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)0x0;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  *(undefined8 *)&(this->AcknowledgedExportedNetTokens).Elements = 0;
  *(undefined8 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x34 = 0;
  (this->AcknowledgedExportedNetTokens).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AcknowledgedExportedNetTokens).HashSize = 0;
  *(undefined8 *)&this->NetTokenPendingAckMap = 0;
  *(undefined8 *)&(this->NetTokenPendingAckMap).field_0x8 = 0;
  *(undefined8 *)&(this->NetTokenPendingAckMap).field_0x20 = 0;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x28 = 0;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x34 = 0;
  *(undefined8 *)&(this->NetTokenPendingAckMap).field_0x40 = 0;
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x48 = 0;
  return this;
}

// ~UPackageMapClient @ 14808f660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::~UPackageMapClient(UPackageMapClient *this)

{
  FOutBunch *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7UPackageMapClient__6B_;
  pFVar1 = this->CurrentExportBunch;
  if (pFVar1 != (FOutBunch *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->CurrentExportBunch = (FOutBunch *)0x0;
  }
  *(undefined4 *)&(this->NetTokenPendingAckMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NetTokenPendingAckMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Net::FNetToken>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Net::FNetToken>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Net::FNetToken>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetTokenPendingAckMap);
  (this->AcknowledgedExportedNetTokens).HashSize = 0;
  FVar3 = (this->AcknowledgedExportedNetTokens).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetToken>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetToken>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AcknowledgedExportedNetTokens).Elements);
  pFVar4 = (this->TrackedSyncLoadedGUIDs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->DelinquentQueuedActors).DelinquentQueuedActors.AllDelinquents.HashSize = 0;
  FVar3 = (this->DelinquentQueuedActors).DelinquentQueuedActors.AllDelinquents.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DelinquentQueuedActors).DelinquentQueuedActors.AllDelinquents.Elements);
  pFVar4 = (this->DelinquentQueuedActors).DelinquentQueuedActors.TopOffenders.AllocatorInstance.Data
  ;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->NetFieldExports).HashSize = 0;
  FVar3 = (this->NetFieldExports).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NetFieldExports).Elements);
  pFVar4 = (this->MustBeMappedGuidsInLastBunch).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GuidCache).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->ExportBunches).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FPackageMapAckState::~FPackageMapAckState(&this->AckState);
  pFVar4 = (this->PendingAckGUIDs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->CurrentQueuedBunchNetGUIDs).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CurrentQueuedBunchNetGUIDs).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentQueuedBunchNetGUIDs);
  (this->CurrentExportNetGUIDs).HashSize = 0;
  FVar3 = (this->CurrentExportNetGUIDs).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CurrentExportNetGUIDs).Elements);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ExportGUIDArchives).AllocatorInstance.Data,(this->ExportGUIDArchives).ArrayNum);
  pFVar4 = (this->ExportGUIDArchives).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->NetGUIDExportCountMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NetGUIDExportCountMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetGUIDExportCountMap);
  UPackageMap::~UPackageMap((UPackageMap *)this);
  return;
}

// operator() @ 148091720

void __thiscall
`UPackageMapClient::SerializeNewActor'::__l212::<lambda_3>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3,bool *param_4)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  bool *pbVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int local_res8 [2];
  char local_res20 [8];
  int local_58;
  int local_54;
  TVector<double>_u_0 local_50;
  
  pbVar5 = param_4;
  local_res20[0] = param_3;
  (**(code **)(**(longlong **)((longlong)this + 8) + 400))
            (*(longlong **)((longlong)this + 8),param_4,1);
  if (*pbVar5 == false) {
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar4;
    local_50._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    goto LAB_148091964;
  }
  if ((*(byte *)(*(longlong **)((longlong)this + 8) + 5) & 1) == 0) {
LAB_148091780:
    (**(code **)(**(longlong **)((longlong)this + 8) + 400))
              (*(longlong **)((longlong)this + 8),local_res20,1);
    if (local_res20[0] == '\0') {
      UE::Math::operator<<(*(FArchive **)((longlong)this + 8),param_1);
      return;
    }
  }
  else {
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
    if (0xc < uVar7) goto LAB_148091780;
    local_res20[0] = '\x01';
  }
  pFVar1 = *(FArchive **)((longlong)this + 8);
  local_50._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_50._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  puVar2 = *(undefined1 **)((longlong)this + 0x10);
  local_50._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEngineNetworkCustomVersion::Guid);
  uVar7 = (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1);
  pbVar5 = param_4;
  if (0x16 < uVar7) {
    iVar8 = (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1);
    pbVar5 = param_4;
    if (iVar8 != 0x1a) {
      if ((pFVar1->field_0x28 & 1) == 0) {
        bVar6 = UE::Net::WriteQuantizedVector(10,(TVector<double> *)&local_50._s_0,pFVar1);
        *puVar2 = bVar6;
        (param_1->field0_0x0)._s_0.X = local_50._s_0.X;
        (param_1->field0_0x0)._s_0.Y = local_50._s_0.Y;
      }
      else {
        bVar6 = UE::Net::ReadQuantizedVector(10,(TVector<double> *)&local_50._s_0,pFVar1);
        *puVar2 = bVar6;
        (param_1->field0_0x0)._s_0.X = local_50._s_0.X;
        (param_1->field0_0x0)._s_0.Y = local_50._s_0.Y;
      }
      goto LAB_148091964;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pbVar5 >> 0x20);
  if ((pFVar1->field_0x28 & 1) == 0) {
    param_4 = pbVar5;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                       ,0x113,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_4._0_4_ = 0;
  (**(code **)(*(longlong *)pFVar1 + 0x198))(pFVar1,&param_4,0x18);
  local_res8[0] = 0;
  local_58 = 0;
  local_54 = 0;
  iVar8 = 1 << ((char)param_4._0_4_ + 1U & 0x1f);
  iVar9 = 1 << ((char)param_4._0_4_ + 2U & 0x1f);
  (**(code **)(*(longlong *)pFVar1 + 0x198))(pFVar1,local_res8,iVar9);
  (**(code **)(*(longlong *)pFVar1 + 0x198))(pFVar1,&local_58,iVar9);
  (**(code **)(*(longlong *)pFVar1 + 0x198))(pFVar1,&local_54,iVar9);
  fVar10 = (float)(local_res8[0] - iVar8) * __real_3dcccccd;
  fVar11 = (float)(local_58 - iVar8) * __real_3dcccccd;
  local_50._s_0.Z = (double)((float)(local_54 - iVar8) * __real_3dcccccd);
  *puVar2 = 1;
  (param_1->field0_0x0)._s_0.X = (double)fVar10;
  (param_1->field0_0x0)._s_0.Y = (double)fVar11;
LAB_148091964:
  (param_1->field0_0x0)._s_0.Z = local_50._s_0.Z;
  return;
}

// AddNetFieldExportGroup @ 1480933f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::AddNetFieldExportGroup
          (UPackageMapClient *this,FString *param_1,TSharedPtr<FNetFieldExportGroup,1> *param_2)

{
  FNetGUIDCache *pFVar1;
  FNetFieldExportGroup *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  TPairInitializer<FString_const_&,unsigned_int_const_&> local_res8;
  TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_&&> local_res18;
  FNetFieldExportGroup *local_68;
  FNetFieldExportGroup *local_60;
  uint *local_58;
  uint *local_50;
  FNetFieldExportGroup **local_48;
  FNetFieldExportGroup *local_40;
  TSharedPtr<FNetFieldExportGroup,1> *local_38;
  
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->GuidCache).Object;
  if ((param_2->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->Object;
  iVar6 = (pFVar2->PathName).Data.ArrayNum;
  if (iVar6 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar2->PathName).Data.AllocatorInstance.Data;
  }
  iVar8 = 0;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = iVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
  iVar6 = TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                      *)&pFVar1->NetFieldExportGroupMap,uVar5,&pFVar2->PathName);
  if ((iVar6 != -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GuidCache->NetFieldExportGroupMap.Contains(NewNetFieldExportGroup->PathName)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x63d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->GuidCache).Object;
  uVar5 = pFVar1->UniqueNetFieldExportGroupPathIndex + 1;
  pFVar1->UniqueNetFieldExportGroupPathIndex = uVar5;
  if ((param_2->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->Object->PathNameIndex = uVar5;
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->GuidCache).Object;
  if ((param_2->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->Object;
  iVar6 = (pFVar2->PathName).Data.ArrayNum;
  if (iVar6 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar2->PathName).Data.AllocatorInstance.Data;
    iVar8 = iVar6 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  iVar6 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pFVar1->NetFieldExportGroupPathToIndex,uVar5,&pFVar2->PathName);
  if ((iVar6 != -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GuidCache->NetFieldExportGroupPathToIndex.Contains(NewNetFieldExportGroup->PathName)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x641,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->GuidCache).Object;
  if ((param_2->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = param_2->Object->PathNameIndex;
  if (*(int *)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x8 !=
      *(int *)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar1->NetFieldExportGroupIndexToGroup).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x48 - 1U & uVar5) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)&pFVar1->NetFieldExportGroupIndexToGroup + (longlong)iVar6 * 0x18
                     ) == uVar5) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GuidCache->NetFieldExportGroupIndexToGroup.Contains(NewNetFieldExportGroup->PathNameIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x642,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&pFVar1->NetFieldExportGroupIndexToGroup + 0x10 +
                        (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->GuidCache).Object;
  if ((param_2->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->Object;
  if ((pFVar2 == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_60 = param_2->Object;
  local_58 = &pFVar2->PathNameIndex;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&pFVar1->NetFieldExportGroupPathToIndex,&local_res8,(bool *)&local_60);
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68 = param_2->Object;
  pFVar1 = (this->GuidCache).Object;
  if ((local_68 == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_50 = &param_2->Object->PathNameIndex;
  local_48 = &local_68;
  TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_&&>_>
            ((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
              *)&pFVar1->NetFieldExportGroupIndexToGroup,&local_res18,(bool *)&local_50);
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->GuidCache).Object;
  if ((param_2->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_40 = param_2->Object;
  local_38 = param_2;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
              *)&pFVar1->NetFieldExportGroupMap,
             (TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&> *)
             &local_res18.Value,(bool *)&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddReferencedObjects @ 148093d90

void __cdecl UPackageMapClient::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  return;
}

// AddUnmappedNetGUIDReference @ 148094aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::AddUnmappedNetGUIDReference(UPackageMapClient *this,FNetworkGUID param_1)

{
  TSharedPtr<FNetGUIDCache,1> *this_00;
  uint uVar1;
  FNetworkGUID_u_0 *pFVar2;
  FNetGUIDCache *pFVar3;
  FRefCountedNetGUIDArray *this_01;
  FNetworkGUID_u_0 *pFVar4;
  undefined1 *puVar5;
  FNetworkGUID_u_0 *pFVar6;
  FNetworkGUID_u_0 local_res10;
  FString local_28;
  FString local_18;
  
  if (UE::Net::Private::bRemapStableSubobjects) {
    this_00 = &this->GuidCache;
    pFVar3 = this_00->Object;
    if ((pFVar3 != (FNetGUIDCache *)0x0) && (1 < (ulonglong)param_1.field0_0x0)) {
      pFVar6 = (FNetworkGUID_u_0 *)0x0;
      pFVar4 = pFVar6;
      if (*(int *)&(pFVar3->ObjectLookup).field_0x8 != *(int *)&(pFVar3->ObjectLookup).field_0x34) {
        puVar5 = *(undefined1 **)&(pFVar3->ObjectLookup).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(pFVar3->ObjectLookup).field_0x38;
        }
        uVar1 = *(uint *)(puVar5 + (((ulonglong)param_1.field0_0x0 >> 0x20) * 0x17 +
                                    (longlong)param_1.field0_0x0 &
                                   (ulonglong)(*(int *)&(pFVar3->ObjectLookup).field_0x48 - 1)) * 4)
        ;
        if (uVar1 != 0xffffffff) {
          do {
            pFVar4 = (FNetworkGUID_u_0 *)
                     ((longlong)(int)uVar1 * 0x40 + *(longlong *)&pFVar3->ObjectLookup);
            if ((FNetworkGUID_u_0)pFVar4->ObjectId == param_1.field0_0x0) break;
            uVar1 = pFVar4[7].Value;
            pFVar4 = pFVar6;
          } while (uVar1 != 0xffffffff);
        }
      }
      pFVar2 = pFVar4 + 1;
      if (pFVar4 == (FNetworkGUID_u_0 *)0x0) {
        pFVar2 = pFVar6;
      }
      if (((pFVar2 != (FNetworkGUID_u_0 *)0x0) && (pFVar4 = pFVar2 + 1, pFVar2[1].ObjectId != 0)) &&
         (pFVar2[2].ObjectId != 0)) {
        local_res10 = param_1.field0_0x0;
        pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
        this_01 = TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
                  ::FindOrAddImpl<FNetworkGUID_const_&>
                            ((TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
                              *)&pFVar3->UnmappedStablyNamedGuids_OuterToInner,
                             SUB84(pFVar4->ObjectId,4) * 0x17 + (uint)pFVar4->ObjectId,
                             (FNetworkGUID *)pFVar4);
        UE::Net::Private::FRefCountedNetGUIDArray::Add(this_01,param_1);
        if (6 < (byte)LogNetPackageMap._0_1_) {
          pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
          FNetGUIDCache::Describe(pFVar3,&local_18,(FNetworkGUID *)pFVar4);
          pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
          FNetGUIDCache::Describe(pFVar3,&local_28,(FNetworkGUID *)&local_res10);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// AppendExportBunches @ 148094dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
UPackageMapClient::AppendExportBunches
          (UPackageMapClient *this,TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  if ((this->Connection->bInternalAck != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Connection->IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x836,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)&(this->NetFieldExports).Elements.field_0x8 !=
       *(int *)&(this->NetFieldExports).Elements.field_0x34) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetFieldExports.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x837,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (0 < this->ExportNetGUIDCount) {
    ExportNetGUIDHeader(this);
  }
  pTVar1 = &this->ExportBunches;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->ExportBunches).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ExportBunches).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOutBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar2) break;
    lVar4 = *(longlong *)pFVar10;
    if ((lVar4 != 0) &&
       ((GNetworkProfiler.bIsTrackingEnabled != false ||
        (GNetworkProfiler.bShouldTrackingBeEnabled != false)))) {
      if (__CsvProfilerStat2116 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat2116 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      FNetworkProfiler::TrackExportBunch
                (&GNetworkProfiler,*(ushort *)(lVar4 + 0xa0),this->Connection);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
    pFVar10 = pFVar10 + 8;
  }
  if (0 < (this->ExportBunches).ArrayNum) {
    if (5 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < (this->ExportBunches).ArrayNum));
          uVar9 = uVar9 + 1) {
        if (5 < (byte)LogNetPackageMap._0_1_) {
          if (((int)uVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar9 < (this->ExportBunches).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar9 < (this->ExportBunches).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        }
      }
    }
    if ((param_1 == pTVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->ExportBunches).ArrayNum;
    if (iVar3 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar3,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax
                        );
      memcpy((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8,
             (pTVar1->AllocatorInstance).Data,(longlong)iVar3 << 3);
    }
    (this->ExportBunches).ArrayNum = 0;
    if ((this->ExportBunches).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->ExportBunches).ArrayMax);
    }
  }
  return;
}

// AppendExportData @ 148095180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::AppendExportData(UPackageMapClient *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  if ((this->Connection->bInternalAck == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x6af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->NetFieldExports;
  AppendNetFieldExportsInternal(this,param_1,this_00,None);
  bVar5 = 1 < (this->NetFieldExports).HashSize;
  if (!bVar5) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  puVar1 = &(this->NetFieldExports).Elements.field_0xc;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->NetFieldExports).Elements.field_0x2c;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NetFieldExports).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NetFieldExports).Elements.field_0x10,
               0);
  }
  if (bVar5) {
    (this->NetFieldExports).HashSize = 1;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash(this_00)
    ;
  }
  if ((this->Connection->bInternalAck == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x7f5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res10[0] = (this->ExportGUIDArchives).ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
  pTVar8 = &this->ExportGUIDArchives;
  iVar3 = (this->ExportGUIDArchives).ArrayNum;
  pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar8->AllocatorInstance).Data;
  pTVar7 = pTVar6 + iVar3;
  while( true ) {
    if ((this->ExportGUIDArchives).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar6 == pTVar7) break;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,pTVar6);
    pTVar6 = pTVar6 + 1;
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar8->AllocatorInstance).Data,
             (this->ExportGUIDArchives).ArrayNum);
  piVar2 = &(this->ExportGUIDArchives).ArrayMax;
  (this->ExportGUIDArchives).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar8->AllocatorInstance,0,piVar2);
  }
  return;
}

// AppendNetExportGUIDs @ 148095350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::AppendNetExportGUIDs(UPackageMapClient *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  if (this->Connection->bInternalAck == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection->IsInternalAck()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0x7f5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res10[0] = (this->ExportGUIDArchives).ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
  pTVar7 = &this->ExportGUIDArchives;
  iVar2 = (this->ExportGUIDArchives).ArrayNum;
  pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar7->AllocatorInstance).Data;
  pTVar6 = pTVar5 + iVar2;
  while( true ) {
    if ((this->ExportGUIDArchives).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar6) break;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,pTVar5);
    pTVar5 = pTVar5 + 1;
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar7->AllocatorInstance).Data,
             (this->ExportGUIDArchives).ArrayNum);
  piVar1 = &(this->ExportGUIDArchives).ArrayMax;
  (this->ExportGUIDArchives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar7->AllocatorInstance,0,piVar1);
  }
  return;
}

// AppendNetFieldExports @ 148095450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::AppendNetFieldExports(UPackageMapClient *this,FArchive *param_1)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->NetFieldExports;
  AppendNetFieldExportsInternal(this,param_1,this_00,None);
  bVar3 = 1 < (this->NetFieldExports).HashSize;
  if (!bVar3) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  puVar1 = &(this->NetFieldExports).Elements.field_0xc;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->NetFieldExports).Elements.field_0x2c;
  *(undefined4 *)&(this->NetFieldExports).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NetFieldExports).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NetFieldExports).Elements.field_0x10,
               0);
  }
  if (bVar3) {
    (this->NetFieldExports).HashSize = 1;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash(this_00)
    ;
  }
  return;
}

// AppendNetFieldExportsInternal @ 148095510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::AppendNetFieldExportsInternal
          (UPackageMapClient *this,FArchive *param_1,
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *param_2,
          EAppendNetExportFlags param_3)

{
  ForElementType<unsigned_int> FVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  FNetGUIDCache *pFVar6;
  FString *pFVar7;
  FPackageMapAckState *pFVar8;
  ForElementType<FSetElementId> FVar9;
  code *pcVar10;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  ForElementType<unsigned_int> FVar15;
  undefined1 *puVar16;
  ForElementType<FSetElementId> FVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  undefined1 auStackY_278 [32];
  uint local_228;
  undefined1 local_224 [4];
  uint local_220;
  uint local_21c;
  int local_218 [2];
  FArchive *local_210;
  EAppendNetExportFlags local_208;
  undefined4 local_204;
  int local_200;
  int local_1fc;
  uint local_1f8;
  undefined1 local_1f4 [12];
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_1e0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  undefined1 *local_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  undefined4 local_15c;
  ForElementType<unsigned_int> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = param_1;
  local_208 = param_3;
  local_1e0 = param_2;
  if ((this->Connection->bInternalAck == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection->IsInternalAck()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x6ed,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_21c = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,&local_21c);
  if (local_21c == 0) {
    return;
  }
  local_158.SecondaryData = (ForElementType<unsigned_int>)0x0;
  iVar21 = 0;
  local_50 = 0;
  local_4c = 0x40;
  if ((int)local_21c < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_21c);
  }
  if (0x40 < (int)local_21c) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,local_21c,&local_158,0,&local_4c);
  }
  iVar3 = *(int *)&(param_2->Elements).field_0x28;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  uStack_1cc = 1;
  local_1b8 = 0;
  iStack_1bc = local_1b8;
  if (iVar3 != 0) {
    puVar23 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)pTVar24;
    }
    uVar20 = *puVar23;
    local_1b8 = 0;
    iVar21 = 0;
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar21;
      local_1b8 = local_1b8 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_1bc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14809569e;
      uVar20 = puVar23[lVar14 + 1];
    }
    uStack_1cc = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_1cc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_200 = (int)lVar14;
    iStack_1bc = local_1b8 + -1 + local_200;
    if (iVar3 < iStack_1bc) {
      iStack_1bc = iVar3;
    }
  }
LAB_14809569e:
  uVar20 = *(uint *)&(param_2->Elements).field_0x28;
  uStack_1b4 = local_15c;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_1b0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_1c0 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_1cc,iVar21);
  TStack_1a0.CurrentBitIndex = iStack_1bc;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_1a0._28_4_ = local_15c;
  TStack_1a0.BaseBitIndex = local_1b8;
  uStack_180 = CONCAT44(uStack_1ac,iStack_1b0);
  local_220 = uVar20;
  local_1e8 = pTVar24;
  local_1d8 = param_2;
  iStack_1d0 = iVar21;
  local_1c8 = (undefined1 *)pTVar24;
  local_1a8 = param_2;
  TStack_1a0.Array = pTVar24;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar4 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar20 != uVar4) {
    puVar22 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = (undefined1 *)pTVar24;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar4;
      local_220 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1480957c0;
      uVar20 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1fc = (int)lVar14;
    uVar20 = local_1fc + -1 + uVar19;
    local_220 = uVar20;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
      local_220 = uVar4;
    }
  }
LAB_1480957c0:
  pTVar11 = local_1a8;
  if (*(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34 !=
      (int)uStack_180) {
    local_224[0] = 0;
    `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_224);
  }
  if (((TStack_1a0.CurrentBitIndex == uVar20) && (TStack_1a0.Array == pTVar24)) &&
     (pTVar11 == param_2)) {
    if (local_158.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      return;
    }
    FMemory::Free((void *)local_158.SecondaryData);
    return;
  }
  uVar5 = *(undefined8 *)
           (*(longlong *)&pTVar11->Elements + (longlong)TStack_1a0.CurrentBitIndex * 0x10);
  local_228 = (uint)((ulonglong)uVar5 >> 0x20);
  local_1f4._4_8_ = uVar5;
  if ((local_228 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PathNameIndex != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x700,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = (this->GuidCache).Object;
  if (*(int *)&(pFVar6->NetFieldExportGroupIndexToGroup).field_0x8 !=
      *(int *)&(pFVar6->NetFieldExportGroupIndexToGroup).field_0x34) {
    puVar22 = *(undefined1 **)&(pFVar6->NetFieldExportGroupIndexToGroup).field_0x40;
    puVar16 = &(pFVar6->NetFieldExportGroupIndexToGroup).field_0x38;
    if (puVar22 != (undefined1 *)0x0) {
      puVar16 = puVar22;
    }
    iVar21 = *(int *)(puVar16 +
                     (ulonglong)
                     (*(int *)&(pFVar6->NetFieldExportGroupIndexToGroup).field_0x48 - 1U & local_228
                     ) * 4);
    if (iVar21 != -1) {
      do {
        lVar14 = *(longlong *)&pFVar6->NetFieldExportGroupIndexToGroup + (longlong)iVar21 * 0x18;
        if (*(uint *)(*(longlong *)&pFVar6->NetFieldExportGroupIndexToGroup +
                     (longlong)iVar21 * 0x18) == local_228) {
          if (lVar14 == 0) goto LAB_1480958e1;
          goto LAB_148095907;
        }
        iVar21 = *(int *)(lVar14 + 0x10);
      } while (iVar21 != -1);
    }
  }
  lVar14 = 0;
LAB_1480958e1:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar12) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_148095907:
  pFVar7 = *(FString **)(lVar14 + 8);
  uVar19 = (uint)uVar5;
  uVar20 = 0;
  if ((int)uVar19 < *(int *)&pFVar7[2].Data.AllocatorInstance.Data) {
    uVar20 = ~uVar19 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((uVar19 != *(uint *)(*(longlong *)&pFVar7[1].Data.ArrayNum + 0x10 +
                          (longlong)(int)uVar19 * 0x28)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NetFieldExportHandle == NetFieldExportGroup->NetFieldExports[NetFieldExportHandle].Handle"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x705,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((local_208 & ForceExportDirtyGroups) == None) && ((char)pFVar7[2].Data.ArrayNum == '\0')) {
    pFVar8 = this->OverrideAckState;
    bVar12 = false;
    if (*(int *)&(pFVar8->NetFieldExportGroupPathAcked).Elements.field_0x8 !=
        *(int *)&(pFVar8->NetFieldExportGroupPathAcked).Elements.field_0x34) {
      FVar9 = (pFVar8->NetFieldExportGroupPathAcked).Hash.SecondaryData;
      FVar17 = (ForElementType<FSetElementId>)&(pFVar8->NetFieldExportGroupPathAcked).Hash;
      if (FVar9 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = FVar9;
      }
      iVar21 = *(int *)((longlong)FVar17 +
                       (ulonglong)((pFVar8->NetFieldExportGroupPathAcked).HashSize - 1U & local_228)
                       * 4);
      if (iVar21 != -1) {
        lVar14 = *(longlong *)&(pFVar8->NetFieldExportGroupPathAcked).Elements;
        do {
          if (*(uint *)(lVar14 + (longlong)iVar21 * 0xc) == local_228) goto LAB_148095c58;
          iVar21 = *(int *)(lVar14 + 4 + (longlong)iVar21 * 0xc);
        } while (iVar21 != -1);
      }
    }
  }
  else {
    bVar12 = true;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_158;
  if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_158.SecondaryData;
  }
  FVar1 = (ForElementType<unsigned_int>)((longlong)FVar15 + (longlong)local_50 * 4);
  for (; FVar15 != FVar1; FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4)) {
    if (*(uint *)FVar15 == local_228) goto LAB_148095c58;
  }
  local_218[0] = 1;
  goto LAB_148095a5b;
LAB_148095c58:
  local_218[0] = 0;
LAB_148095a5b:
  (**(code **)(*(longlong *)local_210 + 0x1a0))(local_210,&local_228);
  (**(code **)(*(longlong *)local_210 + 0x1a0))(local_210,local_218);
  if (local_218[0] != 0) {
    local_204 = *(undefined4 *)&pFVar7[2].Data.AllocatorInstance.Data;
    ::operator<<(local_210,pFVar7);
    (**(code **)(*(longlong *)local_210 + 0x1a0))(local_210,&local_204);
    FVar15 = (ForElementType<unsigned_int>)&local_158;
    if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_158.SecondaryData;
    }
    if ((ulonglong)FVar15 <= &local_228) {
      FVar15 = (ForElementType<unsigned_int>)&local_158;
      if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_158.SecondaryData;
      }
      if ((&local_228 < (uint *)((longlong)FVar15 + (longlong)local_4c * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                           (0x404,&local_158,&local_4c);
    }
    FVar15 = (ForElementType<unsigned_int>)&local_158;
    if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_158.SecondaryData;
    }
    lVar14 = (longlong)local_50;
    local_50 = local_50 + 1;
    *(uint *)((longlong)FVar15 + lVar14 * 4) = local_228;
    if (bVar12) {
      *(undefined1 *)&pFVar7[2].Data.ArrayNum = 0;
    }
  }
  uVar20 = 0;
  if ((int)uVar19 < *(int *)&pFVar7[2].Data.AllocatorInstance.Data) {
    uVar20 = ~uVar19 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  ::operator<<(local_210,
               (FNetFieldExport *)
               (*(longlong *)&pFVar7[1].Data.ArrayNum + (longlong)(int)uVar19 * 0x28));
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>
            (&this->OverrideAckState->NetFieldExportGroupPathAcked,&local_1f8,(bool *)&local_228);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
  Emplace<unsigned___int64_const_&>
            (&this->OverrideAckState->NetFieldExportAcked,(ulong64 *)local_1f4,
             (bool *)(local_1f4 + 4));
  TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  param_2 = local_1e0;
  pTVar24 = local_1e8;
  uVar20 = local_220;
  goto LAB_1480957c0;
}

// ConsumeQueuedActorDelinquencyAnalytics @ 14809aa90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::ConsumeQueuedActorDelinquencyAnalytics
          (UPackageMapClient *this,FNetQueuedActorDelinquencyAnalytics *param_1)

{
  FDelinquencyAnalytics::operator=
            (&param_1->DelinquentQueuedActors,&(this->DelinquentQueuedActors).DelinquentQueuedActors
            );
  param_1->MaxConcurrentQueuedActors = (this->DelinquentQueuedActors).MaxConcurrentQueuedActors;
  (this->DelinquentQueuedActors).MaxConcurrentQueuedActors =
       *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x8 -
       *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x34;
  return;
}

// CreateCustomExportsBunch @ 14809ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall
UPackageMapClient::CreateCustomExportsBunch(UPackageMapClient *this,FOutBunch *param_1)

{
  int *piVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  ForElementType<UE::Net::FNetToken> FVar3;
  ENetTokenAuthority EVar4;
  ForElementType<FSetElementId> FVar5;
  void *_Src;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ForElementType<UE::Net::FNetToken> FVar13;
  FOutBunch *pFVar14;
  FNetTraceCollector *pFVar15;
  ForElementType<UE::Net::FNetToken> FVar16;
  ForAnyElementType FVar17;
  ForElementType<FSetElementId> FVar18;
  ForElementType<FNetTracePacketContentEvent> FVar19;
  ulonglong uVar20;
  ForElementType<FNetTracePacketContentEvent> FVar21;
  ForElementType<UE::Net::FNetToken> FVar22;
  FNetTraceCollector *pFVar23;
  longlong lVar24;
  ulonglong uVar25;
  ForElementType<UE::Net::FNetToken> FVar26;
  FNetTraceCollector *pFVar27;
  undefined1 auStackY_118 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  FNetToken_u_0 local_c4;
  uint local_c0;
  uint local_bc;
  FNetTraceCollector *local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  uint local_a0;
  FString local_98;
  ForElementType<UE::Net::FNetToken> local_88;
  FNetTraceCollector *local_80;
  FString local_78;
  ForElementType<UE::Net::FNetToken> local_68;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FVar26 = (ForElementType<UE::Net::FNetToken>)0x0;
  iVar12 = (param_1->NetTokensPendingExport).ArrayNum;
  local_68.SecondaryData = (ForElementType<UE::Net::FNetToken>)0x0;
  local_50 = 0;
  local_4c = 4;
  local_b8 = (FNetTraceCollector *)param_1;
  if (0 < iVar12) {
    FVar22 = (param_1->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    EVar4 = (((this->NetTokenResolveContext).NetTokenStore)->Params).Authority;
    if (FVar22 == (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar22 = (ForElementType<UE::Net::FNetToken>)&param_1->NetTokensPendingExport;
    }
    FVar2 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar22 + (longlong)iVar12 * 4);
    FVar16 = FVar26;
    while( true ) {
      if ((param_1->NetTokensPendingExport).ArrayNum != iVar12) {
        local_c8 = 0;
        `TCheckedPointerIterator<UE::Net::FNetToken_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c8);
        FVar16._4_4_ = 0;
        FVar16._0_4_ = local_50;
        FVar26 = local_68.SecondaryData;
      }
      uVar10 = FVar16._0_4_;
      if (FVar22 == FVar2) break;
      if ((EVar4 == Authority) ||
         ((bool)((byte)(*(uint *)FVar22 >> 0x17) & 1) == (EVar4 == Authority))) {
        uVar11 = *(uint *)FVar22;
        if (*(int *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x8 !=
            *(int *)&(this->AcknowledgedExportedNetTokens).Elements.field_0x34) {
          FVar5 = (this->AcknowledgedExportedNetTokens).Hash.SecondaryData;
          FVar18 = (ForElementType<FSetElementId>)&(this->AcknowledgedExportedNetTokens).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar18 = FVar5;
          }
          iVar9 = *(int *)((longlong)FVar18 +
                          (ulonglong)((this->AcknowledgedExportedNetTokens).HashSize - 1U & uVar11)
                          * 4);
          if (iVar9 != -1) {
            lVar24 = *(longlong *)&(this->AcknowledgedExportedNetTokens).Elements;
            do {
              if (*(uint *)(lVar24 + (longlong)iVar9 * 0xc) == uVar11) goto LAB_14809d041;
              iVar9 = *(int *)(lVar24 + 4 + (longlong)iVar9 * 0xc);
            } while (iVar9 != -1);
          }
        }
        FVar13 = (ForElementType<UE::Net::FNetToken>)&local_68;
        if (FVar26 != (ForElementType<UE::Net::FNetToken>)0x0) {
          FVar13 = FVar26;
        }
        FVar3 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar13 + (longlong)(int)uVar10 * 4);
        for (; FVar13 != FVar3; FVar13 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar13 + 4))
        {
          if (*(uint *)FVar13 == uVar11) goto LAB_14809d041;
        }
        FVar16 = (ForElementType<UE::Net::FNetToken>)&local_68;
        if (FVar26 != (ForElementType<UE::Net::FNetToken>)0x0) {
          FVar16 = FVar26;
        }
        if ((ulonglong)FVar16 <= (ulonglong)FVar22) {
          FVar16 = (ForElementType<UE::Net::FNetToken>)&local_68;
          if (FVar26 != (ForElementType<UE::Net::FNetToken>)0x0) {
            FVar16 = FVar26;
          }
          if (((ulonglong)FVar22 < (ulonglong)((longlong)FVar16 + (longlong)(int)local_4c * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar26 = local_68.SecondaryData, uVar10 = local_50, bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FOutBunch *)(*pcVar6)();
            return pFVar14;
          }
        }
        if (uVar10 == local_4c) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                             (0x404,&local_68,(int *)&local_4c);
          FVar26 = local_68.SecondaryData;
        }
        local_50 = uVar10 + 1;
        FVar16 = (ForElementType<UE::Net::FNetToken>)&local_68;
        if (FVar26 != (ForElementType<UE::Net::FNetToken>)0x0) {
          FVar16 = FVar26;
        }
        *(uint *)((longlong)FVar16 + (longlong)(int)uVar10 * 4) = *(uint *)FVar22;
        FVar16._4_4_ = 0;
        FVar16._0_4_ = local_50;
        FVar26 = local_68.SecondaryData;
      }
LAB_14809d041:
      FVar22 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar22 + 4);
    }
    if (uVar10 != 0) {
      pFVar14 = ::operator_new(0x150);
      if (pFVar14 == (FOutBunch *)0x0) {
        pFVar14 = (FOutBunch *)0x0;
      }
      else {
        pFVar14 = FOutBunch::FOutBunch(pFVar14,(UPackageMap *)this,0x400);
      }
      pFVar23 = (FNetTraceCollector *)0x0;
      pFVar14->bPartialCustomExportsFinal = '\x01';
      *(undefined1 *)&pFVar14->_padding_ = 1;
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a8 = *(int *)((longlong)(local_b8->Events).AllocatorInstance.InlineData + 0x30);
      lVar24 = (longlong)local_a8;
      _Src = *(void **)((longlong)(local_b8->Events).AllocatorInstance.InlineData + 0x28);
      if (local_a8 == 0) {
        local_a4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8,0,&local_b0,local_a8,&local_a4);
        memcpy(local_b0.Data,_Src,lVar24 * 2);
      }
      ::FString::PrintfImpl(&local_78,L"%s ExportsBunch");
      iVar12 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AssignRange
                (&pFVar14->DebugString,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar12);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      uVar20 = (ulonglong)_tls_index;
      if (GNetTraceRuntimeVerbosity == 0) {
        pFVar14->_padding_ = 0;
        local_b8 = (FNetTraceCollector *)0x0;
        local_c0 = 0xffffffff;
      }
      else {
        pFVar15 = pFVar23;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar15 = FNetTrace::CreateTraceCollector();
        }
        pFVar14->_padding_ = (longlong)pFVar15;
        local_c0 = 0xffffffff;
        pFVar27 = pFVar23;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar27 = pFVar15;
        }
        local_b8 = pFVar27;
        if (pFVar27 != (FNetTraceCollector *)0x0) {
          local_c0 = FNetTrace::BeginPacketContentEvent(pFVar27,NameId,(uint)pFVar14->_padding_);
          uVar25 = (ulonglong)local_c0;
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
               ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            CustomExportsBunch = UE::Net::CreatePersistentNetDebugName(L"CustomExportsBunch",0x12);
            _Init_thread_footer(&::_TSS0);
          }
          uVar10 = FNetTrace::TraceName(CustomExportsBunch);
          FVar19 = (pFVar27->Events).AllocatorInstance.SecondaryData;
          if (FVar19 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar19 = (ForElementType<FNetTracePacketContentEvent>)&pFVar27->Events;
          }
          *(uint *)((longlong)FVar19 + uVar25 * 0x10) = uVar10;
        }
      }
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar23 = (FNetTraceCollector *)pFVar14->_padding_;
      }
      local_bc = 0xffffffff;
      local_80 = pFVar23;
      if (pFVar23 != (FNetTraceCollector *)0x0) {
        local_bc = FNetTrace::BeginPacketContentEvent(pFVar23,NameId,(uint)pFVar14->_padding_);
        uVar25 = (ulonglong)local_bc;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          NetTokenExports = UE::Net::CreatePersistentNetDebugName(L"NetTokenExports",0xf);
          _Init_thread_footer(&::_TSS0);
        }
        uVar10 = FNetTrace::TraceName(NetTokenExports);
        FVar19 = (pFVar23->Events).AllocatorInstance.SecondaryData;
        if (FVar19 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar19 = (ForElementType<FNetTracePacketContentEvent>)&pFVar23->Events;
        }
        *(uint *)((longlong)FVar19 + uVar25 * 0x10) = uVar10;
      }
      uVar20 = (ulonglong)(int)local_50;
      local_a0 = local_50;
      FVar26 = (ForElementType<UE::Net::FNetToken>)&local_68;
      if (local_68.SecondaryData != (ForElementType<UE::Net::FNetToken>)0x0) {
        FVar26 = local_68.SecondaryData;
      }
      local_88 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar26 + uVar20 * 4);
      uVar25 = uVar20;
      while( true ) {
        FVar22 = local_88;
        if ((int)uVar20 != (int)uVar25) {
          local_c7 = 0;
          `TCheckedPointerIterator<UE::Net::FNetToken,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_c7);
        }
        if (FVar26 == FVar22) break;
        local_c4 = *(FNetToken_u_0 *)FVar26;
        local_c6 = 1;
        (**(code **)(pFVar14->_padding_ + 400))(pFVar14,&local_c6);
        uVar10 = 0xffffffff;
        pFVar23 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar23 = (FNetTraceCollector *)pFVar14->_padding_;
        }
        if (pFVar23 != (FNetTraceCollector *)0x0) {
          uVar10 = FNetTrace::BeginPacketContentEvent(pFVar23,NameId,(uint)pFVar14->_padding_);
          ::FString::PrintfImpl(&local_98,L"NetToken (Auth:%u TypeId=%u Index=%u)");
          FVar7.Data = local_98.Data.AllocatorInstance.Data;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_98.Data.ArrayNum != 0) {
            FVar17.Data = FVar7.Data;
          }
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          uVar11 = FNetTrace::TraceName((wchar_t *)FVar17.Data);
          if (FVar7.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar7.Data);
          }
          FVar19 = (pFVar23->Events).AllocatorInstance.SecondaryData;
          FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar23->Events;
          if (FVar19 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar21 = FVar19;
          }
          *(uint *)((longlong)FVar21 + (ulonglong)uVar10 * 0x10) = uVar11;
        }
        UE::Net::FNetTokenStore::InternalWriteNetToken
                  ((FArchive *)pFVar14,(FNetToken)local_c4._s_0,true);
        UE::Net::FNetTokenStore::WriteTokenData
                  ((this->NetTokenResolveContext).NetTokenStore,(FArchive *)pFVar14,
                   (FNetToken)local_c4._s_0,(UPackageMap *)this);
        FVar22 = (ForElementType<UE::Net::FNetToken>)&pFVar14->NetTokensPendingExport;
        FVar2 = (pFVar14->NetTokensPendingExport).AllocatorInstance.SecondaryData;
        FVar16 = FVar22;
        if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
          FVar16 = FVar2;
        }
        if ((ulonglong)FVar16 <= &local_c4) {
          FVar16 = FVar22;
          if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
            FVar16 = FVar2;
          }
          if ((&local_c4 <
               (FNetToken_u_0 *)
               ((longlong)FVar16 + (longlong)(pFVar14->NetTokensPendingExport).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FOutBunch *)(*pcVar6)();
            return pFVar14;
          }
        }
        iVar12 = (pFVar14->NetTokensPendingExport).ArrayNum;
        piVar1 = &(pFVar14->NetTokensPendingExport).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                             (0x404,(ForElementType<UE::Net::FNetToken> *)FVar22,piVar1);
        }
        (pFVar14->NetTokensPendingExport).ArrayNum = iVar12 + 1;
        FVar2 = (pFVar14->NetTokensPendingExport).AllocatorInstance.SecondaryData;
        if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
          FVar22 = FVar2;
        }
        ((FNetToken_u_0 *)((longlong)FVar22 + (longlong)iVar12 * 4))->_s_0 =
             (FNetToken_u_0_s_0)local_c4;
        if (uVar10 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar23,uVar10,(uint)pFVar14->_padding_);
        }
        uVar20 = (ulonglong)local_50;
        FVar26 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar26 + 4);
        uVar25 = (ulonglong)local_a0;
      }
      local_c5 = 0;
      (**(code **)(pFVar14->_padding_ + 400))(pFVar14,&local_c5);
      if (local_bc != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(local_80,local_bc,(uint)pFVar14->_padding_);
      }
      if (((pFVar14->_padding_ & 0x200) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ExportsBunch->IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x8f9,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FOutBunch *)(*pcVar6)();
        return pFVar14;
      }
      FVar26 = local_68.SecondaryData;
      if (local_c0 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(local_b8,local_c0,(uint)pFVar14->_padding_);
        FVar26 = local_68.SecondaryData;
      }
      goto LAB_14809d5e0;
    }
  }
  pFVar14 = (FOutBunch *)0x0;
LAB_14809d5e0:
  if (FVar26 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar26);
  }
  return pFVar14;
}

// ExportNetGUID @ 14809fce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::ExportNetGUID
          (UPackageMapClient *this,FNetworkGUID param_1,UObject *param_2,FString *param_3,
          UObject *param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar3;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  int *piVar8;
  FOutBunch *pFVar9;
  FNetworkGUID FVar10;
  code *pcVar11;
  FNetworkGUID_u_0 FVar12;
  UObject *pUVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  FOutBunch *pFVar19;
  FNetTraceCollector *pFVar20;
  FNetTraceCollector *pFVar21;
  int *piVar22;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar23;
  ForElementType<FNetTracePacketContentEvent> FVar24;
  FNetTraceCollector *pFVar25;
  longlong lVar26;
  FString *pFVar27;
  FNetworkGUID_u_0 *pFVar28;
  int local_res8;
  FNetworkGUID_u_0 local_res10;
  UObject *local_res18;
  FString *local_res20;
  FString local_100;
  ulonglong local_f0;
  FBitWriterMark local_e8;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  undefined1 local_90 [12];
  uint local_84;
  longlong local_80;
  uint local_78;
  int local_74;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pFVar25 = (FNetTraceCollector *)0x0;
  local_res10 = param_1.field0_0x0;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1.field0_0x0 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NetGUID.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x568,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  if (((param_2 == (UObject *)0x0) != 1 < (param_3->Data).ArrayNum) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("( Object == 0 ) == !PathName.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x569,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  if ((local_res10.ObjectId == 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!NetGUID.IsDefault()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x56a,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  if (((param_2 != (UObject *)0x0) &&
      (bVar14 = ShouldSendFullPath(this,param_2,(FNetworkGUID *)&local_res10), !bVar14)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object == 0 || ShouldSendFullPath( Object, NetGUID )",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x56b,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  if (this->Connection->bInternalAck != 0) {
    bVar14 = ExportNetGUIDForReplay(this,(FNetworkGUID *)&local_res10,param_2,param_3,param_4);
    pFVar6 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    return bVar14;
  }
  local_res8 = 0;
  while( true ) {
    piVar22 = &this->ExportNetGUIDCount;
    if (this->CurrentExportBunch == (FOutBunch *)0x0) {
      if ((*piVar22 != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExportNetGUIDCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                              ,0x579,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        uVar15 = (*pcVar11)();
        return (bool)uVar15;
      }
      pFVar19 = ::operator_new(0x150);
      pFVar20 = pFVar25;
      if (pFVar19 != (FOutBunch *)0x0) {
        pFVar20 = (FNetTraceCollector *)
                  FOutBunch::FOutBunch
                            (pFVar19,(UPackageMap *)this,
                             (longlong)
                             ((this->Connection->MaxPacket * 8 -
                              this->Connection->MaxPacketHandlerBits) + -0x235));
      }
      this->CurrentExportBunch = (FOutBunch *)pFVar20;
      pFVar21 = pFVar25;
      if ((GNetTraceRuntimeVerbosity != 0) && (1 < GNetTraceRuntimeVerbosity)) {
        pFVar21 = FNetTrace::CreateTraceCollector();
        pFVar20 = (FNetTraceCollector *)this->CurrentExportBunch;
      }
      *(FNetTraceCollector **)(pFVar20->OffsetStack + 0x10) = pFVar21;
      *(undefined1 *)&this->CurrentExportBunch->_padding_ = 0;
      *(undefined1 *)((longlong)&this->CurrentExportBunch->_padding_ + 1) = 1;
      this->CurrentExportBunch->bHasPackageMapExports = '\x01';
      ::FString::operator=(&this->CurrentExportBunch->DebugString,L"NetGUIDs");
      uVar16 = 0xffffffff;
      pFVar20 = pFVar25;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar20 = (FNetTraceCollector *)this->CurrentExportBunch->_padding_;
      }
      plVar2 = &this->CurrentExportBunch->_padding_;
      if (pFVar20 != (FNetTraceCollector *)0x0) {
        uVar16 = FNetTrace::BeginPacketContentEvent(pFVar20,NameId,(uint)*plVar2);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          NetGUIDExportBuncheader =
               UE::Net::CreatePersistentNetDebugName(L"NetGUIDExportBuncheader",0x17);
          _Init_thread_footer(&::_TSS0);
        }
        uVar17 = FNetTrace::TraceName(NetGUIDExportBuncheader);
        FVar7 = (pFVar20->Events).AllocatorInstance.SecondaryData;
        FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
        if (FVar7 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar24 = FVar7;
        }
        *(uint *)((longlong)FVar24 + (ulonglong)uVar16 * 0x10) = uVar17;
      }
      FBitWriter::WriteBit((FBitWriter *)this->CurrentExportBunch,'\0');
      pFVar19 = this->CurrentExportBunch;
      *piVar22 = 0;
      piVar8 = *(int **)pFVar19->_padding_;
      if ((int *)((undefined8 *)pFVar19->_padding_)[1] < piVar8 + 1) {
        if ((pFVar19->_padding_ & 0x10000) == 0) {
          (**(code **)(pFVar19->_padding_ + 0x188))(pFVar19,piVar22,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)pFVar19,(uint *)piVar22);
        }
      }
      else {
        *piVar22 = *piVar8;
        *(longlong *)pFVar19->_padding_ = *(longlong *)pFVar19->_padding_ + 4;
      }
      if (uVar16 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar20,uVar16,(uint)*plVar2);
      }
    }
    FVar12 = local_res10;
    if (*(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 !=
        *(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x34) {
      if (local_res18 != (UObject *)0x0) {
        local_c8.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
        local_c8.Number = *(uint *)&local_res18->field_0x1c;
        ::FName::ToString(&local_c8,&local_a0);
        pFVar25 = (FNetTraceCollector *)&DAT_00000001;
      }
      pFVar27 = local_res20;
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if ((pFVar25 != (FNetTraceCollector *)0x0) &&
         (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      goto LAB_1480a0669;
    }
    pFVar19 = this->CurrentExportBunch;
    uVar16 = 0xffffffff;
    pFVar20 = pFVar25;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar20 = (FNetTraceCollector *)pFVar19->_padding_;
    }
    local_f0 = 0xffffffff;
    if (pFVar20 != (FNetTraceCollector *)0x0) {
      uVar16 = FNetTrace::BeginPacketContentEvent(pFVar20,Object,(uint)pFVar19->_padding_);
      local_f0 = (ulonglong)uVar16;
      FVar7 = (pFVar20->Events).AllocatorInstance.SecondaryData;
      FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
      if (FVar7 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar24 = FVar7;
      }
      ((FNetworkGUID_u_0 *)((longlong)FVar24 + local_f0 * 0x10))->ObjectId = (ulong64)FVar12;
      if (FVar12.ObjectId != 0) {
        FNetTraceCollector::AddReferencedObjectId(pFVar20,FVar12.ObjectId);
      }
    }
    local_e8.Num = this->CurrentExportBunch->_padding_;
    local_e8.Overflowed =
         (bool)(*(byte *)((longlong)&this->CurrentExportBunch->_padding_ + 1) >> 1 & 1);
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((this->GuidCache).Object)->IsExportingNetGUIDBunch = true;
    local_100.Data.ArrayNum = (local_res20->Data).ArrayNum;
    lVar26 = (longlong)local_100.Data.ArrayNum;
    pFVar6 = (local_res20->Data).AllocatorInstance.Data;
    if (local_100.Data.ArrayNum == 0) {
      local_100.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                 local_100.Data.ArrayNum,&local_100.Data.ArrayMax);
      memcpy(local_100.Data.AllocatorInstance.Data,pFVar6,lVar26 * 2);
    }
    pUVar13 = local_res18;
    InternalWriteObject(this,(FArchive *)this->CurrentExportBunch,(FNetworkGUID)local_res10,
                        local_res18,&local_100,param_4);
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    ((this->GuidCache).Object)->IsExportingNetGUIDBunch = false;
    if (*(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 ==
        *(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x34) break;
    pFVar9 = this->CurrentExportBunch;
    if ((pFVar9->_padding_ & 0x200) == 0) {
      pTVar4 = &pFVar9->ExportNetGUIDs;
      pTVar23 = TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Array
                          (&this->CurrentExportNetGUIDs,local_60);
      if ((pTVar4 == pTVar23) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        uVar15 = (*pcVar11)();
        return (bool)uVar15;
      }
      iVar5 = pTVar23->ArrayNum;
      if (iVar5 != 0) {
        iVar18 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar5,&pTVar4->AllocatorInstance,&(pFVar9->ExportNetGUIDs).ArrayNum,
                            &(pFVar9->ExportNetGUIDs).ArrayMax);
        memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 8,
                (pTVar23->AllocatorInstance).Data,(longlong)iVar5 << 3);
        pTVar23->ArrayNum = 0;
      }
      if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
      }
      pTVar3 = &this->CurrentExportNetGUIDs;
      bVar14 = 1 < (this->CurrentExportNetGUIDs).HashSize;
      if (!bVar14) {
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements
                  (pTVar3);
      }
      puVar1 = &(this->CurrentExportNetGUIDs).Elements.field_0xc;
      *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x34 = 0;
      iVar5 = *(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c;
      *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x28 = 0;
      if ((iVar5 < 0) || (0x80 < iVar5)) {
        *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->CurrentExportNetGUIDs).Elements.field_0x10,0);
      }
      if (bVar14) {
        (this->CurrentExportNetGUIDs).HashSize = 1;
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(pTVar3);
      }
      this->ExportNetGUIDCount = this->ExportNetGUIDCount + 1;
      if ((uint)local_f0 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar20,(uint)local_f0,(uint)pFVar19->_padding_);
      }
      pFVar6 = (local_res20->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      return true;
    }
    FBitWriterMark::Pop(&local_e8,(FBitWriter *)pFVar9);
    pTVar3 = &this->CurrentExportNetGUIDs;
    bVar14 = 1 < (this->CurrentExportNetGUIDs).HashSize;
    if (!bVar14) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements
                (pTVar3);
    }
    puVar1 = &(this->CurrentExportNetGUIDs).Elements.field_0xc;
    *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x34 = 0;
    iVar5 = *(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c;
    *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->CurrentExportNetGUIDs).Elements.field_0x10,0);
    }
    if (bVar14) {
      (this->CurrentExportNetGUIDs).HashSize = 1;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(pTVar3);
    }
    if ((this->ExportNetGUIDCount == 0) || (local_res8 == 1)) {
      if (local_res18 != (UObject *)0x0) {
        local_d8.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
        local_d8.Number = *(uint *)&local_res18->field_0x1c;
        ::FName::ToString(&local_d8,&local_c0);
        pFVar25 = (FNetTraceCollector *)&DAT_00000004;
      }
      pFVar27 = local_res20;
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if ((pFVar25 != (FNetTraceCollector *)0x0) &&
         (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      goto LAB_1480a03f6;
    }
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::TIterator::TIterator
              ((TIterator *)local_90,pTVar3);
    if (local_74 < *(int *)(local_80 + 0x18)) {
      do {
        pFVar28 = (FNetworkGUID_u_0 *)((longlong)local_74 * 0x10 + *(longlong *)local_90._0_8_);
        FVar10.field0_0x0 = (FNetworkGUID_u_0)pFVar28->ObjectId;
        piVar22 = TMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>
                  ::FindOrAddImpl<FNetworkGUID_const_&>
                            ((TMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>
                              *)&this->NetGUIDExportCountMap,
                             FVar10.field0_0x0._4_4_ * 0x17 + FVar10.field0_0x0.Value,
                             (FNetworkGUID *)pFVar28);
        *piVar22 = *piVar22 + -1;
        local_78 = local_78 & ~local_84;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_90 + 8));
      } while (local_74 < *(int *)(local_80 + 0x18));
    }
    ExportNetGUIDHeader(this);
    if (uVar16 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar20,uVar16,(uint)pFVar19->_padding_);
    }
    local_res8 = local_res8 + 1;
    if (1 < local_res8) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x5ce,L"");
      pFVar27 = local_res20;
      if (bVar14) {
        pcVar11 = (code *)swi(3);
        uVar15 = (*pcVar11)();
        return (bool)uVar15;
      }
LAB_1480a0669:
      pFVar6 = (pFVar27->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      return false;
    }
  }
  pFVar27 = local_res20;
  if (2 < (byte)LogNetPackageMap._0_1_) {
    if (pUVar13 != (UObject *)0x0) {
      local_d0.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
      local_d0.Number = *(uint *)&pUVar13->field_0x1c;
      ::FName::ToString(&local_d0,&local_b0);
      pFVar25 = (FNetTraceCollector *)&DAT_00000002;
    }
    pFVar27 = local_res20;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if ((pFVar25 != (FNetTraceCollector *)0x0) &&
       (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  FBitWriterMark::Pop(&local_e8,(FBitWriter *)this->CurrentExportBunch);
LAB_1480a03f6:
  if (uVar16 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar20,uVar16,(uint)pFVar19->_padding_);
  }
  goto LAB_1480a0669;
}

// ExportNetGUIDForReplay @ 1480a06e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::ExportNetGUIDForReplay
          (UPackageMapClient *this,FNetworkGUID *param_1,UObject *param_2,FString *param_3,
          UObject *param_4)

{
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *this_00;
  ENetworkChecksumMode EVar1;
  FPackageMapAckState *this_01;
  FNetGUIDCache *pFVar2;
  FNetGUIDCache *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  TTuple<FNetworkGUID,int> *pTVar11;
  int *piVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined4 *puVar15;
  uint local_res8 [2];
  UObject *local_res18;
  FString *local_res20;
  TPairInitializer<FNetworkGUID_&,int_const_&> local_138;
  FNetworkGUID *local_128;
  int *local_120;
  uint *local_118;
  FScriptContainerElement *local_110;
  FNetworkGUID *local_108;
  UObject **local_100;
  FArchiveState local_f8;
  undefined8 local_68;
  FScriptContainerElement *local_60;
  int *local_58;
  FString local_48;
  
  this_01 = this->OverrideAckState;
  local_res18 = param_2;
  local_res20 = param_3;
  pTVar11 = TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                    *)this_01,param_1);
  piVar12 = (int *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FNetworkGUID,int> *)0x0) {
    piVar12 = (int *)0x0;
  }
  if (piVar12 == (int *)0x0) {
    local_120 = &GUID_PACKET_NOT_ACKED;
    local_128 = param_1;
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_&,int_const_&>_>
              ((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                *)this_01,&local_138,(bool *)&local_128);
    piVar12 = (int *)(*(longlong *)&this_01->NetGUIDAckStatus +
                     ((longlong)(int)local_138.Key * 3 + 1) * 8);
  }
  if (*piVar12 == -1) goto LAB_1480a0a9b;
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pFVar2 = (this->GuidCache).Object;
  bVar7 = pFVar2->IsExportingNetGUIDBunch;
  pFVar2->IsExportingNetGUIDBunch = true;
  pTVar6 = CVarReservedNetGuidSize.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_1480a07e5:
    piVar12 = (int *)0x0;
  }
  else {
    bVar9 = IsInGameThread();
    piVar12 = (int *)&DAT_00000004;
    if (bVar9) goto LAB_1480a07e5;
  }
  local_res8[0] = *(uint *)((longlong)pTVar6->ShadowedValue + (longlong)piVar12);
  piVar12 = &(this->ExportGUIDArchives).ArrayMax;
  iVar10 = (this->ExportGUIDArchives).ArrayNum;
  if (iVar10 == *piVar12) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->ExportGUIDArchives).AllocatorInstance,piVar12);
  }
  pFVar14 = (this->ExportGUIDArchives).AllocatorInstance.Data;
  (this->ExportGUIDArchives).ArrayNum = iVar10 + 1;
  pFVar14 = pFVar14 + (longlong)iVar10 * 0x10;
  pFVar5 = pFVar14 + 0xc;
  *(undefined8 *)&pFVar14->field_0x0 = 0;
  *(int *)pFVar5 = 0;
  *(undefined4 *)&pFVar14[8].field_0x0 = 0;
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  if (0 < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_res8[0],(ForAnyElementType *)pFVar14,0,(int *)pFVar5);
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pFVar3 = (this->GuidCache).Object;
  EVar1 = pFVar3->NetworkChecksumMode;
  if ((pFVar3 == (FNetGUIDCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ((this->GuidCache).Object)->NetworkChecksumMode = None;
  local_138.Value = (int *)0x0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_58 = local_138.Value;
  local_60 = pFVar14;
  FArchiveState::SetIsSaving(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  pFVar13 = ::FString::FString(&local_48,local_res20);
  InternalWriteObject(this,(FArchive *)&local_f8,(FNetworkGUID)param_1->field0_0x0,local_res18,
                      pFVar13,param_4);
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ((this->GuidCache).Object)->NetworkChecksumMode = EVar1;
  if ((local_f8.ArIsError != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Writer.IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x552,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((int)local_res8[0] < *(int *)&pFVar14[8].field_0x0) {
    local_118 = local_res8;
    local_110 = pFVar14;
    `UPackageMapClient::ExportNetGUIDForReplay'::__l5::<lambda_1>::operator()(&local_118);
  }
  iVar10 = *(int *)&pFVar14[8].field_0x0;
  if (*(int *)pFVar5 != iVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10,(ForAnyElementType *)pFVar14,iVar10,(int *)pFVar5);
  }
  pTVar11 = TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                    *)this->OverrideAckState,param_1);
  puVar15 = (undefined4 *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FNetworkGUID,int> *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  if (puVar15 == (undefined4 *)0x0) {
    local_100 = &local_res18;
    local_108 = param_1;
    bVar9 = `UPackageMapClient::ExportNetGUIDForReplay'::__l13::<lambda_2>::operator()(&local_108);
    if (bVar9) goto LAB_1480a0a84;
  }
  else {
LAB_1480a0a84:
    *puVar15 = 0xffffffff;
  }
  FArchive::~FArchive((FArchive *)&local_f8);
  pFVar2->IsExportingNetGUIDBunch = bVar7;
LAB_1480a0a9b:
  this_00 = &this->CurrentExportNetGUIDs;
  bVar7 = 1 < (this->CurrentExportNetGUIDs).HashSize;
  if (!bVar7) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  iVar10 = *(int *)&(this->CurrentExportNetGUIDs).Elements.field_0xc;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x8 = 0;
  if (iVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,
               (int *)&(this->CurrentExportNetGUIDs).Elements.field_0xc);
  }
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x34 = 0;
  iVar10 = *(int *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->CurrentExportNetGUIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CurrentExportNetGUIDs).Elements.field_0x10,0);
  }
  if (bVar7) {
    (this->CurrentExportNetGUIDs).HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  this->ExportNetGUIDCount = 0;
  return true;
}

// ExportNetGUIDHeader @ 1480a0b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ExportNetGUIDHeader(UPackageMapClient *this)

{
  int *piVar1;
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FOutBunch **ppFVar3;
  FOutBunch *pFVar4;
  long64 lVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint local_res8 [2];
  FString local_18;
  
  if ((this->CurrentExportBunch == (FOutBunch *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentExportBunch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x5e0,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (4 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  }
  pFVar4 = this->CurrentExportBunch;
  local_res8[0] = this->ExportNetGUIDCount;
  lVar5 = pFVar4->_padding_;
  pFVar4->_padding_ = 0;
  FBitWriter::WriteBit((FBitWriter *)pFVar4,'\0');
  puVar6 = *(uint **)pFVar4->_padding_;
  if ((uint *)((undefined8 *)pFVar4->_padding_)[1] < puVar6 + 1) {
    if ((pFVar4->_padding_ & 0x10000) == 0) {
      (**(code **)(pFVar4->_padding_ + 0x188))(pFVar4,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)pFVar4,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar6;
    *(longlong *)pFVar4->_padding_ = *(longlong *)pFVar4->_padding_ + 4;
  }
  pFVar4->_padding_ = lVar5;
  if (5 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    pFVar4 = this->CurrentExportBunch;
    for (iVar10 = 0; (-1 < iVar10 && (iVar10 < (pFVar4->ExportNetGUIDs).ArrayNum));
        iVar10 = iVar10 + 1) {
      if (5 < (byte)LogNetPackageMap._0_1_) {
        if ((iVar10 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ::FString::PrintfImpl(&local_18,L"%llu");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if ((this->CurrentExportBunch->ExportNetGUIDs).ArrayNum == 0) {
    if (2 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
  else {
    pTVar2 = &this->ExportBunches;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    ppFVar3 = &this->CurrentExportBunch;
    if (((pFVar7 <= ppFVar3) && (ppFVar3 < pFVar7 + (longlong)(this->ExportBunches).ArrayMax * 8))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (this->ExportBunches).ArrayNum;
    piVar1 = &(this->ExportBunches).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ExportBunches).ArrayNum = iVar10 + 1;
    *(FOutBunch **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = *ppFVar3;
  }
  if (__CsvProfilerStat1531 == false) {
    FCsvProfilerTrace::OutputInlineStat("NetGuidExports",_GCsvCategory_PackageMap.Index);
    __CsvProfilerStat1531 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NetGuidExports",_GCsvCategory_PackageMap.Index,this->ExportNetGUIDCount,Accumulate);
  this->CurrentExportBunch = (FOutBunch *)0x0;
  this->ExportNetGUIDCount = 0;
  return;
}

// GetAdditionalRequiredBunches @ 1480a3a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> * __thiscall
UPackageMapClient::GetAdditionalRequiredBunches
          (UPackageMapClient *this,
          TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FOutBunch *param_1
          ,EChannelGetAdditionalRequiredBunchesFlags param_2)

{
  FOutBunch *local_res10;
  undefined1 local_res20 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_2 & SkipNetGUIDExports) == None) {
    AppendExportBunches(this,__return_storage_ptr__);
  }
  local_res10 = CreateCustomExportsBunch(this,param_1);
  if (local_res10 != (FOutBunch *)0x0) {
    if (local_res10->bPartialCustomExportsFinal == '\0') {
      `UPackageMapClient::GetAdditionalRequiredBunches'::__l8::<lambda_1>::operator()(local_res20);
    }
    SplitAndAppendCustomExportsBunch
              (__return_storage_ptr__,&local_res10,
               (this->Connection->MaxPacket * 8 - this->Connection->MaxPacketHandlerBits) + -0x235);
  }
  return __return_storage_ptr__;
}

// GetNetFieldExportGroup @ 1480a62d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FNetFieldExportGroup,1> * __thiscall
UPackageMapClient::GetNetFieldExportGroup
          (UPackageMapClient *this,TSharedPtr<FNetFieldExportGroup,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar4;
  TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_> *pTVar5;
  
  if ((this->GuidCache).Object == (FNetGUIDCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                   *)&((this->GuidCache).Object)->NetFieldExportGroupMap,param_1);
  if (pTVar5 == (TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FNetFieldExportGroup *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FNetFieldExportGroup **)&pTVar5->field_0x10;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetNetFieldExportGroupChecked @ 1480a6380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FNetFieldExportGroup,1> * __thiscall
UPackageMapClient::GetNetFieldExportGroupChecked
          (UPackageMapClient *this,TSharedPtr<FNetFieldExportGroup,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar4;
  TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_> *pTVar5;
  
  if ((this->GuidCache).Object == (FNetGUIDCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                   *)&((this->GuidCache).Object)->NetFieldExportGroupMap,param_1);
  if (pTVar5 == (TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = *(FNetFieldExportGroup **)&pTVar5->field_0x10;
  pTVar1 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNetGUIDFromObject @ 1480a6520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall
UPackageMapClient::GetNetGUIDFromObject(UPackageMapClient *this,UObject *param_1)

{
  longlong lVar1;
  FNetGUIDCache *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNetworkGUID FVar5;
  undefined8 uVar6;
  UObject *in_R8;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  undefined8 uVar7;
  
  if ((this->GuidCache).Object == (FNetGUIDCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
      return (FNetworkGUID)FVar5.field0_0x0;
    }
  }
  this_00 = (this->GuidCache).Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (in_R8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(in_R8);
  }
  uVar7 = 0;
  uVar6 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (in_R8 == (UObject *)0x0)) {
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    if (in_R8 == (UObject *)0x0) goto LAB_1480a661d;
  }
  else {
    UE::GC::MarkAsReachable(in_R8);
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  }
  bVar3 = FNetGUIDCache::SupportsObject
                    (this_00,in_R8,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
  uVar6 = uVar7;
  if (bVar3) {
    local_res18 = local_res8;
    iVar4 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&this_00->NetGUIDLookup,
                       local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res18);
    if ((iVar4 != -1) &&
       (lVar1 = *(longlong *)&this_00->NetGUIDLookup + (longlong)iVar4 * 0x18, lVar1 != 0)) {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
  }
LAB_1480a661d:
  *(undefined8 *)param_1 = uVar6;
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// GetNetGUIDStats @ 1480a6640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::GetNetGUIDStats(UPackageMapClient *this,int *param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPackageMapAckState *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  *pTStack_40;
  FPackageMapAckState *local_38;
  undefined2 local_30;
  
  *param_3 = 0;
  *param_2 = 0;
  *param_1 = 0;
  pFVar3 = this->OverrideAckState;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
              *)pFVar3);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar10 = local_98._24_8_ >> 0x20;
  local_38 = pFVar3;
  if ((int)local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    iVar11 = 1;
    uVar12 = local_98._28_4_;
    do {
      plVar6 = local_68;
      pFVar9 = (this->PendingAckGUIDs).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (longlong)(this->PendingAckGUIDs).ArrayNum * 8;
      if (pFVar9 != pFVar1) {
        do {
          if (*(longlong *)pFVar9 == *(longlong *)(*local_68 + (longlong)(int)uVar12 * 0x18)) {
            uVar8 = 1;
            goto LAB_1480a6738;
          }
          pFVar9 = pFVar9 + 8;
        } while (pFVar9 != pFVar1);
      }
      uVar8 = 0;
LAB_1480a6738:
      if ((~*(uint *)(*local_68 + 8 + (longlong)(int)uVar10 * 0x18) >> 0x1f != uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("( It.Value() > GUID_PACKET_ACKED ) == PendingAckGUIDs.Contains( It.Key() )"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xa85,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = *(int *)(*plVar6 + 8 + (longlong)(int)uVar12 * 0x18);
      if (iVar2 == -2) {
        *param_2 = *param_2 + 1;
      }
      else if (iVar2 == -1) {
        *param_1 = *param_1 + 1;
      }
      else {
        *param_3 = *param_3 + 1;
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar10 = (ulonglong)uStack_4c;
      uVar12 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_38->NetGUIDAckStatus).field_0x8 -
               *(int *)&(local_38->NetGUIDAckStatus).field_0x34;
      if (3 < uVar12) {
        uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar12) && (*(int *)&(local_38->NetGUIDAckStatus).field_0x48 < iVar11)) ||
         (iVar11 < *(int *)&(local_38->NetGUIDAckStatus).field_0x48)) {
        *(int *)&(local_38->NetGUIDAckStatus).field_0x48 = iVar11;
        TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                  *)local_38);
      }
    }
  }
  if (((this->PendingAckGUIDs).ArrayNum != *param_3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingAckGUIDs.Num() == PendingCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0xa96,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// GetNetTokenResolveContext @ 1480a6ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTokenResolveContext * __thiscall
UPackageMapClient::GetNetTokenResolveContext(UPackageMapClient *this)

{
  return &this->NetTokenResolveContext;
}

// GetNumExportBunches @ 1480a6c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UPackageMapClient::GetNumExportBunches(UPackageMapClient *this)

{
  return (this->ExportBunches).ArrayNum;
}

// GetNumQueuedBunchNetGUIDs @ 1480a6c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UPackageMapClient::GetNumQueuedBunchNetGUIDs(UPackageMapClient *this)

{
  return *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x8 -
         *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x34;
}

// GetObjectFromNetGUID @ 1480a7da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UPackageMapClient::GetObjectFromNetGUID(UPackageMapClient *this,FNetworkGUID *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if ((this->GuidCache).Object == (FNetGUIDCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = FNetGUIDCache::GetObjectFromNetGUID((this->GuidCache).Object,param_1,param_2);
  return pUVar3;
}

// GetPrivateStaticClass @ 1480aa0f0

UClass * __cdecl UPackageMapClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PackageMapClient",
               &Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton,
               StaticRegisterNativesUPackageMapClient,0x4b8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPackageMapClient>,
               InternalVTableHelperCtorCaller<UPackageMapClient>,local_res8,UPackageMap::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton;
}

// GetQueuedActorDelinquencyAnalytics @ 1480aa3d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetQueuedActorDelinquencyAnalytics * __thiscall
UPackageMapClient::GetQueuedActorDelinquencyAnalytics(UPackageMapClient *this)

{
  return &this->DelinquentQueuedActors;
}

// HandleUnAssignedObject @ 1480ac1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::HandleUnAssignedObject(UPackageMapClient *this,UObject *param_1)

{
  code *pcVar1;
  FNetworkGUID FVar2;
  bool bVar3;
  FString *pFVar4;
  FNetworkGUID_u_0 local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res8.Value = 0;
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x9e2,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FNetGUIDCache::GetOrAssignNetGUID
            ((this->GuidCache).Object,(UObject *)&local_res8,
             (TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_1);
  if ((CONCAT44(local_res8.ObjectId._4_4_,local_res8.Value) != 1) &&
     (bVar3 = ShouldSendFullPath(this,param_1,(FNetworkGUID *)&local_res8), bVar3)) {
    pFVar4 = ::FString::FString(&local_28,L"");
    FVar2.field0_0x0.ObjectId._4_4_ = local_res8.ObjectId._4_4_;
    FVar2.field0_0x0.Value = local_res8.Value;
    bVar3 = ExportNetGUID(this,FVar2,param_1,pFVar4,(UObject *)0x0);
    if ((!bVar3) && (5 < (byte)LogNetPackageMap._0_1_)) {
      if (param_1 != (UObject *)0x0) {
        local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res10.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res10,&local_38);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if ((param_1 != (UObject *)0x0) &&
         (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Initialize @ 1480b1480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::Initialize
          (UPackageMapClient *this,UNetConnection *param_1,TSharedPtr<FNetGUIDCache,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNetGUIDCache *pFVar2;
  FNetTokenStore *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FNetTokenStoreState *pFVar4;
  
  this->Connection = param_1;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->GuidCache).SharedReferenceCount.ReferenceController;
  (this->GuidCache).Object = pFVar2;
  (this->GuidCache).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->ExportNetGUIDCount = 0;
  this->OverrideAckState = &this->AckState;
  this_00 = (((param_1->Driver).field0_0x0.DebugPtr)->NetTokenStore).Ptr;
  (this->NetTokenResolveContext).NetTokenStore = this_00;
  if (this_00 != (FNetTokenStore *)0x0) {
    pFVar4 = UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState
                       (this_00,(param_1->ConnectionHandle).ParentConnectionId);
    (this->NetTokenResolveContext).RemoteNetTokenStoreState = pFVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// InternalLoadObject @ 1480b1540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall
UPackageMapClient::InternalLoadObject
          (UPackageMapClient *this,FArchive *param_1,UObject **param_2,int param_3)

{
  TSharedPtr<FNetGUIDCache,1> *this_00;
  code *pcVar1;
  UObjectBaseUtility *this_01;
  FName FVar2;
  FWeakObjectPtr FVar3;
  TConsoleVariableData<int> *pTVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  FNetGUIDCache *pFVar11;
  longlong lVar12;
  FNetworkGUID FVar13;
  size_t sVar14;
  UClass *pUVar15;
  UPackage *pUVar16;
  FNetworkGUID_u_0 FVar17;
  FString *pFVar18;
  UWorld *this_02;
  UObject *pUVar19;
  FNetGUIDCache *pFVar20;
  UObject *pUVar21;
  ForAnyElementType FVar22;
  undefined1 *puVar23;
  byte bVar24;
  FWeakObjectPtr *pFVar25;
  int iVar26;
  undefined4 in_register_0000008c;
  longlong *plVar27;
  FScriptContainerElement *pFVar28;
  char cVar29;
  FNetworkGUID_u_0 FVar30;
  bool bVar31;
  int in_stack_00000028;
  ulonglong uVar32;
  FExportFlags_u_0 local_3e8 [8];
  FNetworkGUID_u_0 local_3e0;
  FString local_3d8;
  uint local_3c8 [2];
  UObject *local_3c0;
  FWeakObjectPtr *local_3b8;
  FScriptContainerElement *local_3b0;
  FWeakObjectPtr local_3a8;
  FString local_3a0;
  FString local_390;
  FNetworkGUID_u_0 local_380;
  FNetworkGUID_u_0 local_378;
  FNetworkGUID_u_0 local_370;
  UObject *local_368;
  FNetGUIDCache *local_360;
  FString local_358;
  FString local_348;
  FNetworkGUID local_338;
  longlong *local_330;
  FWeakObjectPtr local_328;
  FWeakObjectPtr local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FPackagePath local_148;
  FString local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  plVar27 = (longlong *)CONCAT44(in_register_0000008c,param_3);
  FVar30.ObjectId = 0;
  iVar10 = 0;
  iVar26 = 0;
  local_3c8[0] = 0;
  if (0x10 < in_stack_00000028) {
    if (2 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    FArchiveState::SetError((FArchiveState *)param_2);
    *plVar27 = 0;
    *(undefined8 *)param_1 = 0;
    return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
  }
  local_3e0.ObjectId = 0;
  (**(code **)&(*param_2)[10].field_0x18)(param_2,&local_3e0);
  if (((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) || (local_3e0.ObjectId == 0)) {
LAB_1480b2d0b:
    *plVar27 = 0;
    goto LAB_1480b2d0f;
  }
  local_3b0 = (FScriptContainerElement *)&u_NULL;
  if (local_3e0.ObjectId != 1) {
    pcVar1 = *(code **)(this->_padding_ + 0x330);
    pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
    lVar12 = (*pcVar1)(this,&local_3e0,pFVar11->IsExportingNetGUIDBunch);
    *plVar27 = lVar12;
    if (6 < (byte)LogNetPackageMap._0_1_) {
      ::FString::PrintfImpl(&local_2e0,L"%llu");
      this_01 = (UObjectBaseUtility *)*plVar27;
      if (this_01 != (UObjectBaseUtility *)0x0) {
        UObjectBaseUtility::GetFullName(this_01,&local_138,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if ((this_01 != (UObjectBaseUtility *)0x0) &&
         (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar31 = false;
  cVar29 = '\0';
  local_3e8[0].Value = 0;
  this_00 = &this->GuidCache;
  if ((local_3e0.ObjectId == 1) ||
     (pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00),
     pFVar11->IsExportingNetGUIDBunch != false)) {
    pUVar21 = param_2[1];
    if (*(FExportFlags_u_0 **)&pUVar21->field_0x8 < *(FExportFlags_u_0 **)pUVar21 + 1) {
      (**(code **)&(*param_2)[9].field_0x20)(param_2,local_3e8,1);
    }
    else {
      local_3e8[0] = (FExportFlags_u_0)(*(FExportFlags_u_0 **)pUVar21)->Value;
      *(longlong *)pUVar21 = *(longlong *)pUVar21 + 1;
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) goto LAB_1480b2d0b;
  }
  pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
  if ((pFVar11->IsExportingNetGUIDBunch != false) &&
     ((local_3e0.ObjectId != 0 ||
      (local_330 = plVar27,
      bVar6 = `UPackageMapClient::InternalLoadObject'::__l60::<lambda_1>::operator()(&local_330),
      bVar6)))) {
    pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
    Emplace<FNetworkGUID_const_&>(&pFVar11->ImportedNetGuids,&local_338,(bool *)&local_3e0);
  }
  if ((local_3e8[0].Value & 1) == 0) {
    if (*plVar27 != 0) goto LAB_1480b2d0f;
    pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
    bVar31 = FNetGUIDCache::ShouldIgnoreWhenMissing(pFVar11,(FNetworkGUID *)&local_3e0);
    if ((bVar31) || ((byte)LogNetPackageMap._0_1_ < 3)) goto LAB_1480b2d0f;
    pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
    local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_390.Data.ArrayNum = 0;
    local_390.Data.ArrayMax = 0;
    if (local_3e0.ObjectId != 0) {
      if (*(int *)&(pFVar11->ObjectLookup).field_0x8 != *(int *)&(pFVar11->ObjectLookup).field_0x34)
      {
        puVar23 = *(undefined1 **)&(pFVar11->ObjectLookup).field_0x40;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = &(pFVar11->ObjectLookup).field_0x38;
        }
        iVar26 = *(int *)(puVar23 +
                         (ulonglong)
                         (*(int *)&(pFVar11->ObjectLookup).field_0x48 - 1U &
                         (int)((ulonglong)local_3e0 >> 0x20) * 0x17 + local_3e0.Value) * 4);
        if (iVar26 != -1) {
          lVar12 = *(longlong *)&pFVar11->ObjectLookup;
          do {
            if (*(ulonglong *)((longlong)iVar26 * 0x40 + lVar12) == local_3e0.ObjectId) {
              if (((iVar26 != -1) && (lVar12 = (longlong)iVar26 * 0x40 + lVar12, lVar12 != 0)) &&
                 (pFVar25 = (FWeakObjectPtr *)(lVar12 + 8), pFVar25 != (FWeakObjectPtr *)0x0)) {
                FNetGUIDCache::GenerateFullNetGUIDPath_r
                          (pFVar11,(FNetworkGUID *)(lVar12 + 0x10),&local_390);
                if (1 < local_390.Data.ArrayNum) {
                  ::FString::AppendChars(&local_390,L".",1);
                }
                bVar31 = FWeakObjectPtr::IsValid(pFVar25);
                if (bVar31) {
                  if (((*(longlong *)(lVar12 + 0x18) != 0) &&
                      (pUVar21 = FWeakObjectPtr::Get(pFVar25),
                      *(longlong *)&pUVar21->field_0x18 != *(longlong *)(lVar12 + 0x18))) &&
                     (2 < (byte)LogNetPackageMap._0_1_)) {
                    pUVar21 = FWeakObjectPtr::Get(pFVar25);
                    local_300.ComparisonIndex.Value = *(uint *)&pUVar21->field_0x18;
                    local_300.Number = *(uint *)&pUVar21->field_0x1c;
                    ::FName::ToString(&local_300,&local_1e8);
                    ::FName::ToString((FName *)(lVar12 + 0x18),&local_68);
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_68.Data.AllocatorInstance.Data);
                    }
                    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                    }
                  }
                  pUVar21 = FWeakObjectPtr::Get(pFVar25);
                  local_2f8.ComparisonIndex.Value = *(uint *)&pUVar21->field_0x18;
                  local_2f8.Number = *(uint *)&pUVar21->field_0x1c;
                  ::FName::ToString(&local_2f8,&local_1b8);
                  ::FString::PrintfImpl(&local_1c8,L"%llu");
                  ::FString::PrintfImpl(&local_1d8,L"[%s]%s");
                  if (local_1d8.Data.ArrayNum != 0) {
                    iVar10 = local_1d8.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (&local_390,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar10);
                  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                  }
                  local_58.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
                  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                    local_58.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
                  }
                }
                else if (*(longlong *)(lVar12 + 0x18) == 0) {
                  ::FString::PrintfImpl(&local_198,L"%llu");
                  ::FString::PrintfImpl(&local_1a8,L"[%s]EMPTY");
                  if (local_1a8.Data.ArrayNum != 0) {
                    iVar10 = local_1a8.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (&local_390,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar10);
                  local_58.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
                  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                    local_58.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
                  }
                }
                else {
                  ::FName::ToString((FName *)(lVar12 + 0x18),&local_58);
                  ::FString::PrintfImpl(&local_178,L"%llu");
                  ::FString::PrintfImpl(&local_188,L"[%s]%s");
                  if (local_188.Data.ArrayNum != 0) {
                    iVar10 = local_188.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (&local_390,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar10);
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                  }
                  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_178.Data.AllocatorInstance.Data);
                  }
                }
                goto LAB_1480b29b1;
              }
              break;
            }
            iVar26 = *(int *)((longlong)iVar26 * 0x40 + 0x38 + lVar12);
          } while (iVar26 != -1);
        }
      }
      ::FString::PrintfImpl(&local_2f0,L"%llu");
      ::FString::PrintfImpl(&local_168,L"[%s]NOT_IN_CACHE");
      if (local_168.Data.ArrayNum != 0) {
        iVar10 = local_168.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_390,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar10);
      local_58.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
      }
LAB_1480b29b1:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    FVar22.Data = local_390.Data.AllocatorInstance.Data;
LAB_1480b29de:
    if (FVar22.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar22.Data);
    }
LAB_1480b2d0f:
    *(FNetworkGUID_u_0 *)param_1 = local_3e0;
    return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
  }
  local_3c0 = (UObject *)0x0;
  uVar32 = (ulonglong)(in_stack_00000028 + 1);
  InternalLoadObject(this,(FArchive *)&local_378,param_2,(int)&local_3c0);
  local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.Data.ArrayNum = 0;
  local_3d8.Data.ArrayMax = 0;
  local_3c8[0] = 0;
  ::operator<<((FArchive *)param_2,&local_3d8);
  if ((local_3e8[0].Value & 4) != 0) {
    pUVar21 = param_2[1];
    if (*(uint **)&pUVar21->field_0x8 < *(uint **)pUVar21 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 1) == 0) {
        (**(code **)&(*param_2)[9].field_0x20)(param_2,local_3c8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_2,local_3c8);
      }
    }
    else {
      local_3c8[0] = **(uint **)pUVar21;
      *(longlong *)pUVar21 = *(longlong *)pUVar21 + 4;
    }
    if (5 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
  if (((local_3e0.ObjectId & 1) == 0) || (local_378.ObjectId != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
    if (1 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    *plVar27 = 0;
    goto LAB_1480b270e;
  }
  (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this->Connection,&local_3d8,1,uVar32);
  if (local_3e0.ObjectId != 1) {
    if ((UObject *)*plVar27 != (UObject *)0x0) {
      SanityCheckExport((this->GuidCache).Object,(UObject *)*plVar27,(FNetworkGUID *)&local_3e0,
                        &local_3d8,local_3c0,(FNetworkGUID *)&local_378,
                        (FExportFlags *)&local_3e8[0]._s_0);
      goto LAB_1480b270e;
    }
    bVar31 = IsNetGUIDAuthority(this);
    if (!bVar31) {
      bVar24 = local_3e8[0].Value >> 1;
      pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
      FNetGUIDCache::RegisterNetGUIDFromPath_Client
                (pFVar11,(FNetworkGUID *)&local_3e0,&local_3d8,(FNetworkGUID *)&local_378,
                 local_3c8[0],(bool)(local_3e8[0].Value >> 1 & 1),(bool)(bVar24 & 1));
      pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
      pFVar20 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
      pUVar21 = FNetGUIDCache::GetObjectFromNetGUID
                          (pFVar11,(FNetworkGUID *)&local_3e0,pFVar20->IsExportingNetGUIDBunch);
      *plVar27 = (longlong)pUVar21;
      FVar22.Data = local_3d8.Data.AllocatorInstance.Data;
      if (pUVar21 == (UObject *)0x0) {
        pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
        bVar31 = FNetGUIDCache::ShouldIgnoreWhenMissing(pFVar11,(FNetworkGUID *)&local_3e0);
        FVar22.Data = local_3d8.Data.AllocatorInstance.Data;
        if ((!bVar31) && (2 < (byte)LogNetPackageMap._0_1_)) {
          ::FString::PrintfImpl(&local_1f8,L"%llu");
          bVar31 = local_3c0 != (UObject *)0x0;
          if (bVar31) {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)local_3c0,&local_78,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if ((bVar31) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          FVar22.Data = local_3d8.Data.AllocatorInstance.Data;
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            FVar22.Data = local_3d8.Data.AllocatorInstance.Data;
          }
        }
      }
      goto LAB_1480b29de;
    }
    if ((byte)LogNetPackageMap._0_1_ < 3) goto LAB_1480b270e;
    bVar31 = local_3c0 != (UObject *)0x0;
    if (bVar31) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_3c0,&local_88,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (!bVar31) goto LAB_1480b270e;
    goto LAB_1480b26ff;
  }
  bVar7 = IsNetGUIDAuthority(this);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsNetGUIDAuthority()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x4c0,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    FVar13.field0_0x0 = (FNetworkGUID_u_0)(*pcVar1)();
    return (FNetworkGUID)FVar13.field0_0x0;
  }
  pUVar21 = local_3c0;
  if (((bVar6) || (local_378.ObjectId == 0)) || (local_3c0 != (UObject *)0x0)) {
    if (local_3d8.Data.ArrayNum == 0) {
      local_2b8 = (FScriptContainerElement *)0x15060d16c;
LAB_1480b198c:
      sVar14 = wcslen((wchar_t *)local_2b8);
      iStack_2b0 = (int)sVar14;
    }
    else {
      local_2b8 = local_3d8.Data.AllocatorInstance.Data;
      iStack_2b0 = iVar26;
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1480b198c;
    }
    pUVar15 = Z_Construct_UClass_UObject_NoRegister();
    local_128._12_4_ = uStack_2ac;
    local_128.Size = iStack_2b0;
    local_128.DataPtr = (wchar_t *)local_2b8;
    pUVar16 = (UPackage *)StaticFindObject(pUVar15,pUVar21,&local_128,None);
    *plVar27 = (longlong)pUVar16;
    if (pUVar16 == (UPackage *)0x0) {
      if (bVar6) {
        local_158 = local_3d8.Data.AllocatorInstance.Data;
        iStack_150 = iVar26;
        if (local_3d8.Data.ArrayNum != 0) {
          iStack_150 = local_3d8.Data.ArrayNum + -1;
        }
        local_118._12_4_ = uStack_14c;
        local_118.Size = iStack_150;
        local_118.DataPtr = (wchar_t *)local_3d8.Data.AllocatorInstance.Data;
        FPackagePath::FromPackageNameChecked(&local_148,&local_118);
        pUVar16 = LoadPackage((UPackage *)0x0,&local_148,0,(FArchive *)0x0,
                              (FLinkerInstancingContext *)0x0,(FPackagePath *)0x0);
        *plVar27 = (longlong)pUVar16;
      }
      if (pUVar16 != (UPackage *)0x0) goto LAB_1480b1aad;
      if (2 < (byte)LogNetPackageMap._0_1_) {
        bVar31 = local_3c0 != (UObject *)0x0;
        if (bVar31) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_3c0,&local_108,(UObject *)0x0)
          ;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        local_88.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
        if (bVar31) goto LAB_1480b26ff;
      }
      goto LAB_1480b270e;
    }
LAB_1480b1aad:
    if (((uint)pUVar16->_padding_ >> 0x1e & 1) == 0) {
      if ((local_3c8[0] != 0) &&
         (pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache),
         pTVar4 = CVarIgnoreNetworkChecksumMismatch.Ref, pFVar11->NetworkChecksumMode == SaveAndUse)
         ) {
        bVar7 = IsInParallelGameThread();
        if (bVar7) {
LAB_1480b1b71:
          FVar17.ObjectId = FVar30.ObjectId;
        }
        else {
          bVar7 = IsInGameThread();
          FVar17.ObjectId = 4;
          if (bVar7) goto LAB_1480b1b71;
        }
        if (*(int *)((longlong)pTVar4->ShadowedValue + FVar17.ObjectId) == 0) {
          pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
          pUVar15 = (UClass *)*plVar27;
          if (pUVar15 == (UClass *)0x0) {
            uVar9 = 0;
          }
          else {
            bVar7 = UObjectBaseUtility::IsA<UClass>((UObjectBaseUtility *)pUVar15);
            if (!bVar7) {
              pUVar15 = (UClass *)pUVar15->_padding_;
            }
            uVar9 = FNetGUIDCache::GetClassNetworkChecksum(pFVar11,pUVar15);
          }
          if (uVar9 != local_3c8[0]) {
            if (local_3c0 != (UObject *)0x0) {
              bVar31 = true;
              pFVar18 = UObjectBaseUtility::GetPathName
                                  ((UObjectBaseUtility *)local_3c0,&local_e8,(UObject *)0x0);
              if ((pFVar18->Data).ArrayNum == 0) {
                local_3b0 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_3b0 = (pFVar18->Data).AllocatorInstance.Data;
              }
            }
            ::FString::PrintfImpl
                      (&local_358,
                       L"UPackageMapClient::InternalLoadObject: Default object package network checksum mismatch! ObjectName: %s, ObjOuter: %s, GUID1: %u, GUID2: %u "
                      );
            if ((bVar31) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
               ) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (1 < (byte)LogNetPackageMap._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
            }
            *plVar27 = 0;
            pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
            BroadcastNetFailure(pFVar11->Driver,NetChecksumMismatch,&local_358);
            *(FNetworkGUID_u_0 *)param_1 = local_3e0;
            if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
            goto LAB_1480b2718;
          }
        }
      }
      if (!bVar6) {
LAB_1480b1d5e:
        pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
        pUVar21 = (UObject *)*plVar27;
        local_360 = pFVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar21);
        }
        local_3a8.ObjectIndex = 0;
        local_3a8.ObjectSerialNumber = 0;
        local_368 = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar21 == (UObject *)0x0)) {
          FWeakObjectPtr::operator=(&local_3a8,(FObjectPtr)&local_368);
          if (pUVar21 != (UObject *)0x0) goto LAB_1480b1dd2;
        }
        else {
          UE::GC::MarkAsReachable(pUVar21);
          FWeakObjectPtr::operator=(&local_3a8,(FObjectPtr)&local_368);
LAB_1480b1dd2:
          FVar5 = local_3a8;
          local_328 = local_3a8;
          uVar9 = local_3a8.ObjectSerialNumber;
          iVar10 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                             ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                               *)&pFVar11->NetGUIDLookup,uVar9 ^ local_3a8.ObjectIndex,
                              (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_328);
          if ((((iVar10 != -1) &&
               (lVar12 = *(longlong *)&pFVar11->NetGUIDLookup + (longlong)iVar10 * 0x18, lVar12 != 0
               )) && (*(longlong *)(lVar12 + 8) != 0)) ||
             ((cVar8 = (**(code **)(*(longlong *)pUVar21 + 0x208))(pUVar21), cVar8 != '\0' ||
              (cVar8 = (**(code **)(*(longlong *)pUVar21 + 0x210))(pUVar21), cVar8 != '\0')))) {
            cVar8 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11);
            local_320 = FVar5;
            iVar10 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                               ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                                 *)&pFVar11->NetGUIDLookup,uVar9 ^ local_3a8.ObjectIndex,
                                (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_320);
            if ((iVar10 == -1) ||
               ((lVar12 = *(longlong *)&pFVar11->NetGUIDLookup + (longlong)iVar10 * 0x18,
                lVar12 == 0 ||
                (FVar30 = (FNetworkGUID_u_0)((FNetworkGUID_u_0 *)(lVar12 + 8))->ObjectId,
                FVar30.ObjectId == 0)))) goto LAB_1480b2470;
            if (*(int *)&(pFVar11->ObjectLookup).field_0x8 !=
                *(int *)&(pFVar11->ObjectLookup).field_0x34) {
              puVar23 = *(undefined1 **)&(pFVar11->ObjectLookup).field_0x40;
              if (puVar23 == (undefined1 *)0x0) {
                puVar23 = &(pFVar11->ObjectLookup).field_0x38;
              }
              iVar10 = *(int *)(puVar23 +
                               ((ulonglong)(*(int *)&(pFVar11->ObjectLookup).field_0x48 - 1) &
                               (FVar30.ObjectId >> 0x20) * 0x17 + FVar30.ObjectId) * 4);
              if (iVar10 != -1) {
                lVar12 = *(longlong *)&pFVar11->ObjectLookup;
                do {
                  if (*(ulonglong *)((longlong)iVar10 * 0x40 + lVar12) == FVar30.ObjectId) {
                    if ((((iVar10 != -1) && (lVar12 = (longlong)iVar10 * 0x40 + lVar12, lVar12 != 0)
                         ) && (pFVar28 = (FScriptContainerElement *)(lVar12 + 8),
                              pFVar28 != (FScriptContainerElement *)0x0)) &&
                       (0.0 < *(double *)(lVar12 + 0x28))) {
                      if ((byte)LogNetPackageMap._0_1_ < 3) goto LAB_1480b22af;
                      local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_3a0.Data.ArrayNum = 0;
                      local_3a0.Data.ArrayMax = 0;
                      local_3b0 = pFVar28;
                      if (*(int *)&(pFVar11->ObjectLookup).field_0x8 ==
                          *(int *)&(pFVar11->ObjectLookup).field_0x34) goto LAB_1480b2038;
                      puVar23 = *(undefined1 **)&(pFVar11->ObjectLookup).field_0x40;
                      if (puVar23 == (undefined1 *)0x0) {
                        puVar23 = &(pFVar11->ObjectLookup).field_0x38;
                      }
                      iVar10 = *(int *)(puVar23 +
                                       ((ulonglong)(*(int *)&(pFVar11->ObjectLookup).field_0x48 - 1)
                                       & (FVar30.ObjectId >> 0x20) * 0x17 + FVar30.ObjectId) * 4);
                      if (iVar10 == -1) goto LAB_1480b2038;
                      lVar12 = *(longlong *)&pFVar11->ObjectLookup;
                      goto LAB_1480b2020;
                    }
                    break;
                  }
                  iVar10 = *(int *)((longlong)iVar10 * 0x40 + 0x38 + lVar12);
                } while (iVar10 != -1);
              }
            }
            goto LAB_1480b2526;
          }
          this_02 = (UWorld *)(**(code **)(*(longlong *)pUVar21 + 0x180))(pUVar21);
          if (((this_02 == (UWorld *)0x0) ||
              (bVar31 = UWorld::IsRecordingClientReplay(this_02), !bVar31)) &&
             (2 < (byte)LogNetPackageMap._0_1_)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar21,&local_c8,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
        }
        if (5 < (byte)LogNetPackageMap._0_1_) {
          if (pUVar21 == (UObject *)0x0) {
            ::FString::FString(&local_348,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar21,&local_348,(UObject *)0x0)
            ;
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1480b2526;
      }
      lVar12 = *plVar27;
      if (lVar12 != 0) {
        pUVar15 = Z_Construct_UClass_UPackage_NoRegister();
        lVar12 = *(longlong *)(lVar12 + 0x10);
        iVar10 = (int)pUVar15->_padding_;
        if ((iVar10 <= *(int *)(lVar12 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar15->_padding_)) goto LAB_1480b1d5e;
      }
      if ((byte)LogNetPackageMap._0_1_ < 2) goto LAB_1480b1962;
      bVar31 = local_3c0 != (UObject *)0x0;
      if (bVar31) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_3c0,&local_d8,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      local_2d0.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogNetPackageMap._0_1_ < 3) goto LAB_1480b1962;
      bVar31 = local_3c0 != (UObject *)0x0;
      if (bVar31) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_3c0,&local_f8,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      local_2d0.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    }
    if (bVar31) goto LAB_1480b1958;
  }
  else if (4 < (byte)LogNetPackageMap._0_1_) {
    ::FString::PrintfImpl(&local_2d0,L"%llu");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
LAB_1480b1958:
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
LAB_1480b1962:
  *plVar27 = 0;
  goto LAB_1480b270e;
  while (iVar10 = *(int *)((longlong)iVar10 * 0x40 + 0x38 + lVar12), iVar10 != -1) {
LAB_1480b2020:
    if (*(ulonglong *)((longlong)iVar10 * 0x40 + lVar12) == FVar30.ObjectId) {
      if (((iVar10 != -1) && (lVar12 = (longlong)iVar10 * 0x40 + lVar12, lVar12 != 0)) &&
         (local_3b8 = (FWeakObjectPtr *)(lVar12 + 8), local_3b8 != (FWeakObjectPtr *)0x0)) {
        FNetGUIDCache::GenerateFullNetGUIDPath_r(pFVar11,(FNetworkGUID *)(lVar12 + 0x10),&local_3a0)
        ;
        if (1 < local_3a0.Data.ArrayNum) {
          ::FString::AppendChars(&local_3a0,L".",1);
        }
        bVar31 = FWeakObjectPtr::IsValid(local_3b8);
        pFVar25 = local_3b8;
        FVar2 = *(FName *)(local_3b8 + 2);
        if (bVar31) {
          if (((FVar2 != (FName)0x0) &&
              (pUVar19 = FWeakObjectPtr::Get(local_3b8),
              FVar3.ObjectIndex = *(int *)&pUVar19->field_0x18,
              FVar3.ObjectSerialNumber = *(int *)&pUVar19->field_0x1c, FVar3 != pFVar25[2])) &&
             (2 < (byte)LogNetPackageMap._0_1_)) {
            pUVar19 = FWeakObjectPtr::Get(pFVar25);
            local_318.ComparisonIndex.Value = *(uint *)&pUVar19->field_0x18;
            local_318.Number = *(uint *)&pUVar19->field_0x1c;
            ::FName::ToString(&local_318,&local_2a8);
            local_3b8 = (FWeakObjectPtr *)L"";
            if (local_2a8.Data.ArrayNum != 0) {
              local_3b8 = (FWeakObjectPtr *)local_2a8.Data.AllocatorInstance.Data;
            }
            ::FName::ToString((FName *)(pFVar25 + 2),&local_b8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if ((FWeakObjectPtr *)local_2a8.Data.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
          }
          pUVar19 = FWeakObjectPtr::Get(pFVar25);
          local_310.ComparisonIndex.Value = *(uint *)&pUVar19->field_0x18;
          local_310.Number = *(uint *)&pUVar19->field_0x1c;
          ::FName::ToString(&local_310,&local_278);
          ::FString::PrintfImpl(&local_288,L"%llu");
          ::FString::PrintfImpl(&local_298,L"[%s]%s");
          if (local_298.Data.ArrayNum != 0) {
            iVar26 = local_298.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_3a0,(wchar_t *)local_298.Data.AllocatorInstance.Data,iVar26)
          ;
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          pFVar11 = local_360;
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
            pFVar11 = local_360;
          }
        }
        else if (FVar2 == (FName)0x0) {
          ::FString::PrintfImpl(&local_258,L"%llu");
          ::FString::PrintfImpl(&local_268,L"[%s]EMPTY");
          if (local_268.Data.ArrayNum != 0) {
            iVar26 = local_268.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_3a0,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar26)
          ;
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
        }
        else {
          pFVar18 = ::FName::ToString((FName *)(local_3b8 + 2),&local_a8);
          if ((pFVar18->Data).ArrayNum == 0) {
            local_3b8 = (FWeakObjectPtr *)0x15060d16c;
          }
          else {
            local_3b8 = (FWeakObjectPtr *)(pFVar18->Data).AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_238,L"%llu");
          ::FString::PrintfImpl(&local_248,L"[%s]%s");
          if (local_248.Data.ArrayNum != 0) {
            iVar26 = local_248.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_3a0,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar26)
          ;
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1480b227d;
      }
      break;
    }
  }
LAB_1480b2038:
  ::FString::PrintfImpl(&local_218,L"%llu");
  ::FString::PrintfImpl(&local_228,L"[%s]NOT_IN_CACHE");
  if (local_228.Data.ArrayNum != 0) {
    iVar26 = local_228.Data.ArrayNum + -1;
  }
  ::FString::AppendChars(&local_3a0,(wchar_t *)local_228.Data.AllocatorInstance.Data,iVar26);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
LAB_1480b227d:
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  pFVar28 = local_3b0;
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    pFVar28 = local_3b0;
  }
LAB_1480b22af:
  if ((cVar8 == '\0') && (GbAllowClientRemapCacheObject != false)) {
    *(undefined8 *)(pFVar28 + 0x20) = 0;
  }
  else {
    TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
    ::Remove((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
              *)&pFVar11->NetGUIDLookup,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)FVar5);
LAB_1480b2470:
    if (cVar8 == '\0') {
      if (5 < (byte)LogNetPackageMap._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar21,&local_98,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      FVar30.ObjectId = 1;
    }
    else {
      (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11,&local_380,pUVar21);
      FVar30 = local_380;
    }
  }
LAB_1480b2526:
  local_380 = FVar30;
  pUVar21 = (UObject *)*plVar27;
  local_3e0 = local_380;
  if ((pUVar21 == (UObject *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Obj != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                          ,0x9e2,L""), bVar31)) {
    pcVar1 = (code *)swi(3);
    FVar13.field0_0x0 = (FNetworkGUID_u_0)(*pcVar1)();
    return (FNetworkGUID)FVar13.field0_0x0;
  }
  pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
  FNetGUIDCache::GetOrAssignNetGUID
            (pFVar11,(UObject *)&local_370,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)pUVar21);
  if ((local_370.ObjectId != 1) &&
     (bVar31 = ShouldSendFullPath(this,pUVar21,(FNetworkGUID *)&local_370), bVar31)) {
    pFVar18 = ::FString::FString(&local_48,L"");
    bVar31 = ExportNetGUID(this,(FNetworkGUID)local_370,pUVar21,pFVar18,(UObject *)0x0);
    if ((!bVar31) && (5 < (byte)LogNetPackageMap._0_1_)) {
      if (pUVar21 != (UObject *)0x0) {
        local_308.ComparisonIndex.Value = *(uint *)&pUVar21->field_0x18;
        local_308.Number = *(uint *)&pUVar21->field_0x1c;
        cVar29 = -0x80;
        ::FName::ToString(&local_308,&local_208);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      local_88.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
      if (cVar29 < '\0') {
LAB_1480b26ff:
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_1480b270e:
  *(FNetworkGUID_u_0 *)param_1 = local_3e0;
LAB_1480b2718:
  if (local_3d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
  }
  FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// InternalWriteObject @ 1480b2d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::InternalWriteObject
          (UPackageMapClient *this,FArchive *param_1,FNetworkGUID param_2,UObject *param_3,
          FString *param_4,UObject *param_5)

{
  TSharedPtr<FNetGUIDCache,1> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  UPackage *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FString *pFVar11;
  TTuple<FName,FName> *pTVar12;
  FNetGUIDCache *pFVar13;
  UClass *pUVar14;
  FName *pFVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  char cVar20;
  longlong lVar21;
  int iVar22;
  byte bVar23;
  byte local_res10 [8];
  FNetworkGUID_u_0 local_res18;
  uint local_e8 [2];
  FName local_e0;
  FNetworkGUID_u_0 local_d8;
  undefined1 local_d0 [4];
  FName local_cc;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FName local_68;
  FString local_60;
  FString local_50;
  
  local_res18 = param_2.field0_0x0;
  if (((param_1->field_0x28 & 4) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x382,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->GuidCache;
  if ((this_00->Object == (FNetGUIDCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar13 = this_00->Object;
  lVar21 = 0;
  if ((local_res18.ObjectId == 0) || ((local_res18.ObjectId & 1) == 0)) {
LAB_1480b2e09:
    cVar20 = '\x01';
  }
  else {
    if (param_3 == (UObject *)0x0) {
      if (local_res18.ObjectId != 1) {
        if (*(int *)&(pFVar13->ObjectLookup).field_0x8 !=
            *(int *)&(pFVar13->ObjectLookup).field_0x34) {
          puVar18 = *(undefined1 **)&(pFVar13->ObjectLookup).field_0x40;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = &(pFVar13->ObjectLookup).field_0x38;
          }
          iVar22 = *(int *)(puVar18 +
                           (ulonglong)
                           (*(int *)&(pFVar13->ObjectLookup).field_0x48 - 1U &
                           (int)((ulonglong)local_res18 >> 0x20) * 0x17 + local_res18.Value) * 4);
          if (iVar22 != -1) {
            lVar8 = *(longlong *)&pFVar13->ObjectLookup;
            do {
              if (*(ulong64 *)((longlong)iVar22 * 0x40 + lVar8) == local_res18.ObjectId) {
                if ((iVar22 != -1) && (lVar8 = (longlong)iVar22 * 0x40 + lVar8, lVar8 != 0)) {
                  lVar21 = lVar8 + 8;
                }
                break;
              }
              iVar22 = *(int *)((longlong)iVar22 * 0x40 + 0x38 + lVar8);
            } while (iVar22 != -1);
          }
        }
        if ((lVar21 != 0) && ((*(byte *)(lVar21 + 0x28) & 1) != 0)) goto LAB_1480b2e09;
      }
    }
    else {
      pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_3);
      if (((uint)pUVar7->PackageFlagsPrivate >> 0x11 & 1) != 0) goto LAB_1480b2e09;
    }
    cVar20 = '\0';
  }
  if ((this_00->Object == (FNetGUIDCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FNetGUIDCache::ShouldAsyncLoad(this_00->Object);
  if (bVar3) {
    if ((this_00->Object == (FNetGUIDCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(this_00->Object->_padding_ + 8))();
    if (cVar4 != '\0') {
      if ((this_00->Object == (FNetGUIDCache *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this_00->Object->IsExportingNetGUIDBunch == false) && (cVar20 == '\0')) {
        TArray<FNetworkGUID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNetworkGUID_const_&>
                  (&this->MustBeMappedGuidsInLastBunch,(FNetworkGUID *)&local_res18);
      }
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1,&local_res18);
  if (local_res18.ObjectId == 0) {
    pFVar17 = (param_4->Data).AllocatorInstance.Data;
    goto LAB_1480b36c1;
  }
  local_res10[0] = 0;
  if ((this_00->Object == (FNetGUIDCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10[0] = -(this_00->Object->NetworkChecksumMode != None) & 4U | local_res10[0] & 0xfb;
  if (local_res18.ObjectId == 1) {
    bVar3 = IsNetGUIDAuthority(this);
    if ((bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsNetGUIDAuthority()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0x3a0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10[0] = local_res10[0] | 1;
LAB_1480b30c5:
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  else {
    if ((this_00->Object == (FNetGUIDCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this_00->Object->IsExportingNetGUIDBunch != false) {
      bVar3 = IsNetGUIDAuthority(this);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsNetGUIDAuthority()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x3a8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_3 == (UObject *)0x0) {
        bVar23 = 1 < (param_4->Data).ArrayNum;
        bVar5 = local_res10[0] & 0xfe;
      }
      else {
        bVar5 = ShouldSendFullPath(this,param_3,(FNetworkGUID *)&local_res18);
        bVar23 = local_res10[0] & 0xfe;
      }
      local_res10[0] = cVar20 * '\x02' | (bVar23 | bVar5) & 0xfd;
      goto LAB_1480b30c5;
    }
  }
  if ((local_res10[0] & 1) != 0) {
    if (param_3 == (UObject *)0x0) {
      if (param_5 == (UObject *)0x0) {
        ::FString::FString(&local_a8,L"None");
        ::FString::PrintfImpl(&local_b8,L"%llu");
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOuter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0x3c5,
                           L"ObjectOuter is null. NetGuid: %s. Object: %s. ObjectPathName: %s");
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((param_4->Data).ArrayNum < 2) {
        ::FString::FString(&local_88,L"None");
        ::FString::PrintfImpl(&local_98,L"%llu");
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ObjectPathName.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0x3c6,L"ObjectPathName is empty. NetGuid: %s. Object: %s");
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else {
      if ((param_5 != (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectOuter == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x3bd,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((1 < (param_4->Data).ArrayNum) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectPathName.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x3be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_cc.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_cc.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_cc,&local_78);
      ::FString::operator=(param_4,&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      param_5 = *(UObject **)&param_3->field_0x20;
    }
    if ((((local_res18.ObjectId & 1) == 0) || (param_3 == (UObject *)0x0)) ||
       (*(longlong *)&param_3->field_0x20 != 0)) {
      bVar3 = false;
      if (param_3 != (UObject *)0x0) goto LAB_1480b330e;
LAB_1480b3334:
      pUVar10 = (UObject *)0x0;
    }
    else {
      bVar3 = true;
LAB_1480b330e:
      pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
      iVar22 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar22) ||
         (pUVar10 = param_3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
         &pUVar9->_padding_)) goto LAB_1480b3334;
    }
    if ((bVar3 != (pUVar10 != (UObject *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsPackage == (Cast<UPackage>(Object) != nullptr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0x3cb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this_00->Object == (FNetGUIDCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FNetGUIDCache::GetOrAssignNetGUID
              (this_00->Object,(UObject *)&local_d8,
               (TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_5);
    pFVar11 = ::FString::FString(&local_50,L"");
    InternalWriteObject(this,param_1,(FNetworkGUID)local_d8,param_5,pFVar11,(UObject *)0x0);
    if ((this->Connection->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0) {
      if ((param_4->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_c0,pwVar19);
      pTVar12 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)&((this->Connection->Driver).field0_0x0.DebugPtr)->RenamedStartupActors,
                       local_c0);
      if (pTVar12 == (TTuple<FName,FName> *)0x0) {
        local_e0.ComparisonIndex.Value = 0;
        local_e0.Number = 0;
      }
      else {
        local_e0.ComparisonIndex.Value = *(uint *)&pTVar12->field_0x8;
        local_e0.Number = *(uint *)&pTVar12->field_0xc;
      }
      if (local_e0 != (FName)0x0) {
        pFVar11 = ::FName::ToString(&local_e0,&local_60);
        ::FString::operator=(param_4,pFVar11);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
    }
    (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this->Connection,param_4,0);
    ::operator<<(param_1,param_4);
    local_e8[0] = 0;
    if ((local_res10[0] & 4) != 0) {
      pFVar13 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
      uVar6 = 0;
      if (param_3 != (UObject *)0x0) {
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        pUVar9 = *(UClass **)&param_3->field_0x10;
        iVar22 = (int)pUVar14->_padding_;
        if ((iVar22 <= (int)pUVar9->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar22 * 8) ==
            &pUVar14->_padding_)) {
          pUVar9 = (UClass *)param_3;
        }
        uVar6 = FNetGUIDCache::GetClassNetworkChecksum(pFVar13,pUVar9);
      }
      local_e8[0] = uVar6;
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_e8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_e8);
        }
      }
      else {
        local_e8[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
    }
    if ((this_00->Object == (FNetGUIDCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar13 = this_00->Object;
    if (*(int *)&(pFVar13->ObjectLookup).field_0x8 != *(int *)&(pFVar13->ObjectLookup).field_0x34) {
      puVar18 = *(undefined1 **)&(pFVar13->ObjectLookup).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(pFVar13->ObjectLookup).field_0x38;
      }
      iVar22 = *(int *)(puVar18 +
                       (ulonglong)
                       (*(int *)&(pFVar13->ObjectLookup).field_0x48 - 1U &
                       (int)((ulonglong)local_res18 >> 0x20) * 0x17 + local_res18.Value) * 4);
      if (iVar22 != -1) {
        lVar21 = *(longlong *)&pFVar13->ObjectLookup;
        do {
          if (*(ulong64 *)((longlong)iVar22 * 0x40 + lVar21) == local_res18.ObjectId) {
            if (((iVar22 != -1) && (lVar21 = (longlong)iVar22 * 0x40 + lVar21, lVar21 != 0)) &&
               (lVar21 != -8)) {
              if (*(longlong *)(lVar21 + 0x18) == 0) {
                if ((param_4->Data).ArrayNum == 0) {
                  pwVar19 = L"";
                }
                else {
                  pwVar19 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
                }
                pFVar15 = ::FName::FName(&local_68,pwVar19);
                *(FName *)(lVar21 + 0x18) = *pFVar15;
              }
              *(FNetworkGUID_u_0 *)(lVar21 + 0x10) = local_d8;
              bVar23 = (local_res10[0] >> 1 ^ *(byte *)(lVar21 + 0x30)) & 1 ^
                       *(byte *)(lVar21 + 0x30);
              *(byte *)(lVar21 + 0x30) = bVar23;
              *(byte *)(lVar21 + 0x30) = bVar23 & 0xfd | local_res10[0] & 2;
              *(uint *)(lVar21 + 0x20) = local_e8[0];
            }
            break;
          }
          iVar22 = *(int *)((longlong)iVar22 * 0x40 + 0x38 + lVar21);
        } while (iVar22 != -1);
      }
    }
    if ((this_00->Object == (FNetGUIDCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this_00->Object->IsExportingNetGUIDBunch != false) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Emplace<FNetworkGUID_const_&>
                (&this->CurrentExportNetGUIDs,(FNetworkGUID *)local_d0,(bool *)&local_res18);
      piVar16 = TMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>
                ::FindOrAddImpl<FNetworkGUID_const_&>
                          ((TMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>
                            *)&this->NetGUIDExportCountMap,
                           (int)((ulonglong)local_res18 >> 0x20) * 0x17 + local_res18.Value,
                           (FNetworkGUID *)&local_res18);
      *piVar16 = *piVar16 + 1;
    }
  }
  pFVar17 = (param_4->Data).AllocatorInstance.Data;
LAB_1480b36c1:
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  return;
}

// IsGUIDBroken @ 1480b38c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::IsGUIDBroken(UPackageMapClient *this,FNetworkGUID *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNetGuidCacheObject *pFVar4;
  
  if ((this->GuidCache).Object == (FNetGUIDCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (((param_1->field0_0x0).ObjectId != 0) && ((param_1->field0_0x0).ObjectId != 1)) {
    pFVar4 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
             ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                     *)&((this->GuidCache).Object)->ObjectLookup,param_1);
    if (pFVar4 != (FNetGuidCacheObject *)0x0) {
      return pFVar4->bIsBroken;
    }
    return param_2;
  }
  return false;
}

// IsGUIDPending @ 1480b3a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPackageMapClient::IsGUIDPending(UPackageMapClient *this,FNetworkGUID *param_1)

{
  FNetGUIDCache *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulong64 *puVar7;
  undefined1 *puVar8;
  ulong64 uVar9;
  ulong64 *puVar10;
  int iVar11;
  
  uVar9 = (param_1->field0_0x0).ObjectId;
  if (uVar9 == 0) {
    return false;
  }
  do {
    iVar6 = (int)(uVar9 >> 0x20);
    if (*(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x8 !=
        *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x34) {
      puVar2 = *(undefined1 **)&(this->CurrentQueuedBunchNetGUIDs).field_0x40;
      puVar8 = &(this->CurrentQueuedBunchNetGUIDs).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar11 = *(int *)(puVar8 + (ulonglong)
                                 ((int)uVar9 + iVar6 * 0x17 &
                                 *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x48 - 1U) * 4);
      if (iVar11 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)&this->CurrentQueuedBunchNetGUIDs + (longlong)iVar11 * 0x18)
              == uVar9) {
            if (iVar11 != -1) {
              return true;
            }
            break;
          }
          iVar11 = *(int *)(*(longlong *)&this->CurrentQueuedBunchNetGUIDs + 0x10 +
                           (longlong)iVar11 * 0x18);
        } while (iVar11 != -1);
      }
    }
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this->GuidCache).Object;
    if (*(int *)&(pFVar1->ObjectLookup).field_0x8 == *(int *)&(pFVar1->ObjectLookup).field_0x34) {
      return false;
    }
    puVar2 = *(undefined1 **)&(pFVar1->ObjectLookup).field_0x40;
    puVar8 = &(pFVar1->ObjectLookup).field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar8 = puVar2;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar1->ObjectLookup).field_0x48 - 1U &
                              (int)uVar9 + iVar6 * 0x17) * 4);
    if (iVar6 == -1) {
      return false;
    }
    while (puVar7 = (ulong64 *)((longlong)iVar6 * 0x40 + *(longlong *)&pFVar1->ObjectLookup),
          *puVar7 != uVar9) {
      iVar6 = (int)puVar7[7];
      if (iVar6 == -1) {
        return false;
      }
    }
    puVar10 = puVar7 + 1;
    if (puVar7 == (ulong64 *)0x0) {
      puVar10 = (ulong64 *)0x0;
    }
    if (puVar10 == (ulong64 *)0x0) {
      return false;
    }
    if ((puVar10[5] & 4) != 0) {
      return true;
    }
    uVar9 = puVar10[1];
    if (uVar9 == 0) {
      return false;
    }
  } while( true );
}

// IsNetGUIDAuthority @ 1480b3cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPackageMapClient::IsNetGUIDAuthority(UPackageMapClient *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->GuidCache).Object == (FNetGUIDCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001480b3d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(((this->GuidCache).Object)->_padding_ + 8))();
  return (bool)uVar3;
}

// IsUsingRemoteObjectReferences @ 1480b4160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPackageMapClient::IsUsingRemoteObjectReferences(UPackageMapClient *this)

{
  UNetDriver *pUVar1;
  
  if ((this->Connection != (UNetConnection *)0x0) &&
     (pUVar1 = (this->Connection->Driver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) {
    return pUVar1->bUseRemoteObjectRefs;
  }
  return false;
}

// LogDebugInfo @ 1480b7890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::LogDebugInfo(UPackageMapClient *this,FOutputDevice *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FPackageMapAckState *pFVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  UObject *this_00;
  ulonglong uVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *pTVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  bool bVar17;
  FString local_e8;
  FString local_d8;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar17 = false;
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar13 = &((this->GuidCache).Object)->NetGUIDLookup;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              *)pTVar13);
  local_90 = 0;
  stack0xffffffffffffff48 = local_68._16_16_;
  local_c8 = (longlong *)local_68._0_8_;
  auStack_c0._0_8_ = local_68._8_8_;
  local_a8 = local_48;
  pTStack_a0 = pTStack_40;
  uVar10 = local_68._24_8_ >> 0x20;
  if (*(int *)(local_68._16_8_ + 0x18) <= (int)local_68._28_4_) {
    return;
  }
  iVar16 = 1;
  uVar14 = local_68._28_4_;
  local_98 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              *)pTVar13;
LAB_1480b7961:
  plVar7 = local_c8;
  lVar2 = *(longlong *)(*local_c8 + 8 + (longlong)(int)uVar10 * 0x18);
  ::FString::FString(&local_e8,L"Unused");
  pFVar3 = this->OverrideAckState;
  if (*(int *)&(pFVar3->NetGUIDAckStatus).field_0x8 !=
      *(int *)&(pFVar3->NetGUIDAckStatus).field_0x34) {
    puVar4 = *(undefined1 **)&(pFVar3->NetGUIDAckStatus).field_0x40;
    puVar15 = &(pFVar3->NetGUIDAckStatus).field_0x38;
    puVar11 = puVar15;
    if (puVar4 != (undefined1 *)0x0) {
      puVar11 = puVar4;
    }
    lVar1 = (ulonglong)
            ((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2 &
            *(int *)&(pFVar3->NetGUIDAckStatus).field_0x48 - 1U) * 4;
    iVar9 = *(int *)(puVar11 + lVar1);
    if (iVar9 != -1) {
      lVar5 = *(longlong *)&pFVar3->NetGUIDAckStatus;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar9 * 0x18) == lVar2) {
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
          }
          iVar9 = *(int *)(puVar15 + lVar1);
          goto joined_r0x0001480b7a05;
        }
        iVar9 = *(int *)(lVar5 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  goto LAB_1480b7a5d;
joined_r0x0001480b7a05:
  if (iVar9 == -1) goto LAB_1480b7a4c;
  lVar1 = lVar5 + (longlong)iVar9 * 0x18;
  if (*(longlong *)(lVar5 + (longlong)iVar9 * 0x18) == lVar2) {
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 8) == -2) {
        pwVar12 = L"UnAckd";
        goto LAB_1480b7a53;
      }
      pwVar12 = L"Ackd";
      if (*(int *)(lVar1 + 8) == -1) goto LAB_1480b7a53;
    }
    goto LAB_1480b7a4c;
  }
  iVar9 = *(int *)(lVar1 + 0x10);
  goto joined_r0x0001480b7a05;
LAB_1480b7a4c:
  pwVar12 = L"Pending";
LAB_1480b7a53:
  ::FString::operator=(&local_e8,pwVar12);
LAB_1480b7a5d:
  this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar7 + (longlong)(int)uVar14 * 0x18));
  if (this_00 != (UObject *)0x0) {
    bVar17 = true;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_78,(UObject *)0x0,None);
  }
  ::FString::PrintfImpl(&local_88,L"%llu");
  ::FString::PrintfImpl(&local_d8,L"%s [%s] [%s] - %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((bVar17) &&
     (bVar17 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FOutputDevice::LogfImpl(param_1,L"%s");
  if (4 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
  uVar10 = (ulonglong)uStack_ac;
  uVar14 = uStack_ac;
  if (*(int *)(auStack_c0._8_8_ + 0x18) <= (int)uStack_ac) {
    if ((char)local_90 == '\0') {
      return;
    }
    if (local_90._1_1_ == '\0') {
      return;
    }
    uVar14 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
    if (3 < uVar14) {
      uVar10 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((((int)uVar14 < 1) || (iVar16 <= local_98->HashSize)) && (local_98->HashSize <= iVar16)) {
      return;
    }
    local_98->HashSize = iVar16;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
    ::Rehash(local_98);
    return;
  }
  goto LAB_1480b7961;
}

// NetGUIDHasBeenAckd @ 1480b8840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPackageMapClient::NetGUIDHasBeenAckd(UPackageMapClient *this,FNetworkGUID param_1)

{
  FPackageMapAckState *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  undefined1 *puVar8;
  FNetworkGUID_u_0 local_res10;
  FNetworkGUID_u_0 local_res18;
  FString local_28;
  FNetworkGUID_u_0 *local_18;
  int *local_10;
  
  if (param_1.field0_0x0 != 0) {
    if (param_1.field0_0x0 == 1) {
      return false;
    }
    local_res10 = param_1.field0_0x0;
    bVar3 = IsNetGUIDAuthority(this);
    if (bVar3) {
      pFVar1 = this->OverrideAckState;
      if (*(int *)&(pFVar1->NetGUIDAckStatus).field_0x8 !=
          *(int *)&(pFVar1->NetGUIDAckStatus).field_0x34) {
        FVar7 = *(ForElementType<FSetElementId> *)&(pFVar1->NetGUIDAckStatus).field_0x40;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&(pFVar1->NetGUIDAckStatus).field_0x38;
        }
        iVar5 = *(int *)((longlong)FVar7 +
                        ((local_res10.ObjectId >> 0x20) * 0x17 + local_res10.ObjectId &
                        (ulonglong)(*(int *)&(pFVar1->NetGUIDAckStatus).field_0x48 - 1)) * 4);
        if (iVar5 != -1) {
          do {
            if (*(ulong64 *)(*(longlong *)&pFVar1->NetGUIDAckStatus + (longlong)iVar5 * 0x18) ==
                local_res10.ObjectId) goto LAB_1480b8905;
            iVar5 = *(int *)(*(longlong *)&pFVar1->NetGUIDAckStatus + 0x10 + (longlong)iVar5 * 0x18)
            ;
          } while (iVar5 != -1);
        }
      }
      local_18 = &local_res10;
      local_10 = &GUID_PACKET_NOT_ACKED;
      TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNetworkGUID_const_&,int_const_&>_>
                ((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                  *)pFVar1,(TPairInitializer<FNetworkGUID_const_&,int_const_&> *)&local_res18,
                 (bool *)&local_18);
LAB_1480b8905:
      pFVar1 = this->OverrideAckState;
      if (*(int *)&(pFVar1->NetGUIDAckStatus).field_0x8 !=
          *(int *)&(pFVar1->NetGUIDAckStatus).field_0x34) {
        puVar8 = *(undefined1 **)&(pFVar1->NetGUIDAckStatus).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(pFVar1->NetGUIDAckStatus).field_0x38;
        }
        iVar5 = *(int *)(puVar8 + ((local_res10.ObjectId >> 0x20) * 0x17 + local_res10.ObjectId &
                                  (ulonglong)(*(int *)&(pFVar1->NetGUIDAckStatus).field_0x48 - 1)) *
                                  4);
        if (iVar5 != -1) {
          do {
            lVar6 = *(longlong *)&pFVar1->NetGUIDAckStatus + (longlong)iVar5 * 0x18;
            if (*(ulong64 *)(*(longlong *)&pFVar1->NetGUIDAckStatus + (longlong)iVar5 * 0x18) ==
                local_res10.ObjectId) {
              if (lVar6 == 0) goto LAB_1480b896e;
              goto LAB_1480b8995;
            }
            iVar5 = *(int *)(lVar6 + 0x10);
          } while (iVar5 != -1);
        }
      }
      lVar6 = 0;
LAB_1480b896e:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
LAB_1480b8995:
      if (*(int *)(lVar6 + 8) != -1) {
        return false;
      }
      if (5 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_28,L"%llu");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return true;
}

// NotifyBunchCommit @ 1480b92d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::NotifyBunchCommit(UPackageMapClient *this,int param_1,FOutBunch *param_2)

{
  ForElementType<UE::Net::FNetToken> FVar1;
  FScriptContainerElement *pFVar2;
  FPackageMapAckState *pFVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<FNetworkGUID,int> *pTVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  ForElementType<UE::Net::FNetToken> FVar13;
  uint uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  FNetToken_u_0 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  uint local_68;
  undefined1 local_64 [8];
  undefined1 local_5c [4];
  FNetToken_u_0 *local_58;
  ForElementType<UE::Net::FNetToken> local_50;
  FScriptContainerElement *local_48;
  int *local_40;
  
  uVar12 = 0;
  local_res10[0] = (FNetToken_u_0)param_1;
  if (0 < (param_2->NetFieldExports).ArrayNum) {
    lVar16 = 0;
    do {
      pFVar3 = this->OverrideAckState;
      uVar8 = 0;
      if ((int)uVar12 < (param_2->NetFieldExports).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res20[0] =
           (undefined4)
           ((ulonglong)*(undefined8 *)((param_2->NetFieldExports).AllocatorInstance.Data + lVar16)
           >> 0x20);
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                (&pFVar3->NetFieldExportGroupPathAcked,&local_68,(bool *)local_res20);
      pFVar3 = this->OverrideAckState;
      uVar8 = 0;
      if ((int)uVar12 < (param_2->NetFieldExports).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64_const_&>
                (&pFVar3->NetFieldExportAcked,(ulong64 *)local_64,
                 (bool *)((param_2->NetFieldExports).AllocatorInstance.Data +
                         (longlong)(int)uVar12 * 8));
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar12 < (param_2->NetFieldExports).ArrayNum);
  }
  if (param_2->bPartialCustomExportsFinal != '\0') {
    FVar13 = (param_2->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    iVar11 = (param_2->NetTokensPendingExport).ArrayNum;
    if (FVar13 == (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar13 = (ForElementType<UE::Net::FNetToken>)&param_2->NetTokensPendingExport;
    }
    FVar1 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar13 + (longlong)iVar11 * 4);
    while( true ) {
      if ((param_2->NetTokensPendingExport).ArrayNum != iVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Net::FNetToken_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar13 == FVar1) break;
      local_58 = local_res10;
      local_50 = FVar13;
      TSet<TTuple<int,UE::Net::FNetToken>,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Net::FNetToken_const_&>_>
                ((TSet<TTuple<int,UE::Net::FNetToken>,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>,FDefaultSetAllocator>
                  *)&this->NetTokenPendingAckMap,
                 (TPairInitializer<int_const_&,UE::Net::FNetToken_const_&> *)(local_64 + 4),
                 (bool *)(local_5c + 4));
      FVar13 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar13 + 4);
    }
  }
  if ((param_2->ExportNetGUIDs).ArrayNum != 0) {
    if ((0x7fffffff < local_res10[0].Value) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutPacketId > GUID_PACKET_ACKED",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0x95f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (param_2->ExportNetGUIDs).ArrayNum;
    uVar12 = 0;
    if (0 < iVar11) {
      lVar16 = 0;
      do {
        pFVar3 = this->OverrideAckState;
        uVar14 = ~uVar12 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar12 < iVar11) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(ulonglong *)((param_2->ExportNetGUIDs).AllocatorInstance.Data + lVar16 * 8);
        if (*(int *)&(pFVar3->NetGUIDAckStatus).field_0x8 !=
            *(int *)&(pFVar3->NetGUIDAckStatus).field_0x34) {
          puVar5 = *(undefined1 **)&(pFVar3->NetGUIDAckStatus).field_0x40;
          puVar15 = &(pFVar3->NetGUIDAckStatus).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar15 = puVar5;
          }
          iVar11 = *(int *)(puVar15 +
                           ((uVar4 >> 0x20) * 0x17 + uVar4 &
                           (ulonglong)(*(int *)&(pFVar3->NetGUIDAckStatus).field_0x48 - 1)) * 4);
          if (iVar11 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&pFVar3->NetGUIDAckStatus + (longlong)iVar11 * 0x18)
                  == uVar4) goto LAB_1480b961b;
              iVar11 = *(int *)(*(longlong *)&pFVar3->NetGUIDAckStatus + 0x10 +
                               (longlong)iVar11 * 0x18);
            } while (iVar11 != -1);
          }
        }
        pFVar3 = this->OverrideAckState;
        uVar8 = 0;
        if ((int)uVar12 < (param_2->ExportNetGUIDs).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_40 = &GUID_PACKET_NOT_ACKED;
        local_48 = (param_2->ExportNetGUIDs).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
        TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FNetworkGUID_const_&,int_const_&>_>
                  ((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                    *)pFVar3,(TPairInitializer<FNetworkGUID_const_&,int_const_&> *)local_5c,
                   (bool *)&local_48);
LAB_1480b961b:
        pFVar3 = this->OverrideAckState;
        uVar8 = 0;
        if ((int)uVar12 < (param_2->ExportNetGUIDs).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar9 = TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                         *)pFVar3,
                        (FNetworkGUID *)
                        ((param_2->ExportNetGUIDs).AllocatorInstance.Data +
                        (longlong)(int)uVar12 * 8));
        if ((pTVar9 == (TTuple<FNetworkGUID,int> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&pTVar9->field_0x8 == -2) {
          if (this->Connection->bInternalAck == 0) {
            *(FNetToken_u_0 *)&pTVar9->field_0x8 = local_res10[0];
            uVar8 = 0;
            if ((int)uVar12 < (param_2->ExportNetGUIDs).ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar10 = (this->PendingAckGUIDs).AllocatorInstance.Data;
            pFVar2 = pFVar10 + (longlong)(this->PendingAckGUIDs).ArrayNum * 8;
            if (pFVar10 != pFVar2) {
              do {
                if (*(longlong *)pFVar10 ==
                    *(longlong *)((param_2->ExportNetGUIDs).AllocatorInstance.Data + lVar16 * 8)) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!PendingAckGUIDs.Contains(ExportNetGUIDs[i])",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                     ,0x977,L"");
                  if (bVar7) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  break;
                }
                pFVar10 = pFVar10 + 8;
              } while (pFVar10 != pFVar2);
            }
            uVar8 = 0;
            if ((int)uVar12 < (param_2->ExportNetGUIDs).ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TArray<FNetworkGUID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNetworkGUID_const_&>
                      (&this->PendingAckGUIDs,
                       (FNetworkGUID *)
                       ((param_2->ExportNetGUIDs).AllocatorInstance.Data + (longlong)(int)uVar12 * 8
                       ));
          }
          else {
            *(undefined4 *)&pTVar9->field_0x8 = 0xffffffff;
          }
        }
        iVar11 = (param_2->ExportNetGUIDs).ArrayNum;
        uVar12 = uVar12 + 1;
        lVar16 = lVar16 + 1;
      } while ((int)uVar12 < iVar11);
    }
  }
  return;
}

// NotifyStreamingLevelUnload @ 1480b98f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::NotifyStreamingLevelUnload(UPackageMapClient *this,UObject *param_1)

{
  return;
}

// ObjectLevelHasFinishedLoading @ 1480b9b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::ObjectLevelHasFinishedLoading(UPackageMapClient *this,UObject *param_1)

{
  int iVar1;
  ULevel *pUVar2;
  UClass *pUVar3;
  ULevel *pUVar4;
  UNetDriver *pUVar5;
  
  pUVar5 = (UNetDriver *)0x0;
  if (((this->Connection != (UNetConnection *)0x0) &&
      (pUVar5 = (this->Connection->Driver).field0_0x0.DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending)) && (pUVar5 != (UNetDriver *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  if (((param_1 != (UObject *)0x0) && (pUVar5 != (UNetDriver *)0x0)) &&
     ((pUVar5->World).field0_0x0.DebugPtr != (UWorld *)0x0)) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
      pUVar4 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
    }
    else {
      pUVar4 = AActor::GetLevel((AActor *)param_1);
    }
    if ((pUVar4 != (ULevel *)0x0) &&
       ((pUVar2 = (((pUVar5->World).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.DebugPtr,
        pUVar2 == (ULevel *)0x0 || (pUVar2 != pUVar4)))) {
      return pUVar4->bIsVisible;
    }
  }
  return true;
}

// OverridePackageMapExportAckStatus @ 1480bb980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::OverridePackageMapExportAckStatus
          (UPackageMapClient *this,FPackageMapAckState *param_1)

{
  if (param_1 != (FPackageMapAckState *)0x0) {
    this->OverrideAckState = param_1;
    return;
  }
  this->OverrideAckState = &this->AckState;
  return;
}

// PrintExportBatch @ 1480bdb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPackageMapClient::PrintExportBatch(UPackageMapClient *this)

{
  void *_Src;
  FOutBunch *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  TMap<FNetworkGUID,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>_>
  *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [12];
  uint local_7c;
  longlong local_78;
  uint local_70;
  int local_6c;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  if ((this->ExportNetGUIDCount < 1) && (this->CurrentExportBunch == (FOutBunch *)0x0)) {
    return false;
  }
  iVar10 = 0;
  if (bIsNetGuidCacheHistoryEnabled != 0) {
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar8 = &((this->GuidCache).Object)->History;
    TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_58,
               (TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                *)pTVar8);
    local_c0 = 0;
    stack0xffffffffffffff18 = local_58._16_16_;
    local_f8 = (longlong *)local_58._0_8_;
    auStack_f0._0_8_ = local_58._8_8_;
    local_d8 = local_38;
    pTStack_d0 = pTStack_30;
    uVar6 = local_58._24_8_ >> 0x20;
    local_c8 = (TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                *)pTVar8;
    if (local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = *(int *)(lVar7 + 0x10 + *local_f8);
        lVar9 = (longlong)local_100;
        _Src = *(void **)(lVar7 + 8 + *local_f8);
        if (local_100 == 0) {
          local_fc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100,0,&local_108,local_100,&local_fc);
          memcpy(local_108.Data,_Src,lVar9 * 2);
        }
        if (2 < (byte)LogNetPackageMap._0_1_) {
          ::FString::PrintfImpl(&local_b8,L"%llu");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
        }
        uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
        uVar6 = (ulonglong)uStack_dc;
      } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
      if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar5 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_c8->HashSize < iVar5)) || (iVar5 < local_c8->HashSize)) {
          local_c8->HashSize = iVar5;
          TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
          ::Rehash(local_c8);
        }
      }
    }
  }
  if (2 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  }
  pFVar1 = this->CurrentExportBunch;
  if (pFVar1 != (FOutBunch *)0x0) {
    for (; (-1 < iVar10 && (iVar10 < (pFVar1->ExportNetGUIDs).ArrayNum)); iVar10 = iVar10 + 1) {
      if (2 < (byte)LogNetPackageMap._0_1_) {
        if ((iVar10 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        ::FString::PrintfImpl(&local_a8,L"%llu");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (2 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  }
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_88,&this->CurrentExportNetGUIDs);
  if (local_6c < *(int *)(local_78 + 0x18)) {
    do {
      if (2 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_98,L"%llu");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      local_70 = local_70 & ~local_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
    } while (local_6c < *(int *)(local_78 + 0x18));
  }
  return true;
}

// ReceiveCustomExportsBunch @ 1480bfab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::ReceiveCustomExportsBunch(UPackageMapClient *this,FInBunch *param_1)

{
  FNetTokenStore *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FNetTokenStoreState *pFVar4;
  char local_res8 [8];
  FNetToken_u_0 local_res10 [2];
  FString local_38;
  
  if ((param_1->bPartialCustomExportsFinal == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBunch.bPartialCustomExportsFinal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x901,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] = '\0';
  (**(code **)(param_1->_padding_ + 400))(param_1,local_res8,1);
  this_00 = (this->NetTokenResolveContext).NetTokenStore;
  pFVar4 = UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState
                     (this_00,(this->Connection->ConnectionHandle).ParentConnectionId);
  while ((local_res8[0] != '\0' && ((param_1->_padding_ & 0x200) == 0))) {
    UE::Net::FNetTokenStore::InternalReadNetToken((FArchive *)&local_res10[0]._s_0,(uint)param_1);
    UE::Net::FNetTokenStore::ReadTokenData
              (this_00,(FArchive *)param_1,(FNetToken)local_res10[0]._s_0,pFVar4,(UPackageMap *)this
              );
    if (6 < (byte)LogNetToken._0_1_) {
      ::FString::PrintfImpl(&local_38,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
    }
    (**(code **)(param_1->_padding_ + 400))(param_1,local_res8,1);
  }
  return;
}

// ReceiveExportData @ 1480bfc40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ReceiveExportData(UPackageMapClient *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Connection->bInternalAck == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection->IsInternalAck()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0x6b7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNetFieldExports(this,param_1);
  ReceiveNetExportGUIDs(this,param_1);
  return;
}

// ReceiveNetExportGUIDs @ 1480bfcb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ReceiveNetExportGUIDs(UPackageMapClient *this,FArchive *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetExportGUIDs(FArchive_&)_::_2_::FStat_STAT_ReceiveNetExportGUIDsTime>
  FVar9;
  longlong lVar10;
  longlong lVar11;
  FName FVar12;
  uint uVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint local_res18 [2];
  FName local_res20;
  FName local_148;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  FName local_130;
  undefined8 local_120;
  FName local_118;
  FName local_110;
  undefined1 local_108 [16];
  FArchiveState local_f8;
  undefined8 local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  
  uVar13 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReceiveNetExportGUIDsTime ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetExportGUIDs(FArchive_&)_::_2_::FStat_STAT_ReceiveNetExportGUIDsTime>
         )0x0) {
      pFVar8 = ::FName::FName(&local_118,"STAT_ReceiveNetExportGUIDsTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReceiveNetExportGUIDsTime,*pFVar8,
                 L"ReceiveNetExportGUIDs time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_ReceiveNetExportGUIDsTime;
  if (StatPtr_STAT_ReceiveNetExportGUIDsTime ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetExportGUIDs(FArchive_&)_::_2_::FStat_STAT_ReceiveNetExportGUIDsTime>
       )0x0) {
    pFVar8 = ::FName::FName(&local_110,"STAT_ReceiveNetExportGUIDsTime");
    FVar9 = (FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetExportGUIDs(FArchive_&)_::_2_::FStat_STAT_ReceiveNetExportGUIDsTime>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReceiveNetExportGUIDsTime,
                         *pFVar8,L"ReceiveNetExportGUIDs time","STATGROUP_Net","STATCAT_Advanced",
                         L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_148 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  if ((local_148.ComparisonIndex.Value.Value != 0) || (local_148.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = local_148.ComparisonIndex.Value.Value;
        local_res20.Number = local_148.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                   ,0x804);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = local_148;
      FThreadStats::AddMessage(local_148,CycleScopeStart);
      bVar5 = true;
      goto LAB_1480bfe36;
    }
  }
  bVar5 = false;
  local_148 = local_130;
LAB_1480bfe36:
  if ((this->Connection->bInternalAck == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x806,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar12 = (FName)(this->GuidCache).Object;
  bVar7 = *(bool *)((longlong)FVar12 + 0x15a);
  *(bool *)((longlong)FVar12 + 0x15a) = true;
  local_res8[0]._s_0.B = bVar7;
  local_res18[0] = 0;
  local_res10 = FVar12;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res18);
  if ((param_1->field_0x29 & 2) == 0) {
    if ((uint)UE::Net::MaxSerializedReplayNetGuids < local_res18[0]) {
      if (1 < (byte)LogNetPackageMap._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      }
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    else if (this->bIgnoreReceivedExportGUIDs == false) {
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 0;
      local_140.ArrayMax = 0;
      if (local_res18[0] != 0) {
        do {
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                    (param_1,&local_140);
          local_f8._padding_ = 0;
          local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_f8._40_8_ = 0;
          local_f8.ArSerializingDefaults = 0;
          local_f8.ArPortFlags = 0;
          local_f8.ArMaxSerializeSize = 0;
          local_f8.ArUEVer.FileVersionUE4 = 0;
          local_f8.ArUEVer.FileVersionUE5 = 0;
          local_f8.ArLicenseeUEVer = 0;
          local_f8.ArEngineVer.Major = 0;
          local_f8.ArEngineVer.Minor = 0;
          local_f8.ArEngineVer.Patch = 0;
          local_f8.ArEngineVer._6_2_ = 0;
          local_f8.ArEngineVer.Changelist = 0;
          local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_f8.SerializedProperty = (FProperty *)0x0;
          local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_f8.bCustomVersionsAreReset = false;
          local_f8._129_7_ = 0;
          local_f8.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_f8);
          local_60 = &local_140;
          local_68 = 0;
          local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
          local_58 = 0x7fffffffffffffff;
          FArchiveState::SetIsLoading(&local_f8,true);
          (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
          local_120 = 0;
          InternalLoadObject(this,(FArchive *)local_108,(UObject **)&local_f8,(int)&local_120);
          FArchive::~FArchive((FArchive *)&local_f8);
          uVar13 = uVar13 + 1;
          FVar12 = local_res10;
        } while (uVar13 < local_res18[0]);
      }
      if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
    }
    else {
      local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
      if (local_res18[0] != 0) {
        do {
          plVar1 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_res10);
            }
          }
          else {
            local_res10.ComparisonIndex.Value = *(uint *)*plVar1;
            *plVar1 = *plVar1 + 4;
          }
          lVar2 = *(longlong *)param_1;
          lVar11 = (longlong)(int)local_res10.ComparisonIndex.Value;
          lVar10 = (**(code **)(lVar2 + 0x28))(param_1);
          (**(code **)(lVar2 + 0x1b8))(param_1,lVar11 + lVar10);
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_res18[0]);
      }
    }
  }
  *(undefined1 *)((longlong)FVar12 + 0x15a) = local_res8[0]._s_0.B;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(local_148,CycleScopeEnd);
  }
  return;
}

// ReceiveNetFieldExports @ 1480c0190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPackageMapClient::ReceiveNetFieldExports(UPackageMapClient *this,FArchive *param_1)

{
  atomic<int> *this_00;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_01;
  FNetGUIDCache *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetFieldExports(FArchive_&)_::_2_::FStat_STAT_ReceiveNetFieldExportsTime>
  FVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  wchar_t *pwVar15;
  undefined1 *puVar16;
  FName FVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  TReferenceControllerBase<1> *local_128;
  uint local_120 [2];
  FString local_118;
  int local_108;
  FNetFieldExport local_100;
  FColor_u_0 local_d8 [2];
  FName local_d0;
  FName local_c8;
  TReferenceControllerBase<1> *local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [8];
  TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_const_&> local_a0;
  TReferenceControllerBase<1> **local_90;
  FString *local_88;
  uint *local_80;
  uint *local_78;
  TReferenceControllerBase<1> **local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReceiveNetFieldExportsTime ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetFieldExports(FArchive_&)_::_2_::FStat_STAT_ReceiveNetFieldExportsTime>
         )0x0) {
      pFVar10 = ::FName::FName(&local_68,"STAT_ReceiveNetFieldExportsTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReceiveNetFieldExportsTime,*pFVar10,
                 L"ReceiveNetFieldExports time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_ReceiveNetFieldExportsTime;
  if (StatPtr_STAT_ReceiveNetFieldExportsTime ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetFieldExports(FArchive_&)_::_2_::FStat_STAT_ReceiveNetFieldExportsTime>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_ReceiveNetFieldExportsTime");
    FVar11 = (FThreadSafeStaticStat<_protected:_void___cdecl_UPackageMapClient::ReceiveNetFieldExports(FArchive_&)_::_2_::FStat_STAT_ReceiveNetFieldExportsTime>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReceiveNetFieldExportsTime,
                          *pFVar10,L"ReceiveNetFieldExports time","STATGROUP_Net","STATCAT_Advanced"
                          ,L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar5 = false;
  bVar4 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_d0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                   ,0x796);
        bVar5 = true;
        bVar4 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_1480c0315;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  FVar17 = local_c8;
LAB_1480c0315:
  if ((this->Connection->bInternalAck == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x798,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_120[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_120);
  if ((uint)UE::Net::MaxSerializedNetExportGroups < local_120[0]) {
    if (1 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  else {
    local_108 = 0;
    if (0 < (int)local_120[0]) {
      do {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        local_res10[0] = 0;
        local_res20[0] = 0;
        (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
        (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res20);
        local_128 = (TReferenceControllerBase<1> *)0x0;
        if (local_res20[0] == 0) {
          if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->GuidCache).Object;
          if (*(int *)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x8 !=
              *(int *)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x34) {
            puVar2 = *(undefined1 **)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x40;
            puVar16 = &(pFVar1->NetFieldExportGroupIndexToGroup).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar16 = puVar2;
            }
            iVar9 = *(int *)(puVar16 +
                            (ulonglong)
                            (*(int *)&(pFVar1->NetFieldExportGroupIndexToGroup).field_0x48 - 1U &
                            local_res10[0]) * 4);
            if (iVar9 != -1) {
              do {
                lVar20 = *(longlong *)&pFVar1->NetFieldExportGroupIndexToGroup +
                         (longlong)iVar9 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar1->NetFieldExportGroupIndexToGroup +
                             (longlong)iVar9 * 0x18) == local_res10[0]) {
                  pTVar14 = (TReferenceControllerBase<1> *)(lVar20 + 8);
                  if (lVar20 == 0) {
                    pTVar14 = pTVar13;
                  }
                  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
                    local_128 = (TReferenceControllerBase<1> *)pTVar14->_padding_;
                    goto LAB_1480c08a1;
                  }
                  break;
                }
                iVar9 = *(int *)(lVar20 + 0x10);
              } while (iVar9 != -1);
            }
          }
          local_128 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          local_res18[0] = 0;
          ::operator<<(param_1,&local_118);
          (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res18);
          if ((uint)UE::Net::MaxSerializedNetExportsPerGroup < local_res18[0]) {
            if (2 < (byte)LogNetPackageMap._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
            }
            FArchiveState::SetError((FArchiveState *)param_1);
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            break;
          }
          (**(code **)(GEngine->_padding_ + 0x498))
                    (GEngine,this->Connection,&local_118,
                     CONCAT71((uint7)(uint3)((uint)UE::Net::MaxSerializedNetExportsPerGroup >> 8),1)
                    );
          if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->GuidCache).Object;
          if (local_118.Data.ArrayNum == 0) {
            pwVar15 = L"";
            iVar9 = 0;
          }
          else {
            pwVar15 = (wchar_t *)local_118.Data.AllocatorInstance.Data;
            iVar9 = local_118.Data.ArrayNum + -1;
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
          iVar9 = TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                              *)&pFVar1->NetFieldExportGroupMap,uVar8,&local_118);
          local_128 = pTVar13;
          pTVar14 = pTVar13;
          if ((iVar9 != -1) &&
             (lVar20 = *(longlong *)&pFVar1->NetFieldExportGroupMap + (longlong)iVar9 * 0x28,
             lVar20 != 0)) {
            local_128 = *(TReferenceControllerBase<1> **)(lVar20 + 0x10);
            pTVar14 = *(TReferenceControllerBase<1> **)(lVar20 + 0x18);
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          pTVar14 = local_128;
          uVar8 = local_res18[0];
          if (local_128 == (TReferenceControllerBase<1> *)0x0) {
            pTVar12 = ::operator_new(0x30);
            pTVar14 = pTVar13;
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              pTVar12->_padding_ = 0;
              pTVar12->SharedReferenceCount = (atomic<int>)0x0;
              pTVar12->WeakReferenceCount = (atomic<int>)0x0;
              *(undefined4 *)&pTVar12[1]._padding_ = 0;
              pTVar12[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar12[1].WeakReferenceCount = (atomic<int>)0x0;
              pTVar12[2]._padding_ = 0;
              *(undefined1 *)&pTVar12[2].SharedReferenceCount = 1;
              pTVar14 = pTVar12;
            }
            local_b8 = pTVar14;
            pTVar12 = ::operator_new(0x18);
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              pTVar12->SharedReferenceCount = (atomic<int>)0x1;
              pTVar12->WeakReferenceCount = (atomic<int>)0x1;
              pTVar12->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_VFNetFieldExportGroup__U__DefaultDeleter_VFNetFieldExportGroup___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              pTVar12[1]._padding_ = (longlong)pTVar14;
              pTVar13 = pTVar12;
            }
            local_128 = local_b8;
            iVar9 = local_118.Data.ArrayNum + -1;
            if (local_118.Data.ArrayNum == 0) {
              iVar9 = 0;
            }
            local_b0 = pTVar13;
            ::FString::AssignRange
                      ((FString *)local_b8,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar9);
            *(uint *)&local_128[1]._padding_ = local_res10[0];
            TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::SetNum
                      ((TArray<FNetFieldExport,TSizedDefaultAllocator<32>_> *)
                       &local_128[1].SharedReferenceCount,local_res18[0],Default);
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_a0.Value = (FNetFieldExportGroup **)&local_118;
            local_90 = &local_b8;
            TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&>_>
                      ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                        *)&((this->GuidCache).Object)->NetFieldExportGroupMap,
                       (TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&>
                        *)local_a8,(bool *)&local_a0.Value);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0);
          }
          else {
            uVar18 = (uint)local_128[2]._padding_;
            if (uVar18 < local_res18[0]) {
              this_00 = &local_128[1].SharedReferenceCount;
              if ((int)uVar18 < (int)local_res18[0]) {
                iVar19 = local_res18[0] - uVar18;
                iVar9 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x28,8,iVar19,(ForAnyElementType *)this_00,(int *)(local_128 + 2)
                                   ,(int *)((longlong)&local_128[2]._padding_ + 4));
                DefaultConstructItems<FNetFieldExport,int>
                          ((void *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x28),
                           iVar19);
              }
              else {
                if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
                }
                if ((int)local_res18[0] < (int)uVar18) {
                  uVar18 = uVar18 - local_res18[0];
                  if (((int)(local_res18[0] | uVar18) < 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x458,
                                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (uVar18 != 0) {
                    TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                              ((TArray<FNetFieldExport,TSizedDefaultAllocator<32>_> *)this_00,uVar8,
                               uVar18);
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,(ForAnyElementType *)this_00,(int)pTVar14[2]._padding_,
                               (int *)((longlong)&pTVar14[2]._padding_ + 4));
                  }
                }
              }
            }
          }
          if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_88 = &local_118;
          local_80 = local_res10;
          TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&((this->GuidCache).Object)->NetFieldExportGroupPathToIndex,
                     (TPairInitializer<FString_const_&,unsigned_int_const_&> *)(local_a8 + 4),
                     (bool *)&local_88);
          if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_78 = local_res10;
          local_70 = &local_128;
          TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_const_&>_>
                    ((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
                      *)&((this->GuidCache).Object)->NetFieldExportGroupIndexToGroup,&local_a0,
                     (bool *)&local_78);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
LAB_1480c08a1:
        local_100.Blob.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.Blob.ArrayNum = 0;
        local_100.Blob.ArrayMax = 0;
        local_100.Handle = 0;
        local_100.CompatibleChecksum = 0;
        local_100.ExportName.ComparisonIndex.Value = 0;
        local_100.ExportName.Number = 0;
        local_100.bExported = false;
        local_100.bDirtyForReplay = true;
        local_100.bExportBlob = false;
        local_100.bIncompatible = false;
        ::operator<<(param_1,&local_100);
        pTVar13 = local_128;
        if (local_128 == (TReferenceControllerBase<1> *)0x0) {
          if (1 < (byte)LogNetPackageMap._0_1_) {
            ::FName::ToString(&local_100.ExportName,&local_58);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          lVar20 = (longlong)(int)local_100.Handle;
          if (((int)local_100.Handle < 0) ||
             (iVar9 = (int)local_128[2]._padding_, iVar9 <= (int)local_100.Handle)) {
            if (1 < (byte)LogNetPackageMap._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
            }
          }
          else {
            uVar8 = 0;
            if ((int)local_100.Handle < iVar9) {
              uVar8 = ~local_100.Handle >> 0x1f;
            }
            uVar18 = local_100.Handle;
            if (uVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar18 = local_100.Handle;
            }
            local_100.bIncompatible =
                 *(bool *)(*(longlong *)&pTVar13[1].SharedReferenceCount + 0x23 + lVar20 * 0x28);
            uVar8 = 0;
            if ((int)uVar18 < (int)pTVar13[2]._padding_) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_01 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      (*(longlong *)&pTVar13[1].SharedReferenceCount + (longlong)(int)uVar18 * 0x28)
            ;
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(this_01,&local_100.Blob);
            *(uint *)&this_01[1].AllocatorInstance.Data = local_100.Handle;
            *(uint *)((longlong)&this_01[1].AllocatorInstance.Data + 4) =
                 local_100.CompatibleChecksum;
            this_01[1].ArrayNum = local_100.ExportName.ComparisonIndex.Value;
            this_01[1].ArrayMax = local_100.ExportName.Number;
            *(bool *)&this_01[2].AllocatorInstance.Data = local_100.bExported;
            *(bool *)((longlong)&this_01[2].AllocatorInstance.Data + 1) = local_100.bDirtyForReplay;
            *(bool *)((longlong)&this_01[2].AllocatorInstance.Data + 2) = local_100.bExportBlob;
            *(bool *)((longlong)&this_01[2].AllocatorInstance.Data + 3) = local_100.bIncompatible;
          }
        }
        if (local_100.Blob.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Blob.AllocatorInstance.Data);
        }
        local_108 = local_108 + 1;
      } while (local_108 < (int)local_120[0]);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// ReceiveNetFieldExportsCompat @ 1480c0bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPackageMapClient::ReceiveNetFieldExportsCompat(UPackageMapClient *this,FInBunch *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar1;
  FNetGUIDCache *pFVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FNetFieldExportGroup *pFVar8;
  FNetFieldExportGroup **ppFVar9;
  TReferenceControllerBase<1> *pTVar10;
  wchar_t *pwVar11;
  FNetFieldExportGroup *pFVar12;
  longlong lVar13;
  FNetFieldExportGroup *pFVar14;
  FNetFieldExportGroup *pFVar15;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FNetFieldExportGroup *local_c8;
  FString local_c0;
  FNetFieldExport local_b0;
  FNetFieldExportGroup *local_88;
  FNetFieldExportGroup *local_80;
  undefined1 local_78 [8];
  TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_const_&> local_70;
  FNetFieldExportGroup **local_60;
  FString *local_58;
  uint *local_50;
  uint *local_48;
  FNetFieldExportGroup **local_40;
  
  if (this->Connection->bInternalAck == 0) {
    if (1 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
  }
  else {
    plVar1 = (longlong *)param_1->_padding_;
    pFVar14 = (FNetFieldExportGroup *)0x0;
    local_res18[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (local_res18[0] <= (uint)UE::Net::MaxSerializedNetExportGroups) {
      pFVar15 = pFVar14;
      if (0 < (int)local_res18[0]) {
        do {
          (**(code **)(param_1->_padding_ + 0x1a0))(param_1,local_res20);
          if ((param_1->_padding_ & 0x200) != 0) {
            if ((byte)LogNetPackageMap._0_1_ < 2) {
              return;
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            return;
          }
          local_res8[0] = 0;
          local_c8 = (FNetFieldExportGroup *)0x0;
          uVar4 = FBitReader::ReadBit((FBitReader *)param_1);
          if (uVar4 == '\x01') {
            local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c0.Data.ArrayNum = 0;
            local_c0.Data.ArrayMax = 0;
            ::operator<<((FArchive *)param_1,&local_c0);
            if ((param_1->_padding_ & 0x200) != 0) {
              if (1 < (byte)LogNetPackageMap._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
              }
LAB_1480c11cb:
              if (local_c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              return;
            }
            plVar1 = (longlong *)param_1->_padding_;
            if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
              if ((param_1->_padding_ & 0x10000) == 0) {
                (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
              }
            }
            else {
              local_res8[0] = *(uint *)*plVar1;
              *plVar1 = *plVar1 + 4;
            }
            if (UE::Net::MaxSerializedNetExportsPerGroup < (int)local_res8[0]) {
              if (1 < (byte)LogNetPackageMap._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
              }
              FArchiveState::SetError((FArchiveState *)param_1);
              goto LAB_1480c11cb;
            }
            (**(code **)(GEngine->_padding_ + 0x498))
                      (GEngine,this->Connection,&local_c0,
                       CONCAT71((uint7)(uint3)((uint)UE::Net::MaxSerializedNetExportsPerGroup >> 8),
                                1));
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this->GuidCache).Object;
            if (local_c0.Data.ArrayNum == 0) {
              pwVar11 = L"";
              iVar7 = 0;
            }
            else {
              pwVar11 = (wchar_t *)local_c0.Data.AllocatorInstance.Data;
              iVar7 = local_c0.Data.ArrayNum + -1;
            }
            uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
            iVar7 = TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>
                              ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                                *)&pFVar2->NetFieldExportGroupMap,uVar6,&local_c0);
            if ((iVar7 == -1) ||
               (lVar13 = *(longlong *)&pFVar2->NetFieldExportGroupMap + (longlong)iVar7 * 0x28,
               lVar13 == 0)) {
              pTVar10 = (TReferenceControllerBase<1> *)0x0;
              local_c8 = (FNetFieldExportGroup *)0x0;
            }
            else {
              local_c8 = *(FNetFieldExportGroup **)(lVar13 + 0x10);
              pTVar10 = *(TReferenceControllerBase<1> **)(lVar13 + 0x18);
              if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar10->SharedReferenceCount =
                     (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar10);
            if (local_c8 == (FNetFieldExportGroup *)0x0) {
              pFVar8 = ::operator_new(0x30);
              pFVar12 = pFVar14;
              if (pFVar8 != (FNetFieldExportGroup *)0x0) {
                (pFVar8->PathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar8->PathName).Data.ArrayNum = 0;
                (pFVar8->PathName).Data.ArrayMax = 0;
                pFVar8->PathNameIndex = 0;
                (pFVar8->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar8->NetFieldExports).ArrayNum = 0;
                (pFVar8->NetFieldExports).ArrayMax = 0;
                pFVar8->bDirtyForReplay = true;
                pFVar12 = pFVar8;
              }
              local_88 = pFVar12;
              pFVar8 = ::operator_new(0x18);
              local_80 = pFVar14;
              if (pFVar8 != (FNetFieldExportGroup *)0x0) {
                (pFVar8->PathName).Data.ArrayNum = 1;
                (pFVar8->PathName).Data.ArrayMax = 1;
                (pFVar8->PathName).Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)
                     &
                     ___7__TReferenceControllerWithDeleter_VFNetFieldExportGroup__U__DefaultDeleter_VFNetFieldExportGroup___SharedPointerInternals___00_SharedPointerInternals__6B_
                ;
                *(FNetFieldExportGroup **)&pFVar8->PathNameIndex = pFVar12;
                local_80 = pFVar8;
              }
              local_c8 = local_88;
              uVar6 = local_c0.Data.ArrayNum - 1;
              if (local_c0.Data.ArrayNum == 0) {
                uVar6 = 0;
              }
              ::FString::AssignRange
                        (&local_88->PathName,(wchar_t *)local_c0.Data.AllocatorInstance.Data,uVar6);
              local_c8->PathNameIndex = local_res20[0];
              TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::SetNum
                        (&local_c8->NetFieldExports,local_res8[0],Default);
              if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_70.Value = (FNetFieldExportGroup **)&local_c0;
              local_60 = &local_88;
              TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&>_>
                        ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                          *)&((this->GuidCache).Object)->NetFieldExportGroupMap,
                         (TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&>
                          *)local_78,(bool *)&local_70.Value);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_80);
            }
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_58 = &local_c0;
            local_50 = local_res20;
            TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
                      ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                        *)&((this->GuidCache).Object)->NetFieldExportGroupPathToIndex,
                       (TPairInitializer<FString_const_&,unsigned_int_const_&> *)(local_78 + 4),
                       (bool *)&local_58);
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_48 = local_res20;
            local_40 = &local_c8;
            TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_const_&>_>
                      ((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
                        *)&((this->GuidCache).Object)->NetFieldExportGroupIndexToGroup,&local_70,
                       (bool *)&local_48);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
          }
          else {
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ppFVar9 = TMapBase<unsigned_int,FNetFieldExportGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>_>
                      ::FindChecked((TMapBase<unsigned_int,FNetFieldExportGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>_>
                                     *)&((this->GuidCache).Object)->NetFieldExportGroupIndexToGroup,
                                    local_res20[0]);
            local_c8 = *ppFVar9;
          }
          local_b0.Blob.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.Blob.ArrayNum = 0;
          local_b0.Blob.ArrayMax = 0;
          local_b0.Handle = 0;
          local_b0.CompatibleChecksum = 0;
          local_b0.ExportName.ComparisonIndex.Value = 0;
          local_b0.ExportName.Number = 0;
          local_b0.bExported = false;
          local_b0.bDirtyForReplay = true;
          local_b0.bExportBlob = false;
          local_b0.bIncompatible = false;
          ::operator<<((FArchive *)param_1,&local_b0);
          pFVar12 = local_c8;
          if ((param_1->_padding_ & 0x200) != 0) {
LAB_1480c1206:
            if (local_b0.Blob.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_b0.Blob.AllocatorInstance.Data);
            return;
          }
          lVar13 = (longlong)(int)local_b0.Handle;
          if (((int)local_b0.Handle < 0) ||
             (iVar7 = (local_c8->NetFieldExports).ArrayNum, iVar7 <= (int)local_b0.Handle)) {
            if (1 < (byte)LogNetPackageMap._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
            }
            FArchiveState::SetError((FArchiveState *)param_1);
            goto LAB_1480c1206;
          }
          uVar6 = 0;
          if ((int)local_b0.Handle < iVar7) {
            uVar6 = ~local_b0.Handle >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                    ((pFVar12->NetFieldExports).AllocatorInstance.Data + lVar13 * 0x28);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(this_00,&local_b0.Blob);
          *(uint *)&this_00[1].AllocatorInstance.Data = local_b0.Handle;
          *(uint *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = local_b0.CompatibleChecksum;
          this_00[1].ArrayNum = local_b0.ExportName.ComparisonIndex.Value;
          this_00[1].ArrayMax = local_b0.ExportName.Number;
          *(bool *)&this_00[2].AllocatorInstance.Data = local_b0.bExported;
          *(bool *)((longlong)&this_00[2].AllocatorInstance.Data + 1) = local_b0.bDirtyForReplay;
          *(bool *)((longlong)&this_00[2].AllocatorInstance.Data + 2) = local_b0.bExportBlob;
          *(bool *)((longlong)&this_00[2].AllocatorInstance.Data + 3) = local_b0.bIncompatible;
          if (local_b0.Blob.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Blob.AllocatorInstance.Data);
          }
          uVar6 = (int)pFVar15 + 1;
          pFVar15 = (FNetFieldExportGroup *)(ulonglong)uVar6;
        } while ((int)uVar6 < (int)local_res18[0]);
      }
      return;
    }
    if (1 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
  FArchiveState::SetError((FArchiveState *)param_1);
  return;
}

// ReceiveNetGUIDBunch @ 1480c1270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ReceiveNetGUIDBunch(UPackageMapClient *this,FInBunch *param_1)

{
  longlong lVar1;
  FNetGUIDCache *pFVar2;
  longlong *plVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uchar uVar8;
  uint uVar9;
  FNetTraceCollector *pFVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  int iVar12;
  uint local_res10 [2];
  undefined8 local_res18;
  ulong64 local_res20;
  
  if ((!(bool)param_1->bHasPackageMapExports) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBunch.bHasPackageMapExports",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x603,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar1 = param_1->_padding_;
  uVar8 = FBitReader::ReadBit((FBitReader *)param_1);
  if (uVar8 == '\x01') {
    ReceiveNetFieldExportsCompat(this,param_1);
    return;
  }
  if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (this->GuidCache).Object;
  bVar7 = pFVar2->IsExportingNetGUIDBunch;
  pFVar2->IsExportingNetGUIDBunch = true;
  plVar3 = (longlong *)param_1->_padding_;
  local_res10[0] = 0;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (UE::Net::MaxSerializedNetGuids < (int)local_res10[0]) {
    if (1 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  else {
    if (4 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    pFVar10 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar10 = this->Connection->InTraceCollector;
    }
    if (pFVar10 != (FNetTraceCollector *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTraceNameId_1567 = UE::Net::CreatePersistentNetDebugName(L"NetGUIDExportBuncheader",0x17)
        ;
        _Init_thread_footer(&::_TSS0);
      }
      lVar6 = param_1->_padding_;
      uVar9 = FNetTrace::TraceName(NetTraceNameId_1567);
      FNetTrace::TracePacketContentEvent
                (this->Connection->InTraceCollector,uVar9,(uint)lVar1,(uint)lVar6,2);
    }
    iVar12 = 0;
    if (0 < (int)local_res10[0]) {
      do {
        uVar9 = 0xffffffff;
        pFVar10 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar10 = this->Connection->InTraceCollector;
        }
        if (pFVar10 != (FNetTraceCollector *)0x0) {
          uVar9 = FNetTrace::BeginPacketContentEvent(pFVar10,Object,(uint)param_1->_padding_);
          FVar4 = (pFVar10->Events).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar11 = FVar4;
          }
          *(undefined8 *)((longlong)FVar11 + (ulonglong)uVar9 * 0x10) = 0;
        }
        local_res18 = 0;
        InternalLoadObject(this,(FArchive *)&local_res20,(UObject **)param_1,(int)&local_res18);
        if (uVar9 != 0xffffffff) {
          FVar4 = (pFVar10->Events).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar11 = FVar4;
          }
          *(ulong64 *)((longlong)FVar11 + (ulonglong)uVar9 * 0x10) = local_res20;
          FNetTraceCollector::AddReferencedObjectId(pFVar10,local_res20);
        }
        if ((param_1->_padding_ & 0x200) != 0) {
          if (1 < (byte)LogNetPackageMap._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          }
          if (uVar9 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar10,uVar9,(uint)param_1->_padding_);
          }
          goto LAB_1480c1592;
        }
        iVar12 = iVar12 + 1;
        if (uVar9 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar10,uVar9,(uint)param_1->_padding_);
        }
      } while (iVar12 < (int)local_res10[0]);
    }
    if (4 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
LAB_1480c1592:
  pFVar2->IsExportingNetGUIDBunch = bVar7;
  return;
}

// ReceivedAck @ 1480c1630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ReceivedAck(UPackageMapClient *this,int param_1)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  TMultiMap<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
  *this_00;
  FScriptContainerElement *_Dst;
  FPackageMapAckState *this_01;
  code *pcVar3;
  int iVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FNetworkGUID,int> *pTVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  FNetToken local_res8 [2];
  int local_res10;
  FString local_78;
  TMultiMap<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
  *local_68;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  TMultiMap<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
  *local_50;
  int iStack_48;
  int iStack_44;
  undefined8 local_40;
  
  uVar11 = (this->PendingAckGUIDs).ArrayNum - 1;
  local_res10 = param_1;
  if (-1 < (int)uVar11) {
    pTVar2 = &this->PendingAckGUIDs;
    lVar13 = (longlong)(int)uVar11;
    do {
      this_01 = this->OverrideAckState;
      uVar14 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (this->PendingAckGUIDs).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                       *)this_01,(FNetworkGUID *)((pTVar2->AllocatorInstance).Data + lVar13 * 8));
      if ((pTVar8 == (TTuple<FNetworkGUID,int> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0x7fffffff < *(uint *)&pTVar8->field_0x8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExpectedPacketIdRef > GUID_PACKET_ACKED",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x987,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((-1 < *(int *)&pTVar8->field_0x8) && (*(int *)&pTVar8->field_0x8 <= local_res10)) {
        *(undefined4 *)&pTVar8->field_0x8 = 0xffffffff;
        uVar7 = 0;
        if ((int)uVar11 < (this->PendingAckGUIDs).ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + lVar13 * 8;
        iVar9 = (this->PendingAckGUIDs).ArrayNum + ~uVar11;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->PendingAckGUIDs).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->PendingAckGUIDs).ArrayNum,
                   &(this->PendingAckGUIDs).ArrayMax);
      }
      lVar13 = lVar13 + -1;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  iVar4 = local_res10;
  this_00 = &this->NetTokenPendingAckMap;
  iVar9 = *(int *)&(this->NetTokenPendingAckMap).field_0x48;
  iStack_5c = -1;
  if (iVar9 == 0) {
    local_58 = -1;
  }
  else {
    puVar10 = *(undefined1 **)&(this->NetTokenPendingAckMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->NetTokenPendingAckMap).field_0x38;
    }
    local_58 = *(int *)(puVar10 + ((longlong)iVar9 - 1U & (longlong)local_res10) * 4);
    iStack_5c = local_58;
    if (local_58 != -1) {
      do {
        local_58 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iStack_5c * 0x10);
        if (*(int *)(*(longlong *)this_00 + (longlong)iStack_5c * 0x10) == local_res10) break;
        iStack_5c = local_58;
      } while (local_58 != -1);
    }
  }
  local_40 = CONCAT44(uStack_54,local_58);
  local_68 = this_00;
  local_50 = this_00;
  iStack_44 = iStack_5c;
  iStack_60 = local_res10;
  iStack_48 = local_res10;
  iVar12 = iStack_5c;
  iVar9 = local_58;
  do {
    if (iVar12 == -1) {
LAB_1480c1973:
      TMapBase<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
      ::Remove((TMapBase<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
                *)this_00,local_res10);
      return;
    }
    if (6 < (byte)LogNetToken._0_1_) {
      ::FString::PrintfImpl(&local_78,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
    }
    TSet<UE::Net::FNetToken,DefaultKeyFuncs<UE::Net::FNetToken,0>,FDefaultSetAllocator>::
    Emplace<UE::Net::FNetToken_const_&>
              (&this->AcknowledgedExportedNetTokens,local_res8,
               (bool *)(*(longlong *)this_00 + 4 + (longlong)iVar12 * 0x10));
    if (iVar9 == -1) goto LAB_1480c1973;
    iVar12 = iVar9;
    do {
      iVar9 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
      if (*(int *)(*(longlong *)this_00 + (longlong)iVar12 * 0x10) == iVar4) break;
      iVar12 = iVar9;
    } while (iVar9 != -1);
  } while( true );
}

// ReceivedNak @ 1480c19a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ReceivedNak(UPackageMapClient *this,int param_1)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FPackageMapAckState *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FNetworkGUID,int> *pTVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = (this->PendingAckGUIDs).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    pTVar2 = &this->PendingAckGUIDs;
    lVar8 = (longlong)(int)uVar9;
    do {
      this_00 = this->OverrideAckState;
      uVar10 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->PendingAckGUIDs).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar6 = TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                       *)this_00,(FNetworkGUID *)((pTVar2->AllocatorInstance).Data + lVar8 * 8));
      if ((pTVar6 == (TTuple<FNetworkGUID,int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0x7fffffff < *(uint *)&pTVar6->field_0x8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExpectedPacketIdRef > GUID_PACKET_ACKED",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x9a3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)&pTVar6->field_0x8 == param_1) {
        *(undefined4 *)&pTVar6->field_0x8 = 0xfffffffe;
        uVar5 = 0;
        if ((int)uVar9 < (this->PendingAckGUIDs).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + lVar8 * 8;
        iVar7 = (this->PendingAckGUIDs).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->PendingAckGUIDs).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->PendingAckGUIDs).ArrayNum,
                   &(this->PendingAckGUIDs).ArrayMax);
      }
      lVar8 = lVar8 + -1;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  TMapBase<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
  ::Remove((TMapBase<int,UE::Net::FNetToken,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Net::FNetToken,1>_>
            *)&this->NetTokenPendingAckMap,param_1);
  return;
}

// RemoveUnmappedNetGUIDReference @ 1480ca890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::RemoveUnmappedNetGUIDReference(UPackageMapClient *this,FNetworkGUID param_1)

{
  TSharedPtr<FNetGUIDCache,1> *this_00;
  uint uVar1;
  FNetworkGUID_u_0 *pFVar2;
  FNetGUIDCache *pFVar3;
  FRefCountedNetGUIDArray *this_01;
  FNetworkGUID_u_0 *pFVar4;
  undefined1 *puVar5;
  FNetworkGUID_u_0 *pFVar6;
  FNetworkGUID_u_0 local_res10;
  FNetworkGUID_u_0 local_res18 [2];
  FString local_48;
  FString local_38;
  
  if (UE::Net::Private::bRemapStableSubobjects) {
    this_00 = &this->GuidCache;
    pFVar3 = this_00->Object;
    if ((pFVar3 != (FNetGUIDCache *)0x0) && (1 < (ulonglong)param_1.field0_0x0)) {
      pFVar6 = (FNetworkGUID_u_0 *)0x0;
      pFVar4 = pFVar6;
      if (*(int *)&(pFVar3->ObjectLookup).field_0x8 != *(int *)&(pFVar3->ObjectLookup).field_0x34) {
        puVar5 = *(undefined1 **)&(pFVar3->ObjectLookup).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(pFVar3->ObjectLookup).field_0x38;
        }
        uVar1 = *(uint *)(puVar5 + (((ulonglong)param_1.field0_0x0 >> 0x20) * 0x17 +
                                    (longlong)param_1.field0_0x0 &
                                   (ulonglong)(*(int *)&(pFVar3->ObjectLookup).field_0x48 - 1)) * 4)
        ;
        if (uVar1 != 0xffffffff) {
          do {
            pFVar4 = (FNetworkGUID_u_0 *)
                     ((longlong)(int)uVar1 * 0x40 + *(longlong *)&pFVar3->ObjectLookup);
            if ((FNetworkGUID_u_0)pFVar4->ObjectId == param_1.field0_0x0) break;
            uVar1 = pFVar4[7].Value;
            pFVar4 = pFVar6;
          } while (uVar1 != 0xffffffff);
        }
      }
      pFVar2 = pFVar4 + 1;
      if (pFVar4 == (FNetworkGUID_u_0 *)0x0) {
        pFVar2 = pFVar6;
      }
      if (pFVar2 != (FNetworkGUID_u_0 *)0x0) {
        pFVar2 = pFVar2 + 1;
        local_res10 = param_1.field0_0x0;
        pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
        this_01 = TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
                  ::Find((TMapBase<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>_>
                          *)&pFVar3->UnmappedStablyNamedGuids_OuterToInner,(FNetworkGUID *)pFVar2);
        if (this_01 != (FRefCountedNetGUIDArray *)0x0) {
          if (6 < (byte)LogNetPackageMap._0_1_) {
            pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
            FNetGUIDCache::Describe(pFVar3,&local_38,(FNetworkGUID *)pFVar2);
            pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
            FNetGUIDCache::Describe(pFVar3,&local_48,(FNetworkGUID *)&local_res10);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          UE::Net::Private::FRefCountedNetGUIDArray::RemoveSwap(this_01,param_1);
          if ((this_01->NetGUIDs).ArrayNum == 0) {
            pFVar3 = TSharedPtr<FNetGUIDCache,1>::operator->(this_00);
            local_res18[0] = (FNetworkGUID_u_0)pFVar2->ObjectId;
            if (*(int *)&(pFVar3->UnmappedStablyNamedGuids_OuterToInner).field_0x8 !=
                *(int *)&(pFVar3->UnmappedStablyNamedGuids_OuterToInner).field_0x34) {
              TSet<TTuple<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>,FDefaultSetAllocator>
              ::RemoveImpl<FNetworkGUID>
                        ((TSet<TTuple<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UE::Net::Private::FRefCountedNetGUIDArray,0>,FDefaultSetAllocator>
                          *)&pFVar3->UnmappedStablyNamedGuids_OuterToInner,
                         (int)((ulonglong)local_res18[0] >> 0x20) * 0x17 + local_res18[0].Value,
                         (FNetworkGUID *)local_res18);
            }
          }
        }
      }
    }
  }
  return;
}

// ReportSyncLoadsForActorSpawn @ 1480cb440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::ReportSyncLoadsForActorSpawn(UPackageMapClient *this,AActor *param_1)

{
  int iVar1;
  FNetGUIDCache *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  undefined4 local_88;
  TObjectPtr<UNetDriver>_u_0 local_80;
  AActor *pAStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FDestructionSentinel local_60;
  
  if (bNetReportSyncLoads) {
    pFVar12 = (this->TrackedSyncLoadedGUIDs).AllocatorInstance.Data;
    local_res20 = (this->TrackedSyncLoadedGUIDs).ArrayNum;
    uVar10 = (ulonglong)(int)local_res20;
    local_90 = pFVar12 + uVar10 * 8;
    while( true ) {
      pFVar4 = local_90;
      local_98 = pFVar12;
      if ((this->TrackedSyncLoadedGUIDs).ArrayNum != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNetworkGUID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar12 == pFVar4) break;
      local_a0 = *(longlong *)pFVar12;
      uStack_68 = (**(code **)(this->_padding_ + 0x330))(this,&local_a0,0);
      local_88 = 2;
      local_80.DebugPtr = (UNetDriver *)0x0;
      local_70 = 0;
      if (this->Connection != (UNetConnection *)0x0) {
        local_80 = (this->Connection->Driver).field0_0x0;
      }
      pAStack_78 = param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnSyncLoadDetected,(FWriteAccessScope *)&local_60);
      bVar7 = false;
      FNetDelegates::OnSyncLoadDetected._28_4_ = FNetDelegates::OnSyncLoadDetected._28_4_ + 1;
      uVar11 = FNetDelegates::OnSyncLoadDetected._16_4_ - 1;
      if (-1 < (int)uVar11) {
        lVar15 = (longlong)(int)uVar11 << 4;
        bVar7 = false;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (int)FNetDelegates::OnSyncLoadDetected._16_4_) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar15 + 8 + FNetDelegates::OnSyncLoadDetected._8_8_) == 0) ||
              (*(longlong **)(lVar15 + FNetDelegates::OnSyncLoadDetected._8_8_) == (longlong *)0x0))
             || (cVar6 = (**(code **)(**(longlong **)
                                        (lVar15 + FNetDelegates::OnSyncLoadDetected._8_8_) + 0x68))
                                   (), cVar6 == '\0')) {
            bVar7 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      FNetDelegates::OnSyncLoadDetected._28_4_ = FNetDelegates::OnSyncLoadDetected._28_4_ + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FNetDelegates::OnSyncLoadDetected,false);
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->GuidCache).Object;
      local_a8 = local_a0;
      pFVar12 = (pFVar2->SyncLoadedGUIDs).AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar12 + (longlong)(pFVar2->SyncLoadedGUIDs).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (pFVar2->SyncLoadedGUIDs).ArrayNum;
      if (iVar1 != 0) {
        pFVar12 = (pFVar2->SyncLoadedGUIDs).AllocatorInstance.Data;
        iVar16 = 0;
        lVar15 = 0;
        bVar7 = *(longlong *)pFVar12 != local_a8;
        lVar9 = local_a8;
        iVar13 = 0;
        do {
          iVar14 = iVar13;
          do {
            lVar15 = lVar15 + 1;
            iVar14 = iVar14 + 1;
            if (iVar1 <= lVar15) break;
          } while (bVar7 == (*(longlong *)(pFVar12 + lVar15 * 8) != lVar9));
          if (bVar7 != false) {
            if (iVar16 != iVar13) {
              memmove(pFVar12 + (longlong)iVar16 * 8,pFVar12 + (longlong)iVar13 * 8,
                      (longlong)(iVar14 - iVar13) << 3);
              lVar9 = local_a8;
            }
            iVar16 = iVar16 + (iVar14 - iVar13);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar13 = iVar14;
        } while (lVar15 < iVar1);
        (pFVar2->SyncLoadedGUIDs).ArrayNum = iVar16;
      }
      uVar10 = (ulonglong)local_res20;
      pFVar12 = local_98 + 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001480cb7ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))(this);
  return;
}

// ReportSyncLoadsForProperty @ 1480cb800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::ReportSyncLoadsForProperty
          (UPackageMapClient *this,FProperty *param_1,UObject *param_2)

{
  int iVar1;
  FNetGUIDCache *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 local_res20 [8];
  longlong local_b8;
  uint local_b0;
  longlong local_a8;
  FScriptContainerElement *local_a0;
  FNetGUIDCache *local_98;
  FScriptContainerElement *local_90;
  undefined4 local_88;
  TObjectPtr<UNetDriver>_u_0 local_80;
  UObject *pUStack_78;
  FProperty *local_70;
  undefined8 uStack_68;
  FDestructionSentinel local_60;
  
  if (bNetReportSyncLoads) {
    pFVar12 = (this->TrackedSyncLoadedGUIDs).AllocatorInstance.Data;
    local_b0 = (this->TrackedSyncLoadedGUIDs).ArrayNum;
    uVar10 = (ulonglong)(int)local_b0;
    local_90 = pFVar12 + uVar10 * 8;
    while( true ) {
      pFVar4 = local_90;
      local_a0 = pFVar12;
      if ((this->TrackedSyncLoadedGUIDs).ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNetworkGUID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar12 == pFVar4) break;
      local_a8 = *(longlong *)pFVar12;
      uStack_68 = (**(code **)(this->_padding_ + 0x330))(this,&local_a8,0);
      local_88 = 1;
      local_80.DebugPtr = (UNetDriver *)0x0;
      if (this->Connection != (UNetConnection *)0x0) {
        local_80 = (this->Connection->Driver).field0_0x0;
      }
      pUStack_78 = param_2;
      local_70 = param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnSyncLoadDetected,(FWriteAccessScope *)&local_60);
      bVar7 = false;
      FNetDelegates::OnSyncLoadDetected._28_4_ = FNetDelegates::OnSyncLoadDetected._28_4_ + 1;
      uVar11 = FNetDelegates::OnSyncLoadDetected._16_4_ - 1;
      if (-1 < (int)uVar11) {
        lVar15 = (longlong)(int)uVar11 << 4;
        bVar7 = false;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (int)FNetDelegates::OnSyncLoadDetected._16_4_) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar15 + 8 + FNetDelegates::OnSyncLoadDetected._8_8_) == 0) ||
              (*(longlong **)(lVar15 + FNetDelegates::OnSyncLoadDetected._8_8_) == (longlong *)0x0))
             || (cVar6 = (**(code **)(**(longlong **)
                                        (lVar15 + FNetDelegates::OnSyncLoadDetected._8_8_) + 0x68))
                                   (), cVar6 == '\0')) {
            bVar7 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      FNetDelegates::OnSyncLoadDetected._28_4_ = FNetDelegates::OnSyncLoadDetected._28_4_ + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FNetDelegates::OnSyncLoadDetected,false);
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->GuidCache).Object;
      local_b8 = local_a8;
      pFVar12 = (pFVar2->SyncLoadedGUIDs).AllocatorInstance.Data;
      local_98 = pFVar2;
      if (((pFVar12 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar12 + (longlong)(pFVar2->SyncLoadedGUIDs).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (pFVar2->SyncLoadedGUIDs).ArrayNum;
      if (iVar1 != 0) {
        pFVar12 = (pFVar2->SyncLoadedGUIDs).AllocatorInstance.Data;
        iVar16 = 0;
        lVar15 = 0;
        bVar7 = *(longlong *)pFVar12 != local_b8;
        lVar9 = local_b8;
        iVar13 = 0;
        do {
          iVar14 = iVar13;
          do {
            lVar15 = lVar15 + 1;
            iVar14 = iVar14 + 1;
            if (iVar1 <= lVar15) break;
          } while (bVar7 == (*(longlong *)(pFVar12 + lVar15 * 8) != lVar9));
          if (bVar7 != false) {
            if (iVar16 != iVar13) {
              memmove(pFVar12 + (longlong)iVar16 * 8,pFVar12 + (longlong)iVar13 * 8,
                      (longlong)(iVar14 - iVar13) << 3);
              lVar9 = local_b8;
            }
            iVar16 = iVar16 + (iVar14 - iVar13);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar13 = iVar14;
        } while (lVar15 < iVar1);
        (local_98->SyncLoadedGUIDs).ArrayNum = iVar16;
      }
      uVar10 = (ulonglong)local_b0;
      pFVar12 = local_a0 + 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001480cbb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))(this);
  return;
}

// ResetAckState @ 1480cc520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ResetAckState(UPackageMapClient *this)

{
  int *piVar1;
  
  FPackageMapAckState::Reset(&this->AckState);
  piVar1 = &(this->PendingAckGUIDs).ArrayMax;
  (this->PendingAckGUIDs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingAckGUIDs).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetQueuedActorDelinquencyAnalytics @ 1480cca40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ResetQueuedActorDelinquencyAnalytics(UPackageMapClient *this)

{
  FDelinquencyAnalytics::Reset(&(this->DelinquentQueuedActors).DelinquentQueuedActors);
  (this->DelinquentQueuedActors).MaxConcurrentQueuedActors = 0;
  return;
}

// ResetTrackedSyncLoadedGuids @ 1480ccd20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::ResetTrackedSyncLoadedGuids(UPackageMapClient *this)

{
  (this->TrackedSyncLoadedGUIDs).ArrayNum = 0;
  if ((this->TrackedSyncLoadedGUIDs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TrackedSyncLoadedGUIDs).AllocatorInstance,0,
               &(this->TrackedSyncLoadedGUIDs).ArrayMax);
  }
  return;
}

// ResolvePathAndAssignNetGUID @ 1480ccf20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UPackageMapClient::ResolvePathAndAssignNetGUID
          (UPackageMapClient *this,FNetworkGUID *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                     ,0x52d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (UObject *)0x0;
}

// RestorePackageMapExportAckStatus @ 1480ccf80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::RestorePackageMapExportAckStatus
          (UPackageMapClient *this,FPackageMapAckState *param_1)

{
  FPackageMapAckState::operator=(&this->AckState,param_1);
  return;
}

// SavePackageMapExportAckStatus @ 1480cd8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::SavePackageMapExportAckStatus
          (UPackageMapClient *this,FPackageMapAckState *param_1)

{
  FPackageMapAckState::operator=(param_1,&this->AckState);
  return;
}

// Serialize @ 1480cebe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPackageMapClient::Serialize(UPackageMapClient *this,FArchive *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FString local_58;
  FScopeMarker local_48;
  
  ::FString::FString(&local_58,"UPackageMapClient::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_48,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
  }
  UPackageMap::Serialize((UPackageMap *)this,param_1);
  ::FString::FString(&local_58,"Super");
  if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
              (local_48.ScopeStack,&local_58,
               *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                  *)&this->NetGUIDExportCountMap,param_1);
    ::FString::FString(&local_58,"NetGUIDExportCountMap");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->ExportGUIDArchives).ArrayNum << 4,
               (longlong)(this->ExportGUIDArchives).ArrayMax << 4);
    iVar1 = (this->ExportGUIDArchives).ArrayNum;
    pFVar4 = (this->ExportGUIDArchives).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ExportGUIDArchives).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar5) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar4 + 8),(longlong)*(int *)(pFVar4 + 0xc));
      pFVar4 = pFVar4 + 0x10;
    }
    ::FString::FString(&local_58,"ExportGUIDArchives");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->CurrentExportNetGUIDs,param_1);
    ::FString::FString(&local_58,"CurrentExportNetGUIDS");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    TSet<TTuple<FNetworkGUID,double>,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FNetworkGUID,double>,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>,FDefaultSetAllocator>
                  *)&this->CurrentQueuedBunchNetGUIDs,param_1);
    ::FString::FString(&local_58,"CurrentQueuedBunchNetGUIDs");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->PendingAckGUIDs).ArrayNum << 3,
               (longlong)(this->PendingAckGUIDs).ArrayMax << 3);
    ::FString::FString(&local_58,"PendingAckGUIDs");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
                  *)&this->AckState,param_1);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)
                       *(int *)&(this->AckState).NetFieldExportGroupPathAcked.Elements.field_0x8 *
                       0xc,
               (longlong)*(int *)&(this->AckState).NetFieldExportGroupPathAcked.Elements.field_0xc *
               0xc);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)
                       (*(int *)&(this->AckState).NetFieldExportGroupPathAcked.Elements.field_0x28 +
                        0x1fU >> 5) << 2,
               (ulonglong)
               (*(int *)&(this->AckState).NetFieldExportGroupPathAcked.Elements.field_0x2c + 0x1fU
               >> 5) << 2);
    lVar3 = (longlong)(this->AckState).NetFieldExportGroupPathAcked.HashSize << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar3,lVar3);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::CountBytes
              (&(this->AckState).NetFieldExportAcked,param_1);
    ::FString::FString(&local_58,"AckState");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->ExportBunches).ArrayNum << 3,
               (longlong)(this->ExportBunches).ArrayMax << 3);
    pFVar5 = (this->ExportBunches).AllocatorInstance.Data;
    iVar1 = (this->ExportBunches).ArrayNum;
    pFVar4 = pFVar5 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->ExportBunches).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FOutBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar5 == pFVar4) break;
      plVar2 = *(longlong **)pFVar5;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x270))(plVar2,param_1);
      }
      pFVar5 = pFVar5 + 8;
    }
    ::FString::FString(&local_58,"ExportBunches");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->MustBeMappedGuidsInLastBunch).ArrayNum << 3,
               (longlong)(this->MustBeMappedGuidsInLastBunch).ArrayMax << 3);
    ::FString::FString(&local_58,"MustBeMappedGuidsInLastBunch");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::CountBytes
              (&this->NetFieldExports,param_1);
    ::FString::FString(&local_58,"NetFieldExports");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_48.PreWorkPos = *(ulong64 *)&local_48.Ar[1].field_0x8;
    }
    FDelinquencyAnalytics::CountBytes
              (&(this->DelinquentQueuedActors).DelinquentQueuedActors,param_1);
    ::FString::FString(&local_58,"DelinquentQueuedActors");
    if (local_48.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_48.ScopeStack,&local_58,
                 *(longlong *)&local_48.Ar[1].field_0x8 - local_48.PreWorkPos);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_48);
  return;
}

// Serialize @ 1480cf250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::Serialize(UPackageMapClient *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeNetFieldExportDelta @ 1480cf280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::SerializeNetFieldExportDelta(UPackageMapClient *this,FArchive *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  TMap<FString,TSharedPtr<FNetFieldExportGroup,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>_>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_158 [32];
  ulong64 local_120;
  ulonglong local_118 [2];
  longlong *local_108;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *pTStack_e0;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *local_d8;
  undefined2 local_d0;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((param_1->field_0x28 & 4) == 0) {
    ReceiveNetFieldExports(this,param_1);
  }
  else {
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = &((this->GuidCache).Object)->NetFieldExportGroupMap;
    TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_c8,
               (TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                *)pTVar8);
    local_d0 = 0;
    stack0xffffffffffffff08 = local_c8._16_16_;
    local_108 = (longlong *)local_c8._0_8_;
    auStack_100._0_8_ = local_c8._8_8_;
    local_e8 = local_a8;
    pTStack_e0 = pTStack_a0;
    uVar7 = local_c8._24_8_ >> 0x20;
    local_d8 = (TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                *)pTVar8;
    if (local_c8._28_4_ < *(int *)(local_c8._16_8_ + 0x18)) {
      do {
        pTVar1 = *(TReferenceControllerBase<1> **)(*local_108 + 0x18 + (longlong)(int)uVar7 * 0x28);
        lVar2 = *(longlong *)(*local_108 + 0x10 + (longlong)(int)uVar7 * 0x28);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar2 != 0) {
          lVar9 = 0;
          for (uVar10 = 0; (int)uVar10 < *(int *)(lVar2 + 0x20); uVar10 = uVar10 + 1) {
            uVar11 = ~uVar10 >> 0x1f;
            uVar5 = 0;
            if ((int)uVar10 < *(int *)(lVar2 + 0x20)) {
              uVar5 = uVar11;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)(lVar9 + 0x20 + *(longlong *)(lVar2 + 0x18)) != '\0') {
              uVar5 = 0;
              if ((int)uVar10 < *(int *)(lVar2 + 0x20)) {
                uVar5 = uVar11;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(char *)(lVar9 + 0x21 + *(longlong *)(lVar2 + 0x18)) != '\0') {
                if ((*(int *)(lVar2 + 0x10) == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ExportGroup->PathNameIndex != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                       ,0x6cd,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_118[0] = (ulonglong)*(uint *)(lVar2 + 0x10) << 0x20 | (longlong)(int)uVar10;
                uVar5 = 0;
                if ((int)uVar10 < *(int *)(lVar2 + 0x20)) {
                  uVar5 = uVar11;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if ((uVar10 != *(uint *)(lVar9 + 0x10 + *(longlong *)(lVar2 + 0x18))) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("i == ExportGroup->NetFieldExports[i].Handle",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                       ,0x6d1,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
                Emplace<unsigned___int64_const_&>(&local_98,&local_120,(bool *)local_118);
                uVar5 = 0;
                if ((int)uVar10 < *(int *)(lVar2 + 0x20)) {
                  uVar5 = uVar11;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(undefined1 *)(lVar9 + 0x21 + *(longlong *)(lVar2 + 0x18)) = 0;
              }
            }
            lVar9 = lVar9 + 0x28;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        uStack_f0 = uStack_f0 & ~auStack_100._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_100);
        uVar7 = (ulonglong)uStack_ec;
      } while ((int)uStack_ec < *(int *)(auStack_100._8_8_ + 0x18));
      if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar6 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_d8->HashSize < iVar6)) || (iVar6 < local_d8->HashSize)) {
          local_d8->HashSize = iVar6;
          TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_d8);
        }
      }
    }
    AppendNetFieldExportsInternal(this,param_1,&local_98,ForceExportDirtyGroups);
    this_00 = &this->NetFieldExports;
    bVar4 = 1 < (this->NetFieldExports).HashSize;
    if (!bVar4) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    iVar6 = *(int *)&(this->NetFieldExports).Elements.field_0xc;
    *(undefined4 *)&(this->NetFieldExports).Elements.field_0x8 = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->NetFieldExports).Elements.field_0xc);
    }
    *(undefined4 *)&(this->NetFieldExports).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->NetFieldExports).Elements.field_0x34 = 0;
    iVar6 = *(int *)&(this->NetFieldExports).Elements.field_0x2c;
    *(undefined4 *)&(this->NetFieldExports).Elements.field_0x28 = 0;
    if ((iVar6 < 0) || (0x80 < iVar6)) {
      *(undefined4 *)&(this->NetFieldExports).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->NetFieldExports).Elements.field_0x10,0);
    }
    if (bVar4) {
      (this->NetFieldExports).HashSize = 1;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash
                (this_00);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// SerializeNetFieldExportGroupMap @ 1480cf760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::SerializeNetFieldExportGroupMap
          (UPackageMapClient *this,FArchive *param_1,bool param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  FNetGUIDCache *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  FNetFieldExportGroup *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  ulonglong uVar12;
  TMap<FString,TSharedPtr<FNetFieldExportGroup,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>_>
  *pTVar13;
  uint uVar14;
  int iVar15;
  uint local_res10 [4];
  uint local_res20 [2];
  FNetFieldExportGroup *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  uint local_108;
  undefined1 local_104 [8];
  TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&> local_fc;
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  FNetFieldExportGroup *local_a8;
  uint *local_a0;
  uint *local_98;
  undefined1 *local_90;
  FNetFieldExportGroup *local_88;
  FNetFieldExportGroup **local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
             *)&((this->GuidCache).Object)->NetFieldExportGroupMap);
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
             *)&((this->GuidCache).Object)->NetFieldExportGroupPathToIndex);
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
             *)&((this->GuidCache).Object)->NetFieldExportGroupIndexToGroup);
    plVar5 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    pTVar9 = _UNK_150651568;
    pFVar8 = ___xmm_00000000000000000000000000000010;
    if ((param_1->field_0x29 & 2) == 0) {
      if ((uint)UE::Net::MaxSerializedNetExportGroups < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
        if (1 < (byte)LogNetPackageMap._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        }
      }
      else {
        local_108 = 0;
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        if (local_res10[0] != 0) {
          do {
            uVar14 = (uint)pTVar11;
            pTVar11 = ::operator_new(0x40);
            if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
              local_118 = pFVar8;
              pTStack_110 = pTVar9;
              pTVar11 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar11->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFNetFieldExportGroup___00_SharedPointerInternals__6B_
              ;
              pTVar11->SharedReferenceCount = (atomic<int>)0x1;
              pTVar11->WeakReferenceCount = (atomic<int>)0x1;
              pTVar11[1]._padding_ = 0;
              pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
              *(undefined4 *)&pTVar11[2]._padding_ = 0;
              pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
              pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
              pTVar11[3]._padding_ = 0;
              *(undefined1 *)&pTVar11[3].SharedReferenceCount = 1;
              if (((FNetFieldExportGroup *)(pTVar11 + 1) == (FNetFieldExportGroup *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
              uVar14 = local_108;
              local_118 = (FNetFieldExportGroup *)(pTVar11 + 1);
              pTStack_110 = pTVar11;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            ::operator<<(param_1,local_118);
            if ((param_1->field_0x29 & 2) != 0) {
              if (1 < (byte)LogNetPackageMap._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_110);
              return;
            }
            pcVar7 = *(code **)(GEngine->_padding_ + 0x498);
            if ((local_118 == (FNetFieldExportGroup *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(GEngine,this->Connection,local_118,1);
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (this->GuidCache).Object;
            if ((local_118 == (FNetFieldExportGroup *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar2 = &local_118->PathNameIndex;
            if ((local_118 == (FNetFieldExportGroup *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_a8 = local_118;
            local_a0 = puVar2;
            TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
                      ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                        *)&pFVar4->NetFieldExportGroupPathToIndex,
                       (TPairInitializer<FString_const_&,unsigned_int_const_&> *)local_104,
                       (bool *)&local_a8);
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (this->GuidCache).Object;
            local_fc._4_8_ = local_118;
            if ((local_118 == (FNetFieldExportGroup *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_98 = &local_118->PathNameIndex;
            local_90 = (undefined1 *)((longlong)&local_fc.Key + 4);
            TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_&&>_>
                      ((TSet<TTuple<unsigned_int,FNetFieldExportGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetFieldExportGroup_*,0>,FDefaultSetAllocator>
                        *)&pFVar4->NetFieldExportGroupIndexToGroup,
                       (TPairInitializer<unsigned_int_const_&,FNetFieldExportGroup_*_&&> *)
                       (local_104 + 4),(bool *)&local_98);
            if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (this->GuidCache).Object;
            if ((local_118 == (FNetFieldExportGroup *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_88 = local_118;
            local_80 = &local_118;
            TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FNetFieldExportGroup,1>_const_&>_>
                      ((TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                        *)&pFVar4->NetFieldExportGroupMap,&local_fc,(bool *)&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_110);
            local_108 = uVar14 + 1;
            pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)local_108;
          } while (local_108 < local_res10[0]);
        }
      }
    }
    else if (1 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
  else {
    iVar15 = 1;
    if (param_2) {
      this_00 = &this->NetFieldExports;
      bVar10 = 1 < (this->NetFieldExports).HashSize;
      if (!bVar10) {
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        UnhashElements(this_00);
      }
      puVar1 = &(this->NetFieldExports).Elements.field_0xc;
      *(undefined4 *)&(this->NetFieldExports).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->NetFieldExports).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->NetFieldExports).Elements.field_0x34 = 0;
      iVar3 = *(int *)&(this->NetFieldExports).Elements.field_0x2c;
      *(undefined4 *)&(this->NetFieldExports).Elements.field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->NetFieldExports).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->NetFieldExports).Elements.field_0x10,0);
      }
      if (bVar10) {
        (this->NetFieldExports).HashSize = 1;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash
                  (this_00);
      }
    }
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->GuidCache).Object;
    local_res20[0] =
         *(int *)&(pFVar4->NetFieldExportGroupMap).field_0x8 -
         *(int *)&(pFVar4->NetFieldExportGroupMap).field_0x34;
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar13 = &((this->GuidCache).Object)->NetFieldExportGroupMap;
    TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                *)pTVar13);
    local_b0 = 0;
    stack0xffffffffffffff28 = local_78._16_16_;
    local_e8 = (longlong *)local_78._0_8_;
    auStack_e0._0_8_ = local_78._8_8_;
    local_c8 = local_58;
    pTStack_c0 = pTStack_50;
    uVar12 = local_78._24_8_ >> 0x20;
    local_b8 = (TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
                *)pTVar13;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        ::operator<<(param_1,*(FNetFieldExportGroup **)
                              (*local_e8 + 0x10 + (longlong)(int)uVar12 * 0x28));
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar12 = (ulonglong)uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        uVar14 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (3 < uVar14) {
          uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar6 & 0x1f);
        }
        if (((0 < (int)uVar14) && (local_b8->HashSize < iVar15)) || (iVar15 < local_b8->HashSize)) {
          local_b8->HashSize = iVar15;
          TSet<TTuple<FString,TSharedPtr<FNetFieldExportGroup,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FNetFieldExportGroup,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
  }
  return;
}

// SerializeNewActor @ 1480cff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::SerializeNewActor
          (UPackageMapClient *this,FArchive *param_1,UActorChannel *param_2,AActor **param_3)

{
  code *pcVar1;
  USceneComponent *pUVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  FNetGUIDCache *pFVar15;
  UClass *pUVar16;
  UChildActorComponent *this_00;
  TVector<double> *pTVar17;
  FWeakObjectPtr FVar18;
  AActor *extraout_RAX;
  TRotator<double> *pTVar19;
  double *pdVar20;
  FNetGUIDCache *pFVar21;
  FNetGUIDCache *extraout_RAX_00;
  FNetGUIDCache *extraout_RAX_01;
  FNetGUIDCache *extraout_RAX_02;
  FNetGUIDCache *extraout_RAX_03;
  UWorld *pUVar22;
  TQuat<double> *pTVar23;
  AActor *pAVar24;
  UObject *pUVar25;
  int iVar26;
  FWeakObjectPtr FVar27;
  ForAnyElementType this_01;
  longlong *plVar28;
  undefined1 *puVar29;
  USceneComponent *pUVar30;
  FWeakObjectPtr *pFVar31;
  FWeakObjectPtr FVar32;
  byte bVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  double dVar48;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  double dVar63;
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  undefined1 auStackY_668 [32];
  bool local_628;
  bool local_627;
  bool local_626;
  bool local_625;
  bool local_624;
  undefined1 local_623;
  FNetworkGUID_u_0 local_620 [2];
  FWeakObjectPtr local_610;
  UActorChannel *local_608;
  FString local_600;
  USceneComponent *local_5f0;
  FLLMScope local_5e8;
  FLLMScope local_5e4;
  FLLMScope local_5e0 [2];
  longlong local_5d8;
  TVector<double>_u_0 local_5d0;
  FWeakObjectPtr local_5b8;
  TRotator<double> local_5b0;
  FString local_598;
  FWeakObjectPtr local_588;
  TVector<double>_u_0 local_580;
  TVector<double>_u_0 local_568;
  FString local_550;
  FString local_540;
  UPackageMapClient *local_530;
  FArchive *local_528;
  bool *local_520;
  FName local_518;
  FMemScope local_510;
  FName local_508;
  FName local_500;
  UActorChannel **local_4f8;
  FName local_4f0;
  FMemScope local_4e8;
  FName local_4e0;
  FName local_4d8;
  FName local_4d0;
  FMemScope local_4c8;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  undefined1 local_3a0 [8];
  UActorChannel **local_398 [2];
  TQuat<double> local_388;
  TVector<double>_u_0 local_368;
  double local_350;
  FWeakObjectPtr local_348;
  FString local_340;
  FString local_330;
  FString local_320;
  TVector<double>_u_0 local_310;
  undefined1 local_2f8 [16];
  double local_2e8;
  TVector<double>_u_0 local_2d8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  bool *local_290;
  double local_288;
  double dStack_280;
  bool *local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  TVector<double> local_248;
  TRotator<double> local_230;
  undefined1 local_218 [32];
  TQuat<double> local_1f8;
  undefined1 local_1d8 [112];
  TTransform<double> local_168;
  undefined1 local_108 [64];
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  FVar32.ObjectIndex = 0;
  FVar32.ObjectSerialNumber = 0;
  iVar34 = 0;
  local_5f0 = (USceneComponent *)((ulonglong)local_5f0 & 0xffffffff00000000);
  local_608 = param_2;
  FLLMScope::FLLMScope(local_5e0,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_4c8,EngineMisc,true);
  if (6 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
  }
  bVar33 = 0;
  if ((param_1->field_0x28 & 1) != 0) {
    bVar33 = (byte)param_1[1].field_0x58 >> 1 & 1;
    if (4 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    (**(code **)(this->_padding_ + 0x318))(this);
  }
  local_588 = (FWeakObjectPtr)*param_3;
  local_620[0].ObjectId = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  Z_Construct_UClass_AActor_NoRegister();
  (*pcVar1)(this,param_1);
  if ((param_1->field_0x29 & 2) == 0) {
    if ((UE::Net::FilterGuidRemapping == 0) && ((this->GuidCache).Object != (FNetGUIDCache *)0x0)) {
      if (local_620[0].ObjectId == 0) {
        local_398[0] = &local_608;
        bVar10 = `UPackageMapClient::SerializeNewActor'::__l69::<lambda_1>::operator()(local_398);
        if (!bVar10) goto LAB_1480d00e6;
      }
      FLLMScope::FLLMScope
                (&local_5e8,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
      local_518 = LLMTagDeclaration_GuidCache.UniqueName;
      FMemScope::FMemScope(&local_510,&local_518,true);
      pFVar15 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Emplace<FNetworkGUID_const_&>
                (&pFVar15->ImportedNetGuids,(FNetworkGUID *)local_3a0,(bool *)local_620);
      FMemScope::~FMemScope(&local_510);
      FLLMScope::~FLLMScope(&local_5e8);
    }
LAB_1480d00e6:
    FVar27 = local_588;
    (local_608->ActorNetGUID).field0_0x0.ObjectId = (ulong64)local_620[0];
    if (local_588 == (FWeakObjectPtr)0x0) {
LAB_1480d0120:
      FVar27 = FVar32;
    }
    else {
      pUVar16 = Z_Construct_UClass_AActor_NoRegister();
      dVar60 = *(double *)((longlong)FVar27 + 0x10);
      iVar26 = (int)pUVar16->_padding_;
      if ((*(int *)((longlong)dVar60 + 0x38) < iVar26) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)((longlong)dVar60 + 0x30) + (longlong)iVar26 * 8) !=
          &pUVar16->_padding_)) goto LAB_1480d0120;
    }
    *param_3 = (AActor *)FVar27;
    local_623 = 0;
    cVar11 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    if (((cVar11 == '\0') || (local_620[0].ObjectId == 0)) || ((local_620[0].ObjectId & 1) != 0)) {
      if ((UE::Net::FilterGuidRemapping != 0) && ((this->GuidCache).Object != (FNetGUIDCache *)0x0))
      {
        if (local_620[0].ObjectId == 0) {
          local_4f8 = &local_608;
          bVar10 = `UPackageMapClient::SerializeNewActor'::__l120::<lambda_2>::operator()
                             (&local_4f8);
          if (!bVar10) goto LAB_1480d0336;
        }
        FLLMScope::FLLMScope
                  (&local_5e4,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
        local_4f0 = LLMTagDeclaration_GuidCache.UniqueName;
        FMemScope::FMemScope(&local_4e8,&local_4f0,true);
        pFVar15 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
        Emplace<FNetworkGUID_const_&>
                  (&pFVar15->ImportedNetGuids,(FNetworkGUID *)(local_3a0 + 4),(bool *)local_620);
        FMemScope::~FMemScope(&local_4e8);
        FLLMScope::~FLLMScope(&local_5e4);
      }
LAB_1480d0336:
      uVar9 = _UNK_15061cc8c;
      uVar8 = _UNK_15061cc88;
      uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if ((local_620[0].ObjectId == 0) || ((local_620[0].ObjectId & 1) != 0)) {
        if (((param_1->field_0x28 & 1) != 0) && (*param_3 == (AActor *)0x0)) {
          if ((4 < (byte)LogNetPackageMap._0_1_) && (this->Connection->bReplay == 0)) {
            pFVar15 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
            local_598.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_598.Data.ArrayNum = 0;
            local_598.Data.ArrayMax = 0;
            FNetGUIDCache::GenerateFullNetGUIDPath_r(pFVar15,(FNetworkGUID *)local_620,&local_598);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_598.Data.AllocatorInstance.Data);
            }
          }
          if ((UE::Net::FilterGuidRemapping != 0) &&
             ((this->GuidCache).Object != (FNetGUIDCache *)0x0)) {
            pFVar15 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                      (&pFVar15->ImportedNetGuids,(FNetworkGUID *)local_620);
          }
        }
      }
      else {
        local_610.ObjectIndex = 0;
        local_610.ObjectSerialNumber = 0;
        local_5b8.ObjectIndex = 0;
        local_5b8.ObjectSerialNumber = 0;
        local_5d0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_5d0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_624 = false;
        local_5d0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_5b0.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_5b0.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_5b0.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_580._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_580._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_580._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_568._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_568._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_568._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if ((param_1->field_0x28 & 4) != 0) {
          this_00 = AActor::GetParentComponent(*param_3);
          if (this_00 != (UChildActorComponent *)0x0) {
            local_610 = (FWeakObjectPtr)
                        UChildActorComponent::GetSpawnableChildActorTemplate(this_00);
          }
          if (local_610 == (FWeakObjectPtr)0x0) {
            local_610 = (FWeakObjectPtr)UObject::GetArchetype((UObject *)*param_3);
          }
          if (UE::Net::Private::SerializeNewActorOverrideLevel != 0) {
            local_5b8 = (FWeakObjectPtr)AActor::GetLevel(*param_3);
          }
          if ((local_610 == (FWeakObjectPtr)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Archetype != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                  ,0x25c,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            uVar12 = (*pcVar1)();
            return (bool)uVar12;
          }
          cVar11 = (**(code **)((*param_3)->_padding_ + 0x100))();
          if ((cVar11 == '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Actor->NeedsLoadForClient()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                  ,0x25d,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            uVar12 = (*pcVar1)();
            return (bool)uVar12;
          }
          cVar11 = (**(code **)((longlong)*(double *)local_610 + 0x100))();
          if ((cVar11 == '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Archetype->NeedsLoadForClient()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                                  ,0x25e,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            uVar12 = (*pcVar1)();
            return (bool)uVar12;
          }
          pUVar30 = ((*param_3)->RootComponent).field0_0x0.DebugPtr;
          local_5f0 = pUVar30;
          if (pUVar30 != (USceneComponent *)0x0) {
            local_310._s_0.X = (pUVar30->ComponentToWorld).Translation.XY.m128d_f64[0];
            local_310._s_0.Y = (pUVar30->ComponentToWorld).Translation.XY.m128d_f64[1];
            local_310._s_0.Z = (pUVar30->ComponentToWorld).Translation.ZW.m128d_f64[0];
            local_2b8 = local_310._s_0.X;
            dStack_2b0 = local_310._s_0.Y;
            local_2a8 = local_310._s_0.Z;
            pTVar17 = FRepMovement::RebaseOntoZeroOrigin
                                (&local_248,(TVector<double> *)&local_310._s_0,*param_3);
            local_580._s_0.X = (pTVar17->field0_0x0)._s_0.X;
            local_580._s_0.Y = (pTVar17->field0_0x0)._s_0.Y;
            local_580._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
            pAVar24 = *param_3;
            FVar27 = (FWeakObjectPtr)(pAVar24->RootComponent).field0_0x0.DebugPtr;
            dVar60 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            dVar57 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            dVar48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            if (FVar27 != (FWeakObjectPtr)0x0) {
              local_388.X = *(double *)((longlong)FVar27 + 0x1f0);
              local_388.Y = (double)(((TArray<FName,TSizedDefaultAllocator<32>_> *)
                                     ((longlong)FVar27 + 0x1f8))->AllocatorInstance).Data;
              pFVar31 = (FWeakObjectPtr *)((longlong)FVar27 + 0x1e0);
              local_388.Z = *(double *)((longlong)FVar27 + 0x200);
              local_388.W = *(double *)((longlong)FVar27 + 0x208);
              if (*pFVar31 == (FWeakObjectPtr)0x0) {
                FVar18 = (FWeakObjectPtr)::operator_new(0x40);
                dVar60 = UE::Math::TQuat<double>::Identity.Y;
                FVar27 = FVar32;
                if (FVar18 != (FWeakObjectPtr)0x0) {
                  *(double *)FVar18 = UE::Math::TQuat<double>::Identity.X;
                  *(double *)((longlong)FVar18 + 8) = dVar60;
                  dVar60 = UE::Math::TQuat<double>::Identity.W;
                  *(double *)((longlong)FVar18 + 0x10) = UE::Math::TQuat<double>::Identity.Z;
                  *(double *)((longlong)FVar18 + 0x18) = dVar60;
                  dVar60 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
                  *(double *)((longlong)FVar18 + 0x20) =
                       UE::Math::TRotator<double>::ZeroRotator.Pitch;
                  *(double *)((longlong)FVar18 + 0x28) = dVar60;
                  *(double *)((longlong)FVar18 + 0x30) =
                       UE::Math::TRotator<double>::ZeroRotator.Roll;
                  FVar27 = FVar18;
                }
                if (pFVar31 != &local_348) {
                  FVar18 = *pFVar31;
                  *pFVar31 = FVar27;
                  ::operator_delete((void *)FVar18,0x40);
                  FVar27 = FVar32;
                }
                ::operator_delete((void *)FVar27,0x40);
                pAVar24 = extraout_RAX;
              }
              FVar18 = *pFVar31;
              auVar41._8_8_ = -(ulonglong)(local_388.Y != *(double *)((longlong)FVar18 + 8));
              auVar41._0_8_ = -(ulonglong)(local_388.X != *(double *)FVar18);
              auVar49._8_8_ = -(ulonglong)(*(double *)((longlong)FVar18 + 0x18) != local_388.W);
              auVar49._0_8_ = -(ulonglong)(*(double *)((longlong)FVar18 + 0x10) != local_388.Z);
              uVar13 = movmskpd((int)pAVar24,auVar49);
              iVar26 = movmskpd(FVar27.ObjectIndex,auVar41);
              if ((uVar13 & 0x3fffffff) != 0 || iVar26 != 0) {
                *(double *)FVar18 = local_388.X;
                *(double *)((longlong)FVar18 + 8) = local_388.Y;
                *(double *)((longlong)FVar18 + 0x10) = local_388.Z;
                *(double *)((longlong)FVar18 + 0x18) = local_388.W;
                pTVar19 = UE::Math::TQuat<double>::Rotator(&local_388,&local_230);
                dVar60 = pTVar19->Yaw;
                *(double *)((longlong)FVar18 + 0x20) = pTVar19->Pitch;
                *(double *)((longlong)FVar18 + 0x28) = dVar60;
                *(double *)((longlong)FVar18 + 0x30) = pTVar19->Roll;
              }
              pUVar30 = local_5f0;
              dVar60 = *(double *)((longlong)FVar18 + 0x30);
              dVar57 = *(double *)((longlong)FVar18 + 0x20);
              dVar48 = *(double *)((longlong)FVar18 + 0x28);
            }
            pbVar6 = __real_3ff0000000000000;
            pUVar2 = ((*param_3)->RootComponent).field0_0x0.DebugPtr;
            if (pUVar2 == (USceneComponent *)0x0) {
              local_288 = ___xmm_3ff00000000000003ff0000000000000;
              dStack_280 = _UNK_150689688;
              local_278 = __real_3ff0000000000000;
              local_5d0._s_0.Z = (double)__real_3ff0000000000000;
              local_5d0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
              local_5d0._s_0.Y = _UNK_150689688;
            }
            else {
              local_290 = (bool *)(pUVar2->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
              local_2a0 = (pUVar2->ComponentToWorld).Scale3D.XY.m128d_f64[0];
              dStack_298 = (pUVar2->ComponentToWorld).Scale3D.XY.m128d_f64[1];
              local_5d0._s_0.Z = (double)local_290;
              local_5d0._s_0.X = local_2a0;
              local_5d0._s_0.Y = dStack_298;
            }
            pUVar2 = (pUVar30->AttachParent).field0_0x0.DebugPtr;
            local_5b0.Pitch = dVar57;
            local_5b0.Yaw = dVar48;
            local_5b0.Roll = dVar60;
            if (pUVar2 != (USceneComponent *)0x0) {
              (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,local_108,pUVar30->AttachSocketName,0)
              ;
              local_2e8 = local_b8;
              local_2f8 = local_c8;
              if (__real_3e45798ee0000000 <
                  (double)CONCAT44(local_c8._4_4_ & uVar7,local_c8._0_4_ & uVar14)) {
                dVar60 = (double)pbVar6 / local_c8._0_8_;
              }
              else {
                dVar60 = 0.0;
              }
              if (__real_3e45798ee0000000 <
                  (double)CONCAT44(local_c8._12_4_ & uVar7,local_c8._8_4_ & uVar14)) {
                dVar57 = (double)pbVar6 / local_c8._8_8_;
              }
              else {
                dVar57 = 0.0;
              }
              if (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) & uVar7,
                                   SUB84(local_b8,0) & uVar14)) {
                local_b8 = (double)pbVar6 / local_b8;
              }
              else {
                local_b8 = 0.0;
              }
              local_5d0._s_0.Y = local_5d0._s_0.Y * dVar57;
              local_5d0._s_0.Z = local_5d0._s_0.Z * local_b8;
              local_5d0._s_0.X = local_5d0._s_0.X * dVar60;
              local_520 = (bool *)local_5d0._s_0.Z;
            }
            pdVar20 = (double *)(**(code **)((*param_3)->_padding_ + 0x360))(*param_3,local_218);
            local_568._s_0.X = *pdVar20;
            local_568._s_0.Y = pdVar20[1];
            local_568._s_0.Z = pdVar20[2];
          }
        }
        local_5d8 = 0;
        pcVar1 = *(code **)(this->_padding_ + 0x2b8);
        pUVar16 = Z_Construct_UClass_UObject_NoRegister();
        pFVar15 = (FNetGUIDCache *)(*pcVar1)(this,param_1,pUVar16,&local_610);
        if ((param_1->field_0x28 & 4) == 0) {
          this_01.Data = (FScriptContainerElement *)this->Connection;
          if ((UNetConnection *)this_01.Data != (UNetConnection *)0x0) {
            uVar13 = UNetConnection::GetNetworkCustomVersion
                               ((UNetConnection *)this_01.Data,&FEngineNetworkCustomVersion::Guid);
            pFVar15 = (FNetGUIDCache *)(ulonglong)uVar13;
            if (4 < uVar13) goto LAB_1480d081b;
          }
        }
        else {
LAB_1480d081b:
          pcVar1 = *(code **)(this->_padding_ + 0x2b8);
          pUVar16 = Z_Construct_UClass_ULevel_NoRegister();
          this_01.Data = (FScriptContainerElement *)this;
          pFVar15 = (FNetGUIDCache *)(*pcVar1)(this,param_1,pUVar16,&local_5b8);
        }
        if ((local_5d8 != 0) && (local_610 == (FWeakObjectPtr)0x0)) {
          pFVar21 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
          uVar13 = *(uint *)&(pFVar21->ObjectLookup).field_0x8;
          this_01.Data = (FScriptContainerElement *)(ulonglong)uVar13;
          uVar35 = (int)((ulonglong)local_5d8 >> 0x20) * 0x17 + (int)local_5d8;
          pFVar15 = pFVar21;
          if (uVar13 != *(uint *)&(pFVar21->ObjectLookup).field_0x34) {
            puVar29 = *(undefined1 **)&(pFVar21->ObjectLookup).field_0x40;
            pFVar15 = (FNetGUIDCache *)(ulonglong)uVar35;
            this_01.Data = (FScriptContainerElement *)
                           (ulonglong)(*(int *)&(pFVar21->ObjectLookup).field_0x48 - 1U & uVar35);
            if (puVar29 == (undefined1 *)0x0) {
              puVar29 = &(pFVar21->ObjectLookup).field_0x38;
            }
            iVar26 = *(int *)(puVar29 + (longlong)this_01.Data * 4);
            if (iVar26 != -1) {
              this_01.Data = *(FScriptContainerElement **)&pFVar21->ObjectLookup;
              do {
                pFVar15 = (FNetGUIDCache *)((longlong)iVar26 * 0x40);
                if (*(longlong *)
                     ((longlong)&((UNetConnection *)this_01.Data)->_padding_ +
                     (longlong)&pFVar15->_padding_) == local_5d8) {
                  if (((iVar26 != -1) &&
                      (pFVar15 = (FNetGUIDCache *)
                                 (&((UNetConnection *)this_01.Data)->_padding_ +
                                 (longlong)iVar26 * 8), pFVar15 != (FNetGUIDCache *)0x0)) &&
                     (pFVar15 != (FNetGUIDCache *)&DAT_fffffffffffffff8)) {
                    if ((byte)LogNetPackageMap._0_1_ < 2) goto LAB_1480d0911;
                    ::FString::PrintfImpl(&local_4b0,L"%llu");
                    ::FName::ToString((FName *)&(pFVar15->ObjectLookup).field_0x10,&local_340);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                    pFVar15 = extraout_RAX_02;
                    this_01.Data = local_4b0.Data.AllocatorInstance.Data;
                    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_340.Data.AllocatorInstance.Data);
                      pFVar15 = extraout_RAX_03;
                      this_01.Data = local_4b0.Data.AllocatorInstance.Data;
                    }
                    goto LAB_1480d0907;
                  }
                  break;
                }
                iVar26 = *(int *)((longlong)&(pFVar15->ObjectLookup).field_0x30 +
                                 (longlong)this_01.Data);
              } while (iVar26 != -1);
            }
          }
          if (1 < (byte)LogNetPackageMap._0_1_) {
            ::FString::PrintfImpl(&local_4a0,L"%llu");
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
            pFVar15 = extraout_RAX_00;
            this_01.Data = local_4a0.Data.AllocatorInstance.Data;
LAB_1480d0907:
            if ((UNetConnection *)this_01.Data != (UNetConnection *)0x0) {
              FMemory::Free(this_01.Data);
              pFVar15 = extraout_RAX_01;
            }
          }
        }
LAB_1480d0911:
        local_625 = false;
        local_628 = false;
        local_626 = false;
        local_627 = false;
        if ((param_1->field_0x28 & 4) != 0) {
          dVar60 = __real_3f1a36e2e0000000;
          if (GbQuantizeActorLocationOnSpawn != false) {
            dVar60 = __real_3f847ae140000000;
          }
          if (((dVar60 < (double)CONCAT44((uint)((ulonglong)
                                                 (local_580._s_0.X -
                                                 UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                 _s_0.X) >> 0x20) & uVar7,
                                          SUB84(local_580._s_0.X -
                                                UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _s_0.X,0) & uVar14)) ||
              (dVar60 < (double)CONCAT44((uint)((ulonglong)
                                                (local_580._s_0.Y -
                                                UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _s_0.Y) >> 0x20) & uVar7,
                                         SUB84(local_580._s_0.Y -
                                               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0
                                               .Y,0) & uVar14))) ||
             (dVar60 < (double)CONCAT44((uint)((ulonglong)
                                               (local_580._s_0.Z -
                                               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0
                                               .Z) >> 0x20) & uVar7,
                                        SUB84(local_580._s_0.Z -
                                              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.
                                              Z,0) & uVar14))) {
            local_625 = true;
          }
          else {
            local_625 = false;
          }
          dVar60 = __real_3f1a36e2e0000000;
          if (GbQuantizeActorVelocityOnSpawn != false) {
            dVar60 = __real_3f847ae140000000;
          }
          if (((dVar60 < (double)CONCAT44((uint)((ulonglong)
                                                 (local_568._s_0.X -
                                                 UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                 _s_0.X) >> 0x20) & uVar7,
                                          SUB84(local_568._s_0.X -
                                                UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _s_0.X,0) & uVar14)) ||
              (dVar60 < (double)CONCAT44((uint)((ulonglong)
                                                (local_568._s_0.Y -
                                                UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _s_0.Y) >> 0x20) & uVar7,
                                         SUB84(local_568._s_0.Y -
                                               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0
                                               .Y,0) & uVar14))) ||
             (dVar60 < (double)CONCAT44((uint)((ulonglong)
                                               (local_568._s_0.Z -
                                               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0
                                               .Z) >> 0x20) & uVar7,
                                        SUB84(local_568._s_0.Z -
                                              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.
                                              Z,0) & uVar14))) {
            local_627 = true;
          }
          else {
            local_627 = false;
          }
          dVar60 = __real_3f847ae140000000;
          if (GbQuantizeActorScaleOnSpawn == false) {
            dVar60 = __real_3f1a36e2e0000000;
          }
          auVar50._8_8_ = 0;
          auVar50._0_8_ = dVar60;
          if (((dVar60 < (double)CONCAT44((uint)((ulonglong)
                                                 (local_5d0._s_0.X -
                                                 UE::Math::TVector<double>::OneVector.field0_0x0.
                                                 _s_0.X) >> 0x20) & uVar7,
                                          SUB84(local_5d0._s_0.X -
                                                UE::Math::TVector<double>::OneVector.field0_0x0._s_0
                                                .X,0) & uVar14)) ||
              (dVar60 < (double)CONCAT44((uint)((ulonglong)
                                                (local_5d0._s_0.Y -
                                                UE::Math::TVector<double>::OneVector.field0_0x0._s_0
                                                .Y) >> 0x20) & uVar7,
                                         SUB84(local_5d0._s_0.Y -
                                               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.
                                               Y,0) & uVar14))) ||
             (dVar60 < (double)CONCAT44((uint)((ulonglong)
                                               (local_5d0._s_0.Z -
                                               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.
                                               Z) >> 0x20) & uVar7,
                                        SUB84(local_5d0._s_0.Z -
                                              UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
                                              ,0) & uVar14))) {
            local_626 = true;
          }
          else {
            local_626 = false;
          }
          auVar5._8_8_ = local_5b0.Yaw;
          auVar5._0_8_ = local_5b0.Pitch;
          auVar41 = divpd(auVar5,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
          local_350 = __real_3f50624de0000000;
          auVar41 = roundpd(auVar50,auVar41,3);
          dVar60 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
          auVar51._0_8_ = auVar41._0_8_ * dVar60;
          dVar57 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
          auVar51._8_8_ = auVar41._8_8_ * dVar57;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = local_5b0.Roll;
          dVar61 = local_5b0.Pitch - auVar51._0_8_;
          dVar63 = local_5b0.Yaw - auVar51._8_8_;
          auVar41 = divpd(auVar42,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
          auVar41 = roundpd(auVar51,auVar41,3);
          dVar48 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
          dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          auVar43._8_4_ = SUB84(dVar63,0);
          auVar43._0_8_ = dVar61;
          auVar43._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
          dVar65 = local_5b0.Roll - auVar41._0_8_ * dVar48;
          dVar66 = 0.0 - auVar41._8_8_ * dVar3;
          uVar36 = -(ulonglong)(0.0 <= dVar61);
          uVar38 = -(ulonglong)(0.0 <= dVar63);
          auVar52._0_8_ = uVar36 & (ulonglong)dVar61;
          auVar52._8_4_ = (undefined4)(uVar38 & (ulonglong)dVar63);
          auVar52._12_4_ = (undefined4)((uVar38 & (ulonglong)dVar63) >> 0x20);
          dVar63 = auVar43._8_8_ + dVar57;
          uVar37 = -(ulonglong)(0.0 <= dVar65);
          uVar39 = -(ulonglong)(0.0 <= dVar66);
          auVar64._0_4_ = ~(uint)uVar36 & SUB84(dVar61 + dVar60,0);
          auVar64._4_4_ = ~(uint)(uVar36 >> 0x20) & (uint)((ulonglong)(dVar61 + dVar60) >> 0x20);
          auVar64._8_4_ = ~(uint)uVar38 & SUB84(dVar63,0);
          auVar64._12_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)dVar63 >> 0x20);
          auVar64 = auVar64 | auVar52;
          auVar58._0_8_ = uVar37 & (ulonglong)dVar65;
          auVar58._8_4_ = (undefined4)(uVar39 & (ulonglong)dVar66);
          auVar58._12_4_ = (undefined4)((uVar39 & (ulonglong)dVar66) >> 0x20);
          auVar44._8_4_ = SUB84(dVar66,0);
          auVar44._0_8_ = dVar65;
          auVar44._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
          dVar63 = auVar44._8_8_ + dVar3;
          auVar62._0_4_ = ~(uint)uVar37 & SUB84(dVar65 + dVar48,0);
          auVar62._4_4_ = ~(uint)(uVar37 >> 0x20) & (uint)((ulonglong)(dVar65 + dVar48) >> 0x20);
          auVar62._8_4_ = ~(uint)uVar39 & SUB84(dVar63,0);
          auVar62._12_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)dVar63 >> 0x20);
          uVar37 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar64._0_8_);
          uVar38 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar64._8_8_);
          auVar53._0_8_ = uVar37 & (ulonglong)(auVar64._0_8_ - dVar60);
          uVar36 = uVar38 & (ulonglong)(auVar64._8_8_ - dVar57);
          auVar53._8_4_ = (undefined4)uVar36;
          auVar53._12_4_ = (undefined4)(uVar36 >> 0x20);
          auVar62 = auVar62 | auVar58;
          auVar45._0_4_ = ~(uint)uVar37 & auVar64._0_4_;
          auVar45._4_4_ = ~(uint)(uVar37 >> 0x20) & auVar64._4_4_;
          auVar45._8_4_ = ~(uint)uVar38 & auVar64._8_4_;
          auVar45._12_4_ = ~(uint)(uVar38 >> 0x20) & auVar64._12_4_;
          auVar53 = auVar53 | auVar45;
          auVar46._8_4_ = SUB84(__real_3f50624de0000000,0);
          auVar46._0_8_ = __real_3f50624de0000000;
          auVar46._12_4_ = (int)((ulonglong)__real_3f50624de0000000 >> 0x20);
          auVar54._0_8_ = (double)CONCAT44(auVar53._4_4_ & uVar7,auVar53._0_4_ & uVar14);
          auVar54._8_4_ = auVar53._8_4_ & uVar8;
          auVar54._12_4_ = auVar53._12_4_ & uVar9;
          auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < auVar54._8_8_);
          auVar47._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar54._0_8_);
          uVar37 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar62._0_8_);
          uVar38 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar62._8_8_);
          iVar26 = movmskpd((int)this_01.Data,auVar47);
          auVar55._0_8_ = (ulonglong)(auVar62._0_8_ - dVar48) & uVar37;
          uVar36 = uVar38 & (ulonglong)(auVar62._8_8_ - dVar3);
          auVar55._8_4_ = (undefined4)uVar36;
          auVar55._12_4_ = (undefined4)(uVar36 >> 0x20);
          auVar59._0_4_ = ~(uint)uVar37 & auVar62._0_4_;
          auVar59._4_4_ = ~(uint)(uVar37 >> 0x20) & auVar62._4_4_;
          auVar59._8_4_ = ~(uint)uVar38 & auVar62._8_4_;
          auVar59._12_4_ = ~(uint)(uVar38 >> 0x20) & auVar62._12_4_;
          auVar55 = auVar55 | auVar59;
          auVar56._0_8_ = (double)CONCAT44(auVar55._4_4_ & uVar7,auVar55._0_4_ & uVar14);
          auVar56._8_4_ = auVar55._8_4_ & uVar8;
          auVar56._12_4_ = auVar55._12_4_ & uVar9;
          lVar40 = -(ulonglong)(__real_3f50624de0000000 < auVar56._8_8_);
          auVar4._8_4_ = (int)lVar40;
          auVar4._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar56._0_8_);
          auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          uVar14 = movmskpd((int)CONCAT71((int7)((ulonglong)pFVar15 >> 8),local_626),auVar4);
          local_628 = (uVar14 & 0x3fffffff) != 0 || iVar26 != 0;
        }
        local_520 = &local_624;
        local_530 = this;
        local_528 = param_1;
        `UPackageMapClient::SerializeNewActor'::__l212::<lambda_3>::operator()
                  (&local_530,(TVector<double> *)&local_580._s_0,
                   &UE::Math::TVector<double>::ZeroVector,GbQuantizeActorLocationOnSpawn,&local_625)
        ;
        (**(code **)(*(longlong *)param_1 + 400))(param_1,&local_628,1);
        if (local_628 == false) {
          local_5b0.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_5b0.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_5b0.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        else if (GbQuantizeActorRotationOnSpawn == false) {
          UE::Math::operator<<(param_1,&local_5b0);
        }
        else {
          UE::Math::TRotator<double>::NetSerialize
                    (&local_5b0,param_1,(UPackageMap *)this,&local_624);
        }
        `UPackageMapClient::SerializeNewActor'::__l212::<lambda_3>::operator()
                  (&local_530,(TVector<double> *)&local_5d0._s_0,
                   &UE::Math::TVector<double>::OneVector,GbQuantizeActorScaleOnSpawn,&local_626);
        `UPackageMapClient::SerializeNewActor'::__l212::<lambda_3>::operator()
                  (&local_530,(TVector<double> *)&local_568._s_0,
                   &UE::Math::TVector<double>::ZeroVector,GbQuantizeActorVelocityOnSpawn,&local_627)
        ;
        FVar27 = local_5b8;
        if (((param_1->field_0x28 & 1) != 0) && (*param_3 == (AActor *)0x0)) {
          if (local_610 == (FWeakObjectPtr)0x0) {
            if (1 < (byte)LogNetPackageMap._0_1_) {
              ::FString::PrintfImpl(&local_460,L"%llu");
              ::FString::PrintfImpl(&local_470,L"%llu");
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
              if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_470.Data.AllocatorInstance.Data);
              }
              if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_460.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            FVar18 = FVar32;
            if (local_5b8 != (FWeakObjectPtr)0x0) {
              pUVar16 = Z_Construct_UClass_ULevel_NoRegister();
              iVar26 = (int)pUVar16->_padding_;
              if (((iVar26 <= *(int *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x30) +
                    (longlong)iVar26 * 8) == &pUVar16->_padding_)) &&
                 (pUVar22 = ULevel::GetWorld((ULevel *)FVar27), FVar18 = FVar27,
                 pUVar22 == (UWorld *)0x0)) {
                if (4 < (byte)LogNetPackageMap._0_1_) {
                  ::FString::PrintfImpl(&local_490,L"%llu");
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_490.Data.AllocatorInstance.Data);
                  }
                }
                goto LAB_1480d1169;
              }
            }
            FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1d8);
            local_1d8._8_8_ = local_610;
            if (local_610 == (FWeakObjectPtr)0x0) {
LAB_1480d0e23:
              local_1d8._8_8_ = FVar32;
            }
            else {
              pUVar16 = Z_Construct_UClass_AActor_NoRegister();
              dVar60 = *(double *)(local_1d8._8_8_ + 0x10);
              iVar26 = (int)pUVar16->_padding_;
              if ((*(int *)((longlong)dVar60 + 0x38) < iVar26) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)((longlong)dVar60 + 0x30) + (longlong)iVar26 * 8) !=
                  &pUVar16->_padding_)) goto LAB_1480d0e23;
            }
            local_1d8[0x32] = local_1d8[0x32] | 3;
            local_1d8[0x30] = AlwaysSpawn;
            pUVar22 = (((this->Connection->Driver).field0_0x0.DebugPtr)->World).field0_0x0.DebugPtr;
            local_1d8._32_8_ = FVar18;
            FRepMovement::RebaseOntoLocalOrigin
                      ((TVector<double> *)&local_368._s_0,(TVector<double> *)&local_580._s_0,
                       &pUVar22->OriginLocation);
            pTVar23 = UE::Math::TRotator<double>::Quaternion(&local_5b0,&local_1f8);
            local_258 = pTVar23->Z;
            dStack_250 = pTVar23->W;
            local_268 = pTVar23->X;
            dStack_260 = pTVar23->Y;
            local_168.Translation.XY.m128d_f64[0] = local_368._s_0.X;
            local_168.Translation.XY.m128d_f64[1] = local_368._s_0.Y;
            local_168.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
            local_168.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
            local_168.Translation.ZW.m128d_f64[0] = local_368._s_0.Z;
            local_168.Translation.ZW.m128d_f64[1] = 0.0;
            local_168.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
            local_168.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
            local_168.Rotation.XY.m128d_f64[0] = local_268;
            local_168.Rotation.XY.m128d_f64[1] = dStack_260;
            local_168.Rotation.ZW.m128d_f64[0] = local_258;
            local_168.Rotation.ZW.m128d_f64[1] = dStack_250;
            pAVar24 = UWorld::SpawnActorAbsolute
                                (pUVar22,*(UClass **)((longlong)local_610 + 0x10),&local_168,
                                 (FActorSpawnParameters *)local_1d8);
            *param_3 = pAVar24;
            if (pAVar24 == (AActor *)0x0) {
              if (2 < (byte)LogNetPackageMap._0_1_) {
                ::FString::PrintfImpl(&local_480,L"%llu");
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_480.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              if (local_627 != false) {
                (**(code **)(pAVar24->_padding_ + 0x4f0))(pAVar24,&local_568);
              }
              if (local_626 != false) {
                local_2d8._s_0.X = local_5d0._s_0.X;
                local_2d8._s_0.Y = local_5d0._s_0.Y;
                local_2d8._s_0.Z = local_5d0._s_0.Z;
                AActor::SetActorRelativeScale3D(*param_3,(TVector<double> *)&local_2d8._s_0);
              }
              pFVar15 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
              FNetGUIDCache::RegisterNetGUID_Client
                        (pFVar15,(FNetworkGUID *)local_620,(UObject *)*param_3);
              local_623 = 1;
            }
            if (local_1d8._64_8_ != 0) {
              plVar28 = (longlong *)(local_1d8 + 0x50);
              if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
                plVar28 = (longlong *)local_1d8._104_8_;
              }
              (**(code **)(*plVar28 + 0x10))();
            }
          }
        }
      }
LAB_1480d1169:
      if ((param_1->field_0x28 & 1) != 0) {
        ReportSyncLoadsForActorSpawn(this,*param_3);
      }
      uVar12 = local_623;
      if ((byte)LogNetPackageMap._0_1_ < 5) goto LAB_1480d16b1;
      if (local_620[0].ObjectId == 0) {
LAB_1480d11a8:
        local_5f0 = (USceneComponent *)((ulonglong)local_5f0 & 0xffffffff00000000);
      }
      else {
        local_5f0 = (USceneComponent *)CONCAT44(local_5f0._4_4_,1);
        if ((local_620[0].ObjectId & 1) != 0) goto LAB_1480d11a8;
      }
      if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        uVar12 = (*pcVar1)();
        return (bool)uVar12;
      }
      pFVar15 = (this->GuidCache).Object;
      local_600.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_600.Data.ArrayNum = 0;
      local_600.Data.ArrayMax = 0;
      if (local_620[0].ObjectId != 0) {
        if (*(int *)&(pFVar15->ObjectLookup).field_0x8 !=
            *(int *)&(pFVar15->ObjectLookup).field_0x34) {
          puVar29 = *(undefined1 **)&(pFVar15->ObjectLookup).field_0x40;
          if (puVar29 == (undefined1 *)0x0) {
            puVar29 = &(pFVar15->ObjectLookup).field_0x38;
          }
          iVar26 = *(int *)(puVar29 +
                           (ulonglong)
                           (*(int *)&(pFVar15->ObjectLookup).field_0x48 - 1U &
                           (int)((ulonglong)local_620[0] >> 0x20) * 0x17 + local_620[0].Value) * 4);
          if (iVar26 != -1) {
            lVar40 = *(longlong *)&pFVar15->ObjectLookup;
            do {
              if (*(ulong64 *)((longlong)iVar26 * 0x40 + lVar40) == local_620[0].ObjectId) {
                if (((iVar26 != -1) && (lVar40 = (longlong)iVar26 * 0x40 + lVar40, lVar40 != 0)) &&
                   (pFVar31 = (FWeakObjectPtr *)(lVar40 + 8), pFVar31 != (FWeakObjectPtr *)0x0)) {
                  FNetGUIDCache::GenerateFullNetGUIDPath_r
                            (pFVar15,(FNetworkGUID *)(lVar40 + 0x10),&local_600);
                  if (1 < local_600.Data.ArrayNum) {
                    ::FString::AppendChars(&local_600,L".",1);
                  }
                  bVar10 = FWeakObjectPtr::IsValid(pFVar31);
                  if (bVar10) {
                    if (((*(longlong *)(lVar40 + 0x18) != 0) &&
                        (pUVar25 = FWeakObjectPtr::Get(pFVar31),
                        *(longlong *)&pUVar25->field_0x18 != *(longlong *)(lVar40 + 0x18))) &&
                       (2 < (byte)LogNetPackageMap._0_1_)) {
                      pUVar25 = FWeakObjectPtr::Get(pFVar31);
                      local_4e0.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
                      local_4e0.Number = *(uint *)&pUVar25->field_0x1c;
                      ::FName::ToString(&local_4e0,&local_450);
                      ::FName::ToString((FName *)(lVar40 + 0x18),&local_330);
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
                      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_330.Data.AllocatorInstance.Data);
                      }
                      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_450.Data.AllocatorInstance.Data);
                      }
                    }
                    pUVar25 = FWeakObjectPtr::Get(pFVar31);
                    local_4d8.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
                    local_4d8.Number = *(uint *)&pUVar25->field_0x1c;
                    ::FName::ToString(&local_4d8,&local_420);
                    ::FString::PrintfImpl(&local_430,L"%llu");
                    ::FString::PrintfImpl(&local_440,L"[%s]%s");
                    if (local_440.Data.ArrayNum != 0) {
                      iVar34 = local_440.Data.ArrayNum + -1;
                    }
                    ::FString::AppendChars
                              (&local_600,(wchar_t *)local_440.Data.AllocatorInstance.Data,iVar34);
                    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_440.Data.AllocatorInstance.Data);
                    }
                    local_320.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
                    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_430.Data.AllocatorInstance.Data);
                      local_320.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
                    }
                  }
                  else if (*(longlong *)(lVar40 + 0x18) == 0) {
                    ::FString::PrintfImpl(&local_400,L"%llu");
                    ::FString::PrintfImpl(&local_410,L"[%s]EMPTY");
                    if (local_410.Data.ArrayNum != 0) {
                      iVar34 = local_410.Data.ArrayNum + -1;
                    }
                    ::FString::AppendChars
                              (&local_600,(wchar_t *)local_410.Data.AllocatorInstance.Data,iVar34);
                    local_320.Data.AllocatorInstance.Data = local_400.Data.AllocatorInstance.Data;
                    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_410.Data.AllocatorInstance.Data);
                      local_320.Data.AllocatorInstance.Data = local_400.Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    ::FName::ToString((FName *)(lVar40 + 0x18),&local_320);
                    ::FString::PrintfImpl(&local_3e0,L"%llu");
                    ::FString::PrintfImpl(&local_3f0,L"[%s]%s");
                    if (local_3f0.Data.ArrayNum != 0) {
                      iVar34 = local_3f0.Data.ArrayNum + -1;
                    }
                    ::FString::AppendChars
                              (&local_600,(wchar_t *)local_3f0.Data.AllocatorInstance.Data,iVar34);
                    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
                    }
                    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                    }
                  }
                  goto LAB_1480d15f8;
                }
                break;
              }
              iVar26 = *(int *)((longlong)iVar26 * 0x40 + 0x38 + lVar40);
            } while (iVar26 != -1);
          }
        }
        ::FString::PrintfImpl(&local_3c0,L"%llu");
        ::FString::PrintfImpl(&local_3d0,L"[%s]NOT_IN_CACHE");
        if (local_3d0.Data.ArrayNum != 0) {
          iVar34 = local_3d0.Data.ArrayNum + -1;
        }
        ::FString::AppendChars(&local_600,(wchar_t *)local_3d0.Data.AllocatorInstance.Data,iVar34);
        local_320.Data.AllocatorInstance.Data = local_3c0.Data.AllocatorInstance.Data;
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
          local_320.Data.AllocatorInstance.Data = local_3c0.Data.AllocatorInstance.Data;
        }
LAB_1480d15f8:
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
      }
      pAVar24 = *param_3;
      if (pAVar24 != (AActor *)0x0) {
        local_4d0 = (FName)pAVar24->_padding_;
        ::FName::ToString(&local_4d0,&local_3b0);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if ((pAVar24 != (AActor *)0x0) &&
         (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      uVar12 = local_623;
      if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_600.Data.AllocatorInstance.Data);
        uVar12 = local_623;
      }
      goto LAB_1480d16b1;
    }
    if (bVar33 == 0) {
      if (1 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_4c0,L"%llu");
        if (*param_3 == (AActor *)0x0) {
          ::FString::FString(&local_550,L"None");
        }
        else {
          local_508 = (FName)(*param_3)->_padding_;
          ::FName::ToString(&local_508,&local_550);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_550.Data.AllocatorInstance.Data);
        }
        if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
        }
      }
      FArchiveState::SetError((FArchiveState *)param_1);
      uVar12 = 0;
      goto LAB_1480d16b1;
    }
    if (4 < (byte)LogNetPackageMap._0_1_) {
      if (*param_3 == (AActor *)0x0) {
        ::FString::FString(&local_540,L"None");
      }
      else {
        local_500 = (FName)(*param_3)->_padding_;
        ::FName::ToString(&local_500,&local_540);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (1 < (byte)LogNetPackageMap._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    uVar12 = 0;
    goto LAB_1480d16b1;
  }
  uVar12 = 0;
LAB_1480d16b1:
  FMemScope::~FMemScope(&local_4c8);
  FLLMScope::~FLLMScope(local_5e0);
  return (bool)uVar12;
}

// SerializeObject @ 1480d16f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::SerializeObject
          (UPackageMapClient *this,FArchive *param_1,UClass *param_2,UObject **param_3,
          FNetworkGUID *param_4)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  AActor *this_00;
  ULevel *pUVar3;
  UObjectBaseUtility *this_01;
  UObject *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName FVar11;
  FName FVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_PackageMap_SerializeObjectTime> FVar17;
  longlong lVar18;
  longlong *plVar19;
  size_t sVar20;
  FString *pFVar21;
  FNetworkGUID FVar22;
  UClass *pUVar23;
  ULevel *pUVar24;
  FNetGUIDCache *pFVar25;
  FName FVar26;
  IConsoleManager *pIVar27;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *this_02;
  FName *pFVar28;
  FNetworkGUID_u_0 *pFVar29;
  wchar_t *_Str;
  FName FVar30;
  FNetworkGUID_u_0 FVar31;
  UNetDriver *pUVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  float fVar35;
  FNetworkGUID_u_0 local_res20;
  FName local_1b8;
  FName local_1b0;
  byte local_1a8;
  FName local_1a0;
  FNetworkGUID_u_0 local_198;
  FColor_u_0 local_190 [2];
  FName local_188;
  FString local_180;
  undefined1 local_170 [4];
  FName local_16c;
  FName local_164;
  undefined8 local_158;
  FName local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  FName local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FName local_f0;
  undefined1 local_e8 [8];
  void *local_e0 [2];
  void *local_d0 [2];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  bVar10 = false;
  bVar9 = false;
  bVar14 = false;
  FVar17 = StatPtr_STAT_PackageMap_SerializeObjectTime;
  local_res20 = (FNetworkGUID_u_0)param_3;
  if (StatPtr_STAT_PackageMap_SerializeObjectTime ==
      (FThreadSafeStaticStat<FStat_STAT_PackageMap_SerializeObjectTime>)0x0) {
    pFVar16 = ::FName::FName(&local_f0,"STAT_PackageMap_SerializeObjectTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_PackageMap_SerializeObjectTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PackageMap_SerializeObjectTime,
                        *pFVar16,L"Net PackageMap SerializeObject","STATGROUP_Game",
                        "STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  local_1a8 = 0;
  FVar30 = *(FName *)FVar17;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_190[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_190[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      local_1a8 = local_1a8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_188.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_188.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_188,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                   ,0x137);
        local_1a8 = local_1a8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b0 = FVar30;
      local_1a0 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      local_1a8 = local_1a8 | 4;
    }
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar18 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar27 = IConsoleManager::Get();
    DebugObjectCvar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar27 + 0xc0))(pIVar27,L"net.PackageMap.DebugObject",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar18 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar27 = IConsoleManager::Get();
    DebugAllObjectsCvar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar27 + 0xc0))(pIVar27,L"net.PackageMap.DebugAll",1);
    _Init_thread_footer(&::_TSS1);
  }
  FVar31 = local_res20;
  if (*(UObject **)local_res20 == (UObject *)0x0) {
LAB_1480d1954:
    bVar8 = false;
  }
  else {
    if (DebugObjectCvar == (IConsoleVariable *)0x0) {
LAB_1480d1937:
      if ((DebugAllObjectsCvar == (IConsoleVariable *)0x0) ||
         (iVar15 = (**(code **)(*(longlong *)DebugAllObjectsCvar + 200))(), iVar15 == 0))
      goto LAB_1480d1954;
    }
    else {
      bVar10 = true;
      bVar9 = false;
      bVar14 = false;
      lVar18 = (**(code **)(*(longlong *)DebugObjectCvar + 0xd8))(DebugObjectCvar,local_d0);
      if (*(int *)(lVar18 + 8) < 2) goto LAB_1480d1937;
      local_16c.ComparisonIndex.Value = *(uint *)&(*(UObject **)FVar31)->field_0x18;
      local_16c.Number = *(uint *)&(*(UObject **)FVar31)->field_0x1c;
      ::FName::ToString(&local_16c,&local_100);
      bVar10 = true;
      bVar9 = true;
      bVar14 = true;
      plVar19 = (longlong *)
                (**(code **)(*(longlong *)DebugObjectCvar + 0xd8))(DebugObjectCvar,local_e0);
      if ((int)plVar19[1] == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)*plVar19;
        if (_Str == (wchar_t *)0x0) goto LAB_1480d1937;
      }
      sVar20 = wcslen(_Str);
      iVar15 = ::FString::Find(&local_100,_Str,(int)sVar20,IgnoreCase,FromStart,-1);
      if (iVar15 == -1) goto LAB_1480d1937;
    }
    bVar8 = true;
  }
  if ((bVar14) && (local_e0[0] != (void *)0x0)) {
    FMemory::Free(local_e0[0]);
  }
  if ((bVar9) && (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if ((bVar10) && (local_d0[0] != (void *)0x0)) {
    FMemory::Free(local_d0[0]);
  }
  if ((bVar8) && (4 < (byte)LogNetPackageMap._0_1_)) {
    local_164.ComparisonIndex.Value = *(uint *)&(*(UObject **)FVar31)->field_0x18;
    local_164.Number = *(uint *)&(*(UObject **)FVar31)->field_0x1c;
    ::FName::ToString(&local_164,&local_130);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      QueryPerformanceCounter(&local_148);
      dVar7 = (double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      FVar22 = InternalLoadObject(this,(FArchive *)local_e8,(UObject **)param_1,FVar31.Value);
      FVar30 = *(FName *)FVar22.field0_0x0;
      if (param_4 != (FNetworkGUID *)0x0) {
        (param_4->field0_0x0).ObjectId = (ulong64)FVar30;
      }
      this_00 = *(AActor **)FVar31;
      pUVar32 = (UNetDriver *)0x0;
      local_1a0 = FVar30;
      if (((this->Connection != (UNetConnection *)0x0) &&
          (pUVar32 = (this->Connection->Driver).field0_0x0.DebugPtr,
          UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar32 != (UNetDriver *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar32);
      }
      if (((this_00 == (AActor *)0x0) || (pUVar32 == (UNetDriver *)0x0)) ||
         ((pUVar32->World).field0_0x0.DebugPtr == (UWorld *)0x0)) {
LAB_1480d1d7e:
        FVar31 = local_res20;
        if (*(UObject **)local_res20 != (UObject *)0x0) {
          pUVar23 = *(UClass **)&(*(UObject **)local_res20)->field_0x10;
          if ((param_2->ClassFlags >> 0xe & 1) == 0) {
            iVar15 = (int)param_2->_padding_;
            if (((int)pUVar23->_padding_ < iVar15) ||
               ((longlong *)*(undefined1 **)(pUVar23->_padding_ + (longlong)iVar15 * 8) !=
                &param_2->_padding_)) {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
          }
          else {
            bVar14 = UClass::ImplementsInterface(pUVar23,param_2);
          }
          if (bVar14 == false) {
            if (2 < (byte)LogNetPackageMap._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_2,&local_a0,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        (*(UObjectBaseUtility **)FVar31,&local_b0,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap)
              ;
              local_c0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                local_c0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
              }
              goto LAB_1480d1e4a;
            }
            goto LAB_1480d1e54;
          }
        }
      }
      else {
        pUVar23 = Z_Construct_UClass_AActor_NoRegister();
        iVar15 = (int)pUVar23->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar23->_padding_)) {
          pUVar23 = Z_Construct_UClass_ULevel_NoRegister();
          pUVar24 = (ULevel *)
                    UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar23);
        }
        else {
          pUVar24 = AActor::GetLevel(this_00);
        }
        FVar31 = local_res20;
        if ((pUVar24 == (ULevel *)0x0) ||
           (((pUVar3 = (((pUVar32->World).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.DebugPtr
             , pUVar3 != (ULevel *)0x0 && (pUVar3 == pUVar24)) || (pUVar24->bIsVisible != '\0'))))
        goto LAB_1480d1d7e;
        if (2 < (byte)LogNetPackageMap._0_1_) {
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)local_res20,&local_c0,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
LAB_1480d1e4a:
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
LAB_1480d1e54:
        *(UObject **)FVar31 = (UObject *)0x0;
      }
      if ((FVar30 != (FName)0x0) && ((char)this->_padding_ != '\0')) {
        pFVar25 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
        if ((FVar30 != (FName)0x1) &&
           (*(int *)&(pFVar25->ObjectLookup).field_0x8 !=
            *(int *)&(pFVar25->ObjectLookup).field_0x34)) {
          puVar33 = *(undefined1 **)&(pFVar25->ObjectLookup).field_0x40;
          if (puVar33 == (undefined1 *)0x0) {
            puVar33 = &(pFVar25->ObjectLookup).field_0x38;
          }
          iVar15 = *(int *)(puVar33 +
                           (((ulonglong)FVar30 >> 0x20) * 0x17 + (longlong)FVar30 &
                           (ulonglong)(*(int *)&(pFVar25->ObjectLookup).field_0x48 - 1)) * 4);
          if (iVar15 != -1) {
            lVar18 = *(longlong *)&pFVar25->ObjectLookup;
            do {
              if (*(FName *)((longlong)iVar15 * 0x40 + lVar18) == FVar30) {
                if ((((iVar15 != -1) && (lVar18 = (longlong)iVar15 * 0x40 + lVar18, lVar18 != 0)) &&
                    (lVar18 != -8)) && ((*(byte *)(lVar18 + 0x30) & 8) != 0)) goto LAB_1480d1f2a;
                break;
              }
              iVar15 = *(int *)((longlong)iVar15 * 0x40 + 0x38 + lVar18);
            } while (iVar15 != -1);
          }
        }
        if (*(UObject **)FVar31 == (UObject *)0x0) {
          this_02 = (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                    &this->_padding_;
          pFVar29 = &local_res20;
        }
        else {
          if (((ulonglong)FVar30 & 1) != 0) goto LAB_1480d1f2a;
          this_02 = (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                    &this->_padding_;
          pFVar29 = (FNetworkGUID_u_0 *)local_170;
        }
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
        Emplace<FNetworkGUID_const_&>(this_02,(FNetworkGUID *)pFVar29,(bool *)&local_1a0);
      }
LAB_1480d1f2a:
      FVar12 = local_1b8;
      FVar11 = FVar30;
      FVar26 = local_1b8;
      if (bNetReportSyncLoads != false) {
        while (local_1b8 = FVar30, FVar30 = FVar11, FVar12 = FVar26, local_1b8 != (FName)0x0) {
          if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          pFVar25 = (this->GuidCache).Object;
          pFVar28 = (FName *)(pFVar25->SyncLoadedGUIDs).AllocatorInstance.Data;
          pFVar16 = pFVar28 + (pFVar25->SyncLoadedGUIDs).ArrayNum;
          for (; pFVar28 != pFVar16; pFVar28 = pFVar28 + 1) {
            if (*pFVar28 == local_1b8) {
              pTVar2 = &this->TrackedSyncLoadedGUIDs;
              pFVar16 = (FName *)(pTVar2->AllocatorInstance).Data;
              if (((pFVar16 <= &local_1b8) &&
                  (&local_1b8 < pFVar16 + (this->TrackedSyncLoadedGUIDs).ArrayMax)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              iVar15 = (this->TrackedSyncLoadedGUIDs).ArrayNum;
              piVar1 = &(this->TrackedSyncLoadedGUIDs).ArrayMax;
              if (iVar15 == *piVar1) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->TrackedSyncLoadedGUIDs).ArrayNum = iVar15 + 1;
              *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_1b8;
              break;
            }
          }
          if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          pFVar25 = (this->GuidCache).Object;
          FVar26.ComparisonIndex.Value = 0;
          FVar26.Number = 0;
          FVar30 = local_1a0;
          FVar12 = local_1b8;
          if ((ulonglong)local_1b8 < 2) break;
          if (*(int *)&(pFVar25->ObjectLookup).field_0x8 !=
              *(int *)&(pFVar25->ObjectLookup).field_0x34) {
            puVar33 = *(undefined1 **)&(pFVar25->ObjectLookup).field_0x40;
            puVar34 = &(pFVar25->ObjectLookup).field_0x38;
            if (puVar33 != (undefined1 *)0x0) {
              puVar34 = puVar33;
            }
            iVar15 = *(int *)(puVar34 +
                             (ulonglong)
                             (*(int *)&(pFVar25->ObjectLookup).field_0x48 - 1U &
                             local_1b8.Number * 0x17 + local_1b8.ComparisonIndex.Value.Value) * 4);
            if (iVar15 != -1) {
              lVar18 = *(longlong *)&pFVar25->ObjectLookup;
              do {
                if (*(FName *)((longlong)iVar15 * 0x40 + lVar18) == local_1b8) {
                  if ((iVar15 != -1) && (lVar18 = (longlong)iVar15 * 0x40 + lVar18, lVar18 != 0)) {
                    lVar18 = lVar18 + 8;
                    goto LAB_1480d20ff;
                  }
                  break;
                }
                iVar15 = *(int *)((longlong)iVar15 * 0x40 + 0x38 + lVar18);
              } while (iVar15 != -1);
            }
          }
          lVar18 = 0;
LAB_1480d20ff:
          FVar30 = FVar26;
          FVar11 = local_1a0;
          if (lVar18 != 0) {
            FVar26 = *(FName *)(lVar18 + 8);
            FVar30 = FVar26;
          }
        }
      }
      local_1b8 = FVar12;
      if (6 < (byte)LogNetPackageMap._0_1_) {
        ::FString::PrintfImpl(&local_110,L"%llu");
        this_01 = *(UObjectBaseUtility **)FVar31;
        if (this_01 != (UObjectBaseUtility *)0x0) {
          UObjectBaseUtility::GetPathName(this_01,&local_90,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_UPackageMapClie_151a03eb0,
                   (FLogCategoryBase *)&LogNetPackageMap);
        if ((this_01 != (UObjectBaseUtility *)0x0) &&
           (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      QueryPerformanceCounter(&local_140);
      dVar6 = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        pIVar27 = IConsoleManager::Get();
        LongLoadThreshholdCVAR =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar27 + 0xc0))
                       (pIVar27,L"net.PackageMap.LongLoadThreshhold",1);
        _Init_thread_footer(&::_TSS2);
      }
      if (((LongLoadThreshholdCVAR != (IConsoleVariable *)0x0) &&
          (fVar35 = (float)(**(code **)(*(longlong *)LongLoadThreshholdCVAR + 0xd0))(),
          fVar35 < (float)(dVar6 - dVar7))) && (2 < (byte)LogNetPackageMap._0_1_)) {
        pUVar4 = *(UObject **)FVar31;
        if (pUVar4 == (UObject *)0x0) {
          ::FString::FString(&local_180,L"None");
        }
        else {
          local_138.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
          local_138.Number = *(uint *)&pUVar4->field_0x1c;
          ::FName::ToString(&local_138,&local_180);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      if ((*(UObject **)FVar31 == (UObject *)0x0) && (FVar30 != (FName)0x0)) {
        uVar13 = 0;
        goto LAB_1480d1bb1;
      }
    }
  }
  else {
    if ((*(UObject **)FVar31 != (UObject *)0x0) &&
       ((*(uint *)&(*(UObject **)FVar31)->field_0x8 >> 0x1e & 1) != 0)) {
      local_158 = 0;
      uVar13 = (**(code **)(this->_padding_ + 0x2b8))(this,param_1,param_2,&local_158,param_4);
      goto LAB_1480d1bb1;
    }
    if (((this->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    FNetGUIDCache::GetOrAssignNetGUID
              ((this->GuidCache).Object,(UObject *)&local_198,
               (TWeakObjectPtr<UObject,FWeakObjectPtr> *)*(UObject **)FVar31);
    if (param_4 != (FNetworkGUID *)0x0) {
      (param_4->field0_0x0).ObjectId = (ulong64)local_198;
    }
    pFVar21 = ::FString::FString(&local_80,L"");
    InternalWriteObject(this,param_1,(FNetworkGUID)local_198,*(UObject **)FVar31,pFVar21,
                        (UObject *)0x0);
    if (((local_198.ObjectId != 1) && (*(UObject **)FVar31 != (UObject *)0x0)) &&
       (bVar14 = ShouldSendFullPath(this,*(UObject **)FVar31,(FNetworkGUID *)&local_198), bVar14)) {
      bVar14 = IsNetGUIDAuthority(this);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsNetGUIDAuthority()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                              ,0x15d,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      pFVar21 = ::FString::FString(local_70,L"");
      bVar14 = ExportNetGUID(this,(FNetworkGUID)local_198,*(UObject **)FVar31,pFVar21,(UObject *)0x0
                            );
      if ((!bVar14) && (5 < (byte)LogNetPackageMap._0_1_)) {
        local_150.ComparisonIndex.Value = *(uint *)&(*(UObject **)FVar31)->field_0x18;
        local_150.Number = *(uint *)&(*(UObject **)FVar31)->field_0x1c;
        ::FName::ToString(&local_150,&local_120);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  uVar13 = 1;
LAB_1480d1bb1:
  if ((local_1a8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1a8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1a8 & 4) != 0) {
    FThreadStats::AddMessage(local_1b0,CycleScopeEnd);
  }
  return (bool)uVar13;
}

// SetHasQueuedBunches @ 1480d3230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::SetHasQueuedBunches(UPackageMapClient *this,FNetworkGUID *param_1,bool param_2)

{
  UNetDriver *pUVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FNetGUIDCache *pFVar7;
  FNetGuidCacheObject *this_00;
  UObject *pUVar8;
  uint uVar9;
  undefined1 auStack_1098 [32];
  undefined1 local_1078 [16];
  float local_1068;
  FNetworkGUID *local_1060;
  undefined1 *local_1058;
  uchar local_1048 [2];
  double local_1046;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1098;
  if (param_2) {
    if (((0.0 < GPackageMapTrackQueuedActorThreshold) && (this->Connection != (UNetConnection *)0x0)
        ) && (pUVar1 = (this->Connection->Driver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0))
    {
      local_1078._8_8_ = pUVar1->ElapsedTime;
      local_1058 = local_1078 + 8;
      local_1060 = param_1;
      TSet<TTuple<FNetworkGUID,double>,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNetworkGUID_const_&,double_&&>_>
                ((TSet<TTuple<FNetworkGUID,double>,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>,FDefaultSetAllocator>
                  *)&this->CurrentQueuedBunchNetGUIDs,
                 (TPairInitializer<FNetworkGUID_const_&,double_&&> *)local_1078,(bool *)&local_1060)
      ;
    }
    uVar6 = (this->DelinquentQueuedActors).MaxConcurrentQueuedActors;
    uVar9 = *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x8 -
            *(int *)&(this->CurrentQueuedBunchNetGUIDs).field_0x34;
    if (uVar9 < uVar6) {
      uVar9 = uVar6;
    }
    (this->DelinquentQueuedActors).MaxConcurrentQueuedActors = uVar9;
  }
  else {
    local_1078._0_8_ = (FNetworkGUID *)0x0;
    bVar5 = 0.0 < GPackageMapTrackQueuedActorThreshold;
    bVar3 = GPackageMapTrackQueuedActorThresholdOwner <= 0.0;
    bVar4 = TMap<FNetworkGUID,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>_>
            ::RemoveAndCopyValue(&this->CurrentQueuedBunchNetGUIDs,param_1,(double *)local_1078);
    if (((bVar4) && (((bVar5 || (!bVar3)) && ((this->GuidCache).Object != (FNetGUIDCache *)0x0))))
       && ((this->Connection != (UNetConnection *)0x0 &&
           (pUVar1 = (this->Connection->Driver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0))))
    {
      dVar2 = pUVar1->ElapsedTime - (double)local_1078._0_8_;
      if ((!bVar5) || (dVar2 <= (double)GPackageMapTrackQueuedActorThreshold)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar3) || (dVar2 <= (double)GPackageMapTrackQueuedActorThresholdOwner)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar5) || (bVar3)) {
        pFVar7 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
        this_00 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                  ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                          *)&pFVar7->ObjectLookup,param_1);
        if ((this_00 != (FNetGuidCacheObject *)0x0) &&
           (pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar8 != (UObject *)0x0)) {
          if (bVar5) {
            local_1068 = (float)dVar2;
            local_1078._8_8_ = *(undefined8 *)(*(longlong *)&pUVar8->field_0x10 + 0x18);
            FDelinquencyAnalytics::Add
                      (&(this->DelinquentQueuedActors).DelinquentQueuedActors,
                       (FDelinquencyNameTimePair *)(local_1078 + 8));
          }
          if (bVar3) {
            pFVar7 = TSharedPtr<FNetGUIDCache,1>::operator->(&this->GuidCache);
            bVar5 = FNetGUIDCache::IsTrackingOwnerOrPawn(pFVar7);
            if ((bVar5) &&
               (FCsvProfiler::RecordEventfInternal
                          (_GCsvCategory_PackageMap.Index,
                           L"Owner Net Stall Queued Actor (QueueTime=%.2f)"),
               -1 < BookmarkChannel->Enabled)) {
              if (__BookmarkPoint2856 == false) {
                FMiscTrace::OutputBookmarkSpec
                          (&__BookmarkPoint2856,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0xb28,L"PackageMap/Owner Net Stall Queued Actor (QueueTime=%.2f)");
                __BookmarkPoint2856 = true;
              }
              uVar6 = CallstackTrace_GetCurrentId();
              local_1048[0] = '\x01';
              local_1048[1] = 0x88;
              local_1046 = dVar2;
              FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint2856,uVar6,10,local_1048);
            }
          }
        }
      }
    }
  }
  return;
}

// ShouldSendFullPath @ 1480d42d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::ShouldSendFullPath
          (UPackageMapClient *this,UObject *param_1,FNetworkGUID *param_2)

{
  FScriptContainerElement *pFVar1;
  FOutBunch *pFVar2;
  FNetworkGUID FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  FScriptContainerElement *pFVar8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  void *local_38 [2];
  void *local_28 [2];
  
  if (this->Connection != (UNetConnection *)0x0) {
    pFVar2 = this->CurrentExportBunch;
    if (pFVar2 != (FOutBunch *)0x0) {
      pFVar8 = (pFVar2->ExportNetGUIDs).AllocatorInstance.Data;
      pFVar1 = pFVar8 + (longlong)(pFVar2->ExportNetGUIDs).ArrayNum * 8;
      if (pFVar8 != pFVar1) {
        do {
          if (*(ulong64 *)pFVar8 == (param_2->field0_0x0).ObjectId) {
            return false;
          }
          pFVar8 = pFVar8 + 8;
        } while (pFVar8 != pFVar1);
      }
    }
    if ((param_2->field0_0x0).ObjectId != 0) {
      cVar5 = (**(code **)(*(longlong *)param_1 + 0x200))(param_1);
      FVar3 = (FNetworkGUID)(param_2->field0_0x0).ObjectId;
      if (cVar5 != '\0') {
        if (FVar3.field0_0x0 != 1) {
          bVar6 = NetGUIDHasBeenAckd(this,FVar3);
          return !bVar6;
        }
        bVar6 = IsNetGUIDAuthority(this);
        if (bVar6) {
          (**(code **)(this->Connection->_padding_ + 0x2e0))(this->Connection,local_38);
          if (*(longlong *)&param_1->field_0x10 == 0) {
            ::FString::FString(&local_88,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0,None);
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsNetGUIDAuthority()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xa11,
                             L"A default NetGUID for object %s is being exported on the server. %s")
          ;
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_38[0] != (void *)0x0) {
            FMemory::Free(local_38[0]);
          }
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        cVar5 = (**(code **)(*(longlong *)param_1 + 0x200))(param_1);
        if (cVar5 == '\0') {
          (**(code **)(this->Connection->_padding_ + 0x2e0))(this->Connection,local_28);
          if (*(longlong *)&param_1->field_0x10 == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object->IsNameStableForNetworking()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0xa12,
                             L"A default NetGUID is being exported for non-stably named object %s. %s"
                            );
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_28[0] != (void *)0x0) {
            FMemory::Free(local_28[0]);
          }
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        return true;
      }
      if (FVar3.field0_0x0 == 1) {
        (**(code **)(this->Connection->_padding_ + 0x2e0))(this->Connection,local_58);
        if (*(longlong *)&param_1->field_0x10 == 0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_a8,(UObject *)0x0,None);
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!NetGUID.IsDefault()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0xa0a,L"Non-stably named object %s has a default NetGUID. %s");
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      if (((param_2->field0_0x0).ObjectId == 0) || (((param_2->field0_0x0).ObjectId & 1) != 0)) {
        (**(code **)(this->Connection->_padding_ + 0x2e0))(this->Connection,local_48);
        ::FString::PrintfImpl(&local_68,L"%llu");
        if (*(longlong *)&param_1->field_0x10 == 0) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_98,(UObject *)0x0,None);
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NetGUID.IsDynamic()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                           ,0xa0b,L"Non-stably named object %s has static NetGUID [%s]. %s");
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
    }
  }
  return false;
}

// StaticRegisterNativesUPackageMapClient @ 1480d57c0

void __cdecl UPackageMapClient::StaticRegisterNativesUPackageMapClient(void)

{
  return;
}

// SyncPackageMapExportAckStatus @ 1480d5af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::SyncPackageMapExportAckStatus(UPackageMapClient *this,UPackageMapClient *param_1)

{
  FPackageMapAckState::operator=(&this->AckState,&param_1->AckState);
  return;
}

// TrackNetFieldExport @ 1480dccf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPackageMapClient::TrackNetFieldExport
          (UPackageMapClient *this,FNetFieldExportGroup *param_1,int param_2)

{
  FPackageMapAckState *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong local_res8;
  ulong64 local_res18;
  
  uVar7 = (ulonglong)param_2;
  if ((this->Connection->bInternalAck == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x64b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetFieldExportGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x64c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_2 < 0) || ((param_1->NetFieldExports).ArrayNum <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetFieldExportGroup->NetFieldExports.IsValidIndex(NetFieldExportHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x650,
                         L"Invalid NetFieldExportHandle. GroupPath = %s, NumExports = %d, ExportHandle = %d"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = 0;
  if (param_2 < (param_1->NetFieldExports).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)((param_1->NetFieldExports).AllocatorInstance.Data + uVar7 * 0x28 + 0x10) != param_2)
  {
    uVar5 = 0;
    if (param_2 < (param_1->NetFieldExports).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetFieldExportGroup->NetFieldExports[NetFieldExportHandle].Handle == NetFieldExportHandle"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                       ,0x654,
                       L"NetFieldExportHandle Mismatch. GroupPath = %s, NumExports = %d, ExportHandle = %d, Expected Handle = %d"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if (param_2 < (param_1->NetFieldExports).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->NetFieldExports).AllocatorInstance.Data[uVar7 * 0x28 + 0x20] =
       (FScriptContainerElement)0x1;
  pFVar1 = this->OverrideAckState;
  local_res8 = (ulonglong)param_1->PathNameIndex << 0x20 | uVar7;
  if (*(int *)&(pFVar1->NetFieldExportAcked).Elements.field_0x8 !=
      *(int *)&(pFVar1->NetFieldExportAcked).Elements.field_0x34) {
    FVar8 = (pFVar1->NetFieldExportAcked).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(pFVar1->NetFieldExportAcked).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    ((local_res8 >> 0x20) * 0x17 + local_res8 &
                    (ulonglong)((pFVar1->NetFieldExportAcked).HashSize - 1)) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(pFVar1->NetFieldExportAcked).Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar6 * 0x10) == local_res8) {
          return;
        }
        iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
  Emplace<unsigned___int64_const_&>(&this->NetFieldExports,&local_res18,(bool *)&local_res8);
  return;
}

// WriteObject @ 1480e36f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPackageMapClient::WriteObject
          (UPackageMapClient *this,FArchive *param_1,UObject *param_2,FNetworkGUID param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FNetworkGUID_u_0 local_res20;
  FString local_18;
  
  local_res20 = param_3.field0_0x0;
  (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1,&local_res20);
  if (4 < (byte)LogNetPackageMap._0_1_) {
    ::FString::PrintfImpl(&local_18,L"%llu");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((((local_res20.ObjectId & 1) != 0) && (local_res20.ObjectId != 1)) &&
     (bVar2 = NetGUIDHasBeenAckd(this,(FNetworkGUID)local_res20), !bVar2)) {
    pFVar3 = ::FString::FString(&local_18,param_4);
    bVar2 = ExportNetGUID(this,(FNetworkGUID)local_res20,(UObject *)0x0,pFVar3,param_2);
    if ((!bVar2) && (2 < (byte)LogNetPackageMap._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return true;
}

// operator() @ 1505239e0

bool __thiscall
`UPackageMapClient::ExportNetGUIDForReplay'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280878253>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280878253>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150523c00

bool __thiscall
`UPackageMapClient::GetAdditionalRequiredBunches'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280877394>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280877394>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150523ef0

bool __thiscall `UPackageMapClient::InternalLoadObject'::__l60::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280878449>);
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
                      (&bGEnsureHasExecuted<_8846227299280878449>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150523f7e;
    }
  }
  bVar2 = false;
LAB_150523f7e:
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

// operator() @ 150523fb0

bool __thiscall `UPackageMapClient::SerializeNewActor'::__l69::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280879087>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x2d0))
              ((longlong *)**(undefined8 **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280879087>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052401e;
    }
  }
  bVar2 = false;
LAB_15052401e:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150524330

bool __thiscall `UPackageMapClient::SerializeNewActor'::__l120::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280879049>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x2d0))
              ((longlong *)**(undefined8 **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280879049>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052439e;
    }
  }
  bVar2 = false;
LAB_15052439e:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150524470

bool __thiscall
`UPackageMapClient::ExportNetGUIDForReplay'::__l13::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280878246>);
  if (bVar4) {
    if ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_28,
                 (UObject *)0x0);
    }
    ::FString::PrintfImpl(&local_18,L"%llu");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280878246>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150524535;
    }
  }
  bVar4 = false;
LAB_150524535:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

