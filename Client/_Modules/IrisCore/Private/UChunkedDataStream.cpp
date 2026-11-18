// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 23

// StaticClass @ 14421ec00

UClass * __cdecl UChunkedDataStream::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ChunkedDataStream",
               &Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton,
               StaticRegisterNativesUChunkedDataStream,0x68,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UChunkedDataStream>,
               InternalVTableHelperCtorCaller<UChunkedDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton;
}

// UChunkedDataStream @ 14422a080

UChunkedDataStream * __thiscall
UChunkedDataStream::UChunkedDataStream(UChunkedDataStream *this,FVTableHelper *param_1)

{
  UDataStream::UDataStream((UDataStream *)this,param_1);
  this->_padding_ = (longlong)&___7UChunkedDataStream__6B_;
  this->ChunkedWriter = (FChunkedDataWriter *)0x0;
  this->ChunkedReader = (FChunkedDataReader *)0x0;
  (this->PackageMap).field0_0x0.DebugPtr = (UIrisObjectReferencePackageMap *)0x0;
  return this;
}

// UChunkedDataStream @ 14422a0c0

UChunkedDataStream * __thiscall
UChunkedDataStream::UChunkedDataStream(UChunkedDataStream *this,FObjectInitializer *param_1)

{
  UDataStream::UDataStream((UDataStream *)this,param_1);
  this->_padding_ = (longlong)&___7UChunkedDataStream__6B_;
  this->ChunkedWriter = (FChunkedDataWriter *)0x0;
  this->ChunkedReader = (FChunkedDataReader *)0x0;
  (this->PackageMap).field0_0x0.DebugPtr = (UIrisObjectReferencePackageMap *)0x0;
  return this;
}

// ~UChunkedDataStream @ 14422b3c0

void __thiscall UChunkedDataStream::~UChunkedDataStream(UChunkedDataStream *this)

{
  this->_padding_ = (longlong)&___7UChunkedDataStream__6B_;
  UDataStream::~UDataStream((UDataStream *)this);
  return;
}

// BeginWrite @ 1442325f0

EWriteResult __thiscall
UChunkedDataStream::BeginWrite(UChunkedDataStream *this,FBeginWriteParameters *param_1)

{
  FChunkedDataWriter *pFVar1;
  
  pFVar1 = this->ChunkedWriter;
  if (((pFVar1 != (FChunkedDataWriter *)0x0) && ((pFVar1->SendQueue).ArrayNum != 0)) &&
     ((pFVar1->DataChunksPendingAck).AfterBack - (pFVar1->DataChunksPendingAck).Front < 0x800)) {
    return HasMoreData;
  }
  return NoData;
}

// Deinit @ 144236170

void __thiscall UChunkedDataStream::Deinit(UChunkedDataStream *this)

{
  FChunkedDataWriter *pFVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  ForElementType<FName> FVar3;
  ForElementType<TObjectPtr<UObject>_> FVar4;
  FScriptContainerElement *pFVar5;
  FChunkedDataReader *this_00;
  ForElementType<UE::Net::FNetRefHandle> FVar6;
  
  UDataStream::Deinit((UDataStream *)this);
  pFVar1 = this->ChunkedWriter;
  if (pFVar1 != (FChunkedDataWriter *)0x0) {
    FVar2 = (pFVar1->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar3 = (pFVar1->PackageMapExports).Names.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (pFVar1->PackageMapExports).References.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::
    ~TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>(&pFVar1->DataChunksPendingAck);
    TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
    DestructRange(&pFVar1->DataChunksPendingSend,(pFVar1->DataChunksPendingSend).Front,
                  (pFVar1->DataChunksPendingSend).AfterBack);
    (pFVar1->DataChunksPendingSend).Front = 0;
    (pFVar1->DataChunksPendingSend).AfterBack = 0;
    TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
    Reallocate(&pFVar1->DataChunksPendingSend,0);
    pFVar5 = (pFVar1->DataChunksPendingSend).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>,int>
              ((TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>
                *)(pFVar1->SendQueue).AllocatorInstance.Data,(pFVar1->SendQueue).ArrayNum);
    pFVar5 = (pFVar1->SendQueue).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar1,0x310);
    this->ChunkedWriter = (FChunkedDataWriter *)0x0;
  }
  this_00 = this->ChunkedReader;
  if (this_00 != (FChunkedDataReader *)0x0) {
    UE::Net::Private::FChunkedDataReader::ResetResolvedReferences(this_00);
    FVar3 = (this_00->PackageMapExports).Names.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (this_00->PackageMapExports).References.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    FVar6 = (this_00->ResolvedReferences).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
    DestructRange(&this_00->ReceiveQueue,(this_00->ReceiveQueue).Front,
                  (this_00->ReceiveQueue).AfterBack);
    (this_00->ReceiveQueue).Front = 0;
    (this_00->ReceiveQueue).AfterBack = 0;
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
    Reallocate(&this_00->ReceiveQueue,0);
    pFVar5 = (this_00->ReceiveQueue).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
    DestructRange(&this_00->DataChunksPendingAssembly,(this_00->DataChunksPendingAssembly).Front,
                  (this_00->DataChunksPendingAssembly).AfterBack);
    (this_00->DataChunksPendingAssembly).Front = 0;
    (this_00->DataChunksPendingAssembly).AfterBack = 0;
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
    Reallocate(&this_00->DataChunksPendingAssembly,0);
    pFVar5 = (this_00->DataChunksPendingAssembly).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(this_00,0x140);
    this->ChunkedReader = (FChunkedDataReader *)0x0;
  }
  (this->PackageMap).field0_0x0.DebugPtr = (UIrisObjectReferencePackageMap *)0x0;
  return;
}

// DispatchReceivedPayload @ 144237800

EDispatchResult __thiscall
UChunkedDataStream::DispatchReceivedPayload
          (UChunkedDataStream *this,
          TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> *param_1)

{
  EDispatchResult EVar1;
  TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> local_18;
  
  if (this->ChunkedReader == (FChunkedDataReader *)0x0) {
    return NothingToDispatch;
  }
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  EVar1 = UE::Net::Private::FChunkedDataReader::DispatchReceivedPayload
                    (this->ChunkedReader,&local_18);
  return EVar1;
}

