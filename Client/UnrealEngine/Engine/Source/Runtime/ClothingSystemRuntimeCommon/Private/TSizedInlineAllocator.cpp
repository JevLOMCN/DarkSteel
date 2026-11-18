// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 4

// ResizeAllocation @ 148c31740

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148c317e0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148c31880

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 148c31920

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0xff0);
  if ((uint)param_2 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0xff0),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0xff0),this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0xff0),param_1,param_2,param_3);
  return;
}

