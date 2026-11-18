// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// ~TQueue<TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>,0> @ 1426681a0

void __thiscall
TQueue<TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>,0>::
~TQueue<TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>,0>
          (TQueue<TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>,0> *this)

{
  TNode *pTVar1;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar1->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar1,0x18);
    pTVar1 = this->Tail;
  }
  return;
}

// Enqueue @ 14268a010

bool __thiscall
TQueue<TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>,0>::Enqueue
          (TQueue<TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1>,0> *this,
          TSharedPtr<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,1> *param_1)

{
  TNode *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TNode *)0x0) {
    pTVar3 = (TNode *)0x0;
  }
  else {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Object = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    (pTVar3->Item).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (pTVar3 == (TNode *)0x0) {
    return false;
  }
  if (((ulonglong)this & 7) != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
  }
  LOCK();
  pTVar1 = this->Head;
  this->Head = pTVar3;
  UNLOCK();
  if (((ulonglong)pTVar1 & 7) != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
  }
  LOCK();
  pTVar1->NextNode = pTVar3;
  UNLOCK();
  return true;
}

