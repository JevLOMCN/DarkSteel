// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FIoChunkBlockMemoryPool @ 14147dd10

FIoChunkBlockMemoryPool * __thiscall
UE::FIoChunkBlockMemoryPool::FIoChunkBlockMemoryPool(FIoChunkBlockMemoryPool *this)

{
  (this->MemoryBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MemoryBlocks).ArrayNum = 0;
  (this->MemoryBlocks).ArrayMax = 0;
  this->FreeBlock = (FMemoryBlock *)0x0;
  return this;
}

// Alloc @ 1414864e0

void * __thiscall
UE::FIoChunkBlockMemoryPool::Alloc
          (FIoChunkBlockMemoryPool *this,uint param_1,FIoBufferHandle *param_2)

{
  void **ppvVar1;
  int iVar2;
  FMemoryBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  pFVar3 = this->FreeBlock;
  if (pFVar3 == (FMemoryBlock *)0x0) {
    param_2->Handle = -1;
    return (void *)0x0;
  }
  this->FreeBlock = pFVar3->Next;
  ppvVar1 = &pFVar3->Memory;
  pFVar3->Next = (FMemoryBlock *)0x0;
  if (pFVar3->Size < param_1) {
    pvVar6 = FMemory::Realloc(*ppvVar1,(ulonglong)param_1,0);
    *ppvVar1 = pvVar6;
    pFVar3->Size = param_1;
  }
  iVar2 = pFVar3->Index;
  if (iVar2 == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.h"
                       ,0x26,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  param_2->Handle = iVar2;
  return *ppvVar1;
}

// Free @ 1414966f0

void __thiscall
UE::FIoChunkBlockMemoryPool::Free(FIoChunkBlockMemoryPool *this,FIoBufferHandle *param_1)

{
  FMemoryBlock *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_1->Handle != -1) {
    if ((this->MemoryBlocks).ArrayNum <= param_1->Handle) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.Value() < MemoryBlocks.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x1b7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar2 = param_1->Handle;
    uVar5 = 0;
    if ((int)uVar2 < (this->MemoryBlocks).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (FMemoryBlock *)
             ((this->MemoryBlocks).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x18);
    pFVar1->Next = this->FreeBlock;
    this->FreeBlock = pFVar1;
    param_1->Handle = -1;
  }
  return;
}

// Initialize @ 14149bd40

void __thiscall
UE::FIoChunkBlockMemoryPool::Initialize(FIoChunkBlockMemoryPool *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FMemoryBlock *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  
  piVar1 = &(this->MemoryBlocks).ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < (int)param_1) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_1 - iVar6,(ForAnyElementType *)this,piVar1,
                       &(this->MemoryBlocks).ArrayMax);
    DefaultConstructItems<UE::FIoChunkBlockMemoryPool::FMemoryBlock,int>
              ((this->MemoryBlocks).AllocatorInstance.Data + (longlong)iVar5 * 0x18,param_1 - iVar6)
    ;
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar6) {
      uVar9 = iVar6 - param_1;
      if (((int)(uVar9 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (this->MemoryBlocks).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18;
        iVar6 = (*piVar1 - uVar9) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0x18,(longlong)iVar6 * 0x18);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)this,*piVar1,&(this->MemoryBlocks).ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (param_1 != 0) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (FMemoryBlock *)
               ((this->MemoryBlocks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18);
      pFVar2->Next = this->FreeBlock;
      pvVar8 = FMemory::Malloc((ulonglong)param_2,0);
      pFVar2->Index = uVar9;
      uVar9 = uVar9 + 1;
      pFVar2->Memory = pvVar8;
      pFVar2->Size = param_2;
      this->FreeBlock = pFVar2;
    } while (uVar9 < param_1);
  }
  return;
}

// Realloc @ 1414acca0

void * __thiscall
UE::FIoChunkBlockMemoryPool::Realloc
          (FIoChunkBlockMemoryPool *this,FIoBufferHandle param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1.Handle;
  if ((this->MemoryBlocks).ArrayNum <= param_1.Handle) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.Value() < MemoryBlocks.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                       ,0x1a4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  uVar4 = 0;
  if (param_1.Handle < (this->MemoryBlocks).ArrayNum) {
    uVar4 = (uint)~param_1.Handle >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  pFVar1 = (this->MemoryBlocks).AllocatorInstance.Data;
  if (*(uint *)(pFVar1 + lVar6 * 0x18 + 0x10) < param_2) {
    pvVar5 = FMemory::Realloc(*(void **)(pFVar1 + lVar6 * 0x18 + 8),(ulonglong)param_2,0);
    *(void **)(pFVar1 + lVar6 * 0x18 + 8) = pvVar5;
    *(uint *)(pFVar1 + lVar6 * 0x18 + 0x10) = param_2;
    return pvVar5;
  }
  return *(void **)(pFVar1 + lVar6 * 0x18 + 8);
}

