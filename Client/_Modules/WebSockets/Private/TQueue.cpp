// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 3

// ~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1> @ 14b3f89c0

void __thiscall
TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>::
~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>
          (TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>
           *this)

{
  TNode *pTVar1;
  FLwsReceiveBufferBinary *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Ptr;
    if (pFVar2 != (FLwsReceiveBufferBinary *)0x0) {
      pFVar3 = (pFVar2->Payload).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x18);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>,1> @ 14b3f8a40

void __thiscall
TQueue<TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>,1>
::
~TQueue<TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>,1>
          (TQueue<TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>,1>
           *this)

{
  TNode *pTVar1;
  FLwsReceiveBufferBinaryFragment *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Ptr;
    if (pFVar2 != (FLwsReceiveBufferBinaryFragment *)0x0) {
      pFVar3 = (pFVar2->Payload).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x18);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1> @ 14b3f8ac0

void __thiscall
TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>::
~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>
          (TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1> *this)

{
  TNode *pTVar1;
  FLwsReceiveBufferText *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Ptr;
    if (pFVar2 != (FLwsReceiveBufferText *)0x0) {
      pFVar3 = (pFVar2->Text).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x10);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

