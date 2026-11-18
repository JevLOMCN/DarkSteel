// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// ResizeAllocation @ 145997de0

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>::
ResizeAllocation(ForElementType<D3D11_SUBRESOURCE_DATA> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<D3D11_SUBRESOURCE_DATA> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
    if (_Src == (ForElementType<D3D11_SUBRESOURCE_DATA>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D11_SUBRESOURCE_DATA>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

