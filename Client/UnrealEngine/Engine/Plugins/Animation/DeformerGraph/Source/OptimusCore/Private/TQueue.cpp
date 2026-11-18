// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// TQueue<FOptimusRoutedConstNodePin,1> @ 14e14ca70

/* WARNING: Type propagation algorithm not settling */

TQueue<FOptimusRoutedConstNodePin,1> * __thiscall
TQueue<FOptimusRoutedConstNodePin,1>::TQueue<FOptimusRoutedConstNodePin,1>
          (TQueue<FOptimusRoutedConstNodePin,1> *this)

{
  FOptimusPinTraversalContext *pFVar1;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x40);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).NodePin = (UOptimusNodePin *)0x0;
    pFVar1 = &(pTVar3->Item).TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    pTVar2 = &(pTVar3->Item).TraversalContext.ReferenceNesting;
    (pTVar2->AllocatorInstance).InlineData[8] = '\0';
    (pTVar2->AllocatorInstance).InlineData[9] = '\0';
    (pTVar2->AllocatorInstance).InlineData[10] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xf] = '\0';
    pTVar2 = &(pTVar3->Item).TraversalContext.ReferenceNesting;
    (pTVar2->AllocatorInstance).InlineData[0x10] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x11] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x12] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x13] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x14] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x15] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x16] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x17] = '\0';
    pTVar2 = &(pTVar3->Item).TraversalContext.ReferenceNesting;
    (pTVar2->AllocatorInstance).InlineData[0x18] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x19] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x1a] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x1b] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x1c] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x1d] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x1e] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0x1f] = '\0';
    (pTVar3->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (pTVar3->Item).TraversalContext.ReferenceNesting.ArrayNum = 0;
    (pTVar3->Item).TraversalContext.ReferenceNesting.ArrayMax = 0;
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).NodePin = (UOptimusNodePin *)0x0;
    (pTVar3->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (pTVar3->Item).TraversalContext.ReferenceNesting.ArrayNum = 0;
    (pTVar3->Item).TraversalContext.ReferenceNesting.ArrayMax = 4;
    this->Tail = pTVar3;
    this->Head = pTVar3;
    return this;
  }
  this->Tail = (TNode *)0x0;
  this->Head = (TNode *)0x0;
  return this;
}

// ~TQueue<FOptimusRoutedConstNode,1> @ 14e15ed90

void __thiscall
TQueue<FOptimusRoutedConstNode,1>::~TQueue<FOptimusRoutedConstNode,1>
          (TQueue<FOptimusRoutedConstNode,1> *this)

{
  TNode *pTVar1;
  ForElementType<IOptimusNodePinRouter_const_*> FVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    FVar2 = (pTVar1->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    ::operator_delete(pTVar1,0x40);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<FOptimusRoutedConstNodePin,1> @ 14e15edf0

void __thiscall
TQueue<FOptimusRoutedConstNodePin,1>::~TQueue<FOptimusRoutedConstNodePin,1>
          (TQueue<FOptimusRoutedConstNodePin,1> *this)

{
  TNode *pTVar1;
  ForElementType<IOptimusNodePinRouter_const_*> FVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    FVar2 = (pTVar1->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    ::operator_delete(pTVar1,0x40);
    pTVar1 = this->Tail;
  }
  return;
}

// Dequeue @ 14e1a0a90

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
TQueue<FOptimusRoutedConstNodePin,1>::Dequeue
          (TQueue<FOptimusRoutedConstNodePin,1> *this,FOptimusRoutedConstNodePin *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  FOptimusPinTraversalContext *pFVar5;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pTVar1 = this->Tail->NextNode;
  if (pTVar1 == (TNode *)0x0) {
    return false;
  }
  FOptimusRoutedConstNodePin::operator=(param_1,&pTVar1->Item);
  pTVar2 = this->Tail;
  this->Tail = pTVar1;
  (pTVar1->Item).NodePin = (UOptimusNodePin *)0x0;
  pFVar5 = &(pTVar1->Item).TraversalContext;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (pFVar5 != (FOptimusPinTraversalContext *)&uStack_50) {
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    pTVar4 = &(pTVar1->Item).TraversalContext.ReferenceNesting;
    (pTVar4->AllocatorInstance).InlineData[8] = '\0';
    (pTVar4->AllocatorInstance).InlineData[9] = '\0';
    (pTVar4->AllocatorInstance).InlineData[10] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0xf] = '\0';
    pTVar4 = &(pTVar1->Item).TraversalContext.ReferenceNesting;
    (pTVar4->AllocatorInstance).InlineData[0x10] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x11] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x12] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x13] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x14] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x15] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x16] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x17] = '\0';
    pTVar4 = &(pTVar1->Item).TraversalContext.ReferenceNesting;
    (pTVar4->AllocatorInstance).InlineData[0x18] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x19] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x1a] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x1b] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x1c] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x1d] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x1e] = '\0';
    (pTVar4->AllocatorInstance).InlineData[0x1f] = '\0';
    FVar3 = (pTVar1->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    (pTVar1->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (pTVar1->Item).TraversalContext.ReferenceNesting.ArrayNum = 0;
    (pTVar1->Item).TraversalContext.ReferenceNesting.ArrayMax = 4;
  }
  if (pTVar2 != (TNode *)0x0) {
    FVar3 = (pTVar2->Item).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    ::operator_delete(pTVar2,0x40);
  }
  return true;
}

// Enqueue @ 14e1a8660

bool __thiscall
TQueue<FOptimusRoutedConstNodePin,1>::Enqueue
          (TQueue<FOptimusRoutedConstNodePin,1> *this,FOptimusRoutedConstNodePin *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x40);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).NodePin = param_1->NodePin;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&(pTVar2->Item).TraversalContext,&param_1->TraversalContext);
    pTVar1 = this->Head;
    this->Head = pTVar2;
    pTVar1->NextNode = pTVar2;
    return true;
  }
  return false;
}

// Enqueue @ 14e1a86e0

bool __thiscall
TQueue<FOptimusRoutedConstNodePin,1>::Enqueue
          (TQueue<FOptimusRoutedConstNodePin,1> *this,FOptimusRoutedConstNodePin *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x40);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).NodePin = param_1->NodePin;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&(pTVar2->Item).TraversalContext,&param_1->TraversalContext);
    pTVar1 = this->Head;
    this->Head = pTVar2;
    pTVar1->NextNode = pTVar2;
    return true;
  }
  return false;
}

