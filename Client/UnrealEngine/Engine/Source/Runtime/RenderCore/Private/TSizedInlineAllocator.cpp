// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 30

// ResizeAllocation @ 145d48b20

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>::
ResizeAllocation(ForElementType<FRHIGPUBufferReadback_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FRHIGPUBufferReadback_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145dc8c10

void __thiscall
TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (uint *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (uint *)0x0;
    }
  }
  else if (_Src == (uint *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc8cc0

void __thiscall
TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGAllocator *this_00;
  uint *puVar1;
  int iVar2;
  ulong64 uVar3;
  
  puVar1 = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (puVar1 != (uint *)0x0) {
      memmove(this,puVar1,(longlong)param_1 << 2);
    }
  }
  else if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
        UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
      }
      iVar2 = (int)param_3 * param_2;
      this_00 = FRDGAllocator::GetTLS();
      uVar3 = 8;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      puVar1 = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,uVar3);
      (this->SecondaryData).Data = puVar1;
    }
    memmove(puVar1,this,(longlong)param_1 << 2);
  }
  else {
    TRDGArrayAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc8d90

void __thiscall
TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (uint *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (uint *)0x0;
    }
  }
  else if (_Src == (uint *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc8e40

void __thiscall
TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGAllocator *this_00;
  uint *puVar1;
  int iVar2;
  ulong64 uVar3;
  
  puVar1 = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (puVar1 != (uint *)0x0) {
      memmove(this,puVar1,(longlong)param_1 << 2);
    }
  }
  else if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
        UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
      }
      iVar2 = (int)param_3 * param_2;
      this_00 = FRDGAllocator::GetTLS();
      uVar3 = 8;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      puVar1 = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,uVar3);
      (this->SecondaryData).Data = puVar1;
    }
    memmove(puVar1,this,(longlong)param_1 << 2);
  }
  else {
    TRDGArrayAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc90d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGBarrierBatchBegin_*>::
ResizeAllocation(ForElementType<FRDGBarrierBatchBegin_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FRDGBarrierBatchBegin **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FRDGBarrierBatchBegin **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FRDGBarrierBatchBegin **)0x0) {
      TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc9170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>::ResizeAllocation
          (ForElementType<FRDGPass_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGPass **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (FRDGPass **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FRDGPass **)0x0) {
      TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc9210

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>::ResizeAllocation
          (ForElementType<FRDGPass_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGPass **_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x41) {
    if (_Src != (FRDGPass **)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      return;
    }
  }
  else {
    if (_Src == (FRDGPass **)0x0) {
      TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
                (&this->SecondaryData,0,param_2,param_3);
      memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
      return;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dc9390

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>::
ResizeAllocation(ForElementType<FRHITransition_const_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FRHITransition_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FRHITransition_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRHITransition_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145dc99e0

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>::ResizeAllocation
          (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145dc9a80

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<DynamicRenderScaling::TMap<bool>::FItem>::ResizeAllocation
          (ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145dca160

void __thiscall
TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
::ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  FSpan *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (FSpan *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 3);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FSpan *)0x0;
    }
  }
  else if (_Src == (FSpan *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
    ::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 3);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dca2d0

void __thiscall
TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::
ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
::ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGAllocator *this_00;
  FSpan *pFVar1;
  int iVar2;
  ulong64 uVar3;
  
  pFVar1 = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (pFVar1 != (FSpan *)0x0) {
      memmove(this,pFVar1,(longlong)param_1 << 3);
    }
  }
  else if (pFVar1 == (FSpan *)0x0) {
    pFVar1 = (FSpan *)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
        UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
      }
      iVar2 = (int)param_3 * param_2;
      this_00 = FRDGAllocator::GetTLS();
      uVar3 = 8;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      pFVar1 = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,uVar3);
      (this->SecondaryData).Data = pFVar1;
    }
    memmove(pFVar1,this,(longlong)param_1 << 3);
  }
  else {
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dca480

void __thiscall
TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::
ForElementType<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x10);
  if ((uint)param_2 < 2) {
    if (_Src != (void *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 4);
      return;
    }
  }
  else {
    if (_Src == (void *)0x0) {
      TRDGArrayAllocator<0>::ForElementType<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>::
      ResizeAllocation((void *)((longlong)this + 0x10),0,param_2,param_3);
      memmove(*(void **)((longlong)this + 0x10),this,(longlong)param_1 << 4);
      return;
    }
    TRDGArrayAllocator<0>::ForElementType<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>::
    ResizeAllocation((void *)((longlong)this + 0x10),param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dcad20

void __thiscall
TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::
ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>::ResizeAllocation
          (ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRDGAllocator *this_00;
  TRDGHandle<FRDGPass,unsigned_int> *pTVar1;
  int iVar2;
  ulong64 uVar3;
  
  pTVar1 = (this->SecondaryData).Data;
  if ((uint)param_2 < 0x21) {
    if (pTVar1 != (TRDGHandle<FRDGPass,unsigned_int> *)0x0) {
      memmove(this,pTVar1,(longlong)param_1 << 2);
    }
  }
  else if (pTVar1 == (TRDGHandle<FRDGPass,unsigned_int> *)0x0) {
    pTVar1 = (TRDGHandle<FRDGPass,unsigned_int> *)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
        UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
      }
      iVar2 = (int)param_3 * param_2;
      this_00 = FRDGAllocator::GetTLS();
      uVar3 = 8;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      pTVar1 = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,uVar3);
      (this->SecondaryData).Data = pTVar1;
    }
    memmove(pTVar1,this,(longlong)param_1 << 2);
  }
  else {
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dcb430

void __thiscall
TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
ForElementType<Experimental::FHashType>::ResizeAllocation
          (ForElementType<Experimental::FHashType> *this,int param_1,int param_2,ulong64 param_3)

{
  FHashType *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (_Src != (FHashType *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FHashType *)0x0;
    }
  }
  else if (_Src == (FHashType *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>
    ::ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>
    ::ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dcb4e0

void __thiscall
TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>::
ResizeAllocation(ForElementType<Experimental::FHashType> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FRDGAllocator *this_00;
  FHashType *pFVar1;
  int iVar2;
  ulong64 uVar3;
  
  pFVar1 = (this->SecondaryData).Data;
  if ((uint)param_2 < 2) {
    if (pFVar1 != (FHashType *)0x0) {
      memmove(this,pFVar1,(longlong)param_1 << 2);
    }
  }
  else if (pFVar1 == (FHashType *)0x0) {
    pFVar1 = (FHashType *)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
        UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
      }
      iVar2 = (int)param_3 * param_2;
      this_00 = FRDGAllocator::GetTLS();
      uVar3 = 8;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      pFVar1 = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,uVar3);
      (this->SecondaryData).Data = pFVar1;
    }
    memmove(pFVar1,this,(longlong)param_1 << 2);
  }
  else {
    TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dcb710

void __thiscall
TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> *this_00;
  FSetElementId *pFVar1;
  ForElementType<FSetElementId> *pFVar2;
  
  pFVar2 = (ForElementType<FSetElementId> *)(this->SecondaryData).SecondaryData.Data;
  this_00 = &this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      pFVar2 = this_00;
    }
    if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
      memmove(this,pFVar2,(longlong)param_1 << 2);
      pFVar1 = (this->SecondaryData).SecondaryData.Data;
      if (pFVar1 != (FSetElementId *)0x0) {
        if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
        }
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar1);
        (this->SecondaryData).SecondaryData.Data = (FSetElementId *)0x0;
      }
    }
  }
  else {
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      pFVar2 = this_00;
    }
    if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
      ForElementType<FSetElementId>::ResizeAllocation(this_00,0,param_2,param_3);
      pFVar2 = (ForElementType<FSetElementId> *)(this->SecondaryData).SecondaryData.Data;
      if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
        pFVar2 = this_00;
      }
      memmove(pFVar2,this,(longlong)param_1 << 2);
    }
    else {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
      ForElementType<FSetElementId>::ResizeAllocation(this_00,param_1,param_2,param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcb7e0

void __thiscall
TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::
ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> *this_00;
  ForElementType<FSetElementId> *pFVar1;
  
  pFVar1 = (ForElementType<FSetElementId> *)(this->SecondaryData).SecondaryData.Data;
  this_00 = &this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (pFVar1 == (ForElementType<FSetElementId> *)0x0) {
      pFVar1 = this_00;
    }
    if (pFVar1 != (ForElementType<FSetElementId> *)0x0) {
      memmove(this,pFVar1,(longlong)param_1 << 2);
      return;
    }
  }
  else {
    if (pFVar1 == (ForElementType<FSetElementId> *)0x0) {
      pFVar1 = this_00;
    }
    if (pFVar1 == (ForElementType<FSetElementId> *)0x0) {
      TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,param_2,param_3);
      pFVar1 = (ForElementType<FSetElementId> *)(this->SecondaryData).SecondaryData.Data;
      if (pFVar1 == (ForElementType<FSetElementId> *)0x0) {
        pFVar1 = this_00;
      }
      memmove(pFVar1,this,(longlong)param_1 << 2);
      return;
    }
    TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FSetElementId>::
    ResizeAllocation(this_00,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dcb890

void __thiscall
TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  
  _Src = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (_Src != (FSetElementId *)0x0) {
      memmove(this,_Src,(longlong)param_1 << 2);
      if (0x7ffffffe < param_3 - 1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(0,param_3);
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((this->SecondaryData).Data);
      (this->SecondaryData).Data = (FSetElementId *)0x0;
    }
  }
  else if (_Src == (FSetElementId *)0x0) {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSetElementId>::
    ResizeAllocation(&this->SecondaryData,0,param_2,param_3);
    memmove((this->SecondaryData).Data,this,(longlong)param_1 << 2);
  }
  else {
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSetElementId>::
    ResizeAllocation(&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145dcb940

void __thiscall
TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGAllocator *this_00;
  FSetElementId *pFVar1;
  int iVar2;
  ulong64 uVar3;
  
  pFVar1 = (this->SecondaryData).Data;
  if ((uint)param_2 < 5) {
    if (pFVar1 != (FSetElementId *)0x0) {
      memmove(this,pFVar1,(longlong)param_1 << 2);
    }
  }
  else if (pFVar1 == (FSetElementId *)0x0) {
    pFVar1 = (FSetElementId *)0x0;
    if (param_2 != 0) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
        UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
      }
      iVar2 = (int)param_3 * param_2;
      this_00 = FRDGAllocator::GetTLS();
      uVar3 = 8;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      pFVar1 = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,uVar3);
      (this->SecondaryData).Data = pFVar1;
    }
    memmove(pFVar1,this,(longlong)param_1 << 2);
  }
  else {
    TRDGArrayAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
              (&this->SecondaryData,param_1,param_2,param_3);
  }
  return;
}

