// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AsShared @ 145494bc0

TSharedRef<FRHIBreadcrumbAllocator,1> * __thiscall
TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
          (TSharedFromThis<FRHIBreadcrumbAllocator,1> *this,
          TSharedRef<FRHIBreadcrumbAllocator,1> *__return_storage_ptr__)

{
  FRHIBreadcrumbAllocator *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar5;
  FRHIBreadcrumbAllocator *pFVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  bool bVar8;
  
  pFVar1 = (FRHIBreadcrumbAllocator *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FRHIBreadcrumbAllocator *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FRHIBreadcrumbAllocator *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_145494c01;
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
LAB_145494c01:
  if ((pFVar7 != (FRHIBreadcrumbAllocator *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FRHIBreadcrumbAllocator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FRHIBreadcrumbAllocator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

