// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,int> @ 1459a2620

FBeginWork * __thiscall
UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,int>
          (FEventStream *this,int *param_1)

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
  pFVar1->CPUTimestamp = (longlong)*param_1;
  pFVar1->GPUTimestampTOP = 0;
  *(undefined1 *)&pFVar1[2].CPUTimestamp = 4;
  return pFVar1;
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FFrameBoundary,UE::RHI::GPUProfiler::FEvent::FFrameBoundary_&> @ 145a3a000

FFrameBoundary * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FFrameBoundary,UE::RHI::GPUProfiler::FEvent::FFrameBoundary_&>
          (FEventStream *this,FFrameBoundary *param_1)

{
  undefined8 uVar1;
  long64 lVar2;
  FRHIBreadcrumbNode *pFVar3;
  uint uVar4;
  atomic<void_*> _Dst;
  atomic<void_*> aVar5;
  atomic<void_*> aVar6;
  
  aVar5 = (atomic<void_*>)this->Current;
  aVar6 = (atomic<void_*>)0x0;
  if (aVar5 == (atomic<void_*>)0x0) {
    uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    _Dst = aVar6;
    if (uVar4 != 0) {
      _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
    }
    if (_Dst == (atomic<void_*>)0x0) {
      _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)_Dst,0xf7,0x4000);
    aVar5 = aVar6;
    if (_Dst != (atomic<void_*>)0x0) {
      *(undefined8 *)_Dst = 0;
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
      aVar5 = _Dst;
    }
    this->Current = (FChunk *)aVar5;
    if (this->First == (FChunk *)0x0) {
      this->First = (FChunk *)aVar5;
    }
  }
  if (0x197 < *(uint *)((longlong)aVar5 + 8)) {
    uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FChunk::MemoryPool);
    aVar5 = aVar6;
    if (uVar4 != 0) {
      aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
    }
    if (aVar5 == (atomic<void_*>)0x0) {
      aVar5 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
    }
    memset((void *)aVar5,0xf7,0x4000);
    if (aVar5 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar5 = 0;
      *(undefined4 *)((longlong)aVar5 + 8) = 0;
      *(undefined8 *)((longlong)aVar5 + 0x30) = 0;
      *(undefined4 *)((longlong)aVar5 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar5 + 0x3c) = 2;
      aVar6 = aVar5;
    }
    (this->Current->Header).Next = (FChunk *)aVar6;
    this->Current = (FChunk *)aVar6;
    aVar5 = aVar6;
  }
  uVar4 = *(uint *)((longlong)aVar5 + 8);
  *(uint *)((longlong)aVar5 + 8) = uVar4 + 1;
  uVar1 = *(undefined8 *)&param_1->FrameNumber;
  lVar2 = param_1->StatsFrame;
  pFVar3 = param_1->Breadcrumb;
  ((undefined8 *)((longlong)aVar5 + 0x40))[(ulonglong)uVar4 * 5] = param_1->CPUTimestamp;
  ((undefined8 *)((longlong)aVar5 + 0x48))[(ulonglong)uVar4 * 5] = uVar1;
  ((undefined8 *)((longlong)aVar5 + 0x50))[(ulonglong)uVar4 * 5] = lVar2;
  ((undefined8 *)((longlong)aVar5 + 0x58))[(ulonglong)uVar4 * 5] = pFVar3;
  *(undefined1 *)((undefined8 *)((longlong)aVar5 + 0x60) + (ulonglong)uVar4 * 5) = 0;
  if (((undefined8 *)((longlong)aVar5 + 0x58))[(ulonglong)uVar4 * 5] != 0) {
    FRHIBreadcrumbAllocatorArray::AddUnique
              (&(this->Current->Header).BreadcrumbAllocators,
               *(FRHIBreadcrumbAllocator **)
                (((undefined8 *)((longlong)aVar5 + 0x58))[(ulonglong)uVar4 * 5] + 0x28));
  }
  return (FFrameBoundary *)((undefined8 *)((longlong)aVar5 + 0x40) + (ulonglong)uVar4 * 5);
}

// Emplace<UE::RHI::GPUProfiler::FEvent::FSignalFence,unsigned___int64,unsigned___int64_&> @ 145a3a1c0

FSignalFence * __thiscall
UE::RHI::GPUProfiler::FEventStream::
Emplace<UE::RHI::GPUProfiler::FEvent::FSignalFence,unsigned___int64,unsigned___int64_&>
          (FEventStream *this,ulong64 *param_1,ulong64 *param_2)

{
  FSignalFence *pFVar1;
  ulong64 uVar2;
  uint uVar3;
  atomic<void_*> _Dst;
  atomic<void_*> aVar4;
  atomic<void_*> aVar5;
  
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
  uVar2 = *param_2;
  pFVar1 = (FSignalFence *)((undefined8 *)((longlong)aVar4 + 0x40) + (ulonglong)uVar3 * 5);
  pFVar1->CPUTimestamp = *param_1;
  pFVar1->Value = uVar2;
  *(undefined1 *)&pFVar1[2].CPUTimestamp = 7;
  return pFVar1;
}

// Append @ 145a51cc0

void __thiscall UE::RHI::GPUProfiler::FEventStream::Append(FEventStream *this,FEventStream *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Queue).field0_0x0.Value != (param_1->Queue).field0_0x0.Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Queue == Other.Queue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUProfiler.h"
                       ,0x1c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->First == (FChunk *)0x0) {
    this->Current = param_1->Current;
    this->First = param_1->First;
  }
  else if (param_1->First != (FChunk *)0x0) {
    (this->Current->Header).Next = param_1->First;
    this->Current = param_1->Current;
  }
  param_1->Current = (FChunk *)0x0;
  param_1->First = (FChunk *)0x0;
  return;
}

