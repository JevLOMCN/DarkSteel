// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 34

// ResizeAllocation @ 145dc8b50

void __thiscall
TRDGArrayAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  FRDGAllocator *this_00;
  uint *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (uint *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc8f10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>::ResizeAllocation
          (ForElementType<FRDGSubresourceState_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGSubresourceState **_Src;
  FRDGAllocator *this_00;
  FRDGSubresourceState **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGSubresourceState **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc8ff0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>::ResizeAllocation
          (ForElementType<FRDGBarrierBatchBegin_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGBarrierBatchBegin **_Src;
  FRDGAllocator *this_00;
  FRDGBarrierBatchBegin **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGBarrierBatchBegin **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc92b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>::ResizeAllocation
          (ForElementType<FRDGViewableResource_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGViewableResource **_Src;
  FRDGAllocator *this_00;
  FRDGViewableResource **_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGViewableResource **)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc94c0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::
ResizeAllocation(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
                int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Src;
  FRDGAllocator *this_00;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) && (param_1 != 0))
    {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc95a0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::
ResizeAllocation(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *this,
                int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *_Src;
  FRDGAllocator *this_00;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0) && (param_1 != 0))
    {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9680

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>::
ResizeAllocation(ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_> *this,
                int param_1,int param_2,ulong64 param_3)

{
  TTuple<FRDGViewableResource_*,FRHITransientResource_*> *_Src;
  FRDGAllocator *this_00;
  TTuple<FRDGViewableResource_*,FRHITransientResource_*> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TTuple<FRDGViewableResource_*,FRHITransientResource_*> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>::ResizeAllocation
          (ForElementType<FRDGPass::FBufferState> *this,int param_1,int param_2,ulong64 param_3)

{
  FBufferState *_Src;
  FRDGAllocator *this_00;
  FBufferState *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FBufferState *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9840

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>::ResizeAllocation
          (ForElementType<FRDGBuilder::FCollectResourceOp> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FCollectResourceOp *_Src;
  FRDGAllocator *this_00;
  FCollectResourceOp *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (FCollectResourceOp *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9900

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>::ResizeAllocation
          (ForElementType<FRDGPass::FExternalAccessOp> *this,int param_1,int param_2,ulong64 param_3
          )

{
  FExternalAccessOp *_Src;
  FRDGAllocator *this_00;
  FExternalAccessOp *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FExternalAccessOp *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>::ResizeAllocation
          (ForElementType<FParallelPassSet> *this,int param_1,int param_2,ulong64 param_3)

{
  FParallelPassSet *_Src;
  FRDGAllocator *this_00;
  FParallelPassSet *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FParallelPassSet *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>::
ResizeAllocation(ForElementType<FRHICommandListImmediate::FQueuedCommandList> *this,int param_1,
                int param_2,ulong64 param_3)

{
  FQueuedCommandList *_Src;
  FRDGAllocator *this_00;
  FQueuedCommandList *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FQueuedCommandList *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9ce0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>::ResizeAllocation
          (ForElementType<FRDGTransitionInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGTransitionInfo *_Src;
  FRDGAllocator *this_00;
  FRDGTransitionInfo *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRDGTransitionInfo *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9e60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>::ResizeAllocation
          (ForElementType<FRHITrackedAccessInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FRHITrackedAccessInfo *_Src;
  FRDGAllocator *this_00;
  FRHITrackedAccessInfo *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRHITrackedAccessInfo *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dc9f40

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>::ResizeAllocation
          (ForElementType<FRHITransientAliasingInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FRHITransientAliasingInfo *_Src;
  FRDGAllocator *this_00;
  FRHITransientAliasingInfo *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FRHITransientAliasingInfo *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca210

void __thiscall
TRDGArrayAllocator<0>::
ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
::ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  FSpan *_Src;
  FRDGAllocator *this_00;
  FSpan *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (FSpan *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca3a0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  FRDGAllocator *this_00;
  void *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = *(void **)this;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    *(void **)this = _Dst;
    if ((_Src != (void *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca520

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>::ResizeAllocation
          (ForElementType<FRDGPass::FTextureState> *this,int param_1,int param_2,ulong64 param_3)

{
  FTextureState *_Src;
  FRDGAllocator *this_00;
  FTextureState *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FTextureState *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca600

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>::ResizeAllocation
          (ForElementType<FTransferResourceParams> *this,int param_1,int param_2,ulong64 param_3)

{
  FTransferResourceParams *_Src;
  FRDGAllocator *this_00;
  FTransferResourceParams *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FTransferResourceParams *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca820

void __thiscall
TRDGArrayAllocator<0>::
ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>::
ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *_Src;
  FRDGAllocator *this_00;
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca900

void __thiscall
TRDGArrayAllocator<0>::
ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>::
ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TKeyValue<FRHIBuffer_*,FRHIGPUMask> *_Src;
  FRDGAllocator *this_00;
  TKeyValue<FRHIBuffer_*,FRHIGPUMask> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TKeyValue<FRHIBuffer_*,FRHIGPUMask> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dca9e0

void __thiscall
TRDGArrayAllocator<0>::
ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>::
ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TKeyValue<FRHITexture_*,FRDGTexture_*> *_Src;
  FRDGAllocator *this_00;
  TKeyValue<FRHITexture_*,FRDGTexture_*> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TKeyValue<FRHITexture_*,FRDGTexture_*> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcaac0

void __thiscall
TRDGArrayAllocator<0>::
ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>::
ResizeAllocation(ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TKeyValue<FRHITexture_*,FRHIGPUMask> *_Src;
  FRDGAllocator *this_00;
  TKeyValue<FRHITexture_*,FRHIGPUMask> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TKeyValue<FRHITexture_*,FRHIGPUMask> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcaba0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_>::ResizeAllocation
          (ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRDGHandle<FRDGBuffer,unsigned_int> *_Src;
  FRDGAllocator *this_00;
  TRDGHandle<FRDGBuffer,unsigned_int> *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (TRDGHandle<FRDGBuffer,unsigned_int> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcac60

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>::ResizeAllocation
          (ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRDGHandle<FRDGPass,unsigned_int> *_Src;
  FRDGAllocator *this_00;
  TRDGHandle<FRDGPass,unsigned_int> *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (TRDGHandle<FRDGPass,unsigned_int> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcadf0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_>::ResizeAllocation
          (ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRDGHandle<FRDGTexture,unsigned_int> *_Src;
  FRDGAllocator *this_00;
  TRDGHandle<FRDGTexture,unsigned_int> *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (TRDGHandle<FRDGTexture,unsigned_int> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcaeb0

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>::ResizeAllocation
          (ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  TRDGHandle<FRDGUniformBuffer,unsigned_int> *_Src;
  FRDGAllocator *this_00;
  TRDGHandle<FRDGUniformBuffer,unsigned_int> *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (TRDGHandle<FRDGUniformBuffer,unsigned_int> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcaf70

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>::ResizeAllocation
          (ForElementType<TRDGHandle<FRDGView,unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRDGHandle<FRDGView,unsigned_int> *_Src;
  FRDGAllocator *this_00;
  TRDGHandle<FRDGView,unsigned_int> *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (TRDGHandle<FRDGView,unsigned_int> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcb030

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>::ResizeAllocation
          (ForElementType<TRHIPipelineArray<FRDGProducerState>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRHIPipelineArray<FRDGProducerState> *_Src;
  FRDGAllocator *this_00;
  TRHIPipelineArray<FRDGProducerState> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TRHIPipelineArray<FRDGProducerState> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcb110

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<IPooledRenderTarget>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRefCountPtr<IPooledRenderTarget> *_Src;
  FRDGAllocator *this_00;
  TRefCountPtr<IPooledRenderTarget> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TRefCountPtr<IPooledRenderTarget> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcb1f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FRDGPooledBuffer>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRefCountPtr<FRDGPooledBuffer> *_Src;
  FRDGAllocator *this_00;
  TRefCountPtr<FRDGPooledBuffer> *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (TRefCountPtr<FRDGPooledBuffer> *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcb370

void __thiscall
TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>::ResizeAllocation
          (ForElementType<Experimental::FHashType> *this,int param_1,int param_2,ulong64 param_3)

{
  FHashType *_Src;
  FRDGAllocator *this_00;
  FHashType *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (FHashType *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcb650

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FSetElementId>::ResizeAllocation
          (ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  FRDGAllocator *this_00;
  FSetElementId *_Dst;
  int iVar1;
  ulong64 uVar2;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar1 = (int)param_3 * param_2;
    this_00 = FRDGAllocator::GetTLS();
    uVar2 = 8;
    if (0xf < iVar1) {
      uVar2 = 0x10;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar1,uVar2);
    this->Data = _Dst;
    if ((_Src != (FSetElementId *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 145dcba10

void __thiscall
TRDGArrayAllocator<0>::ForElementType<unsigned___int64>::ResizeAllocation
          (ForElementType<unsigned___int64> *this,int param_1,int param_2,ulong64 param_3)

{
  ulong64 *_Src;
  FRDGAllocator *this_00;
  ulong64 *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (ulong64 *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

