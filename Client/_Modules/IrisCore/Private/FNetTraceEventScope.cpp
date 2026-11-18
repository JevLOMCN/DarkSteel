// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// ~FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> @ 1441f9470

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>::
~FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent
              (this->Collector,this->EventIndex,this->Stream->BufferBitPosition);
    return;
  }
  return;
}

// ~FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> @ 1441f9490

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::
~FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> *this)

{
  uint uVar1;
  
  if (this->EventIndex != 0xffffffff) {
    uVar1 = this->Stream->BufferBitPosition;
    if (this->Stream->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,uVar1);
    return;
  }
  return;
}

// ~FNetTraceEventScope<FNetBitWriter_&> @ 14422a800

void __thiscall
FNetTraceEventScope<FNetBitWriter_&>::~FNetTraceEventScope<FNetBitWriter_&>
          (FNetTraceEventScope<FNetBitWriter_&> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,(uint)this->Stream->_padding_)
    ;
    return;
  }
  return;
}

// ~FNetTraceEventScope<UE::Net::FNetBitStreamReader> @ 14422a830

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader>::
~FNetTraceEventScope<UE::Net::FNetBitStreamReader>
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent
              (this->Collector,this->EventIndex,this->Stream->BufferBitPosition);
    return;
  }
  return;
}

// ~FNetTraceEventScope<UE::Net::FNetBitStreamWriter> @ 14422a850

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter>::
~FNetTraceEventScope<UE::Net::FNetBitStreamWriter>
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter> *this)

{
  uint uVar1;
  
  if (this->EventIndex != 0xffffffff) {
    uVar1 = this->Stream->BufferBitPosition;
    if (this->Stream->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,uVar1);
    return;
  }
  return;
}

// ExitScope @ 144238430

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader>::ExitScope
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent
              (this->Collector,this->EventIndex,this->Stream->BufferBitPosition);
    this->EventIndex = 0xffffffff;
  }
  return;
}

// IsValid @ 1442441c0

bool __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>::IsValid
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> *this)

{
  return this->EventIndex != 0xffffffff;
}

// IsValid @ 1442441d0

bool __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter>::IsValid
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter> *this)

{
  return this->EventIndex != 0xffffffff;
}

// SetEventName @ 1442517e0

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>::SetEventName
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> *this,uint param_1)

{
  ForElementType<FNetTracePacketContentEvent> FVar1;
  
  if (this->EventIndex != 0xffffffff) {
    FVar1 = (this->Collector->Events).AllocatorInstance.SecondaryData;
    if (FVar1 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar1 = (ForElementType<FNetTracePacketContentEvent>)&this->Collector->Events;
    }
    *(uint *)((longlong)FVar1 + (ulonglong)this->EventIndex * 0x10) = param_1;
  }
  return;
}

// SetEventName @ 144251820

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter>::SetEventName
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter> *this,uint param_1)

{
  ForElementType<FNetTracePacketContentEvent> FVar1;
  
  if (this->EventIndex != 0xffffffff) {
    FVar1 = (this->Collector->Events).AllocatorInstance.SecondaryData;
    if (FVar1 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar1 = (ForElementType<FNetTracePacketContentEvent>)&this->Collector->Events;
    }
    *(uint *)((longlong)FVar1 + (ulonglong)this->EventIndex * 0x10) = param_1;
  }
  return;
}

// FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> @ 1442657a0

FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> * __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>::
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> *this,ulong64 param_1,
          FNetBitStreamReader *param_2,FNetTraceCollector *param_3,uint param_4)

{
  uint uVar1;
  FNetTraceCollector *pFVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  bool bVar4;
  
  if (param_4 < 4) {
    bVar4 = param_4 <= GNetTraceRuntimeVerbosity;
    this->Stream = param_2;
    pFVar2 = (FNetTraceCollector *)0x0;
    if (bVar4) {
      pFVar2 = param_3;
    }
    this->EventIndex = 0xffffffff;
    this->Collector = pFVar2;
    if (pFVar2 != (FNetTraceCollector *)0x0) {
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar2,Object,param_2->BufferBitPosition);
      this->EventIndex = uVar1;
      FVar3 = (this->Collector->Events).AllocatorInstance.SecondaryData;
      if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar3 = (ForElementType<FNetTracePacketContentEvent>)&this->Collector->Events;
      }
      *(ulong64 *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = param_1;
      if (param_1 != 0) {
        FNetTraceCollector::AddReferencedObjectId(this->Collector,param_1);
        return this;
      }
    }
  }
  else {
    this->Collector = (FNetTraceCollector *)0x0;
    this->Stream = param_2;
    this->EventIndex = 0xffffffff;
  }
  return this;
}

// FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> @ 144265850

FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> * __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::
FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> *this,ulong64 param_1,
          FNetBitStreamWriter *param_2,FNetTraceCollector *param_3,uint param_4)

{
  uint uVar1;
  FNetTraceCollector *pFVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  bool bVar4;
  
  if (param_4 < 4) {
    bVar4 = param_4 <= GNetTraceRuntimeVerbosity;
    this->Stream = param_2;
    pFVar2 = (FNetTraceCollector *)0x0;
    if (bVar4) {
      pFVar2 = param_3;
    }
    this->EventIndex = 0xffffffff;
    this->Collector = pFVar2;
    if (pFVar2 != (FNetTraceCollector *)0x0) {
      uVar1 = param_2->BufferBitPosition;
      if (param_2->OverflowBitCount != 0) {
        uVar1 = 0;
      }
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar2,Object,uVar1);
      this->EventIndex = uVar1;
      FVar3 = (this->Collector->Events).AllocatorInstance.SecondaryData;
      if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar3 = (ForElementType<FNetTracePacketContentEvent>)&this->Collector->Events;
      }
      *(ulong64 *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = param_1;
      if (param_1 != 0) {
        FNetTraceCollector::AddReferencedObjectId(this->Collector,param_1);
        return this;
      }
    }
  }
  else {
    this->Collector = (FNetTraceCollector *)0x0;
    this->Stream = param_2;
    this->EventIndex = 0xffffffff;
  }
  return this;
}

// ExitScope @ 144277b00

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::ExitScope
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> *this)

{
  uint uVar1;
  
  if (this->EventIndex != 0xffffffff) {
    uVar1 = this->Stream->BufferBitPosition;
    if (this->Stream->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,uVar1);
    this->EventIndex = 0xffffffff;
  }
  return;
}

// IsValid @ 144283030

bool __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::IsValid
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> *this)

{
  return this->EventIndex != 0xffffffff;
}

// SetEventName @ 1442939e0

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::SetEventName
          (FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> *this,uint param_1)

{
  ForElementType<FNetTracePacketContentEvent> FVar1;
  
  if (this->EventIndex != 0xffffffff) {
    FVar1 = (this->Collector->Events).AllocatorInstance.SecondaryData;
    if (FVar1 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar1 = (ForElementType<FNetTracePacketContentEvent>)&this->Collector->Events;
    }
    *(uint *)((longlong)FVar1 + (ulonglong)this->EventIndex * 0x10) = param_1;
  }
  return;
}

// SetEventObjectId @ 144293a20

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>::SetEventObjectId
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> *this,ulong64 param_1)

{
  ForElementType<FNetTracePacketContentEvent> FVar1;
  
  if (this->EventIndex != 0xffffffff) {
    FVar1 = (this->Collector->Events).AllocatorInstance.SecondaryData;
    if (FVar1 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar1 = (ForElementType<FNetTracePacketContentEvent>)&this->Collector->Events;
    }
    *(ulong64 *)((longlong)FVar1 + (ulonglong)this->EventIndex * 0x10) = param_1;
    FNetTraceCollector::AddReferencedObjectId(this->Collector,param_1);
    return;
  }
  return;
}

// ExitScope @ 1442bfe40

void __thiscall
FNetTraceEventScope<UE::Net::FNetBitStreamReader_&>::ExitScope
          (FNetTraceEventScope<UE::Net::FNetBitStreamReader_&> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent
              (this->Collector,this->EventIndex,this->Stream->BufferBitPosition);
    this->EventIndex = 0xffffffff;
  }
  return;
}

