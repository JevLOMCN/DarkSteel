// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// ResizeAllocation @ 142c6f950

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>::
ResizeAllocation(ForElementType<FToolMenuVisibilityChoice> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FToolMenuVisibilityChoice> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FToolMenuVisibilityChoice>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x28);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FToolMenuVisibilityChoice>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x28);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

