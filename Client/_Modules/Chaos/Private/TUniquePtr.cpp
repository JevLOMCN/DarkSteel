// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// operator= @ 1439c0f00

TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
* __thiscall
TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
::operator=(TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
            *this,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
                  *param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  *pTVar4;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FPBDCollisionConstraint *)0x0;
    if (pFVar1 != (FPBDCollisionConstraint *)0x0) {
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                             ,0x249,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
      Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                ((TObjectPool<Chaos::FPBDCollisionConstraint> *)this->_padding_,pFVar1);
    }
  }
  this->_padding_ = param_1->_padding_;
  return this;
}

// operator= @ 143a3b1c0

TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_> *
__thiscall
TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>::
operator=(TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
          *this,TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
                *param_1)

{
  FDeformablePackage *pFVar1;
  void *pvVar2;
  
  if (this == param_1) {
    return this;
  }
  pFVar1 = this->Ptr;
  this->Ptr = param_1->Ptr;
  param_1->Ptr = (FDeformablePackage *)0x0;
  if (pFVar1 != (FDeformablePackage *)0x0) {
    *(undefined4 *)&(pFVar1->ObjectMap).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->ObjectMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->ObjectMap);
    ::operator_delete(pFVar1,0x58);
    return this;
  }
  return this;
}

// Reset @ 143a8e5c0

void __thiscall
TUniquePtr<Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>,TDefaultDelete<Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>_>_>
::Reset(TUniquePtr<Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>,TDefaultDelete<Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>_>_>
        *this,FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *param_1)

{
  FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) &&
     (this->Ptr = param_1,
     pFVar1 != (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
    pFVar2 = (pFVar1->StiffnessArray).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (pFVar1->IncidentElementsLocal).AllocatorInstance.Data,
               (pFVar1->IncidentElementsLocal).ArrayNum);
    pFVar2 = (pFVar1->IncidentElementsLocal).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (pFVar1->IncidentElements).AllocatorInstance.Data,(pFVar1->IncidentElements).ArrayNum
              );
    pFVar2 = (pFVar1->IncidentElements).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Volumes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Constraints).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x50);
    return;
  }
  return;
}

// operator= @ 143b583a0

TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> * __thiscall
TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>::operator=
          (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>
           *this,TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>
                 *param_1)

{
  FImplicitBVH *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FImplicitBVH *)0x0;
    if (pFVar1 != (FImplicitBVH *)0x0) {
      pFVar2 = (pFVar1->Nodes).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->NodeObjectIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->Objects).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x38);
    }
    return this;
  }
  return this;
}

// Reset @ 143c12390

void __thiscall
TUniquePtr<Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>,TDefaultDelete<Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>_>_>
::Reset(TUniquePtr<Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>,TDefaultDelete<Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>_>_>
        *this,ElasticFEM<float,Chaos::Softs::FSolverParticles> *param_1)

{
  ElasticFEM<float,Chaos::Softs::FSolverParticles> *pEVar1;
  FScriptContainerElement *pFVar2;
  
  pEVar1 = this->Ptr;
  if ((pEVar1 != param_1) &&
     (this->Ptr = param_1, pEVar1 != (ElasticFEM<float,Chaos::Softs::FSolverParticles> *)0x0)) {
    DestructItems<TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
               (pEVar1->MIncidentElements).AllocatorInstance.Data,
               (pEVar1->MIncidentElements).ArrayNum);
    pFVar2 = (pEVar1->MIncidentElements).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar1->MNodalMass).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar1->ElementForces).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar1->Measure).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pEVar1->DmInverse).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pEVar1,0x60);
    return;
  }
  return;
}

// operator= @ 143eb2810

TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::operator=(TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
            *this,TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                  *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pTVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pTVar1,0x10);
    }
    return this;
  }
  return this;
}

