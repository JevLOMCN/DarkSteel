// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 6

// TSharedPtr<FMassCommandBuffer,1><FMassCommandBuffer> @ 1471b99b0

TSharedPtr<FMassCommandBuffer,1> * __thiscall
TSharedPtr<FMassCommandBuffer,1>::TSharedPtr<FMassCommandBuffer,1><FMassCommandBuffer>
          (TSharedPtr<FMassCommandBuffer,1> *this,TRawPtrProxy<FMassCommandBuffer> *param_1)

{
  FMassCommandBuffer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassCommandBuffer__U__DefaultDeleter_UFMassCommandBuffer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FMassCommandBuffer> @ 1471ba0a0

TSharedPtr<FMassCommandBuffer,1> * __thiscall
TSharedPtr<FMassCommandBuffer,1>::operator=<FMassCommandBuffer>
          (TSharedPtr<FMassCommandBuffer,1> *this,TRawPtrProxy<FMassCommandBuffer> *param_1)

{
  FMassCommandBuffer *pFVar1;
  TSharedPtr<FMassCommandBuffer,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassCommandBuffer__U__DefaultDeleter_UFMassCommandBuffer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FMassCommandBuffer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// ~TSharedPtr<FMassCommandBuffer,1> @ 1471de870

void __thiscall
TSharedPtr<FMassCommandBuffer,1>::~TSharedPtr<FMassCommandBuffer,1>
          (TSharedPtr<FMassCommandBuffer,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 1471e2a30

FMassCommandBuffer * __thiscall
TSharedPtr<FMassCommandBuffer,1>::operator->(TSharedPtr<FMassCommandBuffer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMassCommandBuffer *pFVar3;
  
  if (this->Object != (FMassCommandBuffer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMassCommandBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1471e2a80

FStructOnScope * __thiscall
TSharedPtr<FStructOnScope,1>::operator->(TSharedPtr<FStructOnScope,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStructOnScope *pFVar3;
  
  if (this->Object != (FStructOnScope *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStructOnScope *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 147251cd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> * __thiscall
TSharedPtr<UE::Mass::ObserverManager::FObserverLock,1>::ToSharedRef
          (TSharedPtr<UE::Mass::ObserverManager::FObserverLock,1> *this,
          TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *pTVar3;
  
  if (this->Object == (FObserverLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (FObserverLock *)0x0;
  if (__return_storage_ptr__->Object == (FObserverLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

