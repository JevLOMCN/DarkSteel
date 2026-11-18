// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AsShared @ 141747980

TSharedRef<FStringTable,1> * __thiscall
TSharedFromThis<FStringTable,1>::AsShared
          (TSharedFromThis<FStringTable,1> *this,TSharedRef<FStringTable,1> *__return_storage_ptr__)

{
  FStringTable *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FStringTable,1> *pTVar5;
  FStringTable *pFVar6;
  FStringTable *pFVar7;
  bool bVar8;
  
  pFVar1 = (FStringTable *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FStringTable *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FStringTable *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_1417479c1;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_1417479c1:
  if ((pFVar7 != (FStringTable *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FStringTable,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FStringTable *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FStringTable,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FStringTable *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FStringTable,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1417b50d0

TSharedRef<FTokenizedMessage,1> * __thiscall
TSharedFromThis<FTokenizedMessage,1>::AsShared
          (TSharedFromThis<FTokenizedMessage,1> *this,
          TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__)

{
  FTokenizedMessage *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FTokenizedMessage,1> *pTVar5;
  FTokenizedMessage *pFVar6;
  FTokenizedMessage *pFVar7;
  bool bVar8;
  
  pFVar1 = (FTokenizedMessage *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FTokenizedMessage *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FTokenizedMessage *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_1417b5111;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_1417b5111:
  if ((pFVar7 != (FTokenizedMessage *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FTokenizedMessage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FTokenizedMessage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 141d76b10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> * __thiscall
TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::AsShared
          (TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *this,
          TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *__return_storage_ptr__)

{
  FPimpl *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *pTVar5;
  FPimpl *pFVar6;
  FPimpl *pFVar7;
  bool bVar8;
  
  pFVar1 = (FPimpl *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FPimpl *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FPimpl *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->field_0x8)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_141d76b51;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->field_0x8)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->field_0x8)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_141d76b51:
  if ((pFVar7 != (FPimpl *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FPimpl *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FPimpl *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

