// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D12RHI
// Functions: 2

// ResizeAllocation @ 14de68a70

void __thiscall
TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<sl::Resource>::
ResizeAllocation(ForElementType<sl::Resource> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<sl::Resource> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 8) {
    if (_Src == (ForElementType<sl::Resource>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x70);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<sl::Resource>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x70);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14de68b10

void __thiscall
TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<sl::ResourceTag>::
ResizeAllocation(ForElementType<sl::ResourceTag> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<sl::ResourceTag> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 8) {
    if (_Src == (ForElementType<sl::ResourceTag>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 6);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<sl::ResourceTag>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 6);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

