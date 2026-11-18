// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 6

// SetGeometry @ 1441b6fa0

void __thiscall
Chaos::FRigidBodyHandle_External::SetGeometry
          (FRigidBodyHandle_External *this,TRefCountPtr<Chaos::FImplicitObject> *param_1)

{
  TGeometryParticle<double,3> *this_00;
  FImplicitObject *pFVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  IPhysicsProxyBase *pIVar5;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  this_00 = *(TGeometryParticle<double,3> **)&this->field_0x40;
  pFVar1 = param_1->Reference;
  plVar4 = &pFVar1->_padding_;
  if (pFVar1 == (FImplicitObject *)0x0) {
    pIVar5 = this_00->Proxy;
    plVar4 = (longlong *)&DAT_00000008;
  }
  else {
    LOCK();
    *(int *)plVar4 = (int)*plVar4 + 1;
    UNLOCK();
    pIVar5 = this_00->Proxy;
    LOCK();
    *(int *)plVar4 = (int)*plVar4 + 1;
    UNLOCK();
  }
  pFVar2 = (this_00->MNonFrequentData).Property.MGeometry.Reference;
  if (pFVar2 != pFVar1) {
    (this_00->MNonFrequentData).Property.MGeometry.Reference = pFVar1;
    if (pFVar1 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)plVar4 = (int)*plVar4 + 1;
      UNLOCK();
    }
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      plVar4 = &pFVar2->_padding_;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    plVar4 = &pFVar1->_padding_;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar1->_padding_ + 4) == 0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  (this_00->MDirtyFlags).Bits = (this_00->MDirtyFlags).Bits | 0x10;
  if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
  }
  TGeometryParticle<double,3>::UpdateShapesArray(this_00);
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    plVar4 = &pFVar1->_padding_;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar1->_padding_ + 4) == 0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return;
}

// SetPositionSolverIterationCount @ 1441b9390

void __thiscall
Chaos::FRigidBodyHandle_External::SetPositionSolverIterationCount
          (FRigidBodyHandle_External *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  lVar4 = *(longlong *)&this->field_0x40;
  if (*(byte *)(*(longlong *)&this->field_0x40 + 0x98) < 2) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    pIVar1 = *(IPhysicsProxyBase **)(lVar4 + 0x10);
    iVar3 = 0x7f;
    if (param_1 < 0x7f) {
      iVar3 = param_1;
    }
    uVar2 = 0xff;
    if (-1 < iVar3) {
      uVar2 = (char)iVar3;
    }
    *(undefined1 *)(lVar4 + 0x1a6) = uVar2;
    *(uint *)(lVar4 + 0x9c) = *(uint *)(lVar4 + 0x9c) | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetProjectionSolverIterationCount @ 1441b9570

void __thiscall
Chaos::FRigidBodyHandle_External::SetProjectionSolverIterationCount
          (FRigidBodyHandle_External *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  lVar4 = *(longlong *)&this->field_0x40;
  if (*(byte *)(*(longlong *)&this->field_0x40 + 0x98) < 2) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    pIVar1 = *(IPhysicsProxyBase **)(lVar4 + 0x10);
    iVar3 = 0x7f;
    if (param_1 < 0x7f) {
      iVar3 = param_1;
    }
    uVar2 = 0xff;
    if (-1 < iVar3) {
      uVar2 = (char)iVar3;
    }
    *(undefined1 *)(lVar4 + 0x1a8) = uVar2;
    *(uint *)(lVar4 + 0x9c) = *(uint *)(lVar4 + 0x9c) | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetR @ 1441b96a0

void __thiscall
Chaos::FRigidBodyHandle_External::SetR
          (FRigidBodyHandle_External *this,TRotation<double,3> *param_1,bool param_2)

{
  TGeometryParticle<double,3> *this_00;
  IPhysicsProxyBase *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TGeometryParticle<double,3> *pTVar8;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  this_00 = *(TGeometryParticle<double,3> **)&this->field_0x40;
  if (param_2) {
    pTVar8 = this_00;
    if (this_00->Type < Rigid) {
      pTVar8 = (TGeometryParticle<double,3> *)0x0;
    }
    if ((pTVar8 != (TGeometryParticle<double,3> *)0x0) &&
       (*(char *)&pTVar8[2].MNonFrequentData.Property.MSpatialIdx == '\x01')) {
      pIVar1 = pTVar8->Proxy;
      *(undefined1 *)
       ((longlong)
        &pTVar8[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController + 1
       ) = 1;
      *(undefined1 *)&pTVar8[2].MNonFrequentData.Property.MSpatialIdx = 4;
      (pTVar8->MDirtyFlags).Bits = (pTVar8->MDirtyFlags).Bits | 8;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
    }
  }
  TGeometryParticle<double,3>::SetR(this_00,param_1,param_2);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x28;
  lVar3 = *(longlong *)&this->field_0x20;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar3 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar7 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)(lVar3 + 0x48) = uVar5;
  *(int *)(lVar3 + 0x50) = iVar7;
  return;
}

// SetVelocitySolverIterationCount @ 1441b9ec0

void __thiscall
Chaos::FRigidBodyHandle_External::SetVelocitySolverIterationCount
          (FRigidBodyHandle_External *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  lVar4 = *(longlong *)&this->field_0x40;
  if (*(byte *)(*(longlong *)&this->field_0x40 + 0x98) < 2) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    pIVar1 = *(IPhysicsProxyBase **)(lVar4 + 0x10);
    iVar3 = 0x7f;
    if (param_1 < 0x7f) {
      iVar3 = param_1;
    }
    uVar2 = 0xff;
    if (-1 < iVar3) {
      uVar2 = (char)iVar3;
    }
    *(undefined1 *)(lVar4 + 0x1a7) = uVar2;
    *(uint *)(lVar4 + 0x9c) = *(uint *)(lVar4 + 0x9c) | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetX @ 1441ba010

void __thiscall
Chaos::FRigidBodyHandle_External::SetX
          (FRigidBodyHandle_External *this,TVector<double,3> *param_1,bool param_2)

{
  longlong lVar1;
  IPhysicsProxyBase *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  lVar1 = *(longlong *)&this->field_0x40;
  if (param_2) {
    lVar8 = lVar1;
    if (*(byte *)(lVar1 + 0x98) < 2) {
      lVar8 = 0;
    }
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x19c) == '\x01')) {
      pIVar2 = *(IPhysicsProxyBase **)(lVar8 + 0x10);
      *(undefined1 *)(lVar8 + 0x1b1) = 1;
      *(undefined1 *)(lVar8 + 0x19c) = 4;
      *(uint *)(lVar8 + 0x9c) = *(uint *)(lVar8 + 0x9c) | 8;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  pIVar2 = *(IPhysicsProxyBase **)(lVar1 + 0x10);
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)&param_1->field_0x10;
  if (((param_2) &&
      (*(uint *)(lVar1 + 0x9c) = *(uint *)(lVar1 + 0x9c) | 1, pIVar2 != (IPhysicsProxyBase *)0x0))
     && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x28;
  lVar1 = *(longlong *)&this->field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar1 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar7 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)&param_1->field_0x10;
  *(int *)(lVar1 + 0x20) = iVar7;
  return;
}

