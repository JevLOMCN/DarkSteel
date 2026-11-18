// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 2

// TSharedPtr<FSlateMaterialBrush,1><FSlateMaterialBrush> @ 14d28e6b0

TSharedPtr<FSlateMaterialBrush,1> * __thiscall
TSharedPtr<FSlateMaterialBrush,1>::TSharedPtr<FSlateMaterialBrush,1><FSlateMaterialBrush>
          (TSharedPtr<FSlateMaterialBrush,1> *this,TRawPtrProxy<FSlateMaterialBrush> *param_1)

{
  FSlateMaterialBrush *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSlateMaterialBrush__U__DefaultDeleter_UFSlateMaterialBrush___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14d292dc0

SNiagaraUISystemWidget * __thiscall
TSharedPtr<SNiagaraUISystemWidget,1>::operator->(TSharedPtr<SNiagaraUISystemWidget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SNiagaraUISystemWidget *pSVar3;
  
  if (this->Object != (SNiagaraUISystemWidget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SNiagaraUISystemWidget *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

