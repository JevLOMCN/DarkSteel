// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// ResizeAllocation @ 14e503740

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UInterchangeFactoryBaseNode_*>::ResizeAllocation
          (ForElementType<UInterchangeFactoryBaseNode_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UInterchangeFactoryBaseNode_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UInterchangeFactoryBaseNode_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UInterchangeFactoryBaseNode_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

