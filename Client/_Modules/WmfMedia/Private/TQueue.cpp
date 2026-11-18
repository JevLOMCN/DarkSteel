// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 4

// TQueue<WmfMediaDecoder::DataBuffer,1> @ 14ea950a0

TQueue<WmfMediaDecoder::DataBuffer,1> * __thiscall
TQueue<WmfMediaDecoder::DataBuffer,1>::TQueue<WmfMediaDecoder::DataBuffer,1>
          (TQueue<WmfMediaDecoder::DataBuffer,1> *this)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Color.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).Color.ArrayNum = 0;
    (pTVar1->Item).Color.ArrayMax = 0;
    (pTVar1->Item).Alpha.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).Alpha.ArrayNum = 0;
    (pTVar1->Item).Alpha.ArrayMax = 0;
    (pTVar1->Item).TimeStamp = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Color.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).Color.ArrayNum = 0;
    (pTVar1->Item).Color.ArrayMax = 0;
    (pTVar1->Item).Alpha.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).Alpha.ArrayNum = 0;
    (pTVar1->Item).Alpha.ArrayMax = 0;
    this->Tail = pTVar1;
    this->Head = pTVar1;
    return this;
  }
  this->Tail = (TNode *)0x0;
  this->Head = (TNode *)0x0;
  return this;
}

// ~TQueue<WmfMediaDecoder::DataBuffer,1> @ 14ea96a80

void __thiscall
TQueue<WmfMediaDecoder::DataBuffer,1>::~TQueue<WmfMediaDecoder::DataBuffer,1>
          (TQueue<WmfMediaDecoder::DataBuffer,1> *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Alpha.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pTVar1->Item).Color.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x30);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<enum_EMediaEvent,1> @ 14ea96af0

void __thiscall TQueue<enum_EMediaEvent,1>::~TQueue<enum_EMediaEvent,1>(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = *puVar1;
    ::operator_delete(puVar1,0x10);
    puVar1 = *(undefined8 **)((longlong)this + 8);
  }
  return;
}

// Empty @ 14eaa93f0

void __thiscall
TQueue<WmfMediaDecoder::DataBuffer,1>::Empty(TQueue<WmfMediaDecoder::DataBuffer,1> *this)

{
  DataBuffer *pDVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  while (pTVar3 = this->Tail->NextNode, pTVar3 != (TNode *)0x0) {
    pTVar4 = this->Tail;
    this->Tail = pTVar3;
    local_28 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    pDVar1 = &pTVar3->Item;
    if (pDVar1 != (DataBuffer *)&local_48) {
      pFVar5 = (pDVar1->Color).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pDVar1->Color).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar3->Item).Color.ArrayNum = 0;
      (pTVar3->Item).Color.ArrayMax = 0;
    }
    uStack_40 = 0;
    local_48 = 0;
    pTVar2 = &(pTVar3->Item).Alpha;
    if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_38) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar3->Item).Alpha.ArrayNum = 0;
      (pTVar3->Item).Alpha.ArrayMax = 0;
    }
    (pTVar3->Item).TimeStamp = 0;
    if (pTVar4 != (TNode *)0x0) {
      pFVar5 = (pTVar4->Item).Alpha.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pTVar4->Item).Color.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      ::operator_delete(pTVar4,0x30);
    }
  }
  return;
}

