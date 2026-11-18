// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// SetObjectState @ 143db7d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FRigidBodyHandle_External::SetObjectState
          (FRigidBodyHandle_External *this,EObjectStateType param_1,bool param_2,bool param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  IPhysicsProxyBase *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TPBDRigidParticle<double,3> *pTVar7;
  TPBDRigidParticle<double,3> *pTVar8;
  TVector<double,3> local_98;
  TVector<double,3> local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar8 = (TPBDRigidParticle<double,3> *)0x0;
  pTVar7 = *(TPBDRigidParticle<double,3> **)&this->field_0x40;
  if ((byte)(*(TPBDRigidParticle<double,3> **)&this->field_0x40)->field_0x98 < 2) {
    pTVar7 = pTVar8;
  }
  if (pTVar7 != (TPBDRigidParticle<double,3> *)0x0) {
    lVar1 = *(longlong *)&this->field_0x20;
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x28;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    iVar6 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
    *(int *)(lVar1 + 4) = iVar6;
    if (param_1 != Dynamic) {
      if ((pTVar7->MMiscData).Property.MObjectState == Dynamic) {
        local_98._16_8_ = 0;
        local_98._0_8_ = 0;
        local_98._8_8_ = 0;
        SetV(this,&local_98,param_3);
        local_80._16_8_ = 0;
        local_80._0_8_ = 0;
        local_80._8_8_ = 0;
        SetW(this,&local_80,param_3);
      }
      if ((param_1 == Kinematic) && ((pTVar7->MMiscData).Property.MObjectState != Kinematic)) {
        local_68 = ___xmm_3f800000000000000000000000000000;
        uStack_60 = _UNK_150689648;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        pTVar7 = *(TPBDRigidParticle<double,3> **)&this->field_0x40;
        if ((*(TPBDRigidParticle<double,3> **)&this->field_0x40)->field_0x98 == '\0') {
          pTVar7 = pTVar8;
        }
        if (pTVar7 != (TPBDRigidParticle<double,3> *)0x0) {
          pIVar3 = *(IPhysicsProxyBase **)&pTVar7->field_0x10;
          *(undefined8 *)&pTVar7->field_0xc0 = local_68;
          *(undefined8 *)&pTVar7->field_0xc8 = uStack_60;
          *(undefined8 *)&pTVar7->field_0xd0 = local_58;
          *(undefined8 *)&pTVar7->field_0xd8 = uStack_50;
          *(undefined8 *)&pTVar7->field_0xe0 = local_48;
          *(ulonglong *)&pTVar7->field_0xe8 = CONCAT44(uStack_3c,uStack_40);
          if (((param_3) &&
              (*(uint *)&pTVar7->field_0x9c = *(uint *)&pTVar7->field_0x9c | 0x40,
              pIVar3 != (IPhysicsProxyBase *)0x0)) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0))
          {
            FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
          }
        }
      }
    }
  }
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar7 = *(TPBDRigidParticle<double,3> **)&this->field_0x40;
  if ((byte)(*(TPBDRigidParticle<double,3> **)&this->field_0x40)->field_0x98 < 2) {
    pTVar7 = pTVar8;
  }
  if (pTVar7 != (TPBDRigidParticle<double,3> *)0x0) {
    TPBDRigidParticle<double,3>::SetObjectState(pTVar7,param_1,param_2,param_3);
  }
  return;
}

// SetV @ 143db97f0

void __thiscall
Chaos::FRigidBodyHandle_External::SetV
          (FRigidBodyHandle_External *this,TVector<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  IPhysicsProxyBase *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  lVar3 = *(longlong *)&this->field_0x40;
  lVar11 = lVar3;
  if (*(byte *)(lVar3 + 0x98) == 0) {
    lVar11 = 0;
  }
  if (lVar11 != 0) {
    if ((((param_2) && (1 < *(byte *)(lVar3 + 0x98))) && (lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x19c) == '\x01')) {
      bVar8 = UE::Math::TVector<double>::IsNearlyZero
                        ((TVector<double> *)param_1,__real_3f1a36e2e0000000);
      if (!bVar8) {
        pIVar4 = *(IPhysicsProxyBase **)(lVar3 + 0x10);
        *(undefined1 *)(lVar3 + 0x1b1) = 1;
        *(undefined1 *)(lVar3 + 0x19c) = 4;
        *(uint *)(lVar3 + 0x9c) = *(uint *)(lVar3 + 0x9c) | 8;
        if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
        }
      }
    }
    dVar1 = *(double *)&param_1->field_0x8;
    dVar2 = *(double *)&param_1->field_0x10;
    pIVar4 = *(IPhysicsProxyBase **)(lVar11 + 0x10);
    *(float *)(lVar11 + 0xa0) = (float)*(double *)param_1;
    *(float *)(lVar11 + 0xa4) = (float)dVar1;
    *(float *)(lVar11 + 0xa8) = (float)dVar2;
    if (((param_2) &&
        (*(uint *)(lVar11 + 0x9c) = *(uint *)(lVar11 + 0x9c) | 2, pIVar4 != (IPhysicsProxyBase *)0x0
        )) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
  }
  if (((*(double *)param_1 == 0.0) && (*(double *)&param_1->field_0x8 == 0.0)) &&
     (*(double *)&param_1->field_0x10 == 0.0)) {
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    lVar3 = *(longlong *)&this->field_0x40;
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    lVar11 = *(longlong *)&this->field_0x40;
    if (param_2) {
      lVar10 = lVar11;
      if (*(byte *)(lVar11 + 0x98) < 2) {
        lVar10 = 0;
      }
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x19c) == '\x01')) {
        pIVar4 = *(IPhysicsProxyBase **)(lVar10 + 0x10);
        *(undefined1 *)(lVar10 + 0x1b1) = 1;
        *(undefined1 *)(lVar10 + 0x19c) = 4;
        *(uint *)(lVar10 + 0x9c) = *(uint *)(lVar10 + 0x9c) | 8;
        if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
        }
      }
    }
    pIVar4 = *(IPhysicsProxyBase **)(lVar11 + 0x10);
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(lVar11 + 0x28) = uVar7;
    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
    if (((param_2) &&
        (*(uint *)(lVar11 + 0x9c) = *(uint *)(lVar11 + 0x9c) | 1, pIVar4 != (IPhysicsProxyBase *)0x0
        )) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x28;
    lVar11 = *(longlong *)&this->field_0x20;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    iVar9 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(lVar11 + 0x10) = uVar7;
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar3 + 0x30);
    *(int *)(lVar11 + 0x20) = iVar9;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x28;
  lVar3 = *(longlong *)&this->field_0x20;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar3 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar9 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
  uVar7 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar3 + 0x68) = uVar7;
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)&param_1->field_0x10;
  *(int *)(lVar3 + 0x78) = iVar9;
  return;
}

