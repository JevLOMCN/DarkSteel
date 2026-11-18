// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 8

// Emplace<UE::RHI::GPUProfiler::FEvent::FBeginBreadcrumb,FRHIBreadcrumbNode_*_&> @ 14595f500

FBeginBreadcrumb * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FBeginBreadcrumb,FRHIBreadcrumbNode_*_&>
          (FEventStream *this,FRHIBreadcrumbNode **param_1)

{
  uint uVar1;
  atomic<void_*> _Dst;
  atomic<void_*> aVar2;
  atomic<void_*> aVar3;
  
  aVar2 = (atomic<void_*>)this->Current;
  aVar3 = (atomic<void_*>)0x0;
  if (aVar2 == (atomic<void_*>)0x0) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar3;
    if (uVar1 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar2 = aVar3;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar2 = _Dst;
    }
    this->Current = (FChunk *)aVar2;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar2;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar2 + 8)) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar2 = aVar3;
    if (uVar1 != 0) {
      aVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (aVar2 == (atomic<void_*>)0x0) {
      aVar2 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar2,0xf7,0x4000);
    if (aVar2 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar2 = 0;
      *(undefined4 *)((longlong)aVar2 + 8) = 0;
      *(undefined8 *)((longlong)aVar2 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar2 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar2 + 0x3c) = 2;
      aVar3 = aVar2;
    }
    (this->Current->Header).Next = (FChunk *)aVar3;
    this->Current = (FChunk *)aVar3;
    aVar2 = aVar3;
  }
  uVar1 = *(uint *)((longlong)aVar2 + 8);
  *(uint *)((longlong)aVar2 + 8) = uVar1 + 1;
  ((undefined8 *)((longlong)aVar2 + 0x40))[(ulonglong)uVar1 * 5] = *param_1;
  ((undefined8 *)((longlong)aVar2 + 0x48))[(ulonglong)uVar1 * 5] = 0;
  *(undefined1 *)((undefined8 *)((longlong)aVar2 + 0x60) + (ulonglong)uVar1 * 5) = 2;
  if (((undefined8 *)((longlong)aVar2 + 0x40))[(ulonglong)uVar1 * 5] != 0) {
    FRHIBreadcrumbAllocatorArray::AddUnique
              (&(this->Current->Header).BreadcrumbAllocators,
               *(FRHIBreadcrumbAllocator **)
                (((undefined8 *)((longlong)aVar2 + 0x40))[(ulonglong)uVar1 * 5] + 0x28));
  }
  return (FBeginBreadcrumb *)((undefined8 *)((longlong)aVar2 + 0x40) + (ulonglong)uVar1 * 5);
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,unsigned___int64_&> @ 14595f6c0

FBeginWork * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,unsigned___int64_&>
          (FEventStream *this,ulong64 *param_1)

{
  FBeginWork *pFVar1;
  uint uVar2;
  atomic<void_*> _Dst;
  atomic<void_*> aVar3;
  atomic<void_*> aVar4;
  
  aVar3 = (atomic<void_*>)this->Current;
  aVar4 = (atomic<void_*>)0x0;
  if (aVar3 == (atomic<void_*>)0x0) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar4;
    if (uVar2 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar3 = aVar4;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar3 = _Dst;
    }
    this->Current = (FChunk *)aVar3;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar3;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar3 + 8)) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar3 = aVar4;
    if (uVar2 != 0) {
      aVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (aVar3 == (atomic<void_*>)0x0) {
      aVar3 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar3,0xf7,0x4000);
    if (aVar3 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar3 = 0;
      *(undefined4 *)((longlong)aVar3 + 8) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x3c) = 2;
      aVar4 = aVar3;
    }
    (this->Current->Header).Next = (FChunk *)aVar4;
    this->Current = (FChunk *)aVar4;
    aVar3 = aVar4;
  }
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  *(uint *)((longlong)aVar3 + 8) = uVar2 + 1;
  pFVar1 = (FBeginWork *)((undefined8 *)((longlong)aVar3 + 0x40) + (ulonglong)uVar2 * 5);
  pFVar1->CPUTimestamp = *param_1;
  pFVar1->GPUTimestampTOP = 0;
  *(undefined1 *)&pFVar1[2].CPUTimestamp = 4;
  return pFVar1;
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,unsigned___int64> @ 14595f860

