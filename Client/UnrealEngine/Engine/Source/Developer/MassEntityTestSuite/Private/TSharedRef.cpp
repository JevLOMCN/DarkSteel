// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 10

// TSharedRef<FMassEntityManager,1><FMassEntityManager> @ 1470cfa60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<FMassEntityManager,1> * __thiscall
TSharedRef<FMassEntityManager,1>::TSharedRef<FMassEntityManager,1><FMassEntityManager>
          (TSharedRef<FMassEntityManager,1> *this,TRawPtrProxy<FMassEntityManager> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMassEntityManager *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMassEntityManager,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassEntityManager__U__DefaultDeleter_UFMassEntityManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FMassEntityManager *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMassEntityManager,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMassEntityManager *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// Init<FMassEntityManager> @ 1470e5e50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedRef<FMassEntityManager,1>::Init<FMassEntityManager>
          (TSharedRef<FMassEntityManager,1> *this,FMassEntityManager *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  
  if (param_1 == (FMassEntityManager *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    plVar1 = &param_1->_padding_;
    if (((param_1->_padding_ == 0) || (*plVar1 == 0)) || (*(int *)(*plVar1 + 8) < 1)) {
      pTVar4 = (this->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_1->_padding_ = (longlong)param_1;
      if (pTVar4 != (TReferenceControllerBase<1> *)*plVar1) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)*plVar1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *plVar1 = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return;
}

// TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> @ 1470f2140

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>
          (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *param_1)

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

// TSharedRef<FMassProcessingPhaseManager,1> @ 1470f2170

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<FMassProcessingPhaseManager,1> * __thiscall
TSharedRef<FMassProcessingPhaseManager,1>::TSharedRef<FMassProcessingPhaseManager,1>
          (TSharedRef<FMassProcessingPhaseManager,1> *this,
          TSharedRef<FMassProcessingPhaseManager,1> *param_1)

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

// ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> @ 1470f7d90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>
          (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FMassEntityManager,1> @ 1470f7da0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>
          (TSharedRef<FMassEntityManager,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FMassProcessingPhaseManager,1> @ 1470f7db0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedRef<FMassProcessingPhaseManager,1>::~TSharedRef<FMassProcessingPhaseManager,1>
          (TSharedRef<FMassProcessingPhaseManager,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> @ 1470f7de0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
~TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>
          (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 1470f9fb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FCreationContext * __thiscall
TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->
          (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *this)

{
  return this->Object;
}

// operator-> @ 1470f9fc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassProcessingPhaseManager * __thiscall
TSharedRef<FMassProcessingPhaseManager,1>::operator->
          (TSharedRef<FMassProcessingPhaseManager,1> *this)

{
  return this->Object;
}

