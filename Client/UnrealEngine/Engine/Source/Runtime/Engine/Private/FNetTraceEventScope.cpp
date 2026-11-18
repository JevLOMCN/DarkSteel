// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FNetTraceEventScope<FInBunch_&> @ 147a23640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTraceEventScope<FInBunch_&> * __thiscall
FNetTraceEventScope<FInBunch_&>::FNetTraceEventScope<FInBunch_&>
          (FNetTraceEventScope<FInBunch_&> *this,ulong64 param_1,FInBunch *param_2,
          FNetTraceCollector *param_3,uint param_4)

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
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar2,Object,(uint)param_2->_padding_);
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

// FNetTraceEventScope<FOutBunch_&> @ 147a236f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTraceEventScope<FOutBunch_&> * __thiscall
FNetTraceEventScope<FOutBunch_&>::FNetTraceEventScope<FOutBunch_&>
          (FNetTraceEventScope<FOutBunch_&> *this,ulong64 param_1,FOutBunch *param_2,
          FNetTraceCollector *param_3,uint param_4)

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
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar2,Object,(uint)param_2->_padding_);
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

// FNetTraceEventScope<FOutBunch> @ 147a237a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTraceEventScope<FOutBunch> * __thiscall
FNetTraceEventScope<FOutBunch>::FNetTraceEventScope<FOutBunch>
          (FNetTraceEventScope<FOutBunch> *this,ulong64 param_1,FOutBunch *param_2,
          FNetTraceCollector *param_3,uint param_4)

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
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar2,Object,(uint)param_2->_padding_);
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

// ~FNetTraceEventScope<FInBunch_&> @ 147a285a0

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
FNetTraceEventScope<FInBunch_&>::~FNetTraceEventScope<FInBunch_&>
          (FNetTraceEventScope<FInBunch_&> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,(uint)this->Stream->_padding_)
    ;
    return;
  }
  return;
}

// ~FNetTraceEventScope<FNetBitReader_&> @ 147a285d0

void __thiscall
FNetTraceEventScope<FNetBitReader_&>::~FNetTraceEventScope<FNetBitReader_&>
          (FNetTraceEventScope<FNetBitReader_&> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,(uint)this->Stream->_padding_)
    ;
    return;
  }
  return;
}

// ~FNetTraceEventScope<FOutBunch_&> @ 147a28600

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
FNetTraceEventScope<FOutBunch_&>::~FNetTraceEventScope<FOutBunch_&>
          (FNetTraceEventScope<FOutBunch_&> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,(uint)this->Stream->_padding_)
    ;
    return;
  }
  return;
}

// ~FNetTraceEventScope<FOutBunch> @ 147a28630

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
FNetTraceEventScope<FOutBunch>::~FNetTraceEventScope<FOutBunch>
          (FNetTraceEventScope<FOutBunch> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,(uint)this->Stream->_padding_)
    ;
    return;
  }
  return;
}

// IsValid @ 147a633c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetTraceEventScope<FInBunch_&>::IsValid(FNetTraceEventScope<FInBunch_&> *this)

{
  return this->EventIndex != 0xffffffff;
}

// IsValid @ 147a633d0

bool __thiscall
FNetTraceEventScope<FNetBitReader_&>::IsValid(FNetTraceEventScope<FNetBitReader_&> *this)

{
  return this->EventIndex != 0xffffffff;
}

// SetEventName @ 147a8ee80

void __thiscall
FNetTraceEventScope<FNetBitReader_&>::SetEventName
          (FNetTraceEventScope<FNetBitReader_&> *this,uint param_1)

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

// SetEventObjectId @ 147a8eec0

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
FNetTraceEventScope<FInBunch_&>::SetEventObjectId
          (FNetTraceEventScope<FInBunch_&> *this,ulong64 param_1)

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

// ~FNetTraceEventScope<FBitWriter> @ 147fa7760

void __thiscall
FNetTraceEventScope<FBitWriter>::~FNetTraceEventScope<FBitWriter>
          (FNetTraceEventScope<FBitWriter> *this)

{
  if (this->EventIndex != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(this->Collector,this->EventIndex,(uint)this->Stream->Num);
    return;
  }
  return;
}

// ~FNetTraceEventScope<FBitArchive_&> @ 1484bcf30

void __thiscall
FNetTraceEventScope<FBitArchive_&>::~FNetTraceEventScope<FBitArchive_&>
          (FNetTraceEventScope<FBitArchive_&> *this)

{
  FBitArchive *pFVar1;
  
  if (this->EventIndex != 0xffffffff) {
    pFVar1 = this->Stream;
    FNetTrace::EndPacketContentEvent
              (this->Collector,this->EventIndex,
               *(uint *)(&pFVar1->field_0x0 +
                        ((ulonglong)((byte)~pFVar1->field_0x28 & 4) | 0x50) * 2) &
               ((byte)pFVar1->field_0x29 >> 1 & 1) - 1);
    return;
  }
  return;
}

