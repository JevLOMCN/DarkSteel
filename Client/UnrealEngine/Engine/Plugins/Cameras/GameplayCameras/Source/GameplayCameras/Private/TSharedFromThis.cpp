// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// AsShared @ 14d549190

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedRef<UE::Cameras::FCameraEvaluationContext,1> * __thiscall
TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1>::AsShared
          (TSharedFromThis<UE::Cameras::FCameraEvaluationContext,1> *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FCameraEvaluationContext *pFVar4;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  FCameraEvaluationContext *pFVar7;
  FCameraEvaluationContext *pFVar8;
  bool bVar9;
  
  pFVar4 = (FCameraEvaluationContext *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FCameraEvaluationContext *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FCameraEvaluationContext *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FCameraEvaluationContext *)0x0;
      if (iVar2 == 0) goto LAB_14d5491d1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_14d5491d1:
  pFVar4 = (FCameraEvaluationContext *)&pFVar7->field_0x10;
  if (pFVar7 == (FCameraEvaluationContext *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FCameraEvaluationContext *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FCameraEvaluationContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FCameraEvaluationContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14d59a720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> * __thiscall
TSharedFromThis<UE::Cameras::FCameraSystemEvaluator,1>::AsShared
          (TSharedFromThis<UE::Cameras::FCameraSystemEvaluator,1> *this,
          TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *__return_storage_ptr__)

{
  FCameraSystemEvaluator *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *pTVar5;
  FCameraSystemEvaluator *pFVar6;
  FCameraSystemEvaluator *pFVar7;
  bool bVar8;
  
  pFVar1 = (FCameraSystemEvaluator *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FCameraSystemEvaluator *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FCameraSystemEvaluator *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14d59a761;
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
LAB_14d59a761:
  if ((pFVar7 != (FCameraSystemEvaluator *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FCameraSystemEvaluator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FCameraSystemEvaluator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

