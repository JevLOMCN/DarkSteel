// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ReliableHComp
// Functions: 1

// TSharedPtr<HandlerComponent,1><ReliabilityHandlerComponent> @ 14463c660

TSharedPtr<HandlerComponent,1> * __thiscall
TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><ReliabilityHandlerComponent>
          (TSharedPtr<HandlerComponent,1> *this,TRawPtrProxy<ReliabilityHandlerComponent> *param_1)

{
  ReliabilityHandlerComponent *pRVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (HandlerComponent *)param_1->Object;
  pRVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VReliabilityHandlerComponent__U__DefaultDeleter_VReliabilityHandlerComponent___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pRVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

