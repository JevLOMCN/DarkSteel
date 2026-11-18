// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 7

// ResizeAllocation @ 1441e9fd0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441ea060

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Net::FNetResultHandler_*>::ResizeAllocation
          (ForElementType<UE::Net::FNetResultHandler_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Net::FNetResultHandler_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441ea0f0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Net::FEscalationCounter>::ResizeAllocation
          (ForElementType<UE::Net::FEscalationCounter> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<UE::Net::FEscalationCounter> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441ea190

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<FNetTracePacketContentEvent>::ResizeAllocation
          (ForElementType<FNetTracePacketContentEvent> *this,int param_1,int param_2,ulong64 param_3
          )

{
  ForElementType<FNetTracePacketContentEvent> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441ea230

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FName> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FName>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FName>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441ea2c0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
ResizeAllocation(ForElementType<UE::Net::FNetToken> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::Net::FNetToken> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1441ea350

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
ResizeAllocation(ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned___int64> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<unsigned___int64>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned___int64>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

