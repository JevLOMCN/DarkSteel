// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 13

// FChunkedDataWriter @ 144228b00

FChunkedDataWriter * __thiscall
UE::Net::Private::FChunkedDataWriter::FChunkedDataWriter
          (FChunkedDataWriter *this,FInitParameters *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  UReplicationSystem *this_00;
  FReplicationSystemInternal *pFVar5;
  
  (this->DataChunksPendingSend).IndexMask = 0xffffffff;
  (this->SendQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SendQueue).ArrayNum = 0;
  (this->SendQueue).ArrayMax = 0;
  (this->DataChunksPendingSend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataChunksPendingSend).Front = 0;
  (this->DataChunksPendingSend).AfterBack = 0;
  (this->DataChunksPendingAck).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataChunksPendingAck).Front = 0;
  (this->DataChunksPendingAck).AfterBack = 0;
  (this->DataChunksPendingAck).IndexMask = 0xffffffff;
  memset(this->Sent,0,0x100);
  memset(this->Acked,0,0x100);
  this->NextSequenceNumber = 0;
  FVar1 = param_1->Name;
  (this->InitParams).NetExports = param_1->NetExports;
  (this->InitParams).Name = FVar1;
  uVar2 = param_1->ConnectionId;
  uVar3 = param_1->PacketWindowSize;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  (this->InitParams).ReplicationSystemId = param_1->ReplicationSystemId;
  (this->InitParams).ConnectionId = uVar2;
  (this->InitParams).PacketWindowSize = uVar3;
  *(undefined4 *)&(this->InitParams).field_0x1c = uVar4;
  (this->InitParams).DataStreamManager = param_1->DataStreamManager;
  this_00 = GetReplicationSystem(param_1->ReplicationSystemId);
  this->ReplicationSystem = this_00;
  pFVar5 = UReplicationSystem::GetReplicationSystemInternal(this_00);
  this->ObjectReferenceCache = &pFVar5->ObjectReferenceCache;
  this->CurrentBytesInSendQueue = 0;
  (this->PackageMapExports).References.AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UObject>_>)0x0;
  this->ExportsBufferMaxSize = 0x80000;
  this->SendBufferMaxSize = 0xa00000;
  (this->PackageMapExports).References.ArrayNum = 0;
  (this->PackageMapExports).References.ArrayMax = 4;
  (this->PackageMapExports).Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->PackageMapExports).Names.ArrayNum = 0;
  (this->PackageMapExports).Names.ArrayMax = 4;
  (this->NetTokensPendingExport).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->NetTokensPendingExport).ArrayNum = 0;
  (this->NetTokensPendingExport).ArrayMax = 4;
  return this;
}

// BeginWrite @ 1442325d0

EWriteResult __thiscall
UE::Net::Private::FChunkedDataWriter::BeginWrite
          (FChunkedDataWriter *this,FBeginWriteParameters *param_1)

{
  if ((this->SendQueue).ArrayNum != 0) {
    return -(uint)((this->DataChunksPendingAck).AfterBack - (this->DataChunksPendingAck).Front <
                  0x800) & HasMoreData;
  }
  return NoData;
}

// CanSend @ 144232f90

bool __thiscall UE::Net::Private::FChunkedDataWriter::CanSend(FChunkedDataWriter *this)

{
  return (this->DataChunksPendingAck).AfterBack - (this->DataChunksPendingAck).Front < 0x800;
}

// CreateExportPayload @ 144234ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FReferencesForExport * __thiscall
UE::Net::Private::FChunkedDataWriter::CreateExportPayload(FChunkedDataWriter *this)

