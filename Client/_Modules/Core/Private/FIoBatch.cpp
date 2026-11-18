// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FIoBatch @ 1417a1810

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoBatch * __thiscall FIoBatch::FIoBatch(FIoBatch *this,FIoDispatcherImpl *param_1)

{
  this->Dispatcher = param_1;
  this->HeadRequest = (FIoRequestImpl *)0x0;
  this->TailRequest = (FIoRequestImpl *)0x0;
  return this;
}

// FIoBatch @ 1417a1830

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoBatch * __thiscall FIoBatch::FIoBatch(FIoBatch *this,FIoBatch *param_1)

{
  this->HeadRequest = (FIoRequestImpl *)0x0;
  this->TailRequest = (FIoRequestImpl *)0x0;
  this->Dispatcher = param_1->Dispatcher;
  this->HeadRequest = param_1->HeadRequest;
  this->TailRequest = param_1->TailRequest;
  param_1->HeadRequest = (FIoRequestImpl *)0x0;
  param_1->TailRequest = (FIoRequestImpl *)0x0;
  return this;
}

// FIoBatch @ 1417a1870

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoBatch * __thiscall FIoBatch::FIoBatch(FIoBatch *this)

{
  if (GIoDispatcher.Ptr != (FIoDispatcher *)0x0) {
    this->Dispatcher = (GIoDispatcher.Ptr)->Impl;
    this->HeadRequest = (FIoRequestImpl *)0x0;
    this->TailRequest = (FIoRequestImpl *)0x0;
    return this;
  }
  this->HeadRequest = (FIoRequestImpl *)0x0;
  this->Dispatcher = (FIoDispatcherImpl *)0x0;
  this->TailRequest = (FIoRequestImpl *)0x0;
  return this;
}

