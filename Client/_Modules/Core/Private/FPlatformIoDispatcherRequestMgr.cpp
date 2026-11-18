// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FPlatformIoDispatcherRequestMgr @ 14147e530

FPlatformIoDispatcherRequestMgr * __thiscall
UE::FPlatformIoDispatcherRequestMgr::FPlatformIoDispatcherRequestMgr
          (FPlatformIoDispatcherRequestMgr *this)

{
  FSlab *pFVar1;
  FSlab *pFVar2;
  FSlab *pFVar3;
  longlong lVar4;
  FSlab *pFVar5;
  longlong lVar6;
  
  pFVar5 = (FSlab *)0x0;
  (this->ReadRequestAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x34010);
  lVar6 = 0x400;
  pFVar3 = pFVar5;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x3400c);
    lVar4 = 0x400;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)&pFVar2->Elements[0].Slab;
      *(FSlab **)pFVar2 = (FSlab *)0x0;
      lVar4 = lVar4 + -1;
      pFVar3 = pFVar1;
    } while (lVar4 != 0);
  }
  (this->ReadRequestAllocator).CurrentSlab = pFVar3;
  (this->FileBlockAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x32008);
  pFVar3 = pFVar5;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x32004);
    lVar4 = 0x400;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)(pFVar2->Elements[0].Data.Pad + 0xb8);
      *(uchar *)((longlong)pFVar2 + 0) = '\0';
      *(uchar *)((longlong)pFVar2 + 1) = '\0';
      *(uchar *)((longlong)pFVar2 + 2) = '\0';
      *(uchar *)((longlong)pFVar2 + 3) = '\0';
      *(uchar *)((longlong)pFVar2 + 4) = '\0';
      *(uchar *)((longlong)pFVar2 + 5) = '\0';
      *(uchar *)((longlong)pFVar2 + 6) = '\0';
      *(uchar *)((longlong)pFVar2 + 7) = '\0';
      lVar4 = lVar4 + -1;
      pFVar3 = pFVar1;
    } while (lVar4 != 0);
  }
  (this->FileBlockAllocator).CurrentSlab = (FSlab *)pFVar3;
  *(undefined8 *)&this->FileBlockLookup = 0;
  *(undefined8 *)&(this->FileBlockLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileBlockLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FileBlockLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileBlockLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileBlockLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileBlockLookup).field_0x34 = 0;
  *(undefined8 *)&(this->FileBlockLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileBlockLookup).field_0x48 = 0;
  (this->FileBlockLinkAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x1408);
  pFVar3 = pFVar5;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x1404);
    lVar4 = 0x80;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)(pFVar2->Elements[0].Data.Pad + 0x18);
      *(uchar *)((longlong)pFVar2 + 0) = '\0';
      *(uchar *)((longlong)pFVar2 + 1) = '\0';
      *(uchar *)((longlong)pFVar2 + 2) = '\0';
      *(uchar *)((longlong)pFVar2 + 3) = '\0';
      *(uchar *)((longlong)pFVar2 + 4) = '\0';
      *(uchar *)((longlong)pFVar2 + 5) = '\0';
      *(uchar *)((longlong)pFVar2 + 6) = '\0';
      *(uchar *)((longlong)pFVar2 + 7) = '\0';
      lVar4 = lVar4 + -1;
      pFVar3 = pFVar1;
    } while (lVar4 != 0);
  }
  (this->FileBlockLinkAllocator).CurrentSlab = (FSlab *)pFVar3;
  (this->EncodedBlockAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar3 = ::operator_new(0x2c008);
  if (pFVar3 != (FSlab *)0x0) {
    memset(&pFVar3->field_0x4,0,0x2c004);
    pFVar3->Allocated = 0;
    pFVar3->Freed = 0;
    pFVar1 = pFVar3;
    do {
      pFVar1 = (FSlab *)(pFVar1->Elements[0].Data.Pad + 0xa0);
      *(uchar *)((longlong)pFVar1 + 0) = '\0';
      *(uchar *)((longlong)pFVar1 + 1) = '\0';
      *(uchar *)((longlong)pFVar1 + 2) = '\0';
      *(uchar *)((longlong)pFVar1 + 3) = '\0';
      *(uchar *)((longlong)pFVar1 + 4) = '\0';
      *(uchar *)((longlong)pFVar1 + 5) = '\0';
      *(uchar *)((longlong)pFVar1 + 6) = '\0';
      *(uchar *)((longlong)pFVar1 + 7) = '\0';
      lVar6 = lVar6 + -1;
      pFVar5 = pFVar3;
    } while (lVar6 != 0);
  }
  (this->EncodedBlockAllocator).CurrentSlab = (FSlab *)pFVar5;
  *(undefined8 *)&this->EncodedBlockLookup = 0;
  *(undefined8 *)&(this->EncodedBlockLookup).field_0x8 = 0;
  *(undefined8 *)&(this->EncodedBlockLookup).field_0x20 = 0;
  *(undefined4 *)&(this->EncodedBlockLookup).field_0x28 = 0;
  *(undefined4 *)&(this->EncodedBlockLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->EncodedBlockLookup).field_0x34 = 0;
  *(undefined4 *)&(this->EncodedBlockLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EncodedBlockLookup).field_0x40 = 0;
  *(undefined4 *)&(this->EncodedBlockLookup).field_0x48 = 0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  return this;
}

// ~FPlatformIoDispatcherRequestMgr @ 141481580

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::~FPlatformIoDispatcherRequestMgr
          (FPlatformIoDispatcherRequestMgr *this)

{
  void *pvVar1;
  FSlab *pFVar2;
  FSlab *pFVar3;
  FSlab *pFVar4;
  FSlab *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  *(undefined4 *)&(this->EncodedBlockLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EncodedBlockLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EncodedBlockLookup);
  pFVar2 = (this->EncodedBlockAllocator).CurrentSlab;
  if (pFVar2->Allocated != pFVar2->Freed) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ::operator_delete((this->EncodedBlockAllocator).CurrentSlab,0x2c008);
  pFVar3 = (this->FileBlockLinkAllocator).CurrentSlab;
  if (pFVar3->Allocated != pFVar3->Freed) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ::operator_delete((this->FileBlockLinkAllocator).CurrentSlab,0x1408);
  *(undefined4 *)&(this->FileBlockLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileBlockLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileBlockLookup);
  pFVar4 = (this->FileBlockAllocator).CurrentSlab;
  if (pFVar4->Allocated != pFVar4->Freed) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ::operator_delete((this->FileBlockAllocator).CurrentSlab,0x32008);
  pFVar5 = (this->ReadRequestAllocator).CurrentSlab;
  if (pFVar5->Allocated != pFVar5->Freed) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ::operator_delete((this->ReadRequestAllocator).CurrentSlab,0x34010);
  return;
}

// AddFileBlockRequest @ 1414853a0

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::AddFileBlockRequest
          (FPlatformIoDispatcherRequestMgr *this,FIoPlatformReadRequest *param_1,
          FIoFileBlockRequest *param_2)

{
  AddToLink(this,&(param_1->field49_0x60).ScatterGather.FileBlockLink,
            (FIoBlockKey)(param_2->BlockKey).field0_0x0._s_0);
  return;
}

