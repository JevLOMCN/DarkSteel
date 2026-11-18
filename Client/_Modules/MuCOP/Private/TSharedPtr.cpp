// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 1

// TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1><FCustomizableObjectPopulationGeneratorPrivate> @ 14d364930

TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1> * __thiscall
TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1>::
TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1><FCustomizableObjectPopulationGeneratorPrivate>
          (TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1> *this,
          TRawPtrProxy<FCustomizableObjectPopulationGeneratorPrivate> *param_1)

{
  FCustomizableObjectPopulationGeneratorPrivate *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFCustomizableObjectPopulationGeneratorPrivate__U__DefaultDeleter_UFCustomizableObjectPopulationGeneratorPrivate___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