FBeginWork * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,unsigned___int64>
          (FEventStream *this,ulong64 *param_1)

{
  FBeginWork *pFVar1;
  uint uVar2;
  atomic<void_*> _Dst;
  atomic<void_*> aVar3;
  atomic<void_*> aVar4;
  
  aVar3 = (atomic<void_*>)this->Current;
  aVar4 = (atomic<void_*>)0x0;
  if (aVar3 == (atomic<void_*>)0x0) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar4;
    if (uVar2 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar3 = aVar4;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar3 = _Dst;
    }
    this->Current = (FChunk *)aVar3;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar3;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar3 + 8)) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar3 = aVar4;
    if (uVar2 != 0) {
      aVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (aVar3 == (atomic<void_*>)0x0) {
      aVar3 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar3,0xf7,0x4000);
    if (aVar3 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar3 = 0;
      *(undefined4 *)((longlong)aVar3 + 8) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x3c) = 2;
      aVar4 = aVar3;
    }
    (this->Current->Header).Next = (FChunk *)aVar4;
    this->Current = (FChunk *)aVar4;
    aVar3 = aVar4;
  }
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  *(uint *)((longlong)aVar3 + 8) = uVar2 + 1;
  pFVar1 = (FBeginWork *)((undefined8 *)((longlong)aVar3 + 0x40) + (ulonglong)uVar2 * 5);
  pFVar1->CPUTimestamp = *param_1;
  pFVar1->GPUTimestampTOP = 0;
  *(undefined1 *)&pFVar1[2].CPUTimestamp = 4;
  return pFVar1;
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FEndBreadcrumb,FRHIBreadcrumbNode_*_&> @ 14595fa00

FEndBreadcrumb * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FEndBreadcrumb,FRHIBreadcrumbNode_*_&>
          (FEventStream *this,FRHIBreadcrumbNode **param_1)

{
  uint uVar1;
  atomic<void_*> _Dst;
  atomic<void_*> aVar2;
  atomic<void_*> aVar3;
  
  aVar2 = (atomic<void_*>)this->Current;
  aVar3 = (atomic<void_*>)0x0;
  if (aVar2 == (atomic<void_*>)0x0) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar3;
    if (uVar1 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar2 = aVar3;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar2 = _Dst;
    }
    this->Current = (FChunk *)aVar2;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar2;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar2 + 8)) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar2 = aVar3;
    if (uVar1 != 0) {
      aVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (aVar2 == (atomic<void_*>)0x0) {
      aVar2 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar2,0xf7,0x4000);
    if (aVar2 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar2 = 0;
      *(undefined4 *)((longlong)aVar2 + 8) = 0;
      *(undefined8 *)((longlong)aVar2 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar2 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar2 + 0x3c) = 2;
      aVar3 = aVar2;
    }
    (this->Current->Header).Next = (FChunk *)aVar3;
    this->Current = (FChunk *)aVar3;
    aVar2 = aVar3;
  }
  uVar1 = *(uint *)((longlong)aVar2 + 8);
  *(uint *)((longlong)aVar2 + 8) = uVar1 + 1;
  ((undefined8 *)((longlong)aVar2 + 0x40))[(ulonglong)uVar1 * 5] = *param_1;
  ((undefined8 *)((longlong)aVar2 + 0x48))[(ulonglong)uVar1 * 5] = 0;
  *(undefined1 *)((undefined8 *)((longlong)aVar2 + 0x60) + (ulonglong)uVar1 * 5) = 3;
  if (((undefined8 *)((longlong)aVar2 + 0x40))[(ulonglong)uVar1 * 5] != 0) {
    FRHIBreadcrumbAllocatorArray::AddUnique
              (&(this->Current->Header).BreadcrumbAllocators,
               *(FRHIBreadcrumbAllocator **)
                (((undefined8 *)((longlong)aVar2 + 0x40))[(ulonglong)uVar1 * 5] + 0x28));
  }
  return (FEndBreadcrumb *)((undefined8 *)((longlong)aVar2 + 0x40) + (ulonglong)uVar1 * 5);
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork> @ 14595fbc0

