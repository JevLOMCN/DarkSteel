// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 14

// ResizeAllocation @ 145c75670

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>::
ResizeAllocation(ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
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

// ResizeAllocation @ 145c75710

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 6) {
    if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145c757a0

void __thiscall
TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 7) {
    if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145c75830

void __thiscall
TSizedInlineAllocator<67,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x44) {
    if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cbe3d0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>::
ResizeAllocation(ForElementType<FRHIUniformBuffer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRHIUniformBuffer_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRHIUniformBuffer_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHIUniformBuffer_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cbe460

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>::
ResizeAllocation(ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cbe4f0

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>::
ResizeAllocation(ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
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

// ResizeAllocation @ 145cbe580

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>::
ResizeAllocation(ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
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

// ResizeAllocation @ 145cbe610

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>::
ResizeAllocation(ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
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

// ResizeAllocation @ 145cbe740

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLockTracker::FLockParams>
::ResizeAllocation(ForElementType<FLockTracker::FLockParams> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FLockTracker::FLockParams> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FLockTracker::FLockParams>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FLockTracker::FLockParams>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cbe7e0

void __thiscall
TSizedInlineAllocator<58,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x3b) {
    if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cbe880

void __thiscall
TSizedInlineAllocator<14,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xf) {
    if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TStringView<wchar_t>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cf0d00

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<RHIValidation::FResourceIdentity>::ResizeAllocation
          (ForElementType<RHIValidation::FResourceIdentity> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<RHIValidation::FResourceIdentity> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145cf0da0

void __thiscall
TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
ForElementType<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

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