{
  uint *puVar1;
  code *pcVar2;
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  EWriteExportsResult EVar8;
  int iVar9;
  FNetTraceCollector *pFVar10;
  longlong lVar11;
  FReferencesForExport *pFVar12;
  FNetTraceCollector *pFVar13;
  FNetTraceCollector *pFVar14;
  undefined8 *puVar15;
  void *pvVar16;
  ForElementType<FNetTracePacketContentEvent> FVar17;
  uint uVar18;
  FNetTraceCollector *pFVar19;
  uint uVar20;
  undefined1 auStackY_5c8 [32];
  uint local_584;
  FNetBitStreamWriter local_580;
  FIrisPackageMapExportsQuantizedType *local_560;
  FNetExportContext local_558;
  FNetRefHandle_u_0 *local_548;
  FNetRefHandle_u_0 local_540;
  FObjectReferenceCache *local_538;
  ForElementType<UE::Net::FNetToken> local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FIrisPackageMapExportsQuantizedType *local_518;
  uint uStack_510;
  undefined4 uStack_50c;
  TArrayView<UE::Net::FNetToken_const_,int> local_508;
  TArrayView<UE::Net::FObjectNetSerializerQuantizedReferenceStorage_const_,int> local_4f8;
  FInternalNetSerializationContext local_4e8;
  FIrisPackageMapExportsQuantizedType local_4b0;
  FNetRefHandle_u_0 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390 [95];
  undefined4 local_98;
  undefined8 local_90;
  FNetBitStreamWriter *local_88;
  FNetTraceCollector *local_80;
  FInternalNetSerializationContext *local_78;
  FNetExportContext *pFStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  if ((((this->PackageMapExports).References.ArrayNum == 0) &&
      ((this->PackageMapExports).Names.ArrayNum == 0)) ||
     ((this->NetTokensPendingExport).ArrayNum != 0)) {
    pFVar14 = (FNetTraceCollector *)0x0;
  }
  else {
    pFVar10 = ::operator_new(0x458);
    if (pFVar10 == (FNetTraceCollector *)0x0) {
      pFVar10 = (FNetTraceCollector *)0x0;
    }
    else {
      memset(pFVar10->NestingStack + 4,0,0x100);
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x11] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x12] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x13] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x14] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x15] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x16] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x17] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x18] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x19] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x20] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x21] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x22] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x23] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x24] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x25] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x26] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x27] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x28] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x30] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x31] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x34] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x35] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x36] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x37] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x38] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x39] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x3a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x3b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x3c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x3d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x3e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x3f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x40] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x41] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x42] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x43] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x44] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x45] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x46] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x47] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x48] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x49] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x4a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x4b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x4c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x4d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x4e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x4f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x50] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x51] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x52] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x53] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x54] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x55] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x56] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x57] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x58] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x59] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x5a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x5b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x5c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x5d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x5e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x5f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x60] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x61] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x62] = '\0';
      (pTVar3->AllocatorInstance).InlineData[99] = '\0';
      (pTVar3->AllocatorInstance).InlineData[100] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x65] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x66] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x67] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x68] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x69] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x6a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x6b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x6c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x6d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x6e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x6f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x70] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x71] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x72] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x73] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x74] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x75] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x76] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x77] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x78] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x79] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x7a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x7b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x7c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x7d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x7e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x7f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x80] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x81] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x82] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x83] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x84] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x85] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x86] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x87] = '\0';
      memset((pFVar10->Events).AllocatorInstance.InlineData + 0x98,0,0x200);
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2a8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2aa] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ab] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ac] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ad] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ae] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2af] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2b0] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b1] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b2] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b3] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b4] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2b8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2b9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ba] = '\0';
      (pTVar3->AllocatorInstance).InlineData[699] = '\0';
      (pTVar3->AllocatorInstance).InlineData[700] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2bd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2be] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2bf] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2c0] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c1] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c2] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c3] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c4] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2c8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2c9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ca] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2cb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2cc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2cd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ce] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2cf] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2d0] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d1] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d2] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d3] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d4] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2d8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2d9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2da] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2db] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2dc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2dd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2de] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2df] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2e0] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e1] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e2] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e3] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e4] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2e8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2e9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ea] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2eb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ec] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ed] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ee] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ef] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2f0] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f1] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f2] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f3] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f4] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2f8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2f9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2fa] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2fb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2fc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2fd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2fe] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2ff] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x300] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x301] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x302] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x303] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x304] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x305] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x306] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x307] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x308] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x309] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x30a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x30b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x30c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x30d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x30e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x30f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x310] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x311] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x312] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x313] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x314] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x315] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x316] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x317] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x318] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x319] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x31a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x31b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x31c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x31d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x31e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[799] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[800] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x321] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x322] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x323] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x324] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x325] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x326] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x327] = '\0';
      pFVar10->NestingStack[0] = 0;
      pFVar10->NestingStack[1] = 0;
      pFVar10->NestingStack[2] = 0;
      pFVar10->NestingStack[3] = 0;
      pFVar10->PendingBunchEventIndex = 0;
      pFVar10->_padding_ = 0;
      (pFVar10->Events).AllocatorInstance.InlineData[0] = '\0';
      (pFVar10->Events).AllocatorInstance.InlineData[1] = '\0';
      (pFVar10->Events).AllocatorInstance.InlineData[2] = '\0';
      (pFVar10->Events).AllocatorInstance.InlineData[3] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[4] = ' ';
      (pTVar3->AllocatorInstance).InlineData[5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x88] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x89] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x8a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x8b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x8c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x8d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x8e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x8f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x90] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x91] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x92] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x93] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x94] = ' ';
      (pTVar3->AllocatorInstance).InlineData[0x95] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x96] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x97] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x298] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x299] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x29f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2a0] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a1] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a2] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a3] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x2a4] = ' ';
      (pTVar3->AllocatorInstance).InlineData[0x2a5] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a6] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x2a7] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x328] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x329] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x32f] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x330] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x331] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x332] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x333] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x334] = ' ';
      (pTVar3->AllocatorInstance).InlineData[0x335] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x336] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x337] = '\0';
      pTVar3 = &pFVar10->Events;
      (pTVar3->AllocatorInstance).InlineData[0x338] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x339] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x33f] = '\0';
    }
    pFVar14 = (FNetTraceCollector *)0x0;
    Core::Private::ReallocGrow<2,TAlignedHeapAllocator<0>::ForAnyElementType>
              (1,1,this->ExportsBufferMaxSize,(ForAnyElementType *)pFVar10,
               (int *)(pFVar10->NestingStack + 2),(int *)(pFVar10->NestingStack + 3));
    FNetBitStreamWriter::FNetBitStreamWriter(&local_580);
    FNetBitStreamWriter::InitBytes
              (&local_580,*(void **)pFVar10->NestingStack,pFVar10->NestingStack[2]);
    lVar11 = 0x20;
    local_3a8.Value = 0;
    puVar15 = local_390;
    local_3a0 = 0;
    do {
      *puVar15 = 0;
      puVar15 = puVar15 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    local_88 = &local_580;
    local_48 = local_48 & 0xfffffffc;
    local_78 = (FInternalNetSerializationContext *)0x0;
    pFStack_70 = (FNetExportContext *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uVar18 = 0;
    local_98 = 0;
    local_90 = 0;
    local_80 = (FNetTraceCollector *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0xffffffff;
    FInternalNetSerializationContext::FInternalNetSerializationContext
              (&local_4e8,this->ReplicationSystem);
    local_78 = &local_4e8;
    local_4b0.ObjectReferenceStorage.AllocatorInstance.SecondaryData.Data =
         (FObjectNetSerializerQuantizedReferenceStorage *)0x0;
    local_50 = (this->InitParams).ConnectionId;
    iStack_520 = (this->NetTokensPendingExport).ArrayNum;
    local_528 = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    local_4b0.ObjectReferenceStorage.ArrayNum = 0;
    local_4b0.ObjectReferenceStorage.ArrayMaxCapacity = 4;
    if (local_528 == (ForElementType<UE::Net::FNetToken>)0x0) {
      local_528 = (ForElementType<UE::Net::FNetToken>)&this->NetTokensPendingExport;
    }
    local_4b0.NameStorage.AllocatorInstance.SecondaryData.Data = (FQuantizedName *)0x0;
    local_4b0.NameStorage.ArrayNum = 0;
    local_4b0.NameStorage.ArrayMaxCapacity = 4;
    local_4b0.NetTokenStorage.AllocatorInstance.SecondaryData.Data = (FNetToken *)0x0;
    local_4b0.NetTokenStorage.ArrayNum = 0;
    local_4b0.NetTokenStorage.ArrayMaxCapacity = 4;
    if ((iStack_520 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FReferencesForExport *)(*pcVar2)();
      return pFVar12;
    }
    local_508._12_4_ = uStack_51c;
    local_508.ArrayNum = iStack_520;
    local_508.DataPtr = (FNetToken *)local_528;
    FIrisPackageMapExportsUtil::Quantize
              ((FNetSerializationContext *)&local_3a8._s_0,&this->PackageMapExports,&local_508,
               &local_4b0);
    local_558.BatchExports = (FBatchExports *)(pFVar10->NestingStack + 4);
    local_558.AcknowledgedExports = &((this->InitParams).NetExports)->AcknowledgedExports;
    local_548 = &local_3a8;
    local_540.Value = (ulong64)pFStack_70;
    pFStack_70 = &local_558;
    pFVar13 = pFVar14;
    pFVar19 = pFVar14;
    if (GNetTraceRuntimeVerbosity == 0) {
      local_584 = local_580.BufferBitPosition - local_580.BufferBitStartOffset;
      local_80 = (FNetTraceCollector *)0x0;
      uVar5 = 0xffffffff;
    }
    else {
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar13 = FNetTrace::CreateTraceCollector();
      }
      local_584 = local_580.BufferBitPosition - local_580.BufferBitStartOffset;
      uVar5 = 0xffffffff;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar19 = pFVar13;
      }
      local_80 = pFVar13;
      if (pFVar19 != (FNetTraceCollector *)0x0) {
        uVar5 = 0xffffffff;
        if (local_580.OverflowBitCount != 0) {
          uVar5 = uVar18;
        }
        uVar5 = FNetTrace::BeginPacketContentEvent
                          (pFVar19,NameId,uVar5 & local_580.BufferBitPosition);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ExportPayload = CreatePersistentNetDebugName(L"ExportPayload",0xd);
          _Init_thread_footer(&::_TSS0);
        }
        uVar6 = FNetTrace::TraceName(ExportPayload);
        FVar17 = (pFVar19->Events).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar17 = (ForElementType<FNetTracePacketContentEvent>)&pFVar19->Events;
        }
        *(uint *)((longlong)FVar17 + (ulonglong)uVar5 * 0x10) = uVar6;
      }
    }
    FNetBitStreamWriter::WriteBits(&local_580,0,0x20);
    uStack_510 = local_4b0.ObjectReferenceStorage.ArrayNum;
    local_538 = this->ObjectReferenceCache;
    local_560 = &local_4b0;
    if ((FIrisPackageMapExportsQuantizedType *)
        local_4b0.ObjectReferenceStorage.AllocatorInstance.SecondaryData.Data !=
        (FIrisPackageMapExportsQuantizedType *)0x0) {
      local_560 = (FIrisPackageMapExportsQuantizedType *)
                  local_4b0.ObjectReferenceStorage.AllocatorInstance.SecondaryData.Data;
    }
    if (((int)local_4b0.ObjectReferenceStorage.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FReferencesForExport *)(*pcVar2)();
      return pFVar12;
    }
    local_4f8._12_4_ = uStack_50c;
    local_4f8.ArrayNum = uStack_510;
    local_518 = local_560;
    local_4f8.DataPtr = (FObjectNetSerializerQuantizedReferenceStorage *)local_560;
    FObjectReferenceCache::AddPendingExports
              (local_538,(FNetSerializationContext *)&local_3a8._s_0,&local_4f8);
    FIrisPackageMapExportsUtil::Serialize((FNetSerializationContext *)&local_3a8._s_0,&local_4b0);
    iVar7 = local_580.BufferBitPosition - local_580.BufferBitStartOffset;
    EVar8 = FObjectReferenceCache::WritePendingExports
                      (this->ObjectReferenceCache,(FNetSerializationContext *)&local_3a8._s_0,0);
    if (EVar8 == BitStreamOverflow) {
      if (uVar5 != 0xffffffff) {
        uVar6 = 0xffffffff;
        if (local_580.OverflowBitCount != 0) {
          uVar6 = uVar18;
        }
        FNetTrace::EndPacketContentEvent(pFVar19,uVar5,uVar6 & local_580.BufferBitPosition);
      }
      local_548[0x67] = local_540;
      FIrisPackageMapExportsUtil::FreeDynamicState(&local_4b0);
      if ((local_4b0.NetTokenStorage.AllocatorInstance.SecondaryData.Data != (FNetToken *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                             ,0x1f,L"Data allocated for dynamic states must be explictly freed"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FReferencesForExport *)(*pcVar2)();
        return pFVar12;
      }
      if ((local_4b0.NameStorage.AllocatorInstance.SecondaryData.Data != (FQuantizedName *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                             ,0x1f,L"Data allocated for dynamic states must be explictly freed"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FReferencesForExport *)(*pcVar2)();
        return pFVar12;
      }
      if (((FIrisPackageMapExportsQuantizedType *)
           local_4b0.ObjectReferenceStorage.AllocatorInstance.SecondaryData.Data !=
           (FIrisPackageMapExportsQuantizedType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                             ,0x1f,L"Data allocated for dynamic states must be explictly freed"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FReferencesForExport *)(*pcVar2)();
        return pFVar12;
      }
      FNetBitStreamWriter::~FNetBitStreamWriter(&local_580);
      if (pFVar10 != (FNetTraceCollector *)0x0) {
        pFVar13 = *(FNetTraceCollector **)((pFVar10->Events).AllocatorInstance.InlineData + 0x338);
        if (pFVar13 != (FNetTraceCollector *)0x0) {
          FNetTrace::DestroyTraceCollector(pFVar13);
        }
        pvVar16 = *(void **)((pFVar10->Events).AllocatorInstance.InlineData + 0x328);
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        pvVar16 = *(void **)((pFVar10->Events).AllocatorInstance.InlineData + 0x298);
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        pvVar16 = *(void **)((pFVar10->Events).AllocatorInstance.InlineData + 0x88);
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        if (*(void **)&pFVar10->PendingBunchEventIndex != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar10->PendingBunchEventIndex);
        }
        if (*(void **)pFVar10->NestingStack != (void *)0x0) {
          FMemory::Free(*(void **)pFVar10->NestingStack);
        }
        ::operator_delete(pFVar10,0x458);
      }
    }
    else {
      if (EVar8 == WroteExports) {
        uVar6 = local_580.BufferBitPosition - local_580.BufferBitStartOffset;
        if ((local_580.OverflowBitCount != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Writer.IsOverflown()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                               ,0x18,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FReferencesForExport *)(*pcVar2)();
          return pFVar12;
        }
        FNetBitStreamWriter::Seek(&local_580,local_584);
        FNetBitStreamWriter::WriteBits(&local_580,(iVar7 - local_584) - 0x20,0x20);
        if ((uVar6 < local_580.BufferBitPosition - local_580.BufferBitStartOffset) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Writer.GetPosBits() <= OriginalPos",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                               ,0x21,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FReferencesForExport *)(*pcVar2)();
          return pFVar12;
        }
        FNetBitStreamWriter::Seek(&local_580,uVar6);
      }
      FNetBitStreamWriter::CommitWrites(&local_580);
      *(FNetTraceCollector **)((pFVar10->Events).AllocatorInstance.InlineData + 0x338) = pFVar13;
      uVar6 = (local_580.BufferBitPosition - local_580.BufferBitStartOffset) + 7 >> 3;
      if (uVar5 != 0xffffffff) {
        uVar20 = 0xffffffff;
        if (local_580.OverflowBitCount != 0) {
          uVar20 = uVar18;
        }
        FNetTrace::EndPacketContentEvent(pFVar19,uVar5,uVar20 & local_580.BufferBitPosition);
      }
      local_548[0x67] = local_540;
      FIrisPackageMapExportsUtil::FreeDynamicState(&local_4b0);
      if ((local_4b0.NetTokenStorage.AllocatorInstance.SecondaryData.Data != (FNetToken *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                             ,0x1f,L"Data allocated for dynamic states must be explictly freed"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FReferencesForExport *)(*pcVar2)();
        return pFVar12;
      }
      if ((local_4b0.NameStorage.AllocatorInstance.SecondaryData.Data != (FQuantizedName *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                             ,0x1f,L"Data allocated for dynamic states must be explictly freed"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FReferencesForExport *)(*pcVar2)();
        return pFVar12;
      }
      if (((FIrisPackageMapExportsQuantizedType *)
           local_4b0.ObjectReferenceStorage.AllocatorInstance.SecondaryData.Data !=
           (FIrisPackageMapExportsQuantizedType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                             ,0x1f,L"Data allocated for dynamic states must be explictly freed"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FReferencesForExport *)(*pcVar2)();
        return pFVar12;
      }
      FNetBitStreamWriter::~FNetBitStreamWriter(&local_580);
      uVar18 = pFVar10->NestingStack[2];
      puVar1 = pFVar10->NestingStack + 2;
      pFVar14 = pFVar10;
      if ((int)uVar18 < (int)uVar6) {
        iVar7 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<0>::ForAnyElementType>
                          (1,1,uVar6 - uVar18,(ForAnyElementType *)pFVar10,(int *)puVar1,
                           (int *)(pFVar10->NestingStack + 3));
        memset((void *)((longlong)iVar7 + *(longlong *)pFVar10->NestingStack),0,
               (longlong)(int)(uVar6 - uVar18));
      }
      else if ((int)uVar6 < (int)uVar18) {
        iVar7 = uVar18 - uVar6;
        if (iVar7 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FReferencesForExport *)(*pcVar2)();
            return pFVar12;
          }
        }
        else if (iVar7 == 0) {
          return (FReferencesForExport *)pFVar10;
        }
        pvVar16 = (void *)((ulonglong)uVar6 + *(longlong *)pFVar10->NestingStack);
        iVar9 = (*puVar1 - iVar7) - uVar6;
        if (iVar9 != 0) {
          memmove(pvVar16,(void *)((longlong)iVar7 + (longlong)pvVar16),(longlong)iVar9);
        }
        *puVar1 = *puVar1 - iVar7;
        Core::Private::ReallocShrink<2,TAlignedHeapAllocator<0>::ForAnyElementType>
                  (1,1,(ForAnyElementType *)pFVar10,*puVar1,(int *)(pFVar10->NestingStack + 3));
      }
    }
  }
  return (FReferencesForExport *)pFVar14;
}

// EnqueuePayload @ 144237f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FChunkedDataWriter::EnqueuePayload
          (FChunkedDataWriter *this,
          TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> *param_1)

{
  FBatchExports *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  ForElementType<UE::Net::FNetObjectReference> FVar6;
  ForElementType<UE::Net::FNetRefHandle> FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FReferencesForExport *pFVar14;
  FReferencesForExport *pFVar15;
  uint uVar16;
  FReferencesForExport *pFVar17;
  FReferencesForExport *pFVar18;
  int iVar19;
  undefined8 local_28 [2];
  
  if ((param_1->Object == (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  iVar19 = (int)param_1->Object->ArrayNum;
  if (iVar19 != 0) {
    uVar16 = this->CurrentBytesInSendQueue + iVar19;
    bVar11 = uVar16 <= this->SendBufferMaxSize;
    pFVar18 = (FReferencesForExport *)0x0;
    if (this->SendBufferMaxSize < uVar16) {
      pFVar14 = (FReferencesForExport *)0x0;
    }
    else {
      pFVar14 = CreateExportPayload(this);
      if (pFVar14 != (FReferencesForExport *)0x0) {
        iVar19 = iVar19 + (pFVar14->ExportsPayload).ArrayNum;
        bVar11 = this->CurrentBytesInSendQueue + iVar19 <= this->SendBufferMaxSize;
      }
    }
    if (bVar11) {
      pFVar15 = ::operator_new(0x20);
      pFVar17 = pFVar18;
      if (pFVar15 != (FReferencesForExport *)0x0) {
        (pFVar15->ExportsPayload).AllocatorInstance.Data =
             (FScriptContainerElement *)param_1->Object;
        pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)&(pFVar15->ExportsPayload).ArrayNum = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar1 = &pFVar15->BatchExports;
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[0] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[1] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[2] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[3] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[4] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[5] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[6] = '\0';
        (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData[7] = '\0';
        pTVar10 = &(pFVar15->BatchExports).HandlesExportedInCurrentBatch;
        (pTVar10->AllocatorInstance).InlineData[8] = '\0';
        (pTVar10->AllocatorInstance).InlineData[9] = '\0';
        (pTVar10->AllocatorInstance).InlineData[10] = '\0';
        (pTVar10->AllocatorInstance).InlineData[0xb] = '\0';
        pFVar17 = pFVar15;
      }
      iVar13 = (this->SendQueue).ArrayNum;
      piVar2 = &(this->SendQueue).ArrayMax;
      if (iVar13 == *piVar2) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar2);
      }
      (this->SendQueue).ArrayNum = iVar13 + 1;
      *(FReferencesForExport **)((this->SendQueue).AllocatorInstance.Data + (longlong)iVar13 * 8) =
           pFVar17;
      pFVar1 = &pFVar17->BatchExports;
      if (pFVar1 != (FBatchExports *)local_28) {
        puVar4 = *(undefined8 **)
                  (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData;
        *(FReferencesForExport **)
         (pFVar1->HandlesExportedInCurrentBatch).AllocatorInstance.InlineData = pFVar14;
        pFVar14 = pFVar18;
        if (puVar4 != (undefined8 *)0x0) {
          if ((FNetTraceCollector *)puVar4[0x8a] != (FNetTraceCollector *)0x0) {
            FNetTrace::DestroyTraceCollector((FNetTraceCollector *)puVar4[0x8a]);
          }
          if ((void *)puVar4[0x88] != (void *)0x0) {
            FMemory::Free((void *)puVar4[0x88]);
          }
          if ((void *)puVar4[0x76] != (void *)0x0) {
            FMemory::Free((void *)puVar4[0x76]);
          }
          if ((void *)puVar4[0x34] != (void *)0x0) {
            FMemory::Free((void *)puVar4[0x34]);
          }
          if ((void *)puVar4[0x22] != (void *)0x0) {
            FMemory::Free((void *)puVar4[0x22]);
          }
          if ((void *)*puVar4 != (void *)0x0) {
            FMemory::Free((void *)*puVar4);
          }
          ::operator_delete(puVar4,0x458);
        }
      }
      this->CurrentBytesInSendQueue = this->CurrentBytesInSendQueue + iVar19;
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>::operator->(param_1);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
      piVar2 = &(this->PackageMapExports).References.ArrayMax;
      iVar19 = *piVar2;
      (this->PackageMapExports).References.ArrayNum = 0;
      if (iVar19 < 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
                  (8,8,0,(ForElementType<TObjectPtr<UObject>_> *)&this->PackageMapExports,0,piVar2);
      }
      iVar19 = (this->PackageMapExports).Names.ArrayMax;
      (this->PackageMapExports).Names.ArrayNum = 0;
      if (iVar19 < 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                  (8,4,0,&(this->PackageMapExports).Names.AllocatorInstance,0,
                   &(this->PackageMapExports).Names.ArrayMax);
      }
      (this->NetTokensPendingExport).ArrayNum = 0;
      if ((this->NetTokensPendingExport).ArrayMax < 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                  (4,4,0,&(this->NetTokensPendingExport).AllocatorInstance,0,
                   &(this->NetTokensPendingExport).ArrayMax);
      }
      bVar11 = true;
    }
    else {
      if (2 < (byte)LogIrisChunkedDataStream._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
      bVar11 = false;
    }
    if (pFVar14 != (FReferencesForExport *)0x0) {
      if (pFVar14->TraceCollector != (FNetTraceCollector *)0x0) {
        FNetTrace::DestroyTraceCollector(pFVar14->TraceCollector);
      }
      FVar5 = (pFVar14->BatchExports).NetTokensPendingExportInCurrentBatch.AllocatorInstance.
              SecondaryData;
      if (FVar5 != (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      FVar6 = (pFVar14->BatchExports).ReferencesPendingExportInCurrentBatch.AllocatorInstance.
              SecondaryData;
      if (FVar6 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
        FMemory::Free((void *)FVar6);
      }
      FVar5 = (pFVar14->BatchExports).NetTokensExportedInCurrentBatch.AllocatorInstance.
              SecondaryData;
      if (FVar5 != (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      FVar7 = (pFVar14->BatchExports).HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData;
      if (FVar7 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FMemory::Free((void *)FVar7);
      }
      pFVar8 = (pFVar14->ExportsPayload).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      ::operator_delete(pFVar14,0x458);
    }
    return bVar11;
  }
  return true;
}

// HasAcknowledgedAllReliableData @ 14423f7d0

bool __thiscall
UE::Net::Private::FChunkedDataWriter::HasAcknowledgedAllReliableData(FChunkedDataWriter *this)

{
  return (this->SendQueue).ArrayNum == 0;
}

// PopDeliveredChunks @ 144246d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Net::Private::FChunkedDataWriter::PopDeliveredChunks(FChunkedDataWriter *this)

{
  uint *puVar1;
  TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry> *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  uVar9 = (this->DataChunksPendingSend).AfterBack;
  uVar6 = (this->DataChunksPendingSend).Front;
  if (uVar9 != uVar6) {
    do {
      if (((int)(uVar9 - uVar6) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3e3,
                             L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = (ulonglong)
              ((this->DataChunksPendingSend).IndexMask & (this->DataChunksPendingSend).Front);
      pFVar2 = (this->DataChunksPendingSend).AllocatorInstance.Data;
      plVar3 = *(longlong **)(pFVar2 + uVar8 * 0x18);
      uVar6 = (uint)*(ushort *)(pFVar2 + uVar8 * 0x18 + 0x10);
      uVar9 = (uVar6 & 0x7ff) >> 5;
      uVar6 = uVar6 & 0x1f;
      if ((this->Acked[uVar9] >> uVar6 & 1) == 0) {
        return;
      }
      this->Acked[uVar9] = this->Acked[uVar9] & ~(1 << uVar6);
      this->Sent[uVar9] = this->Sent[uVar9] & ~(1 << uVar6);
      uVar9 = (this->DataChunksPendingSend).Front;
      TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
      DestructRange(&this->DataChunksPendingSend,uVar9,uVar9 + 1);
      puVar1 = &(this->DataChunksPendingSend).Front;
      *puVar1 = *puVar1 + 1;
      if ((int)plVar3[3] == 0) {
        if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream)
          ;
        }
        if (plVar3[2] != 0) {
          FNetExports::AcknowledgeBatchExports
                    ((this->InitParams).NetExports,(FBatchExports *)(plVar3[2] + 0x10));
          this->CurrentBytesInSendQueue = this->CurrentBytesInSendQueue - *(int *)(plVar3[2] + 8);
        }
        if ((*plVar3 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this->CurrentBytesInSendQueue = this->CurrentBytesInSendQueue - *(int *)(*plVar3 + 8);
        pFVar2 = (this->SendQueue).AllocatorInstance.Data;
        for (pFVar10 = pFVar2; pFVar10 != pFVar2 + (longlong)(this->SendQueue).ArrayNum * 8;
            pFVar10 = pFVar10 + 8) {
          if (*(longlong **)pFVar10 == plVar3) {
            uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 3);
            if (uVar9 != 0xffffffff) {
              uVar6 = 0;
              if ((int)uVar9 < (this->SendQueue).ArrayNum) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (this->SendQueue).AllocatorInstance.Data;
              this_00 = (TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry> *)
                        (pFVar2 + (longlong)(int)uVar9 * 8);
              TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>::operator()
                        (this_00,*(FSendQueueEntry **)(pFVar2 + (longlong)(int)uVar9 * 8));
              iVar7 = (this->SendQueue).ArrayNum + ~uVar9;
              if (iVar7 != 0) {
                memmove(this_00,this_00 + 8,(longlong)iVar7 << 3);
              }
              iVar7 = (this->SendQueue).ArrayNum + -1;
              (this->SendQueue).ArrayNum = iVar7;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(ForAnyElementType *)this,iVar7,&(this->SendQueue).ArrayMax);
            }
            break;
          }
        }
      }
      uVar9 = (this->DataChunksPendingSend).AfterBack;
      uVar6 = (this->DataChunksPendingSend).Front;
    } while (uVar9 != uVar6);
  }
  return;
}

// ProcessPacketDeliveryStatus @ 1442496a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FChunkedDataWriter::ProcessPacketDeliveryStatus
          (FChunkedDataWriter *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)param_2;
  if (param_1 == Lost) {
    while (uVar5 != 0) {
      if (((this->DataChunksPendingAck).AfterBack == (this->DataChunksPendingAck).Front) &&
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
      if (((int)((this->DataChunksPendingAck).AfterBack - (this->DataChunksPendingAck).Front) < 1)
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3e3,
                                L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
            bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (this->DataChunksPendingAck).IndexMask;
      uVar6 = (uint)*(ushort *)
                     ((this->DataChunksPendingAck).AllocatorInstance.Data +
                     (ulonglong)(uVar5 & (this->DataChunksPendingAck).Front) * 2);
      if ((uVar5 == 0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = &(this->DataChunksPendingAck).Front;
      *puVar1 = *puVar1 + 1;
      uVar5 = (int)param_2 - 1;
      param_2 = (FDataStreamRecord *)(ulonglong)uVar5;
      uVar3 = (uVar6 & 0x7ff) >> 5;
      this->Sent[uVar3] = this->Sent[uVar3] & ~(1 << (uVar6 & 0x1f));
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
    }
  }
  else {
    while (uVar5 != 0) {
      if (((this->DataChunksPendingAck).AfterBack == (this->DataChunksPendingAck).Front) &&
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
      if (((int)((this->DataChunksPendingAck).AfterBack - (this->DataChunksPendingAck).Front) < 1)
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3e3,
                                L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
            bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (this->DataChunksPendingAck).IndexMask;
      uVar6 = (uint)*(ushort *)
                     ((this->DataChunksPendingAck).AllocatorInstance.Data +
                     (ulonglong)(uVar5 & (this->DataChunksPendingAck).Front) * 2);
      if ((uVar5 == 0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = &(this->DataChunksPendingAck).Front;
      *puVar1 = *puVar1 + 1;
      uVar5 = (int)param_2 - 1;
      param_2 = (FDataStreamRecord *)(ulonglong)uVar5;
      uVar3 = (uVar6 & 0x7ff) >> 5;
      this->Acked[uVar3] = this->Acked[uVar3] | 1 << (uVar6 & 0x1f);
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
    }
    PopDeliveredChunks(this);
  }
  return;
}

// RemoveSendQueueEntry @ 14424f5a0

void __thiscall
UE::Net::Private::FChunkedDataWriter::RemoveSendQueueEntry
          (FChunkedDataWriter *this,FSendQueueEntry *param_1)

{
  int *piVar1;
  TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->SendQueue).AllocatorInstance.Data;
  iVar6 = (this->SendQueue).ArrayNum;
  pFVar8 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar6 * 8) {
    while (*(FSendQueueEntry **)pFVar8 != param_1) {
      pFVar8 = pFVar8 + 8;
      if (pFVar8 == pFVar2 + (longlong)iVar6 * 8) {
        return;
      }
    }
    uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
    if (uVar7 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->SendQueue).AllocatorInstance.Data;
      this_00 = (TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry> *)
                (pFVar2 + (longlong)(int)uVar7 * 8);
      TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>::operator()
                (this_00,*(FSendQueueEntry **)(pFVar2 + (longlong)(int)uVar7 * 8));
      iVar6 = (this->SendQueue).ArrayNum + ~uVar7;
      if (iVar6 != 0) {
        memmove(this_00,this_00 + 8,(longlong)iVar6 << 3);
      }
      piVar1 = &(this->SendQueue).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,(this->SendQueue).ArrayNum,
                 &(this->SendQueue).ArrayMax);
    }
  }
  return;
}

// ResetExports @ 14424f9a0

void __thiscall UE::Net::Private::FChunkedDataWriter::ResetExports(FChunkedDataWriter *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->PackageMapExports).References.ArrayMax;
  iVar2 = *piVar1;
  (this->PackageMapExports).References.ArrayNum = 0;
  if (iVar2 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
              (8,8,0,(ForElementType<TObjectPtr<UObject>_> *)&this->PackageMapExports,0,piVar1);
  }
  iVar2 = (this->PackageMapExports).Names.ArrayMax;
  (this->PackageMapExports).Names.ArrayNum = 0;
  if (iVar2 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,0,&(this->PackageMapExports).Names.AllocatorInstance,0,
               &(this->PackageMapExports).Names.ArrayMax);
  }
  (this->NetTokensPendingExport).ArrayNum = 0;
  if ((this->NetTokensPendingExport).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,0,&(this->NetTokensPendingExport).AllocatorInstance,0,
               &(this->NetTokensPendingExport).ArrayMax);
  }
  return;
}

// SplitPayload @ 144254640

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FChunkedDataWriter::SplitPayload
          (FChunkedDataWriter *this,FSendQueueEntry *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,bool param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  FSendQueueEntry *pFVar11;
  bool bVar12;
  uint local_48;
  
  uVar4 = param_2->ArrayNum;
  uVar1 = uVar4 + 0xbf;
  uVar8 = uVar1 / 0xc0;
  uVar5 = TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
          ::NormalizeCapacity(&this->DataChunksPendingSend,
                              ((this->DataChunksPendingSend).AfterBack -
                              (this->DataChunksPendingSend).Front) + uVar8);
  if ((this->DataChunksPendingSend).IndexMask + 1 < uVar5) {
    TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
    Reallocate(&this->DataChunksPendingSend,uVar5);
  }
  if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
  }
  local_48 = 0;
  bVar12 = uVar1 / 0xc0 == 0;
  if (!bVar12) {
    iVar10 = 0;
    do {
      pFVar11 = (FSendQueueEntry *)0x0;
      if (param_1 != (FSendQueueEntry *)0x0) {
        param_1->RefCount = param_1->RefCount + 1;
        pFVar11 = param_1;
      }
      uVar3 = this->NextSequenceNumber;
      this->NextSequenceNumber = uVar3 + 1;
      uVar9 = 0xc0;
      if (uVar4 - iVar10 < 0xc0) {
        uVar9 = (ushort)(uVar4 - iVar10);
      }
      uVar7 = 0;
      if (local_48 == 0) {
        uVar7 = 0x4000;
      }
      uVar9 = (ushort)param_3 << 0xf | uVar9 & 0x3fff | uVar7;
      uVar5 = (uint)uVar9;
      if ((local_48 == 0) && (1 < uVar8)) {
        uVar7 = (short)uVar4 + (short)((ulonglong)uVar4 / 0xc0) * -0xc0;
        if (uVar7 == 0) {
          uVar7 = 0xc0;
        }
        uVar9 = (uVar7 ^ uVar9) & 0x3fff ^ uVar9;
      }
      uVar6 = TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
              ::NormalizeCapacity(&this->DataChunksPendingSend,
                                  ((this->DataChunksPendingSend).AfterBack -
                                  (this->DataChunksPendingSend).Front) + 1);
      if ((this->DataChunksPendingSend).IndexMask + 1 < uVar6) {
        TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
        Reallocate(&this->DataChunksPendingSend,uVar6);
      }
      uVar6 = (this->DataChunksPendingSend).AfterBack;
      (this->DataChunksPendingSend).AfterBack = uVar6 + 1;
      pFVar2 = (this->DataChunksPendingSend).AllocatorInstance.Data +
               (ulonglong)(uVar6 & (this->DataChunksPendingSend).IndexMask) * 0x18;
      *(FSendQueueEntry **)pFVar2 = pFVar11;
      *(int *)(pFVar2 + 8) = iVar10;
      *(ushort *)(pFVar2 + 0x10) = uVar3;
      *(uint *)(pFVar2 + 0xc) = uVar8;
      *(ushort *)(pFVar2 + 0x12) =
           uVar9 & 0xc000 ^
           ((*(ushort *)(pFVar2 + 0x12) ^ uVar9) & 0x3fff ^ *(ushort *)(pFVar2 + 0x12)) & 0x3fff;
      local_48 = local_48 + 1;
      iVar10 = iVar10 + (uVar5 & 0x3fff);
    } while (local_48 != uVar8);
    bVar12 = uVar1 / 0xc0 == 0;
  }
  return !bVar12;
}

// UpdateSendQueue @ 14425be50

bool __thiscall UE::Net::Private::FChunkedDataWriter::UpdateSendQueue(FChunkedDataWriter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  uchar *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pFVar9 = (this->SendQueue).AllocatorInstance.Data;
  iVar2 = (this->SendQueue).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SendQueue).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return (this->DataChunksPendingSend).AfterBack != (this->DataChunksPendingSend).Front;
    }
    if (*(int *)(*(longlong *)pFVar9 + 0x18) == 0) break;
    pFVar9 = pFVar9 + 8;
  }
  puVar3 = *(undefined8 **)(*(longlong *)pFVar9 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (uchar *)*puVar3;
    iVar2 = *(int *)(puVar3 + 1);
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_28._12_4_ = uStack_3c;
    local_28.ArrayNum = iVar2;
    local_28.DataPtr = puVar4;
    SplitPayload(this,*(FSendQueueEntry **)pFVar9,&local_28,true);
  }
  lVar5 = ((undefined8 *)**(longlong **)pFVar9)[1];
  puVar4 = *(uchar **)**(longlong **)pFVar9;
  if (((lVar5 < 0) || (0x7fffffff < lVar5)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0 && InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xe7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = (int)lVar5;
  local_18.DataPtr = puVar4;
  SplitPayload(this,*(FSendQueueEntry **)pFVar9,&local_18,false);
  return 0 < (int)((this->DataChunksPendingSend).AfterBack - (this->DataChunksPendingSend).Front);
}

// WriteData @ 14425c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EWriteResult __thiscall
UE::Net::Private::FChunkedDataWriter::WriteData
          (FChunkedDataWriter *this,FNetSerializationContext *param_1,FDataStreamRecord **param_2)

{
  FDataChunk *this_00;
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
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
  uint local_508;
  uint local_500;
  char local_4f8;
  undefined1 local_4f7 [3];
  uint local_4f4;
  FNetBitStreamWriter local_4f0;
  undefined4 local_4d0;
  uint local_4cc;
  uint local_4c8;
  int local_4c4;
  uint local_4c0;
  uint local_4bc;
  FNetBitStreamWriter *local_4b8;
  uint *local_4b0;
  FDataStreamRecord **local_4a8;
  uchar *local_498;
  int iStack_490;
  undefined4 uStack_48c;
  uchar *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  TArrayView<unsigned_char_const_,int> local_478;
  TArrayView<unsigned_char_const_,int> local_468;
  FNetSerializationContext local_458;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_528;
  local_4b8 = param_1->BitStreamWriter;
  local_4a8 = param_2;
  if ((this->SendQueue).ArrayNum == 0) {
    uVar18 = TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
             ::NormalizeCapacity(&this->DataChunksPendingSend,
                                 (this->DataChunksPendingSend).AfterBack -
                                 (this->DataChunksPendingSend).Front);
    TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
    Reallocate(&this->DataChunksPendingSend,uVar18);
    uVar18 = TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                       (&this->DataChunksPendingAck,
                        (this->DataChunksPendingAck).AfterBack - (this->DataChunksPendingAck).Front)
    ;
    TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::Reallocate
              (&this->DataChunksPendingAck,uVar18);
  }
  else if ((local_4b8->OverflowBitCount == 0) &&
          (iVar28 = local_4b8->BufferBitCapacity - local_4b8->BufferBitPosition, iVar28 != 0)) {
    local_4f4 = 0;
    FNetBitStreamWriter::CreateSubstream(local_4b8,&local_4f0,iVar28 - 1);
    lVar21 = 6;
    pFVar14 = &local_458;
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
    local_4d0 = 0xffff;
    (pFVar22->ReadJournal).Entries[4].BitOffset = (pFVar25->ReadJournal).Entries[4].BitOffset;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[4].field_0x14 = uVar11;
    (pFVar22->ReadJournal).Entries[5].Name = pwVar7;
    local_4c4 = 0;
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
    local_458.BitStreamWriter = &local_4f0;
    local_458.BitStreamReader = (FNetBitStreamReader *)0x0;
    do {
      iVar28 = local_4c4;
      uVar19 = 0;
      uVar18 = uVar19;
      if (0x7ff < (this->DataChunksPendingAck).AfterBack - (this->DataChunksPendingAck).Front) {
LAB_14425c30b:
        pFVar27 = (FDataStreamRecord *)(ulonglong)local_4f4;
        if (local_4f4 == 0) {
          FNetBitStreamWriter::DiscardSubstream(local_4b8,&local_4f0);
          EVar16 = uVar18 * 2;
        }
        else {
          FNetBitStreamWriter::CommitSubstream(local_4b8,&local_4f0);
          local_4f8 = '\0';
          FNetBitStreamWriter::WriteBits(local_4b8,0,1);
          EVar16 = uVar18 + Ok;
          *local_4a8 = pFVar27;
        }
        FNetBitStreamWriter::~FNetBitStreamWriter(&local_4f0);
        return EVar16;
      }
      pFVar26 = (this->SendQueue).AllocatorInstance.Data;
      iVar1 = (this->SendQueue).ArrayNum;
      pFVar3 = pFVar26 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this->SendQueue).ArrayNum != iVar1) {
          local_4f7[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_4f7);
        }
        if (pFVar26 == pFVar3) {
          uVar17 = (this->DataChunksPendingSend).AfterBack;
          uVar20 = (this->DataChunksPendingSend).Front;
          if (uVar17 != uVar20) goto LAB_14425c384;
          goto LAB_14425c30b;
        }
        if (*(int *)(*(longlong *)pFVar26 + 0x18) == 0) break;
        pFVar26 = pFVar26 + 8;
      }
      puVar2 = *(undefined8 **)(*(longlong *)pFVar26 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        local_498 = (uchar *)*puVar2;
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
        local_478._12_4_ = uStack_48c;
        local_478.ArrayNum = iVar1;
        local_478.DataPtr = local_498;
        iStack_490 = iVar1;
        SplitPayload(this,*(FSendQueueEntry **)pFVar26,&local_478,true);
      }
      lVar21 = ((undefined8 *)**(longlong **)pFVar26)[1];
      local_488 = *(uchar **)**(longlong **)pFVar26;
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
      local_468._12_4_ = uStack_47c;
      local_468.ArrayNum = iStack_480;
      local_468.DataPtr = local_488;
      SplitPayload(this,*(FSendQueueEntry **)pFVar26,&local_468,false);
      uVar17 = (this->DataChunksPendingSend).AfterBack;
      uVar20 = (this->DataChunksPendingSend).Front;
      if ((int)(uVar17 - uVar20) < 1) goto LAB_14425c30b;
LAB_14425c384:
      uVar18 = 1;
      if ((int)(uVar17 - uVar20) <= iVar28) goto LAB_14425c30b;
      uVar23 = (ulonglong)(uVar20 + iVar28 & (this->DataChunksPendingSend).IndexMask);
      pFVar3 = (this->DataChunksPendingSend).AllocatorInstance.Data;
      this_00 = (FDataChunk *)(pFVar3 + uVar23 * 0x18);
      local_4c8 = (uint)*(ushort *)(pFVar3 + uVar23 * 0x18 + 0x10);
      local_4bc = local_4c8 & 0x1f;
      local_4b0 = this->Sent + ((local_4c8 & 0x7ff) >> 5);
      if ((*local_4b0 >> local_4bc & 1) == 0) {
        uVar17 = 0xffffffff;
        pFVar30 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar30 = local_458.TraceCollector;
        }
        if (pFVar30 != (FNetTraceCollector *)0x0) {
          uVar18 = 0xffffffff;
          if (local_4f0.OverflowBitCount != 0) {
            uVar18 = uVar19;
          }
          uVar17 = FNetTrace::BeginPacketContentEvent
                             (pFVar30,NameId,uVar18 & local_4f0.BufferBitPosition);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            DataChunk = CreatePersistentNetDebugName(L"DataChunk",9);
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
        local_4c0 = local_4f0.BufferBitPosition - local_4f0.BufferBitStartOffset;
        local_4f8 = 1;
        FNetBitStreamWriter::WriteBits(&local_4f0,1,1);
        uVar18 = local_4d0 & 0xffff;
        local_4cc = (uint)(this_00->SequenceNumber & 0x7ff);
        local_4d0 = CONCAT22(local_4d0._2_2_,this_00->SequenceNumber) & 0xffff07ff;
        bVar15 = local_4cc == (uVar18 + 1 & 0x7ff);
        uVar18 = 0xffffffff;
        pFVar29 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar29 = local_458.TraceCollector;
        }
        if (pFVar29 != (FNetTraceCollector *)0x0) {
          if (local_4f0.OverflowBitCount != 0) {
            uVar18 = 0;
          }
          uVar18 = FNetTrace::BeginPacketContentEvent
                             (pFVar29,NameId,uVar18 & local_4f0.BufferBitPosition);
          uVar19 = FNetTrace::TraceName((wchar_t *)0x0);
          FVar4 = (pFVar29->Events).AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar29->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar24 = FVar4;
          }
          *(uint *)((longlong)FVar24 + (ulonglong)uVar18 * 0x10) = uVar19;
        }
        local_4f8 = bVar15;
        FNetBitStreamWriter::WriteBits(&local_4f0,(uint)bVar15,1);
        uVar19 = local_4cc;
        if (local_4f8 == '\0') {
          FNetBitStreamWriter::WriteBits(&local_4f0,local_4cc,0xb);
        }
        FDataChunk::Serialize(this_00,&local_458);
        if (local_4f0.OverflowBitCount != 0) {
          if (uVar18 != 0xffffffff) {
            uVar19 = 0xffffffff;
            if (local_4f0.OverflowBitCount != 0) {
              uVar19 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar29,uVar18,uVar19 & local_4f0.BufferBitPosition);
          }
          if (local_4f0.OverflowBitCount != 0) {
            FNetBitStreamWriter::Seek(&local_4f0,local_4c0);
          }
          uVar18 = 1;
          if (uVar17 != 0xffffffff) {
            uVar19 = 0xffffffff;
            if (local_4f0.OverflowBitCount != 0) {
              uVar19 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar30,uVar17,uVar19 & local_4f0.BufferBitPosition);
          }
          goto LAB_14425c30b;
        }
        local_e8.Base = local_c8;
        local_e8.CurPos = local_c8;
        local_e8.bIsDynamic = false;
        local_e8.bIsExternal = false;
        local_e8.End = (wchar_t *)local_48;
        if (this_00->bIsFirstChunk == 0) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u");
        }
        else {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u First part of %u");
        }
        if (uVar18 != 0xffffffff) {
          if (local_e8.End < local_e8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
          }
          *local_e8.CurPos = L'\0';
          uVar20 = FNetTrace::TraceName(local_e8.Base);
          FVar4 = (pFVar29->Events).AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<FNetTracePacketContentEvent>)&pFVar29->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar24 = FVar4;
          }
          *(uint *)((longlong)FVar24 + (ulonglong)uVar18 * 0x10) = uVar20;
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
        if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
          local_500 = local_4c8;
          local_508 = uVar19;
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream)
          ;
        }
        if (uVar18 != 0xffffffff) {
          uVar19 = 0xffffffff;
          if (local_4f0.OverflowBitCount != 0) {
            uVar19 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar29,uVar18,uVar19 & local_4f0.BufferBitPosition);
        }
        if (local_4f0.OverflowBitCount != 0) {
          FNetBitStreamWriter::Seek(&local_4f0,local_4c0);
        }
        if (uVar17 != 0xffffffff) {
          uVar18 = 0xffffffff;
          if (local_4f0.OverflowBitCount != 0) {
            uVar18 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar30,uVar17,uVar18 & local_4f0.BufferBitPosition);
        }
        uVar18 = TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                           (&this->DataChunksPendingAck,
                            ((this->DataChunksPendingAck).AfterBack -
                            (this->DataChunksPendingAck).Front) + 1);
        if ((this->DataChunksPendingAck).IndexMask + 1 < uVar18) {
          TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::Reallocate
                    (&this->DataChunksPendingAck,uVar18);
        }
        uVar18 = (this->DataChunksPendingAck).AfterBack;
        (this->DataChunksPendingAck).AfterBack = uVar18 + 1;
        *(short *)((this->DataChunksPendingAck).AllocatorInstance.Data +
                  (ulonglong)(uVar18 & (this->DataChunksPendingAck).IndexMask) * 2) =
             (short)local_4c8;
        local_4f4 = local_4f4 + 1;
        *local_4b0 = *local_4b0 | 1 << (local_4bc & 0x1f);
        iVar28 = local_4c4;
      }
      local_4c4 = iVar28 + 1;
    } while( true );
  }
  return NoData;
}

