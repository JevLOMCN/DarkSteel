// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 41

// ResizeAllocation @ 1459d6ba0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>::ResizeAllocation
          (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1459d6c30

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>::
ResizeAllocation(ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>_>
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

// ResizeAllocation @ 1459d6cc0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>::ResizeAllocation
          (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0)
    {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
                   0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 1459d6d60

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_D3D12_MESSAGE_ID>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x40);
  if ((uint)param_2 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x40),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x40),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2eae0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>::
ResizeAllocation(ForElementType<FD3D12Buffer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12Buffer_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FD3D12Buffer_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12Buffer_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2eb70

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>::
ResizeAllocation(ForElementType<FD3D12RayTracingScene_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FD3D12RayTracingScene_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FD3D12RayTracingScene_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12RayTracingScene_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2ec00

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>::ResizeAllocation
          (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2eca0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>::ResizeAllocation
          (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2ed40

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>::
ResizeAllocation(ForElementType<D3D12_EXPORT_DESC> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<D3D12_EXPORT_DESC> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<D3D12_EXPORT_DESC>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D12_EXPORT_DESC>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2edd0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation
          (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2ee60

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>::ResizeAllocation
          (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2f040

void __thiscall
TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
ForElementType<FRHITransientAliasingOverlap>::ResizeAllocation
          (ForElementType<FRHITransientAliasingOverlap> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRHITransientAliasingOverlap *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FRHITransientAliasingOverlap *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FRHITransientAliasingOverlap *)0x0;
    }
  }
  else if (_Src == (FRHITransientAliasingOverlap *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FRHITransientAliasingOverlap>::ResizeAllocation
              (&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 4);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FRHITransientAliasingOverlap>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145a2f190

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x18);
  if ((uint)param_2 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x18),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x18),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x18),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2f220

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>::ResizeAllocation
          (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2f2c0

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRefCountPtr<FD3D12SyncPoint>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FD3D12SyncPoint>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2f350

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TRefCountPtr<FD3D12SyncPoint>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FD3D12SyncPoint>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a2f3e0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
                )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145a2f480

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::ResizeAllocation
          (ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FString> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FString>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FString>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b4f0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>::
ResizeAllocation(ForElementType<FD3D12Payload_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12Payload_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<FD3D12Payload_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12Payload_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b590

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>::
ResizeAllocation(ForElementType<FD3D12ResidencyHandle_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FD3D12ResidencyHandle_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FD3D12ResidencyHandle_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12ResidencyHandle_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b620

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ID3D12CommandList_*>::
ResizeAllocation(ForElementType<ID3D12CommandList_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<ID3D12CommandList_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<ID3D12CommandList_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<ID3D12CommandList_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b6c0

void __thiscall
TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
ForElementType<D3DX12Residency::ResidencySet_*>::ResizeAllocation
          (ForElementType<D3DX12Residency::ResidencySet_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<D3DX12Residency::ResidencySet_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x81) {
    if (_Src == (ForElementType<D3DX12Residency::ResidencySet_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3DX12Residency::ResidencySet_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b760

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>::
ResizeAllocation(ForElementType<D3D12_SUBRESOURCE_TILING> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<D3D12_SUBRESOURCE_TILING> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b800

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12PayloadBase::FQueueFence>::ResizeAllocation
          (ForElementType<FD3D12PayloadBase::FQueueFence> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FD3D12PayloadBase::FQueueFence> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b8a0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b930

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>::ResizeAllocation
          (ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7b9d0

void __thiscall
TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::RHI::GPUProfiler::FEventStream>::ResizeAllocation
          (ForElementType<UE::RHI::GPUProfiler::FEventStream> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<UE::RHI::GPUProfiler::FEventStream> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x19) {
    if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7ba70

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145a7bb10

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145a7bbb0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145a7bc50

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>::ResizeAllocation
          (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0
       ) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
                   0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145a7bcf0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_DXGI_FORMAT>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x10),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ab6a30

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12Viewport::FBackBufferData>::ResizeAllocation
          (ForElementType<FD3D12Viewport::FBackBufferData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FD3D12Viewport::FBackBufferData> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12Viewport::FBackBufferData>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ab6ac0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>::
ResizeAllocation(ForElementType<FShaderBundleBinderOps> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FShaderBundleBinderOps> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FShaderBundleBinderOps>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x90);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FShaderBundleBinderOps>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x90);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ab6b60

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderCodeVendorExtension>
::ResizeAllocation(ForElementType<FShaderCodeVendorExtension> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FShaderCodeVendorExtension> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FShaderCodeVendorExtension>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FShaderCodeVendorExtension>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ab6bf0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x10),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ab6c80

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x10),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ab6d10

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145ab6db0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145ab6e50

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
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

// ResizeAllocation @ 145ab6ef0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>::
ResizeAllocation(ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
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