// AddFileBlockRequest @ 1414853c0

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::AddFileBlockRequest
          (FPlatformIoDispatcherRequestMgr *this,FIoPlatformReadRequest *param_1,FIoBlockKey param_2
          )

{
  AddToLink(this,&(param_1->field49_0x60).ScatterGather.FileBlockLink,param_2);
  return;
}

// AddToLink @ 141485a70

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::AddToLink
          (FPlatformIoDispatcherRequestMgr *this,FIoFileBlockLink *param_1,FIoBlockKey param_2)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSlab *pFVar7;
  longlong lVar8;
  FSlab *pFVar9;
  FIoFileBlockLink *pFVar10;
  int iStackX_1c;
  FSlab *pFVar6;
  
  if ((param_2.field0_0x0 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileBlockKey.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x331,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (FIoFileBlockLink *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Link != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x332,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStackX_1c = param_2.field0_0x0._4_4_;
  while( true ) {
    pFVar10 = param_1;
    uVar2 = pFVar10->FileBlockCount;
    pFVar6 = (FSlab *)0x0;
    if (uVar2 != 0) {
      do {
        if (*(int *)(((TTypeCompatibleBytes<UE::FIoFileBlockLink> *)pFVar10->FileBlockIds)->Pad +
                    (longlong)pFVar6 * 4) == iStackX_1c) {
          return;
        }
        uVar5 = (int)pFVar6 + 1;
        pFVar6 = (FSlab *)(ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1 = pFVar10->NextLink;
    if (uVar2 < 5) break;
    if (param_1 == (FIoFileBlockLink *)0x0) {
      pFVar6 = (this->FileBlockLinkAllocator).CurrentSlab;
      uVar1 = pFVar6->Allocated;
      pFVar6->Allocated = uVar1 + 1;
      if ((0x7f < uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex < SlabSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                             ,0x36,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->FileBlockLinkAllocator).CurrentSlab;
      pFVar6->Elements[uVar1].Slab = pFVar6;
      param_1 = (FIoFileBlockLink *)(pFVar6->Elements + uVar1);
      if (((this->FileBlockLinkAllocator).CurrentSlab)->Allocated == 0x80) {
        pFVar7 = ::operator_new(0x1408);
        pFVar6 = (FSlab *)0x0;
        if (pFVar7 != (FSlab *)0x0) {
          memset(&pFVar7->field_0x4,0,0x1404);
          lVar8 = 0x80;
          pFVar7->Allocated = 0;
          pFVar7->Freed = 0;
          pFVar9 = pFVar7;
          do {
            pFVar9 = (FSlab *)&pFVar9->Elements[0].Slab;
            *(FSlab **)pFVar9 = (FSlab *)0x0;
            lVar8 = lVar8 + -1;
            pFVar6 = pFVar7;
          } while (lVar8 != 0);
        }
        (this->FileBlockLinkAllocator).CurrentSlab = pFVar6;
      }
      *(uchar *)(param_1->FileBlockIds + 0) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 0) + 1) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 0) + 2) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 0) + 3) = '\0';
      *(uchar *)(param_1->FileBlockIds + 1) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 1) + 1) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 1) + 2) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 1) + 3) = '\0';
      *(uchar *)(param_1->FileBlockIds + 2) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 2) + 1) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 2) + 2) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 2) + 3) = '\0';
      *(uchar *)(param_1->FileBlockIds + 3) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 3) + 1) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 3) + 2) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 3) + 3) = '\0';
      *(uchar *)(param_1->FileBlockIds + 4) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 4) + 1) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 4) + 2) = '\0';
      *(uchar *)((longlong)(param_1->FileBlockIds + 4) + 3) = '\0';
      *(uchar *)&param_1->FileBlockCount = '\0';
      *(uchar *)((longlong)&param_1->FileBlockCount + 1) = '\0';
      *(uchar *)((longlong)&param_1->FileBlockCount + 2) = '\0';
      *(uchar *)((longlong)&param_1->FileBlockCount + 3) = '\0';
      param_1->NextLink = (FIoFileBlockLink *)0x0;
      pFVar10->NextLink = param_1;
    }
  }
  if ((param_1 != (FIoFileBlockLink *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Link->NextLink == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x340,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(((TTypeCompatibleBytes<UE::FIoFileBlockLink> *)pFVar10->FileBlockIds)->Pad +
          (ulonglong)pFVar10->FileBlockCount * 4) = iStackX_1c;
  pFVar10->FileBlockCount = pFVar10->FileBlockCount + 1;
  return;
}

// CreateDirectReadRequest @ 14148f0c0

FIoPlatformReadRequest * __thiscall
UE::FPlatformIoDispatcherRequestMgr::CreateDirectReadRequest
          (FPlatformIoDispatcherRequestMgr *this,
          TUniqueFunction<void___cdecl(UE::FIoFileReadResult_&&)> *param_1,FIoBuffer *param_2,
          ulong64 param_3,ulong64 param_4,void *param_5)

{
  undefined8 uVar1;
  FIoPlatformReadRequest *pFVar2;
  
  pFVar2 = TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024>::Alloc
                     (&this->ReadRequestAllocator);
  *(undefined8 *)&pFVar2->OnCompleted = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x18 = uVar1;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&pFVar2->OnCompleted != 0) {
    *(undefined8 *)param_1 = 0;
  }
  pFVar2->Dst = param_2;
  pFVar2->Next = (FIoPlatformReadRequest *)0x0;
  pFVar2->DstSize = param_3;
  pFVar2->UserData = param_5;
  (pFVar2->field49_0x60).DirectRead.FileOffset = param_4;
  pFVar2->RefCount = 1;
  pFVar2->FailedBlockId = 0xffffffff;
  pFVar2->ErrorCode = (atomic<EIoErrorCode>)0x0;
  pFVar2->Type = DirectRead;
  return pFVar2;
}

// CreateFileBlockRequest @ 14148f180

FIoFileBlockRequest * __thiscall
UE::FPlatformIoDispatcherRequestMgr::CreateFileBlockRequest(FPlatformIoDispatcherRequestMgr *this)

{
  FIoFileBlockRequest *pFVar1;
  
  pFVar1 = TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024>::Construct<>
                     (&this->FileBlockAllocator);
  return pFVar1;
}

// CreateScatterGatherRequest @ 14148f310

FIoPlatformReadRequest * __thiscall
UE::FPlatformIoDispatcherRequestMgr::CreateScatterGatherRequest
          (FPlatformIoDispatcherRequestMgr *this,
          TUniqueFunction<void___cdecl(UE::FIoFileReadResult_&&)> *param_1,FIoBuffer *param_2,
          ulong64 param_3,void *param_4,uint param_5)

{
  undefined8 uVar1;
  FIoPlatformReadRequest *pFVar2;
  
  pFVar2 = TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024>::Alloc
                     (&this->ReadRequestAllocator);
  *(undefined8 *)&pFVar2->OnCompleted = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x18 = uVar1;
  *(undefined8 *)&(pFVar2->OnCompleted).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&pFVar2->OnCompleted != 0) {
    *(undefined8 *)param_1 = 0;
  }
  *(undefined4 *)((longlong)&pFVar2->field49_0x60 + 0x24) = 0;
  (pFVar2->field49_0x60).DirectRead.FileOffset = 0;
  *(undefined8 *)((longlong)&pFVar2->field49_0x60 + 8) = 0;
  *(undefined8 *)((longlong)&pFVar2->field49_0x60 + 0x10) = 0;
  *(undefined8 *)((longlong)&pFVar2->field49_0x60 + 0x18) = 0;
  pFVar2->UserData = param_4;
  pFVar2->Dst = param_2;
  pFVar2->Type = ScatterGather;
  (pFVar2->field49_0x60).ScatterGather.FileId = param_5;
  pFVar2->Next = (FIoPlatformReadRequest *)0x0;
  pFVar2->DstSize = param_3;
  pFVar2->RefCount = 1;
  pFVar2->FailedBlockId = 0xffffffff;
  pFVar2->ErrorCode = (atomic<EIoErrorCode>)0x0;
  return pFVar2;
}