FEndWork * __thiscall
UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
          (FEventStream *this)

{
  FEndWork *pFVar1;
  uint uVar2;
  atomic<void_*> _Dst;
  atomic<void_*> aVar3;
  atomic<void_*> aVar4;
  
  aVar3 = (atomic<void_*>)this->Current;
  aVar4 = (atomic<void_*>)0x0;
  if (aVar3 == (atomic<void_*>)0x0) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar4;
    if (uVar2 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar3 = aVar4;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar3 = _Dst;
    }
    this->Current = (FChunk *)aVar3;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar3;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar3 + 8)) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar3 = aVar4;
    if (uVar2 != 0) {
      aVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (aVar3 == (atomic<void_*>)0x0) {
      aVar3 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar3,0xf7,0x4000);
    if (aVar3 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar3 = 0;
      *(undefined4 *)((longlong)aVar3 + 8) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x3c) = 2;
      aVar4 = aVar3;
    }
    (this->Current->Header).Next = (FChunk *)aVar4;
    this->Current = (FChunk *)aVar4;
    aVar3 = aVar4;
  }
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  *(uint *)((longlong)aVar3 + 8) = uVar2 + 1;
  pFVar1 = (FEndWork *)((undefined8 *)((longlong)aVar3 + 0x40) + (ulonglong)uVar2 * 5);
  pFVar1->GPUTimestampBOP = 0;
  *(undefined1 *)&pFVar1[4].GPUTimestampBOP = 5;
  return pFVar1;
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FFrameBoundary,unsigned___int64_&,unsigned_int_const_&,FRHIBreadcrumbNode_*_const_&,TOptional<__int64>_const_&> @ 14595fd50

FFrameBoundary * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FFrameBoundary,unsigned___int64_&,unsigned_int_const_&,FRHIBreadcrumbNode_*_const_&,TOptional<__int64>_const_&>
          (FEventStream *this,ulong64 *param_1,uint *param_2,FRHIBreadcrumbNode **param_3,
          TOptional<__int64> *param_4)

{
  uint uVar1;
  FRHIBreadcrumbNode *pFVar2;
  uint uVar3;
  atomic<void_*> _Dst;
  atomic<void_*> aVar4;
  atomic<void_*> aVar5;
  undefined4 uStack_2c;
  long64 local_28;
  
  aVar4 = (atomic<void_*>)this->Current;
  aVar5 = (atomic<void_*>)0x0;
  if (aVar4 == (atomic<void_*>)0x0) {
    uVar3 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar5;
    if (uVar3 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar4 = aVar5;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar4 = _Dst;
    }
    this->Current = (FChunk *)aVar4;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar4;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar4 + 8)) {
    uVar3 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar4 = aVar5;
    if (uVar3 != 0) {
      aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
    }
    if (aVar4 == (atomic<void_*>)0x0) {
      aVar4 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar4,0xf7,0x4000);
    if (aVar4 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar4 = 0;
      *(undefined4 *)((longlong)aVar4 + 8) = 0;
      *(undefined8 *)((longlong)aVar4 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar4 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar4 + 0x3c) = 2;
      aVar5 = aVar4;
    }
    (this->Current->Header).Next = (FChunk *)aVar5;
    this->Current = (FChunk *)aVar5;
    aVar4 = aVar5;
  }
  uVar3 = *(uint *)((longlong)aVar4 + 8);
  *(uint *)((longlong)aVar4 + 8) = uVar3 + 1;
  pFVar2 = *param_3;
  uVar1 = *param_2;
  uStack_2c = CONCAT31(uStack_2c._1_3_,param_4->bIsSet);
  if (param_4->bIsSet == false) {
    local_28 = 0;
  }
  else {
    local_28 = param_4->TypedValue;
  }
  ((undefined8 *)((longlong)aVar4 + 0x40))[(ulonglong)uVar3 * 5] = *param_1;
  ((undefined8 *)((longlong)aVar4 + 0x48))[(ulonglong)uVar3 * 5] = CONCAT44(uStack_2c,uVar1);
  ((undefined8 *)((longlong)aVar4 + 0x50))[(ulonglong)uVar3 * 5] = local_28;
  ((undefined8 *)((longlong)aVar4 + 0x58))[(ulonglong)uVar3 * 5] = pFVar2;
  *(undefined1 *)((undefined8 *)((longlong)aVar4 + 0x60) + (ulonglong)uVar3 * 5) = 0;
  if (((undefined8 *)((longlong)aVar4 + 0x58))[(ulonglong)uVar3 * 5] != 0) {
    FRHIBreadcrumbAllocatorArray::AddUnique
              (&(this->Current->Header).BreadcrumbAllocators,
               *(FRHIBreadcrumbAllocator **)
                (((undefined8 *)((longlong)aVar4 + 0x58))[(ulonglong)uVar3 * 5] + 0x28));
  }
  return (FFrameBoundary *)((undefined8 *)((longlong)aVar4 + 0x40) + (ulonglong)uVar3 * 5);
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FStats> @ 14595ff60