// DispatchReceivedPayloads @ 144237ba0

EDispatchResult __thiscall
UChunkedDataStream::DispatchReceivedPayloads
          (UChunkedDataStream *this,
          TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> *param_1)

{
  EDispatchResult EVar1;
  TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> local_18;
  
  if (this->ChunkedReader == (FChunkedDataReader *)0x0) {
    return NothingToDispatch;
  }
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  EVar1 = UE::Net::Private::FChunkedDataReader::DispatchReceivedPayloads
                    (this->ChunkedReader,&local_18);
  return EVar1;
}

// EnqueuePayload @ 144238300

bool __thiscall
UChunkedDataStream::EnqueuePayload
          (UChunkedDataStream *this,
          TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Net::Private::FChunkedDataWriter::EnqueuePayload(this->ChunkedWriter,param_1);
  return bVar1;
}

// GetNumReceivedPayloadsPendingDispatch @ 14423d050

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall UChunkedDataStream::GetNumReceivedPayloadsPendingDispatch(UChunkedDataStream *this)

{
  uint uVar1;
  uint uVar2;
  FChunkedDataReader *pFVar3;
  FRecvQueueEntry *pFVar4;
  int iVar5;
  uint uVar6;
  
  pFVar3 = this->ChunkedReader;
  if (pFVar3 != (FChunkedDataReader *)0x0) {
    uVar6 = 0;
    uVar1 = (pFVar3->ReceiveQueue).AfterBack;
    uVar2 = (pFVar3->ReceiveQueue).Front;
    for (iVar5 = 0; iVar5 != uVar1 - uVar2; iVar5 = iVar5 + 1) {
      pFVar4 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
               ::operator[](&pFVar3->ReceiveQueue,iVar5);
      uVar6 = uVar6 + (pFVar4->RemainingByteCount == 0);
    }
    return uVar6;
  }
  return 0;
}

// GetPackageMap @ 14423dac0

UIrisObjectReferencePackageMap * __thiscall
UChunkedDataStream::GetPackageMap(UChunkedDataStream *this)

{
  return (this->PackageMap).field0_0x0.DebugPtr;
}

// GetPackageMap @ 14423dad0

UIrisObjectReferencePackageMap * __thiscall
UChunkedDataStream::GetPackageMap(UChunkedDataStream *this)

{
  return (this->PackageMap).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14423de70

UClass * __cdecl UChunkedDataStream::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ChunkedDataStream",
               &Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton,
               StaticRegisterNativesUChunkedDataStream,0x68,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UChunkedDataStream>,
               InternalVTableHelperCtorCaller<UChunkedDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton;
}

// GetQueuedByteCount @ 14423e660

uint __thiscall UChunkedDataStream::GetQueuedByteCount(UChunkedDataStream *this)

{
  if (this->ChunkedWriter != (FChunkedDataWriter *)0x0) {
    return this->ChunkedWriter->CurrentBytesInSendQueue;
  }
  return 0;
}

// HasAcknowledgedAllReliableData @ 14423f7e0

bool __thiscall UChunkedDataStream::HasAcknowledgedAllReliableData(UChunkedDataStream *this)

{
  if (this->ChunkedWriter != (FChunkedDataWriter *)0x0) {
    return (this->ChunkedWriter->SendQueue).ArrayNum == 0;
  }
  return true;
}

// HasError @ 14423f8b0

bool __thiscall UChunkedDataStream::HasError(UChunkedDataStream *this)

{
  if (this->ChunkedReader != (FChunkedDataReader *)0x0) {
    return this->ChunkedReader->bHasError;
  }
  return false;
}

