// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 2

// ResizeAllocation @ 1446c9120

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>::ResizeAllocation
          (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1446c91b0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>::
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

