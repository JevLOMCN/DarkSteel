// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// ResizeAllocation @ 14d744640

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)0x0
          ) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

