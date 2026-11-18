// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 2

// ResizeAllocation @ 14d3a67c0

void __thiscall
TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
ResizeAllocation(ForElementType<unsigned_short> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_short> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x61) {
    if (_Src == (ForElementType<unsigned_short>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_short>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d3a6860

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>::
ResizeAllocation(ForElementType<UE::Trace::FAuxData> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::Trace::FAuxData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Trace::FAuxData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Trace::FAuxData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

