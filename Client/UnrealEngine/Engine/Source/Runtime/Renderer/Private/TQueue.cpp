// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Enqueue @ 144b148b0

bool __thiscall TQueue<unsigned_int,1>::Enqueue(TQueue<unsigned_int,1> *this,uint *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->Item = *param_1;
    pTVar1 = this->Head;
    this->Head = pTVar2;
    pTVar1->NextNode = pTVar2;
    return true;
  }
  return false;
}

// Dequeue @ 145428a60

bool __thiscall
TQueue<TSharedPtr<FRHIGPUBufferReadback,1>,1>::Dequeue
          (TQueue<TSharedPtr<FRHIGPUBufferReadback,1>,1> *this,
          TSharedPtr<FRHIGPUBufferReadback,1> *param_1)

{
  TSharedPtr<FRHIGPUBufferReadback,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TSharedPtr<FRHIGPUBufferReadback,1> local_18;
  
  pTVar2 = this->Tail->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    return false;
  }
  pTVar1 = &pTVar2->Item;
  if (param_1 != pTVar1) {
    param_1->Object = pTVar1->Object;
    pTVar1->Object = (FRHIGPUBufferReadback *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&(pTVar2->Item).SharedReferenceCount);
  }
  pTVar3 = this->Tail;
  this->Tail = pTVar2;
  local_18.Object = (FRHIGPUBufferReadback *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_18) {
    pTVar1->Object = (FRHIGPUBufferReadback *)0x0;
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