// ~FIoBatch @ 1417a6cd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoBatch::~FIoBatch(FIoBatch *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<unsigned_int> TVar2;
  int iVar3;
  TAtomic<int> TVar4;
  FElement *pFVar5;
  FIoRequestAllocator *pFVar6;
  uchar *puVar7;
  BufCore *this_00;
  FBlock *pFVar8;
  FElement *pFVar9;
  FBlock *pFVar10;
  TAtomic<unsigned_int> *pTVar11;
  uchar *puVar12;
  
  pFVar5 = (FElement *)this->HeadRequest;
  while( true ) {
    do {
      pFVar9 = pFVar5;
      if (pFVar9 == (FElement *)0x0) {
        return;
      }
      pFVar5 = *(FElement **)((longlong)&pFVar9->Buffer + 0x28);
      LOCK();
      pTVar11 = (TAtomic<unsigned_int> *)((longlong)&pFVar9->Buffer + 0xd0);
      TVar2 = *pTVar11;
      *pTVar11 = (TAtomic<unsigned_int>)((int)*pTVar11 + -1);
      UNLOCK();
    } while (TVar2 != (TAtomic<unsigned_int>)0x1);
    pFVar6 = *(FIoRequestAllocator **)((longlong)&pFVar9->Buffer + 0x70);
    if (*(longlong *)((pFVar9->Buffer).Pad + 0xa0) != 0) {
      puVar7 = *(uchar **)((pFVar9->Buffer).Pad + 200);
      puVar12 = (pFVar9->Buffer).Pad + 0xb0;
      if (puVar7 != (uchar *)0x0) {
        puVar12 = puVar7;
      }
      (**(code **)(*(longlong *)puVar12 + 0x10))();
    }
    if (((pFVar9->Buffer).Pad[0x98] != '\0') &&
       (this_00 = *(BufCore **)((pFVar9->Buffer).Pad + 0x90), this_00 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar1 = &this_00->NumRefs;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
    lpCriticalSection = &(pFVar6->BlockAllocator).CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) break;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar9->Next = (pFVar6->BlockAllocator).NextFree;
    piVar1 = &(pFVar6->BlockAllocator).NumElements;
    *piVar1 = *piVar1 + -1;
    (pFVar6->BlockAllocator).NextFree = pFVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    TVar4 = pFVar6->RefCount;
    pFVar6->RefCount = (TAtomic<int>)((int)pFVar6->RefCount + -1);
    UNLOCK();
    if (TVar4 == (TAtomic<int>)0x1) {
      pFVar10 = (pFVar6->BlockAllocator).Blocks;
      while (pFVar10 != (FBlock *)0x0) {
        pFVar8 = pFVar10->Next;
        ::operator_delete(pFVar10,0xf0010);
        pFVar10 = pFVar8;
      }
      (pFVar6->BlockAllocator).Blocks = (FBlock *)0x0;
      (pFVar6->BlockAllocator).NextFree = (FElement *)0x0;
      (pFVar6->BlockAllocator).NumElements = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      ::operator_delete(pFVar6,0x48);
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator= @ 1417a7df0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoBatch * __thiscall FIoBatch::operator=(FIoBatch *this,FIoBatch *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<unsigned_int> *pTVar2;
  TAtomic<unsigned_int> TVar3;
  int iVar4;
  TAtomic<int> TVar5;
  FElement *pFVar6;
  FIoRequestAllocator *pFVar7;
  uchar *puVar8;
  BufCore *this_00;
  FBlock *pFVar9;
  FElement *pFVar10;
  FBlock *pFVar11;
  uchar *puVar12;
  
  if (param_1 != this) {
    pFVar6 = (FElement *)this->HeadRequest;
    while (pFVar10 = pFVar6, pFVar10 != (FElement *)0x0) {
      pFVar6 = *(FElement **)((longlong)&pFVar10->Buffer + 0x28);
      LOCK();
      pTVar2 = (TAtomic<unsigned_int> *)((longlong)&pFVar10->Buffer + 0xd0);
      TVar3 = *pTVar2;
      *pTVar2 = (TAtomic<unsigned_int>)((int)*pTVar2 + -1);
      UNLOCK();
      if (TVar3 == (TAtomic<unsigned_int>)0x1) {
        pFVar7 = *(FIoRequestAllocator **)((longlong)&pFVar10->Buffer + 0x70);
        if (*(longlong *)((pFVar10->Buffer).Pad + 0xa0) != 0) {
          puVar8 = *(uchar **)((pFVar10->Buffer).Pad + 200);
          puVar12 = (pFVar10->Buffer).Pad + 0xb0;
          if (puVar8 != (uchar *)0x0) {
            puVar12 = puVar8;
          }
          (**(code **)(*(longlong *)puVar12 + 0x10))();
        }
        if (((pFVar10->Buffer).Pad[0x98] != '\0') &&
           (this_00 = *(BufCore **)((pFVar10->Buffer).Pad + 0x90), this_00 != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(this_00);
          LOCK();
          piVar1 = &this_00->NumRefs;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore(this_00);
            ::operator_delete(this_00,0x20);
          }
        }
        lpCriticalSection = &(pFVar7->BlockAllocator).CriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar10->Next = (pFVar7->BlockAllocator).NextFree;
        piVar1 = &(pFVar7->BlockAllocator).NumElements;
        *piVar1 = *piVar1 + -1;
        (pFVar7->BlockAllocator).NextFree = pFVar10;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        LOCK();
        TVar5 = pFVar7->RefCount;
        pFVar7->RefCount = (TAtomic<int>)((int)pFVar7->RefCount + -1);
        UNLOCK();
        if (TVar5 == (TAtomic<int>)0x1) {
          pFVar11 = (pFVar7->BlockAllocator).Blocks;
          while (pFVar11 != (FBlock *)0x0) {
            pFVar9 = pFVar11->Next;
            ::operator_delete(pFVar11,0xf0010);
            pFVar11 = pFVar9;
          }
          (pFVar7->BlockAllocator).Blocks = (FBlock *)0x0;
          (pFVar7->BlockAllocator).NextFree = (FElement *)0x0;
          (pFVar7->BlockAllocator).NumElements = 0;
          DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          ::operator_delete(pFVar7,0x48);
        }
      }
    }
    this->Dispatcher = param_1->Dispatcher;
    this->HeadRequest = param_1->HeadRequest;
    this->TailRequest = param_1->TailRequest;
    param_1->HeadRequest = (FIoRequestImpl *)0x0;
    param_1->TailRequest = (FIoRequestImpl *)0x0;
  }
  return this;
}

// Issue @ 1417decf0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoBatch::Issue(FIoBatch *this)

{
  FIoDispatcherImpl::IssueBatchInternal(this->Dispatcher,this,(FIoBatchImpl *)0x0);
  return;
}

// IssueAndDispatchSubsequents @ 1417ded10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoBatch::IssueAndDispatchSubsequents(FIoBatch *this,TRefCountPtr<FBaseGraphTask> param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FIoDispatcherImpl *this_00;
  FBaseGraphTask *pFVar4;
  undefined8 *puVar5;
  FIoBatchImpl *pFVar6;
  TRefCountPtr<FBaseGraphTask> *pTVar7;
  FBaseGraphTask *pFVar8;
  longlong local_28 [2];
  
  this_00 = this->Dispatcher;
                    /* WARNING: Load size is inaccurate */
  pFVar8 = *param_1.Reference;
  *(undefined8 *)param_1.Reference = 0;
  pFVar6 = FIoDispatcherImpl::AllocBatch(this_00);
  pTVar7 = &pFVar6->GraphEvent;
  if (pTVar7 != (TRefCountPtr<FBaseGraphTask> *)local_28) {
    pFVar4 = pTVar7->Reference;
    pTVar7->Reference = pFVar8;
    pFVar8 = (FBaseGraphTask *)0x0;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar4->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        FIoDispatcherImpl::IssueBatchInternal(this_00,this,pFVar6);
        goto LAB_1417dedb8;
      }
    }
  }
  FIoDispatcherImpl::IssueBatchInternal(this_00,this,pFVar6);
  if (pFVar8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar8->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
    }
  }
