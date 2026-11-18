// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FRHITransientHeap @ 145a92cb0

FRHITransientHeap * __thiscall
FRHITransientHeap::FRHITransientHeap(FRHITransientHeap *this,FInitializer *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  ERHITransientHeapFlags EVar5;
  undefined3 uVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FRHITransientHeap *pFVar10;
  
  this->_padding_ = (longlong)&___7FRHITransientHeap__6B_;
  uVar2 = param_1->Alignment;
  EVar5 = param_1->Flags;
  uVar6 = *(undefined3 *)&param_1->field_0xd;
  (this->Initializer).Size = param_1->Size;
  (this->Initializer).Alignment = uVar2;
  (this->Initializer).Flags = EVar5;
  *(undefined3 *)&(this->Initializer).field_0xd = uVar6;
  uVar2 = param_1->BufferCacheSize;
  (this->Initializer).TextureCacheSize = param_1->TextureCacheSize;
  (this->Initializer).BufferCacheSize = uVar2;
  FRHITransientHeapAllocator::FRHITransientHeapAllocator
            (&this->Allocator,param_1->Size,param_1->Alignment);
  this->LastUsedGarbageCollectCycle = 0;
  this->CommitSize = 0;
  this->CommitSizeMax = 0;
  uVar9 = 1;
  if (param_1->Alignment != 0) {
    uVar9 = (ulonglong)param_1->Alignment;
  }
  uVar9 = uVar9 - 1;
  lVar3 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar8 = (int)lVar3;
  if (uVar9 == 0) {
    iVar8 = -1;
  }
  this->AlignmentLog2 = iVar8 + 1;
  piVar1 = &(this->Textures).Cache.ArrayMax;
  (this->AliasingOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AliasingOverlaps).ArrayNum = 0;
  (this->AliasingOverlaps).ArrayMax = 0;
  (this->Stats).Textures.AllocatedSize = 0;
  (this->Stats).Textures.AllocationCount = 0;
  (this->Stats).Textures.DeallocationCount = 0;
  (this->Stats).Textures.CreateCount = 0;
  (this->Stats).Buffers.AllocatedSize = 0;
  (this->Stats).Buffers.AllocationCount = 0;
  (this->Stats).Buffers.DeallocationCount = 0;
  (this->Stats).Buffers.CreateCount = 0;
  (this->Stats).AliasedSizeCurrent = 0;
  (this->Stats).AliasedSize = 0;
  uVar2 = param_1->TextureCacheSize;
  (this->Textures).Cache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).Cache.ArrayNum = 0;
  *piVar1 = 0;
  (this->Textures).Allocated.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).Allocated.ArrayNum = 0;
  (this->Textures).Allocated.ArrayMax = 0;
  (this->Textures).GarbageCollectLatency = 0x20;
  (this->Textures).Capacity = uVar2;
  (this->Textures).HitCount = 0;
  (this->Textures).MissCount = 0;
  if (uVar2 != 0xffffffff) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,(ForAnyElementType *)&this->Textures,0,piVar1);
    }
  }
  uVar2 = param_1->BufferCacheSize;
  (this->Buffers).Cache.ArrayMax = 0;
  (this->Buffers).Cache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Cache.ArrayNum = 0;
  (this->Buffers).Allocated.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Allocated.ArrayNum = 0;
  (this->Buffers).Allocated.ArrayMax = 0;
  (this->Buffers).Capacity = uVar2;
  (this->Buffers).GarbageCollectLatency = 0x20;
  (this->Buffers).HitCount = 0;
  (this->Buffers).MissCount = 0;
  if (uVar2 != 0xffffffff) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,(ForAnyElementType *)&this->Buffers,0,&(this->Buffers).Cache.ArrayMax)
      ;
    }
  }
  if (1L << ((byte)this->AlignmentLog2 & 0x3f) != (ulonglong)param_1->Alignment) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("1ull << AlignmentLog2 == InInitializer.Alignment",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                       ,0x203,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRHITransientHeap *)(*pcVar4)();
      return pFVar10;
    }
  }
  return this;
}

// ~FRHITransientHeap @ 145a95930

void __thiscall FRHITransientHeap::~FRHITransientHeap(FRHITransientHeap *this)

{
  FScriptContainerElement *pFVar1;
  
  TRHITransientResourceCache<FRHITransientBuffer>::~TRHITransientResourceCache<FRHITransientBuffer>
            (&this->Buffers);
  TRHITransientResourceCache<FRHITransientTexture>::
  ~TRHITransientResourceCache<FRHITransientTexture>(&this->Textures);
  pFVar1 = (this->AliasingOverlaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Allocator).Ranges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Allocator).RangeFreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