// Destroy @ 141491d90

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::Destroy
          (FPlatformIoDispatcherRequestMgr *this,FIoEncodedBlockRequest *param_1)

{
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((1 < param_1->FileBlockCount) && (param_1->EncodedData != (void *)0x0)) {
    FMemory::Free(param_1->EncodedData);
  }
  FVar1 = (param_1->ScatterTargets).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  psVar2 = *(short **)param_1[1].ScatterTargets.AllocatorInstance.InlineData;
  psVar2[1] = psVar2[1] + 1;
  if (psVar2[1] == 0x400) {
    if (*psVar2 != 0x400) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slab->Freed == Slab->Allocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x48,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ::operator_delete(psVar2,0x2c008);
    return;
  }
  return;
}

// Destroy @ 141491e20

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::Destroy
          (FPlatformIoDispatcherRequestMgr *this,FIoFileBlockRequest *param_1)

{
  TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  FIoBlockKey_u_0_s_0 FVar3;
  ForElementType<UE::FIoEncodedBlockRequest_*> FVar4;
  short *psVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  if (param_1->ErrorCode != Cancelled) {
    this_00 = &this->FileBlockLookup;
    if (*(int *)&(this->FileBlockLookup).field_0x8 != *(int *)&(this->FileBlockLookup).field_0x34) {
      FVar3 = (param_1->BlockKey).field0_0x0._s_0;
      TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::FIoBlockKey>
                ((TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                  *)this_00,FVar3.BlockId * 0x17 + FVar3.FileId,&param_1->BlockKey);
    }
    if (*(int *)&(this->FileBlockLookup).field_0x8 == *(int *)&(this->FileBlockLookup).field_0x34) {
      for (lVar6 = 0x3f; 0x8fUL >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
      iVar9 = 1 << ((byte)lVar6 & 0x1f);
      iVar2 = *(int *)&(this->FileBlockLookup).field_0x48;
      if ((iVar2 < iVar9) || (iVar9 < iVar2)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
        TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->FileBlockLookup).field_0xc;
      *(undefined4 *)&(this->FileBlockLookup).field_0x8 = 0;
      if (*(int *)puVar1 != 0x80) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0x80,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->FileBlockLookup).field_0x34 = 0;
      *(undefined4 *)&(this->FileBlockLookup).field_0x30 = 0xffffffff;
      iVar2 = *(int *)&(this->FileBlockLookup).field_0x2c;
      *(undefined4 *)&(this->FileBlockLookup).field_0x28 = 0;
      if ((iVar2 < 0x80) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->FileBlockLookup).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FileBlockLookup).field_0x10,0);
      }
      if (bVar8) {
        *(int *)&(this->FileBlockLookup).field_0x48 = iVar9;
        TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  FVar4 = (param_1->EncodedBlockRequests).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  psVar5 = *(short **)param_1[1].EncodedBlockRequests.AllocatorInstance.InlineData;
  psVar5[1] = psVar5[1] + 1;
  if (psVar5[1] != 0x400) {
    return;
  }
  if ((*psVar5 != 0x400) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slab->Freed == Slab->Allocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x48,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::operator_delete(psVar5,0x32008);
  return;
}

// Destroy @ 141491fa0

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::Destroy
          (FPlatformIoDispatcherRequestMgr *this,FIoPlatformReadRequest *param_1)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  
  if ((param_1->RefCount == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReadRequest.RefCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x2ad,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = &param_1->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    if (param_1->Type == ScatterGather) {
      lVar2 = *(longlong *)((longlong)&param_1->field49_0x60 + 0x18);
      while (lVar2 != 0) {
        psVar3 = *(short **)(lVar2 + 0x20);
        lVar2 = *(longlong *)(lVar2 + 0x18);
        psVar3[1] = psVar3[1] + 1;
        if (psVar3[1] == 0x80) {
          if ((*psVar3 != 0x80) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Slab->Freed == Slab->Allocated",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                 ,0x48,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ::operator_delete(psVar3,0x1408);
        }
      }
    }
    if (*(longlong *)&param_1->OnCompleted != 0) {
      plVar4 = *(longlong **)&(param_1->OnCompleted).field_0x28;
      plVar7 = (longlong *)&(param_1->OnCompleted).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar7 = plVar4;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    psVar3 = *(short **)(param_1 + 1);
    psVar3[1] = psVar3[1] + 1;
    if (psVar3[1] == 0x400) {
      if ((*psVar3 != 0x400) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Slab->Freed == Slab->Allocated",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                             ,0x48,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::operator_delete(psVar3,0x34010);
    }
  }
  return;
}

// Destroy @ 1414920f0

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::Destroy
          (FPlatformIoDispatcherRequestMgr *this,FIoFileBlockLink *param_1)

{
  short *psVar1;
  code *pcVar2;
  bool bVar3;
  
  while( true ) {
    do {
      if (param_1 == (FIoFileBlockLink *)0x0) {
        return;
      }
      psVar1 = *(short **)param_1[1].FileBlockIds;
      param_1 = param_1->NextLink;
      psVar1[1] = psVar1[1] + 1;
    } while (psVar1[1] != 0x80);
    if ((*psVar1 != 0x80) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Slab->Freed == Slab->Allocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                           ,0x48,L""), bVar3)) break;
    ::operator_delete(psVar1,0x1408);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetFileBlockRequest @ 141499160

FIoFileBlockRequest * __thiscall
UE::FPlatformIoDispatcherRequestMgr::GetFileBlockRequest
          (FPlatformIoDispatcherRequestMgr *this,FIoBlockKey param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->FileBlockLookup).field_0x8 != *(int *)&(this->FileBlockLookup).field_0x34) {
    puVar3 = *(undefined1 **)&(this->FileBlockLookup).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->FileBlockLookup).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->FileBlockLookup).field_0x48 - 1U &
                              param_1.field0_0x0._4_4_ * 0x17 + param_1.field0_0x0._0_4_) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->FileBlockLookup + (longlong)iVar2 * 0x18;
        if ((FIoBlockKey_u_0)
            ((FIoBlockKey_u_0 *)(*(longlong *)&this->FileBlockLookup + (longlong)iVar2 * 0x18))->
            Hash == param_1.field0_0x0) {
          if (lVar1 == 0) {
            return (FIoFileBlockRequest *)0x0;
          }
          return *(FIoFileBlockRequest **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FIoFileBlockRequest *)0x0;
}

// GetFileBlockRequests @ 1414991d0

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::GetFileBlockRequests
          (FPlatformIoDispatcherRequestMgr *this,FIoPlatformReadRequest *param_1,
          TArray<UE::FIoFileBlockRequest_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ForElementType<UE::FIoFileBlockRequest_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::FIoFileBlockRequest_*> FVar7;
  undefined1 *puVar8;
  FIoPlatformReadRequest_u_96 *pFVar9;
  uint uVar10;
  int iVar12;
  longlong local_28 [2];
  ulonglong uVar11;
  
  pFVar9 = &param_1->field49_0x60;
  if (pFVar9 != (FIoPlatformReadRequest_u_96 *)0x0) {
    do {
      if (((pFVar9->ScatterGather).FileBlockLink.FileBlockCount == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Link->FileBlockCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                             ,0x2da,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = 0;
      if ((pFVar9->ScatterGather).FileBlockLink.FileBlockCount != 0) {
        do {
          uVar10 = (param_1->field49_0x60).ScatterGather.FileId;
          iVar6 = *(int *)((longlong)pFVar9 + uVar11 * 4);
          if (*(int *)&(this->FileBlockLookup).field_0x8 !=
              *(int *)&(this->FileBlockLookup).field_0x34) {
            puVar2 = *(undefined1 **)&(this->FileBlockLookup).field_0x40;
            puVar8 = &(this->FileBlockLookup).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar8 = puVar2;
            }
            iVar12 = *(int *)(puVar8 + (ulonglong)
                                       (uVar10 + iVar6 * 0x17 &
                                       *(int *)&(this->FileBlockLookup).field_0x48 - 1U) * 4);
            if (iVar12 != -1) {
              do {
                lVar1 = *(longlong *)&this->FileBlockLookup + (longlong)iVar12 * 0x18;
                if (*(longlong *)(*(longlong *)&this->FileBlockLookup + (longlong)iVar12 * 0x18) ==
                    CONCAT44(iVar6,uVar10)) {
                  if (lVar1 != 0) {
                    local_28[0] = *(longlong *)(lVar1 + 8);
                    if (local_28[0] != 0) {
                      FVar3 = (param_2->AllocatorInstance).SecondaryData;
                      FVar7 = (ForElementType<UE::FIoFileBlockRequest_*>)param_2;
                      if (FVar3 != (ForElementType<UE::FIoFileBlockRequest_*>)0x0) {
                        FVar7 = FVar3;
                      }
                      if ((ulonglong)FVar7 <= local_28) {
                        FVar7 = (ForElementType<UE::FIoFileBlockRequest_*>)param_2;
                        if (FVar3 != (ForElementType<UE::FIoFileBlockRequest_*>)0x0) {
                          FVar7 = FVar3;
                        }
                        if ((local_28 <
                             (longlong *)((longlong)FVar7 + (longlong)param_2->ArrayMax * 8)) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar5)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                      }
                      iVar6 = param_2->ArrayNum;
                      if (iVar6 == param_2->ArrayMax) {
                        iVar6 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoFileBlockRequest_*>_>
                                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
                      }
                      param_2->ArrayNum = iVar6 + 1;
                      FVar3 = (param_2->AllocatorInstance).SecondaryData;
                      FVar7 = (ForElementType<UE::FIoFileBlockRequest_*>)param_2;
                      if (FVar3 != (ForElementType<UE::FIoFileBlockRequest_*>)0x0) {
                        FVar7 = FVar3;
                      }
                      *(longlong *)((longlong)FVar7 + (longlong)iVar6 * 8) = local_28[0];
                    }
                    goto LAB_1414992c0;
                  }
                  break;
                }
                iVar12 = *(int *)(lVar1 + 0x10);
              } while (iVar12 != -1);
            }
          }
          local_28[0] = 0;
LAB_1414992c0:
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < (pFVar9->ScatterGather).FileBlockLink.FileBlockCount);
      }
      pFVar9 = *(FIoPlatformReadRequest_u_96 **)((longlong)pFVar9 + 0x18);
    } while (pFVar9 != (FIoPlatformReadRequest_u_96 *)0x0);
  }
  return;
}

// GetOrCreateEncodedBlockRequest @ 1414997b0

FIoEncodedBlockRequest * __thiscall
UE::FPlatformIoDispatcherRequestMgr::GetOrCreateEncodedBlockRequest
          (FPlatformIoDispatcherRequestMgr *this,FIoBlockKey param_1,bool *param_2)

{
  FElement *pFVar1;
  ushort uVar2;
  FSlab *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FIoEncodedBlockRequest *pFVar7;
  FSlab *pFVar8;
  FSlab *pFVar9;
  longlong lVar10;
  FSlab *pFVar11;
  undefined1 *puVar12;
  TPairInitializer<UE::FIoBlockKey_const_&,UE::FIoEncodedBlockRequest_*_const_&> local_res8;
  FIoEncodedBlockRequest *local_res20;
  FIoEncodedBlockRequest ***local_48;
  FIoEncodedBlockRequest **local_40;
  
  local_res8.Value = (FIoEncodedBlockRequest **)param_1.field0_0x0;
  if ((param_1.field0_0x0 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockKey.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x2f2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIoEncodedBlockRequest *)(*pcVar4)();
    return pFVar7;
  }
  if (*(int *)&(this->EncodedBlockLookup).field_0x8 !=
      *(int *)&(this->EncodedBlockLookup).field_0x34) {
    puVar12 = *(undefined1 **)&(this->EncodedBlockLookup).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->EncodedBlockLookup).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (((ulonglong)local_res8.Value >> 0x20) * 0x17 + (longlong)local_res8.Value &
                    (ulonglong)(*(int *)&(this->EncodedBlockLookup).field_0x48 - 1)) * 4);
    if (iVar6 != -1) {
      do {
        lVar10 = *(longlong *)&this->EncodedBlockLookup + (longlong)iVar6 * 0x18;
        if ((FIoEncodedBlockRequest **)
            *(ulong64 *)(*(longlong *)&this->EncodedBlockLookup + (longlong)iVar6 * 0x18) ==
            local_res8.Value) {
          if ((lVar10 != 0) &&
             (pFVar7 = *(FIoEncodedBlockRequest **)(lVar10 + 8),
             pFVar7 != (FIoEncodedBlockRequest *)0x0)) {
            *param_2 = false;
            return pFVar7;
          }
          break;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
      } while (iVar6 != -1);
    }
  }
  pFVar3 = (this->EncodedBlockAllocator).CurrentSlab;
  lVar10 = 0x400;
  uVar2 = pFVar3->Allocated;
  pFVar3->Allocated = uVar2 + 1;
  if ((0x3ff < uVar2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIoEncodedBlockRequest *)(*pcVar4)();
    return pFVar7;
  }
  pFVar3 = (this->EncodedBlockAllocator).CurrentSlab;
  pFVar3->Elements[uVar2].Slab = pFVar3;
  if (((this->EncodedBlockAllocator).CurrentSlab)->Allocated == 0x400) {
    pFVar8 = ::operator_new(0x2c008);
    pFVar11 = (FSlab *)0x0;
    if (pFVar8 != (FSlab *)0x0) {
      memset(&pFVar8->field_0x4,0,0x2c004);
      pFVar8->Allocated = 0;
      pFVar8->Freed = 0;
      pFVar9 = pFVar8;
      do {
        pFVar9 = (FSlab *)&pFVar9->Elements[0].Slab;
        *(FSlab **)pFVar9 = (FSlab *)0x0;
        lVar10 = lVar10 + -1;
        pFVar11 = pFVar8;
      } while (lVar10 != 0);
    }
    (this->EncodedBlockAllocator).CurrentSlab = pFVar11;
  }
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0] = '\0';
  (pFVar1->Data).Pad[1] = '\0';
  (pFVar1->Data).Pad[2] = '\0';
  (pFVar1->Data).Pad[3] = '\0';
  (pFVar1->Data).Pad[4] = '\0';
  (pFVar1->Data).Pad[5] = '\0';
  (pFVar1->Data).Pad[6] = '\0';
  (pFVar1->Data).Pad[7] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[8] = '\0';
  (pFVar1->Data).Pad[9] = '\0';
  (pFVar1->Data).Pad[10] = '\0';
  (pFVar1->Data).Pad[0xb] = '\0';
  (pFVar1->Data).Pad[0xc] = '\0';
  (pFVar1->Data).Pad[0xd] = '\0';
  (pFVar1->Data).Pad[0xe] = '\0';
  (pFVar1->Data).Pad[0xf] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x10] = '\0';
  (pFVar1->Data).Pad[0x11] = '\0';
  (pFVar1->Data).Pad[0x12] = '\0';
  (pFVar1->Data).Pad[0x13] = '\0';
  (pFVar1->Data).Pad[0x14] = '\0';
  (pFVar1->Data).Pad[0x15] = '\0';
  (pFVar1->Data).Pad[0x16] = '\0';
  (pFVar1->Data).Pad[0x17] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x18] = '\0';
  (pFVar1->Data).Pad[0x19] = '\0';
  (pFVar1->Data).Pad[0x1a] = '\0';
  (pFVar1->Data).Pad[0x1b] = '\0';
  (pFVar1->Data).Pad[0x1c] = '\0';
  (pFVar1->Data).Pad[0x1d] = '\0';
  (pFVar1->Data).Pad[0x1e] = '\0';
  (pFVar1->Data).Pad[0x1f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x20] = '\0';
  (pFVar1->Data).Pad[0x21] = '\0';
  (pFVar1->Data).Pad[0x22] = '\0';
  (pFVar1->Data).Pad[0x23] = '\0';
  (pFVar1->Data).Pad[0x24] = '\0';
  (pFVar1->Data).Pad[0x25] = '\0';
  (pFVar1->Data).Pad[0x26] = '\0';
  (pFVar1->Data).Pad[0x27] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x28] = '\0';
  (pFVar1->Data).Pad[0x29] = '\0';
  (pFVar1->Data).Pad[0x2a] = '\0';
  (pFVar1->Data).Pad[0x2b] = '\0';
  (pFVar1->Data).Pad[0x2c] = '\0';
  (pFVar1->Data).Pad[0x2d] = '\0';
  (pFVar1->Data).Pad[0x2e] = '\0';
  (pFVar1->Data).Pad[0x2f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x80] = '\0';
  (pFVar1->Data).Pad[0x81] = '\0';
  (pFVar1->Data).Pad[0x82] = '\0';
  (pFVar1->Data).Pad[0x83] = '\0';
  (pFVar1->Data).Pad[0x84] = '\0';
  (pFVar1->Data).Pad[0x85] = '\0';
  (pFVar1->Data).Pad[0x86] = '\0';
  (pFVar1->Data).Pad[0x87] = '\0';
  pFVar3->Elements[uVar2].Data.Pad[0xa6] = '\0';
  pFVar3->Elements[uVar2].Data.Pad[0xa7] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x30] = '\0';
  (pFVar1->Data).Pad[0x31] = '\0';
  (pFVar1->Data).Pad[0x32] = '\0';
  (pFVar1->Data).Pad[0x33] = '\0';
  (pFVar1->Data).Pad[0x34] = '\0';
  (pFVar1->Data).Pad[0x35] = '\0';
  (pFVar1->Data).Pad[0x36] = '\0';
  (pFVar1->Data).Pad[0x37] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x38] = '\0';
  (pFVar1->Data).Pad[0x39] = '\0';
  (pFVar1->Data).Pad[0x3a] = '\0';
  (pFVar1->Data).Pad[0x3b] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x3c] = '\x02';
  (pFVar1->Data).Pad[0x3d] = '\0';
  (pFVar1->Data).Pad[0x3e] = '\0';
  (pFVar1->Data).Pad[0x3f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x40] = '\0';
  (pFVar1->Data).Pad[0x41] = '\0';
  (pFVar1->Data).Pad[0x42] = '\0';
  (pFVar1->Data).Pad[0x43] = '\0';
  (pFVar1->Data).Pad[0x44] = '\0';
  (pFVar1->Data).Pad[0x45] = '\0';
  (pFVar1->Data).Pad[0x46] = '\0';
  (pFVar1->Data).Pad[0x47] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x48] = '\0';
  (pFVar1->Data).Pad[0x49] = '\0';
  (pFVar1->Data).Pad[0x4a] = '\0';
  (pFVar1->Data).Pad[0x4b] = '\0';
  (pFVar1->Data).Pad[0x4c] = '\0';
  (pFVar1->Data).Pad[0x4d] = '\0';
  (pFVar1->Data).Pad[0x4e] = '\0';
  (pFVar1->Data).Pad[0x4f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x50] = '\0';
  (pFVar1->Data).Pad[0x51] = '\0';
  (pFVar1->Data).Pad[0x52] = '\0';
  (pFVar1->Data).Pad[0x53] = '\0';
  (pFVar1->Data).Pad[0x54] = '\0';
  (pFVar1->Data).Pad[0x55] = '\0';
  (pFVar1->Data).Pad[0x56] = '\0';
  (pFVar1->Data).Pad[0x57] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x58] = '\0';
  (pFVar1->Data).Pad[0x59] = '\0';
  (pFVar1->Data).Pad[0x5a] = '\0';
  (pFVar1->Data).Pad[0x5b] = '\0';
  (pFVar1->Data).Pad[0x5c] = '\0';
  (pFVar1->Data).Pad[0x5d] = '\0';
  (pFVar1->Data).Pad[0x5e] = '\0';
  (pFVar1->Data).Pad[0x5f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x60] = '\0';
  (pFVar1->Data).Pad[0x61] = '\0';
  (pFVar1->Data).Pad[0x62] = '\0';
  (pFVar1->Data).Pad[99] = '\0';
  (pFVar1->Data).Pad[100] = '\0';
  (pFVar1->Data).Pad[0x65] = '\0';
  (pFVar1->Data).Pad[0x66] = '\0';
  (pFVar1->Data).Pad[0x67] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x88] = 0xff;
  (pFVar1->Data).Pad[0x89] = 0xff;
  (pFVar1->Data).Pad[0x8a] = 0xff;
  (pFVar1->Data).Pad[0x8b] = 0xff;
  (pFVar1->Data).Pad[0x8c] = 0xff;
  (pFVar1->Data).Pad[0x8d] = 0xff;
  (pFVar1->Data).Pad[0x8e] = 0xff;
  (pFVar1->Data).Pad[0x8f] = 0xff;
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x68] = '\0';
  (pFVar1->Data).Pad[0x69] = '\0';
  (pFVar1->Data).Pad[0x6a] = '\0';
  (pFVar1->Data).Pad[0x6b] = '\0';
  (pFVar1->Data).Pad[0x6c] = '\0';
  (pFVar1->Data).Pad[0x6d] = '\0';
  (pFVar1->Data).Pad[0x6e] = '\0';
  (pFVar1->Data).Pad[0x6f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x70] = '\0';
  (pFVar1->Data).Pad[0x71] = '\0';
  (pFVar1->Data).Pad[0x72] = '\0';
  (pFVar1->Data).Pad[0x73] = '\0';
  (pFVar1->Data).Pad[0x74] = '\0';
  (pFVar1->Data).Pad[0x75] = '\0';
  (pFVar1->Data).Pad[0x76] = '\0';
  (pFVar1->Data).Pad[0x77] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x78] = '\0';
  (pFVar1->Data).Pad[0x79] = '\0';
  (pFVar1->Data).Pad[0x7a] = '\0';
  (pFVar1->Data).Pad[0x7b] = '\0';
  (pFVar1->Data).Pad[0x7c] = '\0';
  (pFVar1->Data).Pad[0x7d] = '\0';
  (pFVar1->Data).Pad[0x7e] = '\0';
  (pFVar1->Data).Pad[0x7f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x90] = '\0';
  (pFVar1->Data).Pad[0x91] = '\0';
  (pFVar1->Data).Pad[0x92] = '\0';
  (pFVar1->Data).Pad[0x93] = '\0';
  (pFVar1->Data).Pad[0x94] = '\0';
  (pFVar1->Data).Pad[0x95] = '\0';
  (pFVar1->Data).Pad[0x96] = '\0';
  (pFVar1->Data).Pad[0x97] = '\0';
  pFVar3->Elements[uVar2].Data.Pad[0xa4] = '\0';
  pFVar3->Elements[uVar2].Data.Pad[0xa5] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0x98] = '\0';
  (pFVar1->Data).Pad[0x99] = '\0';
  (pFVar1->Data).Pad[0x9a] = '\0';
  (pFVar1->Data).Pad[0x9b] = '\0';
  (pFVar1->Data).Pad[0x9c] = '\0';
  (pFVar1->Data).Pad[0x9d] = '\0';
  (pFVar1->Data).Pad[0x9e] = '\0';
  (pFVar1->Data).Pad[0x9f] = '\0';
  pFVar1 = pFVar3->Elements + uVar2;
  (pFVar1->Data).Pad[0xa0] = '\x01';
  (pFVar1->Data).Pad[0xa1] = '\0';
  (pFVar1->Data).Pad[0xa2] = '\0';
  (pFVar1->Data).Pad[0xa3] = '\0';
  ((FIoBlockKey_u_0 *)(pFVar3->Elements[uVar2].Data.Pad + 0x60))->_s_0 =
       (FIoBlockKey_u_0_s_0)local_res8.Value;
  local_48 = &local_res8.Value;
  local_40 = &local_res20;
  *param_2 = true;
  local_res20 = (FIoEncodedBlockRequest *)(pFVar3->Elements + uVar2);
  TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::FIoBlockKey_const_&,UE::FIoEncodedBlockRequest_*_const_&>_>
            ((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
              *)&this->EncodedBlockLookup,&local_res8,(bool *)&local_48);
  return local_res20;
}

