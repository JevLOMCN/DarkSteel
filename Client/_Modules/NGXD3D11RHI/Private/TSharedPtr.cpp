// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D11RHI
// Functions: 3

// operator= @ 14de12f30

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

TSharedPtr<NGXDLSSFeature,1> * __thiscall
TSharedPtr<NGXDLSSFeature,1>::operator=
          (TSharedPtr<NGXDLSSFeature,1> *this,TSharedPtr<NGXDLSSFeature,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (NGXDLSSFeature *)0x0;
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

// operator-> @ 14de12fd0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

FDLSSState * __thiscall TSharedPtr<FDLSSState,1>::operator->(TSharedPtr<FDLSSState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDLSSState *pFVar3;
  
  if (this->Object != (FDLSSState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDLSSState *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14de13020

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

NGXDLSSFeature * __thiscall
TSharedPtr<NGXDLSSFeature,1>::operator->(TSharedPtr<NGXDLSSFeature,1> *this)

{
  code *pcVar1;
  bool bVar2;
  NGXDLSSFeature *pNVar3;
  
  if (this->Object != (NGXDLSSFeature *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pNVar3 = (NGXDLSSFeature *)(*pcVar1)();
    return pNVar3;
  }
  return this->Object;
}

