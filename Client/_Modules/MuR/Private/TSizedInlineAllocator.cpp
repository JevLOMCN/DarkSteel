// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 15

// ResizeAllocation @ 14a9c3dc0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>::
ResizeAllocation(ForElementType<UE::Math::TVector<float>_> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<UE::Math::TVector<float>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a9c3e50

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Mutable::Private::FCacheAddress>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::FCacheAddress> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Mutable::Private::FCacheAddress> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a9c3ee0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Mutable::Private::FSurfaceSubMesh>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x14);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x14);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a9c3f70

void __thiscall
TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::ForElementType<UE::Mutable::Private::ExecutionIndex>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::ExecutionIndex> *this,int param_1,int param_2,
          ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)&this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    UE::Mutable::Private::
    TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
    ::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove(*(void **)&this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  UE::Mutable::Private::
  TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
  ::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a9c4000

void __thiscall
TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)&this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    UE::Mutable::Private::
    TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
    ::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove(*(void **)&this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  UE::Mutable::Private::
  TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
  ::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14a9c4090

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<enum_UE::Mutable::Private::EMeshBufferSemantic>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x20);
  if ((uint)param_2 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x20),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x20),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x20),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae8500

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Mutable::Private::FInstanceComponent>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::FInstanceComponent> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Mutable::Private::FInstanceComponent> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xd0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xd0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae85a0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Mutable::Private::FInstanceLOD>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::FInstanceLOD> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Mutable::Private::FInstanceLOD> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Mutable::Private::FInstanceLOD>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xa0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Mutable::Private::FInstanceLOD>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xa0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae8640

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Mutable::Private::FInstanceSurface>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::FInstanceSurface> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Mutable::Private::FInstanceSurface> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<UE::Mutable::Private::FInstanceSurface>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x70);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Mutable::Private::FInstanceSurface>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x70);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae86d0

void __thiscall
TSizedInlineAllocator<256,32,TAlignedHeapAllocator<64>_>::
ForElementType<UE::Mutable::Private::FScheduledOpInline>::ResizeAllocation
          (ForElementType<UE::Mutable::Private::FScheduledOpInline> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Mutable::Private::FScheduledOpInline> FVar1;
  ulong64 uVar2;
  
  FVar1 = this->SecondaryData;
  if ((uint)param_2 < 0x101) {
    if (FVar1 != (ForElementType<UE::Mutable::Private::FScheduledOpInline>)0x0) {
      memmove(this,(void *)FVar1,(longlong)param_1 * 0xc);
      FVar1 = this->SecondaryData;
      if (FVar1 != (ForElementType<UE::Mutable::Private::FScheduledOpInline>)0x0) {
        if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidAlignedHeapAllocatorNum(0,param_3);
        }
        uVar2 = 0;
LAB_14aae87a0:
        FVar1 = (ForElementType<UE::Mutable::Private::FScheduledOpInline>)
                FMemory::Realloc((void *)FVar1,uVar2,0x40);
        this->SecondaryData = FVar1;
        return;
      }
    }
  }
  else {
    if (FVar1 != (ForElementType<UE::Mutable::Private::FScheduledOpInline>)0x0) {
      if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
        uVar2 = (longlong)param_2 * param_3;
        goto LAB_14aae87a0;
      }
LAB_14aae87c2:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidAlignedHeapAllocatorNum(param_2,param_3);
    }
    FVar1 = (ForElementType<UE::Mutable::Private::FScheduledOpInline>)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) goto LAB_14aae87c2;
      FVar1 = (ForElementType<UE::Mutable::Private::FScheduledOpInline>)
              FMemory::Realloc((void *)0x0,(longlong)param_2 * param_3,0x40);
      this->SecondaryData = FVar1;
    }
    memmove((void *)FVar1,this,(longlong)param_1 * 0xc);
  }
  return;
}

// ResizeAllocation @ 14aae87e0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
::ResizeAllocation(ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae8870

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>_>
::ResizeAllocation(ForElementType<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae8910

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
          (ForElementType<UE::Tasks::Private::FTaskHandle> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Tasks::Private::FTaskHandle> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14aae89a0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
          (ForElementType<UE::Tasks::Private::FTaskHandle> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::Tasks::Private::FTaskHandle> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14ab53ce0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>::ResizeAllocation
          (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
    if (_Src == (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

