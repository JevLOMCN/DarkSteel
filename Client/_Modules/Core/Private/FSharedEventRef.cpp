// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FSharedEventRef @ 1416d6900

FSharedEventRef * __thiscall
FSharedEventRef::FSharedEventRef(FSharedEventRef *this,EEventMode param_1)

{
  TEventPool<0> *this_00;
  FEvent *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this_00 = TLazySingleton<TEventPool<0>_>::Get();
  pFVar1 = TEventPool<0>::GetRawEvent(this_00);
  (this->Ptr).Object = pFVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<FEvent,`FSharedEventRef::FSharedEventRef'::`1'::<lambda_4_>,1>
          ::_vftable_;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->Ptr).SharedReferenceCount.ReferenceController = pTVar2;
    return this;
  }
  (this->Ptr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