// Init @ 144240ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UChunkedDataStream::Init(UChunkedDataStream *this,FInitParameters *param_1)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UIrisObjectReferencePackageMap *pUVar7;
  FChunkedDataWriter *pFVar8;
  UReplicationSystem *pUVar9;
  FReplicationSystemInternal *pFVar10;
  FChunkedDataReader *pFVar11;
  FNetTokenStore *this_00;
  FNetTokenStoreState *pFVar12;
  longlong *plVar13;
  FChunkedDataWriter *pFVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UDataStream::Init((UDataStream *)this,param_1);
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = pUVar5;
  pUVar7 = (UIrisObjectReferencePackageMap *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar13 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UIrisObjectReferencePackageMap *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UIrisObjectReferencePackageMap *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  (this->PackageMap).field0_0x0.DebugPtr = pUVar7;
  pFVar8 = ::operator_new(0x310);
  pFVar14 = (FChunkedDataWriter *)0x0;
  if (pFVar8 != (FChunkedDataWriter *)0x0) {
    (pFVar8->SendQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->SendQueue).ArrayNum = 0;
    (pFVar8->SendQueue).ArrayMax = 0;
    (pFVar8->DataChunksPendingSend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->DataChunksPendingSend).IndexMask = 0xffffffff;
    (pFVar8->DataChunksPendingSend).Front = 0;
    (pFVar8->DataChunksPendingSend).AfterBack = 0;
    (pFVar8->DataChunksPendingAck).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->DataChunksPendingAck).IndexMask = 0xffffffff;
    (pFVar8->DataChunksPendingAck).Front = 0;
    (pFVar8->DataChunksPendingAck).AfterBack = 0;
    memset(pFVar8->Sent,0,0x100);
    memset(pFVar8->Acked,0,0x100);
    pFVar8->NextSequenceNumber = 0;
    FVar2 = param_1->Name;
    (pFVar8->InitParams).NetExports = param_1->NetExports;
    (pFVar8->InitParams).Name = FVar2;
    uVar1 = param_1->ConnectionId;
    uVar3 = param_1->PacketWindowSize;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    (pFVar8->InitParams).ReplicationSystemId = param_1->ReplicationSystemId;
    (pFVar8->InitParams).ConnectionId = uVar1;
    (pFVar8->InitParams).PacketWindowSize = uVar3;
    *(undefined4 *)&(pFVar8->InitParams).field_0x1c = uVar4;
    (pFVar8->InitParams).DataStreamManager = param_1->DataStreamManager;
    pUVar9 = UE::Net::GetReplicationSystem(param_1->ReplicationSystemId);
    pFVar8->ReplicationSystem = pUVar9;
    pFVar10 = UReplicationSystem::GetReplicationSystemInternal(pUVar9);
    pFVar8->CurrentBytesInSendQueue = 0;
    pFVar8->ObjectReferenceCache = &pFVar10->ObjectReferenceCache;
    pFVar8->ExportsBufferMaxSize = 0x80000;
    pFVar8->SendBufferMaxSize = 0xa00000;
    (pFVar8->PackageMapExports).References.AllocatorInstance.SecondaryData =
         (ForElementType<TObjectPtr<UObject>_>)0x0;
    (pFVar8->PackageMapExports).References.ArrayNum = 0;
    (pFVar8->PackageMapExports).References.ArrayMax = 4;
    (pFVar8->PackageMapExports).Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
    (pFVar8->PackageMapExports).Names.ArrayNum = 0;
    (pFVar8->PackageMapExports).Names.ArrayMax = 4;
    (pFVar8->NetTokensPendingExport).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Net::FNetToken>)0x0;
    (pFVar8->NetTokensPendingExport).ArrayNum = 0;
    (pFVar8->NetTokensPendingExport).ArrayMax = 4;
    pFVar14 = pFVar8;
  }
  this->ChunkedWriter = pFVar14;
  pFVar11 = ::operator_new(0x140);
  if (pFVar11 == (FChunkedDataReader *)0x0) {
    this->ChunkedReader = (FChunkedDataReader *)0x0;
  }
  else {
    (pFVar11->DataChunksPendingAssembly).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->DataChunksPendingAssembly).IndexMask = 0xffffffff;
    (pFVar11->DataChunksPendingAssembly).Front = 0;
    (pFVar11->DataChunksPendingAssembly).AfterBack = 0;
    (pFVar11->ReceiveQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->ReceiveQueue).IndexMask = 0xffffffff;
    (pFVar11->ReceiveQueue).Front = 0;
    (pFVar11->ReceiveQueue).AfterBack = 0;
    pFVar11->ExpectedSeq = 0;
    pFVar11->bHasError = false;
    FVar2 = param_1->Name;
    (pFVar11->InitParams).NetExports = param_1->NetExports;
    (pFVar11->InitParams).Name = FVar2;
    uVar1 = param_1->ConnectionId;
    uVar3 = param_1->PacketWindowSize;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    (pFVar11->InitParams).ReplicationSystemId = param_1->ReplicationSystemId;
    (pFVar11->InitParams).ConnectionId = uVar1;
    (pFVar11->InitParams).PacketWindowSize = uVar3;
    *(undefined4 *)&(pFVar11->InitParams).field_0x1c = uVar4;
    (pFVar11->InitParams).DataStreamManager = param_1->DataStreamManager;
    pUVar9 = UE::Net::GetReplicationSystem(param_1->ReplicationSystemId);
    pFVar11->ReplicationSystem = pUVar9;
    pFVar10 = UReplicationSystem::GetReplicationSystemInternal(pUVar9);
    (pFVar11->ResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
    (pFVar11->ResolveContext).ConnectionId = 0;
    (pFVar11->ResolveContext).AsyncLoadingPriority = -1;
    (pFVar11->ResolveContext).bForceSyncLoad = false;
    (pFVar11->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)0x0;
    (pFVar11->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
    (pFVar11->ResolvedReferences).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Net::FNetRefHandle>)0x0;
    pFVar11->ObjectReferenceCache = &pFVar10->ObjectReferenceCache;
    (pFVar11->ResolvedReferences).ArrayNum = 0;
    (pFVar11->ResolvedReferences).ArrayMax = 4;
    (pFVar11->PackageMapExports).References.AllocatorInstance.SecondaryData =
         (ForElementType<TObjectPtr<UObject>_>)0x0;
    (pFVar11->PackageMapExports).References.ArrayNum = 0;
    (pFVar11->PackageMapExports).References.ArrayMax = 4;
    (pFVar11->PackageMapExports).Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
    (pFVar11->PackageMapExports).Names.ArrayNum = 0;
    (pFVar11->PackageMapExports).Names.ArrayMax = 4;
    pFVar11->MaxUndispatchedPayloadBytes = 0xa00000;
    pFVar11->CurrentUndispatchedPayloadBytes = 0;
    pFVar11->MultiExportsPayLoadOffset = 0;
    this_00 = UReplicationSystem::GetNetTokenStore(pFVar11->ReplicationSystem);
    uVar1 = (pFVar11->InitParams).ConnectionId;
    (pFVar11->ResolveContext).ConnectionId = uVar1;
    pFVar12 = UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState(this_00,uVar1);
    (pFVar11->ResolveContext).RemoteNetTokenStoreState = pFVar12;
    (pFVar11->NetTokenResolveContext).RemoteNetTokenStoreState = pFVar12;
    (pFVar11->NetTokenResolveContext).NetTokenStore = this_00;
    this->ChunkedReader = pFVar11;
  }
  return;
}

