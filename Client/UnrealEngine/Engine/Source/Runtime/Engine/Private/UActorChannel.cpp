// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 89

// StaticClass @ 147256290

UClass * __cdecl UActorChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorChannel",
               &Z_Registration_Info_UClass_UActorChannel.InnerSingleton,
               StaticRegisterNativesUActorChannel,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorChannel>,
               InternalVTableHelperCtorCaller<UActorChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorChannel.InnerSingleton;
}

// UActorChannel @ 14725c8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorChannel * __thiscall UActorChannel::UActorChannel(UActorChannel *this,FVTableHelper *param_1)

{
  UChannel::UChannel((UChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UActorChannel__6B_;
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ActorNetGUID).field0_0x0.ObjectId = 0;
  this->ChannelSubObjectDirtyCount = 0;
  (this->ActorReplicator).Object = (FObjectReplicator *)0x0;
  (this->ActorReplicator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ReplicationMap = 0;
  *(undefined8 *)&(this->ReplicationMap).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationMap).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationMap).field_0x34 = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ReplicationMap).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x48 = 0;
  (this->QueuedBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedBunches).ArrayNum = 0;
  (this->QueuedBunches).ArrayMax = 0;
  *(undefined8 *)&(this->PendingGuidResolves).Elements = 0;
  *(undefined8 *)&(this->PendingGuidResolves).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingGuidResolves).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x30 = 0xffffffff;
  (this->PendingGuidResolves).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingGuidResolves).HashSize = 0;
  (this->CreateSubObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreateSubObjects).ArrayNum = 0;
  (this->CreateSubObjects).ArrayMax = 0;
  (this->QueuedMustBeMappedGuidsInLastBunch).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum = 0;
  (this->QueuedMustBeMappedGuidsInLastBunch).ArrayMax = 0;
  (this->QueuedExportBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedExportBunches).ArrayNum = 0;
  (this->QueuedExportBunches).ArrayMax = 0;
  *(undefined8 *)&this->SubobjectRepKeyMap = 0;
  *(undefined8 *)&(this->SubobjectRepKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectRepKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x34 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubobjectRepKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->SubobjectNakMap = 0;
  *(undefined8 *)&(this->SubobjectNakMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectNakMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x34 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubobjectNakMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x48 = 0;
  (this->PendingObjKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingObjKeys).ArrayNum = 0;
  (this->PendingObjKeys).ArrayMax = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).Elements = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x30 = 0xffffffff;
  (this->QueuedBunchObjectReferences).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->QueuedBunchObjectReferences).HashSize = 0;
  return this;
}

// GetPrivateStaticClass @ 14725fc80

UClass * __cdecl UActorChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorChannel",
               &Z_Registration_Info_UClass_UActorChannel.InnerSingleton,
               StaticRegisterNativesUActorChannel,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorChannel>,
               InternalVTableHelperCtorCaller<UActorChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorChannel.InnerSingleton;
}

// ReplicateSubobjectCustom @ 147260ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::ReplicateSubobjectCustom
          (UActorChannel *this,UObject *param_1,FOutBunch *param_2,FReplicationFlags *param_3)

{
  return true;
}

// Serialize @ 147260cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::Serialize(UActorChannel *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUActorChannel @ 147260df0

void __cdecl UActorChannel::StaticRegisterNativesUActorChannel(void)

{
  return;
}

// __VTableCtorCaller @ 147262b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl UActorChannel::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UChannel *)0x0) {
    UChannel::UChannel(this,param_1);
    *(undefined2 *)((longlong)&this[1].Connection.field0_0x0 + 4) = 0;
    this->_padding_ = (longlong)&___7UActorChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1].OpenPacketId.First = 0;
    this[1].OpenPacketId.Last = 0;
    this[1].ChName.ComparisonIndex = 0;
    this[1].ChName.Number = 0;
    this[1].NumInRec = 0;
    this[1].NumOutRec = 0;
    this[1].InPartialBunch = (FInBunch *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2].Connection.field0_0x0.DebugPtr = (UNetConnection *)0x0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    this[2].ChName.ComparisonIndex = 0;
    this[2].ChName.Number = 0;
    this[2].NumInRec = 0;
    this[2].NumOutRec = 0;
    this[2].InPartialBunch = (FInBunch *)0x0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3].Connection.field0_0x0.DebugPtr = (UNetConnection *)0x0;
    *(undefined8 *)&this[3].field_0x30 = 0;
    this[3].OpenPacketId.First = 0;
    this[3].OpenPacketId.Last = 0;
    this[3].ChName.ComparisonIndex = 0;
    this[3].ChName.Number = 0;
    this[3].NumInRec = 0;
    this[3].NumOutRec = 0;
    this[3].InRec = (FInBunch *)0x0;
    this[3].InPartialBunch = (FInBunch *)0x0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4].Connection.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[4].Connection.field0_0x0 + 4) = 0;
    this[4].OpenPacketId.First = 0;
    this[4].OpenPacketId.Last = 0;
    this[4].ChName.ComparisonIndex.Value = 0;
    this[4].NumInRec = 0;
    this[4].NumOutRec = 0;
    this[4].InRec = (FInBunch *)0x0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].Connection.field0_0x0 = 0;
    *(undefined8 *)&this[5].field_0x30 = 0;
    this[5].OpenPacketId.First = 0;
    this[5].OpenPacketId.Last = 0;
    this[5].ChName.ComparisonIndex = 0;
    this[5].ChName.Number = 0;
    this[5].NumInRec = 0;
    this[5].NumOutRec = 0;
    this[5].InPartialBunch = (FInBunch *)0x0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// UActorChannel @ 147a27400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorChannel * __thiscall
UActorChannel::UActorChannel(UActorChannel *this,FObjectInitializer *param_1)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  
  UChannel::UChannel((UChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UActorChannel__6B_;
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ActorNetGUID).field0_0x0.ObjectId = 0;
  this->bBlockChannelFailure = 0;
  (this->ActorReplicator).Object = (FObjectReplicator *)0x0;
  (this->ActorReplicator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ReplicationMap = 0;
  *(undefined8 *)&(this->ReplicationMap).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationMap).field_0x20 = 0;
  this->ChannelSubObjectDirtyCount = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationMap).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationMap).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationMap).field_0x48 = 0;
  (this->QueuedBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedBunches).ArrayNum = 0;
  (this->QueuedBunches).ArrayMax = 0;
  *(undefined8 *)&(this->PendingGuidResolves).Elements = 0;
  *(undefined8 *)&(this->PendingGuidResolves).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingGuidResolves).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x34 = 0;
  (this->PendingGuidResolves).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingGuidResolves).HashSize = 0;
  (this->CreateSubObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreateSubObjects).ArrayNum = 0;
  (this->CreateSubObjects).ArrayMax = 0;
  (this->QueuedMustBeMappedGuidsInLastBunch).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum = 0;
  (this->QueuedMustBeMappedGuidsInLastBunch).ArrayMax = 0;
  (this->QueuedExportBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedExportBunches).ArrayNum = 0;
  (this->QueuedExportBunches).ArrayMax = 0;
  *(undefined8 *)&this->SubobjectRepKeyMap = 0;
  *(undefined8 *)&(this->SubobjectRepKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectRepKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x34 = 0;
  *(undefined8 *)&(this->SubobjectRepKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->SubobjectNakMap = 0;
  *(undefined8 *)&(this->SubobjectNakMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubobjectNakMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x34 = 0;
  *(undefined8 *)&(this->SubobjectNakMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x48 = 0;
  (this->PendingObjKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingObjKeys).ArrayNum = 0;
  (this->PendingObjKeys).ArrayMax = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).Elements = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->QueuedBunchObjectReferences).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x34 = 0;
  (this->QueuedBunchObjectReferences).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->QueuedBunchObjectReferences).HashSize = 0;
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  this->_padding_ = (ulonglong)*(uint *)CONCAT44(extraout_var,FVar1.Value);
  this->QueuedCloseReason = Destroyed;
  this->bClearRecentActorRefs = 1;
  this->bHoldQueuedExportBunchesAndGUIDs = 0;
  return this;
}

// ~UActorChannel @ 147a2a2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::~UActorChannel(UActorChannel *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UActorChannel__6B_;
  (this->QueuedBunchObjectReferences).HashSize = 0;
  FVar1 = (this->QueuedBunchObjectReferences).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedRef<FQueuedBunchObjectReference,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedRef<FQueuedBunchObjectReference,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->QueuedBunchObjectReferences).Elements);
  pFVar2 = (this->PendingObjKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->SubobjectNakMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SubobjectNakMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UActorChannel::FPacketRepKeyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UActorChannel::FPacketRepKeyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UActorChannel::FPacketRepKeyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubobjectNakMap);
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SubobjectRepKeyMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubobjectRepKeyMap);
  pFVar2 = (this->QueuedExportBunches).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->QueuedMustBeMappedGuidsInLastBunch).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CreateSubObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->PendingGuidResolves).HashSize = 0;
  FVar1 = (this->PendingGuidResolves).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingGuidResolves).Elements);
  pFVar2 = (this->QueuedBunches).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ReplicationMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ReplicationMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActorReplicator).SharedReferenceCount.ReferenceController);
  UChannel::~UChannel((UChannel *)this);
  return;
}

// operator() @ 147a2ce30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UActorChannel::UpdateDeletedSubObjects'::__l2::<lambda_1>::operator()
          (void *this,FNetworkGUID param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2,
          ESubObjectDeleteFlag param_3)

{
  byte *pbVar1;
  FNetworkGUID_u_0 FVar2;
  uint uVar3;
  uint uVar4;
  UObject *pUVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetTraceCollector *this_00;
  FNetTraceCollector *pFVar7;
  FNetworkGUID_u_0 local_res10 [2];
  ESubObjectDeleteFlag local_res20;
  FString local_98;
  FName local_88;
  FName local_80;
  FString local_78;
  FScriptContainerElement *local_68;
  UObject *local_60;
  FString local_58;
  FString local_48;
  
  local_res10[0] = param_1.field0_0x0;
  local_res20 = param_3;
  if (param_1.field0_0x0 == 0) {
    if (1 < (byte)LogNetTraffic._0_1_) {
      FWeakObjectPtr::GetEvenIfUnreachable(&param_2->WeakPtr);
      pUVar5 = FWeakObjectPtr::GetEvenIfUnreachable(&param_2->WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_80.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_80.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_80,&local_78);
      }
      if (*(UObjectBaseUtility **)(*(longlong *)this + 0x68) == (UObjectBaseUtility *)0x0) {
        ::FString::FString(&local_98,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName
                  (*(UObjectBaseUtility **)(*(longlong *)this + 0x68),&local_98,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    local_80 = *(FName *)((longlong)this + 0x10);
    uVar3 = 0xffffffff;
    pFVar7 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar7 = *(FNetTraceCollector **)((longlong)local_80 + 0xc0);
    }
    if (pFVar7 != (FNetTraceCollector *)0x0) {
      uVar3 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,*(uint *)((longlong)local_80 + 0xa0))
      ;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ContentBlockForSubObjectDelete =
             UE::Net::CreatePersistentNetDebugName(L"ContentBlockForSubObjectDelete",0x1e);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(ContentBlockForSubObjectDelete);
      FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
      }
      *(uint *)((longlong)FVar6 + (ulonglong)uVar3 * 0x10) = uVar4;
    }
    FVar2 = local_res10[0];
    local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)((longlong)this + 0x10);
    uVar4 = 0xffffffff;
    this_00 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      this_00 = *(FNetTraceCollector **)(local_78.Data.AllocatorInstance.Data + 0xc0);
    }
    if (this_00 != (FNetTraceCollector *)0x0) {
      uVar4 = FNetTrace::BeginPacketContentEvent
                        (this_00,Object,*(uint *)(local_78.Data.AllocatorInstance.Data + 0xa0));
      FVar6 = (this_00->Events).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar6 = (ForElementType<FNetTracePacketContentEvent>)&this_00->Events;
      }
      ((FNetworkGUID_u_0 *)((longlong)FVar6 + (ulonglong)uVar4 * 0x10))->ObjectId = (ulong64)FVar2;
      if (FVar2.ObjectId != 0) {
        FNetTraceCollector::AddReferencedObjectId(this_00,FVar2.ObjectId);
      }
    }
    if (5 < (byte)LogNetSubObject._0_1_) {
      ::FString::PrintfImpl(&local_48,L"%llu");
      local_68 = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        local_68 = local_48.Data.AllocatorInstance.Data;
      }
      local_60 = FWeakObjectPtr::GetEvenIfUnreachable(&param_2->WeakPtr);
      pUVar5 = FWeakObjectPtr::GetEvenIfUnreachable(&param_2->WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        ::FString::FString(&local_98,L"None");
      }
      else {
        local_88.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_88.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_88,&local_98);
      }
      local_88 = *(FName *)(*(longlong *)(*(longlong *)this + 0x68) + 0x18);
      ::FName::ToString(&local_88,&local_58);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetSubObject);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    UActorChannel::WriteContentBlockForSubObjectDelete
              (*(UActorChannel **)this,*(FOutBunch **)((longlong)this + 0x10),
               (FNetworkGUID *)local_res10,local_res20);
    **(undefined1 **)((longlong)this + 8) = 1;
    pbVar1 = (byte *)(*(longlong *)((longlong)this + 0x10) + 0xfc);
    *pbVar1 = *pbVar1 | 0x10;
    if (uVar4 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent
                (this_00,uVar4,*(uint *)(local_78.Data.AllocatorInstance.Data + 0xa0));
    }
    if (uVar3 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar7,uVar3,*(uint *)((longlong)local_80 + 0xa0));
    }
  }
  return;
}

// AddReferencedObjects @ 147a311f0

void __cdecl UActorChannel::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UActorChannel>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UActorChannel_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UActorChannel>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AddedToChannelPool @ 147a31810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::AddedToChannelPool(UActorChannel *this)

{
  int *piVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>_>
  *this_01;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((this->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x69c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRec",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x69d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutRec",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x69e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InPartialBunch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x69f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar7 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)lVar7 & 0xffffc800 | 0x800;
  this->_padding_ = -1;
  this->_padding_ = 0;
  if (((this->ActorReplicator).Object != (FObjectReplicator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ActorReplicator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a1,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(int *)&(this->ReplicationMap).field_0x8 != *(int *)&(this->ReplicationMap).field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationMap.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a2,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->QueuedBunches).ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedBunches.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a3,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(int *)&(this->PendingGuidResolves).Elements.field_0x8 !=
       *(int *)&(this->PendingGuidResolves).Elements.field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingGuidResolves.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x8 !=
       *(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedBunchObjectReferences.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedMustBeMappedGuidsInLastBunch.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a6,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->QueuedExportBunches).ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedExportBunches.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x15a7,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  CleanupReplicators(this,false);
  piVar1 = &(this->CreateSubObjects).ArrayMax;
  (this->CreateSubObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CreateSubObjects).AllocatorInstance,0,piVar1);
  }
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  this_00 = &this->SubobjectRepKeyMap;
  (this->ActorNetGUID).field0_0x0.ObjectId = 0;
  this->CustomTimeDilation = 0.0;
  puVar3 = &this->field_0x90;
  this->SpawnAcked = 0;
  this->bSuppressQueuedBunchWarningsDueToHitches = 0;
  this->bActorIsPendingKill = 0;
  this->bSkipRoleSwap = 0;
  this->bBlockChannelFailure = 0;
  this->bClearRecentActorRefs = 1;
  this->bIsReplicatingActor = 0;
  this->bForceCompareProperties = 0;
  this->RelevantTime = 0.0;
  this->LastUpdateTime = 0.0;
  this->ChannelSubObjectDirtyCount = 0;
  this->QueuedBunchStartTime = 0.0;
  this->QueuedCloseReason = Destroyed;
  bVar8 = 1 < *(int *)&(this->SubobjectRepKeyMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar2 = &(this->SubobjectRepKeyMap).field_0xc;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->SubobjectRepKeyMap).field_0x2c;
  *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubobjectRepKeyMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->SubobjectRepKeyMap).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  this_01 = &this->SubobjectNakMap;
  bVar8 = 1 < *(int *)&(this->SubobjectNakMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UActorChannel::FPacketRepKeyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,UActorChannel::FPacketRepKeyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->SubobjectNakMap).field_0x8);
  puVar2 = &(this->SubobjectNakMap).field_0xc;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SubobjectNakMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->SubobjectNakMap).field_0x2c;
  *(undefined4 *)&(this->SubobjectNakMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->SubobjectNakMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubobjectNakMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->SubobjectNakMap).field_0x48 = 1;
    TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
              *)this_01);
  }
  piVar1 = &(this->PendingObjKeys).ArrayMax;
  (this->PendingObjKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PendingObjKeys).AllocatorInstance,0,piVar1);
  }
  return;
}

// AppendExportBunches @ 147a31e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
UActorChannel::AppendExportBunches
          (UActorChannel *this,TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  UPackageMapClient *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  `UActorChannel::AppendExportBunches'::__l2::<lambda_1>::operator()(local_res8);
  if (this->bHoldQueuedExportBunchesAndGUIDs == 0) {
    this_00 = CastChecked<UPackageMapClient,UPackageMap>
                        ((TObjectPtr<UPackageMap> *)(this->_padding_ + 0x68),NullChecked);
    UPackageMapClient::AppendExportBunches(this_00,param_1);
    if (*(char *)(this->_padding_ + 0x17c8) == '\0') {
      pTVar2 = &this->QueuedExportBunches;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      iVar4 = (this->QueuedExportBunches).ArrayNum;
      pFVar3 = pFVar6 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->QueuedExportBunches).ArrayNum != iVar4) {
          `TCheckedPointerIterator<FOutBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar6 == pFVar3) break;
        lVar5 = *(longlong *)pFVar6;
        if ((lVar5 != 0) &&
           ((GNetworkProfiler.bIsTrackingEnabled != false ||
            (GNetworkProfiler.bShouldTrackingBeEnabled != false)))) {
          if (__CsvProfilerStat1179 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat1179 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          FNetworkProfiler::TrackExportBunch
                    (&GNetworkProfiler,*(ushort *)(lVar5 + 0xa0),(UNetConnection *)this->_padding_);
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
        pFVar6 = pFVar6 + 8;
      }
      if ((this->QueuedExportBunches).ArrayNum != 0) {
        TArray<FOutBunch_*,TSizedDefaultAllocator<32>_>::
        Append<FOutBunch_*,TSizedDefaultAllocator<32>_>(param_1,pTVar2);
        piVar1 = &(this->QueuedExportBunches).ArrayMax;
        (this->QueuedExportBunches).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
    }
  }
  return;
}

// AppendMustBeMappedGuids @ 147a31fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::AppendMustBeMappedGuids(UActorChannel *this,FOutBunch *param_1)

{
  int *piVar1;
  UPackageMapClient *pUVar2;
  
  if (this->bHoldQueuedExportBunchesAndGUIDs == 0) {
    if ((*(char *)(this->_padding_ + 0x17c8) == '\0') &&
       (0 < (this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum)) {
      pUVar2 = CastChecked<UPackageMapClient,UPackageMap>
                         ((TObjectPtr<UPackageMap> *)(this->_padding_ + 0x68),NullChecked);
      TArray<FNetworkGUID,TSizedDefaultAllocator<32>_>::
      Append<FNetworkGUID,TSizedDefaultAllocator<32>_>
                (&pUVar2->MustBeMappedGuidsInLastBunch,&this->QueuedMustBeMappedGuidsInLastBunch);
      piVar1 = &(this->QueuedMustBeMappedGuidsInLastBunch).ArrayMax;
      (this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->QueuedMustBeMappedGuidsInLastBunch).AllocatorInstance,0,piVar1);
      }
    }
    UChannel::AppendMustBeMappedGuids((UChannel *)this,param_1);
  }
  return;
}

// BecomeDormant @ 147a341c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::BecomeDormant(UActorChannel *this)

{
  void *local_18 [2];
  
  if (5 < (byte)LogNetDormancy._0_1_) {
    (**(code **)(this->_padding_ + 0x2d0))(this,local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffe7f;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
                    /* WARNING: Could not recover jumptable at 0x000147a3422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this,1);
  return;
}

// BreakAndReleaseReferences @ 147a34a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::BreakAndReleaseReferences(UActorChannel *this)

{
  int *piVar1;
  
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
  CleanupReplicators(this,false);
  piVar1 = &(this->CreateSubObjects).ArrayMax;
  (this->CreateSubObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CreateSubObjects).AllocatorInstance,0,piVar1);
  }
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  return;
}

// CanIgnoreDeprecatedReplicateSubObjects @ 147a35670

bool __cdecl UActorChannel::CanIgnoreDeprecatedReplicateSubObjects(void)

{
  if ((UE::Net::GCVarDetectDeprecatedReplicateSubObjects) &&
     (DataChannelInternal::bTestingLegacyMethodForComparison)) {
    return true;
  }
  return false;
}

// CanStopTicking @ 147a356a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::CanStopTicking(UActorChannel *this)

{
  if ((((this->_padding_ & 0x80) == 0) &&
      (*(int *)&(this->PendingGuidResolves).Elements.field_0x8 ==
       *(int *)&(this->PendingGuidResolves).Elements.field_0x34)) &&
     ((this->QueuedBunches).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// CanSubObjectReplicateToClient @ 147a356d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UActorChannel::CanSubObjectReplicateToClient
          (APlayerController *param_1,ELifetimeCondition param_2,FObjectKey param_3,
          TStaticBitArray<17> *param_4,FNetConditionGroupManager *param_5)

{
  uint uVar1;
  FName FVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FObjectKey local_res20;
  
  if ((((int)param_2 < 0) || (COND_NetGroup < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                         ,0xb7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = (param_4[param_2 >> 6].Words[0] >> (param_2 & 0x3f) & 1) != 0;
  if ((param_2 == COND_NetGroup) &&
     (local_res20 = param_3,
     FVar9 = (FName)TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                    ::Find((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                            *)param_5,&local_res20), FVar9 != (FName)0x0)) {
    uVar1 = (((FName *)((longlong)FVar9 + 0x28))->ComparisonIndex).Value;
    if (*(FName *)((longlong)FVar9 + 0x20) != (FName)0x0) {
      FVar9 = *(FName *)((longlong)FVar9 + 0x20);
    }
    if (((int)uVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar12 = 0;
    FVar10 = UE::Net::NetGroupOwner;
    FVar11 = UE::Net::NetGroupReplay;
    if (0 < (int)uVar1) {
      do {
        if (bVar5 != false) {
          return bVar5;
        }
        uVar8 = 0;
        if ((int)uVar12 < (int)uVar1) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , FVar10 = UE::Net::NetGroupOwner, FVar11 = UE::Net::NetGroupReplay, bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FVar2 = *(FName *)FVar9;
        if (FVar10 == FVar2) {
          bVar5 = (bool)((byte)param_4->Words[0] >> 2 & 1);
        }
        else if (FVar11 == FVar2) {
          bVar5 = (bool)((byte)((uint)param_4->Words[0] >> 10) & 1);
        }
        else {
          pFVar3 = (FName *)(param_1->NetConditionGroups).AllocatorInstance.Data;
          for (pFVar14 = pFVar3; pFVar14 != pFVar3 + (param_1->NetConditionGroups).ArrayNum;
              pFVar14 = pFVar14 + 1) {
            if (*pFVar14 == FVar2) {
              iVar13 = (int)((longlong)pFVar14 - (longlong)pFVar3 >> 3);
              goto LAB_147a35874;
            }
          }
          iVar13 = -1;
LAB_147a35874:
          bVar5 = iVar13 != -1;
        }
        uVar12 = uVar12 + 1;
        FVar9 = (FName)((longlong)FVar9 + 8);
      } while ((int)uVar12 < (int)uVar1);
    }
  }
  return bVar5;
}

// CleanUp @ 147a36020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::CleanUp(UActorChannel *this,bool param_1,EChannelCloseReason param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *this_00;
  TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  *this_01;
  uint uVar3;
  AActor *pAVar4;
  ulong64 uVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  bool bVar17;
  char cVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_Stat_ActorChanCleanUp> FVar21;
  TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_> *pTVar22;
  UClass *pUVar23;
  longlong *plVar24;
  FNetGUIDCache *this_02;
  UWorld *pUVar25;
  FName FVar26;
  TObjectPtr<AActor> *pTVar27;
  FScriptContainerElement *pFVar28;
  undefined1 local_128;
  undefined1 local_127 [3];
  FLLMScope local_124;
  UActorChannel *local_120;
  FColor_u_0 local_118 [2];
  FName local_110;
  FMemScope local_108;
  FName local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  UActorChannel *local_b8;
  FString local_b0;
  FString local_a0;
  FName local_90;
  void *local_88 [2];
  FString local_78;
  void *local_68 [2];
  void *local_58 [3];
  
  if (4 < (byte)LogNetLifecycle._0_1_) {
    pAVar4 = (this->Actor).field0_0x0.DebugPtr;
    if ((pAVar4 == (AActor *)0x0) || (pAVar4->_padding_ == 0)) {
      ::FString::FString(&local_f0,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar4,&local_f0,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetLifecycle);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  FVar21 = StatPtr_Stat_ActorChanCleanUp;
  if (StatPtr_Stat_ActorChanCleanUp == (FThreadSafeStaticStat<FStat_Stat_ActorChanCleanUp>)0x0) {
    pFVar20 = ::FName::FName(&local_90,"Stat_ActorChanCleanUp");
    FVar21 = (FThreadSafeStaticStat<FStat_Stat_ActorChanCleanUp>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ActorChanCleanUp,*pFVar20,
                        L"ActorChan_CleanUp","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar11 = false;
  bVar12 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_147a361fb:
    bVar12 = bVar14;
    bVar11 = bVar13;
    bVar13 = false;
    FVar26 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_110.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                   ,0xa27);
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147a361fb;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar13 = true;
  }
  if ((this->_padding_ == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xa29,L"UActorChannel::CleanUp: Connection is null!"), bVar14)) {
    pcVar10 = (code *)swi(3);
    uVar15 = (*pcVar10)();
    return (bool)uVar15;
  }
  if ((*(longlong *)(this->_padding_ + 0x58) == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection->Driver != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xa2a,L"UActorChannel::CleanUp: Connection->Driver is null!"), bVar14)) {
    pcVar10 = (code *)swi(3);
    uVar15 = (*pcVar10)();
    return (bool)uVar15;
  }
  (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x4a8))();
  cVar16 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
  if (4 < (byte)LogNetTraffic._0_1_) {
    ::LexToString(param_2);
    ::FString::PrintfImpl(&local_b0,L"%llu");
    pAVar4 = (this->Actor).field0_0x0.DebugPtr;
    if ((pAVar4 == (AActor *)0x0) || (pAVar4->_padding_ == 0)) {
      ::FString::FString(&local_e0,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar4,&local_e0,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if ((((cVar16 != '\0') || ((this->QueuedBunches).ArrayNum < 1)) ||
      (*(int *)((longlong)&this->_padding_ + 4) < 0)) || (param_1)) {
    bVar14 = false;
    if (cVar16 == '\0') goto LAB_147a365c8;
  }
  else {
    FLLMScope::FLLMScope
              (&local_124,LLMTagDeclaration_NetConnection.UniqueName,false,None,Default,true);
    local_c0 = LLMTagDeclaration_NetConnection.UniqueName;
    FMemScope::FMemScope(&local_108,&local_c0,true);
    if ((((this->ActorNetGUID).field0_0x0.ObjectId == 0) &&
        ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActorNetGUID.IsValid() || Connection->IsInternalAck()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                            ,0xa37,L"UActorChannel::Cleanup: ActorNetGUID is invalid! Channel: %i"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return (bool)uVar15;
    }
    uVar5 = (this->ActorNetGUID).field0_0x0.ObjectId;
    if (uVar5 != 0) {
      pTVar22 = TMapBase<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FNetworkGUID_const_&>
                          ((TMapBase<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
                            *)(this->_padding_ + 0x15f8),(int)(uVar5 >> 0x20) * 0x17 + (int)uVar5,
                           &this->ActorNetGUID);
      pFVar28 = (pTVar22->AllocatorInstance).Data;
      pFVar7 = pFVar28 + (longlong)pTVar22->ArrayNum * 8;
      for (; pFVar28 != pFVar7; pFVar28 = pFVar28 + 8) {
        if (*(UActorChannel **)pFVar28 == (UActorChannel *)0x0) {
          bVar14 = this == (UActorChannel *)0x0;
        }
        else {
          bVar14 = *(UActorChannel **)pFVar28 == this;
        }
        if (bVar14) {
          local_b8 = this;
          bVar14 = `UActorChannel::CleanUp'::__l72::<lambda_1>::operator()(&local_b8);
          if (!bVar14) goto LAB_147a365a4;
          break;
        }
      }
      if (6 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      pUVar6 = (UObject *)this->_padding_;
      UChannel::CleanUp((UChannel *)this,false,param_2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      this->_padding_ = (longlong)pUVar6;
      this->QueuedCloseReason = param_2;
      pFVar7 = (pTVar22->AllocatorInstance).Data;
      local_120 = this;
      if (((pFVar7 <= (FScriptContainerElement *)&local_120) &&
          ((FScriptContainerElement *)&local_120 < pFVar7 + (longlong)pTVar22->ArrayMax * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      iVar19 = pTVar22->ArrayNum;
      if (iVar19 == pTVar22->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
      }
      pTVar22->ArrayNum = iVar19 + 1;
      *(UActorChannel **)((pTVar22->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_120;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_120 != (UActorChannel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_120);
      }
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
      FMemScope::~FMemScope(&local_108);
      FLLMScope::~FLLMScope(&local_124);
      bVar14 = false;
      goto LAB_147a36c40;
    }
LAB_147a365a4:
    FMemScope::~FMemScope(&local_108);
    FLLMScope::~FLLMScope(&local_124);
LAB_147a365c8:
    bVar14 = false;
    pAVar4 = (this->Actor).field0_0x0.DebugPtr;
    if (((pAVar4 != (AActor *)0x0) &&
        (bVar17 = UObjectBase::IsValidLowLevel((UObjectBase *)pAVar4), !bVar17)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Actor == 0 || Actor->IsValidLowLevel()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                            ,0xa60,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return (bool)uVar15;
    }
    pAVar4 = (this->Actor).field0_0x0.DebugPtr;
    if (pAVar4 != (AActor *)0x0) {
      pUVar23 = Z_Construct_UClass_UReplicatedObjectInterface_NoRegister();
      plVar24 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pAVar4,pUVar23);
      if ((plVar24 != (longlong *)0x0) && (param_2 == Relevancy)) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
        cVar18 = (**(code **)(*plVar24 + 0x10))(plVar24);
        if (cVar18 == '\0') {
          if (6 < (byte)LogNetTraffic._0_1_) {
            this_02 = TSharedPtr<FNetGUIDCache,1>::operator->
                                ((TSharedPtr<FNetGUIDCache,1> *)
                                 (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
            FNetGUIDCache::FullNetGUIDPath(this_02,&local_78,&this->ActorNetGUID);
            ::FString::PrintfImpl(&local_a0,L"%llu");
            (**(code **)(this->_padding_ + 0x2d0))(this,local_88);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            if (local_88[0] != (void *)0x0) {
              FMemory::Free(local_88[0]);
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_147a36964;
        }
      }
    }
    pAVar4 = (this->Actor).field0_0x0.DebugPtr;
    if (pAVar4 != (AActor *)0x0) {
      if ((param_2 == TearOff) && (pAVar4->bTearOff == 0)) {
        if (5 < (byte)LogNetTraffic._0_1_) {
          (**(code **)(this->_padding_ + 0x2d0))(this,local_68);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_UActorChannel___151834850,
                     (FLogCategoryBase *)&LogNetTraffic);
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
        }
        ((this->Actor).field0_0x0.DebugPtr)->bTearOff = '\x01';
      }
      pTVar27 = &this->Actor;
      if ((((pTVar27->field0_0x0).DebugPtr)->bTearOff == 0) ||
         (cVar18 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x428))(), cVar18 != '\0')
         ) {
        if (((this->_padding_ & 4) == 0) ||
           ((param_2 != Dormancy || (((pTVar27->field0_0x0).DebugPtr)->bTearOff != 0)))) {
          if ((UE::Net::bSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded == false) ||
             ((param_2 != LevelUnloaded ||
              (bVar17 = AActor::IsNetStartupActor((this->Actor).field0_0x0.DebugPtr), !bVar17)))) {
            pAVar4 = (this->Actor).field0_0x0.DebugPtr;
            if ((pAVar4->bNetTemporary == 0) &&
               (((pUVar25 = AActor::GetWorld(pAVar4), pUVar25 != (UWorld *)0x0 &&
                 (GIsRequestingExit == false)) &&
                (cVar18 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x498))(),
                cVar18 != '\0')))) {
              if (5 < (byte)LogNetDormancy._0_1_) {
                pAVar4 = (this->Actor).field0_0x0.DebugPtr;
                if ((pAVar4 == (AActor *)0x0) || (pAVar4->_padding_ == 0)) {
                  ::FString::FString(&local_d0,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pAVar4,&local_d0,(UObject *)0x0,None);
                }
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy)
                ;
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
              }
              DestroyActorAndComponents(this,param_2);
            }
          }
          else if (5 < (byte)LogNetTraffic._0_1_) {
            (**(code **)(this->_padding_ + 0x2d0))(this,local_58);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            if (local_58[0] != (void *)0x0) {
              FMemory::Free(local_58[0]);
            }
          }
        }
        else {
          (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x4b8))();
          UNetDriver::NotifyActorFullyDormantForConnection
                    ((((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr,
                     (pTVar27->field0_0x0).DebugPtr,(UNetConnection *)this->_padding_);
          bVar14 = true;
        }
      }
      else {
        uVar3 = (uint)this->_padding_;
        if ((uVar3 & 0x40) == 0) {
          *(uint *)&this->_padding_ = uVar3 | 0x40;
          (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x4c0))();
        }
      }
    }
  }
LAB_147a36964:
  (**(code **)(this->_padding_ + 0x2c0))(this);
  if (((param_1) || (!bVar14)) ||
     ((cVar16 != '\0' && (GbNetReuseReplicatorsForDormantObjects == false)))) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  CleanupReplicators(this,bVar14);
  this_00 = &this->PendingGuidResolves;
  bVar14 = 1 < (this->PendingGuidResolves).HashSize;
  if (!bVar14) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar1 = &(this->PendingGuidResolves).Elements.field_0xc;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x34 = 0;
  iVar19 = *(int *)&(this->PendingGuidResolves).Elements.field_0x2c;
  *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x28 = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)&(this->PendingGuidResolves).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->PendingGuidResolves).Elements.field_0x10,0);
  }
  if (bVar14) {
    (this->PendingGuidResolves).HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  this_01 = &this->QueuedBunchObjectReferences;
  bVar14 = 1 < (this->QueuedBunchObjectReferences).HashSize;
  if (!bVar14) {
    TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  TSparseArray<TSparseSetElement<TSharedRef<FQueuedBunchObjectReference,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_01->Elements,0,
                    *(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x8);
  puVar1 = &(this->QueuedBunchObjectReferences).Elements.field_0xc;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x34 = 0;
  iVar19 = *(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c;
  *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x28 = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->QueuedBunchObjectReferences).Elements.field_0x10,0);
  }
  if (bVar14) {
    (this->QueuedBunchObjectReferences).HashSize = 1;
    TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  pFVar28 = (this->QueuedExportBunches).AllocatorInstance.Data;
  iVar19 = (this->QueuedExportBunches).ArrayNum;
  pFVar7 = pFVar28 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->QueuedExportBunches).ArrayNum != iVar19) {
      `TCheckedPointerIterator<FOutBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    if (pFVar28 == pFVar7) break;
    puVar8 = *(undefined8 **)pFVar28;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    pFVar28 = pFVar28 + 8;
  }
  piVar2 = &(this->QueuedExportBunches).ArrayMax;
  (this->QueuedExportBunches).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->QueuedExportBunches).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->QueuedMustBeMappedGuidsInLastBunch).ArrayMax;
  (this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->QueuedMustBeMappedGuidsInLastBunch).AllocatorInstance,0,piVar2);
  }
  iVar19 = (this->QueuedBunches).ArrayNum;
  if (0 < iVar19) {
    pFVar28 = (this->QueuedBunches).AllocatorInstance.Data;
    pFVar7 = pFVar28 + (longlong)iVar19 * 8;
    while( true ) {
      if ((this->QueuedBunches).ArrayNum != iVar19) {
        `TCheckedPointerIterator<FInBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_127);
      }
      if (pFVar28 == pFVar7) break;
      puVar8 = *(undefined8 **)pFVar28;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      pFVar28 = pFVar28 + 8;
    }
    piVar2 = &(this->QueuedBunches).ArrayMax;
    (this->QueuedBunches).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->QueuedBunches).AllocatorInstance,0,piVar2);
    }
    lVar9 = this->_padding_;
    if (*(longlong *)(lVar9 + 0x68) != 0) {
      pUVar23 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      bVar14 = FObjectPtr::IsA((FObjectPtr *)(lVar9 + 0x68),pUVar23);
      if ((bVar14) && (plVar24 = *(longlong **)(lVar9 + 0x68), plVar24 != (longlong *)0x0)) {
        (**(code **)(*plVar24 + 0x360))(plVar24,&this->ActorNetGUID,0);
      }
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    this->_padding_ = 0;
    bVar14 = true;
  }
  else {
    bVar14 = UChannel::CleanUp((UChannel *)this,param_1,param_2);
  }
LAB_147a36c40:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return bVar14;
}

// CleanupReplicators @ 147a36f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::CleanupReplicators(UActorChannel *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar2;
  AActor *pAVar3;
  AActor *pAVar4;
  UNetConnection *pUVar5;
  FNetworkObjectList *pFVar6;
  code *pcVar7;
  int iVar8;
  UObject *pUVar9;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar10;
  ulonglong uVar11;
  longlong lVar12;
  FObjectKey FVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStackY_288 [32];
  FLLMScope local_238;
  FWeakObjectPtr local_234;
  uchar local_22c [12];
  FWeakObjectPtr local_220;
  uchar local_218 [12];
  FName local_20c;
  FMemScope local_200;
  AActor *local_1f8;
  uchar local_1f0 [8];
  FSharedReferencer<1> aFStack_1e8 [2];
  longlong *local_1d8;
  undefined1 auStack_1d0 [16];
  uint uStack_1c0;
  uint uStack_1bc;
  longlong local_1b8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_1b0;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_1a8;
  undefined2 local_1a0;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_198;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_188;
  undefined1 local_178 [32];
  longlong local_158;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_150;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_148;
  int local_c0;
  int local_bc;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_b8;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_2c = 0x10;
  pTVar2 = &this->ReplicationMap;
  local_b8.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  local_30 = 0;
  local_148.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  local_c0 = 0;
  local_bc = 0x10;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_178,
             (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_1a0 = 0;
  stack0xfffffffffffffe38 = local_178._16_16_;
  local_1d8 = (longlong *)local_178._0_8_;
  auStack_1d0._0_8_ = local_178._8_8_;
  local_1b8 = local_158;
  pTStack_1b0 = pTStack_150;
  uVar11 = local_178._24_8_ >> 0x20;
  local_1a8 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
               *)pTVar2;
  if (local_178._28_4_ < *(int *)(local_178._16_8_ + 0x18)) {
    do {
      lVar14 = (longlong)(int)uVar11 * 0x20 + *local_1d8;
      if ((param_1) &&
         ((*(longlong *)(*(longlong *)(lVar14 + 8) + 0x48) != 0 ||
          (pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar14 + 8) + 0xd8)),
          pUVar9 != (UObject *)0x0)))) {
        FLLMScope::FLLMScope
                  (&local_238,LLMTagDeclaration_NetConnection.UniqueName,false,None,Default,true);
        local_20c = LLMTagDeclaration_NetConnection.UniqueName;
        FMemScope::FMemScope(&local_200,&local_20c,true);
        pAVar3 = (this->Actor).field0_0x0.DebugPtr;
        pAVar4 = *(AActor **)(*(longlong *)(lVar14 + 8) + 0x48);
        if (pAVar3 == (AActor *)0x0) {
          bVar16 = pAVar4 == (AActor *)0x0;
        }
        else {
          bVar16 = pAVar3 == pAVar4;
        }
        if (!bVar16) {
          local_234 = *(FWeakObjectPtr *)(*(longlong *)(lVar14 + 8) + 0xd8);
          FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_148;
          if (local_148.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
            FVar10 = local_148.SecondaryData;
          }
          if ((ulonglong)FVar10 <= &local_234) {
            FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_148;
            if (local_148.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar10 = local_148.SecondaryData;
            }
            if ((&local_234 < (FWeakObjectPtr *)((longlong)FVar10 + (longlong)local_bc * 8)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_c0 == local_bc) {
            local_c0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                 (0x408,&local_148,&local_bc);
          }
          lVar12 = (longlong)local_c0;
          FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_148;
          if (local_148.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
            FVar10 = local_148.SecondaryData;
          }
          local_c0 = local_c0 + 1;
          *(FWeakObjectPtr *)((longlong)FVar10 + lVar12 * 8) = local_234;
        }
        pUVar5 = (UNetConnection *)this->_padding_;
        pUVar9 = *(UObject **)(*(longlong *)(lVar14 + 8) + 0x48);
        if (pUVar9 == (UObject *)0x0) {
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar14 + 8) + 0xd8));
        }
        UNetConnection::StoreDormantReplicator
                  (pUVar5,(this->Actor).field0_0x0.DebugPtr,pUVar9,
                   (TSharedRef<FObjectReplicator,1> *)(lVar14 + 8));
        FObjectReplicator::StopReplicating(*(FObjectReplicator **)(lVar14 + 8),this);
        FMemScope::~FMemScope(&local_200);
        FLLMScope::~FLLMScope(&local_238);
      }
      else {
        pAVar3 = (this->Actor).field0_0x0.DebugPtr;
        pAVar4 = *(AActor **)(*(longlong *)(lVar14 + 8) + 0x48);
        if (pAVar3 == (AActor *)0x0) {
          bVar16 = pAVar4 == (AActor *)0x0;
        }
        else {
          bVar16 = pAVar3 == pAVar4;
        }
        if (!bVar16) {
          local_22c._0_8_ = *(undefined8 *)(*(longlong *)(lVar14 + 8) + 0xd8);
          FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_b8;
          if (local_b8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0
             ) {
            FVar10 = local_b8.SecondaryData;
          }
          if ((ulonglong)FVar10 <= local_22c) {
            FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_b8;
            if (local_b8.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar10 = local_b8.SecondaryData;
            }
            if ((local_22c < (uchar *)((longlong)FVar10 + (longlong)local_2c * 8)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_30 == local_2c) {
            local_30 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                 (0x408,&local_b8,&local_2c);
          }
          lVar12 = (longlong)local_30;
          FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_b8;
          if (local_b8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0
             ) {
            FVar10 = local_b8.SecondaryData;
          }
          local_30 = local_30 + 1;
          *(undefined8 *)((longlong)FVar10 + lVar12 * 8) = local_22c._0_8_;
        }
        FObjectReplicator::CleanUp(*(FObjectReplicator **)(lVar14 + 8));
      }
      uStack_1c0 = uStack_1c0 & ~auStack_1d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1d0);
      uVar11 = (ulonglong)uStack_1bc;
    } while ((int)uStack_1bc < *(int *)(auStack_1d0._8_8_ + 0x18));
    if (((char)local_1a0 != '\0') && (local_1a0._1_1_ != '\0')) {
      uVar15 = *(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar8 = 1;
      }
      else {
        uVar11 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_218._8_4_ = (undefined4)lVar14;
        iVar8 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_1a8->HashSize < iVar8)) || (iVar8 < local_1a8->HashSize)) {
        local_1a8->HashSize = iVar8;
        TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_1a8);
      }
    }
  }
  if (local_30 < 1) goto LAB_147a374ce;
  lVar14 = *(longlong *)(this->_padding_ + 0x58);
  if ((*(longlong *)(lVar14 + 0x9c8) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar8 = local_30;
  pFVar6 = *(FNetworkObjectList **)(lVar14 + 0x9c8);
  local_198.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_b8;
  if (local_b8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    local_198.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_b8.SecondaryData;
  }
  if ((local_30 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_198.ArrayNum = iVar8;
  pAVar3 = (this->Actor).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar3 == (AActor *)0x0)) {
    local_218[0] = '\0';
    local_218[1] = '\0';
    local_218[2] = '\0';
    local_218[3] = '\0';
    local_218[4] = '\0';
    local_218[5] = '\0';
    local_218[6] = '\0';
    local_218[7] = '\0';
    if (pAVar3 != (AActor *)0x0) goto LAB_147a3747d;
    FVar13.ObjectIndex = 0;
    FVar13.ObjectSerialNumber = 0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
LAB_147a3747d:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    local_220.ObjectIndex = 0;
    local_220.ObjectSerialNumber = 0;
    local_1f8 = pAVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1f8);
    FVar13 = (FObjectKey)local_220;
  }
  FNetworkObjectList::RemoveMultipleSubObjectChannelReference
            (pFVar6,FVar13,&local_198,(UObject *)this);
LAB_147a374ce:
  if (0 < local_c0) {
    lVar14 = *(longlong *)(this->_padding_ + 0x58);
    if ((*(longlong *)(lVar14 + 0x9c8) == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar8 = local_c0;
    pFVar6 = *(FNetworkObjectList **)(lVar14 + 0x9c8);
    pUVar5 = (UNetConnection *)this->_padding_;
    local_188.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_148;
    if (local_148.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      local_188.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_148.SecondaryData;
    }
    if ((local_c0 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_188.ArrayNum = iVar8;
    FNetworkObjectList::SwapMultipleReferencesForDormancy
              (pFVar6,(this->Actor).field0_0x0.DebugPtr,&local_188,this,pUVar5);
  }
  pTVar2 = &this->ReplicationMap;
  bVar16 = 1 < *(int *)&(this->ReplicationMap).field_0x48;
  if (!bVar16) {
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,0,*(int *)&(this->ReplicationMap).field_0x8);
  puVar1 = &(this->ReplicationMap).field_0xc;
  *(undefined4 *)&(this->ReplicationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ReplicationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationMap).field_0x34 = 0;
  iVar8 = *(int *)&(this->ReplicationMap).field_0x2c;
  *(undefined4 *)&(this->ReplicationMap).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->ReplicationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReplicationMap).field_0x10,0);
  }
  if (bVar16) {
    *(undefined4 *)&(this->ReplicationMap).field_0x48 = 1;
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  local_1f0[0] = '\0';
  local_1f0[1] = '\0';
  local_1f0[2] = '\0';
  local_1f0[3] = '\0';
  local_1f0[4] = '\0';
  local_1f0[5] = '\0';
  local_1f0[6] = '\0';
  local_1f0[7] = '\0';
  aFStack_1e8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActorReplicator != (TSharedPtr<FObjectReplicator,1> *)local_1f0) {
    (this->ActorReplicator).Object = (FObjectReplicator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActorReplicator).SharedReferenceCount,aFStack_1e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_1e8[0].ReferenceController);
  if (local_148.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_148.SecondaryData);
  }
  if (local_b8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_b8.SecondaryData);
  }
  return;
}

// Close @ 147a37fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

long64 __thiscall UActorChannel::Close(UActorChannel *this,EChannelCloseReason param_1)

{
  int *piVar1;
  AActor *pAVar2;
  longlong *plVar3;
  char cVar4;
  long64 lVar5;
  bool bVar6;
  bool bVar7;
  FScopedRepContext local_res8;
  UActorChannel *local_res18 [2];
  FString local_38;
  
  if (4 < (byte)LogNetLifecycle._0_1_) {
    pAVar2 = (this->Actor).field0_0x0.DebugPtr;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_38,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetLifecycle);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FScopedRepContext::FScopedRepContext
            (&local_res8,(UNetConnection *)this->_padding_,(this->Actor).field0_0x0.DebugPtr);
  if (4 < (byte)LogNetTraffic._0_1_) {
    ::LexToString(param_1);
    pAVar2 = (this->Actor).field0_0x0.DebugPtr;
    if ((pAVar2 == (AActor *)0x0) || (pAVar2->_padding_ == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar2,&local_38,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  lVar5 = UChannel::Close((UChannel *)this,param_1);
  if ((this->Actor).field0_0x0.DebugPtr == (AActor *)0x0) goto LAB_147a381da;
  bVar7 = false;
  if (this->_padding_ != 0) {
    if (param_1 == Dormancy) {
      plVar3 = *(longlong **)(this->_padding_ + 0x58);
      bVar6 = bVar7;
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x3f8))(plVar3);
        if (cVar4 == '\0') {
          bVar6 = false;
          if (plVar3 == (longlong *)0x0) goto LAB_147a38171;
          plVar3 = *(longlong **)(this->_padding_ + 0x58);
          (**(code **)(*plVar3 + 0x4b8))(plVar3,(this->Actor).field0_0x0.DebugPtr);
        }
        else {
          bVar7 = true;
          if ((((this->Actor).field0_0x0.DebugPtr)->NetDormancy).Value < 2) {
            local_res18[0] = this;
            `UActorChannel::Close'::__l55::<lambda_1>::operator()(local_res18);
          }
        }
        UNetDriver::NotifyActorFullyDormantForConnection
                  ((((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr,
                   (this->Actor).field0_0x0.DebugPtr,(UNetConnection *)this->_padding_);
        bVar6 = bVar7;
      }
LAB_147a38171:
      if ((GNetDormancyValidate < 1) &&
         ((bVar6 == false || (GbNetReuseReplicatorsForDormantObjects == false)))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    UNetConnection::RemoveActorChannel
              ((UNetConnection *)this->_padding_,(this->Actor).field0_0x0.DebugPtr);
  }
  CleanupReplicators(this,bVar7);
  piVar1 = &(this->CreateSubObjects).ArrayMax;
  (this->CreateSubObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CreateSubObjects).AllocatorInstance,0,piVar1);
  }
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
LAB_147a381da:
  if (local_res8.Connection != (UNetConnection *)0x0) {
    (local_res8.Connection)->RepContextActor = (AActor *)0x0;
    (local_res8.Connection)->RepContextLevel = (ULevel *)0x0;
  }
  return lVar5;
}

// CreateReplicator @ 147a3b650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FObjectReplicator,1> * __thiscall
UActorChannel::CreateReplicator(UActorChannel *this,UObject *param_1)

{
  TSharedRef<FObjectReplicator,1> *pTVar1;
  
  pTVar1 = CreateReplicator(this,param_1,true);
  return pTVar1;
}

// CreateReplicator @ 147a3b660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FObjectReplicator,1> * __thiscall
UActorChannel::CreateReplicator(UActorChannel *this,UObject *param_1,bool param_2)

{
  int *piVar1;
  AActor *pAVar2;
  UNetDriver *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep> FVar10;
  TSharedPtr<FObjectReplicator,1> *pTVar11;
  FNetworkObjectList *pFVar12;
  TSharedRef<FObjectReplicator,1> *pTVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  bool bVar16;
  FObjectReplicator *pFVar17;
  FSharedReferencer<1> FVar18;
  TPairInitializer<UObject_*_const_&,TSharedRef<FObjectReplicator,1>_&&> local_res8;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  TSharedPtr<FObjectReplicator,1> local_108;
  FName local_f8;
  FName local_e8;
  FName local_e0;
  LARGE_INTEGER local_d8;
  FString local_d0;
  FString local_c0;
  FObjectReplicator *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FStatMessage local_98;
  TSharedRef<FObjectReplicator,1> **local_88;
  FObjectReplicator **local_80;
  FName local_78;
  TSharedPtr<FObjectReplicator,1> local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  
  local_res8.Value = (TSharedRef<FObjectReplicator,1> *)param_1;
  if (GUseDetailedScopeCounters) {
    FVar10 = StatPtr_Stat_ActorChanFindOrCreateRep;
    if (StatPtr_Stat_ActorChanFindOrCreateRep ==
        (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)0x0) {
      pFVar9 = ::FName::FName(&local_78,"Stat_ActorChanFindOrCreateRep");
      FVar10 = (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ActorChanFindOrCreateRep,
                          *pFVar9,L"ActorChan_FindOrCreateRep","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar10 = (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)&TStatId::TStatId_NAME_None
    ;
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar8 = FVar14.Number;
  if ((FVar15.Value == 0) && (uVar8 == 0)) {
LAB_147a3b7c3:
    bVar6 = false;
    FVar14 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar15.Value;
        local_res20.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                   ,0x1532);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147a3b7c3;
    local_res8.Key._0_4_ = FVar15.Value;
    local_res8.Key._4_4_ = uVar8;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  pAVar2 = (this->Actor).field0_0x0.DebugPtr;
  pFVar17 = (FObjectReplicator *)0x0;
  FVar18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_108.Object = (FObjectReplicator *)0x0;
  local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2) {
    pTVar11 = UNetConnection::FindAndRemoveDormantReplicator
                        ((UNetConnection *)this->_padding_,&local_70,pAVar2,
                         (UObject *)local_res8.Value);
    if (&local_108 != pTVar11) {
      local_108.Object = pTVar11->Object;
      pTVar11->Object = (FObjectReplicator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_108.SharedReferenceCount,&pTVar11->SharedReferenceCount);
      pFVar17 = local_108.Object;
      FVar18.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    if (pFVar17 != (FObjectReplicator *)0x0) {
      pAVar2 = (this->Actor).field0_0x0.DebugPtr;
      if (pAVar2 == (AActor *)0x0) {
        bVar16 = (AActor *)local_res8.Value == (AActor *)0x0;
      }
      else {
        bVar16 = pAVar2 == (AActor *)local_res8.Value;
      }
      if ((!bVar16) &&
         (pUVar3 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar3 != (UNetDriver *)0x0)) {
        pFVar12 = UNetDriver::GetNetworkObjectList(pUVar3);
        FNetworkObjectList::SwapReferenceForDormancy
                  (pFVar12,(this->Actor).field0_0x0.DebugPtr,(UObject *)local_res8.Value,
                   (UNetConnection *)this->_padding_,this);
      }
      if (4 < (byte)LogNetTraffic._0_1_) {
        local_e8 = *(FName *)((longlong)local_res8.Value + 0x18);
        ::FName::ToString(&local_e8,&local_d0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_147a3b9da;
    }
  }
  else {
    UNetConnection::RemoveDormantReplicator
              ((UNetConnection *)this->_padding_,pAVar2,(UObject *)local_res8.Value);
  }
  pTVar11 = (TSharedPtr<FObjectReplicator,1> *)
            (**(code **)(*(longlong *)this->_padding_ + 0x398))
                      ((longlong *)this->_padding_,local_60,local_res8.Value);
  if (&local_108 != pTVar11) {
    local_108.Object = pTVar11->Object;
    pTVar11->Object = (FObjectReplicator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_108.SharedReferenceCount,&pTVar11->SharedReferenceCount);
    pFVar17 = local_108.Object;
    FVar18.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  if (4 < (byte)LogNetTraffic._0_1_) {
    local_e0 = *(FName *)((longlong)local_res8.Value + 0x18);
    ::FName::ToString(&local_e0,&local_c0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  pAVar2 = (this->Actor).field0_0x0.DebugPtr;
  if (pAVar2 == (AActor *)0x0) {
    bVar16 = (AActor *)local_res8.Value == (AActor *)0x0;
  }
  else {
    bVar16 = pAVar2 == (AActor *)local_res8.Value;
  }
  if ((!bVar16) && (pUVar3 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar3 != (UNetDriver *)0x0))
  {
    pFVar12 = UNetDriver::GetNetworkObjectList(pUVar3);
    FNetworkObjectList::AddSubObjectChannelReference
              (pFVar12,(this->Actor).field0_0x0.DebugPtr,(UObject *)local_res8.Value,(UObject *)this
              );
  }
LAB_147a3b9da:
  if ((pFVar17 == (FObjectReplicator *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pTVar13 = (TSharedRef<FObjectReplicator,1> *)(*pcVar4)();
    return pTVar13;
  }
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = pFVar17;
  pTStack_a0 = FVar18.ReferenceController;
  if ((pFVar17 == (FObjectReplicator *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pTVar13 = (TSharedRef<FObjectReplicator,1> *)(*pcVar4)();
    return pTVar13;
  }
  local_88 = &local_res8.Value;
  local_80 = &local_a8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,TSharedRef<FObjectReplicator,1>_&&>_>
            ((TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
              *)&this->ReplicationMap,&local_res8,(bool *)&local_88);
  pTVar13 = (TSharedRef<FObjectReplicator,1> *)
            (*(longlong *)&this->ReplicationMap + (longlong)(int)local_res8.Key._0_4_ * 0x20 + 8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  FObjectReplicator::StartReplicating(pTVar13->Object,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
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
  return pTVar13;
}

// Describe @ 147a3eaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall UActorChannel::Describe(UActorChannel *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  if ((this->Actor).field0_0x0.DebugPtr == (AActor *)0x0) {
    UChannel::Describe((UChannel *)this,&local_28);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Actor: None %s");
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    UChannel::Describe((UChannel *)this,&local_18);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(this->Actor).field0_0x0.DebugPtr,&local_28,(UObject *)0x0,None
              );
    ::FString::PrintfImpl
              (__return_storage_ptr__,L"[UActorChannel] Actor: %s, Role: %i, RemoteRole: %i %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DestroyActorAndComponents @ 147a3ed40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UActorChannel::DestroyActorAndComponents(UActorChannel *this,EChannelCloseReason param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  UObjectBase *this_00;
  UNetDriver *pUVar5;
  AActor *pAVar6;
  UObject *pUVar7;
  code *pcVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  char cVar11;
  FUObjectItem *pFVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_e0;
  int local_d0;
  FScriptContainerElement *local_c8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_3c;
  
  uVar20 = (this->CreateSubObjects).ArrayNum;
  uVar14 = (ulonglong)(int)uVar20;
  pFVar23 = (this->CreateSubObjects).AllocatorInstance.Data;
  pFVar17 = pFVar23 + uVar14 * 8;
  local_c8 = pFVar17;
  while( true ) {
    if ((this->CreateSubObjects).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar23 == pFVar17) break;
    this_00 = *(UObjectBase **)pFVar23;
    if (this_00 != (UObjectBase *)0x0) {
      if ((this->_padding_ != 0) &&
         (pUVar5 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar5 != (UNetDriver *)0x0)) {
        UNetDriver::MoveMappedObjectToUnmapped(pUVar5,(UObject *)this_00);
      }
      if ((this->_padding_ != 0) &&
         (pUVar5 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar5 != (UNetDriver *)0x0)) {
        UNetDriver::NotifySubObjectDestroyed(pUVar5,(UObject *)this_00);
      }
      pAVar6 = (this->Actor).field0_0x0.DebugPtr;
      (**(code **)(pAVar6->_padding_ + 0x308))(pAVar6,this_00);
      (**(code **)(this_00->_padding_ + 0x238))(this_00);
      pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsRooted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                              ,0xb8,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
      pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      do {
        lVar15 = (pFVar12->field0_0x0).FlagsAndRefCount;
        uVar19 = (uint)((ulonglong)lVar15 >> 0x20);
        if ((uVar19 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar10 = lVar15 == (pFVar12->field0_0x0).FlagsAndRefCount;
        if (bVar10) {
          (pFVar12->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar19 << 0x20 | (longlong)(int)lVar15 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar10);
      pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar12,Async);
      pFVar17 = local_c8;
    }
    uVar14 = (ulonglong)uVar20;
    pFVar23 = pFVar23 + 8;
  }
  piVar1 = &(this->CreateSubObjects).ArrayMax;
  (this->CreateSubObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CreateSubObjects).AllocatorInstance,0,piVar1);
  }
  pAVar6 = (this->Actor).field0_0x0.DebugPtr;
  if (pAVar6 != (AActor *)0x0) {
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&pAVar6->OwnedComponents);
    iVar3 = *(int *)&(pTVar13->Elements).field_0x28;
    iStack_b8 = 0;
    uStack_b4 = 1;
    local_a0 = 0;
    local_b0 = &(pTVar13->Elements).field_0x10;
    iStack_a4 = 0;
    if (iVar3 != 0) {
      puVar22 = *(uint **)&(pTVar13->Elements).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_b0;
      }
      uVar20 = *puVar22;
      while (uVar20 == 0) {
        lVar15 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_147a3efae;
        uVar20 = puVar22[lVar15 + 1];
      }
      uStack_b4 = -uVar20 & uVar20;
      uVar14 = (ulonglong)uStack_b4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_d0 = (int)lVar15;
      iStack_a4 = local_a0 + -1 + local_d0;
      if (iVar3 < iStack_a4) {
        iStack_a4 = iVar3;
      }
    }
LAB_147a3efae:
    uVar20 = *(uint *)&(pTVar13->Elements).field_0x28;
    puVar2 = &(pTVar13->Elements).field_0x10;
    uStack_9c = local_3c;
    iStack_98 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
    uStack_a8 = 0xffffffff;
    uVar19 = uVar20 & 0xffffffe0;
    TStack_88.CurrentBitIndex = iStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
    iVar16 = (int)uVar20 >> 5;
    TStack_88._28_4_ = local_3c;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    local_c0 = pTVar13;
    local_90 = pTVar13;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
    if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar20 != uVar4) {
      puVar21 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar2;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar15 = (longlong)iVar16;
        uVar19 = uVar19 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_147a3f0b0;
        uVar20 = *(uint *)(puVar21 + lVar15 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar20 = (uVar19 - 1) + (int)lVar15;
      if ((int)uVar4 < (int)uVar20) {
        uVar20 = uVar4;
      }
    }
LAB_147a3f0b0:
    while( true ) {
      pTVar9 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar20) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar9 == pTVar13)) break;
      if ((this->_padding_ != 0) &&
         (pUVar5 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar5 != (UNetDriver *)0x0)) {
        UNetDriver::MoveMappedObjectToUnmapped
                  (pUVar5,*(UObject **)
                           (*(longlong *)&pTVar9->Elements +
                           (longlong)TStack_88.CurrentBitIndex * 0x10));
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    if (UE::Net::Private::bRemapStableSubobjects != false) {
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      GetObjectsWithOuter((UObjectBase *)(this->Actor).field0_0x0.DebugPtr,&local_e0,true,RF_NoFlags
                          ,Borrowed);
      iVar3 = local_e0.ArrayNum;
      uVar14 = (ulonglong)local_e0.ArrayNum;
      pFVar17 = local_e0.AllocatorInstance.Data + uVar14 * 8;
      FVar18.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar14 != iVar3) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar18.Data == pFVar17) break;
        pUVar7 = *(UObject **)FVar18.Data;
        cVar11 = (**(code **)(*(longlong *)pUVar7 + 0x200))(pUVar7);
        if (((cVar11 != '\0') && (this->_padding_ != 0)) &&
           (pUVar5 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar5 != (UNetDriver *)0x0)) {
          UNetDriver::MoveMappedObjectToUnmapped(pUVar5,pUVar7);
        }
        uVar14 = local_e0._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 8;
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
    }
    if ((this->_padding_ != 0) &&
       (pUVar5 = *(UNetDriver **)(this->_padding_ + 0x58), pUVar5 != (UNetDriver *)0x0)) {
      UNetDriver::MoveMappedObjectToUnmapped(pUVar5,(UObject *)(this->Actor).field0_0x0.DebugPtr);
    }
    (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x238))();
    AActor::Destroy((this->Actor).field0_0x0.DebugPtr,true,true);
  }
  if ((((UE::Net::FilterGuidRemapping != 0) && ((this->ActorNetGUID).field0_0x0.ObjectId != 0)) &&
      (this->_padding_ != 0)) &&
     ((lVar15 = *(longlong *)(this->_padding_ + 0x58), lVar15 != 0 &&
      (lVar15 = *(longlong *)(lVar15 + 0x1c8), lVar15 != 0)))) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
              ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
               (lVar15 + 0xb0),&this->ActorNetGUID);
  }
  return;
}

// DoSubObjectReplication @ 147a3f790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::DoSubObjectReplication
          (UActorChannel *this,FOutBunch *param_1,FReplicationFlags *param_2)

{
  int *piVar1;
  AActor *pAVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_bool___cdecl_UActorChannel::DoSubObjectReplication(FOutBunch_&,FReplicationFlags_&)_::_8_::FStat_STAT_Validate_ReplicatedSubObjects>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  pAVar2 = (this->Actor).field0_0x0.DebugPtr;
  if ((bool)pAVar2->bReplicateUsingRegisteredSubObjectList) {
    uVar5 = ReplicateRegisteredSubObjects
                      (this,param_1,*(FReplicationFlags *)&(param_2->field0_0x0)._s_0);
    if (UE::Net::GCVarCompareSubObjectsReplicated != false) {
      FVar11.Value = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_Validate_ReplicatedSubObjects ==
              (FThreadSafeStaticStat<_protected:_bool___cdecl_UActorChannel::DoSubObjectReplication(FOutBunch_&,FReplicationFlags_&)_::_8_::FStat_STAT_Validate_ReplicatedSubObjects>
               )0x0) {
            pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_Validate_ReplicatedSubObjects");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Validate_ReplicatedSubObjects,
                       *pFVar6,L"STAT_Validate_ReplicatedSubObjects","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      FVar7 = StatPtr_STAT_Validate_ReplicatedSubObjects;
      if (StatPtr_STAT_Validate_ReplicatedSubObjects ==
          (FThreadSafeStaticStat<_protected:_bool___cdecl_UActorChannel::DoSubObjectReplication(FOutBunch_&,FReplicationFlags_&)_::_8_::FStat_STAT_Validate_ReplicatedSubObjects>
           )0x0) {
        pFVar6 = ::FName::FName(&local_res20,"STAT_Validate_ReplicatedSubObjects");
        FVar7 = (FThreadSafeStaticStat<_protected:_bool___cdecl_UActorChannel::DoSubObjectReplication(FOutBunch_&,FReplicationFlags_&)_::_8_::FStat_STAT_Validate_ReplicatedSubObjects>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_Validate_ReplicatedSubObjects,*pFVar6,
                             L"STAT_Validate_ReplicatedSubObjects","STATGROUP_Quick",
                             "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar10 = *(FName *)FVar7;
      bVar3 = false;
      bVar4 = false;
      FVar9 = FVar10.ComparisonIndex.Value;
      uVar8 = FVar10.Number;
      if ((FVar9.Value == 0) && (uVar8 == 0)) {
        ValidateReplicatedSubObjects(this);
        DataChannelInternal::bTrackReplicatedSubObjects = false;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8.s.LowPart = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
          bVar3 = false;
          bVar4 = true;
          if (-1 < CpuChannel->Enabled) {
            local_res8.s.LowPart = FVar9.Value;
            local_res8.s.HighPart = uVar8;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0xf84);
            bVar3 = true;
            bVar4 = true;
          }
        }
        bVar12 = FThreadStats::bPrimaryEnable == false;
        if (bVar12) {
          FVar10.ComparisonIndex.Value = 0;
          FVar10.Number = 0;
        }
        else {
          local_res8.s.LowPart = FVar9.Value;
          local_res8.s.HighPart = uVar8;
          FThreadStats::AddMessage(FVar10,CycleScopeStart);
          FVar11.Value = FVar9.Value;
        }
        ValidateReplicatedSubObjects(this);
        DataChannelInternal::bTrackReplicatedSubObjects = false;
        if (bVar4) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar3) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((!bVar12) && (FVar10 != (FName)0x0)) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
            local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
            local_38.NameAndInfo.Index.Value = FVar11.Value;
            QueryPerformanceCounter(&local_res8);
            local_38.StatData.Pad[4] = '\0';
            local_38.StatData.Pad[5] = '\0';
            local_38.StatData.Pad[6] = '\0';
            local_38.StatData.Pad[7] = '\0';
            local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
            local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
            local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
            local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_00,&local_38);
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
      }
    }
  }
  else {
    uVar5 = (**(code **)(pAVar2->_padding_ + 0x2f8))(pAVar2,this,param_1,param_2);
  }
  DataChannelInternal::CurrentSubObjectOwner = (UObject *)0x0;
  DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
  return (bool)uVar5;
}

// FindOrCreateReplicator @ 147a471e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FObjectReplicator,1> * __thiscall
UActorChannel::FindOrCreateReplicator(UActorChannel *this,UObject *param_1,bool *param_2)

{
  TSharedRef<FObjectReplicator,1> *pTVar1;
  
  pTVar1 = FindReplicator(this,param_1,(bool *)0x0);
  if (param_2 != (bool *)0x0) {
    *param_2 = pTVar1 == (TSharedRef<FObjectReplicator,1> *)0x0;
  }
  if (pTVar1 == (TSharedRef<FObjectReplicator,1> *)0x0) {
    pTVar1 = CreateReplicator(this,param_1,true);
  }
  return pTVar1;
}

// FindReplicator @ 147a47240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FObjectReplicator,1> * __thiscall
UActorChannel::FindReplicator(UActorChannel *this,UObject *param_1)

{
  TSharedRef<FObjectReplicator,1> *pTVar1;
  
  pTVar1 = FindReplicator(this,param_1,(bool *)0x0);
  return pTVar1;
}

// FindReplicator @ 147a47250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<FObjectReplicator,1> * __thiscall
UActorChannel::FindReplicator(UActorChannel *this,UObject *param_1,bool *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep> FVar7;
  TSharedRef<FObjectReplicator,1> *pTVar8;
  FNetworkObjectList *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_48;
  
  FVar10.Value = 0;
  if (GUseDetailedScopeCounters) {
    FVar7 = StatPtr_Stat_ActorChanFindOrCreateRep;
    if (StatPtr_Stat_ActorChanFindOrCreateRep ==
        (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"Stat_ActorChanFindOrCreateRep");
      FVar7 = (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ActorChanFindOrCreateRep,*pFVar6
                         ,L"ActorChan_FindOrCreateRep","STATGROUP_Net","STATCAT_Advanced",L"Net",
                         true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar7 = (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)&TStatId::TStatId_NAME_None;
  }
  LVar9 = *(LARGE_INTEGER *)FVar7;
  bVar2 = false;
  bVar4 = false;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                   ,0x150f);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = LVar9.s.LowPart;
      goto LAB_147a473ce;
    }
  }
  bVar3 = false;
  LVar9._0_4_ = 0;
  LVar9._4_4_ = 0;
LAB_147a473ce:
  pTVar8 = TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                   *)&this->ReplicationMap,param_1);
  if (pTVar8 != (TSharedRef<FObjectReplicator,1> *)0x0) {
    local_res8 = *(LARGE_INTEGER *)&(pTVar8->Object->WeakObjectPtr).WeakPtr;
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res8.s);
    if (!bVar5) {
      this_00 = UNetDriver::GetNetworkObjectList(*(UNetDriver **)(this->_padding_ + 0x58));
      local_res8 = *(LARGE_INTEGER *)&(pTVar8->Object->WeakObjectPtr).WeakPtr;
      FNetworkObjectList::RemoveSubObjectChannelReference
                (this_00,(this->Actor).field0_0x0.DebugPtr,
                 (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8.s,(UObject *)this);
      TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
      ::Remove((TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                *)&this->ReplicationMap,param_1);
      pTVar8 = (TSharedRef<FObjectReplicator,1> *)0x0;
      if (param_2 != (bool *)0x0) {
        *param_2 = true;
        pTVar8 = (TSharedRef<FObjectReplicator,1> *)0x0;
      }
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return pTVar8;
}

// GetActorReplicationData @ 147a4e4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FObjectReplicator * __thiscall UActorChannel::GetActorReplicationData(UActorChannel *this)

{
  code *pcVar1;
  bool bVar2;
  FObjectReplicator *pFVar3;
  
  if ((this->ActorReplicator).Object != (FObjectReplicator *)0x0) {
    return (this->ActorReplicator).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FObjectReplicator *)(*pcVar1)();
    return pFVar3;
  }
  return (this->ActorReplicator).Object;
}

// GetAdditionalRequiredBunches @ 147a4e510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> * __thiscall
UActorChannel::GetAdditionalRequiredBunches
          (UActorChannel *this,
          TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FOutBunch *param_1
          ,EChannelGetAdditionalRequiredBunchesFlags param_2)

{
  int *piVar1;
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  UPackageMapClient *this_00;
  FScriptContainerElement *pFVar7;
  undefined1 local_res20 [8];
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = CastChecked<UPackageMapClient,UPackageMap>
                      ((TObjectPtr<UPackageMap> *)(this->_padding_ + 0x68),NullChecked);
  UPackageMapClient::GetAdditionalRequiredBunches
            (this_00,&local_38,param_1,this->bHoldQueuedExportBunchesAndGUIDs | param_2);
  if (__return_storage_ptr__ != &local_38) {
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_38.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_38.ArrayMax;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (*(char *)(this->_padding_ + 0x17c8) == '\0') {
    pTVar2 = &this->QueuedExportBunches;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    iVar4 = (this->QueuedExportBunches).ArrayNum;
    pFVar5 = pFVar7 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->QueuedExportBunches).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FOutBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar7 == pFVar5) break;
      lVar6 = *(longlong *)pFVar7;
      if ((lVar6 != 0) &&
         ((GNetworkProfiler.bIsTrackingEnabled != false ||
          (GNetworkProfiler.bShouldTrackingBeEnabled != false)))) {
        if (__CsvProfilerStat1209 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat1209 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        FNetworkProfiler::TrackExportBunch
                  (&GNetworkProfiler,*(ushort *)(lVar6 + 0xa0),(UNetConnection *)this->_padding_);
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      }
      pFVar7 = pFVar7 + 8;
    }
    if ((this->QueuedExportBunches).ArrayNum != 0) {
      TArray<FOutBunch_*,TSizedDefaultAllocator<32>_>::
      Append<FOutBunch_*,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,pTVar2);
      piVar1 = &(this->QueuedExportBunches).ArrayMax;
      (this->QueuedExportBunches).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetNetFieldExportGroupForClassNetCache @ 147a53c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetFieldExportGroup * __thiscall
UActorChannel::GetNetFieldExportGroupForClassNetCache(UActorChannel *this,UClass *param_1)

{
  uint uVar1;
  FString *pFVar2;
  UPackageMapClient *this_00;
  int iVar3;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  TSharedPtr<FNetFieldExportGroup,1> local_18;
  
  if (((UNetConnection *)this->_padding_)->bInternalAck == 0) {
    return (FNetFieldExportGroup *)0x0;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  uVar1 = UNetConnection::GetNetworkCustomVersion
                    ((UNetConnection *)this->_padding_,&FEngineNetworkCustomVersion::Guid);
  if (uVar1 < 0xf) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    ::FString::ConcatFF(&local_38,&local_28,&ClassNetCacheSuffix);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = local_38.Data.ArrayNum;
    local_48.Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar2 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0)
    ;
    if (&local_48 != pFVar2) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this->_padding_,&local_48,1);
    iVar3 = ClassNetCacheSuffix.Data.ArrayNum + -1;
    if (ClassNetCacheSuffix.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (&local_48,(wchar_t *)ClassNetCacheSuffix.Data.AllocatorInstance.Data,iVar3);
  }
  this_00 = CastChecked<UPackageMapClient,UPackageMap>
                      ((TObjectPtr<UPackageMap> *)(this->_padding_ + 0x68),NullChecked);
  UPackageMapClient::GetNetFieldExportGroup(this_00,&local_18,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return local_18.Object;
}

// GetOrCreateNetFieldExportGroupForClassNetCache @ 147a542b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetFieldExportGroup * __thiscall
UActorChannel::GetOrCreateNetFieldExportGroupForClassNetCache(UActorChannel *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  UPackageMapClient *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FNetFieldExportGroup *pFVar9;
  FClassNetCache *pFVar10;
  FNetFieldExportGroup *pFVar11;
  UClass *pUVar12;
  FName FVar13;
  FScriptContainerElement *this_01;
  ulonglong uVar14;
  int iVar15;
  undefined1 local_res8 [8];
  int local_res18;
  FName local_res20;
  TSharedPtr<FNetFieldExportGroup,1> local_b8;
  FString local_a8;
  FName local_98;
  UPackageMapClient *local_90;
  FString local_88;
  FString local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60 [3];
  TSharedPtr<FNetFieldExportGroup,1> local_48;
  
  if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
    return (FNetFieldExportGroup *)0x0;
  }
  if ((param_1 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x14b1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FNetFieldExportGroup *)(*pcVar6)();
    return pFVar9;
  }
  pUVar12 = *(UClass **)&param_1->field_0x10;
  if (pUVar12 == (UClass *)0x0) {
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_88);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x14b5,L"ObjectClass is null. ObjectName: %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNetFieldExportGroup *)(*pcVar6)();
      return pFVar9;
    }
  }
  bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)pUVar12,true);
  if (!bVar7) {
    local_98.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_98.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_98,&local_78);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectClass->IsValidLowLevelFast()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x14b6,L"ObjectClass is invalid. ObjectName: %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNetFieldExportGroup *)(*pcVar6)();
      return pFVar9;
    }
  }
  this_00 = *(UPackageMapClient **)(this->_padding_ + 0x68);
  local_90 = this_00;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar12,&local_a8,(UObject *)0x0);
  (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this->_padding_,&local_a8,0);
  pFVar9 = (FNetFieldExportGroup *)0x0;
  iVar15 = 0;
  if (ClassNetCacheSuffix.Data.ArrayNum != 0) {
    iVar15 = ClassNetCacheSuffix.Data.ArrayNum + -1;
  }
  ::FString::AppendChars
            (&local_a8,(wchar_t *)ClassNetCacheSuffix.Data.AllocatorInstance.Data,iVar15);
  UPackageMapClient::GetNetFieldExportGroup(this_00,&local_b8,&local_a8);
  if (local_b8.Object == (FNetFieldExportGroup *)0x0) {
    lVar5 = *(longlong *)(this->_padding_ + 0x58);
    if ((*(longlong *)(lVar5 + 0x1d8) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNetFieldExportGroup *)(*pcVar6)();
      return pFVar9;
    }
    pFVar10 = FClassNetCacheMgr::GetClassNetCache(*(FClassNetCacheMgr **)(lVar5 + 0x1d8),pUVar12);
    pFVar11 = ::operator_new(0x30);
    local_b8.Object = pFVar9;
    if (pFVar11 != (FNetFieldExportGroup *)0x0) {
      (pFVar11->PathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->PathName).Data.ArrayNum = 0;
      (pFVar11->PathName).Data.ArrayMax = 0;
      pFVar11->PathNameIndex = 0;
      (pFVar11->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->NetFieldExports).ArrayNum = 0;
      (pFVar11->NetFieldExports).ArrayMax = 0;
      pFVar11->bDirtyForReplay = true;
      local_b8.Object = pFVar11;
    }
    pFVar11 = ::operator_new(0x18);
    if (pFVar11 != (FNetFieldExportGroup *)0x0) {
      (pFVar11->PathName).Data.ArrayNum = 1;
      (pFVar11->PathName).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           &
           ___7__TReferenceControllerWithDeleter_VFNetFieldExportGroup__U__DefaultDeleter_VFNetFieldExportGroup___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (pFVar11->PathName).Data.ArrayMax = 1;
      *(FNetFieldExportGroup **)&pFVar11->PathNameIndex = local_b8.Object;
      pFVar9 = pFVar11;
    }
    local_68 = 0;
    local_60[0].ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b8.SharedReferenceCount,local_60)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].ReferenceController);
    if ((local_b8.Object == (FNetFieldExportGroup *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNetFieldExportGroup *)(*pcVar6)();
      return pFVar9;
    }
    iVar15 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    ::FString::AssignRange
              (&(local_b8.Object)->PathName,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar15);
    local_res18 = 0;
    for (; pFVar10 != (FClassNetCache *)0x0; pFVar10 = pFVar10->Super) {
      iVar15 = (pFVar10->Fields).ArrayNum;
      this_01 = (pFVar10->Fields).AllocatorInstance.Data;
      pFVar2 = this_01 + (longlong)iVar15 * 0x18;
      while( true ) {
        if ((pFVar10->Fields).ArrayNum != iVar15) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FFieldNetCache_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_01 == pFVar2) break;
        if ((((((byte)*this_01 & 1) == 0) && (lVar5 = *(longlong *)this_01, lVar5 != 0)) &&
            ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) >> 0xf & 1) != 0)) &&
           (((*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) >> 0x14 & 1) != 0 &&
            ((*(uint *)(*(longlong *)(lVar5 + 0x70) + 0xb0) >> 0x14 & 1) != 0)))) {
          bVar7 = true;
LAB_147a54655:
          uVar14 = 0;
        }
        else {
          bVar7 = false;
          if ((((byte)*this_01 & 1) == 0) ||
             (uVar14 = *(ulonglong *)this_01 & 0xfffffffffffffffe, uVar14 == 0)) goto LAB_147a54655;
          pUVar12 = Z_Construct_UClass_UFunction_NoRegister();
          iVar8 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar12->_padding_)) goto LAB_147a54655;
        }
        if ((bVar7) || (uVar14 != 0)) {
          if ((local_b8.Object == (FNetFieldExportGroup *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar9 = (FNetFieldExportGroup *)(*pcVar6)();
            return pFVar9;
          }
          pFVar9 = local_b8.Object;
          FVar13 = FFieldVariant::GetFName((FFieldVariant *)this_01);
          piVar1 = &(pFVar9->NetFieldExports).ArrayMax;
          iVar8 = (pFVar9->NetFieldExports).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&(pFVar9->NetFieldExports).AllocatorInstance,piVar1);
          }
          (pFVar9->NetFieldExports).ArrayNum = iVar8 + 1;
          pFVar3 = (pFVar9->NetFieldExports).AllocatorInstance.Data + (longlong)iVar8 * 0x28;
          uVar4 = *(undefined4 *)(this_01 + 0xc);
          *(undefined8 *)pFVar3 = 0;
          *(undefined8 *)(pFVar3 + 8) = 0;
          *(int *)(pFVar3 + 0x10) = local_res18;
          *(undefined4 *)(pFVar3 + 0x14) = uVar4;
          *(undefined8 *)(pFVar3 + 0x18) = *(undefined8 *)FVar13;
          *(undefined4 *)(pFVar3 + 0x20) = 0x100;
          local_res18 = local_res18 + 1;
        }
        this_01 = this_01 + 0x18;
      }
      this_00 = local_90;
    }
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = local_b8.Object;
    UPackageMapClient::AddNetFieldExportGroup(this_00,&local_a8,&local_48);
  }
  pFVar9 = local_b8.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return pFVar9;
}

// Init @ 147a5cb50

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
UActorChannel::Init(UActorChannel *this,UNetConnection *param_1,int param_2,
                   EChannelCreateFlags param_3)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  AActor *this_00;
  FString local_18;
  
  UChannel::Init((UChannel *)this,param_1,param_2,param_3);
  this->RelevantTime = *(double *)(*(longlong *)(this->_padding_ + 0x58) + 800);
  lVar4 = *(longlong *)(this->_padding_ + 0x58);
  fVar2 = *(float *)(lVar4 + 0xe0);
  dVar3 = *(double *)(lVar4 + 800);
  this->bForceCompareProperties = 0;
  this->bActorIsPendingKill = 0;
  this->CustomTimeDilation = 1.0;
  this->LastUpdateTime = dVar3 - (double)fVar2;
  if (4 < (byte)LogNetLifecycle._0_1_) {
    this_00 = (this->Actor).field0_0x0.DebugPtr;
    if ((this_00 == (AActor *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetLifecycle);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// IsActorReadyForReplication @ 147a62c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::IsActorReadyForReplication(UActorChannel *this)

{
  AActor *pAVar1;
  
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  if (pAVar1 != (AActor *)0x0) {
    return ((pAVar1->field_0x5d & 0x18) - 8 & 0xf7) == 0;
  }
  return false;
}

// KeyNeedsToReplicate @ 147a63650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::KeyNeedsToReplicate(UActorChannel *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  int local_res10 [6];
  
  if ((this->_padding_ & 0x80) == 0) {
    local_res10[0] = param_1;
    piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindOrAddImpl<int_const_&>
                       ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&this->SubobjectRepKeyMap,param_1,local_res10);
    if (*piVar6 == param_2) {
      return false;
    }
    pTVar7 = &this->PendingObjKeys;
    *piVar6 = param_2;
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar1 + (longlong)(this->PendingObjKeys).ArrayMax * 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (this->PendingObjKeys).ArrayNum;
    piVar6 = &(this->PendingObjKeys).ArrayMax;
    if (iVar5 == *piVar6) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar7->AllocatorInstance,piVar6);
    }
    (this->PendingObjKeys).ArrayNum = iVar5 + 1;
    *(int *)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res10[0];
  }
  return true;
}

// MoveMappedObjectToUnmapped @ 147a65f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::MoveMappedObjectToUnmapped(UActorChannel *this,UObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  FObjectReplicator *this_00;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  char cVar10;
  FNetGUIDCache *pFVar11;
  TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *pTVar12;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTVar13;
  UObject *this_01;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStackX_10 [8];
  int iStackX_18;
  FObjectReplicator *pFStackX_20;
  FWeakObjectPtr FStack_e8;
  FNetworkGUID_u_0 FStack_e0;
  FString FStack_d8;
  UObject *pUStack_c8;
  FObjectReplicator *pFStack_c0;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTStack_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTStack_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 uStack_3c;
  
  pTVar7 = CVarRelinkMappedReferences.Ref;
  if ((this->_padding_ == 0) ||
     (plVar5 = *(longlong **)(this->_padding_ + 0x58), plVar5 == (longlong *)0x0)) {
    return;
  }
  if (param_1 != (UObject *)0x0) {
    bVar9 = IsInParallelGameThread();
    if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pTVar7->ShadowedValue[0] != 0) &&
       (cVar10 = (**(code **)(*plVar5 + 0x3f8))(plVar5), cVar10 == '\0')) {
      pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->
                          ((TSharedPtr<FNetGUIDCache,1> *)(plVar5 + 0x39));
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      iVar16 = 0;
      FStack_e8.ObjectIndex = 0;
      FStack_e8.ObjectSerialNumber = 0;
      pUStack_c8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&FStack_e8,(FObjectPtr)&pUStack_c8);
      pTVar12 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)&pFVar11->NetGUIDLookup,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)FStack_e8);
      if (((pTVar12 != (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *)0x0) &&
          (FStack_e0 = (FNetworkGUID_u_0)*(FNetworkGUID_u_0 *)&pTVar12->field_0x8,
          FStack_e0.ObjectId != 0)) &&
         (pTVar13 = TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
                    ::Find((TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
                            *)(plVar5 + 0xc6),(FNetworkGUID *)&FStack_e0),
         pTVar13 !=
         (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *)
         0x0)) {
        iVar3 = *(int *)&(pTVar13->Elements).field_0x28;
        uStack_ac = 1;
        puVar1 = &(pTVar13->Elements).field_0x10;
        iStack_98 = 0;
        iStack_9c = iVar16;
        if (iVar3 != 0) {
          puVar21 = *(uint **)&(pTVar13->Elements).field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)puVar1;
          }
          uVar19 = *puVar21;
          iStack_98 = 0;
          iVar16 = 0;
          while (uVar19 == 0) {
            lVar14 = (longlong)iVar16;
            iStack_98 = iStack_98 + 0x20;
            iVar16 = iVar16 + 1;
            iStack_9c = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14804420d;
            uVar19 = puVar21[lVar14 + 1];
          }
          uStack_ac = -uVar19 & uVar19;
          uVar2 = (ulonglong)uStack_ac * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iStackX_18 = (int)lVar14;
          iStack_9c = iStack_98 + -1 + iStackX_18;
          if (iVar3 < iStack_9c) {
            iStack_9c = iVar3;
          }
        }
LAB_14804420d:
        uVar19 = *(uint *)&(pTVar13->Elements).field_0x28;
        uStack_94 = uStack_3c;
        uVar18 = uVar19 & 0xffffffe0;
        iStack_90 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34
        ;
        uStack_a0 = 0xffffffff;
        TStack_80._padding_ = CONCAT44(uStack_ac,iVar16);
        TStack_80.CurrentBitIndex = iStack_9c;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar19 >> 5;
        TStack_80._28_4_ = uStack_3c;
        TStack_80.BaseBitIndex = iStack_98;
        uStack_60 = CONCAT44(uStack_8c,iStack_90);
        pTStack_b8 = pTVar13;
        iStack_b0 = iVar16;
        puStack_a8 = puVar1;
        pTStack_88 = pTVar13;
        TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(uint *)&(pTVar13->Elements).field_0x28;
        if (uVar19 != uVar4) {
          puVar20 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = puVar1;
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
          while (uVar19 == 0) {
            lVar14 = (longlong)iVar17;
            uVar18 = uVar18 + 0x20;
            iVar17 = iVar17 + 1;
            uVar19 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_148044310;
            uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar19 = (int)lVar14 + -1 + uVar18;
          if ((int)uVar4 < (int)uVar19) {
            uVar19 = uVar4;
          }
        }
LAB_148044310:
        while( true ) {
          pTVar8 = pTStack_88;
          if (*(int *)&(pTStack_88->Elements).field_0x8 - *(int *)&(pTStack_88->Elements).field_0x34
              != (int)uStack_60) {
            `TSparseArray<TSparseSetElement<FObjectReplicator_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
          }
          if (((TStack_80.CurrentBitIndex == uVar19) &&
              (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar8 == pTVar13)) break;
          this_00 = *(FObjectReplicator **)
                     (*(longlong *)&pTVar8->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
          pFStack_c0 = this_00;
          bVar9 = FObjectReplicator::MoveMappedObjectToUnmapped(this_00,(FNetworkGUID *)&FStack_e0);
          if (bVar9) {
            TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
            Emplace<FObjectReplicator_*_const_&>
                      ((TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                        *)(plVar5 + 0xd1),&pFStackX_20,(bool *)&pFStack_c0);
          }
          else {
            uVar18 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4))
                     * -0x7a143595;
            uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            if ((int)plVar5[0xd2] != *(int *)((longlong)plVar5 + 0x6bc)) {
              plVar15 = plVar5 + 0xd8;
              if ((longlong *)plVar5[0xd9] != (longlong *)0x0) {
                plVar15 = (longlong *)plVar5[0xd9];
              }
              iVar16 = *(int *)((longlong)plVar15 +
                               (ulonglong)((int)plVar5[0xda] - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
              if (iVar16 != -1) {
                lVar14 = *(longlong *)
                          &((TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                             *)(plVar5 + 0xd1))->Elements;
                do {
                  if (*(FObjectReplicator **)(lVar14 + (longlong)iVar16 * 0x10) == this_00)
                  goto LAB_14804446a;
                  iVar16 = *(int *)(lVar14 + 8 + (longlong)iVar16 * 0x10);
                } while (iVar16 != -1);
              }
            }
            if (2 < (byte)LogNet._0_1_) {
              this_01 = this_00->ObjectPtr;
              if ((this_01 == (UObject *)0x0) &&
                 (this_01 = FWeakObjectPtr::Get(&(this_00->WeakObjectPtr).WeakPtr),
                 this_01 == (UObject *)0x0)) {
                ::FString::FString(&FStack_d8,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_01,&FStack_d8,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
              }
            }
          }
LAB_14804446a:
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        }
      }
    }
  }
  return;
}

// NotifyActorChannelOpen @ 147a66520

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
UActorChannel::NotifyActorChannelOpen(UActorChannel *this,AActor *param_1,FInBunch *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  AActor *pAVar4;
  UObject *pUVar5;
  char cVar6;
  FWorldContext *pFVar7;
  UWorld *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  undefined1 local_res8 [8];
  
  if ((this->_padding_ == 0) ||
     (pUVar11 = *(UObject **)(this->_padding_ + 0x58), pUVar11 == (UObject *)0x0)) {
    pUVar11 = (UObject *)0x0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pUVar8 = *(UWorld **)(pUVar11 + 0xb);
    if (pUVar8 != (UWorld *)0x0) goto LAB_147a6656b;
  }
  pUVar8 = (UWorld *)0x0;
LAB_147a6656b:
  pFVar7 = UEngine::GetWorldContextFromWorld(GEngine,pUVar8);
  if (pFVar7 != (FWorldContext *)0x0) {
    iVar2 = (pFVar7->ActiveNetDrivers).ArrayNum;
    pFVar9 = (pFVar7->ActiveNetDrivers).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((pFVar7->ActiveNetDrivers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar10) break;
      plVar3 = *(longlong **)pFVar9;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x4a0))(plVar3,this,param_1);
      }
      pFVar9 = pFVar9 + 0x10;
    }
  }
  pAVar4 = (this->Actor).field0_0x0.DebugPtr;
  (**(code **)(pAVar4->_padding_ + 0x488))(pAVar4,param_2,this->_padding_);
  if (((pUVar11 != (UObject *)0x0) &&
      (cVar6 = (**(code **)(*(longlong *)pUVar11 + 0x3f8))(pUVar11), cVar6 == '\0')) &&
     (param_2->bClose == '\0')) {
    pAVar4 = (this->Actor).field0_0x0.DebugPtr;
    bVar1 = (pAVar4->NetDormancy).Value;
    if ((1 < bVar1) && ((pAVar4->NetDormancy).Value = '\x01', pFVar7 != (FWorldContext *)0x0)) {
      iVar2 = (pFVar7->ActiveNetDrivers).ArrayNum;
      pFVar9 = (pFVar7->ActiveNetDrivers).AllocatorInstance.Data;
      pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((pFVar7->ActiveNetDrivers).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar9 == pFVar10) break;
        pUVar5 = *(UObject **)pFVar9;
        if (((pUVar5 != (UObject *)0x0) && (pUVar5 != pUVar11)) &&
           (cVar6 = (**(code **)(*(longlong *)pUVar5 + 0x488))(pUVar5,param_1), cVar6 != '\0')) {
          (**(code **)(**(longlong **)pFVar9 + 0x3a8))(*(longlong **)pFVar9,param_1,bVar1);
        }
        pFVar9 = pFVar9 + 0x10;
      }
    }
  }
  return;
}

// ObjectHasReplicator @ 147a666c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::ObjectHasReplicator
          (UActorChannel *this,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  TSharedRef<FObjectReplicator,1> *pTVar3;
  FWeakObjectPtr local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  pTVar3 = TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                   *)&this->ReplicationMap,pUVar2);
  if (pTVar3 != (TSharedRef<FObjectReplicator,1> *)0x0) {
    local_res8 = (pTVar3->Object->WeakObjectPtr).WeakPtr;
    bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      (param_1,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// PrepareForRemoteFunction @ 147a675e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::PrepareForRemoteFunction(UActorChannel *this,UObject *param_1)

{
  longlong *plVar1;
  char cVar2;
  TSharedRef<FObjectReplicator,1> *pTVar3;
  
  if ((this->_padding_ != 0) &&
     (plVar1 = *(longlong **)(this->_padding_ + 0x58), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x3f8))();
    if (cVar2 != '\0') {
      pTVar3 = FindReplicator(this,param_1,(bool *)0x0);
      if (pTVar3 == (TSharedRef<FObjectReplicator,1> *)0x0) {
        CreateReplicator(this,param_1,true);
      }
    }
  }
  return;
}

// ProcessBunch @ 147a68700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::ProcessBunch(UActorChannel *this,FInBunch *param_1)

{
  int *piVar1;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  AActor *pAVar4;
  FNetTraceCollector *pFVar5;
  ulong64 uVar6;
  UNetConnection *pUVar7;
  longlong lVar8;
  FObjectReplicator *this_00;
  FNetworkObjectList *this_01;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  LARGE_INTEGER LVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  EConnectionState EVar20;
  int iVar21;
  FNetGUIDCache *this_02;
  longlong lVar22;
  UClass *pUVar23;
  UObject *pUVar24;
  FNetworkGUID FVar25;
  TSharedRef<FObjectReplicator,1> *pTVar26;
  FNetResult *pFVar27;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_Stat_PostNetInit> FVar30;
  TEventRef<unsigned_int> TVar31;
  UPackage *pUVar32;
  FWriteBuffer *pFVar33;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  ForElementType<FNetTracePacketContentEvent> FVar34;
  ForElementType<FNetTracePacketContentEvent> FVar35;
  ForAnyElementType FVar36;
  FObjectKey FVar37;
  byte bVar38;
  ESetChannelActorFlags EVar39;
  longlong lVar41;
  FName FVar42;
  FNameEntryId FVar43;
  longlong *plVar44;
  FNetTraceCollector *pFVar45;
  FNameEntryId FVar46;
  bool bVar47;
  float fVar48;
  undefined1 auStackY_548 [32];
  bool bStack_4d8;
  bool bStack_4d7;
  char cStack_4d6;
  FReplicationFlags_u_0 FStack_4d4;
  longlong *plStack_4d0;
  AActor *pAStack_4c8;
  LARGE_INTEGER LStack_4c0;
  FInBunch *pFStack_4b8;
  FColor_u_0 aFStack_4b0 [2];
  FName FStack_4a8;
  FLLMScope FStack_4a0;
  FLLMScope FStack_49c;
  undefined8 uStack_498;
  FWeakObjectPtr FStack_490;
  undefined4 uStack_488;
  FName FStack_480;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  FString FStack_450;
  FString FStack_440;
  FString FStack_430;
  longlong *plStack_418;
  undefined1 auStack_410 [16];
  uint uStack_400;
  int iStack_3fc;
  longlong lStack_3f8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_3f0;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_3e8;
  undefined2 uStack_3e0;
  FObjectReplicator *pFStack_3d8;
  AActor *pAStack_3d0;
  longlong lStack_3c8;
  undefined8 uStack_3c0;
  longlong lStack_3b8;
  FMemScope FStack_3b0;
  LARGE_INTEGER LStack_3a8;
  FMemScope FStack_3a0;
  FObjectReplicator *pFStack_398;
  LARGE_INTEGER LStack_390;
  LARGE_INTEGER LStack_388;
  FName FStack_380;
  FString FStack_378;
  FString FStack_368;
  FStatMessage FStack_358;
  FName FStack_348;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> TStack_340;
  FName FStack_330;
  FName FStack_328;
  undefined1 auStack_320 [16];
  FString FStack_310;
  FString FStack_300;
  FString FStack_2f0;
  FString FStack_2e0;
  FString FStack_2d0;
  FString FStack_2c0;
  FString FStack_2b0;
  FString FStack_2a0;
  FString FStack_290;
  FString FStack_280;
  FName FStack_270;
  FNetResult FStack_268;
  undefined1 auStack_238 [40];
  longlong lStack_210;
  undefined1 auStack_208 [32];
  longlong lStack_1e8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_1e0;
  FNetResult FStack_1d8;
  FNetBitReader FStack_1a8;
  undefined4 *puStack_e8;
  longlong lStack_e0;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FStack_d8;
  int iStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  FNetTraceCollector *pFVar40;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pFVar40 = (FNetTraceCollector *)0x0;
  EVar39 = None;
  aFStack_4b0[0].Bits = 0;
  if ((this->_padding_ & 0x20) != 0) {
    return;
  }
  pFStack_4b8 = param_1;
  QueryPerformanceCounter(&LStack_388);
  pAVar4 = (this->Actor).field0_0x0.DebugPtr;
  LStack_4c0 = LStack_388;
  FStack_4d4.Value = 0;
  cStack_4d6 = '\0';
  if (pAVar4 != (AActor *)0x0) {
    if (4 < (byte)LogNetTraffic._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar4,&FStack_2e0,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (FStack_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2e0.Data.AllocatorInstance.Data);
      }
    }
LAB_147a68d5f:
    bVar38 = param_1->bIsReplicationPaused;
    bVar17 = (**(code **)(this->_padding_ + 0x358))(this);
    if (bVar38 != bVar17) {
      pAVar4 = (this->Actor).field0_0x0.DebugPtr;
      (**(code **)(pAVar4->_padding_ + 0x2f0))(pAVar4,bVar38);
      (**(code **)(this->_padding_ + 0x350))(this,bVar38);
    }
    lVar22 = (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x570))();
    if (this->_padding_ == 0) {
      bVar47 = lVar22 == 0;
    }
    else {
      bVar47 = this->_padding_ == lVar22;
    }
    if (bVar47) {
LAB_147a68dff:
      FStack_4d4.Value = FStack_4d4.Value | 1;
    }
    else if (lVar22 != 0) {
      pUVar23 = Z_Construct_UClass_UChildConnection_NoRegister();
      iVar21 = (int)pUVar23->_padding_;
      if (((iVar21 <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar21 * 8) ==
           &pUVar23->_padding_)) && (*(longlong *)(lVar22 + 0x1f80) == this->_padding_))
      goto LAB_147a68dff;
    }
    FStack_4d4.Value =
         ((byte)param_1->field_0xe9 & 4) << 3 | *(uint *)&this->field_0x90 & 0x40 |
         FStack_4d4.Value & 0xffffff9f;
    cVar16 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
    if (cVar16 == '\0') {
      plVar44 = &param_1->_padding_;
      do {
        plStack_4d0 = plVar44;
        if (((UNetConnection *)this->_padding_ == (UNetConnection *)0x0) ||
           (EVar20 = UNetConnection::GetConnectionState((UNetConnection *)this->_padding_),
           EVar20 == USOCK_Closed)) break;
        FNetBitReader::FNetBitReader(&FStack_1a8,(UPackageMap *)param_1->_padding_,(uchar *)0x0,0);
        uVar18 = 0xffffffff;
        bStack_4d8 = false;
        pFVar45 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar45 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
        }
        if (pFVar45 != (FNetTraceCollector *)0x0) {
          uVar18 = FNetTrace::BeginPacketContentEvent(pFVar45,Object,(uint)*plVar44);
          FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
          FVar35 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
          if (FVar34 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar35 = FVar34;
          }
          *(undefined8 *)((longlong)FVar35 + (ulonglong)uVar18 * 0x10) = 0;
        }
        pUVar24 = ReadContentBlockPayload(this,param_1,&FStack_1a8,&bStack_4d8);
        pFVar5 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
        if (pFVar5 != (FNetTraceCollector *)0x0) {
          FNetTrace::PushStreamOffset(pFVar5,(uint)*plVar44 - (int)FStack_1a8._padding_);
        }
        uVar19 = (uint)pFVar40;
        if ((pFStack_4b8->_padding_ & 0x200) != 0) {
          if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
            if (1 < (byte)LogNet._0_1_) {
              if (pUVar24 != (UObject *)0x0) {
                pFVar40 = (FNetTraceCollector *)&DAT_00000002;
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar24,&FStack_280,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if ((((ulonglong)pFVar40 & 2) != 0) &&
                 (FStack_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
              }
            }
            pUVar7 = (UNetConnection *)this->_padding_;
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (auStack_238,ContentBlockFail);
            pFVar27 = UE::Net::AddToAndConsumeChainResultPtr
                                (&FStack_1d8,
                                 (TPimplPtr<UE::Net::FNetResult,1> *)&pFStack_4b8->_padding_,
                                 (TNetResult<ENetCloseResult> *)auStack_238);
            UNetConnection::Close(pUVar7,pFVar27);
            if (FStack_1d8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
              (**(code **)((longlong)FStack_1d8.NextResult + -0x10))
                        ((longlong)FStack_1d8.NextResult + -0x10);
            }
            if (FStack_1d8.ErrorContext.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_1d8.ErrorContext.Data.AllocatorInstance.Data);
            }
            if (lStack_210 != 0) {
              (**(code **)(lStack_210 + -0x10))(lStack_210 + -0x10);
            }
LAB_147a6969c:
            if ((FScriptContainerElement *)auStack_238._24_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)auStack_238._24_8_);
            }
            if (pFVar5 != (FNetTraceCollector *)0x0) {
              FNetTrace::PopStreamOffset(pFVar5);
            }
            if (uVar18 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent(pFVar45,uVar18,(uint)*plStack_4d0);
            }
            FNetBitReader::~FNetBitReader(&FStack_1a8);
            goto LAB_147a69e2e;
          }
          if (2 < (byte)LogNet._0_1_) {
            if (pUVar24 != (UObject *)0x0) {
              pFVar40 = (FNetTraceCollector *)&DAT_00000001;
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar24,&FStack_290,(UObject *)0x0,None);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            plVar44 = plStack_4d0;
            if ((((ulonglong)pFVar40 & 1) != 0) &&
               (FStack_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(FStack_290.Data.AllocatorInstance.Data);
              plVar44 = plStack_4d0;
            }
          }
          *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
          if (pFVar5 != (FNetTraceCollector *)0x0) {
            FNetTrace::PopStreamOffset(pFVar5);
          }
          if (uVar18 != 0xffffffff) {
            uVar19 = (uint)*plVar44;
LAB_147a693d0:
            FNetTrace::EndPacketContentEvent(pFVar45,uVar18,uVar19);
          }
LAB_147a693da:
          FNetBitReader::~FNetBitReader(&FStack_1a8);
          break;
        }
        if (FStack_1a8._padding_ == 0) {
          if (uVar18 != 0xffffffff) {
            lVar22 = *(longlong *)(this->_padding_ + 0x58);
            if ((*(longlong *)(lVar22 + 0x1c8) == 0) &&
               (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar47)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar25 = FNetGUIDCache::GetNetGUID
                               (*(FNetGUIDCache **)(lVar22 + 0x1c8),(UObject *)auStack_320);
            uVar6 = *(ulong64 *)FVar25.field0_0x0;
            FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
            FVar35 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
            if (FVar34 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar35 = FVar34;
            }
            *(ulong64 *)((longlong)FVar35 + (ulonglong)uVar18 * 0x10) = uVar6;
            FNetTraceCollector::AddReferencedObjectId(pFVar45,uVar6);
            plVar44 = plStack_4d0;
          }
          if (pFVar5 != (FNetTraceCollector *)0x0) {
            FNetTrace::PopStreamOffset(pFVar5);
          }
          if (uVar18 != 0xffffffff) {
            uVar19 = (uint)*plVar44;
LAB_147a692bc:
            FNetTrace::EndPacketContentEvent(pFVar45,uVar18,uVar19);
          }
        }
        else {
          if ((pUVar24 == (UObject *)0x0) || ((*(uint *)&pUVar24->field_0x8 >> 0x1e & 1) != 0)) {
            pAVar4 = (this->Actor).field0_0x0.DebugPtr;
            if ((pAVar4 == (AActor *)0x0) || (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) {
              if (2 < (byte)LogNet._0_1_) {
                if (pUVar24 != (UObject *)0x0) {
                  pFVar40 = (FNetTraceCollector *)(ulonglong)(uVar19 | 4);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar24,&FStack_2b0,(UObject *)0x0,None);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (((ulonglong)pFVar40 & 4) != 0) {
                  uVar19 = (uint)pFVar40 & 0xfffffffb;
                  FVar36.Data = FStack_2b0.Data.AllocatorInstance.Data;
                  goto LAB_147a69293;
                }
              }
              goto LAB_147a6929d;
            }
            if (2 < (byte)LogNet._0_1_) {
              if (pUVar24 != (UObject *)0x0) {
                pFVar40 = (FNetTraceCollector *)(ulonglong)(uVar19 | 8);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar24,&FStack_2c0,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if ((((ulonglong)pFVar40 & 8) != 0) &&
                 (pFVar40 = (FNetTraceCollector *)(ulonglong)((uint)pFVar40 & 0xfffffff7),
                 FStack_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(FStack_2c0.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pTVar26 = FindReplicator(this,pUVar24,(bool *)0x0);
            if (pTVar26 == (TSharedRef<FObjectReplicator,1> *)0x0) {
              pTVar26 = CreateReplicator(this,pUVar24,true);
            }
            bStack_4d7 = false;
            bVar47 = FObjectReplicator::ReceivedBunch
                               (pTVar26->Object,&FStack_1a8,(FReplicationFlags *)&FStack_4d4._s_0,
                                bStack_4d8,&bStack_4d7);
            if (bVar47) {
              pAVar4 = (this->Actor).field0_0x0.DebugPtr;
              if ((pAVar4 == (AActor *)0x0) || (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) {
                if (6 < (byte)LogNet._0_1_) {
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                }
                *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
                if (pFVar5 != (FNetTraceCollector *)0x0) {
                  FNetTrace::PopStreamOffset(pFVar5);
                }
                if (uVar18 != 0xffffffff) {
                  uVar19 = (uint)*plStack_4d0;
                  goto LAB_147a693d0;
                }
                goto LAB_147a693da;
              }
              if (uVar18 != 0xffffffff) {
                uVar6 = (pTVar26->Object->ObjectNetGUID).field0_0x0.ObjectId;
                FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
                FVar35 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
                if (FVar34 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                  FVar35 = FVar34;
                }
                *(ulong64 *)((longlong)FVar35 + (ulonglong)uVar18 * 0x10) = uVar6;
                FNetTraceCollector::AddReferencedObjectId(pFVar45,uVar6);
              }
              if (bStack_4d7 != false) {
                FLLMScope::FLLMScope
                          (&FStack_4a0,LLMTagDeclaration_NetDriver.UniqueName,false,None,Default,
                           true);
                FStack_348 = LLMTagDeclaration_NetDriver.UniqueName;
                FMemScope::FMemScope(&FStack_3a0,&FStack_348,true);
                pFStack_3d8 = pTVar26->Object;
                TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                ::Emplace<FObjectReplicator_*>
                          ((TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                            *)(*(longlong *)(this->_padding_ + 0x58) + 0x688),&pFStack_398,
                           (bool *)&pFStack_3d8);
                FMemScope::~FMemScope(&FStack_3a0);
                FLLMScope::~FLLMScope(&FStack_4a0);
              }
            }
            else {
              if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
                if (1 < (byte)LogNet._0_1_) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar24,&FStack_2a0,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                  if (FStack_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_2a0.Data.AllocatorInstance.Data);
                  }
                }
                pUVar7 = (UNetConnection *)this->_padding_;
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (&FStack_268,ObjectReplicatorReceivedBunchFail);
                UNetConnection::Close(pUVar7,&FStack_268);
                auStack_238._24_8_ = FStack_268.ErrorContext.Data.AllocatorInstance.Data;
                if (FStack_268.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                  (**(code **)((longlong)FStack_268.NextResult + -0x10))
                            ((longlong)FStack_268.NextResult + -0x10);
                  auStack_238._24_8_ = FStack_268.ErrorContext.Data.AllocatorInstance.Data;
                }
                goto LAB_147a6969c;
              }
              if (2 < (byte)LogNet._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar24,&FStack_2d0,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                FVar36.Data = FStack_2d0.Data.AllocatorInstance.Data;
LAB_147a69293:
                pFVar40 = (FNetTraceCollector *)(ulonglong)uVar19;
                if (FVar36.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar36.Data);
                }
              }
LAB_147a6929d:
              *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
            }
          }
          if (pFVar5 != (FNetTraceCollector *)0x0) {
            FNetTrace::PopStreamOffset(pFVar5);
          }
          if (uVar18 != 0xffffffff) {
            uVar19 = (uint)*plStack_4d0;
            goto LAB_147a692bc;
          }
        }
        FNetBitReader::~FNetBitReader(&FStack_1a8);
        param_1 = pFStack_4b8;
        cVar16 = (**(code **)(pFStack_4b8->_padding_ + 0x38))(pFStack_4b8);
        plVar44 = plStack_4d0;
      } while (cVar16 == '\0');
    }
    iStack_4c = 0x10;
    pTVar2 = &this->ReplicationMap;
    FStack_d8.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
    FVar46.Value = 0;
    iStack_50 = 0;
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)auStack_208,
               (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)pTVar2);
    uStack_3e0 = 0;
    stack0xfffffffffffffbf8 = auStack_208._16_16_;
    plStack_418 = (longlong *)auStack_208._0_8_;
    auStack_410._0_8_ = auStack_208._8_8_;
    lStack_3f8 = lStack_1e8;
    pTStack_3f0 = pTStack_1e0;
    iVar21 = auStack_208._28_4_;
    pTStack_3e8 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                   *)pTVar2;
    if (iVar21 < *(int *)(auStack_208._16_8_ + 0x18)) {
      do {
        lVar41 = (longlong)iVar21 * 0x20;
        lVar22 = *plStack_418;
        lVar8 = *(longlong *)(lVar41 + 8 + lVar22);
        pUVar24 = *(UObject **)(lVar8 + 0x48);
        if (((pUVar24 == (UObject *)0x0) &&
            (pUVar24 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar8 + 0xd8)),
            pUVar24 == (UObject *)0x0)) || ((*(uint *)&pUVar24->field_0x8 >> 0x1e & 1) != 0)) {
          cVar16 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
          if (cVar16 == '\0') {
            uStack_498 = *(undefined8 *)(*(longlong *)(lVar41 + 8 + lVar22) + 0xd8);
            FVar28 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&FStack_d8;
            if (FStack_d8.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar28 = FStack_d8.SecondaryData;
            }
            if ((ulonglong)FVar28 <= &uStack_498) {
              FVar28 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&FStack_d8;
              if (FStack_d8.SecondaryData !=
                  (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar28 = FStack_d8.SecondaryData;
              }
              if ((&uStack_498 < (undefined8 *)((longlong)FVar28 + (longlong)iStack_4c * 8)) &&
                 (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar47)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            if (iStack_50 == iStack_4c) {
              iStack_50 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                    (0x408,&FStack_d8,&iStack_4c);
            }
            lVar22 = (longlong)iStack_50;
            FVar28 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&FStack_d8;
            if (FStack_d8.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar28 = FStack_d8.SecondaryData;
            }
            iStack_50 = iStack_50 + 1;
            *(undefined8 *)((longlong)FVar28 + lVar22 * 8) = uStack_498;
            TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_3f0,iVar21);
            uStack_3e0 = CONCAT11(uStack_3e0._1_1_,1);
          }
        }
        else {
          this_00 = *(FObjectReplicator **)(lVar41 + 8 + lVar22);
          if ((this_00->ObjectPtr == (UObject *)0x0) &&
             (pUVar24 = FWeakObjectPtr::Get(&(this_00->WeakObjectPtr).WeakPtr),
             pUVar24 == (UObject *)0x0)) {
            if (5 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
          }
          else {
            if ((*(longlong *)(*(longlong *)(this_00->OwningChannel->_padding_ + 0x58) + 0x100) != 0
                ) && (this_00->bHasReplicatedProperties != 0)) {
              pUVar24 = this_00->ObjectPtr;
              if ((pUVar24 != (UObject *)0x0) ||
                 (pUVar24 = FWeakObjectPtr::Get(&(this_00->WeakObjectPtr).WeakPtr),
                 pUVar24 != (UObject *)0x0)) {
                (**(code **)(*(longlong *)pUVar24 + 0x228))();
              }
              this_00->bHasReplicatedProperties = 0;
            }
            FObjectReplicator::CallRepNotifies(this_00,true);
          }
        }
        uStack_400 = uStack_400 & ~auStack_410._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_410);
        iVar21 = iStack_3fc;
      } while (iStack_3fc < *(int *)(auStack_410._8_8_ + 0x18));
      if (((char)uStack_3e0 != '\0') && (uStack_3e0._1_1_ != '\0')) {
        uVar18 = *(int *)&(pTStack_3e8->Elements).field_0x8 -
                 *(int *)&(pTStack_3e8->Elements).field_0x34;
        if (uVar18 < 4) {
          iVar21 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uStack_488 = (undefined4)lVar22;
          iVar21 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar18) && (pTStack_3e8->HashSize < iVar21)) ||
           (iVar21 < pTStack_3e8->HashSize)) {
          pTStack_3e8->HashSize = iVar21;
          TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
          ::Rehash(pTStack_3e8);
        }
      }
    }
    if (0 < iStack_50) {
      lVar22 = *(longlong *)(this->_padding_ + 0x58);
      if ((*(longlong *)(lVar22 + 0x9c8) == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar47)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar21 = iStack_50;
      this_01 = *(FNetworkObjectList **)(lVar22 + 0x9c8);
      TStack_340.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&FStack_d8;
      if (FStack_d8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        TStack_340.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)FStack_d8.SecondaryData;
      }
      if ((iStack_50 < 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar47)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TStack_340.ArrayNum = iVar21;
      pAVar4 = (this->Actor).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar4 == (AActor *)0x0)) {
        uStack_470 = 0;
        if (pAVar4 != (AActor *)0x0) goto LAB_147a699a1;
        FVar37.ObjectIndex = 0;
        FVar37.ObjectSerialNumber = 0;
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pAVar4);
LAB_147a699a1:
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        FStack_490.ObjectIndex = 0;
        FStack_490.ObjectSerialNumber = 0;
        pAStack_3d0 = pAVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        FWeakObjectPtr::operator=(&FStack_490,(FObjectPtr)&pAStack_3d0);
        FVar37 = (FObjectKey)FStack_490;
      }
      FNetworkObjectList::RemoveMultipleSubObjectChannelReference
                (this_01,FVar37,&TStack_340,(UObject *)this);
    }
    FStack_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)FStack_d8.SecondaryData;
    if (((this->Actor).field0_0x0.DebugPtr != (AActor *)0x0) && (cStack_4d6 != '\0')) {
      FVar30 = StatPtr_Stat_PostNetInit;
      if (StatPtr_Stat_PostNetInit == (FThreadSafeStaticStat<FStat_Stat_PostNetInit>)0x0) {
        pFVar29 = ::FName::FName((FName *)(auStack_320 + 8),"Stat_PostNetInit");
        FVar30 = (FThreadSafeStaticStat<FStat_Stat_PostNetInit>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PostNetInit,*pFVar29,
                            L"ActorChan_PostNetInit","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                            true,ST_int64,true,false,MCR_Invalid);
      }
      FVar42 = *(FName *)FVar30;
      bVar47 = false;
      bVar14 = false;
      FStack_480.ComparisonIndex.Value = 0;
      FStack_480.Number = 0;
      FVar43 = FVar42.ComparisonIndex.Value;
      uVar18 = FVar42.Number;
      if ((FVar43.Value == 0) && (uVar18 == 0)) {
LAB_147a69b16:
        bVar13 = false;
        FVar42 = FStack_480;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          aFStack_4b0[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&aFStack_4b0[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
          bVar47 = false;
          bVar14 = true;
          if (-1 < CpuChannel->Enabled) {
            FStack_4a8.ComparisonIndex.Value = FVar43.Value;
            FStack_4a8.Number = uVar18;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&FStack_4a8,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0xdaa);
            bVar47 = true;
            bVar14 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147a69b16;
        FStack_4a8.ComparisonIndex.Value = FVar43.Value;
        FStack_4a8.Number = uVar18;
        FStack_480 = FVar42;
        FThreadStats::AddMessage(FVar42,CycleScopeStart);
        bVar13 = true;
        FVar46.Value = FStack_480.ComparisonIndex.Value;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&LLMScope_Name3499,L"UObject/NetworkPostInit");
        _Init_thread_footer(&::_TSS0);
      }
      FLLMScope::FLLMScope(&FStack_49c,LLMScope_Name3499,false,None,Default,true);
      FMemScope::FMemScope(&FStack_3b0,&LLMScope_Name3499,true);
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        uStack_468 = 0;
        TVar31 = (TEventRef<unsigned_int>)&uStack_468;
      }
      else {
        lStack_3c8 = ((this->Actor).field0_0x0.DebugPtr)->_padding_;
        TVar31 = FStringTrace::GetNameRef(&FStack_270);
      }
      uVar9 = *(undefined8 *)TVar31;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        TVar31 = (TEventRef<unsigned_int>)&uStack_460;
        uStack_460 = 0;
      }
      else {
        uStack_3c0 = *(undefined8 *)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x18);
        TVar31 = FStringTrace::GetNameRef(&FStack_330);
      }
      uVar10 = *(undefined8 *)TVar31;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        uStack_458 = 0;
        TVar31 = (TEventRef<unsigned_int>)&uStack_458;
      }
      else {
        pUVar32 = UObjectBaseUtility::GetPackage
                            ((UObjectBaseUtility *)(this->Actor).field0_0x0.DebugPtr);
        lStack_3b8 = pUVar32->_padding_;
        TVar31 = FStringTrace::GetNameRef(&FStack_328);
      }
      uVar11 = *(undefined8 *)TVar31;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x4d8))();
      }
      else {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                  ((TLogScope<0> *)&puStack_e8);
        *puStack_e8 = (int)uVar9;
        puStack_e8[1] = (int)uVar10;
        puStack_e8[2] = (int)uVar11;
        *(undefined8 *)(lStack_e0 + 0x28) = *(undefined8 *)(lStack_e0 + 0x20);
        (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x4d8))();
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar22 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar33 = *(FWriteBuffer **)(lVar22 + 0x20);
        if ((int)pFVar33 - *(int *)&pFVar33->Cursor < 1) {
          pFVar33 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar33->Cursor = '\n';
        pFVar33->Cursor = pFVar33->Cursor + 1;
        pFVar33->Committed = pFVar33->Cursor;
      }
      FMemScope::~FMemScope(&FStack_3b0);
      FLLMScope::~FLLMScope(&FStack_49c);
      if (bVar14) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar47) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FStack_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)FStack_d8.SecondaryData;
      if ((((bVar13) && (FVar42 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_03 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_03 == (FThreadStats *)0x0) {
          this_04 = FThreadStatsPool::Get();
          this_03 = FThreadStatsPool::GetFromPool(this_04);
        }
        FStack_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)FStack_d8.SecondaryData;
        if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
          FStack_358.NameAndInfo.Number = FVar42.Number & 0xffff6fff | 0x6000;
          FStack_358.NameAndInfo.Index.Value = FVar46.Value;
          QueryPerformanceCounter(&LStack_3a8);
          FStack_358.StatData.Pad[4] = '\0';
          FStack_358.StatData.Pad[5] = '\0';
          FStack_358.StatData.Pad[6] = '\0';
          FStack_358.StatData.Pad[7] = '\0';
          FStack_358.StatData.Pad[0] = LStack_3a8.s.LowPart._0_1_;
          FStack_358.StatData.Pad[1] = LStack_3a8.s.LowPart._1_1_;
          FStack_358.StatData.Pad[2] = LStack_3a8.s.LowPart._2_1_;
          FStack_358.StatData.Pad[3] = LStack_3a8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_03,&FStack_358);
          piVar1 = &this_03->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_03,false,false);
            FStack_378.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)FStack_d8.SecondaryData;
          }
          else {
            FStack_378.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)FStack_d8.SecondaryData;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_03,false,false);
              FStack_378.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)FStack_d8.SecondaryData;
            }
          }
        }
      }
    }
LAB_147a69e20:
    if ((ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
        FStack_378.Data.AllocatorInstance.Data !=
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FMemory::Free(FStack_378.Data.AllocatorInstance.Data);
    }
    goto LAB_147a69e2e;
  }
  if (param_1->bOpen == 0) {
    if ((byte)LogNetTraffic._0_1_ < 2) goto LAB_147a69e2e;
    ::FString::PrintfImpl(&FStack_378,L"%llu");
    ::FName::ToString((FName *)&this->_padding_,&FStack_310);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (FStack_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_310.Data.AllocatorInstance.Data);
    }
    goto LAB_147a69e20;
  }
  uVar18 = 0xffffffff;
  pFVar45 = pFVar40;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar45 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
  }
  if (pFVar45 != (FNetTraceCollector *)0x0) {
    uVar18 = FNetTrace::BeginPacketContentEvent(pFVar45,NameId,(uint)param_1->_padding_);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NewActor = UE::Net::CreatePersistentNetDebugName(L"NewActor",8);
      _Init_thread_footer(&::_TSS0);
    }
    uVar19 = FNetTrace::TraceName(NewActor);
    FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
    if (FVar34 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar34 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
    }
    *(uint *)((longlong)FVar34 + (ulonglong)uVar18 * 0x10) = uVar19;
  }
  pAStack_4c8 = (AActor *)0x0;
  cStack_4d6 = (**(code **)(**(longlong **)(this->_padding_ + 0x68) + 0x2d0))();
  if ((pAStack_4c8 == (AActor *)0x0) || (((uint)pAStack_4c8->_padding_ >> 0x1e & 1) != 0)) {
    if (cStack_4d6 != '\0') {
      bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bSpawnedNewActor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xcdd,L"");
      if (bVar47) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
LAB_147a68c0f:
      if (2 < (byte)LogNet._0_1_) {
        this_02 = TSharedPtr<FNetGUIDCache,1>::operator->
                            ((TSharedPtr<FNetGUIDCache,1> *)
                             (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
        FNetGUIDCache::FullNetGUIDPath(this_02,&FStack_2f0,&this->ActorNetGUID);
        if ((pAStack_4c8 == (AActor *)0x0) || (pAStack_4c8->_padding_ == 0)) {
          ::FString::FString(&FStack_430,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pAStack_4c8,&FStack_430,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (FStack_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_430.Data.AllocatorInstance.Data);
        }
        param_1 = pFStack_4b8;
        if (FStack_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_2f0.Data.AllocatorInstance.Data);
          param_1 = pFStack_4b8;
        }
      }
      goto LAB_147a68ccf;
    }
    if ((param_1->bClose != '\x01' || param_1->bReliable != '\x01') ||
       (cVar16 = (**(code **)(param_1->_padding_ + 0x38))(param_1), cVar16 == '\0'))
    goto LAB_147a68c0f;
    if (((*(uint *)(this->_padding_ + 0xfc) >> 1 & 1) == 0) && (5 < (byte)LogNet._0_1_)) {
      if ((pAStack_4c8 == (AActor *)0x0) || (pAStack_4c8->_padding_ == 0)) {
        ::FString::FString(&FStack_440,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pAStack_4c8,&FStack_440,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (FStack_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_440.Data.AllocatorInstance.Data);
      }
    }
    SetChannelActor(this,(AActor *)0x0,None);
  }
  else {
    if (4 < (byte)LogNetLifecycle._0_1_) {
      FStack_380 = (FName)pAStack_4c8->_padding_;
      ::FName::ToString(&FStack_380,&FStack_368);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetLifecycle);
      if (FStack_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_368.Data.AllocatorInstance.Data);
      }
    }
    if ((UE::Net::bDiscardTornOffActorRPCs == false) || (pAStack_4c8->bTearOff == 0)) {
      if ((GSkipReplicatorForDestructionInfos != 0) && (param_1->bClose != '\0')) {
        cVar16 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
        EVar39 = (ESetChannelActorFlags)(cVar16 != '\0');
      }
      if (4 < (byte)LogNetTraffic._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pAStack_4c8,&FStack_300,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_______Channel_A_151835e78,
                   (FLogCategoryBase *)&LogNetTraffic);
        if (FStack_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_300.Data.AllocatorInstance.Data);
        }
      }
      SetChannelActor(this,pAStack_4c8,EVar39);
      (**(code **)(this->_padding_ + 0x360))(this,(this->Actor).field0_0x0.DebugPtr);
      FStack_4d4.Value = FStack_4d4.Value | 2;
      ((this->Actor).field0_0x0.DebugPtr)->CustomTimeDilation = this->CustomTimeDilation;
      if (uVar18 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar45,uVar18,(uint)param_1->_padding_);
      }
      goto LAB_147a68d5f;
    }
    if (2 < (byte)LogNet._0_1_) {
      if (pAStack_4c8->_padding_ == 0) {
        ::FString::FString(&FStack_450,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pAStack_4c8,&FStack_450,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (FStack_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_450.Data.AllocatorInstance.Data);
      }
    }
LAB_147a68ccf:
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
    if ((((UNetConnection *)this->_padding_)->bInternalAck == 0) &&
       (this->bBlockChannelFailure == 0)) {
      UE::Net::TNetControlMessageImpl<16,int>::Send
                ((UNetConnection *)this->_padding_,(int *)((longlong)&this->_padding_ + 4));
    }
  }
  if (uVar18 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar45,uVar18,(uint)param_1->_padding_);
  }
LAB_147a69e2e:
  LVar15 = LStack_4c0;
  fVar48 = UNetDriver::GetIncomingBunchFrameProcessingTimeLimit
                     (*(UNetDriver **)(this->_padding_ + 0x58));
  if (0.0 < fVar48) {
    QueryPerformanceCounter(&LStack_390);
    lVar22 = *(longlong *)(this->_padding_ + 0x58);
    *(float *)(lVar22 + 0xa40) =
         (float)((double)(ulonglong)(LStack_390.QuadPart - (longlong)LVar15) *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000) +
         *(float *)(lVar22 + 0xa40);
  }
  return;
}

// ProcessBunchInternal @ 147a68710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::ProcessBunchInternal(UActorChannel *this,FInBunch *param_1)

{
  int *piVar1;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  AActor *pAVar4;
  FNetTraceCollector *pFVar5;
  ulong64 uVar6;
  UNetConnection *pUVar7;
  longlong lVar8;
  FObjectReplicator *this_00;
  FNetworkObjectList *this_01;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  LARGE_INTEGER LVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  EConnectionState EVar20;
  int iVar21;
  FNetGUIDCache *this_02;
  longlong lVar22;
  UClass *pUVar23;
  UObject *pUVar24;
  FNetworkGUID FVar25;
  TSharedRef<FObjectReplicator,1> *pTVar26;
  FNetResult *pFVar27;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_Stat_PostNetInit> FVar30;
  TEventRef<unsigned_int> TVar31;
  UPackage *pUVar32;
  FWriteBuffer *pFVar33;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  ForElementType<FNetTracePacketContentEvent> FVar34;
  ForElementType<FNetTracePacketContentEvent> FVar35;
  ForAnyElementType FVar36;
  FObjectKey FVar37;
  byte bVar38;
  ESetChannelActorFlags EVar39;
  longlong lVar41;
  FName FVar42;
  FNameEntryId FVar43;
  longlong *plVar44;
  FNetTraceCollector *pFVar45;
  FNameEntryId FVar46;
  bool bVar47;
  float fVar48;
  undefined1 auStackY_548 [32];
  bool local_4d8;
  bool local_4d7;
  char local_4d6;
  FReplicationFlags_u_0 local_4d4;
  longlong *local_4d0;
  AActor *local_4c8;
  LARGE_INTEGER local_4c0;
  FInBunch *local_4b8;
  FColor_u_0 local_4b0 [2];
  FName local_4a8;
  FLLMScope local_4a0;
  FLLMScope local_49c;
  undefined8 local_498;
  FWeakObjectPtr local_490;
  undefined4 local_488;
  FName local_480;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  FString local_450;
  FString local_440;
  FString local_430;
  longlong *local_418;
  undefined1 auStack_410 [16];
  uint uStack_400;
  int iStack_3fc;
  longlong local_3f8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_3f0;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_3e8;
  undefined2 local_3e0;
  FObjectReplicator *local_3d8;
  AActor *local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  FMemScope local_3b0;
  LARGE_INTEGER local_3a8;
  FMemScope local_3a0;
  FObjectReplicator *local_398;
  LARGE_INTEGER local_390;
  LARGE_INTEGER local_388;
  FName local_380;
  FString local_378;
  FString local_368;
  FStatMessage local_358;
  FName local_348;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_340;
  FName local_330;
  FName local_328;
  undefined1 local_320 [16];
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FName local_270;
  FNetResult local_268;
  undefined1 local_238 [40];
  longlong local_210;
  undefined1 local_208 [32];
  longlong local_1e8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_1e0;
  FNetResult local_1d8;
  FNetBitReader local_1a8;
  undefined4 *local_e8;
  longlong local_e0;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  FNetTraceCollector *pFVar40;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pFVar40 = (FNetTraceCollector *)0x0;
  EVar39 = None;
  local_4b0[0].Bits = 0;
  if ((this->_padding_ & 0x20) != 0) {
    return;
  }
  local_4b8 = param_1;
  QueryPerformanceCounter(&local_388);
  pAVar4 = (this->Actor).field0_0x0.DebugPtr;
  local_4c0 = local_388;
  local_4d4.Value = 0;
  local_4d6 = '\0';
  if (pAVar4 != (AActor *)0x0) {
    if (4 < (byte)LogNetTraffic._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar4,&local_2e0,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
    }
LAB_147a68d5f:
    bVar38 = param_1->bIsReplicationPaused;
    bVar17 = (**(code **)(this->_padding_ + 0x358))(this);
    if (bVar38 != bVar17) {
      pAVar4 = (this->Actor).field0_0x0.DebugPtr;
      (**(code **)(pAVar4->_padding_ + 0x2f0))(pAVar4,bVar38);
      (**(code **)(this->_padding_ + 0x350))(this,bVar38);
    }
    lVar22 = (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x570))();
    if (this->_padding_ == 0) {
      bVar47 = lVar22 == 0;
    }
    else {
      bVar47 = this->_padding_ == lVar22;
    }
    if (bVar47) {
LAB_147a68dff:
      local_4d4.Value = local_4d4.Value | 1;
    }
    else if (lVar22 != 0) {
      pUVar23 = Z_Construct_UClass_UChildConnection_NoRegister();
      iVar21 = (int)pUVar23->_padding_;
      if (((iVar21 <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar21 * 8) ==
           &pUVar23->_padding_)) && (*(longlong *)(lVar22 + 0x1f80) == this->_padding_))
      goto LAB_147a68dff;
    }
    local_4d4.Value =
         ((byte)param_1->field_0xe9 & 4) << 3 | *(uint *)&this->field_0x90 & 0x40 |
         local_4d4.Value & 0xffffff9f;
    cVar16 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
    if (cVar16 == '\0') {
      plVar44 = &param_1->_padding_;
      do {
        local_4d0 = plVar44;
        if (((UNetConnection *)this->_padding_ == (UNetConnection *)0x0) ||
           (EVar20 = UNetConnection::GetConnectionState((UNetConnection *)this->_padding_),
           EVar20 == USOCK_Closed)) break;
        FNetBitReader::FNetBitReader(&local_1a8,(UPackageMap *)param_1->_padding_,(uchar *)0x0,0);
        uVar18 = 0xffffffff;
        local_4d8 = false;
        pFVar45 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar45 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
        }
        if (pFVar45 != (FNetTraceCollector *)0x0) {
          uVar18 = FNetTrace::BeginPacketContentEvent(pFVar45,Object,(uint)*plVar44);
          FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
          FVar35 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
          if (FVar34 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar35 = FVar34;
          }
          *(undefined8 *)((longlong)FVar35 + (ulonglong)uVar18 * 0x10) = 0;
        }
        pUVar24 = ReadContentBlockPayload(this,param_1,&local_1a8,&local_4d8);
        pFVar5 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
        if (pFVar5 != (FNetTraceCollector *)0x0) {
          FNetTrace::PushStreamOffset(pFVar5,(uint)*plVar44 - (int)local_1a8._padding_);
        }
        uVar19 = (uint)pFVar40;
        if ((local_4b8->_padding_ & 0x200) != 0) {
          if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
            if (1 < (byte)LogNet._0_1_) {
              if (pUVar24 != (UObject *)0x0) {
                pFVar40 = (FNetTraceCollector *)&DAT_00000002;
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar24,&local_280,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if ((((ulonglong)pFVar40 & 2) != 0) &&
                 (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
            }
            pUVar7 = (UNetConnection *)this->_padding_;
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_238,ContentBlockFail);
            pFVar27 = UE::Net::AddToAndConsumeChainResultPtr
                                (&local_1d8,
                                 (TPimplPtr<UE::Net::FNetResult,1> *)&local_4b8->_padding_,
                                 (TNetResult<ENetCloseResult> *)local_238);
            UNetConnection::Close(pUVar7,pFVar27);
            if (local_1d8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
              (**(code **)((longlong)local_1d8.NextResult + -0x10))
                        ((longlong)local_1d8.NextResult + -0x10);
            }
            if (local_1d8.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_1d8.ErrorContext.Data.AllocatorInstance.Data);
            }
            if (local_210 != 0) {
              (**(code **)(local_210 + -0x10))(local_210 + -0x10);
            }
LAB_147a6969c:
            if ((FScriptContainerElement *)local_238._24_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_238._24_8_);
            }
            if (pFVar5 != (FNetTraceCollector *)0x0) {
              FNetTrace::PopStreamOffset(pFVar5);
            }
            if (uVar18 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent(pFVar45,uVar18,(uint)*local_4d0);
            }
            FNetBitReader::~FNetBitReader(&local_1a8);
            goto LAB_147a69e2e;
          }
          if (2 < (byte)LogNet._0_1_) {
            if (pUVar24 != (UObject *)0x0) {
              pFVar40 = (FNetTraceCollector *)&DAT_00000001;
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar24,&local_290,(UObject *)0x0,None);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            plVar44 = local_4d0;
            if ((((ulonglong)pFVar40 & 1) != 0) &&
               (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
              plVar44 = local_4d0;
            }
          }
          *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
          if (pFVar5 != (FNetTraceCollector *)0x0) {
            FNetTrace::PopStreamOffset(pFVar5);
          }
          if (uVar18 != 0xffffffff) {
            uVar19 = (uint)*plVar44;
LAB_147a693d0:
            FNetTrace::EndPacketContentEvent(pFVar45,uVar18,uVar19);
          }
LAB_147a693da:
          FNetBitReader::~FNetBitReader(&local_1a8);
          break;
        }
        if (local_1a8._padding_ == 0) {
          if (uVar18 != 0xffffffff) {
            lVar22 = *(longlong *)(this->_padding_ + 0x58);
            if ((*(longlong *)(lVar22 + 0x1c8) == 0) &&
               (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar47)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar25 = FNetGUIDCache::GetNetGUID
                               (*(FNetGUIDCache **)(lVar22 + 0x1c8),(UObject *)local_320);
            uVar6 = *(ulong64 *)FVar25.field0_0x0;
            FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
            FVar35 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
            if (FVar34 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar35 = FVar34;
            }
            *(ulong64 *)((longlong)FVar35 + (ulonglong)uVar18 * 0x10) = uVar6;
            FNetTraceCollector::AddReferencedObjectId(pFVar45,uVar6);
            plVar44 = local_4d0;
          }
          if (pFVar5 != (FNetTraceCollector *)0x0) {
            FNetTrace::PopStreamOffset(pFVar5);
          }
          if (uVar18 != 0xffffffff) {
            uVar19 = (uint)*plVar44;
LAB_147a692bc:
            FNetTrace::EndPacketContentEvent(pFVar45,uVar18,uVar19);
          }
        }
        else {
          if ((pUVar24 == (UObject *)0x0) || ((*(uint *)&pUVar24->field_0x8 >> 0x1e & 1) != 0)) {
            pAVar4 = (this->Actor).field0_0x0.DebugPtr;
            if ((pAVar4 == (AActor *)0x0) || (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) {
              if (2 < (byte)LogNet._0_1_) {
                if (pUVar24 != (UObject *)0x0) {
                  pFVar40 = (FNetTraceCollector *)(ulonglong)(uVar19 | 4);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar24,&local_2b0,(UObject *)0x0,None);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (((ulonglong)pFVar40 & 4) != 0) {
                  uVar19 = (uint)pFVar40 & 0xfffffffb;
                  FVar36.Data = local_2b0.Data.AllocatorInstance.Data;
                  goto LAB_147a69293;
                }
              }
              goto LAB_147a6929d;
            }
            if (2 < (byte)LogNet._0_1_) {
              if (pUVar24 != (UObject *)0x0) {
                pFVar40 = (FNetTraceCollector *)(ulonglong)(uVar19 | 8);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar24,&local_2c0,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if ((((ulonglong)pFVar40 & 8) != 0) &&
                 (pFVar40 = (FNetTraceCollector *)(ulonglong)((uint)pFVar40 & 0xfffffff7),
                 local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pTVar26 = FindReplicator(this,pUVar24,(bool *)0x0);
            if (pTVar26 == (TSharedRef<FObjectReplicator,1> *)0x0) {
              pTVar26 = CreateReplicator(this,pUVar24,true);
            }
            local_4d7 = false;
            bVar47 = FObjectReplicator::ReceivedBunch
                               (pTVar26->Object,&local_1a8,(FReplicationFlags *)&local_4d4._s_0,
                                local_4d8,&local_4d7);
            if (bVar47) {
              pAVar4 = (this->Actor).field0_0x0.DebugPtr;
              if ((pAVar4 == (AActor *)0x0) || (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) {
                if (6 < (byte)LogNet._0_1_) {
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                }
                *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
                if (pFVar5 != (FNetTraceCollector *)0x0) {
                  FNetTrace::PopStreamOffset(pFVar5);
                }
                if (uVar18 != 0xffffffff) {
                  uVar19 = (uint)*local_4d0;
                  goto LAB_147a693d0;
                }
                goto LAB_147a693da;
              }
              if (uVar18 != 0xffffffff) {
                uVar6 = (pTVar26->Object->ObjectNetGUID).field0_0x0.ObjectId;
                FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
                FVar35 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
                if (FVar34 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                  FVar35 = FVar34;
                }
                *(ulong64 *)((longlong)FVar35 + (ulonglong)uVar18 * 0x10) = uVar6;
                FNetTraceCollector::AddReferencedObjectId(pFVar45,uVar6);
              }
              if (local_4d7 != false) {
                FLLMScope::FLLMScope
                          (&local_4a0,LLMTagDeclaration_NetDriver.UniqueName,false,None,Default,true
                          );
                local_348 = LLMTagDeclaration_NetDriver.UniqueName;
                FMemScope::FMemScope(&local_3a0,&local_348,true);
                local_3d8 = pTVar26->Object;
                TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                ::Emplace<FObjectReplicator_*>
                          ((TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                            *)(*(longlong *)(this->_padding_ + 0x58) + 0x688),&local_398,
                           (bool *)&local_3d8);
                FMemScope::~FMemScope(&local_3a0);
                FLLMScope::~FLLMScope(&local_4a0);
              }
            }
            else {
              if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
                if (1 < (byte)LogNet._0_1_) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar24,&local_2a0,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                  }
                }
                pUVar7 = (UNetConnection *)this->_padding_;
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (&local_268,ObjectReplicatorReceivedBunchFail);
                UNetConnection::Close(pUVar7,&local_268);
                local_238._24_8_ = local_268.ErrorContext.Data.AllocatorInstance.Data;
                if (local_268.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                  (**(code **)((longlong)local_268.NextResult + -0x10))
                            ((longlong)local_268.NextResult + -0x10);
                  local_238._24_8_ = local_268.ErrorContext.Data.AllocatorInstance.Data;
                }
                goto LAB_147a6969c;
              }
              if (2 < (byte)LogNet._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar24,&local_2d0,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                FVar36.Data = local_2d0.Data.AllocatorInstance.Data;
LAB_147a69293:
                pFVar40 = (FNetTraceCollector *)(ulonglong)uVar19;
                if (FVar36.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar36.Data);
                }
              }
LAB_147a6929d:
              *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
            }
          }
          if (pFVar5 != (FNetTraceCollector *)0x0) {
            FNetTrace::PopStreamOffset(pFVar5);
          }
          if (uVar18 != 0xffffffff) {
            uVar19 = (uint)*local_4d0;
            goto LAB_147a692bc;
          }
        }
        FNetBitReader::~FNetBitReader(&local_1a8);
        param_1 = local_4b8;
        cVar16 = (**(code **)(local_4b8->_padding_ + 0x38))(local_4b8);
        plVar44 = local_4d0;
      } while (cVar16 == '\0');
    }
    local_4c = 0x10;
    pTVar2 = &this->ReplicationMap;
    local_d8.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
    FVar46.Value = 0;
    local_50 = 0;
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_208,
               (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)pTVar2);
    local_3e0 = 0;
    stack0xfffffffffffffbf8 = local_208._16_16_;
    local_418 = (longlong *)local_208._0_8_;
    auStack_410._0_8_ = local_208._8_8_;
    local_3f8 = local_1e8;
    pTStack_3f0 = pTStack_1e0;
    iVar21 = local_208._28_4_;
    local_3e8 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                 *)pTVar2;
    if (iVar21 < *(int *)(local_208._16_8_ + 0x18)) {
      do {
        lVar41 = (longlong)iVar21 * 0x20;
        lVar22 = *local_418;
        lVar8 = *(longlong *)(lVar41 + 8 + lVar22);
        pUVar24 = *(UObject **)(lVar8 + 0x48);
        if (((pUVar24 == (UObject *)0x0) &&
            (pUVar24 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar8 + 0xd8)),
            pUVar24 == (UObject *)0x0)) || ((*(uint *)&pUVar24->field_0x8 >> 0x1e & 1) != 0)) {
          cVar16 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
          if (cVar16 == '\0') {
            local_498 = *(undefined8 *)(*(longlong *)(lVar41 + 8 + lVar22) + 0xd8);
            FVar28 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
            if (local_d8.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar28 = local_d8.SecondaryData;
            }
            if ((ulonglong)FVar28 <= &local_498) {
              FVar28 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
              if (local_d8.SecondaryData !=
                  (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar28 = local_d8.SecondaryData;
              }
              if ((&local_498 < (undefined8 *)((longlong)FVar28 + (longlong)local_4c * 8)) &&
                 (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar47)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                   (0x408,&local_d8,&local_4c);
            }
            lVar22 = (longlong)local_50;
            FVar28 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
            if (local_d8.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar28 = local_d8.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(undefined8 *)((longlong)FVar28 + lVar22 * 8) = local_498;
            TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_3f0,iVar21);
            local_3e0 = CONCAT11(local_3e0._1_1_,1);
          }
        }
        else {
          this_00 = *(FObjectReplicator **)(lVar41 + 8 + lVar22);
          if ((this_00->ObjectPtr == (UObject *)0x0) &&
             (pUVar24 = FWeakObjectPtr::Get(&(this_00->WeakObjectPtr).WeakPtr),
             pUVar24 == (UObject *)0x0)) {
            if (5 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
          }
          else {
            if ((*(longlong *)(*(longlong *)(this_00->OwningChannel->_padding_ + 0x58) + 0x100) != 0
                ) && (this_00->bHasReplicatedProperties != 0)) {
              pUVar24 = this_00->ObjectPtr;
              if ((pUVar24 != (UObject *)0x0) ||
                 (pUVar24 = FWeakObjectPtr::Get(&(this_00->WeakObjectPtr).WeakPtr),
                 pUVar24 != (UObject *)0x0)) {
                (**(code **)(*(longlong *)pUVar24 + 0x228))();
              }
              this_00->bHasReplicatedProperties = 0;
            }
            FObjectReplicator::CallRepNotifies(this_00,true);
          }
        }
        uStack_400 = uStack_400 & ~auStack_410._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_410);
        iVar21 = iStack_3fc;
      } while (iStack_3fc < *(int *)(auStack_410._8_8_ + 0x18));
      if (((char)local_3e0 != '\0') && (local_3e0._1_1_ != '\0')) {
        uVar18 = *(int *)&(local_3e8->Elements).field_0x8 -
                 *(int *)&(local_3e8->Elements).field_0x34;
        if (uVar18 < 4) {
          iVar21 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_488 = (undefined4)lVar22;
          iVar21 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar18) && (local_3e8->HashSize < iVar21)) || (iVar21 < local_3e8->HashSize))
        {
          local_3e8->HashSize = iVar21;
          TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_3e8);
        }
      }
    }
    if (0 < local_50) {
      lVar22 = *(longlong *)(this->_padding_ + 0x58);
      if ((*(longlong *)(lVar22 + 0x9c8) == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar47)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar21 = local_50;
      this_01 = *(FNetworkObjectList **)(lVar22 + 0x9c8);
      local_340.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        local_340.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_d8.SecondaryData;
      }
      if ((local_50 < 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar47)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_340.ArrayNum = iVar21;
      pAVar4 = (this->Actor).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar4 == (AActor *)0x0)) {
        local_470 = 0;
        if (pAVar4 != (AActor *)0x0) goto LAB_147a699a1;
        FVar37.ObjectIndex = 0;
        FVar37.ObjectSerialNumber = 0;
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pAVar4);
LAB_147a699a1:
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        local_490.ObjectIndex = 0;
        local_490.ObjectSerialNumber = 0;
        local_3d0 = pAVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar4);
        }
        FWeakObjectPtr::operator=(&local_490,(FObjectPtr)&local_3d0);
        FVar37 = (FObjectKey)local_490;
      }
      FNetworkObjectList::RemoveMultipleSubObjectChannelReference
                (this_01,FVar37,&local_340,(UObject *)this);
    }
    local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8.SecondaryData;
    if (((this->Actor).field0_0x0.DebugPtr != (AActor *)0x0) && (local_4d6 != '\0')) {
      FVar30 = StatPtr_Stat_PostNetInit;
      if (StatPtr_Stat_PostNetInit == (FThreadSafeStaticStat<FStat_Stat_PostNetInit>)0x0) {
        pFVar29 = ::FName::FName((FName *)(local_320 + 8),"Stat_PostNetInit");
        FVar30 = (FThreadSafeStaticStat<FStat_Stat_PostNetInit>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PostNetInit,*pFVar29,
                            L"ActorChan_PostNetInit","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                            true,ST_int64,true,false,MCR_Invalid);
      }
      FVar42 = *(FName *)FVar30;
      bVar47 = false;
      bVar14 = false;
      local_480.ComparisonIndex.Value = 0;
      local_480.Number = 0;
      FVar43 = FVar42.ComparisonIndex.Value;
      uVar18 = FVar42.Number;
      if ((FVar43.Value == 0) && (uVar18 == 0)) {
LAB_147a69b16:
        bVar13 = false;
        FVar42 = local_480;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_4b0[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_4b0[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
          bVar47 = false;
          bVar14 = true;
          if (-1 < CpuChannel->Enabled) {
            local_4a8.ComparisonIndex.Value = FVar43.Value;
            local_4a8.Number = uVar18;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_4a8,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0xdaa);
            bVar47 = true;
            bVar14 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147a69b16;
        local_4a8.ComparisonIndex.Value = FVar43.Value;
        local_4a8.Number = uVar18;
        local_480 = FVar42;
        FThreadStats::AddMessage(FVar42,CycleScopeStart);
        bVar13 = true;
        FVar46.Value = local_480.ComparisonIndex.Value;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&LLMScope_Name3499,L"UObject/NetworkPostInit");
        _Init_thread_footer(&::_TSS0);
      }
      FLLMScope::FLLMScope(&local_49c,LLMScope_Name3499,false,None,Default,true);
      FMemScope::FMemScope(&local_3b0,&LLMScope_Name3499,true);
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_468 = 0;
        TVar31 = (TEventRef<unsigned_int>)&local_468;
      }
      else {
        local_3c8 = ((this->Actor).field0_0x0.DebugPtr)->_padding_;
        TVar31 = FStringTrace::GetNameRef(&local_270);
      }
      uVar9 = *(undefined8 *)TVar31;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        TVar31 = (TEventRef<unsigned_int>)&local_460;
        local_460 = 0;
      }
      else {
        local_3c0 = *(undefined8 *)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x18);
        TVar31 = FStringTrace::GetNameRef(&local_330);
      }
      uVar10 = *(undefined8 *)TVar31;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_458 = 0;
        TVar31 = (TEventRef<unsigned_int>)&local_458;
      }
      else {
        pUVar32 = UObjectBaseUtility::GetPackage
                            ((UObjectBaseUtility *)(this->Actor).field0_0x0.DebugPtr);
        local_3b8 = pUVar32->_padding_;
        TVar31 = FStringTrace::GetNameRef(&local_328);
      }
      uVar11 = *(undefined8 *)TVar31;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x4d8))();
      }
      else {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_e8);
        *local_e8 = (int)uVar9;
        local_e8[1] = (int)uVar10;
        local_e8[2] = (int)uVar11;
        *(undefined8 *)(local_e0 + 0x28) = *(undefined8 *)(local_e0 + 0x20);
        (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x4d8))();
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar22 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar33 = *(FWriteBuffer **)(lVar22 + 0x20);
        if ((int)pFVar33 - *(int *)&pFVar33->Cursor < 1) {
          pFVar33 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar33->Cursor = '\n';
        pFVar33->Cursor = pFVar33->Cursor + 1;
        pFVar33->Committed = pFVar33->Cursor;
      }
      FMemScope::~FMemScope(&local_3b0);
      FLLMScope::~FLLMScope(&local_49c);
      if (bVar14) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar47) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8.SecondaryData;
      if ((((bVar13) && (FVar42 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_03 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_03 == (FThreadStats *)0x0) {
          this_04 = FThreadStatsPool::Get();
          this_03 = FThreadStatsPool::GetFromPool(this_04);
        }
        local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8.SecondaryData;
        if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
          local_358.NameAndInfo.Number = FVar42.Number & 0xffff6fff | 0x6000;
          local_358.NameAndInfo.Index.Value = FVar46.Value;
          QueryPerformanceCounter(&local_3a8);
          local_358.StatData.Pad[4] = '\0';
          local_358.StatData.Pad[5] = '\0';
          local_358.StatData.Pad[6] = '\0';
          local_358.StatData.Pad[7] = '\0';
          local_358.StatData.Pad[0] = local_3a8.s.LowPart._0_1_;
          local_358.StatData.Pad[1] = local_3a8.s.LowPart._1_1_;
          local_358.StatData.Pad[2] = local_3a8.s.LowPart._2_1_;
          local_358.StatData.Pad[3] = local_3a8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_03,&local_358);
          piVar1 = &this_03->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_03,false,false);
            local_378.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_d8.SecondaryData;
          }
          else {
            local_378.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_d8.SecondaryData;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_03,false,false);
              local_378.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_d8.SecondaryData;
            }
          }
        }
      }
    }
LAB_147a69e20:
    if ((ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
        local_378.Data.AllocatorInstance.Data !=
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    goto LAB_147a69e2e;
  }
  if (param_1->bOpen == 0) {
    if ((byte)LogNetTraffic._0_1_ < 2) goto LAB_147a69e2e;
    ::FString::PrintfImpl(&local_378,L"%llu");
    ::FName::ToString((FName *)&this->_padding_,&local_310);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    goto LAB_147a69e20;
  }
  uVar18 = 0xffffffff;
  pFVar45 = pFVar40;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar45 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
  }
  if (pFVar45 != (FNetTraceCollector *)0x0) {
    uVar18 = FNetTrace::BeginPacketContentEvent(pFVar45,NameId,(uint)param_1->_padding_);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NewActor = UE::Net::CreatePersistentNetDebugName(L"NewActor",8);
      _Init_thread_footer(&::_TSS0);
    }
    uVar19 = FNetTrace::TraceName(NewActor);
    FVar34 = (pFVar45->Events).AllocatorInstance.SecondaryData;
    if (FVar34 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar34 = (ForElementType<FNetTracePacketContentEvent>)&pFVar45->Events;
    }
    *(uint *)((longlong)FVar34 + (ulonglong)uVar18 * 0x10) = uVar19;
  }
  local_4c8 = (AActor *)0x0;
  local_4d6 = (**(code **)(**(longlong **)(this->_padding_ + 0x68) + 0x2d0))();
  if ((local_4c8 == (AActor *)0x0) || (((uint)local_4c8->_padding_ >> 0x1e & 1) != 0)) {
    if (local_4d6 != '\0') {
      bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bSpawnedNewActor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xcdd,L"");
      if (bVar47) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
LAB_147a68c0f:
      if (2 < (byte)LogNet._0_1_) {
        this_02 = TSharedPtr<FNetGUIDCache,1>::operator->
                            ((TSharedPtr<FNetGUIDCache,1> *)
                             (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
        FNetGUIDCache::FullNetGUIDPath(this_02,&local_2f0,&this->ActorNetGUID);
        if ((local_4c8 == (AActor *)0x0) || (local_4c8->_padding_ == 0)) {
          ::FString::FString(&local_430,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_4c8,&local_430,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430.Data.AllocatorInstance.Data);
        }
        param_1 = local_4b8;
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          param_1 = local_4b8;
        }
      }
      goto LAB_147a68ccf;
    }
    if ((param_1->bClose != '\x01' || param_1->bReliable != '\x01') ||
       (cVar16 = (**(code **)(param_1->_padding_ + 0x38))(param_1), cVar16 == '\0'))
    goto LAB_147a68c0f;
    if (((*(uint *)(this->_padding_ + 0xfc) >> 1 & 1) == 0) && (5 < (byte)LogNet._0_1_)) {
      if ((local_4c8 == (AActor *)0x0) || (local_4c8->_padding_ == 0)) {
        ::FString::FString(&local_440,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_4c8,&local_440,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
    }
    SetChannelActor(this,(AActor *)0x0,None);
  }
  else {
    if (4 < (byte)LogNetLifecycle._0_1_) {
      local_380 = (FName)local_4c8->_padding_;
      ::FName::ToString(&local_380,&local_368);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetLifecycle);
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
    }
    if ((UE::Net::bDiscardTornOffActorRPCs == false) || (local_4c8->bTearOff == 0)) {
      if ((GSkipReplicatorForDestructionInfos != 0) && (param_1->bClose != '\0')) {
        cVar16 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
        EVar39 = (ESetChannelActorFlags)(cVar16 != '\0');
      }
      if (4 < (byte)LogNetTraffic._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_4c8,&local_300,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_______Channel_A_151835e78,
                   (FLogCategoryBase *)&LogNetTraffic);
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
      }
      SetChannelActor(this,local_4c8,EVar39);
      (**(code **)(this->_padding_ + 0x360))(this,(this->Actor).field0_0x0.DebugPtr);
      local_4d4.Value = local_4d4.Value | 2;
      ((this->Actor).field0_0x0.DebugPtr)->CustomTimeDilation = this->CustomTimeDilation;
      if (uVar18 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar45,uVar18,(uint)param_1->_padding_);
      }
      goto LAB_147a68d5f;
    }
    if (2 < (byte)LogNet._0_1_) {
      if (local_4c8->_padding_ == 0) {
        ::FString::FString(&local_450,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_4c8,&local_450,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
    }
LAB_147a68ccf:
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x20;
    if ((((UNetConnection *)this->_padding_)->bInternalAck == 0) &&
       (this->bBlockChannelFailure == 0)) {
      UE::Net::TNetControlMessageImpl<16,int>::Send
                ((UNetConnection *)this->_padding_,(int *)((longlong)&this->_padding_ + 4));
    }
  }
  if (uVar18 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar45,uVar18,(uint)param_1->_padding_);
  }
LAB_147a69e2e:
  LVar15 = local_4c0;
  fVar48 = UNetDriver::GetIncomingBunchFrameProcessingTimeLimit
                     (*(UNetDriver **)(this->_padding_ + 0x58));
  if (0.0 < fVar48) {
    QueryPerformanceCounter(&local_390);
    lVar22 = *(longlong *)(this->_padding_ + 0x58);
    *(float *)(lVar22 + 0xa40) =
         (float)((double)(ulonglong)(local_390.QuadPart - (longlong)LVar15) *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000) +
         *(float *)(lVar22 + 0xa40);
  }
  return;
}

// ProcessQueuedBunches @ 147a69f70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::ProcessQueuedBunches(UActorChannel *this)

{
  float *pfVar1;
  int *piVar2;
  TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
  *this_00;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar3;
  FNetGUIDCache *this_01;
  AActor *pAVar4;
  longlong *plVar5;
  FInBunch *pFVar6;
  FScriptContainerElement *_Dst;
  undefined1 *puVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  undefined8 uVar11;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar12;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  char cVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  UObject *pUVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<_public:_bool___cdecl_UActorChannel::ProcessQueuedBunches(void)_::_41_::FStat_STAT_ProcessQueuedBunchesTime>
  FVar25;
  FString *pFVar26;
  UClass *pUVar27;
  longlong lVar28;
  TConsoleVariableData<int> *pTVar29;
  FName FVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  undefined1 *puVar36;
  uint uVar37;
  uint *puVar38;
  longlong lVar39;
  LARGE_INTEGER LVar40;
  ulonglong uVar41;
  undefined1 *puVar42;
  float fVar43;
  uint local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_288;
  FColor_u_0 local_278;
  undefined4 local_274;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_270;
  uint uStack_268;
  uint uStack_264;
  undefined1 *local_260;
  undefined4 uStack_258;
  uint uStack_254;
  uint local_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  LARGE_INTEGER local_240;
  FName local_238;
  FName local_230;
  FNetworkGUID local_228;
  FName local_220;
  FString local_210;
  FString local_200;
  int local_1f0;
  int local_1ec;
  LARGE_INTEGER local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  LARGE_INTEGER local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  undefined1 local_198 [12];
  uint local_18c;
  longlong local_188;
  uint local_180;
  int local_17c;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_170;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FName local_108;
  void *local_100 [2];
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  FIsOwnerOrPawnHelper local_b8;
  undefined4 local_7c;
  undefined4 local_5c;
  ulonglong uVar35;
  
  uVar35 = 0;
  uVar32 = 0;
  uVar31 = 0;
  uVar22 = 0;
  local_274 = 0;
  if ((*(int *)&(this->PendingGuidResolves).Elements.field_0x8 ==
       *(int *)&(this->PendingGuidResolves).Elements.field_0x34) &&
     ((this->QueuedBunches).ArrayNum == 0)) {
    return true;
  }
  QueryPerformanceCounter(&local_1e8);
  local_240.s = local_1e8.s;
  this_01 = *(FNetGUIDCache **)(*(longlong *)(this->_padding_ + 0x58) + 0x1c8);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_198,&this->PendingGuidResolves);
  LVar40 = local_1e8;
  if (local_17c < *(int *)(local_188 + 0x18)) {
    do {
      iVar21 = local_17c;
      uVar11 = local_198._0_8_;
      lVar39 = (longlong)local_17c;
      pUVar23 = FNetGUIDCache::GetObjectFromNetGUID
                          (this_01,(FNetworkGUID *)(*(longlong *)local_198._0_8_ + lVar39 * 0x10),
                           true);
      if (pUVar23 == (UObject *)0x0) {
        bVar15 = FNetGUIDCache::IsGUIDBroken
                           (this_01,(FNetworkGUID *)(*(longlong *)uVar11 + lVar39 * 0x10),true);
        if (bVar15) {
          if (2 < (byte)LogNet._0_1_) {
            pAVar4 = (this->Actor).field0_0x0.DebugPtr;
            if (pAVar4 == (AActor *)0x0) {
              ::FString::FString(&local_210,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pAVar4,&local_210,(UObject *)0x0);
            }
            ::FString::PrintfImpl(&local_1c8,L"%llu");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_147a6a0fb;
        }
      }
      else {
LAB_147a6a0fb:
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::RemoveByIndex
                  (local_170,iVar21);
      }
      local_180 = local_180 & ~local_18c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_198 + 8));
      LVar40 = local_240;
    } while (local_17c < *(int *)(local_188 + 0x18));
  }
  if ((this->QueuedBunches).ArrayNum == 0) {
    return true;
  }
  bVar15 = UNetDriver::DidHitchLastFrame(*(UNetDriver **)(this->_padding_ + 0x58));
  *(uint *)&this->field_0x90 =
       ((uint)bVar15 << 8 | *(uint *)&this->field_0x90 & 0x100) ^
       *(uint *)&this->field_0x90 & 0xfffffeff;
  pTVar29 = CVarNetProcessQueuedBunchesMillisecondLimit.Ref;
  if (*(int *)(*(longlong *)(this->_padding_ + 0x58) + 0x9ec) != -1) {
    pTVar29 = CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit.Ref;
  }
  bVar15 = IsInParallelGameThread();
  if (((!bVar15) && (bVar15 = IsInGameThread(), !bVar15)) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar15)) {
    pcVar8 = (code *)swi(3);
    uVar16 = (*pcVar8)();
    return (bool)uVar16;
  }
  if ((pTVar29->ShadowedValue[0] != 0) &&
     (fVar43 = (float)pTVar29->ShadowedValue[0],
     pfVar1 = (float *)(*(longlong *)(this->_padding_ + 0x58) + 0x778),
     fVar43 < *pfVar1 || fVar43 == *pfVar1)) goto LAB_147a6af88;
  uVar37 = 0;
  uVar34 = 0;
  if (*(int *)&(this->PendingGuidResolves).Elements.field_0x8 ==
      *(int *)&(this->PendingGuidResolves).Elements.field_0x34) {
    if (*(int *)((longlong)&this->_padding_ + 4) != -1) {
      lVar39 = this->_padding_;
      uVar33 = (this->ActorNetGUID).field0_0x0.ObjectId;
      if (*(int *)(lVar39 + 0x1600) != *(int *)(lVar39 + 0x162c)) {
        lVar28 = *(longlong *)(lVar39 + 0x1638);
        if (*(longlong *)(lVar39 + 0x1638) == 0) {
          lVar28 = lVar39 + 0x1630;
        }
        iVar21 = *(int *)(lVar28 + ((ulonglong)(*(int *)(lVar39 + 0x1640) - 1) &
                                   (uVar33 >> 0x20) * 0x17 + uVar33) * 4);
        if (iVar21 != -1) {
          do {
            if (*(ulonglong *)((longlong)iVar21 * 0x20 + *(longlong *)(lVar39 + 0x15f8)) == uVar33)
            goto LAB_147a6aad6;
            iVar21 = *(int *)((longlong)iVar21 * 0x20 + 0x18 + *(longlong *)(lVar39 + 0x15f8));
          } while (iVar21 != -1);
        }
      }
    }
    plVar5 = *(longlong **)(this->_padding_ + 0x58);
    cVar17 = (**(code **)(*plVar5 + 0x438))(plVar5,(this->ActorNetGUID).field0_0x0.ObjectId);
    if (cVar17 != '\0') goto LAB_147a6aad6;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_ProcessQueuedBunchesTime ==
          (FThreadSafeStaticStat<_public:_bool___cdecl_UActorChannel::ProcessQueuedBunches(void)_::_41_::FStat_STAT_ProcessQueuedBunchesTime>
           )0x0) {
        pFVar24 = ::FName::FName(&local_108,"STAT_ProcessQueuedBunchesTime");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessQueuedBunchesTime,*pFVar24,
                   L"ProcessQueuedBunches time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar25 = StatPtr_STAT_ProcessQueuedBunchesTime;
    if (StatPtr_STAT_ProcessQueuedBunchesTime ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_UActorChannel::ProcessQueuedBunches(void)_::_41_::FStat_STAT_ProcessQueuedBunchesTime>
         )0x0) {
      pFVar24 = ::FName::FName(&local_c0,"STAT_ProcessQueuedBunchesTime");
      FVar25 = (FThreadSafeStaticStat<_public:_bool___cdecl_UActorChannel::ProcessQueuedBunches(void)_::_41_::FStat_STAT_ProcessQueuedBunchesTime>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessQueuedBunchesTime,
                            *pFVar24,L"ProcessQueuedBunches time","STATGROUP_Net","STATCAT_Advanced"
                            ,L"Net",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar30 = *(FName *)FVar25;
    bVar10 = false;
    bVar15 = false;
    local_220.ComparisonIndex.Value = 0;
    local_220.Number = 0;
    bVar19 = false;
    bVar14 = false;
    if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_147a6a40f:
      bVar10 = bVar19;
      bVar15 = bVar14;
      bVar14 = false;
      local_230 = local_220;
      FVar30 = local_220;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_278.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_278._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
        bVar10 = false;
        bVar15 = true;
        bVar19 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_238.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
          local_238.Number = FVar30.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_238,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                     ,0xbb9);
          bVar10 = true;
          bVar15 = true;
          bVar19 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147a6a40f;
      local_230 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar14 = true;
    }
    dVar9 = (double)(ulonglong)LVar40.QuadPart * FGenericPlatformTime::SecondsPerCycle64;
    fVar43 = UNetDriver::GetIncomingBunchFrameProcessingTimeLimit
                       (*(UNetDriver **)(this->_padding_ + 0x58));
    if (0.0 < fVar43) {
      fVar43 = (float)((double)(float)dVar9 - this->QueuedBunchStartTime);
      bVar19 = UE::Net::QueuedBunchTimeFailsafeSeconds < fVar43;
      if ((UE::Net::QueuedBunchTimeFailsafeSeconds < fVar43) &&
         (piVar2 = (int *)(*(longlong *)(this->_padding_ + 0x58) + 0xa48), *piVar2 = *piVar2 + 1,
         5 < (byte)LogNet._0_1_)) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_100);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_100[0] != (void *)0x0) {
          FMemory::Free(local_100[0]);
        }
      }
    }
    else {
      bVar19 = true;
    }
    uVar33 = uVar35;
    uVar41 = uVar35;
    if (0 < (this->QueuedBunches).ArrayNum) {
      do {
        uVar31 = (uint)uVar33;
        if ((!bVar19) &&
           (bVar18 = UNetDriver::HasExceededIncomingBunchFrameProcessingTime
                               (*(UNetDriver **)(this->_padding_ + 0x58)), FVar30 = local_230,
           bVar18)) break;
        uVar20 = uVar22;
        if ((int)uVar31 < (this->QueuedBunches).ArrayNum) {
          uVar20 = ~uVar31 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar6 = *(FInBunch **)((this->QueuedBunches).AllocatorInstance.Data + uVar41);
        ProcessBunchInternal(this,pFVar6);
        if (pFVar6 != (FInBunch *)0x0) {
          (**(code **)pFVar6->_padding_)(pFVar6);
        }
        uVar20 = uVar37;
        if ((int)uVar31 < (this->QueuedBunches).ArrayNum) {
          uVar20 = ~uVar31 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        uVar31 = uVar31 + 1;
        *(undefined8 *)((this->QueuedBunches).AllocatorInstance.Data + uVar41) = 0;
        FVar30 = local_230;
        uVar33 = (ulonglong)uVar31;
        uVar41 = uVar41 + 8;
      } while ((int)uVar31 < (this->QueuedBunches).ArrayNum);
    }
    uVar22 = 1;
    if (6 < (byte)LogNet._0_1_) {
      pAVar4 = (this->Actor).field0_0x0.DebugPtr;
      if (pAVar4 == (AActor *)0x0) {
        bVar19 = false;
      }
      else {
        pFVar26 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pAVar4,&local_f0,(UObject *)0x0);
        if ((pFVar26->Data).ArrayNum == 0) {
          bVar19 = true;
        }
        else {
          bVar19 = true;
        }
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((bVar19) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    uVar20 = uVar37;
    if ((int)uVar31 <= (this->QueuedBunches).ArrayNum) {
      uVar20 = ~uVar31 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    if (uVar31 != 0) {
      _Dst = (this->QueuedBunches).AllocatorInstance.Data;
      iVar21 = (this->QueuedBunches).ArrayNum - uVar31;
      if (iVar21 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar31 * 8,(longlong)iVar21 << 3);
      }
      piVar2 = &(this->QueuedBunches).ArrayNum;
      *piVar2 = *piVar2 - uVar31;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->QueuedBunches).AllocatorInstance,(this->QueuedBunches).ArrayNum,
                 &(this->QueuedBunches).ArrayMax);
    }
    local_260 = &(this->ReplicationMap).field_0x10;
    uVar31 = *(uint *)&(this->ReplicationMap).field_0x28;
    local_270 = (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                &this->ReplicationMap;
    uStack_254 = uVar34;
    if (uVar31 != 0) {
      puVar38 = *(uint **)&(this->ReplicationMap).field_0x20;
      if (puVar38 == (uint *)0x0) {
        puVar38 = (uint *)local_260;
      }
      uVar20 = *puVar38;
      uVar33 = uVar35;
      uVar37 = uVar32;
      uVar34 = uVar32;
      while (uVar20 == 0) {
        iVar21 = (int)uVar35;
        uVar37 = (int)uVar33 + 0x20;
        uVar33 = (ulonglong)uVar37;
        uVar34 = iVar21 + 1;
        uVar35 = (ulonglong)uVar34;
        if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
        goto LAB_147a6a7d6;
        uVar20 = puVar38[(longlong)iVar21 + 1];
      }
      uVar22 = -uVar20 & uVar20;
      uVar35 = (ulonglong)uVar22 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_1f0 = (int)lVar39;
      uStack_254 = local_1f0 + -1 + uVar37;
      if ((int)uVar31 < (int)uStack_254) {
LAB_147a6a7d6:
        uStack_254 = uVar31;
      }
    }
    puVar42 = &(this->ReplicationMap).field_0x10;
    uStack_24c = local_7c;
    iStack_248 = *(int *)&(this->ReplicationMap).field_0x8 -
                 *(int *)&(this->ReplicationMap).field_0x34;
    local_res10 = *(uint *)&(this->ReplicationMap).field_0x28;
    TStack_160._padding_ = CONCAT44(uVar22,uVar34);
    uStack_258 = 0xffffffff;
    TStack_160.CurrentBitIndex = uStack_254;
    TStack_160.UnvisitedBitMask = 0xffffffff;
    uVar31 = local_res10 & 0xffffffe0;
    iVar21 = (int)local_res10 >> 5;
    TStack_160._28_4_ = local_7c;
    TStack_160.BaseBitIndex = uVar37;
    uStack_140 = CONCAT44(uStack_244,iStack_248);
    uStack_268 = uVar34;
    uStack_264 = uVar22;
    local_250 = uVar37;
    local_168 = (TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                 *)local_270;
    TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_260;
    if (((int)local_res10 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    uVar22 = *(uint *)&(this->ReplicationMap).field_0x28;
    if (local_res10 != uVar22) {
      puVar7 = *(undefined1 **)&(this->ReplicationMap).field_0x20;
      puVar36 = puVar42;
      if (puVar7 != (undefined1 *)0x0) {
        puVar36 = puVar7;
      }
      uVar32 = -1 << ((byte)local_res10 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar21 * 4);
      while (uVar32 == 0) {
        lVar39 = (longlong)iVar21;
        uVar31 = uVar31 + 0x20;
        iVar21 = iVar21 + 1;
        local_res10 = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_147a6a900;
        uVar32 = *(uint *)(puVar36 + lVar39 * 4 + 4);
      }
      uVar35 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar39 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_res10 = (int)lVar39 + -1 + uVar31;
      if ((int)uVar22 < (int)local_res10) {
        local_res10 = uVar22;
      }
    }
LAB_147a6a900:
    while( true ) {
      pTVar12 = local_168;
      if (*(int *)(&local_168->field_0x0 + 8) - *(int *)(&local_168->field_0x0 + 0x34) !=
          (int)uStack_140) {
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_160.CurrentBitIndex == local_res10) &&
          (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar42)) &&
         (pTVar12 == &this->ReplicationMap)) break;
      FObjectReplicator::CallRepNotifies
                (*(FObjectReplicator **)
                  ((longlong)TStack_160.CurrentBitIndex * 0x20 + 8 +
                  *(longlong *)&pTVar12->field_0x0),true);
      TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
    }
    lVar39 = this->_padding_;
    if (*(longlong *)(lVar39 + 0x68) != 0) {
      pUVar27 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      bVar19 = FObjectPtr::IsA((FObjectPtr *)(lVar39 + 0x68),pUVar27);
      if (bVar19) {
        plVar5 = *(longlong **)(lVar39 + 0x68);
        if (plVar5 != (longlong *)0x0) {
          FNetGUIDCache::FIsOwnerOrPawnHelper::FIsOwnerOrPawnHelper
                    (&local_b8,this_01,*(AActor **)(this->_padding_ + 0x98),
                     (this->Actor).field0_0x0.DebugPtr);
          (**(code **)(*plVar5 + 0x360))
                    (plVar5,&this->ActorNetGUID,(this->QueuedBunches).ArrayNum != 0);
          FNetGUIDCache::FIsOwnerOrPawnHelper::~FIsOwnerOrPawnHelper(&local_b8);
        }
      }
    }
    if ((this->QueuedBunches).ArrayNum == 0) {
      this_00 = &this->QueuedBunchObjectReferences;
      bVar19 = 1 < (this->QueuedBunchObjectReferences).HashSize;
      if (!bVar19) {
        TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      TSparseArray<TSparseSetElement<TSharedRef<FQueuedBunchObjectReference,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this_00->Elements,0,
                        *(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x8);
      puVar42 = &(this->QueuedBunchObjectReferences).Elements.field_0xc;
      *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x8 = 0;
      if (*(int *)puVar42 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar42);
      }
      *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x34 = 0;
      iVar21 = *(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c;
      *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x28 = 0;
      if ((iVar21 < 0) || (0x80 < iVar21)) {
        *(undefined4 *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->QueuedBunchObjectReferences).Elements.field_0x10,0);
      }
      if (bVar19) {
        (this->QueuedBunchObjectReferences).HashSize = 1;
        TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
    }
    if (bVar15) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar14) {
      FThreadStats::AddMessage(FVar30,CycleScopeEnd);
    }
  }
  else {
LAB_147a6aad6:
    QueryPerformanceCounter(&local_1e0);
    dVar9 = __real_4170000000000000;
    if ((double)UE::Net::QueuedBunchTimeoutSeconds <
        ((double)local_1e0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->QueuedBunchStartTime) {
      if (this->bSuppressQueuedBunchWarningsDueToHitches == 0) {
        if (2 < (byte)LogNet._0_1_) {
          pAVar4 = (this->Actor).field0_0x0.DebugPtr;
          if (pAVar4 == (AActor *)0x0) {
            ::FString::FString(&local_200,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pAVar4,&local_200,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
        }
        if (4 < (byte)LogNet._0_1_) {
          local_260 = &(this->PendingGuidResolves).Elements.field_0x10;
          local_288 = 1;
          uVar20 = local_288;
          local_288 = 1;
          uVar31 = *(uint *)&(this->PendingGuidResolves).Elements.field_0x28;
          pTVar3 = &this->PendingGuidResolves;
          uStack_254 = uVar37;
          if (uVar31 != 0) {
            puVar38 = *(uint **)&(this->PendingGuidResolves).Elements.field_0x20;
            if (puVar38 == (uint *)0x0) {
              puVar38 = (uint *)local_260;
            }
            local_288 = *puVar38;
            uVar33 = uVar35;
            uVar34 = uVar32;
            uVar22 = uVar32;
            while (local_288 == 0) {
              iVar21 = (int)uVar33;
              uVar34 = (int)uVar35 + 0x20;
              uVar35 = (ulonglong)uVar34;
              uVar22 = iVar21 + 1;
              uVar33 = (ulonglong)uVar22;
              local_288 = uVar20;
              if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
              goto LAB_147a6ac48;
              local_288 = puVar38[(longlong)iVar21 + 1];
            }
            local_288 = -local_288 & local_288;
            uVar35 = (ulonglong)local_288 * 2 + 1;
            lVar39 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            local_1ec = (int)lVar39;
            uStack_254 = local_1ec + -1 + uVar34;
            if ((int)uVar31 < (int)uStack_254) {
LAB_147a6ac48:
              uStack_254 = uVar31;
            }
          }
          puVar42 = &(this->PendingGuidResolves).Elements.field_0x10;
          uStack_24c = local_5c;
          iStack_248 = *(int *)&(this->PendingGuidResolves).Elements.field_0x8 -
                       *(int *)&(this->PendingGuidResolves).Elements.field_0x34;
          uStack_264 = local_288;
          uVar31 = *(uint *)&(this->PendingGuidResolves).Elements.field_0x28;
          uStack_258 = 0xffffffff;
          TStack_130._padding_ = CONCAT44(local_288,uVar22);
          uVar32 = uVar31 & 0xffffffe0;
          TStack_130.CurrentBitIndex = uStack_254;
          TStack_130.UnvisitedBitMask = 0xffffffff;
          iVar21 = (int)uVar31 >> 5;
          TStack_130._28_4_ = local_5c;
          TStack_130.BaseBitIndex = uVar34;
          uStack_110 = CONCAT44(uStack_244,iStack_248);
          local_270 = pTVar3;
          uStack_268 = uVar22;
          local_250 = uVar34;
          local_138 = pTVar3;
          TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_260;
          if (((int)uVar31 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
          uVar22 = *(uint *)&(this->PendingGuidResolves).Elements.field_0x28;
          if (uVar31 != uVar22) {
            puVar7 = *(undefined1 **)&(this->PendingGuidResolves).Elements.field_0x20;
            puVar36 = puVar42;
            if (puVar7 != (undefined1 *)0x0) {
              puVar36 = puVar7;
            }
            uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar21 * 4);
            while (uVar31 == 0) {
              lVar39 = (longlong)iVar21;
              uVar32 = uVar32 + 0x20;
              iVar21 = iVar21 + 1;
              uVar31 = uVar22;
              if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
              goto LAB_147a6ad60;
              uVar31 = *(uint *)(puVar36 + lVar39 * 4 + 4);
            }
            uVar35 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar39 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            uVar31 = (int)lVar39 + -1 + uVar32;
            if ((int)uVar22 < (int)uVar31) {
              uVar31 = uVar22;
            }
          }
LAB_147a6ad60:
          while( true ) {
            pTVar13 = local_138;
            if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34
                != (int)uStack_110) {
              `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (((TStack_130.CurrentBitIndex == uVar31) &&
                (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar42)) &&
               (pTVar13 == pTVar3)) break;
            if (4 < (byte)LogNet._0_1_) {
              FNetGUIDCache::Describe
                        (this_01,&local_e0,
                         (FNetworkGUID *)
                         ((longlong)TStack_130.CurrentBitIndex * 0x10 +
                         *(longlong *)&pTVar13->Elements));
              ::FString::PrintfImpl(&local_1b8,L"%llu");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
            }
            FNetGUIDCache::GetOuterNetGUID(this_01,&local_228);
            if (4 < (byte)LogNet._0_1_) {
              FNetGUIDCache::Describe(this_01,&local_d0,&local_228);
              ::FString::PrintfImpl(&local_1a8,L"%llu");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
            }
            TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
          }
        }
      }
      QueryPerformanceCounter(&local_1d8);
      this->QueuedBunchStartTime =
           (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
    }
  }
  QueryPerformanceCounter(&local_1d0);
  lVar39 = *(longlong *)(this->_padding_ + 0x58);
  *(float *)(lVar39 + 0x778) =
       (float)((double)(ulonglong)(local_1d0.QuadPart - (longlong)local_240) *
               FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000) +
       *(float *)(lVar39 + 0x778);
LAB_147a6af88:
  return (this->QueuedBunches).ArrayNum == 0;
}

// QueueRemoteFunctionBunch @ 147a6bca0

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
UActorChannel::QueueRemoteFunctionBunch
          (UActorChannel *this,UObject *param_1,UFunction *param_2,FOutBunch *param_3)

{
  TSharedRef<FObjectReplicator,1> *pTVar1;
  
  pTVar1 = FindReplicator(this,param_1,(bool *)0x0);
  if (pTVar1 == (TSharedRef<FObjectReplicator,1> *)0x0) {
    pTVar1 = CreateReplicator(this,param_1,true);
  }
  FObjectReplicator::QueueRemoteFunctionBunch(pTVar1->Object,param_2,param_3);
  return;
}

// ReadContentBlockPayload @ 147a6d630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UActorChannel::ReadContentBlockPayload
          (UActorChannel *this,FInBunch *param_1,FNetBitReader *param_2,bool *param_3)

{
  longlong lVar1;
  uint uVar2;
  UObject *this_00;
  FString *pFVar3;
  longlong lVar4;
  ENetCloseResult EVar5;
  longlong lVar6;
  bool local_res10 [8];
  uint local_78 [2];
  FString local_70;
  undefined1 local_60 [40];
  longlong local_38;
  
  lVar6 = 0;
  lVar1 = param_1->_padding_;
  local_res10[0] = false;
  local_res10[1] = false;
  local_res10[2] = false;
  local_res10[3] = false;
  this_00 = ReadContentBlockHeader(this,param_1,local_res10,param_3);
  if ((param_1->_padding_ & 0x200) == 0) {
    if (local_res10[0] != false) {
      FBitReader::SetData((FBitReader *)param_2,(FBitReader *)param_1,0);
      return (UObject *)0x0;
    }
    local_78[0] = 0;
    (**(code **)(param_1->_padding_ + 0x1a0))(param_1,local_78);
    lVar4 = lVar6;
    if (GNetTraceRuntimeVerbosity != 0) {
      lVar4 = *(longlong *)(this->_padding_ + 0x1ec0);
    }
    if (lVar4 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTraceNameId_5113 = UE::Net::CreatePersistentNetDebugName(L"ContentBlockHeader",0x12);
        _Init_thread_footer(&::_TSS0);
      }
      lVar4 = param_1->_padding_;
      uVar2 = FNetTrace::TraceName(NetTraceNameId_5113);
      FNetTrace::TracePacketContentEvent
                (*(FNetTraceCollector **)(this->_padding_ + 0x1ec0),uVar2,(uint)lVar1,(uint)lVar4,1)
      ;
    }
    if ((param_1->_padding_ & 0x200) == 0) {
      FBitReader::SetData((FBitReader *)param_2,(FBitReader *)param_1,(ulonglong)local_78[0]);
      return this_00;
    }
    if (1 < (byte)LogNet._0_1_) {
      if (this_00 != (UObject *)0x0) {
        pFVar3 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)this_00,&local_70,(UObject *)0x0,None);
        if ((pFVar3->Data).ArrayNum == 0) {
          lVar6 = 2;
        }
        else {
          lVar6 = 2;
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((lVar6 != 0) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    EVar5 = ContentBlockPayloadBitsFail;
  }
  else {
    if (1 < (byte)LogNet._0_1_) {
      if (this_00 != (UObject *)0x0) {
        pFVar3 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)this_00,&local_70,(UObject *)0x0,None);
        if ((pFVar3->Data).ArrayNum == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = 1;
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((lVar6 != 0) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    EVar5 = ContentBlockHeaderFail;
  }
  UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>(local_60,EVar5);
  UE::Net::AddToChainResultPtr
            ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
             (TNetResult<ENetCloseResult> *)local_60);
  if (local_38 != 0) {
    (**(code **)(local_38 + -0x10))(local_38 + -0x10);
  }
  if ((void *)local_60._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._24_8_);
  }
  return (UObject *)0x0;
}

// ReadFieldHeaderAndPayload @ 147a6d8e0

/* WARNING: Removing unreachable block (ram,0x000147a6dadb) */
/* WARNING: Removing unreachable block (ram,0x000147a6db0a) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::ReadFieldHeaderAndPayload
          (UActorChannel *this,UObject *param_1,FClassNetCache *param_2,
          FNetFieldExportGroup *param_3,FNetBitReader *param_4,FFieldNetCache **param_5,
          FNetBitReader *param_6)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  FFieldObjectUnion *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  FFieldNetCache *pFVar10;
  FString *pFVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  FFieldNetCache *pFVar14;
  uint local_1d8;
  int local_1d4;
  longlong local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [40];
  longlong local_c0;
  undefined1 local_b8 [40];
  longlong local_90;
  undefined1 local_88 [40];
  longlong local_60;
  undefined1 local_58 [40];
  longlong local_30;
  
  pFVar14 = (FFieldNetCache *)0x0;
  local_1d8 = 0;
  *param_5 = (FFieldNetCache *)0x0;
  local_1d0 = param_4->_padding_;
  if (param_4->_padding_ == local_1d0) {
    return false;
  }
  if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
    local_1d4 = 0;
    (**(code **)(param_4->_padding_ + 0x198))(param_4,&local_1d4);
    if ((param_4->_padding_ & 0x200) == 0) {
      if (param_2->FieldsBase + (param_2->Fields).ArrayNum < local_1d4) {
        if (1 < (byte)LogRep._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_148,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_ReadFieldHeader_151839b80,
                     (FLogCategoryBase *)&LogRep);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        FArchiveState::SetError((FArchiveState *)param_4);
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_b8,FieldHeaderBadRepIndex);
        UE::Net::AddToChainResultPtr
                  (&param_4->ExtendedError,(TNetResult<ENetCloseResult> *)local_b8);
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_b8._24_8_;
        if (local_90 != 0) {
          (**(code **)(local_90 + -0x10))(local_90 + -0x10);
          local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_b8._24_8_;
        }
      }
      else {
        pFVar10 = FClassNetCache::GetFromIndex(param_2,local_1d4);
        *param_5 = pFVar10;
        if ((pFVar10 == (FFieldNetCache *)0x0) && (2 < (byte)LogNet._0_1_)) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_138,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
LAB_147a6decf:
        pbVar13 = (byte *)((longlong)&param_4->_padding_ + 1);
        local_1d8 = 0;
        (**(code **)(param_4->_padding_ + 0x1a0))(param_4,&local_1d8);
        pFVar10 = pFVar14;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar10 = *(FFieldNetCache **)(this->_padding_ + 0x1ec0);
        }
        if (pFVar10 != (FFieldNetCache *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            NetTraceNameId_5265 = UE::Net::CreatePersistentNetDebugName(L"FieldHeader",0xb);
            _Init_thread_footer(&::_TSS0);
          }
          lVar1 = param_4->_padding_;
          uVar9 = FNetTrace::TraceName(NetTraceNameId_5265);
          FNetTrace::TracePacketContentEvent
                    (*(FNetTraceCollector **)(this->_padding_ + 0x1ec0),uVar9,(uint)local_1d0,
                     (uint)lVar1,1);
        }
        if ((*pbVar13 & 2) == 0) {
          FBitReader::SetData((FBitReader *)param_6,(FBitReader *)param_4,(ulonglong)local_1d8);
          if ((*pbVar13 & 2) == 0) {
            return true;
          }
          if (1 < (byte)LogNet._0_1_) {
            pFVar4 = (FFieldObjectUnion *)*param_5;
            if ((pFVar4 != (FFieldObjectUnion *)0x0) &&
               ((pFVar4->Unknown & 0xfffffffffffffffe) != 0)) {
              pFVar11 = FFieldVariant::GetName((FFieldVariant *)pFVar4,&local_f8);
              if ((pFVar11->Data).ArrayNum == 0) {
                pFVar14 = (FFieldNetCache *)&DAT_00000002;
              }
              else {
                pFVar14 = (FFieldNetCache *)&DAT_00000002;
              }
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_108,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if ((pFVar14 != (FFieldNetCache *)0x0) &&
               (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (local_58,FieldPayloadFail);
          UE::Net::AddToChainResultPtr
                    (&param_4->ExtendedError,(TNetResult<ENetCloseResult> *)local_58);
          local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58._24_8_;
          if (local_30 != 0) {
            (**(code **)(local_30 + -0x10))(local_30 + -0x10);
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58._24_8_;
          }
        }
        else {
          if (1 < (byte)LogNet._0_1_) {
            pFVar4 = (FFieldObjectUnion *)*param_5;
            if ((pFVar4 != (FFieldObjectUnion *)0x0) &&
               ((pFVar4->Unknown & 0xfffffffffffffffe) != 0)) {
              pFVar11 = FFieldVariant::GetName((FFieldVariant *)pFVar4,&local_118);
              if ((pFVar11->Data).ArrayNum == 0) {
                pFVar14 = (FFieldNetCache *)&DAT_00000001;
              }
              else {
                pFVar14 = (FFieldNetCache *)&DAT_00000001;
              }
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_128,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            if ((pFVar14 != (FFieldNetCache *)0x0) &&
               (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
          }
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (local_88,FieldHeaderPayloadBitsFail);
          UE::Net::AddToChainResultPtr
                    (&param_4->ExtendedError,(TNetResult<ENetCloseResult> *)local_88);
          local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_88._24_8_;
          if (local_60 != 0) {
            (**(code **)(local_60 + -0x10))(local_60 + -0x10);
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_88._24_8_;
          }
        }
      }
    }
    else {
      if (1 < (byte)LogRep._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&local_158,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_e8,FieldHeaderRepIndex);
      UE::Net::AddToChainResultPtr(&param_4->ExtendedError,(TNetResult<ENetCloseResult> *)local_e8);
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_e8._24_8_;
      if (local_c0 != 0) {
        (**(code **)(local_c0 + -0x10))(local_c0 + -0x10);
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_e8._24_8_;
      }
    }
LAB_147a6da25:
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (param_3 == (FNetFieldExportGroup *)0x0) {
      if (2 < (byte)LogNet._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&local_1c8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        goto LAB_147a6dbc9;
      }
    }
    else {
      (**(code **)(param_4->_padding_ + 0x198))(param_4);
      if ((param_4->_padding_ & 0x200) != 0) {
        if ((byte)LogNet._0_1_ < 2) {
          return false;
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&local_1b8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        goto LAB_147a6da25;
      }
      if ((param_3->NetFieldExports).ArrayNum < 1) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1840253650790771628>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x1454,
                           "NetFieldExportHandle < NetFieldExportGroup->NetFieldExports.Num()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (1 < (byte)LogRep._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_1a8,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          local_1c8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
LAB_147a6dbc9:
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pFVar2 = (param_3->NetFieldExports).AllocatorInstance.Data;
        uVar9 = *(uint *)(pFVar2 + 0x14);
        pFVar10 = pFVar14;
        if (uVar9 != 0) {
          for (; param_2 != (FClassNetCache *)0x0; param_2 = param_2->Super) {
            pFVar10 = pFVar14;
            if (*(int *)&(param_2->FieldChecksumMap).field_0x8 !=
                *(int *)&(param_2->FieldChecksumMap).field_0x34) {
              puVar3 = *(undefined1 **)&(param_2->FieldChecksumMap).field_0x40;
              puVar12 = &(param_2->FieldChecksumMap).field_0x38;
              if (puVar3 != (undefined1 *)0x0) {
                puVar12 = puVar3;
              }
              iVar8 = *(int *)(puVar12 +
                              (ulonglong)
                              (*(int *)&(param_2->FieldChecksumMap).field_0x48 - 1U & uVar9) * 4);
              if (iVar8 != -1) {
                do {
                  lVar1 = *(longlong *)&param_2->FieldChecksumMap + (longlong)iVar8 * 0x18;
                  if (*(uint *)(*(longlong *)&param_2->FieldChecksumMap + (longlong)iVar8 * 0x18) ==
                      uVar9) {
                    if ((lVar1 != 0) &&
                       (pFVar10 = *(FFieldNetCache **)(lVar1 + 8), pFVar10 != (FFieldNetCache *)0x0)
                       ) goto LAB_147a6dc54;
                    break;
                  }
                  iVar8 = *(int *)(lVar1 + 0x10);
                } while (iVar8 != -1);
              }
            }
          }
LAB_147a6dc54:
          *param_5 = pFVar10;
          if ((pFVar10 == (FFieldNetCache *)0x0) && (pFVar2[0x23] == (FScriptContainerElement)0x0))
          {
            if (2 < (byte)LogNet._0_1_) {
              ::FName::ToString((FName *)(pFVar2 + 0x18),&local_168);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_1,&local_178,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
            }
            pFVar2[0x23] = (FScriptContainerElement)0x1;
          }
          goto LAB_147a6decf;
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1840253650790771619>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x145d,"NetFieldExport.CompatibleChecksum != 0");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (1 < (byte)LogNet._0_1_) {
          ::FName::ToString((FName *)(pFVar2 + 0x18),&local_188);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_198,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          local_1c8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
            local_1c8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
          }
          goto LAB_147a6dbc9;
        }
      }
    }
    FArchiveState::SetError((FArchiveState *)param_4);
  }
  return false;
}

// ReadyForDormancy @ 147a6f250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::ReadyForDormancy(UActorChannel *this,bool param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  if ((this->_padding_ & 0x100) == 0) {
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_98,
               (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)&this->ReplicationMap);
    local_30 = 0;
    stack0xffffffffffffffa8 = local_98._16_16_;
    local_68 = (longlong *)local_98._0_8_;
    auStack_60._0_8_ = local_98._8_8_;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    uVar7 = local_98._24_8_ >> 0x20;
    local_38 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)&this->ReplicationMap;
    if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
      do {
        lVar2 = *(longlong *)((longlong)(int)uVar7 * 0x20 + 8 + *local_68);
        if ((*(longlong *)(lVar2 + 0x48) == 0) &&
           (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0xd8)), pUVar6 == (UObject *)0x0
           )) {
          if (5 < (byte)LogRep._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          }
        }
        else {
          if ((*(byte *)(lVar2 + 0xc) & 1) == 0) {
            if ((5 < (byte)LogRepTraffic._0_1_) && (!param_1)) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
            }
LAB_147a6f51e:
            if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
              uVar9 = *(int *)&(local_38->Elements).field_0x8 -
                      *(int *)&(local_38->Elements).field_0x34;
              if (uVar9 < 4) {
                iVar5 = 1;
              }
              else {
                uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
                lVar2 = 0x3f;
                if (uVar7 != 0) {
                  for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                  }
                }
                iVar5 = 1 << ((byte)lVar2 & 0x1f);
              }
              if (((0 < (int)uVar9) && (local_38->HashSize < iVar5)) || (iVar5 < local_38->HashSize)
                 ) {
                local_38->HashSize = iVar5;
                TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                ::Rehash(local_38);
              }
            }
            return false;
          }
          if ((*(longlong *)(lVar2 + 0x30) != 0) &&
             (pcVar3 = *(char **)(*(longlong *)(lVar2 + 0x30) + 8), pcVar3 != (char *)0x0)) {
            if ((*(int *)(pcVar3 + 4) != *(int *)(pcVar3 + 8)) ||
               (((0 < *(int *)(pcVar3 + 0xc) || (*pcVar3 == '\0')) || (0 < *(int *)(pcVar3 + 0x448))
                ))) goto LAB_147a6f51e;
            iVar5 = *(int *)(pcVar3 + 0x438);
            plVar8 = *(longlong **)(pcVar3 + 0x430);
            plVar1 = plVar8 + (longlong)iVar5 * 5;
            while( true ) {
              if (*(int *)(pcVar3 + 0x438) != iVar5) {
                `TCheckedPointerIterator<FPropertyRetirement,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res8);
              }
              if (plVar8 == plVar1) break;
              if (*plVar8 != 0) {
                if ((5 < (byte)LogRepTraffic._0_1_) && (!param_1)) {
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
                }
                goto LAB_147a6f51e;
              }
              plVar8 = plVar8 + 5;
            }
          }
        }
        uStack_50 = uStack_50 & ~auStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
        uVar7 = (ulonglong)uStack_4c;
      } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
      if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar5 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_38->HashSize < iVar5)) || (iVar5 < local_38->HashSize)) {
          local_38->HashSize = iVar5;
          TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_38);
        }
      }
    }
  }
  if (((DormancyHysteresis <= 0.0) || (lVar2 = this->_padding_, lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0x58) == 0)) {
    bVar4 = true;
  }
  else {
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x100;
    bVar4 = (double)DormancyHysteresis <=
            *(double *)(*(longlong *)(lVar2 + 0x58) + 800) - this->LastUpdateTime;
  }
  return bVar4;
}

// ReceivedBunch @ 147a71810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::ReceivedBunch(UActorChannel *this,FInBunch *param_1)

{
  int *piVar1;
  TArray<FInBunch_*,TSizedDefaultAllocator<32>_> *pTVar2;
  AActor *pAVar3;
  longlong *plVar4;
  FNetGUIDCache *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  FNetGuidCacheObject *this_00;
  UObject *pUVar13;
  FInBunch *this_01;
  FNetTraceCollector *pFVar14;
  UClass *pUVar15;
  ulonglong uVar16;
  TSharedRef<FQueuedBunchObjectReference,1> *pTVar17;
  byte bVar18;
  ForElementType<FNetTracePacketContentEvent> FVar19;
  FNetTraceCollector *pFVar20;
  ForAnyElementType FVar21;
  FNetworkGUID_u_0 *pFVar22;
  longlong lVar23;
  FNetTraceCollector *pFVar24;
  double dVar25;
  undefined1 local_res8 [8];
  ushort local_res18 [4];
  FLLMScope local_res20 [2];
  ForAnyElementType local_198;
  undefined8 local_190;
  uint local_188;
  FNetworkGUID_u_0 local_180;
  FNetTraceCollector *local_178;
  FNetTraceCollector *local_170;
  FString local_168;
  undefined1 local_158 [8];
  undefined1 local_150 [12];
  FName local_144;
  TObjectPtr<UChannel>_u_0 local_138;
  LARGE_INTEGER local_130;
  TObjectPtr<UChannel>_u_0 local_128;
  FMemScope local_120;
  FString local_118;
  FString local_108;
  TSharedRef<FQueuedBunchObjectReference,1> local_f8;
  void *local_e8 [2];
  FString local_d8;
  TSharedRef<FQueuedBunchObjectReference,1> local_c8;
  FIsOwnerOrPawnHelper local_b8;
  undefined1 local_98 [40];
  longlong local_70;
  undefined1 local_68 [40];
  longlong local_40;
  
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_NetChannel.UniqueName,false,None,Default,true);
  local_150._4_4_ = LLMTagDeclaration_NetChannel.UniqueName.ComparisonIndex.Value;
  local_150._8_4_ = LLMTagDeclaration_NetChannel.UniqueName.Number;
  FMemScope::FMemScope(&local_120,(FName *)(local_150 + 4),true);
  if (((this->_padding_ & 2) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Closing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0xc0c,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->_padding_ & 0x60) != 0) goto LAB_147a719d6;
  pFVar14 = (FNetTraceCollector *)0x0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  cVar10 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
  bVar18 = param_1->bHasMustBeMappedGUIDs;
  if (cVar10 == '\0') {
    if (bVar18 != 0) {
      local_188 = 0xffffffff;
      pFVar20 = pFVar14;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar20 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
      }
      local_170 = pFVar20;
      if (pFVar20 != (FNetTraceCollector *)0x0) {
        local_188 = FNetTrace::BeginPacketContentEvent(pFVar20,NameId,(uint)param_1->_padding_);
        uVar16 = (ulonglong)local_188;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          MustBeMappedGUIDs = UE::Net::CreatePersistentNetDebugName(L"MustBeMappedGUIDs",0x11);
          _Init_thread_footer(&::_TSS0);
        }
        uVar11 = FNetTrace::TraceName(MustBeMappedGUIDs);
        FVar19 = (pFVar20->Events).AllocatorInstance.SecondaryData;
        if (FVar19 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar19 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
        }
        *(uint *)((longlong)FVar19 + uVar16 * 0x10) = uVar11;
      }
      plVar4 = (longlong *)param_1->_padding_;
      local_res18[0] = 0;
      if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(ushort *)*plVar4;
        *plVar4 = *plVar4 + 2;
      }
      if (local_190._4_4_ < (int)(uint)local_res18[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(uint)local_res18[0],&local_198,(int)local_190,
                   (int *)((longlong)&local_190 + 4));
      }
      pFVar5 = *(FNetGUIDCache **)(*(longlong *)(this->_padding_ + 0x58) + 0x1c8);
      FNetGUIDCache::FIsOwnerOrPawnHelper::FIsOwnerOrPawnHelper
                (&local_b8,pFVar5,*(AActor **)(this->_padding_ + 0x98),
                 (this->Actor).field0_0x0.DebugPtr);
      pFVar24 = pFVar14;
      if (local_res18[0] != 0) {
        do {
          local_180.ObjectId = 0;
          (**(code **)(param_1->_padding_ + 0x1a8))(param_1,&local_180);
          bVar9 = FNetGUIDCache::ShouldAsyncLoad(pFVar5);
          if (bVar9) {
            this_00 = FNetGUIDCache::GetCacheObject(pFVar5,(FNetworkGUID *)&local_180);
            if (this_00 == (FNetGuidCacheObject *)0x0) {
              if (2 < (byte)LogNet._0_1_) {
                FInBunch::ToString(param_1,&local_d8);
                (**(code **)(this->_padding_ + 0x2d0))(this,local_e8);
                ::FString::PrintfImpl(&local_118,L"%llu");
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                if (local_e8[0] != (void *)0x0) {
                  FMemory::Free(local_e8[0]);
                }
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                }
              }
              FArchiveState::SetError((FArchiveState *)param_1);
              UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                        (local_68,UnregisteredMustBeMappedGUID);
              UE::Net::AddToChainResultPtr
                        ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                         (TNetResult<ENetCloseResult> *)local_68);
              if (local_40 != 0) {
                (**(code **)(local_40 + -0x10))(local_40 + -0x10);
              }
              if ((void *)local_68._24_8_ != (void *)0x0) {
                FMemory::Free((void *)local_68._24_8_);
              }
              FNetGUIDCache::FIsOwnerOrPawnHelper::~FIsOwnerOrPawnHelper(&local_b8);
              if (local_188 != 0xffffffff) {
                FNetTrace::EndPacketContentEvent(local_170,local_188,(uint)param_1->_padding_);
              }
              goto LAB_147a719a7;
            }
            pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            if (pUVar13 == (UObject *)0x0) {
              TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
              Emplace<FNetworkGUID_const_&>
                        (&this->PendingGuidResolves,(FNetworkGUID *)local_158,(bool *)&local_180);
              lVar6 = this->_padding_;
              local_138 = (TObjectPtr<UChannel>_u_0)this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<TObjectPtr<UChannel>_>
                        ((TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_> *)
                         (lVar6 + 0x1850),(TObjectPtr<UChannel> *)&local_138.ObjectPtr);
              pTVar17 = FNetGUIDCache::TrackQueuedBunchObjectReference
                                  (pFVar5,&local_f8,(FNetworkGUID)local_180,(UObject *)0x0);
              TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
              ::Emplace<TSharedRef<FQueuedBunchObjectReference,1>_>
                        (&this->QueuedBunchObjectReferences,
                         (TSharedRef<FQueuedBunchObjectReference,1> *)(local_158 + 4),
                         (bool *)pTVar17);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8.SharedReferenceCount.ReferenceController);
            }
            else {
              iVar12 = (int)local_190;
              if ((int)local_190 == local_190._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_198,(int *)((longlong)&local_190 + 4));
              }
              local_190 = CONCAT44(local_190._4_4_,iVar12 + 1);
              *(FNetworkGUID_u_0 *)(local_198.Data + (longlong)iVar12 * 0x10) = local_180;
              *(UObject **)(local_198.Data + (longlong)iVar12 * 0x10 + 8) = pUVar13;
            }
          }
          uVar11 = (int)pFVar24 + 1;
          pFVar24 = (FNetTraceCollector *)(ulonglong)uVar11;
          pFVar20 = local_170;
        } while ((int)uVar11 < (int)(uint)local_res18[0]);
      }
      FNetGUIDCache::FIsOwnerOrPawnHelper::~FIsOwnerOrPawnHelper(&local_b8);
      if (local_188 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar20,local_188,(uint)param_1->_padding_);
      }
    }
    if (((this->Actor).field0_0x0.DebugPtr == (AActor *)0x0) && (param_1->bOpen != 0)) {
      lVar6 = param_1->_padding_;
      (**(code **)(param_1->_padding_ + 0x1a8))(param_1,&this->ActorNetGUID);
      param_1->_padding_ = lVar6;
      plVar4 = (longlong *)this->_padding_;
      if ((*(byte *)((longlong)plVar4 + 0xfc) & 1) != 0) {
        (**(code **)(*plVar4 + 0x3e0))(plVar4,this);
      }
    }
    if ((*(int *)&(this->PendingGuidResolves).Elements.field_0x8 -
         *(int *)&(this->PendingGuidResolves).Elements.field_0x34 < 1) &&
       ((this->QueuedBunches).ArrayNum < 1)) {
      lVar6 = this->_padding_;
      uVar16 = (this->ActorNetGUID).field0_0x0.ObjectId;
      if (*(int *)(lVar6 + 0x1600) != *(int *)(lVar6 + 0x162c)) {
        lVar23 = *(longlong *)(lVar6 + 0x1638);
        if (*(longlong *)(lVar6 + 0x1638) == 0) {
          lVar23 = lVar6 + 0x1630;
        }
        iVar12 = *(int *)(lVar23 + ((uVar16 >> 0x20) * 0x17 + uVar16 &
                                   (ulonglong)(*(int *)(lVar6 + 0x1640) - 1)) * 4);
        if (iVar12 != -1) {
          do {
            if (*(ulonglong *)((longlong)iVar12 * 0x20 + *(longlong *)(lVar6 + 0x15f8)) == uVar16)
            goto LAB_147a71ed6;
            iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)(lVar6 + 0x15f8));
          } while (iVar12 != -1);
        }
      }
      cVar10 = (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x438))
                         (*(longlong **)(lVar6 + 0x58),uVar16);
      if ((cVar10 == '\0') &&
         (bVar9 = UNetDriver::HasExceededIncomingBunchFrameProcessingTime
                            (*(UNetDriver **)(this->_padding_ + 0x58)), !bVar9)) goto LAB_147a71d96;
    }
LAB_147a71ed6:
    lVar6 = this->_padding_;
    uVar16 = (this->ActorNetGUID).field0_0x0.ObjectId;
    if (*(int *)(lVar6 + 0x1600) != *(int *)(lVar6 + 0x162c)) {
      lVar23 = *(longlong *)(lVar6 + 0x1638);
      if (*(longlong *)(lVar6 + 0x1638) == 0) {
        lVar23 = lVar6 + 0x1630;
      }
      iVar12 = *(int *)(lVar23 + ((uVar16 >> 0x20) * 0x17 + uVar16 &
                                 (ulonglong)(*(int *)(lVar6 + 0x1640) - 1)) * 4);
      if (iVar12 != -1) {
        do {
          if (*(ulonglong *)((longlong)iVar12 * 0x20 + *(longlong *)(lVar6 + 0x15f8)) == uVar16) {
            if (5 < (byte)LogNet._0_1_) {
              ::FString::PrintfImpl(&local_108,L"%llu");
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
            }
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)(lVar6 + 0x15f8));
        } while (iVar12 != -1);
      }
    }
    if ((this->QueuedBunches).ArrayNum == 0) {
      QueryPerformanceCounter(&local_130);
      dVar25 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      this->bSuppressQueuedBunchWarningsDueToHitches = 0;
      this->QueuedBunchStartTime = dVar25 + __real_4170000000000000;
    }
    pTVar2 = &this->QueuedBunches;
    this_01 = ::operator_new(0xf0);
    if (this_01 != (FInBunch *)0x0) {
      pFVar14 = (FNetTraceCollector *)FInBunch::FInBunch(this_01,param_1);
    }
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    local_178 = pFVar14;
    if (((pFVar7 <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         pFVar7 + (longlong)(this->QueuedBunches).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (this->QueuedBunches).ArrayNum;
    piVar1 = &(this->QueuedBunches).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->QueuedBunches).ArrayNum = iVar12 + 1;
    *(FNetTraceCollector **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_178;
    lVar6 = this->_padding_;
    local_128 = (TObjectPtr<UChannel>_u_0)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UChannel>_>
              ((TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x1850),
               (TObjectPtr<UChannel> *)&local_128.ObjectPtr);
    lVar6 = this->_padding_;
    if (*(longlong *)(lVar6 + 0x68) != 0) {
      pUVar15 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)(lVar6 + 0x68),pUVar15);
      if ((bVar9) && (plVar4 = *(longlong **)(lVar6 + 0x68), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x360))(plVar4,&this->ActorNetGUID,1);
      }
    }
    pFVar5 = *(FNetGUIDCache **)(*(longlong *)(this->_padding_ + 0x58) + 0x1c8);
    if (pFVar5 != (FNetGUIDCache *)0x0) {
      iVar12 = (int)local_190;
      uVar16 = (ulonglong)(int)local_190;
      pFVar22 = (FNetworkGUID_u_0 *)(local_198.Data + uVar16 * 0x10);
      FVar21.Data = local_198.Data;
      while( true ) {
        if ((int)uVar16 != iVar12) {
          `TCheckedPointerIterator<TTuple<FNetworkGUID,UObject_*>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if ((FNetworkGUID_u_0 *)FVar21.Data == pFVar22) break;
        pTVar17 = FNetGUIDCache::TrackQueuedBunchObjectReference
                            (pFVar5,&local_c8,(FNetworkGUID)*(FNetworkGUID_u_0 *)FVar21.Data,
                             (UObject *)*(FNetworkGUID_u_0 *)((longlong)FVar21.Data + 8));
        TSet<TSharedRef<FQueuedBunchObjectReference,1>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,1>,0>,FDefaultSetAllocator>
        ::Emplace<TSharedRef<FQueuedBunchObjectReference,1>_>
                  (&this->QueuedBunchObjectReferences,
                   (TSharedRef<FQueuedBunchObjectReference,1> *)local_150,(bool *)pTVar17);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        uVar16 = local_190 & 0xffffffff;
        FVar21.Data = FVar21.Data + 0x10;
      }
    }
  }
  else if (bVar18 == 0) {
LAB_147a71d96:
    ProcessBunchInternal(this,param_1);
  }
  else {
    if (1 < (byte)LogNetTraffic._0_1_) {
      pAVar3 = (this->Actor).field0_0x0.DebugPtr;
      if (pAVar3 == (AActor *)0x0) {
        ::FString::FString(&local_168,L"None");
      }
      else {
        local_144 = (FName)pAVar3->_padding_;
        ::FName::ToString(&local_144,&local_168);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_98,ClientHasMustBeMappedGUIDs);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_98);
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
    }
    if ((void *)local_98._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._24_8_);
    }
  }
LAB_147a719a7:
  if ((FNetworkGUID_u_0 *)local_198.Data != (FNetworkGUID_u_0 *)0x0) {
    FMemory::Free(local_198.Data);
  }
LAB_147a719d6:
  FMemScope::~FMemScope(&local_120);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// ReceivedNak @ 147a745a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::ReceivedNak(UActorChannel *this,int param_1)

{
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar1;
  uint *puVar2;
  FOutBunch *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FNetTraceCollector *pFVar9;
  FNetTraceCollector *pFVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  FNetTraceCollector *pFVar14;
  int iVar15;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  pFVar14 = (FNetTraceCollector *)0x0;
  iVar15 = 1;
  for (pFVar3 = (FOutBunch *)this->_padding_; pFVar3 != (FOutBunch *)0x0; pFVar3 = pFVar3->Next) {
    if ((pFVar3->PacketId == param_1) && (pFVar3->ReceivedAck == 0)) {
      if ((pFVar3->bReliable == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Out->bReliable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                             ,0x677,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (4 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      if (((UNetConnection *)this->_padding_)->OutTraceCollector == (FNetTraceCollector *)0x0) {
        UNetConnection::SendRawBunch
                  ((UNetConnection *)this->_padding_,pFVar3,false,(FNetTraceCollector *)0x0);
      }
      else if (GNetTraceRuntimeVerbosity != 0) {
        pFVar9 = pFVar14;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar9 = FNetTrace::CreateTraceCollector();
        }
        if (pFVar9 != (FNetTraceCollector *)0x0) {
          pFVar10 = pFVar14;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar10 = pFVar9;
          }
          if (pFVar10 != (FNetTraceCollector *)0x0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              NetTraceNameId_1666 = UE::Net::CreatePersistentNetDebugName(L"ResendBunch",0xb);
              _Init_thread_footer(&::_TSS0);
            }
            lVar5 = pFVar3->_padding_;
            uVar7 = FNetTrace::TraceName(NetTraceNameId_1666);
            FNetTrace::TracePacketContentEvent(pFVar9,uVar7,0,(uint)lVar5,1);
          }
          UNetConnection::SendRawBunch((UNetConnection *)this->_padding_,pFVar3,false,pFVar9);
          FNetTrace::DestroyTraceCollector(pFVar9);
        }
      }
    }
  }
  pTVar1 = &this->ReplicationMap;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar12 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      FObjectReplicator::ReceivedNak
                (*(FObjectReplicator **)((longlong)(int)uVar12 * 0x20 + 8 + *local_68),param_1);
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar12 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (3 < uVar7) {
        uVar12 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_38->HashSize < iVar15)) || (iVar15 < local_38->HashSize)) {
        local_38->HashSize = iVar15;
        TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  uVar7 = param_1 & 0x8000003f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
  }
  if (*(int *)&(this->SubobjectNakMap).field_0x8 != *(int *)&(this->SubobjectNakMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SubobjectNakMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SubobjectNakMap).field_0x38;
    }
    iVar15 = *(int *)(puVar13 +
                     (ulonglong)(*(int *)&(this->SubobjectNakMap).field_0x48 - 1U & uVar7) * 4);
    if (iVar15 != -1) {
      do {
        lVar5 = *(longlong *)&this->SubobjectNakMap + (longlong)iVar15 * 0x28;
        if (*(uint *)(*(longlong *)&this->SubobjectNakMap + (longlong)iVar15 * 0x28) == uVar7) {
          pFVar9 = (FNetTraceCollector *)(lVar5 + 8);
          if (lVar5 == 0) {
            pFVar9 = pFVar14;
          }
          if (pFVar9 == (FNetTraceCollector *)0x0) {
            return;
          }
          if (pFVar9->NestingStack[0] != param_1) {
            return;
          }
          if (5 < (byte)LogNetTraffic._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          }
          while( true ) {
            uVar7 = (uint)pFVar14;
            if ((int)uVar7 < 0) {
              return;
            }
            if ((int)pFVar9->NestingStack[4] <= (int)uVar7) break;
            if (((int)uVar7 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar2 = (uint *)(*(longlong *)(pFVar9->NestingStack + 2) + (longlong)(int)uVar7 * 4);
            piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::FindOrAddImpl<int_const_&>
                                ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  *)&this->SubobjectRepKeyMap,*puVar2,(int *)puVar2);
            *piVar11 = -1;
            if (5 < (byte)LogNetTraffic._0_1_) {
              uVar8 = 0;
              if ((int)uVar7 < (int)pFVar9->NestingStack[4]) {
                uVar8 = ~uVar7 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            }
            pFVar14 = (FNetTraceCollector *)(ulonglong)(uVar7 + 1);
          }
          return;
        }
        iVar15 = *(int *)(lVar5 + 0x20);
      } while (iVar15 != -1);
    }
  }
  return;
}

// ReleaseReferences @ 147a792d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::ReleaseReferences(UActorChannel *this,bool param_1)

{
  int *piVar1;
  
  CleanupReplicators(this,param_1);
  piVar1 = &(this->CreateSubObjects).ArrayMax;
  (this->CreateSubObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CreateSubObjects).AllocatorInstance,0,piVar1);
  }
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  return;
}

// ReplicateActor @ 147a7f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

long64 __thiscall UActorChannel::ReplicateActor(UActorChannel *this)

{
  TObjectPtr<AActor> *pTVar1;
  int *piVar2;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar3;
  TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>_>
  *this_00;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  AActor *pAVar6;
  longlong *plVar7;
  FRepState *pFVar8;
  FSendingRepState *pFVar9;
  FRepChangedPropertyTracker *pFVar10;
  ulong64 uVar11;
  UNetConnection *pUVar12;
  UNetworkMetricsDatabase *pUVar13;
  undefined1 *puVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  double dVar19;
  TConsoleVariableData<int> *pTVar20;
  bool bVar21;
  byte bVar22;
  char cVar23;
  bool bVar24;
  uint uVar25;
  FReplicationFlags_u_0 FVar26;
  uint uVar27;
  int iVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_NetReplicateActorTime> FVar30;
  long64 lVar31;
  UClass *pUVar32;
  UWorld *this_01;
  FUObjectItem *pFVar33;
  AWorldSettings *pAVar34;
  UClass *pUVar35;
  FNetTraceCollector *pFVar36;
  UObject *pUVar37;
  UObjectBaseUtility *this_02;
  FNetTraceCollector *pFVar38;
  FRepLayout *pFVar39;
  uint *puVar40;
  FTlsAutoCleanup *pFVar41;
  undefined8 uVar42;
  ulonglong uVar43;
  ForElementType<FNetTracePacketContentEvent> FVar44;
  undefined ***pppuVar45;
  undefined1 *puVar46;
  FNameEntryId FVar47;
  FScriptContainerElement *pFVar48;
  ForAnyElementType *pFVar49;
  FName FVar50;
  int iVar51;
  uint uVar52;
  longlong lVar53;
  undefined1 auStackY_588 [32];
  byte local_528;
  FReplicationFlags_u_0 local_524;
  byte local_520;
  char local_51f;
  undefined1 local_51e;
  byte local_51d;
  uint local_51c;
  undefined1 local_518 [8];
  FPacketIdRange local_510;
  FMemMark local_508;
  FLLMScope local_4e0;
  FLLMScope local_4dc;
  FColor_u_0 local_4d8;
  uint local_4d4;
  int local_4d0 [2];
  FName local_4c8;
  byte local_4c0;
  FString local_4b8;
  FString local_4a8;
  FName local_498;
  UWorld *local_490;
  FScopedRepContext local_488;
  FName local_480;
  FString local_470;
  FString local_460;
  LARGE_INTEGER local_450;
  LARGE_INTEGER local_448;
  LARGE_INTEGER local_440;
  uint *local_438;
  FName local_430;
  FName local_428;
  FString *local_420;
  LARGE_INTEGER local_418;
  FMemScope local_410;
  undefined4 local_408;
  FMemScope local_400;
  FName local_3f8;
  UActorChannel *local_3f0;
  LARGE_INTEGER local_3e8;
  FString *local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  undefined8 local_3a8;
  FSharedReferencer<1> FStack_3a0;
  FName local_398 [2];
  longlong *local_388;
  undefined1 auStack_380 [16];
  uint uStack_370;
  uint uStack_36c;
  longlong local_368;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_360;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_358;
  undefined2 local_350;
  undefined1 local_348 [12];
  uint uStack_33c;
  undefined1 local_338 [16];
  longlong local_328;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_320;
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *local_318;
  undefined2 local_310;
  code *local_308;
  undefined1 *local_300;
  void *local_2f8 [2];
  void *local_2e8 [2];
  FScriptContainerElement *local_2d8 [2];
  void *local_2c8 [2];
  void *local_2b8 [2];
  FName local_2a8;
  undefined1 local_2a0 [8];
  undefined1 local_298 [32];
  longlong local_278;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_270;
  undefined1 local_268 [32];
  longlong local_248;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_240;
  FNetTokenExportScope local_238;
  code *local_208;
  undefined **local_1f8;
  UActorChannel *pUStack_1f0;
  byte *local_1e8;
  undefined ***local_1e0;
  FOutBunch local_1d8;
  undefined **local_78;
  UActorChannel *pUStack_70;
  byte *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_588;
  FLLMScope::FLLMScope(&local_4dc,LLMTagDeclaration_NetChannel.UniqueName,false,None,Default,true);
  local_3f8 = LLMTagDeclaration_NetChannel.UniqueName;
  FMemScope::FMemScope(&local_410,&local_3f8,true);
  FVar30 = StatPtr_STAT_NetReplicateActorTime;
  if (StatPtr_STAT_NetReplicateActorTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateActorTime>)0x0) {
    pFVar29 = ::FName::FName(&local_2a8,"STAT_NetReplicateActorTime");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateActorTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateActorTime,*pFVar29,
                        L"Replicate Actor Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar30;
  bVar22 = 0;
  local_480.ComparisonIndex.Value = 0;
  local_480.Number = 0;
  local_520 = 0;
  FVar47 = FVar5.ComparisonIndex.Value;
  uVar52 = FVar5.Number;
  if ((FVar47.Value != 0) || (FVar50 = local_480, uVar52 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4d8._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar22 = 1;
      local_520 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_498.ComparisonIndex.Value = FVar47.Value;
        local_498.Number = uVar52;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_498,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                   ,0xdf6);
        bVar22 = 3;
        local_520 = 3;
      }
    }
    FVar50 = local_480;
    if (FThreadStats::bPrimaryEnable != false) {
      local_510.First = FVar47.Value;
      local_510.Last = uVar52;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_520 = bVar22 | 4;
      FVar50 = FVar5;
    }
  }
  if (((this->Actor).field0_0x0.DebugPtr == (AActor *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Actor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xdf8,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    lVar31 = (*pcVar15)();
    return lVar31;
  }
  if (((this->_padding_ & 2) != 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Closing",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xdf9,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    lVar31 = (*pcVar15)();
    return lVar31;
  }
  if ((this->_padding_ == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xdfa,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    lVar31 = (*pcVar15)();
    return lVar31;
  }
  lVar53 = this->_padding_;
  if (*(longlong *)(lVar53 + 0x68) == 0) {
LAB_147a7f7b8:
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("nullptr != Cast<UPackageMapClient>(Connection->PackageMap)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                        ,0xdfb,L"");
    if (bVar21) {
      pcVar15 = (code *)swi(3);
      lVar31 = (*pcVar15)();
      return lVar31;
    }
  }
  else {
    pUVar32 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar21 = FObjectPtr::IsA((FObjectPtr *)(lVar53 + 0x68),pUVar32);
    if ((!bVar21) || (*(longlong *)(lVar53 + 0x68) == 0)) goto LAB_147a7f7b8;
  }
  this_01 = AActor::GetWorld((this->Actor).field0_0x0.DebugPtr);
  local_490 = this_01;
  if (this_01 == (UWorld *)0x0) {
    local_3f0 = this;
    `UActorChannel::ReplicateActor'::__l2::<lambda_1>::operator()(&local_3f0);
    lVar53 = 0;
    goto LAB_147a8104b;
  }
  pUVar32 = GetParentNativeClass((UClass *)((this->Actor).field0_0x0.DebugPtr)->_padding_);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_4c8,(UObjectBaseUtility *)pUVar32);
  dVar19 = __real_4170000000000000;
  uVar52 = *(uint *)(this->_padding_ + 0xfc);
  uVar25 = uVar52 >> 1;
  bVar22 = (byte)uVar25;
  local_51c = CONCAT31((uint3)(uVar52 >> 9),bVar22) & 0xffffff01;
  if (((uVar25 & 1) == 0) && (GReplicateActorTimingEnabled != false)) {
    QueryPerformanceCounter(&local_3e8);
    local_51f = '\x01';
    dVar16 = (double)local_3e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar19;
LAB_147a7f890:
    GNumReplicateActorCalls = GNumReplicateActorCalls + 1;
    dVar17 = dVar16;
  }
  else {
    local_51f = '\0';
    dVar17 = 0.0;
    dVar16 = 0.0;
    if ((bVar22 & 1 & (byte)local_51c) == 0) goto LAB_147a7f890;
  }
  if (((this->_padding_ & 0x100) == 0) || (*(char *)(this->_padding_ + 0x17c8) != '\0')) {
    if (this->bIsReplicatingActor == 0) {
      if ((char)(this->bActorIsPendingKill << 7) < '\0') goto LAB_147a7f95f;
      pAVar6 = (this->Actor).field0_0x0.DebugPtr;
      if ((pAVar6 == (AActor *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Test",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                              ,0x760,L""), bVar21)) {
        pcVar15 = (code *)swi(3);
        lVar31 = (*pcVar15)();
        return lVar31;
      }
      if ((((uint)pAVar6->_padding_ >> 0x1e & 1) == 0) &&
         (pFVar33 = FUObjectArray::IndexToObject
                              (&GUObjectArray,
                               *(int *)((longlong)&((this->Actor).field0_0x0.DebugPtr)->_padding_ +
                                       4)),
         ((uint)((ulonglong)(pFVar33->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        uVar52 = (uint)this->_padding_;
        if ((uVar52 >> 9 & 1) == 0) {
LAB_147a7fa2e:
          if ((UE::Net::bNetReplicateOnlyBeginPlay == false) ||
             (((pAVar6 = (this->Actor).field0_0x0.DebugPtr, pAVar6 != (AActor *)0x0 &&
               (((pAVar6->field_0x5d & 0x18) - 8 & 0xf7) == 0)) ||
              (this->bIsForcedSerializeFromRPC != 0)))) {
            pAVar34 = UWorld::GetWorldSettings(this_01,false,true);
            bVar18 = false;
            bVar21 = false;
            if ((int)this->_padding_ != -1) {
              iVar51 = (pAVar34->ReplicationViewers).ArrayNum;
              bVar21 = false;
              if (0 < iVar51) {
                pFVar48 = (pAVar34->ReplicationViewers).AllocatorInstance.Data;
                bVar24 = true;
                pFVar4 = pFVar48 + (longlong)iVar51 * 0x48;
                while( true ) {
                  if ((pAVar34->ReplicationViewers).ArrayNum != iVar51) {
                    local_51e = 0;
                    `TCheckedPointerIterator<FNetViewer_const_,int,0>::operator!='::__l2::<lambda_1>
                    ::operator()(&local_51e);
                  }
                  if (pFVar48 == pFVar4) goto LAB_147a7fb2a;
                  pAVar6 = (this->Actor).field0_0x0.DebugPtr;
                  cVar23 = (**(code **)(pAVar6->_padding_ + 0x2e8))(pAVar6,pFVar48);
                  if (cVar23 == '\0') break;
                  pFVar48 = pFVar48 + 0x48;
                }
                bVar24 = false;
LAB_147a7fb2a:
                cVar23 = (**(code **)(this->_padding_ + 0x358))(this);
                if (cVar23 == '\0') {
                  bVar21 = false;
                  if (bVar24 == false) goto LAB_147a7fb45;
                  bVar18 = true;
                }
                else {
                  if (bVar24) goto LAB_147a80fd4;
                  bVar21 = true;
LAB_147a7fb45:
                  bVar18 = false;
                }
                (**(code **)(this->_padding_ + 0x350))(this,bVar24);
                this_01 = local_490;
              }
            }
            FVar26.Value = 2;
            if ((*(int *)(*(longlong *)(this->_padding_ + 0x68) + 0x328) != 0) &&
               (2 < (byte)LogNet._0_1_)) {
              (**(code **)(this->_padding_ + 0x2d0))(this,local_2c8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_2c8[0] != (void *)0x0) {
                FMemory::Free(local_2c8[0]);
              }
            }
            if ((bVar21) || (local_528 = 0, bVar18)) {
              local_528 = 1;
            }
            FOutBunch::FOutBunch(&local_1d8,(UChannel *)this,false);
            UE::Net::FNetTokenExportScope::FNetTokenExportScope
                      (&local_238,(FNetBitWriter *)&local_1d8,
                       *(FNetTokenStore **)(*(longlong *)(this->_padding_ + 0x58) + 0x9a8),
                       &local_1d8.NetTokensPendingExport,"ReplicateActor");
            if ((local_1d8._padding_._1_1_ & 2) == 0) {
              pUVar32 = Z_Construct_UClass_UNetworkSubsystem_NoRegister();
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
                if (pUVar32 != (UClass *)0x0) goto LAB_147a7fc72;
LAB_147a7fca5:
                pUVar32 = (UClass *)0x0;
              }
              else {
                if (pUVar32 == (UClass *)0x0) goto LAB_147a7fca5;
                UE::GC::MarkAsReachable((UObject *)pUVar32);
LAB_147a7fc72:
                pUVar35 = Z_Construct_UClass_UNetworkSubsystem_NoRegister();
                if (pUVar35 == (UClass *)0x0) goto LAB_147a7fca5;
                iVar51 = (int)pUVar35->_padding_;
                if (((int)pUVar32->_padding_ < iVar51) ||
                   ((longlong *)*(undefined1 **)(pUVar32->_padding_ + (longlong)iVar51 * 8) !=
                    &pUVar35->_padding_)) {
                  bVar21 = false;
                }
                else {
                  bVar21 = true;
                }
                if (!bVar21) goto LAB_147a7fca5;
              }
              pFVar38 = (FNetTraceCollector *)0x0;
              DataChannelInternal::CachedNetworkSubsystem =
                   (UNetworkSubsystem *)
                   FSubsystemCollectionBase::GetSubsystemInternal
                             ((FSubsystemCollectionBase *)&this_01->SubsystemCollection,pUVar32);
              if ((DataChannelInternal::CachedNetworkSubsystem == (UNetworkSubsystem *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DataChannelInternal::CachedNetworkSubsystem",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                                      ,0xe7b,L""), bVar21)) {
                pcVar15 = (code *)swi(3);
                lVar31 = (*pcVar15)();
                return lVar31;
              }
              local_1d8._padding_ = (longlong)pFVar38;
              if ((GNetTraceRuntimeVerbosity != 0) && (GNetTraceRuntimeVerbosity != 0)) {
                local_1d8._padding_ = (longlong)FNetTrace::CreateTraceCollector();
              }
              pTVar20 = CVarNetReliableDebug.Ref;
              if (bVar18) {
                local_1d8._252_1_ = local_1d8._252_1_ | 0x18;
              }
              bVar21 = IsInParallelGameThread();
              if (bVar21) {
LAB_147a7fd37:
                pFVar36 = pFVar38;
              }
              else {
                bVar21 = IsInGameThread();
                pFVar36 = (FNetTraceCollector *)&DAT_00000004;
                if (bVar21) goto LAB_147a7fd37;
              }
              if (0 < *(int *)((longlong)pTVar20->ShadowedValue + (longlong)pFVar36)) {
                local_428 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
                ::FName::ToString(&local_428,&local_3d8);
                ::FString::PrintfImpl(&local_4b8,L"%.2f ActorBunch: %s");
                if (local_1d8.DebugString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.DebugString.Data.AllocatorInstance.Data);
                }
                local_1d8.DebugString.Data.AllocatorInstance.Data =
                     local_4b8.Data.AllocatorInstance.Data;
                local_1d8.DebugString.Data.ArrayNum = local_4b8.Data.ArrayNum;
                local_1d8.DebugString.Data.ArrayMax = local_4b8.Data.ArrayMax;
                local_4b8.Data.ArrayNum = 0;
                local_4b8.Data.ArrayMax = 0;
                local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
                }
              }
              pAVar6 = (this->Actor).field0_0x0.DebugPtr;
              local_51d = this->bIsReplicatingActor;
              this->bIsReplicatingActor = 1;
              local_78 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`UActorChannel::ReplicateActor'::`2'::<lambda_5>,0,0>
                          ::_vftable_;
              local_1e8 = &local_51d;
              local_208 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UActorChannel::ReplicateActor'::__l2::<lambda_5>,void>
                          ::Call;
              local_1e0 = (undefined ***)0x0;
              local_1f8 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UActorChannel::ReplicateActor'::`2'::<lambda_5>,0,0>
                           ::_vftable_;
              pUStack_1f0 = this;
              pUStack_70 = this;
              local_68 = local_1e8;
              FScopedRepContext::FScopedRepContext
                        (&local_488,(UNetConnection *)this->_padding_,pAVar6);
              local_524.Value = 0;
              if (((int)this->_padding_ == -1) || (*(char *)(this->_padding_ + 0x17c8) != '\0')) {
                if (*(char *)(this->_padding_ + 0x17c8) == '\x02') {
                  FVar26.Value = ~((uint)this->_padding_ >> 0xc) & 2;
                }
                local_1d8._252_1_ =
                     (((this->Actor).field0_0x0.DebugPtr)->bNetTemporary | 4) << 2 |
                     local_1d8._252_1_ & 0xfb;
                local_524 = FVar26;
              }
              else if ((ZPULL(*(undefined4 *)&this->field_0x90,0,1) == 0) &&
                      ((this->_padding_ & 1) != 0)) {
                pTVar3 = &this->ReplicationMap;
                *(uint *)&this->field_0x90 = *(undefined4 *)&this->field_0x90 | 1;
                TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                ::TIterator::TIterator
                          ((TIterator *)local_298,
                           (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                            *)pTVar3);
                local_310._0_1_ = false;
                local_310._1_1_ = false;
                local_338 = local_298._16_16_;
                local_348._0_8_ = local_298._0_8_;
                stack0xfffffffffffffcc0 = local_298._8_8_;
                local_328 = local_278;
                pTStack_320 = pTStack_270;
                uVar43 = local_298._24_8_ >> 0x20;
                local_318 = pTVar3;
                if (local_298._28_4_ < *(int *)(local_298._16_8_ + 0x18)) {
                  do {
                    lVar53 = *(longlong *)
                              ((longlong)(int)uVar43 * 0x20 + 8 + *(longlong *)local_348._0_8_);
                    if ((*(longlong *)(lVar53 + 0x48) == 0) &&
                       (pUVar37 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar53 + 0xd8)),
                       pUVar37 == (UObject *)0x0)) {
                      if (5 < (byte)LogRep._0_1_) {
                        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep)
                        ;
                      }
                    }
                    else {
                      if (((*(byte *)(lVar53 + 0xc) & 2) != 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("!bOpenAckCalled",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                              ,0x851,L""), bVar21)) {
                        pcVar15 = (code *)swi(3);
                        lVar31 = (*pcVar15)();
                        return lVar31;
                      }
                      puVar14 = *(undefined1 **)(*(longlong *)(lVar53 + 0x30) + 8);
                      if (puVar14 != (undefined1 *)0x0) {
                        *puVar14 = 1;
                      }
                      *(uint *)(lVar53 + 0xc) = *(uint *)(lVar53 + 0xc) | 2;
                    }
                    local_338._8_4_ = local_338._8_4_ & ~uStack_33c;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_348 + 8));
                    uVar43 = (ulonglong)(uint)local_338._12_4_;
                  } while ((int)local_338._12_4_ < *(int *)(local_338._0_8_ + 0x18));
                }
                TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                ::TIterator::~TIterator((TIterator *)local_348);
              }
              this_02 = (UObjectBaseUtility *)
                        (**(code **)(((this->Actor).field0_0x0.DebugPtr)->_padding_ + 0x570))();
              if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
                bVar21 = this_02 == (UObjectBaseUtility *)0x0;
              }
              else {
                bVar21 = (UObjectBaseUtility *)this->_padding_ == this_02;
              }
              iVar51 = 1;
              if (bVar21) {
LAB_147a80081:
                uVar52 = 1;
              }
              else {
                if (this_02 != (UObjectBaseUtility *)0x0) {
                  pUVar32 = Z_Construct_UClass_UChildConnection_NoRegister();
                  bVar21 = UObjectBaseUtility::IsA<UClass_*>(this_02,pUVar32);
                  if ((bVar21) && (*(longlong *)&this_02[0xc9].field_0x18 == this->_padding_))
                  goto LAB_147a80081;
                }
                uVar52 = 0;
              }
              pFVar38 = (FNetTraceCollector *)0x0;
              uVar25 = 0;
              FVar26.Value = local_524.Value & 0xfffffffe | uVar52;
              uVar52 = local_524.Value & 2;
              local_524.Value = FVar26.Value;
              if ((uVar52 != 0) && ((this->_padding_ & 0x1000) != 0)) {
                uVar52 = 0xffffffff;
                pFVar36 = pFVar38;
                if (GNetTraceRuntimeVerbosity != 0) {
                  pFVar36 = (FNetTraceCollector *)local_1d8._padding_;
                }
                if (pFVar36 != (FNetTraceCollector *)0x0) {
                  uVar52 = FNetTrace::BeginPacketContentEvent
                                     (pFVar36,NameId,(uint)local_1d8._padding_);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    NewActor = UE::Net::CreatePersistentNetDebugName(L"NewActor",8);
                    _Init_thread_footer(&::_TSS0);
                  }
                  uVar27 = FNetTrace::TraceName(NewActor);
                  FVar44 = (pFVar36->Events).AllocatorInstance.SecondaryData;
                  if (FVar44 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
                    FVar44 = (ForElementType<FNetTracePacketContentEvent>)&pFVar36->Events;
                  }
                  *(uint *)((longlong)FVar44 + (ulonglong)uVar52 * 0x10) = uVar27;
                }
                plVar7 = *(longlong **)(this->_padding_ + 0x68);
                (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_1d8,this,&this->Actor);
                pAVar6 = (this->Actor).field0_0x0.DebugPtr;
                local_528 = 1;
                (**(code **)(pAVar6->_padding_ + 0x498))(pAVar6,&local_1d8);
                local_524.Value = ((byte)local_1d8._253_1_ & 8) << 5 | local_524.Value & 0xfffffeff;
                if (uVar52 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent(pFVar36,uVar52,(uint)local_1d8._padding_);
                }
              }
              cVar23 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x2c8))();
              if (cVar23 != '\0') {
                pFVar38 = ::operator_new(0x10);
                if (pFVar38 == (FNetTraceCollector *)0x0) {
                  pFVar38 = (FNetTraceCollector *)0x0;
                }
                else {
                  pAVar6 = (this->Actor).field0_0x0.DebugPtr;
                  *(AActor **)pFVar38->NestingStack = pAVar6;
                  uVar52 = (uint)(pAVar6->RemoteRole).Value;
                  pFVar38->NestingStack[2] = uVar52;
                  if ((uVar52 == 2) && ((local_524.Value & 1) == 0)) {
                    AActor::SetAutonomousProxy(pAVar6,false,false);
                  }
                }
              }
              pAVar6 = (this->Actor).field0_0x0.DebugPtr;
              if ((pAVar6->RemoteRole).Value == '\x01') {
                uVar25 = 4;
              }
              local_524.Value = uVar25 | local_524.Value & 0xfffffffb;
              if (((pAVar6->RemoteRole).Value == '\x02') &&
                 (bVar21 = UNetDriver::IsReplicatingAutonomousAsSimulated
                                     (*(UNetDriver **)(this->_padding_ + 0x58)), bVar21)) {
                local_524.Value = local_524.Value | 4;
              }
              local_524.Value =
                   ((byte)(((this->Actor).field0_0x0.DebugPtr)->ReplicatedMovement).field_0x78 & 2 |
                   (local_51c & 0xff) << 2) << 2 | local_524.Value & 0xffffffe7;
              bVar21 = UWorld::IsRecordingClientReplay(local_490);
              local_524.Value =
                   ((*(uint *)(this->_padding_ + 0xfc) >> 2 & 0xff) << 8 |
                   local_524.Value & 0xfffff7ff) & 0x100 ^
                   ((uint)bVar21 << 0xb | local_524.Value & 0xfffff6ff);
              if (((this->ActorReplicator).Object == (FObjectReplicator *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar15 = (code *)swi(3);
                lVar31 = (*pcVar15)();
                return lVar31;
              }
              pFVar39 = TSharedPtr<FRepLayout,1>::operator->
                                  (&((this->ActorReplicator).Object)->RepLayout);
              if ((pFVar39->Flags & HasDynamicConditionProperties) != None) {
                if (((this->ActorReplicator).Object == (FObjectReplicator *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar15 = (code *)swi(3);
                  lVar31 = (*pcVar15)();
                  return lVar31;
                }
                pFVar8 = (((this->ActorReplicator).Object)->RepState).Ptr;
                if (((pFVar8 != (FRepState *)0x0) &&
                    (pFVar9 = (pFVar8->SendingRepState).Ptr, pFVar9 != (FSendingRepState *)0x0)) &&
                   (pFVar10 = (pFVar9->RepChangedPropertyTracker).Object,
                   pFVar10 != (FRepChangedPropertyTracker *)0x0)) {
                  local_524.Value =
                       (pFVar10->ActiveState).DynamicConditionChangeCounter << 0x10 |
                       local_524.Value & 0xffff;
                }
              }
              if (4 < (byte)LogNetTraffic._0_1_) {
                local_398[0] = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
                ::FName::ToString(local_398,&local_3c8);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
                }
              }
              puVar40 = TThreadSingleton<FMemStack>::GetTlsSlot();
              local_300 = local_518;
              local_308 = UE::Core::Private::Function::
                          TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                          ::Call;
              pFVar41 = FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_308,
                                   puVar40);
              local_508.Mem = (FMemStackBase *)(pFVar41 + 2);
              local_508.Top = (local_508.Mem)->Top;
              local_508.SavedChunk = *(FTaggedMemory **)(pFVar41 + 4);
              local_508.bPopped = false;
              local_508.NextTopmostMark = *(FMemMark **)(pFVar41 + 5);
              pFVar41[5] = (FTlsAutoCleanup)&local_508;
              *(int *)(pFVar41 + 6) = *(int *)(pFVar41 + 6) + 1;
              if ((GNetworkProfiler.bIsTrackingEnabled == false) &&
                 (GNetworkProfiler.bShouldTrackingBeEnabled == false)) {
                local_51c = 0;
              }
              else {
                QueryPerformanceCounter(&local_450);
                local_51c = local_450.s.LowPart;
              }
              lVar53 = local_1d8._padding_;
              if (bVar18) {
LAB_147a806c1:
                if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
                   (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
                  if (__CsvProfilerStat3886 == false) {
                    FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
                    __CsvProfilerStat3886 = true;
                  }
                  FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
                  pUVar12 = (UNetConnection *)this->_padding_;
                  QueryPerformanceCounter(&local_440);
                  FNetworkProfiler::TrackReplicateActor
                            (&GNetworkProfiler,(this->Actor).field0_0x0.DebugPtr,
                             (FReplicationFlags)local_524._s_0,local_440.s.LowPart - local_51c,
                             pUVar12);
                  FCsvProfiler::EndExclusiveStat("NetworkProfiler");
                }
                lVar53 = 0;
                if (local_528 != 0) {
                  (**(code **)(this->_padding_ + 0x318))(this,&local_510);
                  if (!bVar18) {
                    pTVar3 = &this->ReplicationMap;
                    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                    ::TIterator::TIterator
                              ((TIterator *)local_268,
                               (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                                *)pTVar3);
                    local_350 = 0;
                    stack0xfffffffffffffc88 = local_268._16_16_;
                    local_388 = (longlong *)local_268._0_8_;
                    auStack_380._0_8_ = local_268._8_8_;
                    local_368 = local_248;
                    pTStack_360 = pTStack_240;
                    uVar43 = local_268._24_8_ >> 0x20;
                    local_358 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                                 *)pTVar3;
                    if (local_268._28_4_ < *(int *)(local_268._16_8_ + 0x18)) {
                      do {
                        FObjectReplicator::PostSendBunch
                                  (*(FObjectReplicator **)
                                    ((longlong)(int)uVar43 * 0x20 + 8 + *local_388),&local_510,
                                   local_1d8.bReliable);
                        uStack_370 = uStack_370 & ~auStack_380._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_380);
                        uVar43 = (ulonglong)uStack_36c;
                      } while ((int)uStack_36c < *(int *)(auStack_380._8_8_ + 0x18));
                      if (((char)local_350 != '\0') && (local_350._1_1_ != '\0')) {
                        uVar52 = *(int *)&(local_358->Elements).field_0x8 -
                                 *(int *)&(local_358->Elements).field_0x34;
                        if (3 < uVar52) {
                          uVar43 = (ulonglong)((uVar52 >> 1) + 7) * 2 + 1;
                          lVar53 = 0x3f;
                          if (uVar43 != 0) {
                            for (; uVar43 >> lVar53 == 0; lVar53 = lVar53 + -1) {
                            }
                          }
                          local_408 = (undefined4)lVar53;
                          iVar51 = 1 << ((byte)lVar53 & 0x1f);
                        }
                        if (((0 < (int)uVar52) && (local_358->HashSize < iVar51)) ||
                           (iVar51 < local_358->HashSize)) {
                          local_358->HashSize = iVar51;
                          TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                          ::Rehash(local_358);
                        }
                      }
                    }
                    uVar52 = local_510.First;
                    if (0 < (this->PendingObjKeys).ArrayNum) {
                      for (; (int)uVar52 <= local_510.Last; uVar52 = uVar52 + 1) {
                        this_00 = &this->SubobjectNakMap;
                        local_4d4 = uVar52 & 0x8000003f;
                        if ((int)local_4d4 < 0) {
                          local_4d4 = (local_4d4 - 1 | 0xffffffc0) + 1;
                        }
                        if (*(int *)&(this->SubobjectNakMap).field_0x8 !=
                            *(int *)&(this->SubobjectNakMap).field_0x34) {
                          puVar14 = *(undefined1 **)&(this->SubobjectNakMap).field_0x40;
                          puVar46 = &(this->SubobjectNakMap).field_0x38;
                          if (puVar14 != (undefined1 *)0x0) {
                            puVar46 = puVar14;
                          }
                          iVar51 = *(int *)(puVar46 +
                                           (ulonglong)
                                           (*(int *)&(this->SubobjectNakMap).field_0x48 - 1U &
                                           local_4d4) * 4);
                          if (iVar51 != -1) {
                            do {
                              lVar53 = *(longlong *)&this_00->field_0x0 + (longlong)iVar51 * 0x28;
                              if (*(uint *)(*(longlong *)&this_00->field_0x0 +
                                           (longlong)iVar51 * 0x28) == local_4d4) {
                                if (lVar53 != 0) goto LAB_147a8095b;
                                break;
                              }
                              iVar51 = *(int *)(lVar53 + 0x20);
                            } while (iVar51 != -1);
                          }
                        }
                        local_438 = &local_4d4;
                        TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
                        ::EmplaceByHash<TKeyInitializer<int_&&>_>
                                  ((TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
                                    *)this_00,(uint)local_4d0,
                                   (TKeyInitializer<int_&&> *)(ulonglong)local_4d4,
                                   (bool *)&local_438);
                        lVar53 = *(longlong *)&this_00->field_0x0 + (longlong)local_4d0[0] * 0x28;
LAB_147a8095b:
                        if (*(uint *)(lVar53 + 8) != uVar52) {
                          if (5 < (byte)LogNetTraffic._0_1_) {
                            UE::Logging::Private::BasicLog<6>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                          }
                          uVar25 = *(uint *)(lVar53 + 0x18);
                          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
                          }
                          *(undefined4 *)(lVar53 + 0x18) = 0;
                          if (*(uint *)(lVar53 + 0x1c) != uVar25) {
                            UE::Core::Private::
                            ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (4,4,uVar25,(ForAnyElementType *)(lVar53 + 0x10),0,
                                       (int *)(lVar53 + 0x1c));
                          }
                        }
                        pFVar49 = (ForAnyElementType *)(lVar53 + 0x10);
                        *(uint *)(lVar53 + 8) = uVar52;
                        if (((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar49 ==
                             &this->PendingObjKeys) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(void*)this != (void*)&Source",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x96e,L""), bVar21)) {
                          pcVar15 = (code *)swi(3);
                          lVar31 = (*pcVar15)();
                          return lVar31;
                        }
                        iVar51 = (this->PendingObjKeys).ArrayNum;
                        if (iVar51 != 0) {
                          iVar28 = UE::Core::Private::
                                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (4,4,iVar51,pFVar49,(int *)(lVar53 + 0x18),
                                              (int *)(lVar53 + 0x1c));
                          memcpy(pFVar49->Data + (longlong)iVar28 * 4,
                                 (this->PendingObjKeys).AllocatorInstance.Data,(longlong)iVar51 << 2
                                );
                        }
                        if (5 < (byte)LogNetTraffic._0_1_) {
                          local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_4a8.Data.ArrayNum = 0;
                          local_4a8.Data.ArrayMax = 0;
                          for (iVar51 = 0;
                              (-1 < iVar51 && (iVar51 < (this->PendingObjKeys).ArrayNum));
                              iVar51 = iVar51 + 1) {
                            if ((iVar51 < 0) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar21)) {
                              pcVar15 = (code *)swi(3);
                              lVar31 = (*pcVar15)();
                              return lVar31;
                            }
                            ::FString::PrintfImpl(&local_3b8,L" %d");
                            iVar28 = local_3b8.Data.ArrayNum + -1;
                            if (local_3b8.Data.ArrayNum == 0) {
                              iVar28 = 0;
                            }
                            ::FString::AppendChars
                                      (&local_4a8,(wchar_t *)local_3b8.Data.AllocatorInstance.Data,
                                       iVar28);
                            if (local_3b8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                            }
                          }
                          if (5 < (byte)LogNetTraffic._0_1_) {
                            UE::Logging::Private::BasicLog<6>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                          }
                          if (local_4a8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
                          }
                        }
                      }
                    }
                    if (((this->Actor).field0_0x0.DebugPtr)->bNetTemporary != 0) {
                      FLLMScope::FLLMScope
                                (&local_4e0,LLMTagDeclaration_NetConnection.UniqueName,false,None,
                                 Default,true);
                      local_430 = LLMTagDeclaration_NetConnection.UniqueName;
                      FMemScope::FMemScope(&local_400,&local_430,true);
                      lVar53 = this->_padding_;
                      pTVar1 = &this->Actor;
                      pFVar49 = (ForAnyElementType *)(lVar53 + 0x80);
                      if (((pFVar49->Data <= pTVar1) &&
                          (pTVar1 < pFVar49->Data + (longlong)*(int *)(lVar53 + 0x8c) * 8)) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar21)) {
                        pcVar15 = (code *)swi(3);
                        lVar31 = (*pcVar15)();
                        return lVar31;
                      }
                      iVar51 = *(int *)(lVar53 + 0x88);
                      if (iVar51 == *(int *)(lVar53 + 0x8c)) {
                        iVar51 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,pFVar49,(int *)(lVar53 + 0x8c));
                      }
                      pFVar4 = pFVar49->Data;
                      *(int *)(lVar53 + 0x88) = iVar51 + 1;
                      pAVar6 = (pTVar1->field0_0x0).DebugPtr;
                      *(AActor **)(pFVar4 + (longlong)iVar51 * 8) = pAVar6;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pAVar6 != (AActor *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pAVar6);
                      }
                      FMemScope::~FMemScope(&local_400);
                      FLLMScope::~FLLMScope(&local_4e0);
                    }
                  }
                  lVar53 = CONCAT44(local_1d8._padding_._4_4_,(uint)local_1d8._padding_);
                }
                piVar2 = &(this->PendingObjKeys).ArrayMax;
                (this->PendingObjKeys).ArrayNum = 0;
                if (*piVar2 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,0,&(this->PendingObjKeys).AllocatorInstance,0,piVar2);
                }
                this->LastUpdateTime = *(double *)(*(longlong *)(this->_padding_ + 0x58) + 800);
                if (local_508.bPopped == false) {
                  if (((local_508.Mem)->TopMark != &local_508) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Mem.TopMark == this",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                          ,0x215,L""), bVar21)) {
                    pcVar15 = (code *)swi(3);
                    lVar31 = (*pcVar15)();
                    return lVar31;
                  }
                  local_508.bPopped = true;
                  (local_508.Mem)->NumMarks = (local_508.Mem)->NumMarks + -1;
                  if (local_508.SavedChunk != (local_508.Mem)->TopChunk) {
                    FMemStackBase::FreeChunks(local_508.Mem,local_508.SavedChunk);
                  }
                  (local_508.Mem)->Top = local_508.Top;
                  (local_508.Mem)->TopMark = local_508.NextTopmostMark;
                  local_508.Top = (uchar *)0x0;
                }
                this->bForceCompareProperties = 0;
                pUVar13 = *(UNetworkMetricsDatabase **)
                           (*(longlong *)(this->_padding_ + 0x58) + 0x2a0);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar13 != (UNetworkMetricsDatabase *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar13);
                }
                UNetworkMetricsDatabase::IncrementInt
                          (pUVar13,UE::Net::Metric::NumReplicatedActorBytes,lVar53 + 7 >> 3);
              }
              else {
                if (((this->ActorReplicator).Object == (FObjectReplicator *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar15 = (code *)swi(3);
                  lVar31 = (*pcVar15)();
                  return lVar31;
                }
                pFVar36 = (FNetTraceCollector *)0x0;
                if (GNetTraceRuntimeVerbosity != 0) {
                  pFVar36 = (FNetTraceCollector *)lVar53;
                }
                uVar52 = 0xffffffff;
                uVar11 = (((this->ActorReplicator).Object)->ObjectNetGUID).field0_0x0.ObjectId;
                if (pFVar36 != (FNetTraceCollector *)0x0) {
                  uVar52 = FNetTrace::BeginPacketContentEvent
                                     (pFVar36,Object,(uint)local_1d8._padding_);
                  FVar44 = (pFVar36->Events).AllocatorInstance.SecondaryData;
                  if (FVar44 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
                    FVar44 = (ForElementType<FNetTracePacketContentEvent>)&pFVar36->Events;
                  }
                  *(ulong64 *)((longlong)FVar44 + (ulonglong)uVar52 * 0x10) = uVar11;
                  if (uVar11 != 0) {
                    FNetTraceCollector::AddReferencedObjectId(pFVar36,uVar11);
                  }
                }
                if ((this->ActorReplicator).Object == (FObjectReplicator *)0x0) {
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L"");
                  if (bVar21) {
                    pcVar15 = (code *)swi(3);
                    lVar31 = (*pcVar15)();
                    return lVar31;
                  }
                  if (((this->ActorReplicator).Object == (FObjectReplicator *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar15 = (code *)swi(3);
                    lVar31 = (*pcVar15)();
                    return lVar31;
                  }
                }
                bVar21 = FObjectReplicator::ReplicateProperties
                                   ((this->ActorReplicator).Object,&local_1d8,
                                    (FReplicationFlags)local_524._s_0);
                if (uVar52 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent(pFVar36,uVar52,(uint)local_1d8._padding_);
                }
                bVar24 = DoSubObjectReplication
                                   (this,&local_1d8,(FReplicationFlags *)&local_524._s_0);
                local_528 = local_528 | bVar21 | bVar24;
                if (*(char *)(this->_padding_ + 0x17c8) == '\0') {
                  bVar21 = UpdateDeletedSubObjects(this,&local_1d8);
                  local_528 = local_528 | bVar21;
                  goto LAB_147a806c1;
                }
                lVar53 = 0;
                if (local_528 != 0) {
                  (**(code **)(this->_padding_ + 0x318))(this,local_2a0,&local_1d8,1);
                  lVar53 = CONCAT44(local_1d8._padding_._4_4_,(uint)local_1d8._padding_);
                }
                FMemMark::Pop(&local_508);
                if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
                   (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
                  if (__CsvProfilerStat3875 == false) {
                    FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
                    __CsvProfilerStat3875 = true;
                  }
                  FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
                  pUVar12 = (UNetConnection *)this->_padding_;
                  QueryPerformanceCounter(&local_448);
                  FNetworkProfiler::TrackReplicateActor
                            (&GNetworkProfiler,(this->Actor).field0_0x0.DebugPtr,
                             (FReplicationFlags)local_524._s_0,local_448.s.LowPart - local_51c,
                             pUVar12);
                  FCsvProfiler::EndExclusiveStat("NetworkProfiler");
                }
                pUVar13 = *(UNetworkMetricsDatabase **)
                           (*(longlong *)(this->_padding_ + 0x58) + 0x2a0);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar13 != (UNetworkMetricsDatabase *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar13);
                }
                UNetworkMetricsDatabase::IncrementInt
                          (pUVar13,UE::Net::Metric::NumReplicatedActorBytes,lVar53 + 7 >> 3);
              }
              if (local_508.bPopped == false) {
                if (((local_508.Mem)->TopMark != &local_508) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mem.TopMark == this",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                        ,0x215,L""), bVar21)) {
                  pcVar15 = (code *)swi(3);
                  lVar31 = (*pcVar15)();
                  return lVar31;
                }
                local_508.bPopped = true;
                (local_508.Mem)->NumMarks = (local_508.Mem)->NumMarks + -1;
                if (local_508.SavedChunk != (local_508.Mem)->TopChunk) {
                  FMemStackBase::FreeChunks(local_508.Mem,local_508.SavedChunk);
                }
                (local_508.Mem)->Top = local_508.Top;
                (local_508.Mem)->TopMark = local_508.NextTopmostMark;
                local_508.Top = (uchar *)0x0;
              }
              if (pFVar38 != (FNetTraceCollector *)0x0) {
                if (((uint)((*(AActor **)pFVar38->NestingStack)->RemoteRole).Value !=
                     pFVar38->NestingStack[2]) && (pFVar38->NestingStack[2] == 2)) {
                  AActor::SetAutonomousProxy(*(AActor **)pFVar38->NestingStack,true,false);
                }
                ::operator_delete(pFVar38,0x10);
              }
              if (local_488.Connection != (UNetConnection *)0x0) {
                (local_488.Connection)->RepContextActor = (AActor *)0x0;
                (local_488.Connection)->RepContextLevel = (ULevel *)0x0;
              }
              UE::Core::Private::Function::CheckCallable(local_208);
              pcVar15 = local_208;
              pppuVar45 = &local_1f8;
              if (local_1e0 != (undefined ***)0x0) {
                pppuVar45 = local_1e0;
              }
              uVar42 = (*(code *)(*pppuVar45)[1])();
              (*pcVar15)(uVar42);
              if (local_208 != (code *)0x0) {
                pppuVar45 = &local_1f8;
                if (local_1e0 != (undefined ***)0x0) {
                  pppuVar45 = local_1e0;
                }
                (*(code *)(*pppuVar45)[2])();
              }
              DataChannelInternal::CachedNetworkSubsystem = (UNetworkSubsystem *)0x0;
            }
            else {
              lVar53 = 0;
            }
            UE::Net::FNetTokenExportScope::~FNetTokenExportScope(&local_238);
            local_1d8._padding_ = (longlong)&___7FOutBunch__6B_;
            FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_1d8._padding_);
            if (local_1d8.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1d8.DebugString.Data.AllocatorInstance.Data);
            }
            if (local_1d8.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Net::FNetToken>)0x0) {
              FMemory::Free((void *)local_1d8.NetTokensPendingExport.AllocatorInstance.SecondaryData
                           );
            }
            if (local_1d8.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1d8.NetFieldExports.AllocatorInstance.Data);
            }
            if (local_1d8.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.ExportNetGUIDs.AllocatorInstance.Data);
            }
            FBitWriter::~FBitWriter((FBitWriter *)&local_1d8);
            goto LAB_147a80fd9;
          }
          if (5 < (byte)LogNet._0_1_) {
            (**(code **)(this->_padding_ + 0x2d0))(this,local_2d8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            goto LAB_147a80fca;
          }
        }
        else if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
          *(uint *)&this->_padding_ = uVar52 & 0xfffffdff;
          if (5 < (byte)LogNet._0_1_) {
            (**(code **)(this->_padding_ + 0x2d0))(this,local_2e8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_2e8[0] != (void *)0x0) {
              FMemory::Free(local_2e8[0]);
            }
          }
          goto LAB_147a7fa2e;
        }
      }
      else {
        this->bActorIsPendingKill = 1;
        local_3a8 = 0;
        FStack_3a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->ActorReplicator != (TSharedPtr<FObjectReplicator,1> *)&local_3a8) {
          (this->ActorReplicator).Object = (FObjectReplicator *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ActorReplicator).SharedReferenceCount,&FStack_3a0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_3a0.ReferenceController);
        (**(code **)(this->_padding_ + 0x2d0))(this,local_2b8);
        ::FString::PrintfImpl(&local_460,L"ReplicateActor called with PendingKill Actor! %s");
        if (local_2b8[0] != (void *)0x0) {
          FMemory::Free(local_2b8[0]);
        }
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        local_420 = &local_460;
        `UActorChannel::ReplicateActor'::__l66::<lambda_3>::operator()(&local_420);
        local_2d8[0] = local_460.Data.AllocatorInstance.Data;
LAB_147a80fca:
        if (local_2d8[0] != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8[0]);
        }
      }
LAB_147a80fd4:
      lVar53 = 0;
    }
    else {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_2f8);
      ::FString::PrintfImpl(&local_470,L"ReplicateActor called while already replicating! %s");
      if (local_2f8[0] != (void *)0x0) {
        FMemory::Free(local_2f8[0]);
      }
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      local_3e0 = &local_470;
      `UActorChannel::ReplicateActor'::__l42::<lambda_2>::operator()(&local_3e0);
      if (local_470.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_147a7f95f:
        lVar53 = 0;
      }
      else {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
        lVar53 = 0;
      }
    }
  }
  else {
    lVar53 = 0;
  }
LAB_147a80fd9:
  if (local_51f != '\0') {
    QueryPerformanceCounter(&local_418);
    GReplicateActorTimeSeconds =
         GReplicateActorTimeSeconds +
         (((double)local_418.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar19) - dVar17);
  }
  if ((local_4c0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4c0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4c0 & 4) != 0) {
    FThreadStats::AddMessage(local_4c8,CycleScopeEnd);
  }
  local_4c0 = 0;
LAB_147a8104b:
  bVar22 = local_520;
  if ((local_520 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar22 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar22 & 4) != 0) {
    FThreadStats::AddMessage(FVar50,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_410);
  FLLMScope::~FLLMScope(&local_4dc);
  return lVar53;
}

// ReplicateRegisteredSubObjects @ 147a82550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::ReplicateRegisteredSubObjects
          (UActorChannel *this,FOutBunch *param_1,FReplicationFlags param_2)

{
  AActor *pAVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FReplicationFlags_u_0 local_res18 [2];
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  FReplicationFlags_u_0 local_90 [2];
  uint local_88;
  FString local_80;
  FName local_70;
  FName local_68;
  FScriptContainerElement *local_60;
  FString local_58;
  TStaticBitArray<17> local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_res18[0] = param_2.field0_0x0;
  if ((!(bool)((this->Actor).field0_0x0.DebugPtr)->bReplicateUsingRegisteredSubObjectList) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor->IsUsingRegisteredSubObjectList()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x103f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((UE::Net::GCVarCompareSubObjectsReplicated != false) ||
     (UE::Net::GCVarDetectDeprecatedReplicateSubObjects != false)) {
    DataChannelInternal::bTestingLegacyMethodForComparison = true;
    local_90[0]._s_0 = local_res18[0]._s_0;
    DataChannelInternal::CurrentSubObjectOwner = (UObject *)(this->Actor).field0_0x0.DebugPtr;
    DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
    pAVar1 = (this->Actor).field0_0x0.DebugPtr;
    (**(code **)(pAVar1->_padding_ + 0x2f8))(pAVar1,this,param_1,local_90);
    DataChannelInternal::bTrackReplicatedSubObjects = UE::Net::GCVarCompareSubObjectsReplicated;
    DataChannelInternal::bTestingLegacyMethodForComparison = false;
  }
  UE::Net::BuildConditionMapFromRepFlags((FReplicationFlags *)&local_48);
  DataChannelInternal::CurrentSubObjectOwner = (UObject *)(this->Actor).field0_0x0.DebugPtr;
  DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  bVar6 = WriteSubObjects(this,(UObject *)pAVar1,&pAVar1->ReplicatedSubObjects,param_1,
                          (FReplicationFlags)local_res18[0]._s_0,&local_48);
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  local_88 = (pAVar1->ReplicatedComponentsInfo).ArrayNum;
  uVar8 = (ulonglong)(int)local_88;
  pFVar10 = (pAVar1->ReplicatedComponentsInfo).AllocatorInstance.Data;
  pFVar9 = pFVar10 + uVar8 * 0x28;
  local_60 = pFVar9;
  do {
    if ((pAVar1->ReplicatedComponentsInfo).ArrayNum != (int)uVar8) {
      local_98[0] = 0;
      `TCheckedPointerIterator<UE::Net::FReplicatedComponentInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pFVar10 == pFVar9) {
      return (bool)bVar6;
    }
    bVar4 = CanSubObjectReplicateToClient
                      (*(APlayerController **)(this->_padding_ + 0x30),
                       *(ELifetimeCondition *)(pFVar10 + 0x10),*(FObjectKey *)(pFVar10 + 8),
                       &local_48,&DataChannelInternal::CachedNetworkSubsystem->GroupsManager);
    if (bVar4) {
      pUVar2 = *(UObject **)pFVar10;
      if ((pUVar2 == (UObject *)0x0) || ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) != 0)) {
        local_70 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_70,&local_58);
        if (pUVar2 == (UObject *)0x0) {
          ::FString::FString(&local_80,L"None");
        }
        else {
          local_68.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
          local_68.Number = *(uint *)&pUVar2->field_0x1c;
          ::FName::ToString(&local_68,&local_80);
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(ReplicatedComponent)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x105d,L"Found invalid replicated component (%s) registered in %s");
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (pUVar2 != (UObject *)0x0) goto LAB_147a827ae;
LAB_147a827bb:
        DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
      }
      else {
LAB_147a827ae:
        if ((pUVar2[3].field_0x20 & 0x40) == 0) goto LAB_147a827bb;
        DataChannelInternal::bIgnoreLegacyReplicateSubObject = true;
      }
      DataChannelInternal::CurrentSubObjectOwner = pUVar2;
      if ((pUVar2[3].field_0x20 & 0x40) == 0) {
        bVar7 = (**(code **)(*(longlong *)pUVar2 + 0x2e0))(pUVar2,this,param_1,local_res18);
      }
      else {
        bVar7 = WriteSubObjects(this,pUVar2,(FSubObjectRegistry *)(pFVar10 + 0x18),param_1,
                                (FReplicationFlags)local_res18[0]._s_0,&local_48);
      }
      DataChannelInternal::CurrentSubObjectOwner = (UObject *)(this->Actor).field0_0x0.DebugPtr;
      DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
      bVar4 = WriteSubObjectInBunch(this,pUVar2,param_1,(FReplicationFlags)local_res18[0]._s_0);
      bVar6 = bVar6 | bVar7 | bVar4;
      pFVar9 = local_60;
    }
    uVar8 = (ulonglong)local_88;
    pFVar10 = pFVar10 + 0x28;
  } while( true );
}

// ReplicateSubobject @ 147a82870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::ReplicateSubobject
          (UActorChannel *this,UActorComponent *param_1,FOutBunch *param_2,FReplicationFlags param_3
          )

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_b8 [32];
  FReplicationFlags_u_0 local_88 [2];
  FName local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  TStaticBitArray<17> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((param_1 == (UActorComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    bVar3 = false;
  }
  else if ((param_1->bReplicateUsingRegisteredSubObjectList == '\0') ||
          (DataChannelInternal::bTestingLegacyMethodForComparison)) {
    bVar3 = ReplicateSubobject(this,(UObject *)param_1,param_2,param_3);
  }
  else {
    if ((UE::Net::GCVarCompareSubObjectsReplicated) ||
       (UE::Net::GCVarDetectDeprecatedReplicateSubObjects)) {
      DataChannelInternal::bTestingLegacyMethodForComparison = true;
      DataChannelInternal::bIgnoreLegacyReplicateSubObject =
           param_1->bReplicateUsingRegisteredSubObjectList;
      DataChannelInternal::CurrentSubObjectOwner = (UObject *)param_1;
      local_88[0] = param_3.field0_0x0;
      (**(code **)(param_1->_padding_ + 0x2e0))(param_1,this,param_2,local_88);
      DataChannelInternal::bTrackReplicatedSubObjects = UE::Net::GCVarCompareSubObjectsReplicated;
      DataChannelInternal::bTestingLegacyMethodForComparison = false;
    }
    UE::Net::BuildConditionMapFromRepFlags((FReplicationFlags *)&local_50);
    if ((bool)((this->Actor).field0_0x0.DebugPtr)->bReplicateUsingRegisteredSubObjectList) {
      local_80 = (FName)param_1->_padding_;
      ::FName::ToString(&local_80,&local_60);
      local_78 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_78,&local_70);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor->IsUsingRegisteredSubObjectList() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x10f4,
                         L"This code should only be hit when an Actor that does NOT support the SubObjectList is replicating an ActorComponent that does: %s replicating %s."
                        );
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pAVar1 = (this->Actor).field0_0x0.DebugPtr;
    pFVar6 = (pAVar1->ReplicatedComponentsInfo).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(pAVar1->ReplicatedComponentsInfo).ArrayNum * 0x28;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x28) {
      if (*(UActorComponent **)pFVar6 == param_1) {
        pFVar7 = pFVar6 + 0x18;
        if (pFVar6 == (FScriptContainerElement *)0x0) {
          pFVar7 = (FScriptContainerElement *)0x0;
        }
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          bVar5 = WriteSubObjects(this,(UObject *)param_1,(FSubObjectRegistry *)pFVar7,param_2,
                                  param_3,&local_50);
          goto LAB_147a82a41;
        }
        break;
      }
    }
    bVar5 = false;
LAB_147a82a41:
    if (UE::Net::GCVarCompareSubObjectsReplicated != false) {
      ValidateReplicatedSubObjects(this);
      DataChannelInternal::bTrackReplicatedSubObjects = false;
    }
    DataChannelInternal::CurrentSubObjectOwner = (UObject *)(this->Actor).field0_0x0.DebugPtr;
    DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
    bVar3 = WriteSubObjectInBunch(this,(UObject *)param_1,param_2,param_3);
    bVar3 = (bool)(bVar3 | bVar5);
  }
  return bVar3;
}

// ReplicateSubobject @ 147a82af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::ReplicateSubobject
          (UActorChannel *this,UObject *param_1,FOutBunch *param_2,FReplicationFlags param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AActor *pAVar3;
  UObject *pUVar4;
  bool bVar5;
  bool bVar6;
  UClass *pUVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  UObject *local_res10;
  UActorChannel *local_48;
  UObject *pUStack_40;
  FString local_38;
  undefined1 local_28 [16];
  UActorChannel **local_18;
  
  pUVar4 = DataChannelInternal::CurrentSubObjectOwner;
  if ((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    local_res10 = param_1;
    if (!DataChannelInternal::bTestingLegacyMethodForComparison) {
      bVar5 = false;
      if (DataChannelInternal::bIgnoreLegacyReplicateSubObject) {
        if (DataChannelInternal::CurrentSubObjectOwner == (UObject *)0x0) {
          pFVar8 = GetTypeName<UActorComponent>(&local_38);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar10);
        }
        pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          pFVar8 = GetTypeName<UActorComponent>(&local_38);
          pwVar10 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = GetFullNameForCastLogError<UObject>((FString *)local_28,pUVar4);
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar11);
        }
        pAVar3 = (this->Actor).field0_0x0.DebugPtr;
        local_48 = (UActorChannel *)pUVar4;
        pFVar9 = (pAVar3->ReplicatedComponentsInfo).AllocatorInstance.Data;
        pFVar1 = pFVar9 + (longlong)(pAVar3->ReplicatedComponentsInfo).ArrayNum * 0x28;
        for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 0x28) {
          if (*(UObject **)pFVar9 == pUVar4) {
            if ((pFVar9 != (FScriptContainerElement *)0x0) &&
               (bVar6 = UE::Net::FSubObjectRegistry::IsSubObjectInRegistry
                                  ((FSubObjectRegistry *)(pFVar9 + 0x18),local_res10), bVar6)) {
              return false;
            }
            break;
          }
        }
        local_28._0_8_ = &local_res10;
        local_18 = &local_48;
        local_28._8_8_ = this;
        `UActorChannel::ReplicateSubobject'::__l23::<lambda_3>::operator()(local_28);
      }
      else {
        bVar5 = WriteSubObjectInBunch(this,param_1,param_2,param_3);
      }
      return bVar5;
    }
    if (!UE::Net::GCVarDetectDeprecatedReplicateSubObjects) {
      pUStack_40 = DataChannelInternal::CurrentSubObjectOwner;
      local_48 = (UActorChannel *)param_1;
      if (DataChannelInternal::LegacySubObjectsCollected.ArrayNum ==
          DataChannelInternal::LegacySubObjectsCollected.ArrayMax) {
        DataChannelInternal::LegacySubObjectsCollected.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&DataChannelInternal::LegacySubObjectsCollected.AllocatorInstance,
                        &DataChannelInternal::LegacySubObjectsCollected.ArrayMax);
      }
      pFVar1 = DataChannelInternal::LegacySubObjectsCollected.AllocatorInstance.Data +
               (longlong)DataChannelInternal::LegacySubObjectsCollected.ArrayNum * 0x10;
      DataChannelInternal::LegacySubObjectsCollected.ArrayNum =
           DataChannelInternal::LegacySubObjectsCollected.ArrayNum + 1;
      *(UActorChannel **)pFVar1 = local_48;
      *(UObject **)(pFVar1 + 8) = pUStack_40;
      return false;
    }
    local_48 = this;
    if ((AActor *)DataChannelInternal::CurrentSubObjectOwner != (this->Actor).field0_0x0.DebugPtr) {
      `UActorChannel::ReplicateSubobject'::__l16::<lambda_2>::operator()(&local_48);
      return false;
    }
    `UActorChannel::ReplicateSubobject'::__l14::<lambda_1>::operator()(&local_48);
  }
  return false;
}

// Serialize @ 147a886c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::Serialize(UActorChannel *this,FArchive *param_1)

{
  TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>_>
  *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FScopeMarker local_208;
  TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>_>
  *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  FScopeMarker local_1a8;
  TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  ::FString::FString(&local_150,"UActorChannel::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_208,param_1,&local_150);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
  ::FString::FString(&local_140,"UChannel::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_1a8,param_1,&local_140);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_1a8);
  UObject::Serialize((UObject *)this,param_1);
  ::FString::FString(&local_130,"Super");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_1a8,&local_130);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    if (this->_padding_ != 0) {
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_1a8);
      (**(code **)(*(longlong *)this->_padding_ + 0x270))((longlong *)this->_padding_,param_1);
      ::FString::FString(&local_120,"InRec");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_1a8,&local_120);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    if (this->_padding_ != 0) {
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_1a8);
      (**(code **)(*(longlong *)this->_padding_ + 0x270))((longlong *)this->_padding_,param_1);
      ::FString::FString(&local_110,"OutRec");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_1a8,&local_110);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    if (this->_padding_ != 0) {
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_1a8);
      (**(code **)(*(longlong *)this->_padding_ + 0x270))((longlong *)this->_padding_,param_1);
      ::FString::FString(&local_100,"InPartialBunch");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_1a8,&local_100);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_1a8);
  ::FString::FString(&local_f0,"UActorChannel::Super");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_f0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                  *)&this->ReplicationMap,param_1);
    ::FString::FString(&local_e0,"ReplicationMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_e0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedBunches).ArrayNum << 3,
               (longlong)(this->QueuedBunches).ArrayMax << 3);
    pFVar12 = (this->QueuedBunches).AllocatorInstance.Data;
    iVar5 = (this->QueuedBunches).ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->QueuedBunches).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FInBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar12 == pFVar3) break;
      plVar7 = *(longlong **)pFVar12;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x270))(plVar7,param_1);
      }
      pFVar12 = pFVar12 + 8;
    }
    ::FString::FString(&local_d0,"QueudBunches");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->PendingGuidResolves,param_1);
    ::FString::FString(&local_c0,"PendingGuidResolves");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->CreateSubObjects).ArrayNum << 3,
               (longlong)(this->CreateSubObjects).ArrayMax << 3);
    ::FString::FString(&local_b0,"CreateSubObjects");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedMustBeMappedGuidsInLastBunch).ArrayNum << 3,
               (longlong)(this->QueuedMustBeMappedGuidsInLastBunch).ArrayMax << 3);
    ::FString::FString(&local_a0,"QueuedMustBeMappedGuidsInLastBunch");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedExportBunches).ArrayNum << 3);
    pFVar12 = (this->QueuedExportBunches).AllocatorInstance.Data;
    iVar5 = (this->QueuedExportBunches).ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->QueuedExportBunches).ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FOutBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar12 == pFVar3) break;
      plVar7 = *(longlong **)pFVar12;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x270))(plVar7,param_1);
      }
      pFVar12 = pFVar12 + 8;
    }
    ::FString::FString(&local_90,"QueuedExportBunches");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::CountBytes
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->SubobjectRepKeyMap,param_1);
    ::FString::FString(&local_80,"SubobjectRepKeyMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    pTVar1 = &this->SubobjectNakMap;
    TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
                  *)pTVar1,param_1);
    iStack_1d8 = 0;
    puVar2 = &(this->SubobjectNakMap).field_0x10;
    iVar5 = *(int *)&(this->SubobjectNakMap).field_0x28;
    uStack_1d4 = 1;
    local_1c0 = 0;
    iStack_1c4 = 0;
    if (iVar5 != 0) {
      puVar14 = *(uint **)&(this->SubobjectNakMap).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar2;
      }
      uVar15 = *puVar14;
      while (uVar15 == 0) {
        lVar10 = (longlong)iStack_1d8;
        local_1c0 = local_1c0 + 0x20;
        iStack_1d8 = iStack_1d8 + 1;
        iStack_1c4 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_147a88c51;
        uVar15 = puVar14[lVar10 + 1];
      }
      uStack_1d4 = -uVar15 & uVar15;
      uVar4 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b0 = (int)lVar10;
      iStack_1c4 = local_1c0 + -1 + local_1b0;
      if (iVar5 < iStack_1c4) {
        iStack_1c4 = iVar5;
      }
    }
LAB_147a88c51:
    uVar15 = *(uint *)&(this->SubobjectNakMap).field_0x28;
    uVar16 = uVar15 & 0xffffffe0;
    iStack_1b8 = *(int *)&(this->SubobjectNakMap).field_0x8 -
                 *(int *)&(this->SubobjectNakMap).field_0x34;
    uStack_1c8 = 0xffffffff;
    TStack_178._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
    TStack_178.CurrentBitIndex = iStack_1c4;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar15 >> 5;
    TStack_178._28_4_ = iStack_1c4;
    TStack_178.BaseBitIndex = local_1c0;
    uStack_158 = CONCAT44(uStack_1b4,iStack_1b8);
    local_1e0 = pTVar1;
    local_1d0 = puVar2;
    iStack_1bc = iStack_1c4;
    local_180 = pTVar1;
    TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar6 = *(uint *)&(this->SubobjectNakMap).field_0x28;
    if (uVar15 != uVar6) {
      puVar13 = *(undefined1 **)&(this->SubobjectNakMap).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar15 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147a88d6e;
        uVar15 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar15 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar6 < (int)uVar15) {
        uVar15 = uVar6;
      }
    }
LAB_147a88d6e:
    while( true ) {
      pTVar1 = local_180;
      if (*(int *)(&local_180->field_0x0 + 8) - *(int *)(&local_180->field_0x0 + 0x34) !=
          (int)uStack_158) {
        `TSparseArray<TSparseSetElement<TTuple<int,UActorChannel::FPacketRepKeyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_178.CurrentBitIndex == uVar15) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar1 == &this->SubobjectNakMap)) break;
      lVar10 = *(longlong *)&pTVar1->field_0x0;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)
                         *(int *)(lVar10 + 0x18 + (longlong)TStack_178.CurrentBitIndex * 0x28) << 2,
                 (longlong)*(int *)(lVar10 + 0x1c + (longlong)TStack_178.CurrentBitIndex * 0x28) <<
                 2);
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    ::FString::FString(&local_70,"SubobjectNakMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->PendingObjKeys).ArrayNum << 2,
               (longlong)(this->PendingObjKeys).ArrayMax << 2);
    ::FString::FString(&local_60,"PendingObjKeys");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_208);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x8 *
                       0x18,
               (longlong)*(int *)&(this->QueuedBunchObjectReferences).Elements.field_0xc * 0x18);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)
                       (*(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x28 + 0x1fU >>
                       5) << 2,
               (ulonglong)
               (*(int *)&(this->QueuedBunchObjectReferences).Elements.field_0x2c + 0x1fU >> 5) << 2)
    ;
    lVar10 = (longlong)(this->QueuedBunchObjectReferences).HashSize << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar10,lVar10);
    ::FString::FString(&local_50,"QueuedBunchObjectReferences");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_208,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_208);
  return;
}

// SetChannelActor @ 147a8a920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UActorChannel::SetChannelActor(UActorChannel *this,AActor *param_1,ESetChannelActorFlags param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FLevelCollection *pFVar5;
  UDemoNetDriver *pUVar6;
  UDemoNetDriver *this_00;
  AActor *pAVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ULevel *pUVar14;
  TSharedRef<FObjectReplicator,1> *pTVar15;
  FNetworkObjectList *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ForAnyElementType FVar20;
  undefined1 auStack_258 [32];
  FScriptContainerElement *local_238;
  longlong local_230;
  FWeakObjectPtr local_228;
  UActorChannel *local_220;
  FObjectReplicator *local_218;
  FSharedReferencer<1> local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  TPairInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_&&,UActorChannel_*_const_&> local_1d8;
  FString local_1c8;
  FWeakObjectPtr *local_1b8;
  UActorChannel **local_1b0;
  undefined1 local_1a8 [16];
  FOutBunch local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (((this->_padding_ & 2) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Closing",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xae7,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((this->Actor).field0_0x0.DebugPtr != (AActor *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Actor == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0xae8,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar4 = *(longlong *)(this->_padding_ + 0x58);
  if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1b8) != 0)) && (param_1 != (AActor *)0x0)) &&
     ((pUVar14 = AActor::GetLevel(param_1), pUVar14 != (ULevel *)0x0 &&
      (pFVar5 = pUVar14->CachedLevelCollection, pFVar5 != (FLevelCollection *)0x0)))) {
    pUVar6 = (UDemoNetDriver *)(pFVar5->NetDriver).field0_0x0.DebugPtr;
    this_00 = *(UDemoNetDriver **)(this->_padding_ + 0x58);
    if (this_00 == (UDemoNetDriver *)0x0) {
      bVar11 = pUVar6 == (UDemoNetDriver *)0x0;
    }
    else {
      bVar11 = this_00 == pUVar6;
    }
    if (!bVar11) {
      pUVar6 = (pFVar5->DemoNetDriver).field0_0x0.DebugPtr;
      if (this_00 == (UDemoNetDriver *)0x0) {
        bVar11 = pUVar6 == (UDemoNetDriver *)0x0;
      }
      else {
        bVar11 = this_00 == pUVar6;
      }
      if ((!bVar11) && (5 < (byte)LogNet._0_1_)) {
        if ((this_00 == (UDemoNetDriver *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
          ::FString::FString(&local_1f8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_1f8,(UObject *)0x0,None);
        }
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_208,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_208,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Actor).field0_0x0.DebugPtr = param_1;
  this->bActorIsPendingKill = 0;
  if (6 < (byte)LogNetTraffic._0_1_) {
    ::FString::PrintfImpl(&local_1c8,L"%llu");
    pAVar7 = (this->Actor).field0_0x0.DebugPtr;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar20.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    if ((pAVar7 == (AActor *)0x0) || (pAVar7->_padding_ == 0)) {
      ::FString::FString(&local_1e8,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar7,&local_1e8,(UObject *)0x0,None);
    }
    local_238 = FVar20.Data;
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
  if ((-1 < (int)uVar18) && (lVar4 = this->_padding_, (int)uVar18 < *(int *)(lVar4 + 0x14a0))) {
    uVar17 = 0;
    if ((int)uVar18 < *(int *)(lVar4 + 0x14a0)) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18,
       local_230 = (longlong)*(int *)(lVar4 + 0x14a0),
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (0 < *(int *)(*(longlong *)(lVar4 + 0x1498) + (longlong)(int)uVar18 * 4)) {
      uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      iVar13 = *(int *)(lVar4 + 0x1480);
      uVar17 = 0;
      if ((int)uVar18 < iVar13) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18, local_230 = (longlong)iVar13
         , bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
         , bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar8 = this->_padding_;
      iVar13 = *(int *)(*(longlong *)(lVar4 + 0x1478) + (longlong)(int)uVar18 * 4);
      uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)(lVar8 + 0x14a0);
      uVar12 = 0;
      uVar17 = uVar12;
      if ((int)uVar18 < iVar2) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18, local_230 = (longlong)iVar2,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar4 = this->_padding_;
      iVar2 = *(int *)(*(longlong *)(lVar8 + 0x1498) + (longlong)(int)uVar18 * 4);
      uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar3 = *(int *)(lVar4 + 0x1480);
      uVar17 = uVar12;
      if ((int)uVar18 < iVar3) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18, local_230 = (longlong)iVar3,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(int *)(*(longlong *)(lVar4 + 0x1478) + (longlong)(int)uVar18 * 4) = iVar2 + -1;
      while( true ) {
        uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        iVar2 = *(int *)(lVar4 + 0x14a0);
        uVar17 = uVar12;
        if ((int)uVar18 < iVar2) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18,
           local_230 = (longlong)iVar2,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (iVar13 < *(int *)(*(longlong *)(lVar4 + 0x1498) + (longlong)(int)uVar18 * 4)) break;
        FOutBunch::FOutBunch(&local_198,(UChannel *)this,false);
        if ((local_198._padding_._1_1_ & 2) != 0) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          local_198._padding_ = (longlong)&___7FOutBunch__6B_;
          FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_198._padding_);
          if (local_198.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.DebugString.Data.AllocatorInstance.Data);
          }
          if (local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Net::FNetToken>)0x0) {
            FMemory::Free((void *)local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData);
          }
          if (local_198.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.NetFieldExports.AllocatorInstance.Data);
          }
          if (local_198.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.ExportNetGUIDs.AllocatorInstance.Data);
          }
          FBitWriter::~FBitWriter((FBitWriter *)&local_198);
          break;
        }
        local_198.bReliable = '\x01';
        (**(code **)(this->_padding_ + 0x318))(this,local_1a8,&local_198,0);
        uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        iVar2 = *(int *)(lVar4 + 0x14a0);
        uVar17 = 0;
        if ((int)uVar18 < iVar2) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18,
           local_230 = (longlong)iVar2,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x1498) + (longlong)(int)uVar18 * 4);
        *piVar1 = *piVar1 + 1;
        local_198._padding_ = (longlong)&___7FOutBunch__6B_;
        FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_198._padding_);
        if (local_198.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.DebugString.Data.AllocatorInstance.Data);
        }
        if (local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::FNetToken>)0x0) {
          FMemory::Free((void *)local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData);
        }
        if (local_198.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.NetFieldExports.AllocatorInstance.Data);
        }
        if (local_198.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.ExportNetGUIDs.AllocatorInstance.Data);
        }
        FBitWriter::~FBitWriter((FBitWriter *)&local_198);
      }
      uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      iVar2 = *(int *)(lVar4 + 0x1480);
      uVar17 = 0;
      if ((int)uVar18 < iVar2) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18, local_230 = (longlong)iVar2,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(int *)(*(longlong *)(lVar4 + 0x1478) + (longlong)(int)uVar18 * 4) = iVar13;
      uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      iVar13 = *(int *)(lVar4 + 0x14a0);
      if ((int)uVar18 < iVar13) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_238 = (FScriptContainerElement *)(longlong)(int)uVar18, local_230 = (longlong)iVar13
         , bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
         , bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)(*(longlong *)(lVar4 + 0x1498) + (longlong)(int)uVar18 * 4) = 0;
    }
  }
  pAVar7 = (this->Actor).field0_0x0.DebugPtr;
  if (pAVar7 != (AActor *)0x0) {
    lVar4 = this->_padding_;
    local_220 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    local_228.ObjectIndex = 0;
    local_228.ObjectSerialNumber = 0;
    local_1d8.Value = (UActorChannel **)pAVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1d8.Value);
    local_1b8 = &local_228;
    local_1b0 = &local_220;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_&&,UActorChannel_*_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x14d0),&local_1d8,(bool *)&local_1b8);
    plVar9 = *(longlong **)(lVar4 + 0x1520);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9,pAVar7,local_220);
    }
    pAVar7 = (this->Actor).field0_0x0.DebugPtr;
    uVar18 = ((uint)((ulonglong)pAVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pAVar7 >> 4)) *
             -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    if (*(int *)&(this->ReplicationMap).field_0x8 != *(int *)&(this->ReplicationMap).field_0x34) {
      puVar19 = *(undefined1 **)&(this->ReplicationMap).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->ReplicationMap).field_0x38;
      }
      iVar13 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->ReplicationMap).field_0x48 - 1U & (uVar18 >> 0x10 ^ uVar18))
                       * 4);
      if (iVar13 != -1) {
        do {
          if (*(AActor **)((longlong)iVar13 * 0x20 + *(longlong *)&this->ReplicationMap) == pAVar7)
          {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ReplicationMap.Contains(Actor)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                                ,0xb25,L"");
            if (bVar11) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            break;
          }
          iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *(longlong *)&this->ReplicationMap);
        } while (iVar13 != -1);
      }
    }
    if ((param_2 & SkipReplicatorCreation) == None) {
      pAVar7 = (this->Actor).field0_0x0.DebugPtr;
      pTVar15 = FindReplicator(this,(UObject *)pAVar7,(bool *)0x0);
      if (pTVar15 == (TSharedRef<FObjectReplicator,1> *)0x0) {
        pTVar15 = CreateReplicator(this,(UObject *)pAVar7,true);
      }
      local_210.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
      local_218 = pTVar15->Object;
      if (local_210.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_210.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_210.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->ActorReplicator != (TSharedPtr<FObjectReplicator,1> *)&local_218) {
        (this->ActorReplicator).Object = local_218;
        local_218 = (FObjectReplicator *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ActorReplicator).SharedReferenceCount,&local_210);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_210.ReferenceController);
    }
    if ((param_2 & SkipMarkActive) == None) {
      pFVar16 = UNetDriver::GetNetworkObjectList(*(UNetDriver **)(this->_padding_ + 0x58));
      FNetworkObjectList::MarkActive
                (pFVar16,(this->Actor).field0_0x0.DebugPtr,(UNetConnection *)this->_padding_,
                 (((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr);
      pFVar16 = UNetDriver::GetNetworkObjectList(*(UNetDriver **)(this->_padding_ + 0x58));
      FNetworkObjectList::ClearRecentlyDormantConnection
                (pFVar16,(this->Actor).field0_0x0.DebugPtr,(UNetConnection *)this->_padding_,
                 (((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr);
    }
  }
  return;
}

// SetClosingFlag @ 147a8be50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::SetClosingFlag(UActorChannel *this)

{
  AActor *pAVar1;
  
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  if (pAVar1 != (AActor *)0x0) {
    if ((UNetConnection *)this->_padding_ != (UNetConnection *)0x0) {
      UNetConnection::RemoveActorChannel((UNetConnection *)this->_padding_,pAVar1);
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
    return;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
  return;
}

// SetCurrentSubObjectOwner @ 147a8e6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UActorChannel::SetCurrentSubObjectOwner(AActor *param_1)

{
  DataChannelInternal::CurrentSubObjectOwner = (UObject *)param_1;
  DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
  return;
}

// SetCurrentSubObjectOwner @ 147a8e6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UActorChannel::SetCurrentSubObjectOwner(UActorComponent *param_1)

{
  DataChannelInternal::CurrentSubObjectOwner = (UObject *)param_1;
  if ((param_1 == (UActorComponent *)0x0) ||
     (DataChannelInternal::bIgnoreLegacyReplicateSubObject = true,
     param_1->bReplicateUsingRegisteredSubObjectList == '\0')) {
    DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
  }
  return;
}

// ShouldProcessAllQueuedBunches @ 147a94050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::ShouldProcessAllQueuedBunches(UActorChannel *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  void *local_28 [4];
  
  fVar3 = UNetDriver::GetIncomingBunchFrameProcessingTimeLimit
                    (*(UNetDriver **)(this->_padding_ + 0x58));
  if (fVar3 <= 0.0) {
    return true;
  }
  fVar3 = (float)((double)param_1 - this->QueuedBunchStartTime);
  bVar2 = UE::Net::QueuedBunchTimeFailsafeSeconds < fVar3;
  if ((UE::Net::QueuedBunchTimeFailsafeSeconds < fVar3) &&
     (piVar1 = (int *)(*(longlong *)(this->_padding_ + 0x58) + 0xa48), *piVar1 = *piVar1 + 1,
     5 < (byte)LogNet._0_1_)) {
    (**(code **)(this->_padding_ + 0x2d0))(this,local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  return bVar2;
}

// StartBecomingDormant @ 147a94700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::StartBecomingDormant(UActorChannel *this)

{
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  uint uVar6;
  TObjectPtr<UChannel>_u_0 local_res8;
  void *local_88 [2];
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if ((this->_padding_ & 0x84) == 0) {
    if (5 < (byte)LogNetDormancy._0_1_) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_88);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
      if (local_88[0] != (void *)0x0) {
        FMemory::Free(local_88[0]);
      }
    }
    pTVar1 = &this->ReplicationMap;
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar5 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        lVar2 = *(longlong *)((longlong)(int)uVar5 * 0x20 + 8 + *local_48);
        if ((*(longlong *)(lVar2 + 0x48) == 0) &&
           (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0xd8)), pUVar4 == (UObject *)0x0
           )) {
          if (5 < (byte)LogRep._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          }
        }
        else {
          *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) & 0xfffffffe;
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar5 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar6 < 4) {
          iVar3 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
          local_18->HashSize = iVar3;
          TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    lVar2 = this->_padding_;
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffeff | 0x80;
    local_res8 = (TObjectPtr<UChannel>_u_0)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UChannel>_>
              ((TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x1850),
               (TObjectPtr<UChannel> *)&local_res8.ObjectPtr);
  }
  return;
}

// TestLegacyReplicateSubObjects @ 147a98220

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
UActorChannel::TestLegacyReplicateSubObjects
          (UActorChannel *this,FOutBunch *param_1,FReplicationFlags param_2)

{
  AActor *pAVar1;
  FReplicationFlags_u_0 local_res18 [4];
  
  DataChannelInternal::bTestingLegacyMethodForComparison = true;
  DataChannelInternal::CurrentSubObjectOwner = (UObject *)(this->Actor).field0_0x0.DebugPtr;
  DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  local_res18[0] = param_2.field0_0x0;
  (**(code **)(pAVar1->_padding_ + 0x2f8))(pAVar1,this,param_1,local_res18);
  DataChannelInternal::bTestingLegacyMethodForComparison = false;
  return;
}

// TestLegacyReplicateSubObjects @ 147a98270

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
UActorChannel::TestLegacyReplicateSubObjects
          (UActorChannel *this,UActorComponent *param_1,FOutBunch *param_2,FReplicationFlags param_3
          )

{
  FReplicationFlags_u_0 local_res20 [2];
  
  DataChannelInternal::bTestingLegacyMethodForComparison = true;
  if ((param_1 == (UActorComponent *)0x0) ||
     (param_1->bReplicateUsingRegisteredSubObjectList == '\0')) {
    DataChannelInternal::bIgnoreLegacyReplicateSubObject = false;
  }
  else {
    DataChannelInternal::bIgnoreLegacyReplicateSubObject = true;
  }
  DataChannelInternal::CurrentSubObjectOwner = (UObject *)param_1;
  local_res20[0] = param_3.field0_0x0;
  (**(code **)(param_1->_padding_ + 0x2e0))(param_1,this,param_2,local_res20);
  DataChannelInternal::bTestingLegacyMethodForComparison = false;
  return;
}

// Tick @ 147a986e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorChannel::Tick(UActorChannel *this)

{
  char cVar1;
  
  if ((this->_padding_ & 0x80) != 0) {
    cVar1 = (**(code **)(this->_padding_ + 800))(this,0);
    if (cVar1 != '\0') {
      (**(code **)(this->_padding_ + 0x340))(this);
    }
  }
  ProcessQueuedBunches(this);
  return;
}

// ToString @ 147a990d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

wchar_t * __thiscall UActorChannel::ToString(UActorChannel *this,ESubObjectDeleteFlag param_1)

{
  if (param_1 == Destroyed) {
    return L"Destroyed";
  }
  if (param_1 != TearOff) {
    if (param_1 != ForceDelete) {
      return L"Missing";
    }
    return L"ForceDelete";
  }
  return L"TearOff";
}

// UpdateDeletedSubObjects @ 147a9a470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::UpdateDeletedSubObjects(UActorChannel *this,FOutBunch *param_1)

{
  TMap<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
  *pTVar1;
  TSharedPtr<FObjectReplicator,1> *pTVar2;
  uchar uVar3;
  FNetworkGUID_u_0 *pFVar4;
  FNetworkGUID FVar5;
  undefined1 *puVar6;
  FNetworkObjectList *pFVar7;
  AActor *pAVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_private:_bool___cdecl_UActorChannel::UpdateDeletedSubObjects(FOutBunch_&)_::_2_::FStat_STAT_NetDeletedSubObjects>
  FVar21;
  TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_00;
  UObject *pUVar22;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  FObjectKey FVar27;
  longlong lVar28;
  FName FVar29;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar30;
  FName FVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  uint *puVar36;
  undefined8 uVar37;
  longlong *plVar38;
  undefined1 auStackY_388 [32];
  undefined1 local_327;
  undefined1 local_326 [6];
  FWeakObjectPtr local_320;
  FName local_318;
  TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_> *local_310;
  TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_308;
  undefined8 local_300;
  FColor_u_0 local_2f8 [2];
  FWeakObjectPtr local_2f0;
  FName local_2e8;
  FName local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  FName local_2c8;
  FActorInvalidSubObjectView local_2b8;
  longlong *local_2a8;
  undefined1 auStack_2a0 [16];
  uint uStack_290;
  uint uStack_28c;
  longlong local_288;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_280;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_278;
  char local_270;
  char cStack_26f;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_268;
  AActor *local_260;
  UActorChannel *local_258;
  AActor *local_250;
  undefined4 local_248;
  undefined4 local_244;
  longlong local_240;
  FSharedReferencer<1> FStack_238;
  UActorChannel *local_230;
  undefined1 *local_228;
  FOutBunch *local_220;
  TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  int local_1f0;
  longlong *local_1e8;
  undefined1 auStack_1e0 [16];
  uint uStack_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *local_1b8;
  undefined2 local_1b0;
  TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_178;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_168;
  FName local_158;
  FName local_150;
  undefined1 local_148 [32];
  longlong local_128;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_120;
  undefined1 local_118 [32];
  longlong local_f8;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  *pTStack_f0;
  undefined4 local_cc;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NetDeletedSubObjects ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_UActorChannel::UpdateDeletedSubObjects(FOutBunch_&)_::_2_::FStat_STAT_NetDeletedSubObjects>
         )0x0) {
      pFVar20 = ::FName::FName(&local_150,"STAT_NetDeletedSubObjects");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetDeletedSubObjects,*pFVar20,
                 L"STAT_NetDeletedSubObjects","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_NetDeletedSubObjects;
  if (StatPtr_STAT_NetDeletedSubObjects ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_UActorChannel::UpdateDeletedSubObjects(FOutBunch_&)_::_2_::FStat_STAT_NetDeletedSubObjects>
       )0x0) {
    pFVar20 = ::FName::FName(&local_158,"STAT_NetDeletedSubObjects");
    FVar21 = (FThreadSafeStaticStat<_private:_bool___cdecl_UActorChannel::UpdateDeletedSubObjects(FOutBunch_&)_::_2_::FStat_STAT_NetDeletedSubObjects>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetDeletedSubObjects,*pFVar20,
                          L"STAT_NetDeletedSubObjects","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar21;
  bVar17 = false;
  bVar12 = false;
  local_2c8.ComparisonIndex.Value = 0;
  local_2c8.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar31.ComparisonIndex.Value.Value == 0) &&
     (bVar10 = bVar17, bVar11 = bVar12, FVar31.Number == 0)) {
LAB_147a9a60a:
    bVar12 = bVar15;
    bVar17 = bVar14;
    bVar14 = false;
    local_2e8 = local_2c8;
    FVar31 = local_2c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2f8[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar17 = false;
      bVar12 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e0.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_2e0.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                   ,0xf99);
        bVar17 = true;
        bVar12 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    bVar10 = bVar17;
    bVar11 = bVar12;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147a9a60a;
    local_318 = FVar31;
    local_2e8 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar14 = true;
  }
  local_228 = &local_327;
  local_327 = 0;
  local_230 = this;
  local_220 = param_1;
  this_00 = (TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
             *)UNetConnection::GetDormantFlushedObjectsForActor
                         ((UNetConnection *)this->_padding_,(this->Actor).field0_0x0.DebugPtr);
  local_300 = 1;
  local_308 = this_00;
  if (this_00 !=
      (TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar1 = &this->ReplicationMap;
    TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_148,
               (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_1b0 = 0;
    stack0xfffffffffffffe28 = local_148._16_16_;
    local_1e8 = (longlong *)local_148._0_8_;
    auStack_1e0._0_8_ = local_148._8_8_;
    local_1c8 = local_128;
    pTStack_1c0 = pTStack_120;
    uVar24 = local_148._24_8_ >> 0x20;
    local_1b8 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (local_148._28_4_ < *(int *)(local_148._16_8_ + 0x18)) {
      do {
        pFVar4 = *(FNetworkGUID_u_0 **)((longlong)(int)uVar24 * 0x20 + 8 + *local_1e8);
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          FVar5.field0_0x0 = (FNetworkGUID_u_0)pFVar4->ObjectId;
          TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FNetworkGUID>
                    (this_00,FVar5.field0_0x0._4_4_ * 0x17 + FVar5.field0_0x0.Value,
                     (FNetworkGUID *)pFVar4);
        }
        uStack_1d0 = uStack_1d0 & ~auStack_1e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1e0);
        uVar24 = (ulonglong)uStack_1cc;
      } while ((int)uStack_1cc < *(int *)(auStack_1e0._8_8_ + 0x18));
      if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
        uVar32 = *(int *)&(local_1b8->Elements).field_0x8 -
                 *(int *)&(local_1b8->Elements).field_0x34;
        if (uVar32 < 4) {
          iVar18 = 1;
        }
        else {
          uVar24 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
          lVar35 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          local_248 = (undefined4)lVar35;
          iVar18 = 1 << ((byte)lVar35 & 0x1f);
        }
        if (((0 < (int)uVar32) && (local_1b8->HashSize < iVar18)) || (iVar18 < local_1b8->HashSize))
        {
          local_1b8->HashSize = iVar18;
          TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_1b8);
        }
      }
    }
  }
  local_3c = 0x10;
  local_c8.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  lVar35 = *(longlong *)(this->_padding_ + 0x58);
  if ((*(longlong *)(lVar35 + 0x9c8) == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    uVar16 = (*pcVar9)();
    return (bool)uVar16;
  }
  FNetworkObjectList::FindActorInvalidSubObjects
            (*(FNetworkObjectList **)(lVar35 + 0x9c8),&local_2b8,(this->Actor).field0_0x0.DebugPtr);
  local_310 = local_2b8.InvalidSubObjectsPtr;
  uVar37 = 1;
  if ((local_2b8.InvalidSubObjectsPtr !=
       (TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_> *)0x0) &&
     (this->ChannelSubObjectDirtyCount != local_2b8.InvalidSubObjectDirtyCount)) {
    this->ChannelSubObjectDirtyCount = local_2b8.InvalidSubObjectDirtyCount;
    if (local_2b8.InvalidSubObjectsPtr ==
        (TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasInvalidSubObjects()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetworkObjectList.h"
                          ,0x17a,L"");
      if (bVar15) {
        pcVar9 = (code *)swi(3);
        uVar16 = (*pcVar9)();
        return (bool)uVar16;
      }
      local_310 = local_2b8.InvalidSubObjectsPtr;
    }
    pTVar13 = local_310;
    uVar24 = (ulonglong)local_310->ArrayNum;
    FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
             (local_310->AllocatorInstance).Data;
    local_268 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                (uVar24 * 0x20 + (longlong)FVar30);
    local_310 = (TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_>
                 *)CONCAT44(local_310._4_4_,local_310->ArrayNum);
LAB_147a9a86d:
    do {
      FVar23 = local_268;
      if (pTVar13->ArrayNum != (int)uVar24) {
        local_326[0] = 0;
        `TCheckedPointerIterator<FNetworkObjectList::FSubObjectChannelReference_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_326);
      }
      FVar31 = local_2e8;
      if (FVar30 == FVar23) {
        uVar37 = local_300;
        this_00 = local_308;
        bVar10 = bVar17;
        bVar11 = bVar12;
        if (local_40 != 0) {
          lVar35 = *(longlong *)(this->_padding_ + 0x58);
          if ((*(longlong *)(lVar35 + 0x9c8) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          iVar18 = local_40;
          pFVar7 = *(FNetworkObjectList **)(lVar35 + 0x9c8);
          local_178.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0
             ) {
            local_178.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_c8.SecondaryData;
          }
          if ((local_40 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          local_178.ArrayNum = iVar18;
          pAVar8 = (this->Actor).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar8 == (AActor *)0x0)) {
            local_2d8 = 0;
            if (pAVar8 != (AActor *)0x0) goto LAB_147a9ab95;
            FVar27.ObjectIndex = 0;
            FVar27.ObjectSerialNumber = 0;
          }
          else {
            UE::GC::MarkAsReachable((UObject *)pAVar8);
LAB_147a9ab95:
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pAVar8);
            }
            local_2f0.ObjectIndex = 0;
            local_2f0.ObjectSerialNumber = 0;
            local_260 = pAVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pAVar8);
            }
            FWeakObjectPtr::operator=(&local_2f0,(FObjectPtr)&local_260);
            FVar27 = (FObjectKey)local_2f0;
          }
          FNetworkObjectList::RemoveMultipleInvalidSubObjectChannelReference
                    (pFVar7,FVar27,&local_178,(UObject *)this);
          local_40 = 0;
          uVar37 = local_300;
          this_00 = local_308;
          if ((local_3c < 0) && (local_3c != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                      (8,4,0,&local_c8,0,&local_3c);
            uVar37 = local_300;
            this_00 = local_308;
          }
        }
        break;
      }
      if ((*(uchar *)((longlong)FVar30 + 10) == '\0') &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1840253650790772792>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                              ,0xfc8,"SubObjectRef.Status != ENetSubObjectStatus::Active"), bVar15))
      {
        pcVar9 = (code *)swi(3);
        uVar16 = (*pcVar9)();
        return (bool)uVar16;
      }
      pUVar22 = FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)FVar30);
      if ((pUVar22 != (UObject *)0x0) &&
         (uVar32 = ((uint)((ulonglong)pUVar22 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar22 >> 4)) *
                   -0x7a143595, uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb,
         *(int *)&(this->ReplicationMap).field_0x8 != *(int *)&(this->ReplicationMap).field_0x34)) {
        puVar6 = *(undefined1 **)&(this->ReplicationMap).field_0x40;
        puVar26 = &(this->ReplicationMap).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar26 = puVar6;
        }
        iVar18 = *(int *)(puVar26 +
                         (ulonglong)
                         (*(int *)&(this->ReplicationMap).field_0x48 - 1U &
                         (uVar32 >> 0x10 ^ uVar32)) * 4);
        if (iVar18 != -1) {
          do {
            plVar25 = (longlong *)((longlong)iVar18 * 0x20 + *(longlong *)&this->ReplicationMap);
            if ((UObject *)*plVar25 == pUVar22) {
              plVar38 = plVar25 + 1;
              if (plVar25 == (longlong *)0x0) {
                plVar38 = (longlong *)0x0;
              }
              if (plVar38 != (longlong *)0x0) {
                uVar3 = *(uchar *)((longlong)FVar30 + 10);
                FVar23 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
                if (local_c8.SecondaryData !=
                    (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                  FVar23 = local_c8.SecondaryData;
                }
                if ((ulonglong)FVar23 <= (ulonglong)FVar30) {
                  FVar23 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
                  if (local_c8.SecondaryData !=
                      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                    FVar23 = local_c8.SecondaryData;
                  }
                  if (((ulonglong)FVar30 < (ulonglong)((longlong)FVar23 + (longlong)local_3c * 8))
                     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    uVar16 = (*pcVar9)();
                    return (bool)uVar16;
                  }
                }
                if (local_40 == local_3c) {
                  local_40 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                       (0x408,&local_c8,&local_3c);
                }
                lVar35 = (longlong)local_40;
                local_40 = local_40 + 1;
                FVar23 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
                if (local_c8.SecondaryData !=
                    (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                  FVar23 = local_c8.SecondaryData;
                }
                *(FWeakObjectPtr *)((longlong)FVar23 + lVar35 * 8) = *(FWeakObjectPtr *)FVar30;
                `UActorChannel::UpdateDeletedSubObjects'::__l2::<lambda_1>::operator()
                          (&local_230,(FNetworkGUID)*(FNetworkGUID_u_0 *)*plVar38,
                           (TWeakObjectPtr<UObject,FWeakObjectPtr> *)FVar30,
                           (uVar3 != '\x01') + TearOff);
                FObjectReplicator::CleanUp((FObjectReplicator *)*plVar38);
                TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                ::Remove((TMapBase<UObject_*,TSharedRef<FObjectReplicator,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>_>
                          *)&this->ReplicationMap,pUVar22);
              }
              goto LAB_147a9aaae;
            }
            iVar18 = (int)plVar25[3];
          } while (iVar18 != -1);
          FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                   ((longlong)FVar30 + 0x20);
          uVar24 = (ulonglong)local_310 & 0xffffffff;
          goto LAB_147a9a86d;
        }
      }
LAB_147a9aaae:
      FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)((longlong)FVar30 + 0x20);
      uVar24 = (ulonglong)local_310 & 0xffffffff;
    } while( true );
  }
  uVar32 = (uint)uVar37;
  pTVar1 = &this->ReplicationMap;
  TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_118,
             (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_270 = '\0';
  cStack_26f = '\0';
  stack0xfffffffffffffd68 = local_118._16_16_;
  local_2a8 = (longlong *)local_118._0_8_;
  auStack_2a0._0_8_ = local_118._8_8_;
  local_288 = local_f8;
  pTStack_280 = pTStack_f0;
  uVar24 = local_118._24_8_ >> 0x20;
  local_278 = (TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_118._28_4_ < *(int *)(local_118._16_8_ + 0x18)) {
    do {
      lVar35 = (longlong)(int)uVar24 * 0x20 + *local_2a8;
      local_320 = *(FWeakObjectPtr *)(*(longlong *)(lVar35 + 8) + 0xd8);
      bVar17 = FWeakObjectPtr::IsValid(&local_320);
      if (!bVar17) {
        pTVar2 = &this->ActorReplicator;
        if ((pTVar2->Object == *(FObjectReplicator **)(lVar35 + 8)) &&
           (local_258 = this,
           bVar17 = `UActorChannel::UpdateDeletedSubObjects'::__l29::<lambda_2>::operator()
                              (&local_258), !bVar17)) {
          local_240 = 0;
          FStack_238.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar2 != (TSharedPtr<FObjectReplicator,1> *)&local_240) {
            pTVar2->Object = (FObjectReplicator *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->ActorReplicator).SharedReferenceCount,&FStack_238);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_238.ReferenceController);
        }
        FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0)
        {
          FVar30 = local_c8.SecondaryData;
        }
        if ((ulonglong)FVar30 <= &local_320) {
          FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0
             ) {
            FVar30 = local_c8.SecondaryData;
          }
          if ((&local_320 < (FWeakObjectPtr *)((longlong)FVar30 + (longlong)local_3c * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                               (0x408,&local_c8,&local_3c);
        }
        FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0)
        {
          FVar30 = local_c8.SecondaryData;
        }
        lVar28 = (longlong)local_40;
        local_40 = local_40 + 1;
        *(FWeakObjectPtr *)((longlong)FVar30 + lVar28 * 8) = local_320;
        `UActorChannel::UpdateDeletedSubObjects'::__l2::<lambda_1>::operator()
                  (&local_230,(FNetworkGUID)**(FNetworkGUID_u_0 **)(lVar35 + 8),
                   (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_320,Destroyed);
        FObjectReplicator::CleanUp(*(FObjectReplicator **)(lVar35 + 8));
        TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_280,uStack_28c);
        local_270 = '\x01';
      }
      uStack_290 = uStack_290 & ~auStack_2a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2a0);
      FVar31 = local_2e8;
      uVar24 = (ulonglong)uStack_28c;
    } while ((int)uStack_28c < *(int *)(auStack_2a0._8_8_ + 0x18));
    if ((local_270 != '\0') && (cStack_26f != '\0')) {
      uVar33 = *(int *)&(local_278->Elements).field_0x8 - *(int *)&(local_278->Elements).field_0x34;
      uVar19 = uVar32;
      if (3 < uVar33) {
        uVar24 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
        lVar35 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        local_244 = (undefined4)lVar35;
        uVar19 = uVar32 << ((byte)lVar35 & 0x1f);
      }
      if (((0 < (int)uVar33) && (local_278->HashSize < (int)uVar19)) ||
         ((int)uVar19 < local_278->HashSize)) {
        local_278->HashSize = uVar19;
        TSet<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<FObjectReplicator,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_278);
      }
    }
  }
  if (this_00 !=
      (TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)0x0) {
    iVar18 = *(int *)&(this_00->Elements).field_0x28;
    TStack_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10;
    iStack_1a0 = 0;
    local_188 = 0;
    iStack_18c = 0;
    if (iVar18 != 0) {
      puVar36 = *(uint **)&(this_00->Elements).field_0x20;
      if (puVar36 == (uint *)0x0) {
        puVar36 = (uint *)TStack_210.Array;
      }
      uVar19 = *puVar36;
      while (uVar19 == 0) {
        lVar35 = (longlong)iStack_1a0;
        local_188 = local_188 + 0x20;
        iStack_1a0 = iStack_1a0 + 1;
        iStack_18c = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
        goto LAB_147a9af51;
        uVar19 = puVar36[lVar35 + 1];
      }
      uVar32 = -uVar19 & uVar19;
      uVar24 = (ulonglong)uVar32 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      local_1f0 = (int)lVar35;
      iStack_18c = local_188 + -1 + local_1f0;
      if (iVar18 < iStack_18c) {
        iStack_18c = iVar18;
      }
    }
LAB_147a9af51:
    uStack_190 = 0xffffffff;
    uStack_184 = local_cc;
    TStack_210._padding_ = CONCAT44(uVar32,iStack_1a0);
    TStack_210.CurrentBitIndex = iStack_18c;
    TStack_210.UnvisitedBitMask = 0xffffffff;
    TStack_210._28_4_ = local_cc;
    TStack_210.BaseBitIndex = local_188;
    local_218 = this_00;
    local_1a8 = this_00;
    uStack_19c = uVar32;
    local_198 = (undefined1 *)TStack_210.Array;
    iVar34 = iStack_18c;
    if (iStack_18c < iVar18) {
      do {
        pFVar4 = (FNetworkGUID_u_0 *)(*(longlong *)&local_218->Elements + (longlong)iVar34 * 0x18);
        bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar4 + 1));
        if (!bVar17) {
          `UActorChannel::UpdateDeletedSubObjects'::__l2::<lambda_1>::operator()
                    (&local_230,(FNetworkGUID)*pFVar4,
                     (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pFVar4 + 1),Destroyed);
        }
        TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
        iVar34 = TStack_210.CurrentBitIndex;
      } while (TStack_210.CurrentBitIndex < (TStack_210.Array)->NumBits);
    }
    UNetConnection::ClearDormantFlushedObjectsForActor
              ((UNetConnection *)this->_padding_,(this->Actor).field0_0x0.DebugPtr);
  }
  if (local_40 == 0) goto LAB_147a9b14d;
  lVar35 = *(longlong *)(this->_padding_ + 0x58);
  if ((*(longlong *)(lVar35 + 0x9c8) == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    uVar16 = (*pcVar9)();
    return (bool)uVar16;
  }
  iVar18 = local_40;
  pFVar7 = *(FNetworkObjectList **)(lVar35 + 0x9c8);
  local_168.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_c8;
  if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    local_168.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_c8.SecondaryData;
  }
  if ((local_40 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    uVar16 = (*pcVar9)();
    return (bool)uVar16;
  }
  local_168.ArrayNum = iVar18;
  pAVar8 = (this->Actor).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar8 == (AActor *)0x0)) {
    local_2d0 = 0;
    if (pAVar8 != (AActor *)0x0) goto LAB_147a9b0f6;
    FVar29.ComparisonIndex.Value = 0;
    FVar29.Number = 0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
LAB_147a9b0f6:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
    local_318.ComparisonIndex.Value = 0;
    local_318.Number = 0;
    local_250 = pAVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_318,(FObjectPtr)&local_250);
    FVar29 = local_318;
  }
  FNetworkObjectList::RemoveMultipleSubObjectChannelReference
            (pFVar7,(FObjectKey)FVar29,&local_168,(UObject *)this);
LAB_147a9b14d:
  uVar16 = local_327;
  if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_c8.SecondaryData);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return (bool)uVar16;
}

// ValidateReplicatedSubObjects @ 147a9f5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UActorChannel::ValidateReplicatedSubObjects(UActorChannel *this)

{
  int iVar1;
  AActor *pAVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FSubObjectReplicatedInfo *this_00;
  uint uVar14;
  byte bVar15;
  byte local_res10;
  FName local_res20;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FSubObjectReplicatedInfo *local_80;
  UActorChannel *local_78;
  FScriptContainerElement *local_70;
  UActorChannel *local_68;
  FString local_60 [2];
  
  pTVar4 = UE::Net::CVarLogAllSubObjectComparisonErrors.Ref;
  bVar15 = 0;
  local_res10 = 0;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 4;
  }
  uVar14 = DataChannelInternal::LegacySubObjectsCollected.ArrayNum - 1;
  iVar1 = *(int *)((longlong)pTVar4->ShadowedValue + lVar9);
  if (-1 < (int)uVar14) {
    lVar9 = (longlong)(int)uVar14 << 4;
    do {
      uVar11 = 0;
      if ((int)uVar14 < DataChannelInternal::LegacySubObjectsCollected.ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_00 = (FSubObjectReplicatedInfo *)
                (DataChannelInternal::LegacySubObjectsCollected.AllocatorInstance.Data + lVar9);
      if (DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data !=
          DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data +
          (longlong)DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum * 0x10) {
        FVar12.Data = DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data;
        do {
          if (*(UObject **)FVar12.Data == this_00->SubObject) {
            uVar11 = (uint)((longlong)FVar12.Data -
                            (longlong)
                            DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data
                           >> 4);
            if (uVar11 != 0xffffffff) {
              uVar7 = 0;
              if ((int)(uVar11 + 1) <= DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar8 = (DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum - uVar11) + -1;
              if (1 < iVar8) {
                iVar8 = 1;
              }
              if (iVar8 != 0) {
                memmove(DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 0x10,
                        DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data +
                        (longlong)
                        (DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum - iVar8) * 0x10,
                        (longlong)iVar8 << 4);
              }
              DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum =
                   DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum + -1;
              bVar10 = 1;
              goto LAB_147a9f701;
            }
            break;
          }
          FVar12.Data = FVar12.Data + 0x10;
        } while (FVar12.Data !=
                 DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data +
                 (longlong)DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum * 0x10);
      }
      bVar10 = 0;
      local_80 = this_00;
      local_78 = this;
      `UActorChannel::ValidateReplicatedSubObjects'::__l4::<lambda_1>::operator()(&local_80);
LAB_147a9f701:
      if (((2 < (byte)LogNetSubObject._0_1_) && (bVar10 == 0)) && (iVar1 != 0)) {
        DataChannelInternal::FSubObjectReplicatedInfo::Describe
                  (this_00,local_60,(this->Actor).field0_0x0.DebugPtr);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetSubObject);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      bVar15 = bVar15 | bVar10 ^ 1;
      lVar9 = lVar9 + -0x10;
      uVar14 = uVar14 - 1;
      local_res10 = bVar15;
    } while (-1 < (int)uVar14);
  }
  uVar14 = DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum - 1;
  if (-1 < (int)uVar14) {
    lVar9 = (longlong)(int)uVar14 << 4;
    do {
      uVar11 = 0;
      if ((int)uVar14 < DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar13 = DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data + lVar9;
      local_70 = pFVar13;
      local_68 = this;
      `UActorChannel::ValidateReplicatedSubObjects'::__l28::<lambda_2>::operator()(&local_70);
      if ((2 < (byte)LogNet._0_1_) && (iVar1 != 0)) {
        pAVar2 = (this->Actor).field0_0x0.DebugPtr;
        if (*(UObjectBaseUtility **)(pFVar13 + 8) == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_c0,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar13 + 8),&local_c0,(UObject *)0x0);
        }
        local_res20 = *(FName *)(*(longlong *)pFVar13 + 0x18);
        ::FName::ToString(&local_res20,&local_a0);
        local_c8 = (FName)pAVar2->_padding_;
        ::FName::ToString(&local_c8,&local_b0);
        ::FString::PrintfImpl(&local_90,L"Subobject %s(%s)::%s [owner %s]");
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      lVar9 = lVar9 + -0x10;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  bVar5 = DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum != 0;
  DataChannelInternal::LegacySubObjectsCollected.ArrayNum = 0;
  if ((DataChannelInternal::LegacySubObjectsCollected.ArrayMax < 0) &&
     (DataChannelInternal::LegacySubObjectsCollected.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&DataChannelInternal::LegacySubObjectsCollected.AllocatorInstance,0,
               &DataChannelInternal::LegacySubObjectsCollected.ArrayMax);
  }
  DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum = 0;
  if ((DataChannelInternal::ReplicatedSubObjectsTracker.ArrayMax < 0) &&
     (DataChannelInternal::ReplicatedSubObjectsTracker.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance,0,
               &DataChannelInternal::ReplicatedSubObjectsTracker.ArrayMax);
  }
  return (bool)(local_res10 | bVar5);
}

// WriteComponentSubObjects @ 147aa06a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::WriteComponentSubObjects
          (UActorChannel *this,UActorComponent *param_1,FOutBunch *param_2,FReplicationFlags param_3
          ,TStaticBitArray<17> *param_4)

{
  AActor *pAVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  pFVar3 = (pAVar1->ReplicatedComponentsInfo).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(pAVar1->ReplicatedComponentsInfo).ArrayNum * 0x28;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*(UActorComponent **)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 0x28;
  }
  pFVar4 = pFVar3 + 0x18;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    pFVar4 = (FScriptContainerElement *)0x0;
  }
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return false;
  }
  bVar2 = WriteSubObjects(this,(UObject *)param_1,(FSubObjectRegistry *)pFVar4,param_2,param_3,
                          param_4);
  return bVar2;
}

// WriteContentBlockForSubObjectDelete @ 147aa0720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
UActorChannel::WriteContentBlockForSubObjectDelete
          (UActorChannel *this,FOutBunch *param_1,FNetworkGUID *param_2,ESubObjectDeleteFlag param_3
          )

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  ESubObjectDeleteFlag local_res20 [8];
  
  cVar4 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection->Driver->IsServer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x125f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar3 = param_1->_padding_;
  FBitWriter::WriteBit((FBitWriter *)param_1,'\0');
  FBitWriter::WriteBit((FBitWriter *)param_1,'\0');
  if ((param_2->field0_0x0).ObjectId == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GuidToDelete.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x1269,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0x1a8))(param_1);
  FBitWriter::WriteBit((FBitWriter *)param_1,'\0');
  FBitWriter::WriteBit((FBitWriter *)param_1,'\x01');
  plVar1 = (longlong *)param_1->_padding_;
  if ((ESubObjectDeleteFlag *)plVar1[1] < (ESubObjectDeleteFlag *)*plVar1 + 1) {
    local_res20[0] = param_3;
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,1);
  }
  else {
    local_res20[0] = *(ESubObjectDeleteFlag *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat4732 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat4732 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::TrackBeginContentBlock
              (&GNetworkProfiler,(UObject *)0x0,(short)param_1->_padding_ - (short)(int)lVar3,
               (UNetConnection *)this->_padding_);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  return;
}

// WriteContentBlockForSubObjectDelete @ 147aa08a0

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
UActorChannel::WriteContentBlockForSubObjectDelete
          (UActorChannel *this,FOutBunch *param_1,FNetworkGUID *param_2)

{
  WriteContentBlockForSubObjectDelete(this,param_1,param_2,Destroyed);
  return;
}

// WriteContentBlockHeader @ 147aa08b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
UActorChannel::WriteContentBlockHeader
          (UActorChannel *this,UObject *param_1,FNetBitWriter *param_2,bool param_3)

{
  longlong lVar1;
  AActor *pAVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  TObjectPtr<AActor>_u_0 local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  
  lVar4 = param_2->_padding_;
  if (0 < GDoReplicationContextString) {
    lVar1 = *(longlong *)(this->_padding_ + 0x68);
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)&param_1->field_0x10,&local_38,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0);
    ::FString::PrintfImpl(&local_58,L"Content Header for object: %s (Class: %s)");
    ::FString::operator=((FString *)(lVar1 + 0xd0),&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FBitWriter::WriteBit((FBitWriter *)param_2,param_3);
  bVar6 = (AActor *)param_1 == (this->Actor).field0_0x0.DebugPtr;
  FBitWriter::WriteBit((FBitWriter *)param_2,bVar6);
  if (bVar6) {
    if ((GNetworkProfiler.bIsTrackingEnabled == false) &&
       (GNetworkProfiler.bShouldTrackingBeEnabled == false)) {
      return;
    }
    if (__CsvProfilerStat4647 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat4647 = true;
    }
    goto LAB_147aa0b79;
  }
  if ((param_1 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x122b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(param_2->_padding_ + 0x168))(param_2);
  cVar5 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(*(longlong *)param_1 + 0x200))();
    if (cVar5 == '\0') {
      FBitWriter::WriteBit((FBitWriter *)param_2,'\0');
      FBitWriter::WriteBit((FBitWriter *)param_2,'\0');
      (**(code **)(param_2->_padding_ + 0x168))(param_2);
      local_res18 = (TObjectPtr<AActor>_u_0)*(TObjectPtr<AActor>_u_0 *)&param_1->field_0x20;
      pAVar2 = (this->Actor).field0_0x0.DebugPtr;
      if (pAVar2 == (AActor *)0x0) {
        bVar6 = local_res18.DebugPtr == (AActor *)0x0;
      }
      else {
        bVar6 = pAVar2 == local_res18.DebugPtr;
      }
      if ((!bVar6) &&
         (cVar5 = (**(code **)((local_res18.DebugPtr)->_padding_ + 0x210))(), cVar5 != '\0')) {
        FBitWriter::WriteBit((FBitWriter *)param_2,'\0');
        (**(code **)(param_2->_padding_ + 0x168))(param_2,&local_res18);
        goto LAB_147aa0b2e;
      }
    }
    FBitWriter::WriteBit((FBitWriter *)param_2,'\x01');
  }
LAB_147aa0b2e:
  if (0 < GDoReplicationContextString) {
    ::FString::Empty((FString *)(*(longlong *)(this->_padding_ + 0x68) + 0xd0));
  }
  if ((GNetworkProfiler.bIsTrackingEnabled == false) &&
     (GNetworkProfiler.bShouldTrackingBeEnabled == false)) {
    return;
  }
  if (__CsvProfilerStat4693 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
    __CsvProfilerStat4693 = true;
  }
LAB_147aa0b79:
  FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
  FNetworkProfiler::TrackBeginContentBlock
            (&GNetworkProfiler,param_1,(short)param_2->_padding_ - (short)(int)lVar4,
             (UNetConnection *)this->_padding_);
  FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  return;
}

// WriteContentBlockPayload @ 147aa0bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UActorChannel::WriteContentBlockPayload
          (UActorChannel *this,UObject *param_1,FNetBitWriter *param_2,bool param_3,
          FNetBitWriter *param_4)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FNetTraceCollector *pFVar9;
  undefined4 local_res18 [4];
  
  uVar1 = (uint)param_2->_padding_;
  pFVar9 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar9 = (param_2->TraceCollector).Ptr;
  }
  uVar5 = 0xffffffff;
  if (pFVar9 != (FNetTraceCollector *)0x0) {
    uVar5 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,uVar1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ContentBlockHeader = UE::Net::CreatePersistentNetDebugName(L"ContentBlockHeader",0x12);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar6 = FNetTrace::TraceName(ContentBlockHeader);
    FVar8 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
  }
  WriteContentBlockHeader(this,param_1,param_2,param_3);
  local_res18[0] = (undefined4)param_4->_padding_;
  (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_res18);
  if (uVar5 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar9,uVar5,(uint)param_2->_padding_);
  }
  pFVar9 = (param_2->TraceCollector).Ptr;
  uVar5 = (uint)param_2->_padding_;
  if (pFVar9 != (FNetTraceCollector *)0x0) {
    FNetTrace::FoldTraceCollector(pFVar9,(param_4->TraceCollector).Ptr,uVar5,0);
  }
  lVar2 = param_4->_padding_;
  pcVar3 = *(code **)(param_2->_padding_ + 400);
  if ((param_4->_padding_ & 0x200) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsError()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  (*pcVar3)(param_2,param_4->_padding_,lVar2);
  return uVar5 - uVar1;
}

// WriteFieldHeaderAndPayload @ 147aa0da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UActorChannel::WriteFieldHeaderAndPayload
          (UActorChannel *this,FNetBitWriter *param_1,FClassNetCache *param_2,
          FFieldNetCache *param_3,FNetFieldExportGroup *param_4,FNetBitWriter *param_5,bool param_6)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FName FVar9;
  UPackageMapClient *this_00;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  uint uVar11;
  FNetTraceCollector *pFVar12;
  FNetTraceCollector *pFVar13;
  FNetTraceCollector *pFVar14;
  FNetTraceCollector *pFVar15;
  undefined4 local_res10 [2];
  uint local_48;
  
  uVar1 = (uint)param_1->_padding_;
  pFVar15 = (FNetTraceCollector *)0x0;
  local_48 = 0xffffffff;
  pFVar14 = pFVar15;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar14 = (param_1->TraceCollector).Ptr;
  }
  if (pFVar14 != (FNetTraceCollector *)0x0) {
    local_48 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,uVar1);
    FVar9 = FFieldVariant::GetFName(&param_3->Field);
    uVar6 = FNetTrace::TraceName(*(FName *)FVar9);
    FVar10 = (pFVar14->Events).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
    }
    *(uint *)((longlong)FVar10 + (ulonglong)local_48 * 0x10) = uVar6;
  }
  if (((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) || (param_6)) {
    uVar6 = param_2->FieldsBase + 1 + (param_2->Fields).ArrayNum;
    if (((int)uVar6 <= param_3->FieldNetIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldCache->FieldNetIndex < MaxFieldNetIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x1423,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
    uVar11 = param_3->FieldNetIndex;
  }
  else {
    if ((param_4 == (FNetFieldExportGroup *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NetFieldExportGroup != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x1413,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
    uVar6 = param_3->FieldChecksum;
    pFVar12 = pFVar15;
    pFVar13 = pFVar15;
    if (0 < (param_4->NetFieldExports).ArrayNum) {
      do {
        uVar11 = (uint)pFVar12;
        uVar8 = 0;
        if ((int)uVar11 < (param_4->NetFieldExports).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          iVar7 = (*pcVar2)();
          return iVar7;
        }
        if (*(uint *)((longlong)pFVar13->NestingStack +
                     (longlong)((param_4->NetFieldExports).AllocatorInstance.Data + 0x14)) == uVar6)
        {
          if ((int)uVar11 < 0) goto LAB_147aa0f09;
          goto LAB_147aa0f2f;
        }
        pFVar12 = (FNetTraceCollector *)(ulonglong)(uVar11 + 1);
        pFVar13 = (FNetTraceCollector *)(pFVar13->NestingStack + 10);
      } while ((int)(uVar11 + 1) < (param_4->NetFieldExports).ArrayNum);
    }
    uVar11 = 0xffffffff;
LAB_147aa0f09:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetFieldExportHandle >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x1417,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
LAB_147aa0f2f:
    this_00 = CastChecked<UPackageMapClient,UPackageMap>
                        ((TObjectPtr<UPackageMap> *)(this->_padding_ + 0x68),NullChecked);
    UPackageMapClient::TrackNetFieldExport(this_00,param_4,uVar11);
    if (((param_4->NetFieldExports).ArrayNum <= (int)uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NetFieldExportHandle < NetFieldExportGroup->NetFieldExports.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x141b,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
    uVar6 = 2;
    if (2 < (param_4->NetFieldExports).ArrayNum) {
      uVar6 = (param_4->NetFieldExports).ArrayNum;
    }
  }
  FBitWriter::WriteIntWrapped((FBitWriter *)param_1,uVar11,uVar6);
  local_res10[0] = (undefined4)param_5->_padding_;
  (**(code **)(param_1->_padding_ + 0x1a0))(param_1,local_res10);
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar15 = (param_1->TraceCollector).Ptr;
  }
  if (pFVar15 != (FNetTraceCollector *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetTraceNameId_5164 = UE::Net::CreatePersistentNetDebugName(L"FieldHeader",0xb);
      _Init_thread_footer(&::_TSS0);
    }
    lVar3 = param_1->_padding_;
    uVar6 = FNetTrace::TraceName(NetTraceNameId_5164);
    FNetTrace::TracePacketContentEvent((param_1->TraceCollector).Ptr,uVar6,uVar1,(uint)lVar3,1);
  }
  pFVar15 = (param_1->TraceCollector).Ptr;
  if (pFVar15 != (FNetTraceCollector *)0x0) {
    FNetTrace::FoldTraceCollector(pFVar15,(param_5->TraceCollector).Ptr,(uint)param_1->_padding_,0);
  }
  uVar4 = local_res10[0];
  pcVar2 = *(code **)(param_1->_padding_ + 400);
  if (((param_5->_padding_ & 0x200) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                         ,0x49,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  (*pcVar2)(param_1,param_5->_padding_,uVar4);
  uVar6 = (uint)param_1->_padding_;
  if (local_48 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar14,local_48,uVar6);
  }
  return uVar6 - uVar1;
}

// WriteSubObjectInBunch @ 147aa16f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::WriteSubObjectInBunch
          (UActorChannel *this,UObject *param_1,FOutBunch *param_2,FReplicationFlags param_3)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  UObject *pUVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  TSharedRef<FObjectReplicator,1> *pTVar10;
  FNetGUIDCache *pFVar11;
  longlong lVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  FNetTraceCollector *this_00;
  FReplicationFlags_u_0 FVar14;
  FReplicationFlags_u_0 local_res20 [2];
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  UObject *local_120;
  FName local_118;
  byte local_110;
  UObject *local_108;
  undefined1 local_100 [8];
  FNetBitWriter local_f8;
  
  local_res20[0] = param_3.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_130.ObjectIndex = 0;
  local_130.ObjectSerialNumber = 0;
  local_108 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UObject *)0x0)) {
    FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_108);
    if (param_1 == (UObject *)0x0) {
      return false;
    }
  }
  else {
    UE::GC::MarkAsReachable(param_1);
    FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_108);
  }
  if (((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0) &&
     (bVar6 = FWeakObjectPtr::IsValid(&local_130), bVar6)) {
    if ((DataChannelInternal::bTestingLegacyMethodForComparison != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataChannelInternal::bTestingLegacyMethodForComparison == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x15cd,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_118,(UObjectBaseUtility *)param_1);
    pUVar4 = DataChannelInternal::CurrentSubObjectOwner;
    if (DataChannelInternal::bTrackReplicatedSubObjects != false) {
      if (DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum ==
          DataChannelInternal::ReplicatedSubObjectsTracker.ArrayMax) {
        DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance,
                        &DataChannelInternal::ReplicatedSubObjectsTracker.ArrayMax);
      }
      FVar5.Data = DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data;
      lVar12 = (longlong)DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum;
      DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum =
           DataChannelInternal::ReplicatedSubObjectsTracker.ArrayNum + 1;
      *(UObject **)
       (DataChannelInternal::ReplicatedSubObjectsTracker.AllocatorInstance.Data + lVar12 * 0x10) =
           param_1;
      *(UObject **)(FVar5.Data + lVar12 * 0x10 + 8) = pUVar4;
    }
    if ((local_res20[0].Value & 0x400) == 0) {
      pTVar10 = FindReplicator(this,param_1,(bool *)0x0);
      cVar2 = *(char *)(this->_padding_ + 0x17c8);
      if ((cVar2 == '\x01') ||
         ((cVar2 == '\x02' &&
          ((pTVar10 == (TSharedRef<FObjectReplicator,1> *)0x0 ||
           (pTVar10->Object->bDirtyForReplay != 0)))))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_128.ObjectIndex = 0;
      local_128.ObjectSerialNumber = 0;
      local_120 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_120);
      pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->
                          ((TSharedPtr<FNetGUIDCache,1> *)
                           (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
      bVar8 = FNetGUIDCache::SupportsObject
                        (pFVar11,param_1,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_128);
      if (!bVar8) {
        pFVar11 = TSharedPtr<FNetGUIDCache,1>::operator->
                            ((TSharedPtr<FNetGUIDCache,1> *)
                             (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
        (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11,local_100,param_1);
      }
      FVar14 = local_res20[0];
      if (pTVar10 == (TSharedRef<FObjectReplicator,1> *)0x0) {
        pTVar10 = CreateReplicator(this,param_1,true);
      }
      if ((pTVar10->Object->bSentSubObjectCreation == 0) || (bVar6)) {
        param_2->bReliable = '\x01';
        bVar6 = true;
        pTVar10->Object->bSentSubObjectCreation = 1;
        if (UE::Net::bEnableNetInitialSubObjects != false) {
          FVar14.Value = FVar14.Value | 2;
        }
      }
      else {
        bVar6 = false;
      }
      uVar9 = 0xffffffff;
      this_00 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        this_00 = (FNetTraceCollector *)param_2->_padding_;
      }
      local_120 = (UObject *)(pTVar10->Object->ObjectNetGUID).field0_0x0.ObjectId;
      if (this_00 != (FNetTraceCollector *)0x0) {
        uVar9 = FNetTrace::BeginPacketContentEvent(this_00,Object,(uint)param_2->_padding_);
        FVar13 = (this_00->Events).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = (ForElementType<FNetTracePacketContentEvent>)&this_00->Events;
        }
        *(UObject **)((longlong)FVar13 + (ulonglong)uVar9 * 0x10) = local_120;
        if (local_120 != (UObject *)0x0) {
          FNetTraceCollector::AddReferencedObjectId(this_00,(ulong64)local_120);
        }
      }
      uVar7 = FObjectReplicator::ReplicateProperties
                        (pTVar10->Object,param_2,(FReplicationFlags)FVar14);
      if ((bVar6) && (!(bool)uVar7)) {
        FNetBitWriter::FNetBitWriter(&local_f8);
        WriteContentBlockPayload(this,param_1,(FNetBitWriter *)param_2,false,&local_f8);
        uVar7 = true;
        FBitWriter::~FBitWriter((FBitWriter *)&local_f8);
      }
      if (uVar9 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(this_00,uVar9,(uint)param_2->_padding_);
      }
    }
    else {
      uVar7 = (**(code **)(this->_padding_ + 0x368))(this,param_1,param_2,local_res20);
    }
    if ((local_110 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_110 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_110 & 4) != 0) {
      FThreadStats::AddMessage(local_118,CycleScopeEnd);
    }
    return (bool)uVar7;
  }
  return false;
}

// WriteSubObjects @ 147aa1ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorChannel::WriteSubObjects
          (UActorChannel *this,UObject *param_1,FSubObjectRegistry *param_2,FOutBunch *param_3,
          FReplicationFlags param_4,TStaticBitArray<17> *param_5)

{
  FWeakObjectPtr *this_00;
  FObjectKey FVar1;
  code *pcVar2;
  uint uVar3;
  UActorChannel *this_01;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UObject *pUVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  undefined1 auStackY_148 [32];
  bool local_f8;
  uint local_f4;
  UActorChannel *local_f0;
  FString local_e8;
  UObject *local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FOutBunch *local_b8;
  FString local_b0;
  FString local_a0;
  TArrayView<int,int> local_90;
  ForElementType<int> local_80;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_148;
  iVar11 = (param_2->Registry).ArrayNum;
  if (iVar11 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = false;
    local_f8 = false;
    local_58 = 0;
    local_80.SecondaryData = (ForElementType<int>)0x0;
    local_54 = 8;
    local_f4 = 0;
    local_f0 = this;
    local_d8 = param_1;
    local_b8 = param_3;
    if (0 < iVar11) {
      do {
        uVar3 = local_f4;
        uVar6 = 0;
        if ((int)local_f4 < iVar11) {
          uVar6 = ~local_f4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        this_00 = (FWeakObjectPtr *)
                  ((param_2->Registry).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14);
        pUVar7 = FWeakObjectPtr::Get(this_00);
        if (pUVar7 == (UObject *)0x0) {
          FVar8 = (ForElementType<int>)&local_80;
          if (local_80.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_80.SecondaryData;
          }
          if ((ulonglong)FVar8 <= &local_f4) {
            FVar8 = (ForElementType<int>)&local_80;
            if (local_80.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_80.SecondaryData;
            }
            if ((&local_f4 < (uint *)((longlong)FVar8 + (longlong)local_54 * 4)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          if (local_58 == local_54) {
            local_58 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_80,&local_54);
          }
          lVar9 = (longlong)local_58;
          FVar8 = (ForElementType<int>)&local_80;
          if (local_80.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_80.SecondaryData;
          }
          local_58 = local_58 + 1;
          *(uint *)((longlong)FVar8 + lVar9 * 4) = local_f4;
        }
        else {
          if ((*(uint *)&pUVar7->field_0x8 >> 0x1e & 1) != 0) {
            if (local_d8 == (UObject *)0x0) {
              ::FString::FString(&local_e8,L"None");
            }
            else {
              local_d0.ComparisonIndex.Value = *(uint *)&local_d8->field_0x18;
              local_d0.Number = *(uint *)&local_d8->field_0x1c;
              ::FName::ToString(&local_d0,&local_e8);
            }
            local_c8 = (FName)((local_f0->Actor).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_c8,&local_a0);
            local_c0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
            local_c0.Number = *(uint *)&pUVar7->field_0x1c;
            ::FName::ToString(&local_c0,&local_b0);
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(SubObjectToReplicate)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                               ,0x1137,L"Found invalid subobject (%s) registered in %s::%s");
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            bVar10 = local_f8;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          this_01 = local_f0;
          FVar1.ObjectIndex = this_00[1].ObjectIndex;
          FVar1.ObjectSerialNumber = this_00[1].ObjectSerialNumber;
          bVar4 = CanSubObjectReplicateToClient
                            (*(APlayerController **)(local_f0->_padding_ + 0x30),
                             this_00[2].ObjectIndex,FVar1,param_5,
                             &DataChannelInternal::CachedNetworkSubsystem->GroupsManager);
          if (bVar4) {
            bVar4 = WriteSubObjectInBunch(this_01,pUVar7,local_b8,param_4);
            bVar10 = (bool)(bVar10 | bVar4);
            local_f8 = bVar10;
          }
        }
        iVar11 = (param_2->Registry).ArrayNum;
        local_f4 = local_f4 + 1;
      } while ((int)local_f4 < iVar11);
    }
    iVar11 = local_58;
    local_90.DataPtr = (int *)&local_80;
    if (local_80.SecondaryData != (ForElementType<int>)0x0) {
      local_90.DataPtr = (int *)local_80.SecondaryData;
    }
    if ((local_58 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_90.ArrayNum = iVar11;
    UE::Net::FSubObjectRegistry::CleanRegistryIndexes(param_2,&local_90);
    if (local_80.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_80.SecondaryData);
    }
  }
  return bVar10;
}

// operator() @ 1505167b0

bool __thiscall `UActorChannel::AppendExportBunches'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790775672>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790775672>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516950

bool __thiscall `UActorChannel::ReplicateActor'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790773250>);
  if (bVar2) {
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x68) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x68),&local_18,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790773250>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505169d6;
    }
  }
  bVar2 = false;
LAB_1505169d6:
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

// operator() @ 150516b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UActorChannel::ValidateReplicatedSubObjects'::__l4::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790772384>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x28) + 0x58) +
                               0x218),&local_18);
    DataChannelInternal::FSubObjectReplicatedInfo::Describe
              (*(FSubObjectReplicatedInfo **)this,&local_28,
               *(AActor **)(*(longlong *)((longlong)this + 8) + 0x68));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790772384>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150516bc0;
    }
  }
  bVar4 = false;
LAB_150516bc0:
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

// operator() @ 150516ee0

bool __thiscall `UActorChannel::ReadContentBlockHeader'::__l467::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790771755>);
  if (bVar2) {
    (**(code **)(**(longlong **)this + 0x2d0))(*(longlong **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790771755>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150516f4b;
    }
  }
  bVar2 = false;
LAB_150516f4b:
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

// operator() @ 150517120

bool __thiscall `UActorChannel::Close'::__l55::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UEnum *this_01;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790774408>);
  if (bVar3) {
    this_01 = StaticEnum<enum_ENetDormancy>();
    if ((this_01 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    UEnum::GetNameByValue(this_01,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x68);
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
    }
    bVar2 = true;
    bVar4 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790774408>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150517238;
    }
  }
  bVar3 = false;
LAB_150517238:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505172d0

bool __thiscall `UActorChannel::CleanUp'::__l72::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790774210>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790774210>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505173c0

bool __thiscall `UActorChannel::ReplicateSubobject'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790772586>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(*(longlong *)(*(longlong *)this + 0x68) + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x68) + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790772586>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150517484;
    }
  }
  bVar4 = false;
LAB_150517484:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
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

// operator() @ 1505175b0

bool __thiscall `UActorChannel::ReplicateSubobject'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790772580>);
  if (bVar5) {
    local_res10 = *(FName *)(*(longlong *)(*(longlong *)(*(longlong *)this + 0x68) + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(*(longlong *)(*(longlong *)this + 0x68) + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    if ((DataChannelInternal::CurrentSubObjectOwner == (UObject *)0x0) ||
       (*(longlong *)&DataChannelInternal::CurrentSubObjectOwner->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res20 = *(FName *)(*(longlong *)&DataChannelInternal::CurrentSubObjectOwner->field_0x10
                              + 0x18);
      ::FName::ToString(&local_res20,&local_48);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790772580>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1505176e0;
    }
  }
  bVar5 = false;
LAB_1505176e0:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1505177d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UActorChannel::ValidateReplicatedSubObjects'::__l28::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790772372>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x28) + 0x58) +
                               0x218),&local_18);
    DataChannelInternal::FSubObjectReplicatedInfo::Describe
              (*(FSubObjectReplicatedInfo **)this,&local_28,
               *(AActor **)(*(longlong *)((longlong)this + 8) + 0x68));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790772372>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150517880;
    }
  }
  bVar4 = false;
LAB_150517880:
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

// operator() @ 1505178d0

bool __thiscall `UActorChannel::UpdateDeletedSubObjects'::__l29::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790772755>);
  if (bVar2) {
    (**(code **)(**(longlong **)this + 0x2d0))(*(longlong **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790772755>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051793b;
    }
  }
  bVar2 = false;
LAB_15051793b:
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

// operator() @ 150517970

bool __thiscall `UActorChannel::ReplicateActor'::__l42::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790773219>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_1840253650790773219>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150517bb0

bool __thiscall `UActorChannel::ReplicateSubobject'::__l23::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790772553>);
  if (bVar5) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    local_res18 = *(FName *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x68) + 0x18);
    ::FName::ToString(&local_res18,&local_48);
    local_res20 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res20,&local_58);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790772553>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150517cc6;
    }
  }
  bVar5 = false;
LAB_150517cc6:
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150517dc0

bool __thiscall `UActorChannel::ReplicateActor'::__l66::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790773200>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_1840253650790773200>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

