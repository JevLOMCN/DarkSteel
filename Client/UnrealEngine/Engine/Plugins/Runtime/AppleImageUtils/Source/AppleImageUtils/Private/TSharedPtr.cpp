// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 2

// operator= @ 14cfa84f0

TSharedPtr<FAppleImageUtilsConversionTaskBase,1> * __thiscall
TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=
          (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *this,
          TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (FAppleImageUtilsConversionTaskBase *)0x0;
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

// operator-> @ 14cfa8590

FAppleImageUtilsConversionTaskBase * __thiscall
TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator->
          (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAppleImageUtilsConversionTaskBase *pFVar3;
  
  if (this->Object != (FAppleImageUtilsConversionTaskBase *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAppleImageUtilsConversionTaskBase *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