// ProcessPacketDeliveryStatus @ 144249930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UChunkedDataStream::ProcessPacketDeliveryStatus
          (UChunkedDataStream *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  uint *puVar1;
  FChunkedDataWriter *this_00;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = this->ChunkedWriter;
  if (this_00 == (FChunkedDataWriter *)0x0) {
    return;
  }
  uVar5 = (uint)param_2;
  if (param_1 == Lost) {
    while (uVar5 != 0) {
      if (((this_00->DataChunksPendingAck).AfterBack == (this_00->DataChunksPendingAck).Front) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PopCount <= static_cast<SizeType>(Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3ec,
                             L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((int)((this_00->DataChunksPendingAck).AfterBack - (this_00->DataChunksPendingAck).Front)
           < 1) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < Num())",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                       ,0x3e3,
                                       L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"
                                      ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (this_00->DataChunksPendingAck).IndexMask;
      uVar6 = (uint)*(ushort *)
                     ((this_00->DataChunksPendingAck).AllocatorInstance.Data +
                     (ulonglong)(uVar5 & (this_00->DataChunksPendingAck).Front) * 2);
      if ((uVar5 == 0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = &(this_00->DataChunksPendingAck).Front;
      *puVar1 = *puVar1 + 1;
      uVar5 = (int)param_2 - 1;
      param_2 = (FDataStreamRecord *)(ulonglong)uVar5;
      uVar3 = (uVar6 & 0x7ff) >> 5;
      this_00->Sent[uVar3] = this_00->Sent[uVar3] & ~(1 << (uVar6 & 0x1f));
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
    }
  }
  else {
    while (uVar5 != 0) {
      if (((this_00->DataChunksPendingAck).AfterBack == (this_00->DataChunksPendingAck).Front) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PopCount <= static_cast<SizeType>(Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3ec,
                             L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((int)((this_00->DataChunksPendingAck).AfterBack - (this_00->DataChunksPendingAck).Front)
           < 1) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < Num())",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                       ,0x3e3,
                                       L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"
                                      ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (this_00->DataChunksPendingAck).IndexMask;
      uVar6 = (uint)*(ushort *)
                     ((this_00->DataChunksPendingAck).AllocatorInstance.Data +
                     (ulonglong)(uVar5 & (this_00->DataChunksPendingAck).Front) * 2);
      if ((uVar5 == 0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = &(this_00->DataChunksPendingAck).Front;
      *puVar1 = *puVar1 + 1;
      uVar5 = (int)param_2 - 1;
      param_2 = (FDataStreamRecord *)(ulonglong)uVar5;
      uVar3 = (uVar6 & 0x7ff) >> 5;
      this_00->Acked[uVar3] = this_00->Acked[uVar3] | 1 << (uVar6 & 0x1f);
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
    }
    UE::Net::Private::FChunkedDataWriter::PopDeliveredChunks(this_00);
  }
  return;
}

// ReadData @ 14424a380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UChunkedDataStream::ReadData(UChunkedDataStream *this,FNetSerializationContext *param_1)

{
  FDataChunk *this_00;
  ForElementType<FNetTracePacketContentEvent> FVar1;
  FScriptContainerElement *pFVar2;
  FChunkedDataReader *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  FNetBitStreamReader *this_02;
  FNetTraceCollector *pFVar14;
  undefined1 auStack_1b8 [32];
  uint uStack_198;
  uint uStack_190;
  uint uStack_188;
  uint uStack_178;
  FNetSerializationContext *pFStack_170;
  FNetBitStreamReader *pFStack_168;
  FNetTraceCollector *pFStack_158;
  FInternalNetSerializationContext FStack_150;
  FInitParameters FStack_118;
  TStringBuilderBase<wchar_t> TStack_e8;
  wchar_t awStack_c8 [64];
  ulonglong auStack_48 [2];
  
  this_01 = this->ChunkedReader;
  if (this_01 == (FChunkedDataReader *)0x0) {
    return;
  }
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this_02 = param_1->BitStreamReader;
  FStack_118.ReplicationSystem = this_01->ReplicationSystem;
  FStack_118.ObjectResolveContext.bForceSyncLoad = (this_01->ResolveContext).bForceSyncLoad;
  FStack_118.ObjectResolveContext._17_7_ = *(undefined7 *)&(this_01->ResolveContext).field_0x11;
  FStack_150.bSerializeObjectReferencesAsRemoteIds = 0;
  FStack_150.bInlineObjectReferenceExports = 0;
  FStack_150.bDowngradeAutonomousProxyRole = 0;
  FStack_150.ReplicationSystem = (UReplicationSystem *)0x0;
  FStack_150.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  FStack_118.ObjectResolveContext.RemoteNetTokenStoreState =
       (this_01->ResolveContext).RemoteNetTokenStoreState;
  FStack_118.ObjectResolveContext.ConnectionId = (this_01->ResolveContext).ConnectionId;
  FStack_118.ObjectResolveContext.AsyncLoadingPriority =
       (this_01->ResolveContext).AsyncLoadingPriority;
  FStack_150.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  FStack_150.ResolveContext.ConnectionId = 0;
  FStack_150.ResolveContext.AsyncLoadingPriority = -1;
  FStack_150.ResolveContext.bForceSyncLoad = false;
  FStack_150.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  FStack_118.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  pFStack_170 = param_1;
  pFStack_168 = this_02;
  UE::Net::Private::FInternalNetSerializationContext::Init(&FStack_150,&FStack_118);
  param_1->LocalConnectionId = (this_01->InitParams).ConnectionId;
  uVar8 = 0xffff;
  param_1->InternalContext = &FStack_150;
  uVar5 = UE::Net::FNetBitStreamReader::ReadBits(this_02,1);
  if ((uVar5 & 1) != 0) {
    while (this_02->OverflowBitCount == 0) {
      uVar5 = 0xffffffff;
      uStack_178 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar13 = param_1->TraceCollector;
      }
      pFStack_158 = pFVar13;
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar5 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this_02->BufferBitPosition);
        uStack_178 = uVar5;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          DataChunk = UE::Net::CreatePersistentNetDebugName(L"DataChunk",9);
          _Init_thread_footer(&::_TSS0);
        }
        uVar6 = FNetTrace::TraceName(DataChunk);
        FVar1 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar1;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar5 * 0x10) = uVar6;
      }
      pFVar14 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar14 = param_1->TraceCollector;
      }
      uVar6 = 0xffffffff;
      if (pFVar14 != (FNetTraceCollector *)0x0) {
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,this_02->BufferBitPosition);
        uVar7 = FNetTrace::TraceName((wchar_t *)0x0);
        FVar1 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar1;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar6 * 0x10) = uVar7;
      }
      uVar7 = UE::Net::FNetBitStreamReader::ReadBits(this_02,1);
      if ((uVar7 & 1) == 0) {
        uVar8 = UE::Net::FNetBitStreamReader::ReadBits(this_02,0xb);
      }
      else {
        uVar8 = (uint)((short)uVar8 + 1U & 0x7ff);
      }
      if (this_02->OverflowBitCount != 0) {
        if (uVar6 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar14,uVar6,this_02->BufferBitPosition);
        }
        param_1 = pFStack_170;
        if (uVar5 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar13,uVar5,this_02->BufferBitPosition);
          param_1 = pFStack_170;
        }
        break;
      }
      uVar9 = (short)uVar8 - this_01->ExpectedSeq & 0x7ff;
      uVar7 = (this_01->DataChunksPendingAssembly).AfterBack -
              (this_01->DataChunksPendingAssembly).Front;
      uVar5 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar5 = uVar7;
      }
      uVar5 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
              ::NormalizeCapacity(&this_01->DataChunksPendingAssembly,uVar5);
      if ((this_01->DataChunksPendingAssembly).IndexMask + 1 < uVar5) {
        TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
        Reallocate(&this_01->DataChunksPendingAssembly,uVar5);
      }
      uVar5 = (this_01->DataChunksPendingAssembly).AfterBack;
      uVar7 = (this_01->DataChunksPendingAssembly).Front;
      uVar10 = uVar5 - uVar7;
      while (uVar10 <= uVar9) {
        uVar5 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
                ::NormalizeCapacity(&this_01->DataChunksPendingAssembly,(uVar5 - uVar7) + 1);
        if ((this_01->DataChunksPendingAssembly).IndexMask + 1 < uVar5) {
          TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
          ::Reallocate(&this_01->DataChunksPendingAssembly,uVar5);
        }
        uVar5 = (this_01->DataChunksPendingAssembly).AfterBack;
        uVar11 = (ulonglong)((this_01->DataChunksPendingAssembly).IndexMask & uVar5);
        (this_01->DataChunksPendingAssembly).AfterBack = uVar5 + 1;
        pFVar2 = (this_01->DataChunksPendingAssembly).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + uVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + uVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + uVar11 * 0x18 + 0x10) = 0;
        *(undefined4 *)(pFVar2 + uVar11 * 0x18 + 0x14) = 0xffff;
        uVar5 = (this_01->DataChunksPendingAssembly).AfterBack;
        uVar7 = (this_01->DataChunksPendingAssembly).Front;
        this_02 = pFStack_168;
        uVar10 = uVar5 - uVar7;
      }
      uVar10 = (uint)uVar9;
      if (((int)(uVar5 - uVar7) <= (int)uVar10) &&
         (uStack_198 = uVar10, uStack_190 = uVar5 - uVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FDataChunk *)
                ((this_01->DataChunksPendingAssembly).AllocatorInstance.Data +
                (ulonglong)
                ((this_01->DataChunksPendingAssembly).Front + uVar10 &
                (this_01->DataChunksPendingAssembly).IndexMask) * 0x18);
      this_00->SequenceNumber = uVar9 + this_01->ExpectedSeq;
      UE::Net::Private::FChunkedDataReader::FDataChunk::Deserialize(this_00,pFStack_170);
      TStack_e8.Base = awStack_c8;
      TStack_e8.CurPos = awStack_c8;
      TStack_e8.bIsDynamic = false;
      TStack_e8.bIsExternal = false;
      TStack_e8.End = (wchar_t *)auStack_48;
      if (this_00->bIsFirstChunk == 0) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u");
      }
      else {
        TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u First part of %u");
      }
      if (uVar6 != 0xffffffff) {
        if (TStack_e8.End < TStack_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&TStack_e8,1);
        }
        *TStack_e8.CurPos = L'\0';
        uVar5 = FNetTrace::TraceName(TStack_e8.Base);
        FVar1 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar1;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar6 * 0x10) = uVar5;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        uStack_188 = (uint)this_01->ExpectedSeq;
        uStack_198 = uVar8 & 0xffff;
        uStack_190 = (uint)this_00->SequenceNumber;
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
      if (uVar6 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar14,uVar6,this_02->BufferBitPosition);
      }
      if (uStack_178 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFStack_158,uStack_178,this_02->BufferBitPosition);
      }
      uVar5 = UE::Net::FNetBitStreamReader::ReadBits(this_02,1);
      param_1 = pFStack_170;
      if ((uVar5 & 1) == 0) break;
    }
  }
  UE::Net::Private::FChunkedDataReader::AssemblePayloadsPendingAssembly(this_01,param_1);
  param_1->InternalContext = (FInternalNetSerializationContext *)0x0;
  return;
}