LAB_1417dedb8:
  puVar5 = *(undefined8 **)param_1.Reference;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 6);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return;
}

// IssueAndTriggerEvent @ 1417dee00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoBatch::IssueAndTriggerEvent(FIoBatch *this,FEvent *param_1)

{
  FIoDispatcherImpl *this_00;
  FIoBatchImpl *pFVar1;
  
  this_00 = this->Dispatcher;
  pFVar1 = FIoDispatcherImpl::AllocBatch(this_00);
  pFVar1->Event = param_1;
  FIoDispatcherImpl::IssueBatchInternal(this_00,this,pFVar1);
  return;
}

// IssueWithCallback @ 1417df240

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoBatch::IssueWithCallback(FIoBatch *this,TFunction<void___cdecl(void)> *param_1)

{
  FIoDispatcherImpl *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FIoBatchImpl *pFVar8;
  
  this_00 = this->Dispatcher;
  pFVar8 = FIoDispatcherImpl::AllocBatch(this_00);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&pFVar8->Callback;
  uVar3 = *(undefined8 *)&(pFVar8->Callback).field_0x8;
  uVar4 = *(undefined8 *)&(pFVar8->Callback).field_0x10;
  uVar5 = *(undefined8 *)&(pFVar8->Callback).field_0x18;
  uVar6 = *(undefined8 *)&(pFVar8->Callback).field_0x20;
  uVar7 = *(undefined8 *)&(pFVar8->Callback).field_0x28;
  *(undefined8 *)&pFVar8->Callback = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar8->Callback).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar8->Callback).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar8->Callback).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(pFVar8->Callback).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(pFVar8->Callback).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  FIoDispatcherImpl::IssueBatchInternal(this_00,this,pFVar8);
  return;
}

// Read @ 1417efb90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoRequest __thiscall
FIoBatch::Read(FIoBatch *this,FIoChunkId *param_1,FIoReadOptions *param_2,int param_3)

{
  FIoRequestImpl *pFVar1;
  undefined4 in_register_0000008c;
  int in_stack_00000028;
  
  pFVar1 = ReadInternal(this,(FIoChunkId *)param_2,
                        (FIoReadOptions *)CONCAT44(in_register_0000008c,param_3),in_stack_00000028);
  *(FIoRequestImpl **)param_1->Id = pFVar1;
  if (pFVar1 != (FIoRequestImpl *)0x0) {
    LOCK();
    pFVar1->RefCount = (TAtomic<unsigned_int>)((int)pFVar1->RefCount + 1);
    UNLOCK();
  }
  return (FIoRequest)(FIoRequestImpl *)param_1;
}

