// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// ResizeAllocation @ 14abef580

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>::
ResizeAllocation(ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14abef620

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArrayView<FMeshToMeshVertData,int>_>::ResizeAllocation
          (ForElementType<TArrayView<FMeshToMeshVertData,int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TArrayView<FMeshToMeshVertData,int>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TArrayView<FMeshToMeshVertData,int>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArrayView<FMeshToMeshVertData,int>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14ac60bc0

void __thiscall
TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x1c1) {
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