FStats * __thiscall
UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
          (FEventStream *this)

{
  FStats *pFVar1;
  uint uVar2;
  atomic<void_*> _Dst;
  atomic<void_*> aVar3;
  atomic<void_*> aVar4;
  
  aVar3 = (atomic<void_*>)this->Current;
  aVar4 = (atomic<void_*>)0x0;
  if (aVar3 == (atomic<void_*>)0x0) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar4;
    if (uVar2 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar3 = aVar4;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar3 = _Dst;
    }
    this->Current = (FChunk *)aVar3;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar3;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar3 + 8)) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar3 = aVar4;
    if (uVar2 != 0) {
      aVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (aVar3 == (atomic<void_*>)0x0) {
      aVar3 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar3,0xf7,0x4000);
    if (aVar3 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar3 = 0;
      *(undefined4 *)((longlong)aVar3 + 8) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar3 + 0x3c) = 2;
      aVar4 = aVar3;
    }
    (this->Current->Header).Next = (FChunk *)aVar4;
    this->Current = (FChunk *)aVar4;
    aVar3 = aVar4;
  }
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  *(uint *)((longlong)aVar3 + 8) = uVar2 + 1;
  pFVar1 = (FStats *)((undefined8 *)((longlong)aVar3 + 0x40) + (ulonglong)uVar2 * 5);
  pFVar1->NumDraws = 0;
  pFVar1->NumDispatches = 0;
  pFVar1->NumPrimitives = 0;
  pFVar1->NumVertices = 0;
  *(undefined1 *)&pFVar1[2].NumDraws = 6;
  return pFVar1;
}

// ~FEventStream @ 14596f970

void __thiscall UE::RHI::GPUProfiler::FEventStream::~FEventStream(FEventStream *this)

{
  atomic<void_*> aVar1;
  atomic<void_*> _Dst;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar4;
  
  _Dst = (atomic<void_*>)this->First;
  while (_Dst != (atomic<void_*>)0x0) {
    aVar1 = *(atomic<void_*> *)_Dst;
    pTVar4 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)((longlong)_Dst + 0x10);
    if (*(TSharedRef<FRHIBreadcrumbAllocator,1> **)((longlong)_Dst + 0x30) !=
        (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
      pTVar4 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)((longlong)_Dst + 0x30);
    }
    DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>(pTVar4,*(int *)((longlong)_Dst + 0x38))
    ;
    if (*(void **)((longlong)_Dst + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)_Dst + 0x30));
    }
    memset((void *)_Dst,0xe5,0x4000);
    uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar2 == 0) {
      pFVar3 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
    }
    pFVar3->Payload = _Dst;
    FLockFreePointerListLIFORoot<64,1>::Push
              ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool,uVar2);
    this->First = (FChunk *)aVar1;
    _Dst = aVar1;
  }
  return;
}

