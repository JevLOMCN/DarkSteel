// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// TPromise<FIcmpEchoResult> @ 144552d60

TPromise<FIcmpEchoResult> * __thiscall
TPromise<FIcmpEchoResult>::TPromise<FIcmpEchoResult>
          (TPromise<FIcmpEchoResult> *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TPromise<FIcmpEchoResult> *pTVar4;
  
  pTVar3 = ::operator_new(0xb0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object = (TFutureState<FIcmpEchoResult> *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_UFIcmpEchoResult_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)(pTVar3 + 1),param_1);
    if ((TFutureState<FIcmpEchoResult> *)(pTVar3 + 1) == (TFutureState<FIcmpEchoResult> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TPromise<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->State).Object = (TFutureState<FIcmpEchoResult> *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

