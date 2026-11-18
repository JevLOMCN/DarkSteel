// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// ResizeAllocation @ 14d8852b0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>::
ResizeAllocation(ForElementType<FProperty_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FProperty_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FProperty_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FProperty_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d885340

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>::ResizeAllocation
          (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d8853d0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

