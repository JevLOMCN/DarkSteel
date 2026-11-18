// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 3

// TSharedPtr<void,1><_priv_exr_context_t_*> @ 14ea28690

TSharedPtr<void,1> * __thiscall
TSharedPtr<void,1>::TSharedPtr<void,1><_priv_exr_context_t_*>
          (TSharedPtr<void,1> *this,_priv_exr_context_t **param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         SharedPointerInternals::
         TReferenceControllerWithDeleter<_priv_exr_context_t*___ptr64,SharedPointerInternals::DefaultDeleter<_priv_exr_context_t*___ptr64>,1>
         ::vftable;
    pTVar1[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar1;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~TSharedPtr<void,1> @ 14ea29140

void __thiscall TSharedPtr<void,1>::~TSharedPtr<void,1>(TSharedPtr<void,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator= @ 14ea29320

TSharedPtr<void,1> * __thiscall
TSharedPtr<void,1>::operator=(TSharedPtr<void,1> *this,TSharedPtr<void,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (void *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

