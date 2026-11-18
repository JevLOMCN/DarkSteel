// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// FHugeObjectSendQueue @ 1442f5f50

FHugeObjectSendQueue * __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::FHugeObjectSendQueue
          (FHugeObjectSendQueue *this)

{
  uint uVar1;
  FNetDebugName *pFVar2;
  
  (this->Stats).StartSendingTime = 0;
  (this->Stats).EndSendingTime = 0;
  (this->Stats).StartStallTime = 0;
  this->TraceCollector = (FNetTraceCollector *)0x0;
  pFVar2 = CreatePersistentNetDebugName(L"HugeObjectState",0x10);
  this->DebugName = pFVar2;
  *(undefined8 *)&(this->RootObjectsInTransit).Elements = 0;
  *(undefined8 *)&(this->RootObjectsInTransit).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RootObjectsInTransit).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x34 = 0;
  (this->RootObjectsInTransit).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RootObjectsInTransit).HashSize = 0;
  (this->SendContexts)._padding_ =
       (longlong)
       &___7__TDoubleLinkedList_UFHugeObjectContext_FReplicationWriter_Private_Net_UE____6B_;
  (this->SendContexts).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->SendContexts).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->SendContexts).ListSize = 0;
  uVar1 = FNetTrace::TraceName(this->DebugName->Name);
  this->DebugName->DebugNameId = uVar1;
  return this;
}

// ~FHugeObjectSendQueue @ 1442f7f60

void __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::~FHugeObjectSendQueue
          (FHugeObjectSendQueue *this)

{
  ForElementType<FSetElementId> FVar1;
  
  FNetTrace::DestroyTraceCollector(this->TraceCollector);
  this->TraceCollector = (FNetTraceCollector *)0x0;
  (this->SendContexts)._padding_ =
       (longlong)
       &___7__TDoubleLinkedList_UFHugeObjectContext_FReplicationWriter_Private_Net_UE____6B_;
  TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
            (&this->SendContexts);
  (this->RootObjectsInTransit).HashSize = 0;
  FVar1 = (this->RootObjectsInTransit).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RootObjectsInTransit).Elements);
  return;
}

// AckObjects @ 1442fa5b0

void __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::AckObjects
          (FHugeObjectSendQueue *this,
          TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TDoubleLinkedListNode *pTVar5;
  FNetBlob *this_00;
  TDoubleLinkedListNode *pTVar6;
  code *pcVar7;
  TDoubleLinkedListNode *this_01;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  
  this_01 = (this->SendContexts).HeadNode;
  while (this_01 != (TDoubleLinkedListNode *)0x0) {
    pFVar4 = (this_01->Value).Blobs.AllocatorInstance.Data;
    iVar2 = (this_01->Value).Blobs.ArrayNum;
    pTVar5 = this_01->NextNode;
    pFVar9 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this_01->Value).Blobs.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<UE::Net::FNetBlob>,int,1>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar4) break;
      pFVar1 = pFVar9 + -8;
      pFVar9 = pFVar9 + -8;
      if (*(longlong *)pFVar1 != 0) {
        uVar3 = *(uint *)(*(longlong *)pFVar1 + 0x28);
        if (uVar3 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                             ,0x262,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          if (1 < uVar3) goto LAB_1442fa7c6;
          this_00 = *(FNetBlob **)pFVar9;
          if (this_00 != (FNetBlob *)0x0) {
            *(undefined8 *)pFVar9 = 0;
            FNetBlob::Release(this_00);
          }
        }
      }
    }
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this_01);
    local_res18[0] = (this_01->Value).RootObjectInternalIndex;
    if (*(int *)&(this->RootObjectsInTransit).Elements.field_0x8 !=
        *(int *)&(this->RootObjectsInTransit).Elements.field_0x34) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      RemoveImpl<unsigned_int>(&this->RootObjectsInTransit,local_res18[0],local_res18);
    }
    if ((this->SendContexts).ListSize == 1) {
      TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
                (&this->SendContexts);
    }
    else {
      pTVar6 = (this->SendContexts).HeadNode;
      if (this_01 == pTVar6) {
        pTVar6 = pTVar6->NextNode;
        (this->SendContexts).HeadNode = pTVar6;
        pTVar6->PrevNode = (TDoubleLinkedListNode *)0x0;
      }
      else {
        pTVar6 = (this->SendContexts).TailNode;
        if (this_01 == pTVar6) {
          pTVar6 = pTVar6->PrevNode;
          (this->SendContexts).TailNode = pTVar6;
          pTVar6->NextNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          this_01->NextNode->PrevNode = this_01->PrevNode;
          this_01->PrevNode->NextNode = this_01->NextNode;
        }
      }
      FHugeObjectContext::~FHugeObjectContext(&this_01->Value);
      ::operator_delete(this_01,0x600);
      (**(code **)((this->SendContexts)._padding_ + 8))(&this->SendContexts);
    }
    this_01 = pTVar5;
    if ((((this->SendContexts).ListSize == 0) !=
         (*(int *)&(this->RootObjectsInTransit).Elements.field_0x8 ==
         *(int *)&(this->RootObjectsInTransit).Elements.field_0x34)) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7868239365963518299>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x115b,"SendContexts.IsEmpty() == RootObjectsInTransit.IsEmpty()"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
LAB_1442fa7c6:
  if (*(int *)&(this->RootObjectsInTransit).Elements.field_0x8 ==
      *(int *)&(this->RootObjectsInTransit).Elements.field_0x34) {
    (this->Stats).StartSendingTime = 0;
    (this->Stats).EndSendingTime = 0;
    (this->Stats).StartStallTime = 0;
  }
  return;
}

