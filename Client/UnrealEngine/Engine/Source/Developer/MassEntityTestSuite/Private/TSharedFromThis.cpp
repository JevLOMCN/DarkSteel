// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// ~TSharedFromThis<FMassProcessingPhaseManager,1> @ 1470f7d20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedFromThis<FMassProcessingPhaseManager,1>::~TSharedFromThis<FMassProcessingPhaseManager,1>
          (TSharedFromThis<FMassProcessingPhaseManager,1> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001470f7d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// AsShared @ 1471105f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<FMassEntityManager,1> * __thiscall
TSharedFromThis<FMassEntityManager,1>::AsShared
          (TSharedFromThis<FMassEntityManager,1> *this,
          TSharedRef<FMassEntityManager,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FMassEntityManager *pFVar4;
  TSharedRef<FMassEntityManager,1> *pTVar5;
  FMassEntityManager *pFVar6;
  FMassEntityManager *pFVar7;
  FMassEntityManager *pFVar8;
  bool bVar9;
  
  pFVar4 = (FMassEntityManager *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FMassEntityManager *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FMassEntityManager *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FMassEntityManager *)0x0;
      if (iVar2 == 0) goto LAB_147110631;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_147110631:
  pFVar4 = (FMassEntityManager *)&pFVar7->_padding_;
  if (pFVar7 == (FMassEntityManager *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FMassEntityManager *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMassEntityManager,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FMassEntityManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMassEntityManager,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMassEntityManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMassEntityManager,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