// SetMaxEnqueuedPayloadBytes @ 1442527b0

void __thiscall
UChunkedDataStream::SetMaxEnqueuedPayloadBytes(UChunkedDataStream *this,uint param_1)

{
  if (this->ChunkedWriter != (FChunkedDataWriter *)0x0) {
    this->ChunkedWriter->SendBufferMaxSize = param_1;
  }
  return;
}

// SetMaxUndispatchedPayloadBytes @ 1442527d0

void __thiscall
UChunkedDataStream::SetMaxUndispatchedPayloadBytes(UChunkedDataStream *this,uint param_1)

{
  if (this->ChunkedReader != (FChunkedDataReader *)0x0) {
    this->ChunkedReader->MaxUndispatchedPayloadBytes = (ulonglong)param_1;
  }
  return;
}

// StaticRegisterNativesUChunkedDataStream @ 1442548a0

void __cdecl UChunkedDataStream::StaticRegisterNativesUChunkedDataStream(void)

{
  return;
}

// WriteData @ 14425c890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EWriteResult __thiscall
UChunkedDataStream::WriteData
          (UChunkedDataStream *this,FNetSerializationContext *param_1,FDataStreamRecord **param_2)

{
  FDataChunk *this_00;
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FChunkedDataWriter *this_01;
  code *pcVar5;
  FName FVar6;
  wchar_t *pwVar7;
  FNetRefHandle_u_0 FVar8;
  wchar_t *pwVar9;
  FNetRefHandle_u_0 FVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FNetSerializationContext *pFVar14;
  bool bVar15;
  EWriteResult EVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  FNetSerializationContext *pFVar22;
  ulonglong uVar23;
  ForElementType<FNetTracePacketContentEvent> FVar24;
  FNetSerializationContext *pFVar25;
  FScriptContainerElement *pFVar26;
  FDataStreamRecord *pFVar27;
  int iVar28;
  FNetTraceCollector *pFVar29;
  FNetTraceCollector *pFVar30;
  undefined1 auStack_528 [32];
  uint uStack_508;
  uint uStack_500;
  char cStack_4f8;
  undefined1 auStack_4f7 [3];
  uint uStack_4f4;
  FNetBitStreamWriter FStack_4f0;
  undefined4 uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  int iStack_4c4;
  uint uStack_4c0;
  uint uStack_4bc;
  FNetBitStreamWriter *pFStack_4b8;
  uint *puStack_4b0;
  FDataStreamRecord **ppFStack_4a8;
  uchar *puStack_498;
  int iStack_490;
  undefined4 uStack_48c;
  uchar *puStack_488;
  int iStack_480;
  undefined4 uStack_47c;
  TArrayView<unsigned_char_const_,int> TStack_478;
  TArrayView<unsigned_char_const_,int> TStack_468;
  FNetSerializationContext FStack_458;
  TStringBuilderBase<wchar_t> TStack_e8;
  wchar_t awStack_c8 [64];
  ulonglong auStack_48 [2];
  
  this_01 = this->ChunkedWriter;
  if (this_01 == (FChunkedDataWriter *)0x0) {
    return NoData;
  }
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_528;
  pFStack_4b8 = param_1->BitStreamWriter;
  ppFStack_4a8 = param_2;
  if ((this_01->SendQueue).ArrayNum == 0) {
    uVar18 = TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
             ::NormalizeCapacity(&this_01->DataChunksPendingSend,
                                 (this_01->DataChunksPendingSend).AfterBack -
                                 (this_01->DataChunksPendingSend).Front);
    TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
    Reallocate(&this_01->DataChunksPendingSend,uVar18);
    uVar18 = TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                       (&this_01->DataChunksPendingAck,
                        (this_01->DataChunksPendingAck).AfterBack -
                        (this_01->DataChunksPendingAck).Front);
    TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::Reallocate
              (&this_01->DataChunksPendingAck,uVar18);
  }
  else if ((pFStack_4b8->OverflowBitCount == 0) &&
          (iVar28 = pFStack_4b8->BufferBitCapacity - pFStack_4b8->BufferBitPosition, iVar28 != 0)) {
    uStack_4f4 = 0;
    UE::Net::FNetBitStreamWriter::CreateSubstream(pFStack_4b8,&FStack_4f0,iVar28 - 1);
    lVar21 = 6;
    pFVar14 = &FStack_458;
    do {
      pFVar25 = param_1;
      pFVar22 = pFVar14;
      FVar6 = (pFVar25->ErrorContext).Error;
      pwVar7 = (pFVar25->ReadJournal).Entries[0].Name;
      FVar8 = (pFVar25->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
      (pFVar22->ErrorContext).ObjectHandle.field0_0x0 =
           (pFVar25->ErrorContext).ObjectHandle.field0_0x0;
      (pFVar22->ErrorContext).Error = FVar6;
      uVar18 = (pFVar25->ReadJournal).Entries[0].BitOffset;
      uVar11 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[0].field_0x14;
      pwVar9 = (pFVar25->ReadJournal).Entries[1].Name;
      (pFVar22->ReadJournal).Entries[0].Name = pwVar7;
      (pFVar22->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar8;
      FVar8 = (pFVar25->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
      uVar19 = (pFVar25->ReadJournal).Entries[1].BitOffset;
      uVar12 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[1].field_0x14;
      (pFVar22->ReadJournal).Entries[0].BitOffset = uVar18;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[0].field_0x14 = uVar11;
      (pFVar22->ReadJournal).Entries[1].Name = pwVar9;
      pwVar7 = (pFVar25->ReadJournal).Entries[2].Name;
      FVar10 = (pFVar25->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
      (pFVar22->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar8;
      (pFVar22->ReadJournal).Entries[1].BitOffset = uVar19;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[1].field_0x14 = uVar12;
      uVar18 = (pFVar25->ReadJournal).Entries[2].BitOffset;
      uVar11 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[2].field_0x14;
      pwVar9 = (pFVar25->ReadJournal).Entries[3].Name;
      (pFVar22->ReadJournal).Entries[2].Name = pwVar7;
      (pFVar22->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar10;
      FVar8 = (pFVar25->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
      uVar19 = (pFVar25->ReadJournal).Entries[3].BitOffset;
      uVar12 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[3].field_0x14;
      (pFVar22->ReadJournal).Entries[2].BitOffset = uVar18;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[2].field_0x14 = uVar11;
      (pFVar22->ReadJournal).Entries[3].Name = pwVar9;
      pwVar7 = (pFVar25->ReadJournal).Entries[4].Name;
      FVar10 = (pFVar25->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
      (pFVar22->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar8;
      (pFVar22->ReadJournal).Entries[3].BitOffset = uVar19;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[3].field_0x14 = uVar12;
      (pFVar22->ReadJournal).Entries[4].Name = pwVar7;
      (pFVar22->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar10;
      lVar21 = lVar21 + -1;
      pFVar14 = (FNetSerializationContext *)&(pFVar22->ReadJournal).Entries[4].BitOffset;
      param_1 = (FNetSerializationContext *)&(pFVar25->ReadJournal).Entries[4].BitOffset;
    } while (lVar21 != 0);
    uVar11 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[4].field_0x14;
    pwVar7 = (pFVar25->ReadJournal).Entries[5].Name;
    uVar17 = (pFVar25->ReadJournal).Entries[8].BitOffset;
    uVar13 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[8].field_0x14;
    FVar8 = (pFVar25->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
    uVar18 = (pFVar25->ReadJournal).Entries[5].BitOffset;
    uVar12 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[5].field_0x14;
    uStack_4d0 = 0xffff;
    (pFVar22->ReadJournal).Entries[4].BitOffset = (pFVar25->ReadJournal).Entries[4].BitOffset;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[4].field_0x14 = uVar11;
    (pFVar22->ReadJournal).Entries[5].Name = pwVar7;
    iStack_4c4 = 0;
    pwVar7 = (pFVar25->ReadJournal).Entries[6].Name;
    FVar10 = (pFVar25->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
    (pFVar22->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar8;
    (pFVar22->ReadJournal).Entries[5].BitOffset = uVar18;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[5].field_0x14 = uVar12;
    uVar18 = (pFVar25->ReadJournal).Entries[6].BitOffset;
    uVar11 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[6].field_0x14;
    pwVar9 = (pFVar25->ReadJournal).Entries[7].Name;
    (pFVar22->ReadJournal).Entries[6].Name = pwVar7;
    (pFVar22->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar10;
    FVar8 = (pFVar25->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
    uVar19 = (pFVar25->ReadJournal).Entries[7].BitOffset;
    uVar12 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[7].field_0x14;
    (pFVar22->ReadJournal).Entries[6].BitOffset = uVar18;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[6].field_0x14 = uVar11;
    (pFVar22->ReadJournal).Entries[7].Name = pwVar9;
    pwVar7 = (pFVar25->ReadJournal).Entries[8].Name;
    FVar10 = (pFVar25->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
    (pFVar22->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar8;
    (pFVar22->ReadJournal).Entries[7].BitOffset = uVar19;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[7].field_0x14 = uVar12;
    (pFVar22->ReadJournal).Entries[8].Name = pwVar7;
    (pFVar22->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar10;
    (pFVar22->ReadJournal).Entries[8].BitOffset = uVar17;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[8].field_0x14 = uVar13;
    FStack_458.BitStreamWriter = &FStack_4f0;
    FStack_458.BitStreamReader = (FNetBitStreamReader *)0x0;
    do {
      iVar28 = iStack_4c4;
      uVar19 = 0;
      uVar18 = uVar19;
      if (0x7ff < (this_01->DataChunksPendingAck).AfterBack - (this_01->DataChunksPendingAck).Front)
      {
LAB_14425c30b:
        pFVar27 = (FDataStreamRecord *)(ulonglong)uStack_4f4;
        if (uStack_4f4 == 0) {
          UE::Net::FNetBitStreamWriter::DiscardSubstream(pFStack_4b8,&FStack_4f0);
          EVar16 = uVar18 * 2;
        }
        else {
          UE::Net::FNetBitStreamWriter::CommitSubstream(pFStack_4b8,&FStack_4f0);
          cStack_4f8 = '\0';
          UE::Net::FNetBitStreamWriter::WriteBits(pFStack_4b8,0,1);
          EVar16 = uVar18 + Ok;
          *ppFStack_4a8 = pFVar27;
        }
        UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&FStack_4f0);
        return EVar16;
      }
      pFVar26 = (this_01->SendQueue).AllocatorInstance.Data;
      iVar1 = (this_01->SendQueue).ArrayNum;
      pFVar3 = pFVar26 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this_01->SendQueue).ArrayNum != iVar1) {
          auStack_4f7[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(auStack_4f7);
        }
        if (pFVar26 == pFVar3) {
          uVar17 = (this_01->DataChunksPendingSend).AfterBack;
          uVar20 = (this_01->DataChunksPendingSend).Front;
          if (uVar17 != uVar20) goto LAB_14425c384;
          goto LAB_14425c30b;
        }
        if (*(int *)(*(longlong *)pFVar26 + 0x18) == 0) break;
        pFVar26 = pFVar26 + 8;
      }
      puVar2 = *(undefined8 **)(*(longlong *)pFVar26 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        puStack_498 = (uchar *)*puVar2;
        iVar1 = *(int *)(puVar2 + 1);
        if ((iVar1 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          EVar16 = (*pcVar5)();
          return EVar16;
        }
        TStack_478._12_4_ = uStack_48c;
        TStack_478.ArrayNum = iVar1;
        TStack_478.DataPtr = puStack_498;
        iStack_490 = iVar1;
        UE::Net::Private::FChunkedDataWriter::SplitPayload
                  (this_01,*(FSendQueueEntry **)pFVar26,&TStack_478,true);
      }
      lVar21 = ((undefined8 *)**(longlong **)pFVar26)[1];
      puStack_488 = *(uchar **)**(longlong **)pFVar26;
      if (((lVar21 < 0) || (0x7fffffff < lVar21)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0 && InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xe7,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        EVar16 = (*pcVar5)();
        return EVar16;
      }
      iStack_480 = (int)lVar21;
      TStack_468._12_4_ = uStack_47c;
      TStack_468.ArrayNum = iStack_480;
      TStack_468.DataPtr = puStack_488;
      UE::Net::Private::FChunkedDataWriter::SplitPayload
                (this_01,*(FSendQueueEntry **)pFVar26,&TStack_468,false);
      uVar17 = (this_01->DataChunksPendingSend).AfterBack;
      uVar20 = (this_01->DataChunksPendingSend).Front;
      if ((int)(uVar17 - uVar20) < 1) goto LAB_14425c30b;
LAB_14425c384:
      uVar18 = 1;
      if ((int)(uVar17 - uVar20) <= iVar28) goto LAB_14425c30b;
      uVar23 = (ulonglong)(uVar20 + iVar28 & (this_01->DataChunksPendingSend).IndexMask);
      pFVar3 = (this_01->DataChunksPendingSend).AllocatorInstance.Data;
      this_00 = (FDataChunk *)(pFVar3 + uVar23 * 0x18);
      uStack_4c8 = (uint)*(ushort *)(pFVar3 + uVar23 * 0x18 + 0x10);
      uStack_4bc = uStack_4c8 & 0x1f;
      puStack_4b0 = this_01->Sent + ((uStack_4c8 & 0x7ff) >> 5);
      if ((*puStack_4b0 >> uStack_4bc & 1) == 0) {
        uVar17 = 0xffffffff;
        pFVar30 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar30 = FStack_458.TraceCollector;
        }
        if (pFVar30 != (FNetTraceCollector *)0x0) {
          uVar18 = 0xffffffff;
          if (FStack_4f0.OverflowBitCount != 0) {
            uVar18 = uVar19;
          }
          uVar17 = FNetTrace::BeginPacketContentEvent
                             (pFVar30,NameId,uVar18 & FStack_4f0.BufferBitPosition);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            DataChunk = UE::Net::CreatePersistentNetDebugName(L"DataChunk",9);
            _Init_thread_footer(&::_TSS0);
          }
          uVar18 = FNetTrace::TraceName(DataChunk);
          FVar4 = (pFVar30->Events).AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar30->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar24 = FVar4;
          }
          *(uint *)((longlong)FVar24 + (ulonglong)uVar17 * 0x10) = uVar18;
        }
        uStack_4c0 = FStack_4f0.BufferBitPosition - FStack_4f0.BufferBitStartOffset;
        cStack_4f8 = 1;
        UE::Net::FNetBitStreamWriter::WriteBits(&FStack_4f0,1,1);
        uVar18 = uStack_4d0 & 0xffff;
        uStack_4cc = (uint)(this_00->SequenceNumber & 0x7ff);
        uStack_4d0 = CONCAT22(uStack_4d0._2_2_,this_00->SequenceNumber) & 0xffff07ff;
        bVar15 = uStack_4cc == (uVar18 + 1 & 0x7ff);
        uVar18 = 0xffffffff;
        pFVar29 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar29 = FStack_458.TraceCollector;
        }
        if (pFVar29 != (FNetTraceCollector *)0x0) {
          if (FStack_4f0.OverflowBitCount != 0) {
            uVar18 = 0;
          }
          uVar18 = FNetTrace::BeginPacketContentEvent
                             (pFVar29,NameId,uVar18 & FStack_4f0.BufferBitPosition);
          uVar19 = FNetTrace::TraceName((wchar_t *)0x0);
          FVar4 = (pFVar29->Events).AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar29->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar24 = FVar4;
          }
          *(uint *)((longlong)FVar24 + (ulonglong)uVar18 * 0x10) = uVar19;
        }
        cStack_4f8 = bVar15;
        UE::Net::FNetBitStreamWriter::WriteBits(&FStack_4f0,(uint)bVar15,1);
        uVar19 = uStack_4cc;
        if (cStack_4f8 == '\0') {
          UE::Net::FNetBitStreamWriter::WriteBits(&FStack_4f0,uStack_4cc,0xb);
        }
        UE::Net::Private::FChunkedDataWriter::FDataChunk::Serialize(this_00,&FStack_458);
        if (FStack_4f0.OverflowBitCount != 0) {
          if (uVar18 != 0xffffffff) {
            uVar19 = 0xffffffff;
            if (FStack_4f0.OverflowBitCount != 0) {
              uVar19 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar29,uVar18,uVar19 & FStack_4f0.BufferBitPosition);
          }
          if (FStack_4f0.OverflowBitCount != 0) {
            UE::Net::FNetBitStreamWriter::Seek(&FStack_4f0,uStack_4c0);
          }
          uVar18 = 1;
          if (uVar17 != 0xffffffff) {
            uVar19 = 0xffffffff;
            if (FStack_4f0.OverflowBitCount != 0) {
              uVar19 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar30,uVar17,uVar19 & FStack_4f0.BufferBitPosition);
          }
          goto LAB_14425c30b;
        }
        TStack_e8.Base = awStack_c8;
        TStack_e8.CurPos = awStack_c8;
        TStack_e8.bIsDynamic = false;
        TStack_e8.bIsExternal = false;
        TStack_e8.End = (wchar_t *)auStack_48;
        if (this_00->bIsFirstChunk == 0) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u");
        }
        else {
          TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u First part of %u");
        }
        if (uVar18 != 0xffffffff) {
          if (TStack_e8.End < TStack_e8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&TStack_e8,1);
          }
          *TStack_e8.CurPos = L'\0';
          uVar20 = FNetTrace::TraceName(TStack_e8.Base);
          FVar4 = (pFVar29->Events).AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar29->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar24 = FVar4;
          }
          *(uint *)((longlong)FVar24 + (ulonglong)uVar18 * 0x10) = uVar20;
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
        if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
          uStack_500 = uStack_4c8;
          uStack_508 = uVar19;
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
        }
        if (uVar18 != 0xffffffff) {
          uVar19 = 0xffffffff;
          if (FStack_4f0.OverflowBitCount != 0) {
            uVar19 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar29,uVar18,uVar19 & FStack_4f0.BufferBitPosition);
        }
        if (FStack_4f0.OverflowBitCount != 0) {
          UE::Net::FNetBitStreamWriter::Seek(&FStack_4f0,uStack_4c0);
        }
        if (uVar17 != 0xffffffff) {
          uVar18 = 0xffffffff;
          if (FStack_4f0.OverflowBitCount != 0) {
            uVar18 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar30,uVar17,uVar18 & FStack_4f0.BufferBitPosition);
        }
        uVar18 = TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                           (&this_01->DataChunksPendingAck,
                            ((this_01->DataChunksPendingAck).AfterBack -
                            (this_01->DataChunksPendingAck).Front) + 1);
        if ((this_01->DataChunksPendingAck).IndexMask + 1 < uVar18) {
          TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::Reallocate
                    (&this_01->DataChunksPendingAck,uVar18);
        }
        uVar18 = (this_01->DataChunksPendingAck).AfterBack;
        (this_01->DataChunksPendingAck).AfterBack = uVar18 + 1;
        *(short *)((this_01->DataChunksPendingAck).AllocatorInstance.Data +
                  (ulonglong)(uVar18 & (this_01->DataChunksPendingAck).IndexMask) * 2) =
             (short)uStack_4c8;
        uStack_4f4 = uStack_4f4 + 1;
        *puStack_4b0 = *puStack_4b0 | 1 << (uStack_4bc & 0x1f);
        iVar28 = iStack_4c4;
      }
      iStack_4c4 = iVar28 + 1;
    } while( true );
  }
  return NoData;
}