// EnqueueHugeObject @ 144301da0

bool __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::EnqueueHugeObject
          (FHugeObjectSendQueue *this,FHugeObjectContext *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FHugeObjectContext *local_res8;
  
  iVar4 = *(int *)&(this->RootObjectsInTransit).Elements.field_0x8;
  iVar2 = *(int *)&(this->RootObjectsInTransit).Elements.field_0x34;
  iVar6 = 1;
  if (1 < GReplicationWriterMaxHugeObjectsInTransit) {
    iVar6 = GReplicationWriterMaxHugeObjectsInTransit;
  }
  if (iVar6 < iVar4 - iVar2) {
    return false;
  }
  if (iVar4 != iVar2) {
    FVar5 = (this->RootObjectsInTransit).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->RootObjectsInTransit).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->RootObjectsInTransit).HashSize - 1U & param_1->RootObjectInternalIndex)
                    * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->RootObjectsInTransit).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0xc;
        if (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) == param_1->RootObjectInternalIndex) {
          if (lVar1 != 0) {
            local_res8 = param_1;
            `UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::EnqueueHugeObject'::__l8::
            <lambda_1>::operator()(&local_res8);
            return false;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 4);
      } while (iVar4 != -1);
    }
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&this->RootObjectsInTransit,(uint *)&local_res8,(bool *)param_1);
  TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::AddTail
            (&this->SendContexts,param_1);
  return true;
}

// FreeContexts @ 144302bc0

void __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::FreeContexts
          (FHugeObjectSendQueue *this,
          TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
          *param_1)

{
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  int iVar2;
  TDoubleLinkedListNode *pTVar3;
  bool bVar4;
  
  for (pTVar3 = (this->SendContexts).HeadNode; pTVar3 != (TDoubleLinkedListNode *)0x0;
      pTVar3 = pTVar3->NextNode) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  }
  TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
            (&this->SendContexts);
  this_00 = &this->RootObjectsInTransit;
  bVar4 = 1 < (this->RootObjectsInTransit).HashSize;
  if (!bVar4) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar1 = &(this->RootObjectsInTransit).Elements.field_0xc;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->RootObjectsInTransit).Elements.field_0x2c;
  *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->RootObjectsInTransit).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->RootObjectsInTransit).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->RootObjectsInTransit).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// GetRootObjectInternalIndexForTrace @ 1443048e0

uint __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::GetRootObjectInternalIndexForTrace
          (FHugeObjectSendQueue *this)

{
  TDoubleLinkedListNode *pTVar1;
  
  pTVar1 = (this->SendContexts).TailNode;
  if (pTVar1 != (TDoubleLinkedListNode *)0x0) {
    return (pTVar1->Value).RootObjectInternalIndex;
  }
  return 0;
}

// IsEmpty @ 144308130

bool __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::IsEmpty(FHugeObjectSendQueue *this)

{
  return *(int *)&(this->RootObjectsInTransit).Elements.field_0x8 ==
         *(int *)&(this->RootObjectsInTransit).Elements.field_0x34;
}

// IsFull @ 1443089e0

bool __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::IsFull(FHugeObjectSendQueue *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < GReplicationWriterMaxHugeObjectsInTransit) {
    iVar1 = GReplicationWriterMaxHugeObjectsInTransit;
  }
  return iVar1 < *(int *)&(this->RootObjectsInTransit).Elements.field_0x8 -
                 *(int *)&(this->RootObjectsInTransit).Elements.field_0x34;
}

// IsObjectInQueue @ 144308b30

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::IsObjectInQueue
          (FHugeObjectSendQueue *this,uint param_1,bool param_2)

{
  longlong lVar1;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar2;
  longlong lVar3;
  TDoubleLinkedListNode *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar10;
  
  if (*(int *)&(this->RootObjectsInTransit).Elements.field_0x8 !=
      *(int *)&(this->RootObjectsInTransit).Elements.field_0x34) {
    FVar9 = (this->RootObjectsInTransit).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->RootObjectsInTransit).Hash;
    }
    iVar8 = *(int *)((longlong)FVar9 +
                    (ulonglong)((this->RootObjectsInTransit).HashSize - 1U & param_1) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->RootObjectsInTransit).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar8 * 0xc;
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == param_1) {
          if (lVar1 != 0) {
            return true;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 4);
      } while (iVar8 != -1);
    }
    if (param_2) {
      for (pTVar4 = (this->SendContexts).HeadNode; pTVar4 != (TDoubleLinkedListNode *)0x0;
          pTVar4 = pTVar4->NextNode) {
        FVar10 = (pTVar4->Value).BatchRecord.ObjectReplicationRecords.AllocatorInstance.
                 SecondaryData;
        iVar8 = (pTVar4->Value).BatchRecord.ObjectReplicationRecords.ArrayNum;
        if (FVar10 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
          FVar10 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
                   &(pTVar4->Value).BatchRecord;
        }
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar2 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
                ((longlong)FVar10 + (longlong)iVar8 * 0x18);
        for (; FVar10 != FVar2;
            FVar10 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
                     ((longlong)FVar10 + 0x18)) {
          if (param_1 == (*(uint *)((longlong)FVar10 + 8) & 0xfffff)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// NumRootObjectsInTransit @ 144309ef0

uint __thiscall
UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::NumRootObjectsInTransit
          (FHugeObjectSendQueue *this)

{
  return *(int *)&(this->RootObjectsInTransit).Elements.field_0x8 -
         *(int *)&(this->RootObjectsInTransit).Elements.field_0x34;
}

// operator() @ 1504ba710

bool __thiscall
`UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::EnqueueHugeObject'::__l8::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963518206>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963518206>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

