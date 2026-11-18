// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Dequeue @ 141820390

bool __thiscall
TQueue<TSharedPtr<IAutomationNetworkCommand,1>,1>::Dequeue
          (TQueue<TSharedPtr<IAutomationNetworkCommand,1>,1> *this,
          TSharedPtr<IAutomationNetworkCommand,1> *param_1)

{
  TSharedPtr<IAutomationNetworkCommand,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TSharedPtr<IAutomationNetworkCommand,1> local_18;
  
  pTVar2 = this->Tail->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    return false;
  }
  pTVar1 = &pTVar2->Item;
  if (param_1 != pTVar1) {
    param_1->Object = pTVar1->Object;
    pTVar1->Object = (IAutomationNetworkCommand *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&(pTVar2->Item).SharedReferenceCount);
  }
  pTVar3 = this->Tail;
  this->Tail = pTVar2;
  local_18.Object = (IAutomationNetworkCommand *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_18) {
    pTVar1->Object = (IAutomationNetworkCommand *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pTVar2->Item).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar3 != (TNode *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
  }
  return true;
}

// ~TQueue<FCsvCaptureCommand,1> @ 141919e90

void __thiscall
TQueue<FCsvCaptureCommand,1>::~TQueue<FCsvCaptureCommand,1>(TQueue<FCsvCaptureCommand,1> *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(pTVar1->Item).Future.field_0x8);
    pFVar2 = (pTVar1->Item).Filename.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pTVar1->Item).DestinationFolder.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x58);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,1> @ 141919f10

void __thiscall
TQueue<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,1>
::
~TQueue<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,1>
          (TQueue<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,1>
           *this)

{
  TNode *pTVar1;
  void *pvVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    *(undefined4 *)&(pTVar1->Item).field_0x48 = 0;
    pvVar2 = *(void **)&(pTVar1->Item).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar1->Item);
    ::operator_delete(pTVar1,0x58);
    pTVar1 = this->Tail;
  }
  return;
}

// Dequeue @ 141932c40

bool __thiscall
TQueue<FCsvCaptureCommand,1>::Dequeue
          (TQueue<FCsvCaptureCommand,1> *this,FCsvCaptureCommand *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_58 [72];
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar1 = this->Tail->NextNode;
  if (pTVar1 == (TNode *)0x0) {
    return false;
  }
  FCsvCaptureCommand::operator=(param_1,&pTVar1->Item);
  pTVar2 = this->Tail;
  this->Tail = pTVar1;
  local_58._16_8_ = (FScriptContainerElement *)0x0;
  local_58._24_4_ = 0;
  local_58._28_4_ = 0;
  local_58._32_8_ = (FScriptContainerElement *)0x0;
  local_58._40_4_ = 0;
  local_58._44_4_ = 0;
  local_58._64_8_ = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  local_58[0] = Count;
  local_58._4_4_ = 0xffffffff;
  local_58._8_4_ = 0xffffffff;
  FCsvCaptureCommand::operator=(&pTVar1->Item,(FCsvCaptureCommand *)local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  if ((FScriptContainerElement *)local_58._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._32_8_);
  }
  if ((FScriptContainerElement *)local_58._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if (pTVar2 != (TNode *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(pTVar2->Item).Future.field_0x8);
    pFVar3 = (pTVar2->Item).Filename.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pTVar2->Item).DestinationFolder.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar2,0x58);
  }
  return true;
}

// Enqueue @ 141937ab0

bool __thiscall
TQueue<FCsvCaptureCommand,1>::Enqueue
          (TQueue<FCsvCaptureCommand,1> *this,FCsvCaptureCommand *param_1)

{
  uint uVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x58);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).CommandType = param_1->CommandType;
    (pTVar3->Item).FrameRequested = param_1->FrameRequested;
    uVar1 = param_1->Value;
    (pTVar3->Item).DestinationFolder.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Item).Value = uVar1;
    (pTVar3->Item).DestinationFolder.Data.AllocatorInstance.Data =
         (param_1->DestinationFolder).Data.AllocatorInstance.Data;
    (param_1->DestinationFolder).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Item).DestinationFolder.Data.ArrayNum = (param_1->DestinationFolder).Data.ArrayNum;
    (pTVar3->Item).DestinationFolder.Data.ArrayMax = (param_1->DestinationFolder).Data.ArrayMax;
    (param_1->DestinationFolder).Data.ArrayNum = 0;
    (param_1->DestinationFolder).Data.ArrayMax = 0;
    (pTVar3->Item).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Item).Filename.Data.AllocatorInstance.Data =
         (param_1->Filename).Data.AllocatorInstance.Data;
    (param_1->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Item).Filename.Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
    (pTVar3->Item).Filename.Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
    (param_1->Filename).Data.ArrayNum = 0;
    (param_1->Filename).Data.ArrayMax = 0;
    (pTVar3->Item).Flags = param_1->Flags;
    (pTVar3->Item).Completion = param_1->Completion;
    *(undefined8 *)&(pTVar3->Item).Future = *(undefined8 *)&param_1->Future;
    *(undefined8 *)&(pTVar3->Item).Future.field_0x8 = *(undefined8 *)&(param_1->Future).field_0x8;
    *(undefined8 *)&(param_1->Future).field_0x8 = 0;
    *(undefined8 *)&param_1->Future = 0;
    pTVar2 = this->Head;
    this->Head = pTVar3;
    pTVar2->NextNode = pTVar3;
    return true;
  }
  return false;
}

// Peek @ 14195ab00

bool __thiscall
TQueue<FCsvCaptureCommand,1>::Peek(TQueue<FCsvCaptureCommand,1> *this,FCsvCaptureCommand *param_1)

{
  TNode *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this->Tail->NextNode == (TNode *)0x0) {
    return false;
  }
  pTVar1 = this->Tail->NextNode;
  param_1->CommandType = (pTVar1->Item).CommandType;
  param_1->FrameRequested = (pTVar1->Item).FrameRequested;
  param_1->Value = (pTVar1->Item).Value;
  ::FString::operator=(&param_1->DestinationFolder,&(pTVar1->Item).DestinationFolder);
  ::FString::operator=(&param_1->Filename,&(pTVar1->Item).Filename);
  param_1->Flags = (pTVar1->Item).Flags;
  param_1->Completion = (pTVar1->Item).Completion;
  lVar2 = *(longlong *)&(pTVar1->Item).Future.field_0x8;
  uVar3 = *(undefined8 *)&(pTVar1->Item).Future;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&(param_1->Future).field_0x8;
  *(undefined8 *)&param_1->Future = uVar3;
  *(longlong *)&(param_1->Future).field_0x8 = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return true;
}

