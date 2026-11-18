// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 42

// ResizeAllocation @ 143703c00

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FChaosVDContext>::
ResizeAllocation(ForElementType<FChaosVDContext> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FChaosVDContext> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FChaosVDContext>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FChaosVDContext>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1437a6fd0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
::ResizeAllocation(ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1438d0630

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FEPAFloodEntry>::
ResizeAllocation(ForElementType<Chaos::FEPAFloodEntry> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<Chaos::FEPAFloodEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<Chaos::FEPAFloodEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FEPAFloodEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1438d06d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>::
ResizeAllocation(ForElementType<Chaos::FManifoldPoint> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<Chaos::FManifoldPoint> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x6c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x6c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1439ddea0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FContactGroup>::
ResizeAllocation(ForElementType<Chaos::FContactGroup> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<Chaos::FContactGroup> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<Chaos::FContactGroup>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x50);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FContactGroup>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x50);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1439ddf40

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<Chaos::FSingleShapePairCollisionDetector>::ResizeAllocation
          (ForElementType<Chaos::FSingleShapePairCollisionDetector> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<Chaos::FSingleShapePairCollisionDetector> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x58);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FSingleShapePairCollisionDetector>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x58);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143a11950

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPointResult>
::ResizeAllocation(ForElementType<Chaos::FManifoldPointResult> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<Chaos::FManifoldPointResult> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143a119e0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>
::ResizeAllocation(ForElementType<Chaos::FSavedManifoldPoint> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<Chaos::FSavedManifoldPoint> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143a90930

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<Chaos::FPBDCollisionConstraint_*>::ResizeAllocation
          (ForElementType<Chaos::FPBDCollisionConstraint_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<Chaos::FPBDCollisionConstraint_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<Chaos::FPBDCollisionConstraint_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::FPBDCollisionConstraint_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143a909d0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>::
ResizeAllocation(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143a90a60

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::TVector<int,2>_>::
ResizeAllocation(ForElementType<Chaos::TVector<int,2>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<Chaos::TVector<int,2>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<Chaos::TVector<int,2>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Chaos::TVector<int,2>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143b754c0

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>::
ResizeAllocation(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
    if (_Src == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 143c71740

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143c717e0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143c71880

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143c71920

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69370

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69410

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d694b0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::Private::FSimOverlapVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69550

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::Private::FSimOverlapVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d695f0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69690

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69730

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d697d0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69870

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143d69910

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47520

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e475c0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47660

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47700

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e477a0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47840

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e478e0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47980

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47a20

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47ac0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47b60

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143e47c00

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143ecb770

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143ecb810

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143ecb8b0

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

// ResizeAllocation @ 143ecb950

void __thiscall
TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
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

