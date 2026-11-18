// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// FRawDataNetBlob @ 144267570

FRawDataNetBlob * __thiscall
UE::Net::FRawDataNetBlob::FRawDataNetBlob(FRawDataNetBlob *this,FNetBlobCreationInfo *param_1)

{
  FNetBlobCreationInfo local_res8 [4];
  
  local_res8[0].Type = param_1->Type;
  local_res8[0].Flags = param_1->Flags | RawDataNetBlob;
  FNetBlob::FNetBlob((FNetBlob *)this,local_res8);
  this->_padding_ = (longlong)&___7FRawDataNetBlob_Net_UE__6B_;
  (this->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawData).ArrayNum = 0;
  (this->RawData).ArrayMax = 0;
  return this;
}

// Deserialize @ 1442754c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FRawDataNetBlob::Deserialize(FRawDataNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamReader;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,this_00->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RawDataNetBlob = CreatePersistentNetDebugName(L"RawDataNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RawDataNetBlob);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  uVar2 = ReadPackedUint32(this_00);
  this->RawDataBitCount = uVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->RawData,uVar2 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_00,(uint *)(this->RawData).AllocatorInstance.Data,this->RawDataBitCount);
  if (uVar1 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,this_00->BufferBitPosition);
  }
  return;
}

// DeserializeWithObject @ 144275fa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FRawDataNetBlob::DeserializeWithObject
          (FRawDataNetBlob *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamReader;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,this_00->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RawDataNetBlob = CreatePersistentNetDebugName(L"RawDataNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RawDataNetBlob);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  uVar2 = ReadPackedUint32(this_00);
  this->RawDataBitCount = uVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->RawData,uVar2 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_00,(uint *)(this->RawData).AllocatorInstance.Data,this->RawDataBitCount);
  if (uVar1 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,this_00->BufferBitPosition);
  }
  return;
}

// InternalDeserialize @ 14427fbb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FRawDataNetBlob::InternalDeserialize
          (FRawDataNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamReader;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,this_00->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RawDataNetBlob = CreatePersistentNetDebugName(L"RawDataNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RawDataNetBlob);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  uVar2 = ReadPackedUint32(this_00);
  this->RawDataBitCount = uVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->RawData,uVar2 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_00,(uint *)(this->RawData).AllocatorInstance.Data,this->RawDataBitCount);
  if (uVar1 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,this_00->BufferBitPosition);
  }
  return;
}

// InternalSerialize @ 1442819d0

void __thiscall
UE::Net::FRawDataNetBlob::InternalSerialize(FRawDataNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RawDataNetBlob = CreatePersistentNetDebugName(L"RawDataNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RawDataNetBlob);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint32(this_00,this->RawDataBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_00,(uint *)(this->RawData).AllocatorInstance.Data,0,this->RawDataBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
  }
  return;
}

// Serialize @ 1442927a0

void __thiscall
UE::Net::FRawDataNetBlob::Serialize(FRawDataNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RawDataNetBlob = CreatePersistentNetDebugName(L"RawDataNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RawDataNetBlob);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint32(this_00,this->RawDataBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_00,(uint *)(this->RawData).AllocatorInstance.Data,0,this->RawDataBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
  }
  return;
}

// SerializeWithObject @ 144293330

void __thiscall
UE::Net::FRawDataNetBlob::SerializeWithObject
          (FRawDataNetBlob *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamWriter *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RawDataNetBlob = CreatePersistentNetDebugName(L"RawDataNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RawDataNetBlob);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint32(this_00,this->RawDataBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_00,(uint *)(this->RawData).AllocatorInstance.Data,0,this->RawDataBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
  }
  return;
}

// SetRawData @ 144294350

void __thiscall
UE::Net::FRawDataNetBlob::SetRawData
          (FRawDataNetBlob *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          uint param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->RawData;
  if (pTVar1 == param_1) {
    this->RawDataBitCount = param_2;
  }
  else {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RawData).ArrayNum = param_1->ArrayNum;
    (this->RawData).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    this->RawDataBitCount = param_2;
  }
  return;
}

// SetRawData @ 1442943d0

void __thiscall
UE::Net::FRawDataNetBlob::SetRawData
          (FRawDataNetBlob *this,TArrayView<unsigned_int_const_,int> *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *_Src;
  
  iVar2 = param_1->ArrayNum;
  iVar3 = (this->RawData).ArrayMax;
  piVar1 = &(this->RawData).ArrayMax;
  _Src = param_1->DataPtr;
  (this->RawData).ArrayNum = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    this->RawDataBitCount = param_2;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,iVar3,&(this->RawData).AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->RawData).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
    }
    this->RawDataBitCount = param_2;
  }
  return;
}

