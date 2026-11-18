// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 4

// ResizeAllocation @ 14f139160

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<IWorldMetricsActorTrackerSubscriber_*>::ResizeAllocation
          (ForElementType<IWorldMetricsActorTrackerSubscriber_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14f139200

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14f1392a0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x298);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<664,8>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x298);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14f139340

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSubclassOf<UWorldMetricsExtension>_>::ResizeAllocation
          (ForElementType<TSubclassOf<UWorldMetricsExtension>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

