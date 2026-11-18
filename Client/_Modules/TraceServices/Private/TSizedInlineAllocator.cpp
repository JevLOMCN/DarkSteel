// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// ResizeAllocation @ 14d486fd0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TraceServices::FNetProfilerGameInstanceInternal>::ResizeAllocation
          (ForElementType<TraceServices::FNetProfilerGameInstanceInternal> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 600);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 600);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d487070

void __thiscall
TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::
ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>::ResizeAllocation
          (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x801) {
    if (_Src == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d487110

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FStackEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x400);
  if ((uint)param_2 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x400),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x400),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x400),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d4871b0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FStackEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x400);
  if ((uint)param_2 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x400),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x400),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x400),param_1,param_2,param_3);
  return;
}

