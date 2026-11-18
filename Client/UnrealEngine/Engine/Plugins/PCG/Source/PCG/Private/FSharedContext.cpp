// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FSharedContext<FPCGComputeGraphContext> @ 1497ddda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSharedContext<FPCGComputeGraphContext> * __thiscall
FPCGContext::FSharedContext<FPCGComputeGraphContext>::FSharedContext<FPCGComputeGraphContext>
          (FSharedContext<FPCGComputeGraphContext> *this,TWeakPtr<FPCGContextHandle,1> *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  FPCGContextHandle *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  int iVar9;
  FPCGContextHandle *pFVar10;
  FPCGContextHandle *pFVar11;
  FPCGContextHandle *pFVar12;
  bool bVar13;
  FSharedContext<FPCGComputeGraphContext> local_18;
  
  pFVar12 = (FPCGContextHandle *)0x0;
  (this->SharedHandle).Object = (FPCGContextHandle *)0x0;
  (this->SharedHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar6 = (FPCGContextHandle *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar10 = pFVar12;
  pFVar11 = pFVar6;
  if (pFVar6 != (FPCGContextHandle *)0x0) {
    iVar4 = (int)pFVar6->_padding_;
    do {
      pFVar10 = (FPCGContextHandle *)0x0;
      pFVar11 = pFVar12;
      if (iVar4 == 0) goto LAB_1497dddf5;
      LOCK();
      iVar9 = (int)pFVar6->_padding_;
      bVar13 = iVar4 == iVar9;
      if (bVar13) {
        *(int *)&pFVar6->_padding_ = iVar4 + 1;
        iVar9 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar9;
    } while (!bVar13);
    pFVar10 = param_1->Object;
    pFVar11 = pFVar6;
  }
LAB_1497dddf5:
  if (this != &local_18) {
    (this->SharedHandle).Object = pFVar10;
    pFVar6 = (FPCGContextHandle *)(this->SharedHandle).SharedReferenceCount.ReferenceController;
    if (pFVar11 != pFVar6) {
      (this->SharedHandle).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar11;
      pFVar11 = pFVar12;
      if (pFVar6 != (FPCGContextHandle *)0x0) {
        LOCK();
        plVar1 = &pFVar6->_padding_;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)pFVar6->_padding_)(pFVar6);
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pFVar6->_padding_ + 4);
          iVar4 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          pFVar11 = (FPCGContextHandle *)0x0;
          if (iVar4 == 1) {
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar7->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return this;
}

// FSharedContext<FPCGWaitLandscapeReadyElementContext> @ 1499c2690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSharedContext<FPCGWaitLandscapeReadyElementContext> * __thiscall
FPCGContext::FSharedContext<FPCGWaitLandscapeReadyElementContext>::
FSharedContext<FPCGWaitLandscapeReadyElementContext>
          (FSharedContext<FPCGWaitLandscapeReadyElementContext> *this,
          TWeakPtr<FPCGContextHandle,1> *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  FPCGContextHandle *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  int iVar9;
  FPCGContextHandle *pFVar10;
  FPCGContextHandle *pFVar11;
  FPCGContextHandle *pFVar12;
  bool bVar13;
  FSharedContext<FPCGWaitLandscapeReadyElementContext> local_18;
  
  pFVar12 = (FPCGContextHandle *)0x0;
  (this->SharedHandle).Object = (FPCGContextHandle *)0x0;
  (this->SharedHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar6 = (FPCGContextHandle *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar10 = pFVar12;
  pFVar11 = pFVar6;
  if (pFVar6 != (FPCGContextHandle *)0x0) {
    iVar4 = (int)pFVar6->_padding_;
    do {
      pFVar10 = (FPCGContextHandle *)0x0;
      pFVar11 = pFVar12;
      if (iVar4 == 0) goto LAB_1499c26e5;
      LOCK();
      iVar9 = (int)pFVar6->_padding_;
      bVar13 = iVar4 == iVar9;
      if (bVar13) {
        *(int *)&pFVar6->_padding_ = iVar4 + 1;
        iVar9 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar9;
    } while (!bVar13);
    pFVar10 = param_1->Object;
    pFVar11 = pFVar6;
  }
LAB_1499c26e5:
  if (this != &local_18) {
    (this->SharedHandle).Object = pFVar10;
    pFVar6 = (FPCGContextHandle *)(this->SharedHandle).SharedReferenceCount.ReferenceController;
    if (pFVar11 != pFVar6) {
      (this->SharedHandle).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar11;
      pFVar11 = pFVar12;
      if (pFVar6 != (FPCGContextHandle *)0x0) {
        LOCK();
        plVar1 = &pFVar6->_padding_;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)pFVar6->_padding_)(pFVar6);
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pFVar6->_padding_ + 4);
          iVar4 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          pFVar11 = (FPCGContextHandle *)0x0;
          if (iVar4 == 1) {
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar7->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return this;
}

// FSharedContext<FPCGDataFromActorContext> @ 149b54e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSharedContext<FPCGDataFromActorContext> * __thiscall
FPCGContext::FSharedContext<FPCGDataFromActorContext>::FSharedContext<FPCGDataFromActorContext>
          (FSharedContext<FPCGDataFromActorContext> *this,TWeakPtr<FPCGContextHandle,1> *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  FPCGContextHandle *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  int iVar9;
  FPCGContextHandle *pFVar10;
  FPCGContextHandle *pFVar11;
  FPCGContextHandle *pFVar12;
  bool bVar13;
  FSharedContext<FPCGDataFromActorContext> local_18;
  
  pFVar12 = (FPCGContextHandle *)0x0;
  (this->SharedHandle).Object = (FPCGContextHandle *)0x0;
  (this->SharedHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar6 = (FPCGContextHandle *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar10 = pFVar12;
  pFVar11 = pFVar6;
  if (pFVar6 != (FPCGContextHandle *)0x0) {
    iVar4 = (int)pFVar6->_padding_;
    do {
      pFVar10 = (FPCGContextHandle *)0x0;
      pFVar11 = pFVar12;
      if (iVar4 == 0) goto LAB_149b54ec5;
      LOCK();
      iVar9 = (int)pFVar6->_padding_;
      bVar13 = iVar4 == iVar9;
      if (bVar13) {
        *(int *)&pFVar6->_padding_ = iVar4 + 1;
        iVar9 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar9;
    } while (!bVar13);
    pFVar10 = param_1->Object;
    pFVar11 = pFVar6;
  }
LAB_149b54ec5:
  if (this != &local_18) {
    (this->SharedHandle).Object = pFVar10;
    pFVar6 = (FPCGContextHandle *)(this->SharedHandle).SharedReferenceCount.ReferenceController;
    if (pFVar11 != pFVar6) {
      (this->SharedHandle).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar11;
      pFVar11 = pFVar12;
      if (pFVar6 != (FPCGContextHandle *)0x0) {
        LOCK();
        plVar1 = &pFVar6->_padding_;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)pFVar6->_padding_)(pFVar6);
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pFVar6->_padding_ + 4);
          iVar4 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          pFVar11 = (FPCGContextHandle *)0x0;
          if (iVar4 == 1) {
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar7->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return this;
}

// FSharedContext<FPCGGenerateLandscapeTexturesContext> @ 149b54f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSharedContext<FPCGGenerateLandscapeTexturesContext> * __thiscall
FPCGContext::FSharedContext<FPCGGenerateLandscapeTexturesContext>::
FSharedContext<FPCGGenerateLandscapeTexturesContext>
          (FSharedContext<FPCGGenerateLandscapeTexturesContext> *this,
          TWeakPtr<FPCGContextHandle,1> *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  FPCGContextHandle *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  int iVar9;
  FPCGContextHandle *pFVar10;
  FPCGContextHandle *pFVar11;
  FPCGContextHandle *pFVar12;
  bool bVar13;
  FSharedContext<FPCGGenerateLandscapeTexturesContext> local_18;
  
  pFVar12 = (FPCGContextHandle *)0x0;
  (this->SharedHandle).Object = (FPCGContextHandle *)0x0;
  (this->SharedHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar6 = (FPCGContextHandle *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar10 = pFVar12;
  pFVar11 = pFVar6;
  if (pFVar6 != (FPCGContextHandle *)0x0) {
    iVar4 = (int)pFVar6->_padding_;
    do {
      pFVar10 = (FPCGContextHandle *)0x0;
      pFVar11 = pFVar12;
      if (iVar4 == 0) goto LAB_149b54fc5;
      LOCK();
      iVar9 = (int)pFVar6->_padding_;
      bVar13 = iVar4 == iVar9;
      if (bVar13) {
        *(int *)&pFVar6->_padding_ = iVar4 + 1;
        iVar9 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar9;
    } while (!bVar13);
    pFVar10 = param_1->Object;
    pFVar11 = pFVar6;
  }
LAB_149b54fc5:
  if (this != &local_18) {
    (this->SharedHandle).Object = pFVar10;
    pFVar6 = (FPCGContextHandle *)(this->SharedHandle).SharedReferenceCount.ReferenceController;
    if (pFVar11 != pFVar6) {
      (this->SharedHandle).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar11;
      pFVar11 = pFVar12;
      if (pFVar6 != (FPCGContextHandle *)0x0) {
        LOCK();
        plVar1 = &pFVar6->_padding_;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)pFVar6->_padding_)(pFVar6);
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pFVar6->_padding_ + 4);
          iVar4 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          pFVar11 = (FPCGContextHandle *)0x0;
          if (iVar4 == 1) {
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar7->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return this;
}

