// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 8

// operator= @ 14d83cb50

TSharedPtr<INumericTypeInterface<float>,1> * __thiscall
TSharedPtr<INumericTypeInterface<float>,1>::operator=
          (TSharedPtr<INumericTypeInterface<float>,1> *this,
          TSharedPtr<INumericTypeInterface<float>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  INumericTypeInterface<float> *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pIVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14d83cba0

TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> * __thiscall
TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator=
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *this,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTreeNode *pFVar2;
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

// operator-> @ 14d83cd30

FContainer * __thiscall
TSharedPtr<UE::PropertyViewer::Private::FContainer,1>::operator->
          (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FContainer *pFVar3;
  
  if (this->Object != (FContainer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FContainer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d83cd80

FTreeNode * __thiscall
TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>::operator->
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTreeNode *pFVar3;
  
  if (this->Object != (FTreeNode *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTreeNode *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d83cdd0

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<__int64> * __thiscall
TSharedPtr<SSpinBox<__int64>,1>::operator->(TSharedPtr<SSpinBox<__int64>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpinBox<__int64> *pSVar3;
  
  if (this->Object != (SSpinBox<__int64> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpinBox<__int64> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14d83ce20

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<unsigned___int64> * __thiscall
TSharedPtr<SSpinBox<unsigned___int64>,1>::operator->(TSharedPtr<SSpinBox<unsigned___int64>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpinBox<unsigned___int64> *pSVar3;
  
  if (this->Object != (SSpinBox<unsigned___int64> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpinBox<unsigned___int64> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14d83ce70

SFieldName * __thiscall
TSharedPtr<UE::PropertyViewer::SFieldName,1>::operator->
          (TSharedPtr<UE::PropertyViewer::SFieldName,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SFieldName *pSVar3;
  
  if (this->Object != (SFieldName *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SFieldName *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14d88b000

TSharedRef<UE::PropertyViewer::SFieldName,1> * __thiscall
TSharedPtr<UE::PropertyViewer::SFieldName,1>::ToSharedRef
          (TSharedPtr<UE::PropertyViewer::SFieldName,1> *this,
          TSharedRef<UE::PropertyViewer::SFieldName,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<UE::PropertyViewer::SFieldName,1> *pTVar3;
  
  if (this->Object == (SFieldName *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::PropertyViewer::SFieldName,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (SFieldName *)0x0;
  if (__return_storage_ptr__->Object == (SFieldName *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::PropertyViewer::SFieldName,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

