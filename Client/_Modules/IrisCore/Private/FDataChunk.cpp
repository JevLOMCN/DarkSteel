// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// FDataChunk @ 144228c30

FDataChunk * __thiscall
UE::Net::Private::FChunkedDataReader::FDataChunk::FDataChunk(FDataChunk *this)

{
  *(undefined4 *)&this->SequenceNumber = 0xffff;
  (this->PartPayload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartPayload).ArrayNum = 0;
  (this->PartPayload).ArrayMax = 0;
  this->PartCount = 0;
  return this;
}

// FDataChunk @ 144228c50

FDataChunk * __thiscall
UE::Net::Private::FChunkedDataWriter::FDataChunk::FDataChunk(FDataChunk *this)

{
  *(undefined4 *)&this->SequenceNumber = 0xffff;
  (this->SrcEntry).Reference = (FSendQueueEntry *)0x0;
  this->PayloadByteOffset = 0;
  this->PartCount = 0;
  return this;
}

// Deserialize @ 1442363d0

void __thiscall
UE::Net::Private::FChunkedDataReader::FDataChunk::Deserialize
          (FDataChunk *this,FNetSerializationContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined2 uVar3;
  FNetBitStreamReader *this_00;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *_Dst;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  int iVar12;
  FNetTraceCollector *pFVar13;
  
  this_00 = param_1->BitStreamReader;
  uVar7 = FNetBitStreamReader::ReadBits(this_00,1);
  this->bIsFirstChunk = uVar7;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
    puVar1 = &this->field_0x16;
    this->PartByteCount = this->PartByteCount;
    this->bIsExportChunk = 0;
    this->bIsFirstChunk = uVar7;
  }
  else {
    uVar7 = FNetBitStreamReader::ReadBits(this_00,1);
    this->bIsExportChunk = uVar7;
    uVar8 = ReadPackedUint32(this_00);
  }
  this->PartCount = uVar8;
  uVar7 = FNetBitStreamReader::ReadBits(this_00,1);
  uVar8 = 0xc0;
  if ((uVar7 & 1) == 0) {
    uVar6 = ReadPackedUint16(this_00);
  }
  else {
    uVar6 = 0xc0;
  }
  if ((param_1->ErrorContext).Error != (FName)0x0) {
    return;
  }
  bVar5 = FNetSerializationContext::IsBitStreamOverflown(param_1);
  if (bVar5) {
    return;
  }
  uVar7 = 0xffffffff;
  if (0xc0 < uVar6) {
    uVar6 = 0xc0;
  }
  *(ushort *)&this->field_0x16 =
       *(ushort *)&this->field_0x16 ^ (uVar6 ^ this->PartByteCount) & 0x3fff;
  pFVar13 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar13 = param_1->TraceCollector;
  }
  if (pFVar13 != (FNetTraceCollector *)0x0) {
    uVar7 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this_00->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Payload = CreatePersistentNetDebugName(L"Payload",7);
      _Init_thread_footer(&::_TSS0);
    }
    uVar9 = FNetTrace::TraceName(Payload);
    FVar11 = (pFVar13->Events).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
    }
    *(uint *)((longlong)FVar11 + (ulonglong)uVar7 * 0x10) = uVar9;
  }
  if ((this->bIsFirstChunk == 0) || (this->PartCount < 2)) {
    uVar8 = this->PartByteCount;
  }
  iVar12 = (this->PartPayload).ArrayNum;
  piVar2 = &(this->PartPayload).ArrayNum;
  if (iVar12 < (int)uVar8) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar8 - iVar12,(ForAnyElementType *)this,piVar2,
                        &(this->PartPayload).ArrayMax);
    memset((this->PartPayload).AllocatorInstance.Data + iVar10,0,(longlong)(int)(uVar8 - iVar12));
  }
  else if ((int)uVar8 < iVar12) {
    iVar12 = iVar12 - uVar8;
    if (iVar12 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar12 == 0) goto LAB_144236634;
    _Dst = (this->PartPayload).AllocatorInstance.Data + uVar8;
    iVar10 = (*piVar2 - iVar12) - uVar8;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + iVar12,(longlong)iVar10);
    }
    *piVar2 = *piVar2 - iVar12;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(ForAnyElementType *)this,*piVar2,&(this->PartPayload).ArrayMax);
  }
LAB_144236634:
  ReadBytes(this_00,(uchar *)(this->PartPayload).AllocatorInstance.Data,uVar8);
  if (uVar7 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar13,uVar7,this_00->BufferBitPosition);
  }
  return;
}

// GetPartPayloadByteCount @ 14423dae0

uint __thiscall
UE::Net::Private::FChunkedDataReader::FDataChunk::GetPartPayloadByteCount(FDataChunk *this)

{
  if ((this->bIsFirstChunk != 0) && (1 < this->PartCount)) {
    return 0xc0;
  }
  return this->PartByteCount;
}

// Serialize @ 144250e70

void __thiscall
UE::Net::Private::FChunkedDataWriter::FDataChunk::Serialize
          (FDataChunk *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *this_00;
  FNetTraceCollector *pFVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetTraceCollector *pFVar7;
  FSendQueueEntry *pFVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  this_00 = param_1->BitStreamWriter;
  bVar3 = this->bIsFirstChunk;
  uVar9 = 0;
  uVar10 = this->PartByteCount;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(bVar3 != 0),1);
  if (bVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this_00,this->bIsExportChunk,1);
    WritePackedUint32(this_00,this->PartCount);
    if (this->PartCount < 2) {
      uVar10 = this->PartByteCount;
    }
    else {
      uVar10 = 0xc0;
    }
  }
  bVar11 = this->PartByteCount == 0xc0;
  FNetBitStreamWriter::WriteBits(this_00,(uint)bVar11,1);
  if (!bVar11) {
    WritePackedUint16(this_00,this->PartByteCount);
  }
  uVar4 = 0xffffffff;
  pFVar7 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar7 = param_1->TraceCollector;
  }
  if (pFVar7 != (FNetTraceCollector *)0x0) {
    uVar4 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar4 = uVar9;
    }
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar4);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        Payload = CreatePersistentNetDebugName(L"Payload",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar5 = FNetTrace::TraceName(Payload);
    FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
    }
    *(uint *)((longlong)FVar6 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  if (((this->bIsFirstChunk != 0) && ((BADTYPE)this->bIsExportChunk)) &&
     (pFVar1 = ((((this->SrcEntry).Reference)->References).Ptr)->TraceCollector,
     pFVar1 != (FNetTraceCollector *)0x0)) {
    uVar5 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar5 = uVar9;
    }
    FNetTrace::FoldTraceCollector(param_1->TraceCollector,pFVar1,uVar5,0);
  }
  pFVar8 = (this->SrcEntry).Reference;
  if ((BADTYPE)this->bIsExportChunk) {
    pFVar8 = (FSendQueueEntry *)&pFVar8->References;
  }
  else if ((pFVar8->Payload).Object == (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WriteBytes(this_00,(uchar *)((((pFVar8->Payload).Object)->AllocatorInstance).Data +
                              this->PayloadByteOffset),uVar10);
  if (uVar4 != 0xffffffff) {
    uVar10 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar10 = uVar9;
    }
    FNetTrace::EndPacketContentEvent(pFVar7,uVar4,uVar10);
  }
  return;
}

