// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// GetFuture @ 14e4f6570

TFuture<bool> * __thiscall
TPromise<bool>::GetFuture(TPromise<bool> *this,TFuture<bool> *__return_storage_ptr__)

{
  TFutureState<bool> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TFuture<bool> *pTVar5;
  
  if (this->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<bool> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = (this->State).Object;
  this->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<bool> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<bool> *)(*pcVar3)();
      return pTVar5;
    }
  }
  *(TFutureState<bool> **)__return_storage_ptr__ = (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

