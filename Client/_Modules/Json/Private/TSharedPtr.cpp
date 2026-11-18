// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 8

// TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1><FAutomationSpecBase::FSpecDefinitionScope> @ 141da1110

TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1> * __thiscall
TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1>::
TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1><FAutomationSpecBase::FSpecDefinitionScope>
          (TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FSpecDefinitionScope> *param_1)

{
  FSpecDefinitionScope *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSpecDefinitionScope_FAutomationSpecBase__U__DefaultDeleter_UFSpecDefinitionScope_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FJsonObject,1><FJsonObject> @ 141da1860

TSharedPtr<FJsonObject,1> * __thiscall
TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
          (TSharedPtr<FJsonObject,1> *this,TSharedRef<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator*<FJsonValue> @ 141da1a30

FJsonValue * __thiscall
TSharedPtr<FJsonValue,1>::operator*<FJsonValue>(TSharedPtr<FJsonValue,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FJsonValue *pFVar3;
  
  if (this->Object != (FJsonValue *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FJsonValue *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FJsonObject,1> @ 141dc3ca0

TSharedPtr<FJsonObject,1> * __thiscall
TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1>
          (TSharedPtr<FJsonObject,1> *this,TSharedPtr<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 141dc6730

TSharedPtr<FJsonObject,1> * __thiscall
TSharedPtr<FJsonObject,1>::operator=
          (TSharedPtr<FJsonObject,1> *this,TSharedPtr<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 141dc7080

FJsonObject * __thiscall TSharedPtr<FJsonObject,1>::operator->(TSharedPtr<FJsonObject,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FJsonObject *pFVar3;
  
  if (this->Object != (FJsonObject *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FJsonObject *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 141dc70d0

FJsonValue * __thiscall TSharedPtr<FJsonValue,1>::operator->(TSharedPtr<FJsonValue,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FJsonValue *pFVar3;
  
  if (this->Object != (FJsonValue *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FJsonValue *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 141df9320

TSharedRef<FJsonObject,1> * __thiscall
TSharedPtr<FJsonObject,1>::ToSharedRef
          (TSharedPtr<FJsonObject,1> *this,TSharedRef<FJsonObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  
  if (this->Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FJsonObject,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FJsonObject,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

