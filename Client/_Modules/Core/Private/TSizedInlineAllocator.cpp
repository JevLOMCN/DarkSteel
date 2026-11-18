// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 90

// ResizeAllocation @ 1414aed20

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>::ResizeAllocation
          (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414aedb0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::FIoEncodedBlockRequest_*>::ResizeAllocation
          (ForElementType<UE::FIoEncodedBlockRequest_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::FIoEncodedBlockRequest_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414aee40

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoFileBlockRequest_*>::
ResizeAllocation(ForElementType<UE::FIoFileBlockRequest_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::FIoFileBlockRequest_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::FIoFileBlockRequest_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::FIoFileBlockRequest_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414aeed0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Tasks::Private::FTaskBase_*>::ResizeAllocation
          (ForElementType<UE::Tasks::Private::FTaskBase_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Tasks::Private::FTaskBase_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414aef60

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>::ResizeAllocation
          (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414aeff0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414af090

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRefCountPtr<FBaseGraphTask>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FBaseGraphTask>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TRefCountPtr<FBaseGraphTask>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414af120

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1414af1b0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>::
ResizeAllocation(ForElementType<FSharedBuffer> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSharedBuffer> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FSharedBuffer>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSharedBuffer>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eaac0

void __thiscall
TSizedInlineAllocator<48,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
ResizeAllocation(ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x31) {
    if (_Src == (ForElementType<unsigned_char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eab50

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
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

// ResizeAllocation @ 1415eabf0

void __thiscall
TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
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

// ResizeAllocation @ 1415eac90

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415ead20

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eadb0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::ResizeAllocation
          (ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<void_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<void_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eae50

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eaef0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eaf90

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb030

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb0d0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb170

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb210

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,short>_>::
ResizeAllocation(ForElementType<TTuple<int,short>_> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<int,short>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TTuple<int,short>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<int,short>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb2b0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<int,`anonymous_namespace'::FContainerTestValueType>_>::ResizeAllocation
          (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb350

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>_>::ResizeAllocation
          (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)0x0
       ) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)
                   0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb3f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>::
ResizeAllocation(ForElementType<TTuple<FString,FString>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<TTuple<FString,FString>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TTuple<FString,FString>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FString,FString>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb490

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>::ResizeAllocation
          (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb520

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<HazardPointer_Impl::FHazardDeleter>::ResizeAllocation
          (ForElementType<HazardPointer_Impl::FHazardDeleter> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<HazardPointer_Impl::FHazardDeleter> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb5c0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb650

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1415eb6f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1416580f0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::ResizeAllocation
          (ForElementType<char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141658190

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>::ResizeAllocation
          (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xa0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xa0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1416beae0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>::ResizeAllocation
          (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1416beb70

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::LLMPrivate::FTagData_const_*>::ResizeAllocation
          (ForElementType<UE::LLMPrivate::FTagData_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::LLMPrivate::FTagData_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1416bec00

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
::ResizeAllocation(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1416bec90

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>::ResizeAllocation
          (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0)
  {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1416bed20

void __thiscall
TSizedInlineAllocator<1,32,TSizedLLMAllocator<32>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)&this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedLLMAllocator<32>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove(*(void **)&this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedLLMAllocator<32>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170dde0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170de80

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FNameTag>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x60);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x60),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x60),this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x60),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170df10

void __thiscall
TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::
ForElementType<FCamelCaseBreakIterator::FToken>::ResizeAllocation
          (ForElementType<FCamelCaseBreakIterator::FToken> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FCamelCaseBreakIterator::FToken> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x401) {
    if (_Src == (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170dfb0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>::ResizeAllocation
          (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170e040

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedRef<FArchiveEntry,1>_>::ResizeAllocation
          (ForElementType<TSharedRef<FArchiveEntry,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedRef<FArchiveEntry,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170e0d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedRef<FManifestEntry,1>_>::ResizeAllocation
          (ForElementType<TSharedRef<FManifestEntry,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedRef<FManifestEntry,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14170e160

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141777620

void __thiscall
TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
ResizeAllocation(ForElementType<wchar_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<wchar_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x40c) {
    if (_Src == (ForElementType<wchar_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<wchar_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417776c0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::ResizeAllocation
          (ForElementType<wchar_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<wchar_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<wchar_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<wchar_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f60d0

void __thiscall
TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
ResizeAllocation(ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x641) {
    if (_Src == (ForElementType<unsigned_char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f6170

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
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

// ResizeAllocation @ 1417f6200

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FLogCategoryBase_*>::
ResizeAllocation(ForElementType<FLogCategoryBase_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FLogCategoryBase_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FLogCategoryBase_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLogCategoryBase_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f62a0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Logging::Private::FLogTemplateOp>::ResizeAllocation
          (ForElementType<UE::Logging::Private::FLogTemplateOp> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Logging::Private::FLogTemplateOp> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f6340

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
::ResizeAllocation(ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f63e0

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>::ResizeAllocation
          (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
                0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f6470

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnsiString>::
ResizeAllocation(ForElementType<FAnsiString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FAnsiString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FAnsiString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FAnsiString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1417f6510

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EMessageSeverity::Type>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x10),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141830030

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::ResizeAllocation
          (ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<void_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<void_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<void_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14188cd00

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSelfRegisteringExec_*>::
ResizeAllocation(ForElementType<FSelfRegisteringExec_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FSelfRegisteringExec_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FSelfRegisteringExec_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSelfRegisteringExec_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14188cd90

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FConfigValue_const_*>::
ResizeAllocation(ForElementType<FConfigValue_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FConfigValue_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<FConfigValue_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FConfigValue_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14188ce20

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FConfigValue_const_*>::
ResizeAllocation(ForElementType<FConfigValue_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FConfigValue_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FConfigValue_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FConfigValue_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14188cec0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xc0);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xc0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xc0),this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xc0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1418f32e0

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
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

// ResizeAllocation @ 1419674f0

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
          (ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
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

// ResizeAllocation @ 141967580

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::ResizeAllocation
          (ForElementType<double> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<double> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
    if (_Src == (ForElementType<double>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<double>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141967610

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>::
ResizeAllocation(ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1419676a0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
::ResizeAllocation(ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141967740

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<FCpuProfilerTraceInternal::FSuspendScopes>::ResizeAllocation
          (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1419677d0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141967870

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::ResizeAllocation
          (ForElementType<wchar_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<wchar_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<wchar_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<wchar_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1419a8bd0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>::
ResizeAllocation(ForElementType<FProperty_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FProperty_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FProperty_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FProperty_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1419a8c60

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1419a8d00

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a1ab80

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a1ac20

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FIoHash>::ResizeAllocation
          (ForElementType<FIoHash> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FIoHash> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FIoHash>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x14);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FIoHash>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x14);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a1acc0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<char8_t>_>::
ResizeAllocation(ForElementType<TStringView<char8_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<char8_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TStringView<char8_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<char8_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a1ad60

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ECbFieldType>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 8);
  if ((uint)param_2 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 8),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 8),this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 8),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a90040

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::ResizeAllocation
          (ForElementType<char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a900d0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::ResizeAllocation
          (ForElementType<char> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<char> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<char>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<char>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a90160

void __thiscall
TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x201) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a90200

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>::ResizeAllocation
          (ForElementType<FGuid> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FGuid> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<FGuid>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FGuid>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a902a0

void __thiscall
TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a90340

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<char8_t>::ResizeAllocation
          (ForElementType<char8_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<char8_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<char8_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<char8_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a903d0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<char8_t>::ResizeAllocation
          (ForElementType<char8_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<char8_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<char8_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<char8_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a90460

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::ResizeAllocation
          (ForElementType<wchar_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<wchar_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<wchar_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<wchar_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141a904f0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::ResizeAllocation
          (ForElementType<wchar_t> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<wchar_t> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<wchar_t>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<wchar_t>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141abe9e0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141b4cc30

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
::ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141b4ccc0

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::FStackData>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x1e0);
  if ((uint)param_2 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x1e0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x1e0),this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x1e0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141b4cd60

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTestToken<int>_>::
ResizeAllocation(ForElementType<TTestToken<int>_> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTestToken<int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TTestToken<int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTestToken<int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141b4cdf0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTestToken<int>_>::
ResizeAllocation(ForElementType<TTestToken<int>_> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTestToken<int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TTestToken<int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTestToken<int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141b4ce80

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>::
ResizeAllocation(ForElementType<Experimental::FHashType> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<Experimental::FHashType> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<Experimental::FHashType>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Experimental::FHashType>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 141c098b0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::MathTest::FTestOctreeElement>::ResizeAllocation
          (ForElementType<UE::MathTest::FTestOctreeElement> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::MathTest::FTestOctreeElement> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

