// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGContextBlueprintScope @ 149b553d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContextBlueprintScope * __thiscall
FPCGContextBlueprintScope::FPCGContextBlueprintScope
          (FPCGContextBlueprintScope *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FPCGContext *pFVar3;
  FPCGContextHandle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPCGGraphExecutor *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FPCGContextHandle,1> *pTVar8;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18 [2];
  
  this->Context = param_1;
  (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
  (this->ContextHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GraphExecutor).Object = (FPCGGraphExecutor *)0x0;
  (this->GraphExecutor).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = this->Context;
  if (pFVar3 != (FPCGContext *)0x0) {
    pFVar4 = (pFVar3->Handle).Object;
    pTVar5 = (pFVar3->Handle).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->ContextHandle).SharedReferenceCount.ReferenceController;
    (this->ContextHandle).Object = pFVar4;
    (this->ContextHandle).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar3 = this->Context;
    pTVar8 = &pFVar3->Handle;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TSharedPtr<FPCGContextHandle,1> *)&local_28) {
      pTVar8->Object = (FPCGContextHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar3->Handle).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    pTVar5 = (this->Context->GraphExecutor).WeakReferenceCount.ReferenceController;
    pFVar6 = (this->Context->GraphExecutor).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
    (this->GraphExecutor).Object = pFVar6;
    (this->GraphExecutor).WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    pFVar3 = this->Context;
    if (&pFVar3->GraphExecutor != (TWeakPtr<FPCGGraphExecutor,1> *)local_18) {
      pTVar5 = (pFVar3->GraphExecutor).WeakReferenceCount.ReferenceController;
      (pFVar3->GraphExecutor).Object = (FPCGGraphExecutor *)0x0;
      (pFVar3->GraphExecutor).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    return this;
  }
  return this;
}

// ~FPCGContextBlueprintScope @ 149b58720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGContextBlueprintScope::~FPCGContextBlueprintScope(FPCGContextBlueprintScope *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FPCGContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPCGContextHandle *pFVar5;
  FPCGGraphExecutor *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar3 = this->Context;
  if (pFVar3 != (FPCGContext *)0x0) {
    pTVar4 = (this->ContextHandle).SharedReferenceCount.ReferenceController;
    pFVar5 = (this->ContextHandle).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (pFVar3->Handle).SharedReferenceCount.ReferenceController;
    (pFVar3->Handle).Object = pFVar5;
    (pFVar3->Handle).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar4 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
    pFVar3 = this->Context;
    pFVar6 = (this->GraphExecutor).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (pFVar3->GraphExecutor).WeakReferenceCount.ReferenceController;
    (pFVar3->GraphExecutor).Object = pFVar6;
    (pFVar3->GraphExecutor).WeakReferenceCount.ReferenceController = pTVar4;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
  pTVar4 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContextHandle).SharedReferenceCount.ReferenceController);
  return;
}

