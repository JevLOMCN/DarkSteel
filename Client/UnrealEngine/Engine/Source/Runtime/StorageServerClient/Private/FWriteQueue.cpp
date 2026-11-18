// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// Write @ 148ce3a10

bool __thiscall
StorageServer::FCacheStorageBlocking::FWriteQueue::Write
          (FWriteQueue *this,ulong64 param_1,void *param_2,ulong64 param_3)

{
  TArray<unsigned_char,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<unsigned_char> FVar13;
  ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> FVar14;
  uint uVar15;
  uint uVar16;
  ForElementType<unsigned_char> FVar17;
  
  pTVar1 = &this->Data;
  piVar2 = &(this->Data).ArrayNum;
  if (0x1000000 < (longlong)*piVar2 + param_3) {
    return false;
  }
  if ((param_3 != 0) &&
     (__GTraceCounterBackBuffer.Value = __GTraceCounterBackBuffer.Value + param_3,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterBackBuffer.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBackBuffer.CounterName,TraceCounterType_Int,
                         __GTraceCounterBackBuffer.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBackBuffer.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBackBuffer.CounterId._2_2_ = 0;
        __GTraceCounterBackBuffer.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBackBuffer.CounterId._0_2_,__GTraceCounterBackBuffer.Value);
  }
  iVar4 = (this->Data).ArrayNum;
  FVar17 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar17 == (ForElementType<unsigned_char>)0x0) {
    FVar17 = (ForElementType<unsigned_char>)pTVar1;
  }
  iVar11 = (int)param_3;
  uVar15 = iVar4 + iVar11;
  if (iVar4 < (int)uVar15) {
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                       (1,1,iVar11,&pTVar1->AllocatorInstance,piVar2,&(this->Data).ArrayMax);
    FVar13 = (this->Data).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<unsigned_char>)0x0) {
      FVar13 = (ForElementType<unsigned_char>)pTVar1;
    }
    memset((void *)((longlong)FVar13 + (longlong)iVar10),0,(longlong)iVar11);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar4) {
      uVar16 = iVar4 - uVar15;
      if (((int)(uVar16 | uVar15) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (uVar16 != 0) {
        FVar13 = (this->Data).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_char>)0x0) {
          FVar13 = (ForElementType<unsigned_char>)pTVar1;
        }
        iVar11 = (*piVar2 - uVar16) - uVar15;
        if (iVar11 != 0) {
          memmove((void *)((longlong)FVar13 + (longlong)(int)uVar15),
                  (void *)((longlong)(int)uVar16 + (longlong)FVar13 + (longlong)(int)uVar15),
                  (longlong)iVar11);
        }
        *piVar2 = *piVar2 - uVar16;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,&pTVar1->AllocatorInstance,*piVar2,&(this->Data).ArrayMax);
      }
    }
  }
  memcpy((void *)((longlong)FVar17 + (longlong)iVar4),param_2,param_3);
  iVar11 = (this->Operations).ArrayNum;
  if (0 < iVar11) {
    uVar15 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar15 = ~(iVar11 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar11 = (this->Operations).ArrayNum;
    FVar5 = (this->Operations).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)this;
    if (FVar5 != (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
      FVar14 = FVar5;
    }
    plVar3 = (longlong *)((longlong)FVar14 + ((longlong)iVar11 + -1) * 0x18);
    if ((plVar3 != (longlong *)0x0) && (*plVar3 + plVar3[1] == param_1)) {
      plVar3[1] = plVar3[1] + param_3;
      return true;
    }
  }
  if (iVar11 == (this->Operations).ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>_>
                       (0x818,(ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *)this
                        ,&(this->Operations).ArrayMax);
  }
  lVar12 = (longlong)iVar11;
  (this->Operations).ArrayNum = iVar11 + 1;
  FVar5 = (this->Operations).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
    this = (FWriteQueue *)FVar5;
  }
  *(ulong64 *)((longlong)this + lVar12 * 0x18) = param_1;
  *(ulong64 *)((uchar *)((longlong)this + 8) + lVar12 * 0x18) = param_3;
  *(void **)((uchar *)((longlong)this + 0x10) + lVar12 * 0x18) =
       (void *)((longlong)FVar17 + (longlong)iVar4);
  return true;
}

