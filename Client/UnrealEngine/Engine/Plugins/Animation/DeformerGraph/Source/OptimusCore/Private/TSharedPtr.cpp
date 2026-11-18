// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// TSharedPtr<FOptimusAction,1><FOptimusAction> @ 14e1203e0

TSharedPtr<FOptimusAction,1> * __thiscall
TSharedPtr<FOptimusAction,1>::TSharedPtr<FOptimusAction,1><FOptimusAction>
          (TSharedPtr<FOptimusAction,1> *this,FOptimusAction *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar1;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14e1662f0

FOptimusAction * __thiscall
TSharedPtr<FOptimusAction,1>::operator->(TSharedPtr<FOptimusAction,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOptimusAction *pFVar3;
  
  if (this->Object != (FOptimusAction *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOptimusAction *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14e166340

FOptimusDataType * __thiscall
TSharedPtr<FOptimusDataType,1>::operator->(TSharedPtr<FOptimusDataType,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOptimusDataType *pFVar3;
  
  if (this->Object != (FOptimusDataType *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOptimusDataType *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

