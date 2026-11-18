// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 7

// TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1><UE::IoStore::IOnDemandIoDispatcherBackend> @ 144594210

TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1> * __thiscall
TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1>::
TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1><UE::IoStore::IOnDemandIoDispatcherBackend>
          (TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1> *this,
          TRawPtrProxy<UE::IoStore::IOnDemandIoDispatcherBackend> *param_1)

{
  IOnDemandIoDispatcherBackend *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pIVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIOnDemandIoDispatcherBackend_IoStore_UE__U__DefaultDeleter_VIOnDemandIoDispatcherBackend_IoStore_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pIVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator*<UE::IoStore::FOnDemandContainer> @ 1445944c0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandContainer * __thiscall
TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator*<UE::IoStore::FOnDemandContainer>
          (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnDemandContainer *pFVar3;
  
  if (this->Object != (FOnDemandContainer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnDemandContainer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1445aa430

FImpl * __thiscall
TSharedPtr<UE::IoStore::FIASHostGroup::FImpl,1>::operator->
          (TSharedPtr<UE::IoStore::FIASHostGroup::FImpl,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImpl *pFVar3;
  
  if (this->Object != (FImpl *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImpl *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1445aa480

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandContainer * __thiscall
TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
          (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnDemandContainer *pFVar3;
  
  if (this->Object != (FOnDemandContainer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnDemandContainer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1445aa4d0

FOnDemandInternalContentHandle * __thiscall
TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1>::operator->
          (TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnDemandInternalContentHandle *pFVar3;
  
  if (this->Object != (FOnDemandInternalContentHandle *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnDemandInternalContentHandle *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1445aa520

IOnDemandInstallCache * __thiscall
TSharedPtr<UE::IoStore::IOnDemandInstallCache,1>::operator->
          (TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnDemandInstallCache *pIVar3;
  
  if (this->Object != (IOnDemandInstallCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnDemandInstallCache *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1445aa570

IOnDemandPackageStoreBackend * __thiscall
TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1>::operator->
          (TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnDemandPackageStoreBackend *pIVar3;
  
  if (this->Object != (IOnDemandPackageStoreBackend *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnDemandPackageStoreBackend *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

