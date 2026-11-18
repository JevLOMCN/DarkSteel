// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// ~FWorkBlockifier @ 142013920

void __thiscall UE::GC::FWorkBlockifier::~FWorkBlockifier(FWorkBlockifier *this)

{
  FWorkBlock *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((int)((longlong)this->WipIt + (-8 - (longlong)this->Wip) >> 3) != 0) ||
     ((this->field2_0x10).SyncQueue != (FWorkBlock *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUnused()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x94d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Wip;
  if ((pFVar1 == (FWorkBlock *)0x0) || (((ulonglong)pFVar1 & 0xfff) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidPage(Page)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x562,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMemory::Free(pFVar1);
  return;
}

// FreeOwningBlock @ 142053590

void __thiscall UE::GC::FWorkBlockifier::FreeOwningBlock(FWorkBlockifier *this,UObject **param_1)

{
  UObject **ppUVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWorkerCache *pFVar5;
  
  if (param_1 != (UObject **)0x0) {
    ppUVar1 = param_1 + -1;
    if (((ulonglong)ppUVar1 & 0xfff) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UPTRINT(Block) % FPageAllocator::PageSize == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x944,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar2 = this->WorkerIndex;
    if ((ppUVar1 == (UObject **)0x0) || (((ulonglong)ppUVar1 & 0xfff) != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidPage(Page)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x553,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar5 = GScratchPages.WorkerCaches + iVar2;
      if (ppUVar1 == (UObject **)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Page",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x4fd,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      pFVar5 = GScratchPages.WorkerCaches + iVar2;
    }
    if (pFVar5->Num < 0x20) {
      pFVar5->Pages[pFVar5->Num] = ppUVar1;
      pFVar5->Num = pFVar5->Num + 1;
      return;
    }
    if ((ppUVar1 == (UObject **)0x0) || (((ulonglong)ppUVar1 & 0xfff) != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidPage(Page)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x562,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMemory::Free(ppUVar1);
  }
  return;
}

// PopFullBlockAsync @ 142067a40

FWorkBlock * __thiscall UE::GC::FWorkBlockifier::PopFullBlockAsync(FWorkBlockifier *this)

{
  FWorkBlock *pFVar1;
  
  pFVar1 = FWorkstealingQueue::Pop((this->field2_0x10).AsyncQueue);
  return pFVar1;
}

// PopFullBlockSync @ 142067a50

FWorkBlock * __thiscall UE::GC::FWorkBlockifier::PopFullBlockSync(FWorkBlockifier *this)

{
  FWorkBlockifier_u_16 *pFVar1;
  
  pFVar1 = (FWorkBlockifier_u_16 *)(this->field2_0x10).SyncQueue;
  if (pFVar1 != (FWorkBlockifier_u_16 *)0x0) {
    this->field2_0x10 = *pFVar1;
    return (FWorkBlock *)pFVar1;
  }
  (this->field2_0x10).SyncQueue = (FWorkBlock *)0x0;
  return (FWorkBlock *)pFVar1;
}

// PopWipBlock @ 142067a70

FWorkBlock * __thiscall UE::GC::FWorkBlockifier::PopWipBlock(FWorkBlockifier *this)

{
  UObjectBase *this_00;
  code *pcVar1;
  bool bVar2;
  FWorkBlock *pFVar3;
  FWorkBlock *pFVar4;
  longlong lVar5;
  UObject **ppUVar6;
  
  ppUVar6 = this->WipIt;
  this_00 = (UObjectBase *)ppUVar6[-1];
  bVar2 = UObjectBase::IsValidLowLevel(this_00);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastObject->IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x832,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWorkBlock *)(*pcVar1)();
    return pFVar3;
  }
  lVar5 = 0x10;
  if (ppUVar6 <= ppUVar6 + 0x10) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *ppUVar6 = (UObject *)this_00;
      ppUVar6 = ppUVar6 + 1;
    }
  }
  pFVar3 = this->Wip;
  pFVar4 = FPageAllocator::AllocatePage(&GScratchPages,this->WorkerIndex);
  this->Wip = pFVar4;
  pFVar4->Previous = (FWorkBlock *)0x0;
  this->WipIt = this->Wip->Objects;
  return pFVar3;
}

// PushFullBlockAsync @ 14208c890

void __thiscall UE::GC::FWorkBlockifier::PushFullBlockAsync(FWorkBlockifier *this)

{
  int *piVar1;
  FWorkBlock *pFVar2;
  FWorkBlock *this_00;
  FWorkstealingQueue *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject **ppUVar8;
  FWorkBlock *pFVar9;
  uint uVar10;
  longlong lVar11;
  TArray<UE::GC::FWorkBlock_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FWorkBlock *local_28;
  TArrayView<UObject_*,int> local_20;
  
  pFVar2 = this->Wip;
  local_20.ArrayNum = 0x1ef;
  pFVar9 = (FWorkBlock *)(pFVar2->Objects + 0x1ef);
  local_20.DataPtr = pFVar2->Objects;
  ppUVar8 = TArrayView<UObject_*,int>::Last(&local_20,0);
  this_00 = (FWorkBlock *)*ppUVar8;
  bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastObject->IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x832,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar11 = 0x10;
  if (pFVar9 <= pFVar2 + 1) {
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      pFVar9->Previous = this_00;
      pFVar9 = (FWorkBlock *)pFVar9->Objects;
    }
  }
  pFVar3 = (this->field2_0x10).AsyncQueue;
  local_28 = this->Wip;
  uVar10 = (pFVar3->SharedBlocks).Head + 1 & 0xf;
  if (*(longlong *)((pFVar3->SharedBlocks).Slots + uVar10) == 0) {
    *(FWorkBlock **)((pFVar3->SharedBlocks).Slots + uVar10) = local_28;
    (pFVar3->SharedBlocks).Head = (pFVar3->SharedBlocks).Head + 1;
  }
  else {
    pTVar12 = &pFVar3->LocalBlocks;
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar4 + (longlong)(pFVar3->LocalBlocks).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (pFVar3->LocalBlocks).ArrayNum;
    piVar1 = &(pFVar3->LocalBlocks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar12->AllocatorInstance,piVar1);
    }
    (pFVar3->LocalBlocks).ArrayNum = iVar7 + 1;
    *(FWorkBlock **)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28;
  }
  pFVar9 = FPageAllocator::AllocatePage(&GScratchPages,this->WorkerIndex);
  this->Wip = pFVar9;
  pFVar9->Previous = (FWorkBlock *)0x0;
  this->WipIt = this->Wip->Objects;
  return;
}

// PushFullBlockSync @ 14208ca30

void __thiscall UE::GC::FWorkBlockifier::PushFullBlockSync(FWorkBlockifier *this)

{
  FWorkBlock *pFVar1;
  FWorkBlock *this_00;
  code *pcVar2;
  bool bVar3;
  UObject **ppUVar4;
  FWorkBlock *pFVar5;
  longlong lVar6;
  TArrayView<UObject_*,int> local_18;
  
  pFVar1 = this->Wip;
  local_18.ArrayNum = 0x1ef;
  pFVar5 = (FWorkBlock *)(pFVar1->Objects + 0x1ef);
  local_18.DataPtr = pFVar1->Objects;
  ppUVar4 = TArrayView<UObject_*,int>::Last(&local_18,0);
  this_00 = (FWorkBlock *)*ppUVar4;
  bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastObject->IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x832,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = 0x10;
  if (pFVar5 <= pFVar1 + 1) {
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      pFVar5->Previous = this_00;
      pFVar5 = (FWorkBlock *)pFVar5->Objects;
    }
  }
  *(FWorkBlockifier_u_16 *)this->Wip = this->field2_0x10;
  this->field2_0x10 = (FWorkBlockifier_u_16)this->Wip;
  pFVar5 = FPageAllocator::AllocatePage(&GScratchPages,this->WorkerIndex);
  this->Wip = pFVar5;
  pFVar5->Previous = (FWorkBlock *)0x0;
  this->WipIt = this->Wip->Objects;
  return;
}

// ResetAsyncQueue @ 14208e200

void __thiscall UE::GC::FWorkBlockifier::ResetAsyncQueue(FWorkBlockifier *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)((longlong)this->WipIt + (-8 - (longlong)this->Wip) >> 3) == 0) {
    (this->field2_0x10).SyncQueue = (FWorkBlock *)0x0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PartialNum() == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                     ,0x954,L"Queue not empty");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->field2_0x10).SyncQueue = (FWorkBlock *)0x0;
  return;
}

// StealAsyncBlock @ 14208fd90

FWorkBlock * __thiscall UE::GC::FWorkBlockifier::StealAsyncBlock(FWorkBlockifier *this)

{
  code *pcVar1;
  bool bVar2;
  FWorkBlock *pFVar3;
  UObject **ppUVar4;
  longlong lVar5;
  
  ppUVar4 = (this->field2_0x10).SyncQueue[-0x154b8a].Objects + 0x19f;
  lVar5 = (longlong)ppUVar4 / 0x26 + ((longlong)ppUVar4 >> 0x3f);
  lVar5 = (lVar5 >> 5) - (lVar5 >> 0x3f);
  if ((lVar5 < 0) || (0xf < lVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkerPtrDiff >= 0 && WorkerPtrDiff < MaxWorkers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x915,L"FWorkstealingQueue not owned by manager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWorkBlock *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FWorkstealingManager::TrySteal(&GWorkstealingManager,(int)lVar5);
  return pFVar3;
}