// ResizeAllocation @ 145e22e40

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderResource_*>::
ResizeAllocation(ForElementType<FRenderResource_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRenderResource_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FRenderResource_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRenderResource_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145e22ee0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FFrameEndSync::FRenderThreadFence>::ResizeAllocation
          (ForElementType<FFrameEndSync::FRenderThreadFence> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FFrameEndSync::FRenderThreadFence> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FFrameEndSync::FRenderThreadFence>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FFrameEndSync::FRenderThreadFence>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145e23010

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>::
ResizeAllocation(ForElementType<FRenderCommandFence> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FRenderCommandFence> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FRenderCommandFence>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FRenderCommandFence>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145e6bef0

void __thiscall
TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x41) {
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

// ResizeAllocation @ 145e6bf90

void __thiscall
TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
ResizeAllocation(ForElementType<TStringView<wchar_t>_> *this,int param_1,int param_2,ulong64 param_3
                )

{
  ForElementType<TStringView<wchar_t>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xd) {
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

// ResizeAllocation @ 145ecc000

void __thiscall
TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>::
ResizeAllocation(ForElementType<FVertexInputStream> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FVertexInputStream> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 8) {
    if (_Src == (ForElementType<FVertexInputStream>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xc);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVertexInputStream>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xc);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ecc090

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation
          (ForElementType<FVertexFactory::FVertexStream> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FVertexFactory::FVertexStream> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ecc120

void __thiscall
TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation
          (ForElementType<FVertexFactory::FVertexStream> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FVertexFactory::FVertexStream> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 4) {
    if (_Src == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 145ecc1b0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation
          (ForElementType<FVertexFactory::FVertexStream> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FVertexFactory::FVertexStream> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