// SetW @ 143db9aa0

void __thiscall
Chaos::FRigidBodyHandle_External::SetW
          (FRigidBodyHandle_External *this,TVector<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  TGeometryParticle<double,3> *pTVar3;
  IPhysicsProxyBase *pIVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TGeometryParticle<double,3> *pTVar11;
  double local_38;
  double dStack_30;
  undefined1 local_28 [16];
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = *(TGeometryParticle<double,3> **)&this->field_0x40;
  pTVar11 = pTVar3;
  if (pTVar3->Type == Static) {
    pTVar11 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar11 != (TGeometryParticle<double,3> *)0x0) {
    if ((((param_2) && (Kinematic < pTVar3->Type)) && (pTVar3 != (TGeometryParticle<double,3> *)0x0)
        ) && (*(char *)&pTVar3[2].MNonFrequentData.Property.MSpatialIdx == '\x01')) {
      bVar9 = UE::Math::TVector<double>::IsNearlyZero
                        ((TVector<double> *)param_1,__real_3f1a36e2e0000000);
      if (!bVar9) {
        pIVar4 = pTVar3->Proxy;
        *(undefined1 *)
         ((longlong)
          &pTVar3[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController +
         1) = 1;
        *(undefined1 *)&pTVar3[2].MNonFrequentData.Property.MSpatialIdx = 4;
        (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
        if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
        }
      }
    }
    dVar1 = *(double *)&param_1->field_0x8;
    dVar2 = *(double *)&param_1->field_0x10;
    pIVar4 = pTVar11->Proxy;
    *(float *)((longlong)&pTVar11[1]._padding_ + 4) = (float)*(double *)param_1;
    *(float *)&pTVar11[1].Proxy = (float)dVar1;
    *(float *)((longlong)&pTVar11[1].Proxy + 4) = (float)dVar2;
    if (((param_2) &&
        ((pTVar11->MDirtyFlags).Bits = (pTVar11->MDirtyFlags).Bits | 2,
        pIVar4 != (IPhysicsProxyBase *)0x0)) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
  }
  if (((*(double *)param_1 == 0.0) && (*(double *)&param_1->field_0x8 == 0.0)) &&
     (*(double *)&param_1->field_0x10 == 0.0)) {
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    lVar5 = *(longlong *)&this->field_0x40;
    dStack_30 = (double)*(float *)(lVar5 + 0x44);
    local_38 = (double)*(float *)(lVar5 + 0x40);
    dVar1 = (double)(float)((ulonglong)*(undefined8 *)(lVar5 + 0x48) >> 0x20);
    local_28._8_4_ = SUB84(dVar1,0);
    local_28._0_8_ = (double)(float)*(undefined8 *)(lVar5 + 0x48);
    local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar3 = *(TGeometryParticle<double,3> **)&this->field_0x40;
    if (param_2) {
      pTVar11 = pTVar3;
      if (pTVar3->Type < Rigid) {
        pTVar11 = (TGeometryParticle<double,3> *)0x0;
      }
      if ((pTVar11 != (TGeometryParticle<double,3> *)0x0) &&
         (*(char *)&pTVar11[2].MNonFrequentData.Property.MSpatialIdx == '\x01')) {
        pIVar4 = pTVar11->Proxy;
        *(undefined1 *)
         ((longlong)
          &pTVar11[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController
         + 1) = 1;
        *(undefined1 *)&pTVar11[2].MNonFrequentData.Property.MSpatialIdx = 4;
        (pTVar11->MDirtyFlags).Bits = (pTVar11->MDirtyFlags).Bits | 8;
        if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
        }
      }
    }
    TGeometryParticle<double,3>::SetR(pTVar3,(TRotation<double,3> *)&local_38,param_2);
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x28;
    lVar5 = *(longlong *)&this->field_0x20;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar5 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    iVar10 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
    *(double *)(lVar5 + 0x30) = local_38;
    *(double *)(lVar5 + 0x38) = dStack_30;
    *(undefined8 *)(lVar5 + 0x40) = local_28._0_8_;
    *(undefined8 *)(lVar5 + 0x48) = local_28._8_8_;
    *(int *)(lVar5 + 0x50) = iVar10;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x28;
  lVar5 = *(longlong *)&this->field_0x20;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar5 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  iVar10 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
  uVar8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar5 + 0x88) = uVar8;
  *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)&param_1->field_0x10;
  *(int *)(lVar5 + 0x98) = iVar10;
  return;
}

