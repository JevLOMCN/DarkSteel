// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// GetDebugName @ 143dab590

/* WARNING: Type propagation algorithm not settling */

FString * __cdecl Chaos::FPhysicsObjectInterface::GetDebugName(FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this;
  TPBDRigidParticle<double,3> *pTVar2;
  FString *pFVar3;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return &Chaos::Private::EmptyParticleName;
  }
  this = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  if (this != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External(this,param_1->BodyIndex)
      ;
      goto LAB_143dab5d2;
    }
    if (iVar1 == 0xb) {
      pTVar2 = (TPBDRigidParticle<double,3> *)(this->Parameters).Name.Data.AllocatorInstance.Data;
      goto LAB_143dab5d2;
    }
    if (iVar1 == 0xc) {
      pTVar2 = (TPBDRigidParticle<double,3> *)
               (this->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      goto LAB_143dab5d2;
    }
  }
  pTVar2 = (TPBDRigidParticle<double,3> *)0x0;
LAB_143dab5d2:
  pFVar3 = &Chaos::Private::EmptyParticleName;
  if (*(FString **)&pTVar2->field_0x68 != (FString *)0x0) {
    pFVar3 = *(FString **)&pTVar2->field_0x68;
  }
  return pFVar3;
}

// GetId @ 143dab910

int __cdecl Chaos::FPhysicsObjectInterface::GetId(FPhysicsObject *param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != (FPhysicsObject *)0x0) {
    iVar1 = param_1->BodyIndex;
  }
  return iVar1;
}

// GetName @ 143dabd20

FName __cdecl Chaos::FPhysicsObjectInterface::GetName(FPhysicsObject *param_1)

{
  longlong in_RDX;
  
  if (in_RDX == 0) {
    param_1->Proxy = (IPhysicsProxyBase *)0x0;
    return (FName)param_1;
  }
  param_1->Proxy = *(IPhysicsProxyBase **)(in_RDX + 0xc);
  return (FName)param_1;
}

// GetProxy @ 143dac0f0

IPhysicsProxyBase * __cdecl
Chaos::FPhysicsObjectInterface::GetProxy
          (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  IPhysicsProxyBase *pIVar2;
  FPhysicsObject **ppFVar3;
  IPhysicsProxyBase *pIVar4;
  bool bVar5;
  
  ppFVar3 = param_1->DataPtr;
  ppFVar1 = ppFVar3 + param_1->ArrayNum;
  pIVar2 = (IPhysicsProxyBase *)0x0;
  while( true ) {
    if (ppFVar3 == ppFVar1) {
      return pIVar2;
    }
    pIVar4 = pIVar2;
    if ((*ppFVar3 != (FPhysicsObject *)0x0) &&
       ((pIVar4 = (*ppFVar3)->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0 ||
        ((pIVar2 != (IPhysicsProxyBase *)0x0 && (bVar5 = pIVar4 != pIVar2, pIVar4 = pIVar2, bVar5)))
        ))) break;
    ppFVar3 = ppFVar3 + 1;
    pIVar2 = pIVar4;
  }
  return (IPhysicsProxyBase *)0x0;
}

// GetSolver @ 143dac850

FPBDRigidsSolver * __cdecl Chaos::FPhysicsObjectInterface::GetSolver(FPhysicsObject *param_1)

{
  FPBDRigidsSolver *pFVar1;
  
  pFVar1 = (FPBDRigidsSolver *)0x0;
  if ((param_1 != (FPhysicsObject *)0x0) && (param_1->Proxy != (IPhysicsProxyBase *)0x0)) {
    pFVar1 = (FPBDRigidsSolver *)param_1->Proxy->Solver;
  }
  return pFVar1;
}

// GetSolver @ 143dac870

FPBDRigidsSolver * __cdecl
Chaos::FPhysicsObjectInterface::GetSolver
          (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  IPhysicsProxyBase *pIVar2;
  FPBDRigidsSolver *pFVar3;
  FPhysicsObject **ppFVar4;
  FPBDRigidsSolver *pFVar5;
  bool bVar6;
  
  ppFVar4 = param_1->DataPtr;
  ppFVar1 = ppFVar4 + param_1->ArrayNum;
  pFVar3 = (FPBDRigidsSolver *)0x0;
  while( true ) {
    if (ppFVar4 == ppFVar1) {
      return pFVar3;
    }
    pFVar5 = pFVar3;
    if ((*ppFVar4 != (FPhysicsObject *)0x0) &&
       (((pIVar2 = (*ppFVar4)->Proxy, pIVar2 == (IPhysicsProxyBase *)0x0 ||
         (pFVar5 = (FPBDRigidsSolver *)pIVar2->Solver, pFVar5 == (FPBDRigidsSolver *)0x0)) ||
        ((pFVar3 != (FPBDRigidsSolver *)0x0 && (bVar6 = pFVar5 != pFVar3, pFVar5 = pFVar3, bVar6))))
       )) break;
    ppFVar4 = ppFVar4 + 1;
    pFVar3 = pFVar5;
  }
  return (FPBDRigidsSolver *)0x0;
}

// SetId @ 143db64d0

void __cdecl Chaos::FPhysicsObjectInterface::SetId(FPhysicsObject *param_1,int param_2)

{
  if (param_1 != (FPhysicsObject *)0x0) {
    param_1->BodyIndex = param_2;
  }
  return;
}

// SetName @ 143db76c0

void __cdecl Chaos::FPhysicsObjectInterface::SetName(FPhysicsObject *param_1,FName *param_2)

{
  if (param_1 != (FPhysicsObject *)0x0) {
    param_1->BodyName = *param_2;
  }
  return;
}