// ReadInternal @ 1417f3770

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoRequestImpl * __thiscall
FIoBatch::ReadInternal(FIoBatch *this,FIoChunkId *param_1,FIoReadOptions *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FIoRequestImpl *pFVar3;
  FIoReadOptions local_28;
  
  local_28.RequestedOffset = param_2->RequestedOffset;
  local_28.RequestedSize = param_2->RequestedSize;
  local_28.TargetVa = param_2->TargetVa;
  local_28.Flags = param_2->Flags;
  local_28._28_4_ = *(undefined4 *)&param_2->field_0x1c;
  pFVar3 = FIoRequestAllocator::AllocRequest(this->Dispatcher->RequestAllocator,param_1,&local_28);
  pFVar3->Priority = param_3;
  LOCK();
  pFVar3->RefCount = (TAtomic<unsigned_int>)((int)pFVar3->RefCount + 1);
  UNLOCK();
  if (this->HeadRequest == (FIoRequestImpl *)0x0) {
    if (this->TailRequest != (FIoRequestImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TailRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                         ,0x474,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FIoRequestImpl *)(*pcVar1)();
        return pFVar3;
      }
    }
    this->HeadRequest = pFVar3;
  }
  else {
    if (this->TailRequest == (FIoRequestImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TailRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                         ,0x479,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FIoRequestImpl *)(*pcVar1)();
        return pFVar3;
      }
    }
    this->TailRequest->NextRequest = pFVar3;
  }
  this->TailRequest = pFVar3;
  FIoStoreTrace::RequestCreate(this,pFVar3);
  return pFVar3;
}

// ReadWithCallback @ 1417f3850

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoRequest __thiscall
FIoBatch::ReadWithCallback
          (FIoBatch *this,FIoChunkId *param_1,FIoReadOptions *param_2,int param_3,
          TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FIoRequestImpl *pFVar8;
  undefined4 in_register_0000008c;
  undefined8 *in_stack_00000030;
  
  pFVar8 = ReadInternal(this,(FIoChunkId *)param_2,
                        (FIoReadOptions *)CONCAT44(in_register_0000008c,param_3),(int)param_4);
  *(FIoRequestImpl **)param_1->Id = pFVar8;
  uVar1 = *(undefined8 *)&pFVar8->Callback;
  uVar2 = *(undefined8 *)&(pFVar8->Callback).field_0x8;
  uVar3 = in_stack_00000030[1];
  uVar4 = *(undefined8 *)&(pFVar8->Callback).field_0x10;
  uVar5 = *(undefined8 *)&(pFVar8->Callback).field_0x18;
  uVar6 = *(undefined8 *)&(pFVar8->Callback).field_0x20;
  uVar7 = *(undefined8 *)&(pFVar8->Callback).field_0x28;
  *(undefined8 *)&pFVar8->Callback = *in_stack_00000030;
  *(undefined8 *)&(pFVar8->Callback).field_0x8 = uVar3;
  uVar3 = in_stack_00000030[3];
  *(undefined8 *)&(pFVar8->Callback).field_0x10 = in_stack_00000030[2];
  *(undefined8 *)&(pFVar8->Callback).field_0x18 = uVar3;
  uVar3 = in_stack_00000030[5];
  *(undefined8 *)&(pFVar8->Callback).field_0x20 = in_stack_00000030[4];
  *(undefined8 *)&(pFVar8->Callback).field_0x28 = uVar3;
  *in_stack_00000030 = uVar1;
  in_stack_00000030[1] = uVar2;
  in_stack_00000030[2] = uVar4;
  in_stack_00000030[3] = uVar5;
  in_stack_00000030[4] = uVar6;
  in_stack_00000030[5] = uVar7;
  if (pFVar8 != (FIoRequestImpl *)0x0) {
    LOCK();
    pFVar8->RefCount = (TAtomic<unsigned_int>)((int)pFVar8->RefCount + 1);
    UNLOCK();
  }
  return (FIoRequest)(FIoRequestImpl *)param_1;
}