// GetOrCreateFileBlockRequest @ 141499a50

FIoFileBlockRequest * __thiscall
UE::FPlatformIoDispatcherRequestMgr::GetOrCreateFileBlockRequest
          (FPlatformIoDispatcherRequestMgr *this,FIoPlatformReadRequest *param_1,FIoBlockKey param_2
          ,bool *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FIoFileBlockRequest *pFVar5;
  undefined1 *puVar6;
  FIoBlockKey_u_0 local_res18;
  FIoFileBlockRequest *local_38;
  FIoBlockKey_u_0 *local_30;
  FIoFileBlockRequest **local_28;
  
  local_res18 = param_2.field0_0x0;
  if ((param_2.field0_0x0 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockKey.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x2ba,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FIoFileBlockRequest *)(*pcVar2)();
    return pFVar5;
  }
  if (*(int *)&(this->FileBlockLookup).field_0x8 != *(int *)&(this->FileBlockLookup).field_0x34) {
    puVar6 = *(undefined1 **)&(this->FileBlockLookup).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->FileBlockLookup).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((local_res18.Hash >> 0x20) * 0x17 + local_res18.Hash &
                              (ulonglong)(*(int *)&(this->FileBlockLookup).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->FileBlockLookup + (longlong)iVar4 * 0x18;
        if (*(FIoBlockKey_u_0_s_0 *)(*(longlong *)&this->FileBlockLookup + (longlong)iVar4 * 0x18)
            == (FIoBlockKey_u_0_s_0)local_res18.Hash) {
          if (lVar1 != 0) {
            pFVar5 = *(FIoFileBlockRequest **)(lVar1 + 8);
            if (pFVar5 != (FIoFileBlockRequest *)0x0) {
              AddToLink(this,&(param_1->field49_0x60).ScatterGather.FileBlockLink,
                        (FIoBlockKey)local_res18._s_0);
              *param_3 = false;
              return pFVar5;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_38 = TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024>::Construct<>
                       (&this->FileBlockAllocator);
  (local_38->BlockKey).field0_0x0._s_0 = (FIoBlockKey_u_0_s_0)local_res18;
  *param_3 = true;
  AddToLink(this,&(param_1->field49_0x60).ScatterGather.FileBlockLink,(FIoBlockKey)local_res18._s_0)
  ;
  local_30 = &local_res18;
  local_28 = &local_38;
  TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::FIoBlockKey_const_&,UE::FIoFileBlockRequest_*_const_&>_>
            ((TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
              *)&this->FileBlockLookup,
             (TPairInitializer<UE::FIoBlockKey_const_&,UE::FIoFileBlockRequest_*_const_&> *)
             &stack0x00000008,(bool *)&local_30);
  return local_38;
}

// Remove @ 1414ad750

void __thiscall
UE::FPlatformIoDispatcherRequestMgr::Remove
          (FPlatformIoDispatcherRequestMgr *this,FIoEncodedBlockRequest *param_1)

{
  TMap<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  FIoBlockKey_u_0_s_0 FVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  
  if (param_1->ErrorCode != Cancelled) {
    this_00 = &this->EncodedBlockLookup;
    if (*(int *)&(this->EncodedBlockLookup).field_0x8 !=
        *(int *)&(this->EncodedBlockLookup).field_0x34) {
      FVar3 = (param_1->BlockKey).field0_0x0._s_0;
      TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::FIoBlockKey>
                ((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                  *)this_00,FVar3.BlockId * 0x17 + FVar3.FileId,&param_1->BlockKey);
    }
    if (*(int *)&(this->EncodedBlockLookup).field_0x8 ==
        *(int *)&(this->EncodedBlockLookup).field_0x34) {
      for (lVar4 = 0x3f; 0x8fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
      iVar2 = *(int *)&(this->EncodedBlockLookup).field_0x48;
      if ((iVar2 < iVar6) || (iVar6 < iVar2)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
        TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->EncodedBlockLookup).field_0xc;
      *(undefined4 *)&(this->EncodedBlockLookup).field_0x8 = 0;
      if (*(int *)puVar1 != 0x80) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0x80,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->EncodedBlockLookup).field_0x34 = 0;
      *(undefined4 *)&(this->EncodedBlockLookup).field_0x30 = 0xffffffff;
      iVar2 = *(int *)&(this->EncodedBlockLookup).field_0x2c;
      *(undefined4 *)&(this->EncodedBlockLookup).field_0x28 = 0;
      if ((iVar2 < 0x80) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->EncodedBlockLookup).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EncodedBlockLookup).field_0x10,0)
        ;
      }
      if (bVar5) {
        *(int *)&(this->EncodedBlockLookup).field_0x48 = iVar6;
        TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  return;
}

// TryCancelAllReadRequests @ 1414b5050

bool __thiscall
UE::FPlatformIoDispatcherRequestMgr::TryCancelAllReadRequests
          (FPlatformIoDispatcherRequestMgr *this,FIoFileHandle param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FIoBlockKey FVar7;
  code *pcVar8;
  TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
  *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint local_res18 [2];
  longlong *local_res20;
  ForAnyElementType local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined1 local_c8;
  undefined1 local_c7 [7];
  longlong local_c0;
  FScriptContainerElement *local_b8;
  TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
  *local_b0;
  longlong *local_a8;
  TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  FScriptContainerElement *local_70;
  TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_b0 = &this->FileBlockLookup;
  local_90 = &(this->FileBlockLookup).field_0x10;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  uStack_cc = 0;
  iVar4 = *(int *)&(this->FileBlockLookup).field_0x28;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = iStack_98;
  if (iVar4 != 0) {
    puVar22 = *(uint **)&(this->FileBlockLookup).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)local_90;
    }
    uVar18 = *puVar22;
    local_80 = 0;
    iStack_98 = 0;
    while (uVar18 == 0) {
      lVar14 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1414b510f;
      uVar18 = puVar22[lVar14 + 1];
    }
    uStack_94 = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_94 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iStack_84 = local_80 + -1 + (int)lVar14;
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(int)lVar14);
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_1414b510f:
  uVar18 = *(uint *)&(this->FileBlockLookup).field_0x28;
  uVar23 = uVar18 & 0xffffffe0;
  iStack_78 = *(int *)&(this->FileBlockLookup).field_0x8 -
              *(int *)&(this->FileBlockLookup).field_0x34;
  puVar1 = &(this->FileBlockLookup).field_0x10;
  uStack_88 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  iVar20 = (int)uVar18 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = local_b0;
  iStack_7c = iStack_84;
  local_68 = local_b0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_90;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  pTVar9 = local_b0;
  uVar5 = *(uint *)&(this->FileBlockLookup).field_0x28;
  if (uVar18 != uVar5) {
    puVar21 = *(undefined1 **)&(this->FileBlockLookup).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1414b5220;
      uVar18 = *(uint *)(puVar21 + lVar14 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_b8 = (FScriptContainerElement *)CONCAT44(local_b8._4_4_,(int)lVar14);
    uVar18 = (int)lVar14 + -1 + uVar23;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_1414b5220:
  while( true ) {
    pTVar11 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar18) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar9))
    break;
    local_c0 = *(longlong *)(*(longlong *)pTVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulong64 *)(local_c0 + 0x70) == param_1.Handle) && (*(char *)(local_c0 + 0xb8) == '\x01'))
    {
      if ((local_d8.Data <= (FScriptContainerElement *)&local_c0) &&
         (((FScriptContainerElement *)&local_c0 < local_d8.Data + (longlong)(int)uStack_cc * 8 &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)))) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      if (local_d0 == uStack_cc) {
        local_d0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d8,(int *)&uStack_cc);
      }
      lVar14 = (longlong)(int)local_d0;
      local_d0 = local_d0 + 1;
      *(longlong *)(local_d8.Data + lVar14 * 8) = local_c0;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  uVar15 = (ulonglong)(int)local_d0;
  local_res18[0] = local_d0;
  local_70 = local_d8.Data + uVar15 * 8;
  FVar19.Data = local_d8.Data;
  while( true ) {
    pFVar10 = local_70;
    local_b8 = FVar19.Data;
    if (local_d0 != (uint)uVar15) {
      `TCheckedPointerIterator<UE::FIoFileBlockRequest_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res20);
    }
    if (FVar19.Data == pFVar10) break;
    local_a8 = *(longlong **)FVar19.Data;
    lVar14 = local_a8[9];
    plVar2 = local_a8 + 9;
    plVar16 = local_a8;
    if ((longlong *)local_a8[8] != (longlong *)0x0) {
      plVar16 = (longlong *)local_a8[8];
    }
    local_b0 = (TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
                *)(plVar16 + (int)lVar14);
    while( true ) {
      pTVar9 = local_b0;
      local_res20 = plVar16;
      if ((int)*plVar2 != (int)lVar14) {
        `TCheckedPointerIterator<UE::FIoEncodedBlockRequest_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_c8);
      }
      if ((TMap<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>_>
           *)plVar16 == pTVar9) break;
      lVar6 = *plVar16;
      iVar4 = *(int *)(lVar6 + 0x38);
      lVar17 = lVar6;
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        lVar17 = *(longlong *)(lVar6 + 0x30);
      }
      lVar3 = lVar17 + (longlong)iVar4 * 0x18;
      while( true ) {
        if (*(int *)(lVar6 + 0x38) != iVar4) {
          `TCheckedPointerIterator<UE::FIoEncodedBlockRequest::FScatterTarget,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_c7);
        }
        if (lVar17 == lVar3) break;
        *(undefined4 *)(lVar17 + 0x14) = 0;
        lVar17 = lVar17 + 0x18;
      }
      *(undefined4 *)(lVar6 + 0xa0) = 3;
      if (*(int *)&(this->EncodedBlockLookup).field_0x8 !=
          *(int *)&(this->EncodedBlockLookup).field_0x34) {
        FVar7.field0_0x0 =
             (FIoBlockKey_u_0)*(FIoBlockKey_u_0 *)&((FIoBlockKey_u_0 *)(lVar6 + 0x60))->_s_0;
        TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::FIoBlockKey>
                  ((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                    *)&this->EncodedBlockLookup,
                   FVar7.field0_0x0._4_4_ * 0x17 + FVar7.field0_0x0._0_4_,
                   (FIoBlockKey *)&((FIoBlockKey_u_0 *)(lVar6 + 0x60))->_s_0);
      }
      plVar16 = local_res20 + 1;
    }
    *(undefined4 *)(local_a8 + 0x16) = 3;
    if (*(int *)&(this->FileBlockLookup).field_0x8 != *(int *)&(this->FileBlockLookup).field_0x34) {
      FVar7.field0_0x0 =
           (FIoBlockKey_u_0)*(FIoBlockKey_u_0 *)&((FIoBlockKey_u_0 *)(local_a8 + 0xf))->_s_0;
      TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::FIoBlockKey>
                ((TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                  *)&this->FileBlockLookup,FVar7.field0_0x0._4_4_ * 0x17 + FVar7.field0_0x0._0_4_,
                 (FIoBlockKey *)&((FIoBlockKey_u_0 *)(local_a8 + 0xf))->_s_0);
    }
    uVar15 = (ulonglong)local_res18[0];
    FVar19.Data = local_b8 + 8;
  }
  bVar12 = local_d0 != 0;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return bVar12;
}

// TryCancelReadRequest @ 1414b54d0

bool __thiscall
UE::FPlatformIoDispatcherRequestMgr::TryCancelReadRequest
          (FPlatformIoDispatcherRequestMgr *this,FIoPlatformReadRequest *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  longlong *plVar4;
  longlong *plVar5;
  FIoBlockKey FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ForElementType<FSetElementId> FVar10;
  longlong *plVar11;
  TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
  *pTVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  longlong *plVar16;
  FIoPlatformReadRequest_u_96 *pFVar17;
  bool local_res20;
  undefined1 local_87;
  undefined1 local_86 [2];
  int local_84;
  uint local_80;
  longlong *local_78;
  FIoPlatformReadRequest_u_96 *local_70;
  uint local_68;
  int iStack_64;
  longlong *local_60;
  TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
  *local_58;
  
  bVar15 = false;
  *param_2 = false;
  if (param_1->Type == ScatterGather) {
    pFVar17 = &param_1->field49_0x60;
    if ((param_1->field49_0x60).ScatterGather.RemainingBlocks == (atomic<unsigned_short>)0x0) {
      return false;
    }
    bVar15 = true;
    local_res20 = true;
    for (; pFVar17 != (FIoPlatformReadRequest_u_96 *)0x0;
        pFVar17 = *(FIoPlatformReadRequest_u_96 **)((longlong)pFVar17 + 0x18)) {
      local_70 = pFVar17;
      if (((pFVar17->ScatterGather).FileBlockLink.FileBlockCount == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Link->FileBlockCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                             ,600,L""), bVar15 = local_res20, bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar13 = 0;
      local_80 = 0;
      if ((pFVar17->ScatterGather).FileBlockLink.FileBlockCount != 0) {
        pTVar12 = (TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                   *)&this->FileBlockLookup;
        local_58 = pTVar12;
        do {
          local_68 = (param_1->field49_0x60).ScatterGather.FileId;
          iStack_64 = *(int *)((longlong)pFVar17 + uVar13 * 4);
          if (*(int *)&(this->FileBlockLookup).field_0x8 != *(int *)&(pTVar12->Elements).field_0x34)
          {
            FVar3 = (pTVar12->Hash).SecondaryData;
            FVar10 = (ForElementType<FSetElementId>)&pTVar12->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = FVar3;
            }
            iVar14 = *(int *)((longlong)FVar10 +
                             (ulonglong)(local_68 + iStack_64 * 0x17 & pTVar12->HashSize - 1U) * 4);
            if (iVar14 != -1) {
LAB_1414b5610:
              lVar1 = *(longlong *)&pTVar12->Elements + (longlong)iVar14 * 0x18;
              if (*(longlong *)(*(longlong *)&pTVar12->Elements + (longlong)iVar14 * 0x18) !=
                  CONCAT44(iStack_64,local_68)) goto code_r0x0001414b5621;
              if (((lVar1 != 0) && (plVar4 = *(longlong **)(lVar1 + 8), plVar4 != (longlong *)0x0))
                 && ((char)plVar4[0x17] != '\x02')) {
                local_84 = (int)plVar4[9];
                local_78 = plVar4 + 9;
                bVar15 = true;
                plVar16 = plVar4;
                if ((longlong *)plVar4[8] != (longlong *)0x0) {
                  plVar16 = (longlong *)plVar4[8];
                }
                local_60 = plVar16 + local_84;
                while( true ) {
                  plVar5 = local_60;
                  if ((int)*local_78 != local_84) {
                    local_87 = 0;
                    `TCheckedPointerIterator<UE::FIoEncodedBlockRequest_*,int,0>::operator!='::__l2
                    ::<lambda_1>::operator()(&local_87);
                  }
                  pTVar12 = local_58;
                  if (plVar16 == plVar5) break;
                  plVar5 = (longlong *)*plVar16;
                  bVar8 = true;
                  lVar1 = plVar5[7];
                  plVar11 = plVar5;
                  if ((longlong *)plVar5[6] != (longlong *)0x0) {
                    plVar11 = (longlong *)plVar5[6];
                  }
                  plVar2 = plVar11 + (longlong)(int)lVar1 * 3;
                  while( true ) {
                    if ((int)plVar5[7] != (int)lVar1) {
                      local_86[0] = 0;
                      `TCheckedPointerIterator<UE::FIoEncodedBlockRequest::FScatterTarget,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(local_86);
                    }
                    if (plVar11 == plVar2) break;
                    if ((FIoPlatformReadRequest *)*plVar11 == param_1) {
                      *(undefined4 *)((longlong)plVar11 + 0x14) = 0;
                      plVar11 = plVar11 + 3;
                    }
                    else {
                      if (*(int *)((longlong)plVar11 + 0x14) != 0) {
                        bVar8 = false;
                        bVar15 = false;
                      }
                      plVar11 = plVar11 + 3;
                    }
                  }
                  if (bVar8) {
                    *(undefined4 *)(plVar5 + 0x14) = 3;
                    if (*(int *)&(this->EncodedBlockLookup).field_0x8 !=
                        *(int *)&(this->EncodedBlockLookup).field_0x34) {
                      FVar6.field0_0x0 =
                           (FIoBlockKey_u_0)
                           *(FIoBlockKey_u_0 *)&((FIoBlockKey_u_0 *)(plVar5 + 0xc))->_s_0;
                      TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                      ::RemoveImpl<UE::FIoBlockKey>
                                ((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                                  *)&this->EncodedBlockLookup,
                                 FVar6.field0_0x0._4_4_ * 0x17 + FVar6.field0_0x0._0_4_,
                                 (FIoBlockKey *)&((FIoBlockKey_u_0 *)(plVar5 + 0xc))->_s_0);
                    }
                  }
                  plVar16 = plVar16 + 1;
                }
                if (bVar15) {
                  *(undefined4 *)(plVar4 + 0x16) = 3;
                  if (*(int *)&(this->FileBlockLookup).field_0x8 ==
                      *(int *)&(this->FileBlockLookup).field_0x34) {
                    pTVar12 = (TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                               *)&this->FileBlockLookup;
                    *param_2 = true;
                  }
                  else {
                    FVar6.field0_0x0 =
                         (FIoBlockKey_u_0)
                         *(FIoBlockKey_u_0 *)&((FIoBlockKey_u_0 *)(plVar4 + 0xf))->_s_0;
                    TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                    ::RemoveImpl<UE::FIoBlockKey>
                              (local_58,FVar6.field0_0x0._4_4_ * 0x17 + FVar6.field0_0x0._0_4_,
                               (FIoBlockKey *)&((FIoBlockKey_u_0 *)(plVar4 + 0xf))->_s_0);
                    *param_2 = true;
                  }
                }
                else {
                  pTVar12 = (TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                             *)&this->FileBlockLookup;
                }
                uVar13 = (ulonglong)local_80;
                pFVar17 = local_70;
                goto LAB_1414b5817;
              }
            }
          }
LAB_1414b562b:
          local_res20 = false;
LAB_1414b5817:
          local_80 = (int)uVar13 + 1;
          uVar13 = (ulonglong)local_80;
          bVar15 = local_res20;
        } while (local_80 < (pFVar17->ScatterGather).FileBlockLink.FileBlockCount);
      }
    }
  }
  return bVar15;
code_r0x0001414b5621:
  iVar14 = *(int *)(lVar1 + 0x10);
  if (iVar14 == -1) goto LAB_1414b562b;
  goto LAB_1414b5610;
}

