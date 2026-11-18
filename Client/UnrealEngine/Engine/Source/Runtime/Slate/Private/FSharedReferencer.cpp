// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FSharedReferencer<1> @ 1426a57a0

FSharedReferencer<1> * __thiscall
SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
          (FSharedReferencer<1> *this,FWeakReferencer<1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar3 = param_1->ReferenceController;
  this->ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        this->ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = pTVar3->SharedReferenceCount;
      bVar5 = aVar2 == aVar4;
      if (bVar5) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar5);
    pTVar3 = param_1->ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    param_1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  return this;
}

// FSharedReferencer<1> @ 1426a5820

FSharedReferencer<1> * __thiscall
SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
          (FSharedReferencer<1> *this,FWeakReferencer<1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  pTVar1 = param_1->ReferenceController;
  this->ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        this->ReferenceController = (TReferenceControllerBase<1> *)0x0;
        return this;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  return this;
}

