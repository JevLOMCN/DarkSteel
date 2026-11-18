// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// ~FParallelDirectoryEnumerator @ 143228b70

void __thiscall
BuildPatchServices::FParallelDirectoryEnumerator::~FParallelDirectoryEnumerator
          (FParallelDirectoryEnumerator *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = (this->DirectoryFutures).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->DirectoryFutures).Tail = pTVar1->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(pTVar1->Item).field_0x8);
    ::operator_delete(pTVar1,0x18);
    pTVar1 = (this->DirectoryFutures).Tail;
  }
  pTVar2 = (this->FoundFilesQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->FoundFilesQueue).Tail = pTVar2->NextNode;
    pFVar3 = (pTVar2->Item).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->FoundFilesQueue).Tail;
  }
  pFVar3 = (this->FileExtension).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  return;
}

// GetFiles @ 143256960

void __thiscall
BuildPatchServices::FParallelDirectoryEnumerator::GetFiles
          (FParallelDirectoryEnumerator *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TFuture<void> *pTVar1;
  FString *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  void *pvVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FIdentityFunctor local_res8 [8];
  longlong local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar12 = 0;
  local_58 = 0;
  local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  while (pTVar3 = ((this->DirectoryFutures).Tail)->NextNode, pTVar3 != (TNode *)0x0) {
    pTVar1 = &pTVar3->Item;
    if ((TFuture<void> *)&local_58 != pTVar1) {
      local_58 = *(longlong *)pTVar1;
      *(undefined8 *)pTVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_50,(FSharedReferencer<1> *)&(pTVar3->Item).field_0x8);
      lVar12 = local_58;
    }
    pTVar4 = (this->DirectoryFutures).Tail;
    (this->DirectoryFutures).Tail = pTVar3;
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TFuture<void> *)&local_48) {
      *(undefined8 *)pTVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(pTVar3->Item).field_0x8,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    if (pTVar4 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&(pTVar4->Item).field_0x8);
      ::operator_delete(pTVar4,0x18);
    }
    if (lVar12 != 0) {
      do {
        cVar9 = (**(code **)(**(longlong **)(lVar12 + 0x60) + 0x20))
                          (*(longlong **)(lVar12 + 0x60),0xffffffff,0);
      } while (cVar9 == '\0');
    }
  }
  while( true ) {
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)(pFVar13 + 8) = 0;
    pTVar5 = ((this->FoundFilesQueue).Tail)->NextNode;
    if (pTVar5 == (TNode *)0x0) break;
    pFVar2 = &pTVar5->Item;
    if (pFVar13 != (FScriptContainerElement *)pFVar2) {
      if (*(void **)pFVar13 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar13);
      }
      *(FScriptContainerElement **)pFVar13 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar13 + 8) = (pTVar5->Item).Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = (pTVar5->Item).Data.ArrayMax;
      (pTVar5->Item).Data.ArrayNum = 0;
      (pTVar5->Item).Data.ArrayMax = 0;
    }
    pTVar6 = (this->FoundFilesQueue).Tail;
    (this->FoundFilesQueue).Tail = pTVar5;
    local_38 = 0;
    local_30 = 0;
    if (pFVar2 != (FString *)&local_38) {
      pFVar13 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar5->Item).Data.ArrayNum = 0;
      (pTVar5->Item).Data.ArrayMax = 0;
    }
    if (pTVar6 != (TNode *)0x0) {
      pFVar13 = (pTVar6->Item).Data.AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      ::operator_delete(pTVar6,0x18);
    }
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar12 = (longlong)param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pvVar7 = *(void **)(pFVar13 + lVar12 * 0x10 + -0x10);
  *(undefined8 *)(pFVar13 + lVar12 * 0x10 + -0x10) = 0;
  *(undefined8 *)(pFVar13 + lVar12 * 0x10 + -8) = 0;
  iVar11 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  if (*(void **)(pFVar13 + -0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar13 + -0x10));
  }
  iVar11 = param_1->ArrayNum - iVar11;
  if (iVar11 != 0) {
    memmove(pFVar13 + -0x10,pFVar13,(longlong)iVar11 << 4);
  }
  param_1->ArrayNum = param_1->ArrayNum + -1;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8[0],
             (TLess<void> *)local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  return;
}

// Visit @ 14326e470

bool __thiscall
BuildPatchServices::FParallelDirectoryEnumerator::Visit
          (FParallelDirectoryEnumerator *this,wchar_t *param_1,bool param_2)

{
  TQueue<TFuture<void>,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  int iVar4;
  int iVar5;
  TFuture<void> *pTVar6;
  TNode *pTVar7;
  size_t sVar8;
  TNode *pTVar9;
  wchar_t *_Str2;
  TQueue<FString,0> *pTVar10;
  FString local_88;
  undefined1 local_78 [16];
  <lambda_1> local_68;
  TUniqueFunction<void___cdecl(void)> local_48;
  
  if (param_2) {
    ::FString::FString(&local_88,param_1);
    local_68.Directory.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_68.Directory.Data.ArrayNum = local_88.Data.ArrayNum;
    pTVar1 = &this->DirectoryFutures;
    local_68.Directory.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_48._0_8_ = 0;
    local_48._40_8_ = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.__this = this;
    pTVar6 = Async<_BuildPatchServices::FParallelDirectoryEnumerator::Visit_::__l5::<lambda_1>_>
                       ((TFuture<void> *)local_78,this->AsyncExecution,&local_68,&local_48);
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 != (TNode *)0x0) {
      pTVar7->NextNode = (TNode *)0x0;
      *(undefined8 *)&pTVar7->Item = *(undefined8 *)pTVar6;
      *(undefined8 *)&(pTVar7->Item).field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      *(undefined8 *)pTVar6 = 0;
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar7;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar7;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78._8_8_);
    if (local_68.Directory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Directory.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return true;
    }
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
    return true;
  }
  iVar4 = (this->FileExtension).Data.ArrayNum;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    sVar8 = wcslen(param_1);
    if ((int)sVar8 < iVar5) {
      return true;
    }
    if (iVar4 == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = (wchar_t *)(this->FileExtension).Data.AllocatorInstance.Data;
    }
    iVar5 = wcscmp(param_1 + ((int)sVar8 - iVar5),_Str2);
    if (iVar5 != 0) {
      return true;
    }
  }
  pTVar10 = &this->FoundFilesQueue;
  ::FString::FString(&local_88,param_1);
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 != (TNode *)0x0) {
    pTVar9->NextNode = (TNode *)0x0;
    (pTVar9->Item).Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar9->Item).Data.ArrayNum = local_88.Data.ArrayNum;
    (pTVar9->Item).Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    if (((ulonglong)pTVar10 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar3 = pTVar10->Head;
    pTVar10->Head = pTVar9;
    UNLOCK();
    if (((ulonglong)pTVar3 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar3->NextNode = pTVar9;
    UNLOCK();
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return true;
}

