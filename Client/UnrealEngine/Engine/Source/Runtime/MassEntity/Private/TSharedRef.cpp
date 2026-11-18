// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext> @ 1471b9910

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
          (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *this,
          TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> *param_1)

{
  FCreationContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFCreationContext_ObserverManager_Mass_UE__U__DefaultDeleter_UFCreationContext_ObserverManager_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FCreationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<UE::Mass::ObserverManager::FObserverLock,1><UE::Mass::ObserverManager::FObserverLock> @ 1471b9a20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> * __thiscall
TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
TSharedRef<UE::Mass::ObserverManager::FObserverLock,1><UE::Mass::ObserverManager::FObserverLock>
          (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *this,
          TRawPtrProxy<UE::Mass::ObserverManager::FObserverLock> *param_1)

{
  FObserverLock *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFObserverLock_ObserverManager_Mass_UE__U__DefaultDeleter_UFObserverLock_ObserverManager_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FObserverLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FRWAccessDetector,1><FRWAccessDetector> @ 1471b9ac0

TSharedRef<FRWAccessDetector,1> * __thiscall
TSharedRef<FRWAccessDetector,1>::TSharedRef<FRWAccessDetector,1><FRWAccessDetector>
          (TSharedRef<FRWAccessDetector,1> *this,TRawPtrProxy<FRWAccessDetector> *param_1)

{
  FRWAccessDetector *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FRWAccessDetector,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFRWAccessDetector__U__DefaultDeleter_UFRWAccessDetector___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FRWAccessDetector *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FRWAccessDetector,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<UE::Mass::FTypeManager,1><UE::Mass::FTypeManager> @ 1471b9b60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::FTypeManager,1> * __thiscall
TSharedRef<UE::Mass::FTypeManager,1>::TSharedRef<UE::Mass::FTypeManager,1><UE::Mass::FTypeManager>
          (TSharedRef<UE::Mass::FTypeManager,1> *this,FTypeManager *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<UE::Mass::FTypeManager,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFTypeManager_Mass_UE__U__DefaultDeleter_UFTypeManager_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FTypeManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Mass::FTypeManager,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

