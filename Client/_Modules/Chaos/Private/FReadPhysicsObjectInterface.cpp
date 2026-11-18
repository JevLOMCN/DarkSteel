// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 71

// AreAllDisabled @ 143d9e0e0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllDisabled
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  bool *pbVar5;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  FPhysicsObject **ppFVar6;
  byte bVar7;
  bool bVar8;
  
  ppFVar6 = param_1->DataPtr;
  bVar8 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar6 + param_1->ArrayNum;
  do {
    if (ppFVar6 == ppFVar1) {
      return bVar8;
    }
    pFVar3 = *ppFVar6;
    bVar7 = 1;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9e16d;
        pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar4->field_0xc) {
          this_01 = pTVar4;
        }
        if (this_01 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          bVar7 = 0;
        }
        else {
          pbVar5 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_01);
          bVar7 = *pbVar5;
        }
      }
    }
LAB_143d9e16d:
    bVar8 = (bool)(bVar8 & bVar7);
    ppFVar6 = ppFVar6 + 1;
  } while( true );
}

// AreAllDisabled @ 143d9e1a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllDisabled
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar4;
  FPhysicsObject **ppFVar5;
  byte bVar6;
  bool bVar7;
  
  ppFVar5 = param_1->DataPtr;
  bVar7 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar5 + param_1->ArrayNum;
  do {
    if (ppFVar5 == ppFVar1) {
      return bVar7;
    }
    pFVar3 = *ppFVar5;
    bVar6 = 1;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9e226;
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar4 != (TPBDRigidParticle<double,3> *)0x0) {
        if ((byte)pTVar4->field_0x98 < 2) {
          bVar6 = 0;
        }
        else {
          bVar6 = (pTVar4->MMiscData).Property.bDisabled;
        }
      }
    }
LAB_143d9e226:
    bVar7 = (bool)(bVar7 & bVar6);
    ppFVar5 = ppFVar5 + 1;
  } while( true );
}

// AreAllDynamic @ 143d9e260

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllDynamic
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EObjectStateType EVar8;
  byte bVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  FPhysicsObject **ppFVar12;
  bool bVar13;
  
  ppFVar12 = param_1->DataPtr;
  bVar13 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar12 + param_1->ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return bVar13;
    }
    pFVar3 = *ppFVar12;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9e372:
      bVar9 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((pIVar4->SyncTimestamp).Object)->bDeleted != false) ||
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) goto LAB_143d9e372;
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar10 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9e372;
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143d9e372;
      pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar10->field_0xc) {
        pTVar11 = pTVar10;
      }
      if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar10->field_0xc != 0) {
          pTVar11 = pTVar10;
        }
        if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar8 = Static;
        }
        else {
          pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar11->field_0xc) {
            pTVar10 = pTVar11;
          }
          if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar8 = Kinematic;
          }
          else {
            EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar10);
          }
        }
      }
      else {
        EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
      }
      if (EVar8 != Dynamic) goto LAB_143d9e372;
      bVar9 = 1;
    }
    bVar13 = (bool)(bVar13 & bVar9);
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// AreAllDynamic @ 143d9e3b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllDynamic
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  EObjectStateType EVar10;
  FPhysicsObject **ppFVar11;
  bool bVar12;
  
  ppFVar11 = param_1->DataPtr;
  bVar12 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar1) {
      return bVar12;
    }
    pFVar3 = *ppFVar11;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9e493:
      bVar8 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((pIVar4->SyncTimestamp).Object)->bDeleted != false) ||
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) goto LAB_143d9e493;
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9e493;
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar9 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143d9e493;
      if ((byte)pTVar9->field_0x98 < 2) {
        EVar10 = Kinematic;
        if (pTVar9->field_0x98 == 0) {
          EVar10 = Static;
        }
      }
      else {
        EVar10 = (pTVar9->MMiscData).Property.MObjectState;
      }
      if (EVar10 != Dynamic) goto LAB_143d9e493;
      bVar8 = 1;
    }
    bVar12 = (bool)(bVar12 & bVar8);
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AreAllDynamicOrSleeping @ 143d9e4d0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllDynamicOrSleeping
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *this_00;
  IPhysicsProxyBase *pIVar3;
  FGeometryCollectionPhysicsProxy *this_01;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  EObjectStateType EVar7;
  byte bVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  FPhysicsObject **ppFVar11;
  bool bVar12;
  
  ppFVar11 = param_1->DataPtr;
  bVar12 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar1) {
      return bVar12;
    }
    this_00 = *ppFVar11;
    if ((this_00 == (FPhysicsObject *)0x0) ||
       (pIVar3 = this_00->Proxy, pIVar3 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9e5ea:
      bVar8 = 0;
    }
    else {
      if (((pIVar3->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((pIVar3->SyncTimestamp).Object)->bDeleted != false) goto LAB_143d9e5ea;
      this_01 = (FGeometryCollectionPhysicsProxy *)this_00->Proxy;
      if (this_01 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143d9e5da:
        EVar7 = FPhysicsObject::ObjectState<1>(this_00);
        if (EVar7 != Sleeping) goto LAB_143d9e5ea;
      }
      else {
        iVar2 = *(int *)&this_01->field_0x1c;
        if (iVar2 == 2) {
          pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                             (this_01,this_00->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                    &(this_01->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143d9e5da;
          pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                    &(this_01->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar9 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143d9e5da;
        pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar9->field_0xc) {
          pTVar10 = pTVar9;
        }
        if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (pTVar9->field_0xc != 0) {
            pTVar10 = pTVar9;
          }
          if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar7 = Static;
          }
          else {
            pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar10->field_0xc) {
              pTVar9 = pTVar10;
            }
            if (pTVar9 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar7 = Kinematic;
            }
            else {
              EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar9);
            }
          }
        }
        else {
          EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar10);
        }
        if (EVar7 != Dynamic) goto LAB_143d9e5da;
      }
      bVar8 = 1;
    }
    bVar12 = (bool)(bVar12 & bVar8);
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AreAllDynamicOrSleeping @ 143d9e630

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllDynamicOrSleeping
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *this_00;
  IPhysicsProxyBase *pIVar3;
  FGeometryCollectionPhysicsProxy *this_01;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  EObjectStateType EVar7;
  byte bVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  FPhysicsObject **ppFVar10;
  bool bVar11;
  
  ppFVar10 = param_1->DataPtr;
  bVar11 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar10 + param_1->ArrayNum;
  do {
    if (ppFVar10 == ppFVar1) {
      return bVar11;
    }
    this_00 = *ppFVar10;
    if ((this_00 == (FPhysicsObject *)0x0) ||
       (pIVar3 = this_00->Proxy, pIVar3 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9e71f:
      bVar8 = 0;
    }
    else {
      if (((pIVar3->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((pIVar3->SyncTimestamp).Object)->bDeleted != false) goto LAB_143d9e71f;
      this_01 = (FGeometryCollectionPhysicsProxy *)this_00->Proxy;
      if (this_01 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143d9e70f:
        EVar7 = FPhysicsObject::ObjectState<0>(this_00);
        if (EVar7 != Sleeping) goto LAB_143d9e71f;
      }
      else {
        iVar2 = *(int *)&this_01->field_0x1c;
        if (iVar2 == 2) {
          pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_01,this_00->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar9 = (TPBDRigidParticle<double,3> *)
                   (this_01->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143d9e70f;
          pTVar9 = (TPBDRigidParticle<double,3> *)
                   (this_01->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (pTVar9 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143d9e70f;
        if ((byte)pTVar9->field_0x98 < 2) {
          EVar7 = Kinematic;
          if (pTVar9->field_0x98 == 0) {
            EVar7 = Static;
          }
        }
        else {
          EVar7 = (pTVar9->MMiscData).Property.MObjectState;
        }
        if (EVar7 != Dynamic) goto LAB_143d9e70f;
      }
      bVar8 = 1;
    }
    bVar11 = (bool)(bVar11 & bVar8);
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// AreAllKinematic @ 143d9e760

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllKinematic
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EObjectStateType EVar8;
  byte bVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  FPhysicsObject **ppFVar12;
  bool bVar13;
  
  ppFVar12 = param_1->DataPtr;
  bVar13 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar12 + param_1->ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return bVar13;
    }
    pFVar3 = *ppFVar12;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9e872:
      bVar9 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((pIVar4->SyncTimestamp).Object)->bDeleted != false) ||
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) goto LAB_143d9e872;
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar10 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9e872;
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143d9e872;
      pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar10->field_0xc) {
        pTVar11 = pTVar10;
      }
      if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar10->field_0xc != 0) {
          pTVar11 = pTVar10;
        }
        if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar8 = Static;
        }
        else {
          pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar11->field_0xc) {
            pTVar10 = pTVar11;
          }
          if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar8 = Kinematic;
          }
          else {
            EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar10);
          }
        }
      }
      else {
        EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
      }
      if (EVar8 != Kinematic) goto LAB_143d9e872;
      bVar9 = 1;
    }
    bVar13 = (bool)(bVar13 & bVar9);
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// AreAllKinematic @ 143d9e8b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  EObjectStateType EVar10;
  FPhysicsObject **ppFVar11;
  bool bVar12;
  
  ppFVar11 = param_1->DataPtr;
  bVar12 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar1) {
      return bVar12;
    }
    pFVar3 = *ppFVar11;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9e993:
      bVar8 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((pIVar4->SyncTimestamp).Object)->bDeleted != false) ||
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) goto LAB_143d9e993;
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9e993;
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar9 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143d9e993;
      if ((byte)pTVar9->field_0x98 < 2) {
        EVar10 = Kinematic;
        if (pTVar9->field_0x98 == 0) {
          EVar10 = Static;
        }
      }
      else {
        EVar10 = (pTVar9->MMiscData).Property.MObjectState;
      }
      if (EVar10 != Kinematic) goto LAB_143d9e993;
      bVar8 = 1;
    }
    bVar12 = (bool)(bVar12 & bVar8);
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AreAllRigidBody @ 143d9e9d0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllRigidBody
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EObjectStateType EVar8;
  byte bVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  FPhysicsObject **ppFVar12;
  bool bVar13;
  
  ppFVar12 = param_1->DataPtr;
  bVar13 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar12 + param_1->ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return bVar13;
    }
    pFVar3 = *ppFVar12;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9eade:
      bVar9 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (((pIVar4->SyncTimestamp).Object)->bDeleted != false) goto LAB_143d9eade;
      this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
      if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
        iVar2 = *(int *)&this_00->field_0x1c;
        if (iVar2 == 2) {
          pTVar10 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                              (this_00,pFVar3->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143d9eada;
          pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar10 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar10->field_0xc) {
            pTVar11 = pTVar10;
          }
          if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (pTVar10->field_0xc != 0) {
              pTVar11 = pTVar10;
            }
            if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar8 = Static;
            }
            else {
              pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar11->field_0xc) {
                pTVar10 = pTVar11;
              }
              if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                EVar8 = Kinematic;
              }
              else {
                EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar10);
              }
            }
          }
          else {
            EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
          }
          if (EVar8 == Static) goto LAB_143d9eade;
        }
      }
LAB_143d9eada:
      bVar9 = 1;
    }
    bVar13 = (bool)(bVar13 & bVar9);
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// AreAllRigidBody @ 143d9eb20

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllRigidBody
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  EObjectStateType EVar10;
  FPhysicsObject **ppFVar11;
  bool bVar12;
  
  ppFVar11 = param_1->DataPtr;
  bVar12 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar1) {
      return bVar12;
    }
    pFVar3 = *ppFVar11;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9ec03:
      bVar8 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (((pIVar4->SyncTimestamp).Object)->bDeleted != false) goto LAB_143d9ec03;
      this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
      if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
        iVar2 = *(int *)&this_00->field_0x1c;
        if (iVar2 == 2) {
          pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_00,pFVar3->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar9 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143d9ebff;
          pTVar9 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (pTVar9 != (TPBDRigidParticle<double,3> *)0x0) {
          if ((byte)pTVar9->field_0x98 < 2) {
            EVar10 = Kinematic;
            if (pTVar9->field_0x98 == 0) {
              EVar10 = Static;
            }
          }
          else {
            EVar10 = (pTVar9->MMiscData).Property.MObjectState;
          }
          if (EVar10 == Static) goto LAB_143d9ec03;
        }
      }
LAB_143d9ebff:
      bVar8 = 1;
    }
    bVar12 = (bool)(bVar12 & bVar8);
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AreAllShapesQueryEnabled @ 143d9ec40

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllShapesQueryEnabled
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar3;
  int iVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  bool bVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar8;
  longlong lVar9;
  FPhysicsObject **ppFVar10;
  undefined1 local_res10 [8];
  
  if (param_1->ArrayNum == 0) {
LAB_143d9ed38:
    bVar6 = false;
  }
  else {
    ppFVar10 = param_1->DataPtr;
    ppFVar2 = ppFVar10 + param_1->ArrayNum;
    for (; ppFVar10 != ppFVar2; ppFVar10 = ppFVar10 + 1) {
      pFVar5 = *ppFVar10;
      if ((pFVar5 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar4 = *(int *)&this_00->field_0x1c;
        if (iVar4 == 2) {
          pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                             (this_00,pFVar5->BodyIndex);
        }
        else if (iVar4 == 0xb) {
          pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                    &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar4 != 0xc) goto LAB_143d9ed27;
          pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                    &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          FVar8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   )TGeometryParticlesImp<double,3,0>::ShapesArray
                              (*(TGeometryParticlesImp<double,3,0> **)pTVar7,
                               *(int *)&pTVar7->field_0x8);
          iVar4 = *(int *)((longlong)FVar8 + 0x10);
          piVar1 = (int *)((longlong)FVar8 + 0x10);
          if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                *)((longlong)FVar8 + 8) !=
              (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )0x0) {
            FVar8 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      *)((longlong)FVar8 + 8);
          }
          FVar3 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   )((longlong)FVar8 + (longlong)iVar4 * 8);
          while( true ) {
            if (*piVar1 != iVar4) {
              `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            if (FVar8 == FVar3) break;
            lVar9 = 0x79;
            if ((*(byte *)(*(longlong *)FVar8 + 8) & 3) != 0) {
              lVar9 = 0x71;
            }
            if ((*(byte *)(lVar9 + *(longlong *)FVar8) & 2) == 0) goto LAB_143d9ed38;
            FVar8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     )((longlong)FVar8 + 8);
          }
        }
      }
LAB_143d9ed27:
    }
    bVar6 = true;
  }
  return bVar6;
}

// AreAllShapesQueryEnabled @ 143d9ed60

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllShapesQueryEnabled
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  longlong *plVar2;
  int iVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  bool bVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  longlong lVar7;
  longlong *plVar8;
  FPhysicsObject **ppFVar9;
  undefined1 local_res10 [8];
  
  if (param_1->ArrayNum == 0) {
LAB_143d9ee53:
    bVar5 = false;
  }
  else {
    ppFVar9 = param_1->DataPtr;
    ppFVar1 = ppFVar9 + param_1->ArrayNum;
    for (; ppFVar9 != ppFVar1; ppFVar9 = ppFVar9 + 1) {
      pFVar4 = *ppFVar9;
      if ((pFVar4 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar3 = *(int *)&this_00->field_0x1c;
        if (iVar3 == 2) {
          pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_00,pFVar4->BodyIndex);
        }
        else if (iVar3 == 0xb) {
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar3 != 0xc) goto LAB_143d9ee42;
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
          plVar8 = (longlong *)&pTVar6->field_0x80;
          iVar3 = *(int *)&pTVar6->field_0x90;
          if (*(longlong **)&pTVar6->field_0x88 != (longlong *)0x0) {
            plVar8 = *(longlong **)&pTVar6->field_0x88;
          }
          plVar2 = plVar8 + iVar3;
          while( true ) {
            if (*(int *)&pTVar6->field_0x90 != iVar3) {
              `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            if (plVar8 == plVar2) break;
            lVar7 = 0x79;
            if ((*(byte *)(*plVar8 + 8) & 3) != 0) {
              lVar7 = 0x71;
            }
            if ((*(byte *)(lVar7 + *plVar8) & 2) == 0) goto LAB_143d9ee53;
            plVar8 = plVar8 + 1;
          }
        }
      }
LAB_143d9ee42:
    }
    bVar5 = true;
  }
  return bVar5;
}

// AreAllSleeping @ 143d9ee80

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllSleeping
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EObjectStateType EVar8;
  byte bVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  FPhysicsObject **ppFVar12;
  bool bVar13;
  
  ppFVar12 = param_1->DataPtr;
  bVar13 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar12 + param_1->ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return bVar13;
    }
    pFVar3 = *ppFVar12;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9ef8c:
      bVar9 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((pIVar4->SyncTimestamp).Object)->bDeleted != false) ||
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) goto LAB_143d9ef8c;
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar10 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9ef8c;
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143d9ef8c;
      pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar10->field_0xc) {
        pTVar11 = pTVar10;
      }
      if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar10->field_0xc != 0) {
          pTVar11 = pTVar10;
        }
        if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar8 = Static;
        }
        else {
          pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar11->field_0xc) {
            pTVar10 = pTVar11;
          }
          if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar8 = Kinematic;
          }
          else {
            EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar10);
          }
        }
      }
      else {
        EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
      }
      if (EVar8 != Sleeping) goto LAB_143d9ef8c;
      bVar9 = 1;
    }
    bVar13 = (bool)(bVar13 & bVar9);
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// AreAllSleeping @ 143d9efd0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllSleeping
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  EObjectStateType EVar10;
  FPhysicsObject **ppFVar11;
  bool bVar12;
  
  ppFVar11 = param_1->DataPtr;
  bVar12 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar1) {
      return bVar12;
    }
    pFVar3 = *ppFVar11;
    if ((pFVar3 == (FPhysicsObject *)0x0) ||
       (pIVar4 = pFVar3->Proxy, pIVar4 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9f0b4:
      bVar8 = 0;
    }
    else {
      if (((pIVar4->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((pIVar4->SyncTimestamp).Object)->bDeleted != false) ||
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) goto LAB_143d9f0b4;
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143d9f0b4;
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar9 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143d9f0b4;
      if ((byte)pTVar9->field_0x98 < 2) {
        EVar10 = Kinematic;
        if (pTVar9->field_0x98 == 0) {
          EVar10 = Static;
        }
      }
      else {
        EVar10 = (pTVar9->MMiscData).Property.MObjectState;
      }
      if (EVar10 != Sleeping) goto LAB_143d9f0b4;
      bVar8 = 1;
    }
    bVar12 = (bool)(bVar12 & bVar8);
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// AreAllValid @ 143d9f0f0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::AreAllValid
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  FPhysicsObject **ppFVar7;
  bool bVar8;
  
  ppFVar7 = param_1->DataPtr;
  bVar8 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  do {
    if (ppFVar7 == ppFVar1) {
      return bVar8;
    }
    if ((*ppFVar7 == (FPhysicsObject *)0x0) ||
       (pIVar2 = (*ppFVar7)->Proxy, pIVar2 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9f16a:
      bVar6 = 0;
    }
    else {
      if (((pIVar2->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (((pIVar2->SyncTimestamp).Object)->bDeleted != false) goto LAB_143d9f16a;
      bVar6 = 1;
    }
    bVar8 = (bool)(bVar8 & bVar6);
    ppFVar7 = ppFVar7 + 1;
  } while( true );
}

// AreAllValid @ 143d9f1a0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  FPhysicsObject **ppFVar7;
  bool bVar8;
  
  ppFVar7 = param_1->DataPtr;
  bVar8 = param_1->ArrayNum != 0;
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  do {
    if (ppFVar7 == ppFVar1) {
      return bVar8;
    }
    if ((*ppFVar7 == (FPhysicsObject *)0x0) ||
       (pIVar2 = (*ppFVar7)->Proxy, pIVar2 == (IPhysicsProxyBase *)0x0)) {
LAB_143d9f21a:
      bVar6 = 0;
    }
    else {
      if (((pIVar2->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (((pIVar2->SyncTimestamp).Object)->bDeleted != false) goto LAB_143d9f21a;
      bVar6 = 1;
    }
    bVar8 = (bool)(bVar8 & bVar6);
    ppFVar7 = ppFVar7 + 1;
  } while( true );
}

// CreateAccelerationStructureHandle @ 143da3c30

FAccelerationStructureHandle * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::CreateAccelerationStructureHandle
          (FReadPhysicsObjectInterface<1> *this,FAccelerationStructureHandle *__return_storage_ptr__
          ,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  TGeometryParticle<double,3> **ppTVar5;
  FUniqueIdx *pFVar6;
  FAccelerationStructureHandle *pFVar7;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)
               FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar4 = *(TGeometryParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else if (iVar1 == 0xc) {
      pTVar4 = *(TGeometryParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
  }
  ppTVar5 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,(int)pTVar4->_padding_
                      );
  __return_storage_ptr__->ExternalGeometryParticle = *ppTVar5;
  __return_storage_ptr__->GeometryParticleHandle = pTVar4;
  pFVar6 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,(int)pTVar4->_padding_)
  ;
  (__return_storage_ptr__->CachedUniqueIdx).Idx = pFVar6->Idx;
  iVar1 = (__return_storage_ptr__->CachedUniqueIdx).Idx;
  (__return_storage_ptr__->UnionQueryFilterData).Word2 = 0;
  (__return_storage_ptr__->UnionQueryFilterData).Word3 = 0;
  (__return_storage_ptr__->UnionQueryFilterData).Word0 = 0;
  (__return_storage_ptr__->UnionQueryFilterData).Word1 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word2 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word3 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word0 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word1 = 0;
  __return_storage_ptr__->bCanPrePreFilter = false;
  if ((iVar1 == -1) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564218025>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xf57,"CachedUniqueIdx.IsValid()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FAccelerationStructureHandle *)(*pcVar2)();
    return pFVar7;
  }
  FAccelerationStructureHandle::
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (pTVar4,&__return_storage_ptr__->UnionQueryFilterData);
  FAccelerationStructureHandle::
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (pTVar4,&__return_storage_ptr__->UnionSimFilterData);
  __return_storage_ptr__->bCanPrePreFilter = true;
  return __return_storage_ptr__;
}

// CreateAccelerationStructureHandle @ 143da3d40

/* WARNING: Type propagation algorithm not settling */

FAccelerationStructureHandle * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::CreateAccelerationStructureHandle
          (FReadPhysicsObjectInterface<0> *this,FAccelerationStructureHandle *__return_storage_ptr__
          ,FPhysicsObject *param_1)

{
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TPBDRigidParticle<double,3> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FAccelerationStructureHandle *pFVar6;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  pTVar4 = (TPBDRigidParticle<double,3> *)0x0;
  if (this_00 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143da3dc3:
    __return_storage_ptr__->ExternalGeometryParticle = (TGeometryParticle<double,3> *)0x0;
  }
  else {
    iVar3 = *(int *)&this_00->field_0x1c;
    if (iVar3 == 2) {
      pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar4 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143da3dc3;
      pTVar4 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    __return_storage_ptr__->ExternalGeometryParticle = (TGeometryParticle<double,3> *)pTVar4;
    if (pTVar4 != (TPBDRigidParticle<double,3> *)0x0) {
      if (*(undefined8 **)&pTVar4->field_0x10 == (undefined8 *)0x0) {
        __return_storage_ptr__->GeometryParticleHandle =
             (TGeometryParticleHandleImp<double,3,1> *)0x0;
        iVar3 = *(int *)&pTVar4->field_0x58;
      }
      else {
        pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)
                 (**(code **)**(undefined8 **)&pTVar4->field_0x10)();
        __return_storage_ptr__->GeometryParticleHandle = pTVar5;
        iVar3 = *(int *)&pTVar4->field_0x58;
      }
      goto LAB_143da3dd2;
    }
  }
  __return_storage_ptr__->GeometryParticleHandle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  iVar3 = -1;
LAB_143da3dd2:
  (__return_storage_ptr__->CachedUniqueIdx).Idx = iVar3;
  (__return_storage_ptr__->UnionQueryFilterData).Word2 = 0;
  (__return_storage_ptr__->UnionQueryFilterData).Word3 = 0;
  (__return_storage_ptr__->UnionQueryFilterData).Word0 = 0;
  (__return_storage_ptr__->UnionQueryFilterData).Word1 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word2 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word3 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word0 = 0;
  (__return_storage_ptr__->UnionSimFilterData).Word1 = 0;
  __return_storage_ptr__->bCanPrePreFilter = false;
  if (pTVar4 != (TPBDRigidParticle<double,3> *)0x0) {
    if (iVar3 == -1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564218010>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xf66,"CachedUniqueIdx.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FAccelerationStructureHandle *)(*pcVar1)();
        return pFVar6;
      }
    }
    if (CVars::bEnableAsyncInitBody == false) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FAccelerationStructureHandle *)(*pcVar1)();
          return pFVar6;
        }
      }
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
              ((TGeometryParticle<double,3> *)pTVar4,&__return_storage_ptr__->UnionQueryFilterData);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
              ((TGeometryParticle<double,3> *)pTVar4,&__return_storage_ptr__->UnionSimFilterData);
    __return_storage_ptr__->bCanPrePreFilter = true;
  }
  return __return_storage_ptr__;
}

// GetAllParticles @ 143da9350

TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetAllParticles
          (FReadPhysicsObjectInterface<1> *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FPhysicsObject **ppFVar10;
  TPBDRigidParticleHandleImp<double,3,1> *local_18 [2];
  
  uVar3 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  ppFVar10 = param_1->DataPtr;
  ppFVar2 = ppFVar10 + (int)uVar3;
  do {
    if (ppFVar10 == ppFVar2) {
      return __return_storage_ptr__;
    }
    pFVar4 = *ppFVar10;
    if (pFVar4 != (FPhysicsObject *)0x0) {
      this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy;
      if (this_00 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143da94ac:
        local_18[0] = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      }
      else {
        iVar8 = *(int *)&this_00->field_0x1c;
        if (iVar8 == 2) {
          local_18[0] = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                                  (this_00,pFVar4->BodyIndex);
        }
        else if (iVar8 == 0xb) {
          local_18[0] = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar8 != 0xc) goto LAB_143da94ac;
          local_18[0] = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (local_18[0] != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 < pFVar5 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar9 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar6)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(TPBDRigidParticleHandleImp<double,3,1> **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
        }
      }
    }
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// GetAllParticles @ 143da94f0

/* WARNING: Type propagation algorithm not settling */

TArray<Chaos::TGeometryParticle<double,3>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetAllParticles
          (FReadPhysicsObjectInterface<0> *this,
          TArray<Chaos::TGeometryParticle<double,3>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<Chaos::TGeometryParticle<double,3>_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FPhysicsObject **ppFVar10;
  TPBDRigidParticle<double,3> *local_18 [2];
  
  uVar3 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  ppFVar10 = param_1->DataPtr;
  ppFVar2 = ppFVar10 + (int)uVar3;
  do {
    if (ppFVar10 == ppFVar2) {
      return __return_storage_ptr__;
    }
    pFVar4 = *ppFVar10;
    if (pFVar4 != (FPhysicsObject *)0x0) {
      this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy;
      if (this_00 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143da964c:
        local_18[0] = (TPBDRigidParticle<double,3> *)0x0;
      }
      else {
        iVar8 = *(int *)&this_00->field_0x1c;
        if (iVar8 == 2) {
          local_18[0] = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                                  (this_00,pFVar4->BodyIndex);
        }
        else if (iVar8 == 0xb) {
          local_18[0] = (TPBDRigidParticle<double,3> *)
                        (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar8 != 0xc) goto LAB_143da964c;
          local_18[0] = (TPBDRigidParticle<double,3> *)
                        (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (local_18[0] != (TPBDRigidParticle<double,3> *)0x0) {
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 < pFVar5 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar9 = (TArray<Chaos::TGeometryParticle<double,3>_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar6)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(TPBDRigidParticle<double,3> **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
        }
      }
    }
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// GetAllRigidParticles @ 143da9690

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
          (FReadPhysicsObjectInterface<1> *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,
          bool param_2)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FPhysicsObject **ppFVar11;
  TPBDRigidParticleHandleImp<double,3,1> *local_28 [2];
  
  uVar3 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + (int)uVar3;
  do {
    if (ppFVar11 == ppFVar2) {
      return __return_storage_ptr__;
    }
    pFVar4 = *ppFVar11;
    local_28[0] = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if ((pFVar4 == (FPhysicsObject *)0x0) ||
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) {
LAB_143da975e:
      if (param_2) goto LAB_143da9767;
    }
    else {
      iVar8 = *(int *)&this_00->field_0x1c;
      if (iVar8 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar8 == 0xb) {
        pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar8 != 0xc) goto LAB_143da975e;
        pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if ((pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         (local_28[0] = (TPBDRigidParticleHandleImp<double,3,1> *)0x0, 1 < (byte)pTVar9->field_0xc))
      {
        local_28[0] = pTVar9;
      }
      if (local_28[0] == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143da975e;
LAB_143da9767:
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar10;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(TPBDRigidParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// GetAllRigidParticles @ 143da9840

/* WARNING: Type propagation algorithm not settling */

TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetAllRigidParticles
          (FReadPhysicsObjectInterface<0> *this,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,
          bool param_2)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FPhysicsObject **ppFVar11;
  TPBDRigidParticle<double,3> *local_28 [2];
  
  uVar3 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + (int)uVar3;
  do {
    if (ppFVar11 == ppFVar2) {
      return __return_storage_ptr__;
    }
    pFVar4 = *ppFVar11;
    local_28[0] = (TPBDRigidParticle<double,3> *)0x0;
    if ((pFVar4 == (FPhysicsObject *)0x0) ||
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 == (FGeometryCollectionPhysicsProxy *)0x0)) {
LAB_143da9911:
      if (param_2) goto LAB_143da991a;
    }
    else {
      iVar8 = *(int *)&this_00->field_0x1c;
      if (iVar8 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar8 == 0xb) {
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar8 != 0xc) goto LAB_143da9911;
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if ((pTVar9 != (TPBDRigidParticle<double,3> *)0x0) &&
         (local_28[0] = (TPBDRigidParticle<double,3> *)0x0, 1 < (byte)pTVar9->field_0x98)) {
        local_28[0] = pTVar9;
      }
      if (local_28[0] == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143da9911;
LAB_143da991a:
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar6)();
        return pTVar10;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(TPBDRigidParticle<double,3> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// GetAllShapes @ 143da99f0

TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetAllShapes
          (FReadPhysicsObjectInterface<1> *this,
          TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar3;
  int iVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar11;
  TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FPhysicsObject **ppFVar13;
  undefined1 local_res10 [8];
  undefined8 local_38 [2];
  
  ppFVar13 = param_1->DataPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ppFVar2 = ppFVar13 + param_1->ArrayNum;
  do {
    if (ppFVar13 == ppFVar2) {
      return __return_storage_ptr__;
    }
    pFVar5 = *ppFVar13;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar10 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar5->BodyIndex);
      }
      else if (iVar4 == 0xb) {
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143da9b7e;
        pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar10 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        FVar11 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             (*(TGeometryParticlesImp<double,3,0> **)pTVar10,
                              *(int *)&pTVar10->field_0x8);
        iVar4 = *(int *)((longlong)FVar11 + 0x10);
        piVar1 = (int *)((longlong)FVar11 + 0x10);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar11 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar11 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar11 + 8);
        }
        FVar3 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )((longlong)FVar11 + (longlong)iVar4 * 8);
        while( true ) {
          if (*piVar1 != iVar4) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar11 == FVar3) break;
          local_38[0] = *(undefined8 *)FVar11;
          pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar12;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          FVar11 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )((longlong)FVar11 + 8);
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
               local_38[0];
        }
      }
    }
LAB_143da9b7e:
    ppFVar13 = ppFVar13 + 1;
  } while( true );
}

// GetAllShapes @ 143da9bc0

/* WARNING: Type propagation algorithm not settling */

TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetAllShapes
          (FReadPhysicsObjectInterface<0> *this,
          TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
  FPhysicsObject **ppFVar12;
  undefined1 local_res10 [8];
  undefined8 local_38 [2];
  
  ppFVar12 = param_1->DataPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ppFVar1 = ppFVar12 + param_1->ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return __return_storage_ptr__;
    }
    pFVar4 = *ppFVar12;
    if ((pFVar4 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143da9d4d;
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar9 != (TPBDRigidParticle<double,3> *)0x0) {
        puVar11 = (undefined8 *)&pTVar9->field_0x80;
        iVar3 = *(int *)&pTVar9->field_0x90;
        if (*(undefined8 **)&pTVar9->field_0x88 != (undefined8 *)0x0) {
          puVar11 = *(undefined8 **)&pTVar9->field_0x88;
        }
        puVar2 = puVar11 + iVar3;
        while( true ) {
          if (*(int *)&pTVar9->field_0x90 != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar11 == puVar2) break;
          local_38[0] = *puVar11;
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<Chaos::FPerShapeData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          puVar11 = puVar11 + 1;
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_38[0];
        }
      }
    }
LAB_143da9d4d:
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// GetAllThreadShapes @ 143da9d90

TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetAllThreadShapes
          (FReadPhysicsObjectInterface<1> *this,
          TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar13;
  TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 *puVar15;
  FPhysicsObject **ppFVar16;
  undefined1 local_res10 [8];
  undefined8 local_38 [2];
  
  ppFVar16 = param_1->DataPtr;
  iVar3 = param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ppFVar2 = ppFVar16 + iVar3;
  do {
    if (ppFVar16 == ppFVar2) {
      return __return_storage_ptr__;
    }
    pFVar5 = *ppFVar16;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar13 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar13 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143da9f80;
        pTVar13 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar13 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        uVar4 = *(uint *)&pTVar13->field_0x8;
        lVar6 = *(longlong *)pTVar13;
        uVar11 = 0;
        if ((int)uVar4 < *(int *)(lVar6 + 0x100)) {
          uVar11 = ~uVar4 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar14 = (TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar14;
        }
        lVar6 = *(longlong *)(lVar6 + 0xf8);
        puVar15 = (undefined8 *)(lVar6 + (longlong)(int)uVar4 * 0x18);
        puVar7 = *(undefined8 **)(lVar6 + 8 + (longlong)(int)uVar4 * 0x18);
        piVar1 = (int *)(puVar15 + 2);
        iVar3 = *piVar1;
        if (puVar7 != (undefined8 *)0x0) {
          puVar15 = puVar7;
        }
        puVar7 = puVar15 + iVar3;
        while( true ) {
          if (*piVar1 != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar15 == puVar7) break;
          local_38[0] = *puVar15;
          pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            pTVar14 = (TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
            return pTVar14;
          }
          iVar12 = __return_storage_ptr__->ArrayNum;
          if (iVar12 == __return_storage_ptr__->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          puVar15 = puVar15 + 1;
          __return_storage_ptr__->ArrayNum = iVar12 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 8) =
               local_38[0];
        }
      }
    }
LAB_143da9f80:
    ppFVar16 = ppFVar16 + 1;
  } while( true );
}

// GetAllThreadShapes @ 143da9fc0

/* WARNING: Type propagation algorithm not settling */

TArray<Chaos::FShapeInstanceProxy_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetAllThreadShapes
          (FReadPhysicsObjectInterface<0> *this,
          TArray<Chaos::FShapeInstanceProxy_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  TArray<Chaos::FShapeInstanceProxy_*,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
  FPhysicsObject **ppFVar12;
  undefined1 local_res10 [8];
  undefined8 local_38 [2];
  
  ppFVar12 = param_1->DataPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ppFVar1 = ppFVar12 + param_1->ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return __return_storage_ptr__;
    }
    pFVar4 = *ppFVar12;
    if ((pFVar4 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143daa14d;
        pTVar9 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar9 != (TPBDRigidParticle<double,3> *)0x0) {
        puVar11 = (undefined8 *)&pTVar9->field_0x80;
        iVar3 = *(int *)&pTVar9->field_0x90;
        if (*(undefined8 **)&pTVar9->field_0x88 != (undefined8 *)0x0) {
          puVar11 = *(undefined8 **)&pTVar9->field_0x88;
        }
        puVar2 = puVar11 + iVar3;
        while( true ) {
          if (*(int *)&pTVar9->field_0x90 != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar11 == puVar2) break;
          local_38[0] = *puVar11;
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<Chaos::FShapeInstanceProxy_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar6)();
            return pTVar10;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          puVar11 = puVar11 + 1;
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_38[0];
        }
      }
    }
LAB_143daa14d:
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// GetBounds @ 143daa190

TBox<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetBounds
          (FReadPhysicsObjectInterface<1> *this,TBox<double> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TBox<double> *pTVar12;
  FPhysicsObject **ppFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_8f;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  double local_70;
  double dStack_68;
  double local_60;
  
  ppFVar13 = param_1->DataPtr;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  ppFVar1 = ppFVar13 + param_1->ArrayNum;
  do {
    if (ppFVar13 == ppFVar1) {
      return __return_storage_ptr__;
    }
    pFVar5 = *ppFVar13;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143daa3cb;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        uVar4 = *(uint *)&pTVar11->field_0x8;
        lVar6 = *(longlong *)pTVar11;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar17 = 0;
        uVar18 = 0;
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uVar19 = 0;
        uVar20 = 0;
        local_c8 = 0;
        local_f8 = 0.0;
        uStack_f0 = 0.0;
        uVar10 = 0;
        if ((int)uVar4 < *(int *)(lVar6 + 0x68)) {
          uVar10 = ~uVar4 >> 0x1f;
        }
        local_e8 = 0.0;
        dStack_e0 = 0.0;
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TBox<double> *)(*pcVar8)();
          return pTVar12;
        }
        plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x60) + (longlong)(int)uVar4 * 8);
        if ((plVar7 == (longlong *)0x0) || (*(char *)((longlong)plVar7 + 0x16) == '\0')) {
          uVar14 = 0;
          uVar15 = 0;
        }
        else {
          (**(code **)(*plVar7 + 0x90))(plVar7,&local_88);
          local_a8 = SUB84(local_70,0);
          uStack_a4 = (undefined4)((ulonglong)local_70 >> 0x20);
          uStack_a0 = SUB84(dStack_68,0);
          uStack_9c = (undefined4)((ulonglong)dStack_68 >> 0x20);
          local_c8 = CONCAT71(uStack_8f,1);
          uVar14 = (undefined4)local_c8;
          uVar15 = (undefined4)((uint7)uStack_8f >> 0x18);
          uVar19 = SUB84(local_60,0);
          uVar20 = (undefined4)((ulonglong)local_60 >> 0x20);
          local_e8 = (double)CONCAT44(uStack_74,local_78);
          dStack_e0 = local_70;
          local_d8 = dStack_68;
          dStack_d0 = local_60;
          local_f8 = (double)CONCAT44(uStack_84,local_88);
          uStack_f0 = (double)CONCAT44(uStack_7c,uStack_80);
          uVar17 = local_78;
          uVar18 = uStack_74;
          uVar21 = local_88;
          uVar22 = uStack_84;
          uVar23 = uStack_80;
          uVar24 = uStack_7c;
        }
        if ((char)local_c8 != '\0') {
          if (__return_storage_ptr__->IsValid == '\0') {
            *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar21;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar22;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar23;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar24;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar17;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar18;
            *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = local_a8;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uStack_a4;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uStack_a0;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uStack_9c;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar19;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar20;
            __return_storage_ptr__->IsValid = (char)uVar14;
            __return_storage_ptr__->Pad[0] = (char)((uint)uVar14 >> 8);
            __return_storage_ptr__->Pad[1] = (char)((uint)uVar14 >> 0x10);
            __return_storage_ptr__->Pad[2] = (char)((uint)uVar14 >> 0x18);
            __return_storage_ptr__->Pad[3] = (char)uVar15;
            __return_storage_ptr__->Pad[4] = (char)((uint)uVar15 >> 8);
            __return_storage_ptr__->Pad[5] = (char)((uint)uVar15 >> 0x10);
            __return_storage_ptr__->Pad[6] = (char)((uint)uVar15 >> 0x18);
          }
          else {
            uVar17 = SUB84(local_f8,0);
            uVar18 = (undefined4)((ulonglong)local_f8 >> 0x20);
            dVar16 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
            if (dVar16 <= local_f8) {
              uVar17 = SUB84(dVar16,0);
              uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
            }
            dVar16 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
            if (dVar16 <= uStack_f0) {
              uStack_f0 = dVar16;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
            dVar16 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
            uVar17 = SUB84(dVar16,0);
            uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
            if (local_e8 <= dVar16) {
              uVar17 = SUB84(local_e8,0);
              uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = uStack_f0;
            dVar16 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            if (dVar16 <= dStack_e0) {
              dVar16 = dStack_e0;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            if (dVar2 <= local_d8) {
              uVar17 = SUB84(local_d8,0);
              uVar18 = (undefined4)((ulonglong)local_d8 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar16;
            dVar16 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            if (dVar16 <= dStack_d0) {
              dVar16 = dStack_d0;
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar16;
          }
        }
      }
    }
LAB_143daa3cb:
    ppFVar13 = ppFVar13 + 1;
  } while( true );
}

// GetBounds @ 143daa420

/* WARNING: Type propagation algorithm not settling */

TBox<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetBounds
          (FReadPhysicsObjectInterface<0> *this,TBox<double> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong *plVar4;
  bool bVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  FPhysicsObject **ppFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined7 uStack_77;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  ppFVar7 = param_1->DataPtr;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  do {
    if (ppFVar7 == ppFVar1) {
      return __return_storage_ptr__;
    }
    pFVar3 = *ppFVar7;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143daa5ee;
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
        bVar5 = false;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar12 = 0;
        uVar13 = 0;
        local_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uVar14 = 0;
        uVar15 = 0;
        plVar4 = *(longlong **)&pTVar6->field_0x50;
        if ((plVar4 == (longlong *)0x0) || (*(char *)((longlong)plVar4 + 0x16) == '\0')) {
          uVar8 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*plVar4 + 0x90))(plVar4,&local_38);
          local_90 = (undefined4)local_20;
          uStack_8c = (undefined4)((ulonglong)local_20 >> 0x20);
          uStack_88 = (undefined4)uStack_18;
          uStack_84 = (undefined4)((ulonglong)uStack_18 >> 0x20);
          uVar8 = (undefined4)CONCAT71(uStack_77,1);
          uVar9 = (undefined4)((uint7)uStack_77 >> 0x18);
          uVar14 = (undefined4)local_10;
          uVar15 = (undefined4)((ulonglong)local_10 >> 0x20);
          bVar5 = true;
          uVar12 = local_28;
          uVar13 = uStack_24;
          uVar16 = local_38;
          uVar17 = uStack_34;
          uVar18 = uStack_30;
          uVar19 = uStack_2c;
        }
        if (bVar5) {
          if (__return_storage_ptr__->IsValid == '\0') {
            *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar16;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar17;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar18;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar19;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar12;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar13;
            *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = local_90;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uStack_8c;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uStack_88;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uStack_84;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar14;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar15;
            __return_storage_ptr__->IsValid = (char)uVar8;
            __return_storage_ptr__->Pad[0] = (char)((uint)uVar8 >> 8);
            __return_storage_ptr__->Pad[1] = (char)((uint)uVar8 >> 0x10);
            __return_storage_ptr__->Pad[2] = (char)((uint)uVar8 >> 0x18);
            __return_storage_ptr__->Pad[3] = (char)uVar9;
            __return_storage_ptr__->Pad[4] = (char)((uint)uVar9 >> 8);
            __return_storage_ptr__->Pad[5] = (char)((uint)uVar9 >> 0x10);
            __return_storage_ptr__->Pad[6] = (char)((uint)uVar9 >> 0x18);
          }
          else {
            dVar11 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
            dVar10 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
            uVar8 = SUB84(dVar11,0);
            uVar9 = (int)((ulonglong)dVar11 >> 0x20);
            if ((double)CONCAT44(uVar17,uVar16) <= dVar11) {
              uVar8 = uVar16;
              uVar9 = uVar17;
            }
            if ((double)CONCAT44(uVar19,uVar18) <= dVar10) {
              dVar10 = (double)CONCAT44(uVar19,uVar18);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar9,uVar8);
            dVar11 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar10;
            uVar16 = SUB84(dVar11,0);
            uVar17 = (int)((ulonglong)dVar11 >> 0x20);
            if ((double)CONCAT44(uVar13,uVar12) <= dVar11) {
              uVar16 = uVar12;
              uVar17 = uVar13;
            }
            dVar11 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            if (dVar11 <= (double)CONCAT44(uStack_8c,local_90)) {
              dVar11 = (double)CONCAT44(uStack_8c,local_90);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar17,uVar16);
            dVar10 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
            if ((double)CONCAT44(uStack_84,uStack_88) <= dVar10) {
              uStack_88 = SUB84(dVar10,0);
              uStack_84 = (undefined4)((ulonglong)dVar10 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar11;
            dVar11 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            if (dVar11 <= (double)CONCAT44(uVar15,uVar14)) {
              dVar11 = (double)CONCAT44(uVar15,uVar14);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uStack_84,uStack_88);
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar11;
          }
        }
      }
    }
LAB_143daa5ee:
    ppFVar7 = ppFVar7 + 1;
  } while( true );
}

// GetClosestPhysicsBodyFromLocation @ 143daa620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FClosestPhysicsObjectResult * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetClosestPhysicsBodyFromLocation
          (FReadPhysicsObjectInterface<1> *this,FClosestPhysicsObjectResult *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,TVector<double> *param_2)

{
  FPhysicsObject **ppFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  uint uVar18;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar19;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar20;
  TVector<double,3> *pTVar21;
  TQuat<double> *pTVar22;
  FClosestPhysicsObjectResult *pFVar23;
  FPhysicsObject **ppFVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined4 uVar57;
  undefined8 uVar58;
  undefined8 uVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  double dStack_1e0;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  TQuat<double> local_f8 [4];
  
  ppFVar24 = param_1->DataPtr;
  __return_storage_ptr__->PhysicsObject = (FPhysicsObject *)0x0;
  __return_storage_ptr__->ClosestDistance = 0.0;
  auVar16 = ___xmm_00000000000000003ff0000000000000;
  ppFVar1 = ppFVar24 + param_1->ArrayNum;
  do {
    if (ppFVar24 == ppFVar1) {
      GlobalVectorConstants::DoubleOne2d.m128d_f64[0] =
           GlobalVectorConstants::DoubleOne2d.m128d_f64[0];
      GlobalVectorConstants::DoubleOne2d.m128d_f64[1] =
           GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
      GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] =
           GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
      GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] =
           GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
      GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] =
           GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
      GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] =
           GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      return __return_storage_ptr__;
    }
    pFVar5 = *ppFVar24;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (pFVar6 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       pFVar6 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&pFVar6->field_0x1c;
      if (iVar3 == 2) {
        pTVar19 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (pFVar6,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar19 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(pFVar6->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143daab70;
        pTVar19 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(pFVar6->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar19 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pFVar6 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar61 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (pFVar6 != (FGeometryCollectionPhysicsProxy *)0x0) {
          iVar3 = *(int *)&pFVar6->field_0x1c;
          if (iVar3 == 2) {
            pTVar20 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                                (pFVar6,pFVar5->BodyIndex);
          }
          else if (iVar3 == 0xb) {
            pTVar20 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                       &(pFVar6->Parameters).Name.Data.ArrayNum;
          }
          else {
            if (iVar3 != 0xc) goto LAB_143daa789;
            pTVar20 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                       &(pFVar6->Parameters).InitializationCommands.ArrayNum;
          }
          uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar61 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (pTVar20 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar21 = TParticles<double,3>::GetX
                                (*(TParticles<double,3> **)pTVar20,*(int *)&pTVar20->field_0x8);
            uVar13 = *(double *)&pTVar21->field_0x10;
            uVar58 = *(double *)pTVar21;
            uVar61 = *(double *)&pTVar21->field_0x8;
          }
        }
LAB_143daa789:
        pTVar22 = GetR(this,local_f8,pFVar5);
        auVar50._0_8_ = pTVar22->X;
        auVar50._8_8_ = pTVar22->Y;
        auVar2._0_8_ = pTVar22->Z;
        auVar2._8_8_ = pTVar22->W;
        dVar71 = (double)auVar50._0_8_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar39 = (double)auVar50._8_8_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar55 = (undefined4)((ulonglong)dVar39 >> 0x20);
        dVar74 = (double)auVar2._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
        ;
        dVar29 = (double)auVar2._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
        ;
        dVar10 = (param_2->field0_0x0)._s_0.X - (double)uVar58;
        dVar11 = (param_2->field0_0x0)._s_0.Y - (double)uVar61;
        uVar57 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar52._8_4_ = SUB84(dVar39,0);
        auVar52._0_8_ = dVar71;
        auVar52._12_4_ = uVar55;
        auVar67._8_4_ = SUB84(dVar11,0);
        auVar67._0_8_ = dVar10;
        auVar67._12_4_ = uVar57;
        dVar28 = (param_2->field0_0x0)._s_0.Z - (double)uVar13;
        auVar41._8_4_ = SUB84(dVar29,0);
        auVar41._0_8_ = dVar74;
        auVar41._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar53 = blendpd(auVar52,auVar41,2);
        uStack_150 = 0;
        auVar47._8_4_ = SUB84(dVar39,0);
        auVar47._0_8_ = dVar71;
        auVar47._12_4_ = uVar55;
        dVar51 = auVar47._8_8_;
        auVar30._8_4_ = SUB84(dVar74,0);
        auVar30._0_8_ = dVar51;
        auVar30._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
        auVar40._8_4_ = SUB84(dVar11,0);
        auVar40._0_8_ = dVar10;
        auVar40._12_4_ = uVar57;
        auVar68._0_8_ = auVar67._8_8_ * dVar71 - dVar51 * dVar10;
        auVar68._8_8_ = dVar28 * dVar39 - auVar30._8_8_ * dVar11;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar28;
        auVar41 = blendpd(auVar40,auVar12,2);
        auVar42._0_8_ = auVar41._0_8_ * dVar74 - auVar53._0_8_ * dVar28;
        auVar42._8_8_ = auVar41._8_8_ * dVar29 - auVar53._8_8_ * 0.0;
        dVar56 = auVar68._8_8_ + auVar68._8_8_;
        dVar9 = auVar42._0_8_ + auVar42._0_8_;
        uVar55 = SUB84(dVar9,0);
        uVar57 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar41 = blendpd(auVar68,auVar42,2);
        auVar69._0_8_ = auVar41._0_8_ + auVar41._0_8_;
        auVar69._8_8_ = auVar41._8_8_ + auVar41._8_8_;
        auVar62._8_4_ = uVar55;
        auVar62._0_8_ = dVar56;
        auVar62._12_4_ = uVar57;
        auVar31._8_4_ = uVar55;
        auVar31._0_8_ = dVar56;
        auVar31._12_4_ = uVar57;
        auVar59._8_4_ = uVar55;
        auVar59._0_8_ = dVar56;
        auVar59._12_4_ = uVar57;
        auVar41 = blendpd(auVar59,auVar69,2);
        auVar63._0_8_ = auVar62._8_8_ * dVar71 - dVar56 * dVar51;
        auVar63._8_8_ = auVar69._0_8_ * dVar39 - auVar31._8_8_ * dVar74;
        auVar32._8_4_ = SUB84(auVar69._8_8_,0);
        auVar32._0_8_ = auVar69._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
        auVar72._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              ___xmm_3ff00000000000003ff0000000000000);
        auVar72._8_4_ = _UNK_15061cc88 & _UNK_150689688;
        auVar72._12_4_ = _UNK_15061cc8c & _UNK_15068968c;
        auVar60._0_8_ = auVar41._0_8_ * dVar74 - auVar69._0_8_ * auVar53._0_8_;
        auVar60._8_8_ = auVar41._8_8_ * dVar29 - auVar32._8_8_ * auVar53._8_8_;
        lVar25 = -(ulonglong)
                  ((double)CONCAT44(auVar16._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    auVar16._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar14._4_4_ = _UNK_150689684;
        auVar14._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
        auVar14._8_4_ = _UNK_150689688;
        auVar14._12_4_ = _UNK_15068968c;
        auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
        lVar26 = -(ulonglong)
                  (auVar72._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar27 = -(ulonglong)
                  (auVar72._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar73._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar41._4_4_,
                              ~(uint)lVar26 & auVar41._0_4_);
        auVar73._8_4_ = ~(uint)lVar27 & auVar41._8_4_;
        auVar73._12_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar41._12_4_;
        uVar4 = *(uint *)&pTVar19->field_0x8;
        auVar33._8_4_ = SUB84(auVar63._8_8_,0);
        auVar33._0_8_ = auVar63._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
        lVar26 = *(longlong *)pTVar19;
        auVar53._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar53._0_8_ = auVar16._0_8_;
        auVar53._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar53);
        uVar18 = 0;
        if ((int)uVar4 < *(int *)(lVar26 + 0x68)) {
          uVar18 = ~uVar4 >> 0x1f;
        }
        auVar53 = blendpd(auVar63,auVar60,2);
        dVar71 = auVar73._0_8_ * (dVar56 * dVar29 + dVar10 + auVar33._8_8_);
        dVar74 = auVar73._8_8_ * (dVar9 * dVar29 + dVar11 + auVar60._0_8_);
        dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar41._4_4_,
                                  ~(uint)lVar25 & auVar41._0_4_) *
                 (auVar69._0_8_ * dVar29 + dVar28 + auVar53._0_8_);
        local_168 = (double)uVar58;
        dStack_160 = (double)uVar61;
        local_158 = (double)uVar13;
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar23 = (FClosestPhysicsObjectResult *)(*pcVar8)();
          return pFVar23;
        }
        plVar7 = *(longlong **)(*(longlong *)(lVar26 + 0x60) + (longlong)(int)uVar4 * 8);
        if (plVar7 != (longlong *)0x0) {
          local_148 = dVar71;
          dStack_140 = dVar74;
          local_138 = dVar39;
          dVar29 = (double)(**(code **)(*plVar7 + 0x80))(plVar7,&local_148,&local_180);
          dVar71 = dVar71 - local_180 * dVar29;
          auVar53 = blendpd(auVar50,auVar2,2);
          local_108 = dVar39 - local_170 * dVar29;
          dVar74 = dVar74 - local_178 * dVar29;
          dStack_1e0 = auVar16._8_8_;
          auVar70._0_8_ = local_108 * auVar16._0_8_;
          auVar70._8_8_ = dStack_1e0 * 0.0;
          uVar55 = SUB84(dVar74,0);
          uVar57 = (undefined4)((ulonglong)dVar74 >> 0x20);
          auVar64._8_4_ = uVar55;
          auVar64._0_8_ = dVar71;
          auVar64._12_4_ = uVar57;
          auVar34._8_4_ = uVar55;
          auVar34._0_8_ = dVar71;
          auVar34._12_4_ = uVar57;
          auVar43._8_4_ = uVar55;
          auVar43._0_8_ = dVar71;
          auVar43._12_4_ = uVar57;
          auVar41 = blendpd(auVar43,auVar70,2);
          auVar65._0_8_ = auVar64._8_8_ * (double)auVar50._0_8_ - dVar71 * (double)auVar50._8_8_;
          auVar65._8_8_ =
               auVar70._0_8_ * (double)auVar50._8_8_ - auVar34._8_8_ * (double)auVar2._0_8_;
          auVar54._8_4_ = SUB84(auVar65._8_8_,0);
          auVar54._0_8_ = auVar65._0_8_;
          auVar54._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
          auVar35._8_4_ = SUB84(auVar70._8_8_,0);
          auVar35._0_8_ = auVar70._0_8_;
          auVar35._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
          local_118._8_4_ = uVar55;
          local_118._0_8_ = dVar71;
          local_118._12_4_ = uVar57;
          auVar44._0_8_ = auVar41._0_8_ * (double)auVar2._0_8_ - auVar70._0_8_ * auVar53._0_8_;
          auVar44._8_8_ = auVar41._8_8_ * (double)auVar2._8_8_ - auVar35._8_8_ * auVar53._8_8_;
          auVar41 = blendpd(auVar65,auVar44,2);
          dVar39 = auVar54._8_8_ + auVar54._8_8_;
          dVar56 = auVar44._0_8_ + auVar44._0_8_;
          auVar66._0_8_ = auVar41._0_8_ + auVar41._0_8_;
          auVar66._8_8_ = auVar41._8_8_ + auVar41._8_8_;
          uVar55 = SUB84(dVar56,0);
          auVar48._8_4_ = uVar55;
          auVar48._0_8_ = dVar39;
          uVar57 = (undefined4)((ulonglong)dVar56 >> 0x20);
          auVar48._12_4_ = uVar57;
          auVar36._8_4_ = uVar55;
          auVar36._0_8_ = dVar39;
          auVar36._12_4_ = uVar57;
          auVar45._8_4_ = uVar55;
          auVar45._0_8_ = dVar39;
          auVar45._12_4_ = uVar57;
          auVar41 = blendpd(auVar45,auVar66,2);
          auVar49._0_8_ = auVar48._8_8_ * (double)auVar50._0_8_ - dVar39 * (double)auVar50._8_8_;
          auVar49._8_8_ =
               auVar66._0_8_ * (double)auVar50._8_8_ - auVar36._8_8_ * (double)auVar2._0_8_;
          auVar37._8_4_ = SUB84(auVar66._8_8_,0);
          auVar37._0_8_ = auVar66._0_8_;
          auVar37._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
          auVar46._0_8_ = auVar41._0_8_ * (double)auVar2._0_8_ - auVar66._0_8_ * auVar53._0_8_;
          auVar46._8_8_ = auVar41._8_8_ * (double)auVar2._8_8_ - auVar37._8_8_ * auVar53._8_8_;
          auVar38._8_4_ = SUB84(auVar49._8_8_,0);
          auVar38._0_8_ = auVar49._0_8_;
          auVar38._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
          auVar50 = blendpd(auVar49,auVar46,2);
          local_120 = auVar66._0_8_ * (double)auVar2._8_8_ + auVar70._0_8_ + auVar50._0_8_ +
                      local_158;
          local_130._0_8_ = dVar39 * (double)auVar2._8_8_ + dVar71 + auVar38._8_8_ + local_168;
          local_130._8_8_ = dVar56 * (double)auVar2._8_8_ + dVar74 + auVar46._0_8_ + dStack_160;
          if ((__return_storage_ptr__->PhysicsObject == (FPhysicsObject *)0x0) ||
             (dVar29 < __return_storage_ptr__->ClosestDistance)) {
            auVar15._8_8_ = local_120;
            auVar15._0_8_ = local_130._8_8_;
            __return_storage_ptr__->PhysicsObject = pFVar5;
            (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.X = local_130._0_8_;
            *(undefined1 (*) [16])
             ((longlong)&(__return_storage_ptr__->ClosestLocation).field0_0x0 + 8) = auVar15;
            __return_storage_ptr__->ClosestDistance = dVar29;
          }
        }
      }
    }
LAB_143daab70:
    ppFVar24 = ppFVar24 + 1;
  } while( true );
}

// GetClosestPhysicsBodyFromLocation @ 143daac00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FClosestPhysicsObjectResult * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetClosestPhysicsBodyFromLocation
          (FReadPhysicsObjectInterface<0> *this,FClosestPhysicsObjectResult *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,TVector<double> *param_2)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  TPBDRigidParticle<double,3> *pTVar13;
  TPBDRigidParticle<double,3> *pTVar14;
  FGeometryCollectionPhysicsProxy *pFVar15;
  FPhysicsObject **ppFVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined4 uVar52;
  double dVar53;
  undefined4 uVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  double local_188;
  double local_180;
  double local_178;
  FPhysicsObject *local_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double local_150;
  undefined1 local_148 [16];
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  
  ppFVar16 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  __return_storage_ptr__->PhysicsObject = (FPhysicsObject *)0x0;
  __return_storage_ptr__->ClosestDistance = 0.0;
  ppFVar1 = ppFVar16 + iVar2;
  if (ppFVar16 != ppFVar1) {
    uVar76 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar77 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar52 = UE::Math::TQuat<double>::Identity.X._0_4_;
    uVar55 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uVar73 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uVar74 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    uVar78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar79 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    do {
      pFVar3 = *ppFVar16;
      if ((pFVar3 != (FPhysicsObject *)0x0) &&
         (pFVar15 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         pFVar15 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar2 = *(int *)&pFVar15->field_0x1c;
        if (iVar2 == 2) {
          pTVar13 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                              (pFVar15,pFVar3->BodyIndex);
          uVar76 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar77 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          in_XMM0 = extraout_XMM0;
          uVar52 = UE::Math::TQuat<double>::Identity.X._0_4_;
          uVar55 = UE::Math::TQuat<double>::Identity.X._4_4_;
          uVar73 = UE::Math::TQuat<double>::Identity.Y._0_4_;
          uVar74 = UE::Math::TQuat<double>::Identity.Y._4_4_;
          uVar78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar79 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else if (iVar2 == 0xb) {
          pTVar13 = (TPBDRigidParticle<double,3> *)
                    (pFVar15->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143dab165;
          pTVar13 = (TPBDRigidParticle<double,3> *)
                    (pFVar15->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (pTVar13 != (TPBDRigidParticle<double,3> *)0x0) {
          pFVar15 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
          if (pFVar15 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143daad72:
            auVar30._4_4_ = uVar79;
            auVar30._0_4_ = uVar78;
            auVar30._8_4_ = uVar80;
            auVar30._12_4_ = uVar81;
            local_178 = (double)CONCAT44(uVar77,uVar76);
          }
          else {
            iVar2 = *(int *)&pFVar15->field_0x1c;
            if (iVar2 == 2) {
              pTVar14 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                                  (pFVar15,pFVar3->BodyIndex);
              pFVar15 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
              uVar76 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar77 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              in_XMM0 = extraout_XMM0_00;
              uVar52 = UE::Math::TQuat<double>::Identity.X._0_4_;
              uVar55 = UE::Math::TQuat<double>::Identity.X._4_4_;
              uVar73 = UE::Math::TQuat<double>::Identity.Y._0_4_;
              uVar74 = UE::Math::TQuat<double>::Identity.Y._4_4_;
              uVar78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar79 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else if (iVar2 == 0xb) {
              pTVar14 = (TPBDRigidParticle<double,3> *)
                        (pFVar15->Parameters).Name.Data.AllocatorInstance.Data;
            }
            else {
              if (iVar2 != 0xc) goto LAB_143daad72;
              pTVar14 = (TPBDRigidParticle<double,3> *)
                        (pFVar15->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
            }
            if (pTVar14 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143daad72;
            local_178 = *(double *)&pTVar14->field_0x30;
            in_XMM0._8_8_ = 0;
            in_XMM0._0_8_ = local_178;
            auVar30 = *(undefined1 (*) [16])&pTVar14->field_0x20;
          }
          if (pFVar15 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143daadf5:
            local_148._4_4_ = uVar55;
            local_148._0_4_ = uVar52;
            local_148._8_4_ = uVar73;
            local_148._12_4_ = uVar74;
            local_118 = (double)CONCAT44(uVar55,uVar52);
            uStack_110 = (double)CONCAT44(uVar74,uVar73);
            dVar9 = UE::Math::TQuat<double>::Identity.Z;
            dVar10 = UE::Math::TQuat<double>::Identity.W;
          }
          else {
            iVar2 = *(int *)&pFVar15->field_0x1c;
            if (iVar2 == 2) {
              pTVar14 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                                  (pFVar15,pFVar3->BodyIndex);
              uVar76 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar77 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              in_XMM0 = extraout_XMM0_01;
              uVar52 = UE::Math::TQuat<double>::Identity.X._0_4_;
              uVar55 = UE::Math::TQuat<double>::Identity.X._4_4_;
              uVar73 = UE::Math::TQuat<double>::Identity.Y._0_4_;
              uVar74 = UE::Math::TQuat<double>::Identity.Y._4_4_;
              uVar78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar79 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else if (iVar2 == 0xb) {
              pTVar14 = (TPBDRigidParticle<double,3> *)
                        (pFVar15->Parameters).Name.Data.AllocatorInstance.Data;
            }
            else {
              if (iVar2 != 0xc) goto LAB_143daadf5;
              pTVar14 = (TPBDRigidParticle<double,3> *)
                        (pFVar15->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
            }
            if (pTVar14 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143daadf5;
            in_XMM0 = ZEXT416((uint)*(float *)&pTVar14->field_0x40);
            local_148._0_8_ = (double)*(float *)&pTVar14->field_0x40;
            local_148._8_8_ = (double)*(float *)&pTVar14->field_0x44;
            dVar9 = (double)*(float *)&pTVar14->field_0x48;
            dVar10 = (double)*(float *)&pTVar14->field_0x4c;
          }
          uVar75 = (undefined4)((ulonglong)dVar10 >> 0x20);
          auVar7._4_8_ = in_XMM0._8_8_;
          auVar7._0_4_ = auVar30._4_4_;
          auVar19._0_8_ = auVar7._0_8_ << 0x20;
          auVar19._8_4_ = auVar30._8_4_;
          auVar19._12_4_ = auVar30._12_4_;
          local_f8 = auVar30._0_8_;
          dStack_f0 = auVar19._8_8_;
          auVar59._8_4_ = SUB84(dVar10,0);
          auVar59._0_8_ = dVar9;
          auVar59._12_4_ = uVar75;
          auVar60._0_8_ = dVar9 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar60._8_8_ =
               auVar59._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar58 = (param_2->field0_0x0)._s_0.X - local_f8;
          dVar47 = (param_2->field0_0x0)._s_0.Y - dStack_f0;
          uVar54 = (undefined4)((ulonglong)dVar47 >> 0x20);
          dVar68 = (param_2->field0_0x0)._s_0.Z - local_178;
          local_e8 = local_178;
          uStack_e0 = 0;
          auVar69._8_4_ = SUB84(dVar47,0);
          auVar69._0_8_ = dVar58;
          auVar69._12_4_ = uVar54;
          auVar29._8_4_ = SUB84(dVar47,0);
          auVar29._0_8_ = dVar58;
          auVar29._12_4_ = uVar54;
          dVar48 = local_148._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar53 = local_148._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar44._8_8_ = 0;
          auVar44._0_8_ = dVar68;
          auVar30 = blendpd(auVar29,auVar44,2);
          auVar37._8_4_ = SUB84(dVar53,0);
          auVar37._0_8_ = dVar48;
          uVar54 = (undefined4)((ulonglong)dVar53 >> 0x20);
          auVar37._12_4_ = uVar54;
          dVar42 = auVar37._8_8_;
          auVar43._8_4_ = SUB84(dVar53,0);
          auVar43._0_8_ = dVar48;
          auVar43._12_4_ = uVar54;
          auVar44 = blendpd(auVar43,auVar60,2);
          auVar20._8_4_ = SUB84(auVar60._0_8_,0);
          auVar20._0_8_ = dVar42;
          auVar20._12_4_ = (int)((ulonglong)auVar60._0_8_ >> 0x20);
          auVar70._0_8_ = auVar69._8_8_ * dVar48 - dVar42 * dVar58;
          auVar70._8_8_ = dVar68 * dVar53 - auVar20._8_8_ * dVar47;
          dVar72 = auVar44._8_8_;
          auVar31._0_8_ = auVar30._0_8_ * auVar60._0_8_ - auVar44._0_8_ * dVar68;
          auVar31._8_8_ = auVar30._8_8_ * auVar60._8_8_ - dVar72 * 0.0;
          auVar30 = blendpd(auVar70,auVar31,2);
          dVar36 = auVar70._8_8_ + auVar70._8_8_;
          dVar66 = auVar31._0_8_ + auVar31._0_8_;
          uVar54 = SUB84(dVar66,0);
          uVar67 = (undefined4)((ulonglong)dVar66 >> 0x20);
          auVar71._0_8_ = auVar30._0_8_ + auVar30._0_8_;
          auVar71._8_8_ = auVar30._8_8_ + auVar30._8_8_;
          auVar56._8_4_ = uVar54;
          auVar56._0_8_ = dVar36;
          auVar56._12_4_ = uVar67;
          auVar21._8_4_ = uVar54;
          auVar21._0_8_ = dVar36;
          auVar21._12_4_ = uVar67;
          auVar49._8_4_ = uVar54;
          auVar49._0_8_ = dVar36;
          auVar49._12_4_ = uVar67;
          auVar57._0_8_ = auVar56._8_8_ * dVar48 - dVar36 * dVar42;
          auVar57._8_8_ = auVar71._0_8_ * dVar53 - auVar21._8_8_ * auVar60._0_8_;
          auVar30 = blendpd(auVar49,auVar71,2);
          auVar22._8_4_ = SUB84(auVar71._8_8_,0);
          auVar22._0_8_ = auVar71._0_8_;
          auVar22._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
          auVar8._4_8_ = dVar72;
          auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar45._0_8_ = auVar8._0_8_ << 0x20;
          auVar45._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar45._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar50._0_8_ = auVar30._0_8_ * auVar60._0_8_ - auVar71._0_8_ * auVar44._0_8_;
          auVar50._8_8_ = auVar30._8_8_ * auVar60._8_8_ - auVar22._8_8_ * dVar72;
          auVar46._8_8_ = auVar45._8_8_;
          auVar46._0_8_ = ___xmm_00000000000000003ff0000000000000;
          auVar38._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                (uint)((ulonglong)___xmm_00000000000000003ff0000000000000 >> 0x20),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                SUB84(___xmm_00000000000000003ff0000000000000,0));
          auVar38._8_4_ = _UNK_15061cc88 & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar38._12_4_ = _UNK_15061cc8c & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar61._0_8_ =
               (double)CONCAT44(_UNK_150689684 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                ___xmm_3ff00000000000003ff0000000000000 &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar61._8_4_ = _UNK_150689688 & _UNK_15061cc88;
          auVar61._12_4_ = _UNK_15068968c & _UNK_15061cc8c;
          lVar17 = -(ulonglong)
                    (auVar61._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar18 = -(ulonglong)
                    (auVar61._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar11._4_4_ = _UNK_150689684;
          auVar11._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
          auVar11._8_4_ = _UNK_150689688;
          auVar11._12_4_ = _UNK_15068968c;
          auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
          auVar62._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar30._4_4_,
                                ~(uint)lVar17 & auVar30._0_4_);
          auVar62._8_4_ = ~(uint)lVar18 & auVar30._8_4_;
          auVar62._12_4_ = ~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._12_4_;
          auVar23._8_4_ = SUB84(auVar57._8_8_,0);
          auVar23._0_8_ = auVar57._0_8_;
          auVar23._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
          lVar17 = -(ulonglong)
                    (auVar38._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          lVar18 = -(ulonglong)
                    (auVar38._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
          auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
          dVar58 = auVar62._0_8_ * (dVar36 * auVar60._8_8_ + dVar58 + auVar23._8_8_);
          dVar66 = auVar62._8_8_ * (dVar66 * auVar60._8_8_ + dVar47 + auVar50._0_8_);
          auVar39._0_4_ = ~(uint)lVar17 & auVar30._0_4_;
          auVar39._4_4_ = ~(uint)((ulonglong)lVar17 >> 0x20) & auVar30._4_4_;
          auVar39._8_4_ = ~(uint)lVar18 & auVar30._8_4_;
          auVar39._12_4_ = ~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._12_4_;
          plVar4 = *(longlong **)&pTVar13->field_0x50;
          local_170 = (FPhysicsObject *)0x0;
          auVar30 = blendpd(auVar57,auVar50,2);
          local_128 = SUB168(ZEXT816(0) | auVar39,0) *
                      (auVar71._0_8_ * auVar60._8_8_ + dVar68 + auVar30._0_8_);
          dVar36 = SUB168(ZEXT816(0) | auVar39,8) *
                   (auVar71._8_8_ * auVar60._8_8_ + 0.0 + auVar30._8_8_);
          in_XMM0._8_4_ = SUB84(dVar36,0);
          in_XMM0._0_8_ = local_128;
          in_XMM0._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          local_150 = 0.0;
          if (plVar4 != (longlong *)0x0) {
            local_170 = pFVar3;
            local_118 = dVar58;
            uStack_110 = dVar66;
            local_108 = local_128;
            auVar28._0_8_ = (double)(**(code **)(*plVar4 + 0x80))(plVar4,&local_118,&local_188);
            dVar47 = local_148._8_8_;
            local_108 = local_128 - auVar28._0_8_ * local_178;
            auVar24._8_4_ = SUB84(dVar9,0);
            auVar24._0_8_ = dVar47;
            auVar24._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            auVar6._8_4_ = SUB84(dVar10,0);
            auVar6._0_8_ = dVar9;
            auVar6._12_4_ = uVar75;
            auVar44 = blendpd(local_148,auVar6,2);
            dVar68 = (dVar58 - local_188 * auVar28._0_8_) *
                     (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
            dVar72 = (dVar66 - auVar28._0_8_ * local_180) *
                     (double)CONCAT44(_UNK_15068968c,_UNK_150689688);
            dVar36 = local_108 * ___xmm_00000000000000003ff0000000000000;
            dVar66 = _UNK_150689518 * 0.0;
            auVar63._8_4_ = SUB84(dVar72,0);
            auVar63._0_8_ = dVar68;
            uVar52 = (undefined4)((ulonglong)dVar72 >> 0x20);
            auVar63._12_4_ = uVar52;
            auVar32._8_4_ = SUB84(dVar72,0);
            auVar32._0_8_ = dVar68;
            auVar32._12_4_ = uVar52;
            auVar5._8_4_ = SUB84(dVar66,0);
            auVar5._0_8_ = dVar36;
            auVar5._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
            auVar30 = blendpd(auVar32,auVar5,2);
            auVar64._0_8_ = auVar63._8_8_ * local_148._0_8_ - dVar47 * dVar68;
            auVar64._8_8_ = dVar36 * dVar47 - auVar24._8_8_ * dVar72;
            auVar51._8_4_ = SUB84(auVar64._8_8_,0);
            auVar51._0_8_ = auVar64._0_8_;
            auVar51._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
            auVar33._0_8_ = auVar30._0_8_ * dVar9 - auVar44._0_8_ * dVar36;
            auVar33._8_8_ = auVar30._8_8_ * dVar10 - auVar44._8_8_ * dVar66;
            auVar30 = blendpd(auVar64,auVar33,2);
            dVar66 = auVar51._8_8_ + auVar51._8_8_;
            dVar58 = auVar33._0_8_ + auVar33._0_8_;
            auVar65._0_8_ = auVar30._0_8_ + auVar30._0_8_;
            auVar65._8_8_ = auVar30._8_8_ + auVar30._8_8_;
            uVar52 = SUB84(dVar58,0);
            auVar40._8_4_ = uVar52;
            auVar40._0_8_ = dVar66;
            uVar55 = (undefined4)((ulonglong)dVar58 >> 0x20);
            auVar40._12_4_ = uVar55;
            auVar25._8_4_ = uVar52;
            auVar25._0_8_ = dVar66;
            auVar25._12_4_ = uVar55;
            auVar34._8_4_ = uVar52;
            auVar34._0_8_ = dVar66;
            auVar34._12_4_ = uVar55;
            auVar30 = blendpd(auVar34,auVar65,2);
            auVar41._0_8_ = auVar40._8_8_ * local_148._0_8_ - dVar66 * dVar47;
            auVar41._8_8_ = auVar65._0_8_ * dVar47 - auVar25._8_8_ * dVar9;
            auVar26._8_4_ = SUB84(auVar65._8_8_,0);
            auVar26._0_8_ = auVar65._0_8_;
            auVar26._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
            auVar35._0_8_ = auVar30._0_8_ * dVar9 - auVar65._0_8_ * auVar44._0_8_;
            auVar35._8_8_ = auVar30._8_8_ * dVar10 - auVar26._8_8_ * auVar44._8_8_;
            auVar27._8_4_ = SUB84(auVar41._8_8_,0);
            auVar27._0_8_ = auVar41._0_8_;
            auVar27._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
            auVar30 = blendpd(auVar41,auVar35,2);
            in_XMM0._8_8_ = auVar35._0_8_;
            in_XMM0._0_8_ = auVar27._8_8_;
            dStack_158 = auVar65._0_8_ * dVar10 + dVar36 + auVar30._0_8_ + local_e8;
            dStack_168 = dVar66 * dVar10 + dVar68 + auVar27._8_8_ + local_f8;
            dStack_160 = dVar58 * dVar10 + dVar72 + auVar35._0_8_ + dStack_f0;
            if ((__return_storage_ptr__->PhysicsObject == (FPhysicsObject *)0x0) ||
               (auVar28._0_8_ < __return_storage_ptr__->ClosestDistance)) {
              auVar12._8_8_ = dStack_158;
              auVar12._0_8_ = dStack_160;
              __return_storage_ptr__->PhysicsObject = local_170;
              (__return_storage_ptr__->ClosestLocation).field0_0x0._s_0.X = dStack_168;
              auVar28._8_8_ = 0;
              *(undefined1 (*) [16])
               ((longlong)&(__return_storage_ptr__->ClosestLocation).field0_0x0 + 8) = auVar12;
              __return_storage_ptr__->ClosestDistance = auVar28._0_8_;
              in_XMM0 = auVar28;
            }
            uVar76 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar77 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar52 = UE::Math::TQuat<double>::Identity.X._0_4_;
            uVar55 = UE::Math::TQuat<double>::Identity.X._4_4_;
            uVar73 = UE::Math::TQuat<double>::Identity.Y._0_4_;
            uVar74 = UE::Math::TQuat<double>::Identity.Y._4_4_;
            uVar78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar79 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_150 = auVar28._0_8_;
            local_128 = dStack_158;
          }
        }
      }
LAB_143dab165:
      ppFVar16 = ppFVar16 + 1;
    } while (ppFVar16 != ppFVar1);
  }
  return __return_storage_ptr__;
}

// GetClusterHierarchyLevel @ 143dab200

int __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetClusterHierarchyLevel
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  int iVar4;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return -1;
  }
  iVar4 = 0;
  pFVar3 = FPhysicsObject::GetParentObject<1>(param_1);
  do {
    if (pFVar3 == (FPhysicsObject *)0x0) {
      return iVar4;
    }
    this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
    if (this_00 != (FGeometryCollectionPhysicsProxy *)param_1->Proxy) {
      return iVar4;
    }
    iVar2 = *(int *)&this_00->field_0x1c;
    if (iVar2 == 2) {
      iVar2 = FTransformDynamicCollection::GetParent
                        ((FTransformDynamicCollection *)&this_00->PhysicsThreadCollection,
                         pFVar3->BodyIndex);
      if (iVar2 == -1) goto LAB_143dab25b;
      pFVar3 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(this_00,iVar2);
    }
    else {
      if ((iVar2 != 0xb) && (iVar2 != 0xc)) goto LAB_143dab2a0;
LAB_143dab25b:
      pIVar1 = pFVar3->Proxy->ParentProxy;
      if ((pIVar1 == (IPhysicsProxyBase *)0x0) || (pIVar1->Type != ClusterUnionProxy)) {
LAB_143dab2a0:
        return iVar4 + 1;
      }
      pFVar3 = (FPhysicsObject *)pIVar1[5]._padding_;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

// GetClusterHierarchyLevel @ 143dab2c0

int __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetClusterHierarchyLevel
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  int iVar4;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return -1;
  }
  iVar4 = 0;
  pFVar3 = FPhysicsObject::GetParentObject<0>(param_1);
  do {
    if (pFVar3 == (FPhysicsObject *)0x0) {
      return iVar4;
    }
    this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
    if (this_00 != (FGeometryCollectionPhysicsProxy *)param_1->Proxy) {
      return iVar4;
    }
    iVar2 = *(int *)&this_00->field_0x1c;
    if (iVar2 == 2) {
      iVar2 = FTransformDynamicCollection::GetParent
                        ((FTransformDynamicCollection *)this_00->GameThreadCollection,
                         pFVar3->BodyIndex);
      if (iVar2 == -1) goto LAB_143dab31b;
      pFVar3 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(this_00,iVar2);
    }
    else {
      if ((iVar2 != 0xb) && (iVar2 != 0xc)) goto LAB_143dab360;
LAB_143dab31b:
      pIVar1 = pFVar3->Proxy->ParentProxy;
      if ((pIVar1 == (IPhysicsProxyBase *)0x0) || (pIVar1->Type != ClusterUnionProxy)) {
LAB_143dab360:
        return iVar4 + 1;
      }
      pFVar3 = (FPhysicsObject *)pIVar1[5]._padding_;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

// GetCoM @ 143dab380

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetCoM
          (FReadPhysicsObjectInterface<1> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  double dVar1;
  int iVar2;
  FGeometryCollectionPhysicsProxy *this_00;
  double dVar3;
  undefined8 uVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TVector<double,3> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar2 = *(int *)&this_00->field_0x1c;
    if (iVar2 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar2 == 0xb) {
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar2 != 0xc) goto LAB_143dab3f6;
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar5->field_0xc) {
        this_01 = pTVar5;
      }
      if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar6 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(this_01);
        dVar3 = *(double *)&pTVar6->field_0x8;
        dVar1 = *(double *)&pTVar6->field_0x10;
        (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar6;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dab3f6:
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetCoM @ 143dab420

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetCoM
          (FReadPhysicsObjectInterface<0> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  double dVar1;
  int iVar2;
  FGeometryCollectionPhysicsProxy *this_00;
  double dVar3;
  undefined8 uVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar2 = *(int *)&this_00->field_0x1c;
    if (iVar2 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar2 == 0xb) {
      pTVar5 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar2 != 0xc) goto LAB_143dab49b;
      pTVar5 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
      if ((byte)pTVar5->field_0x98 < 2) {
        pTVar5 = (TPBDRigidParticle<double,3> *)0x0;
      }
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        dVar3 = *(double *)&(pTVar5->MMassProps).Property.MCenterOfMass.field_0x8;
        dVar1 = *(double *)&(pTVar5->MMassProps).Property.MCenterOfMass.field_0x10;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             *(double *)&(pTVar5->MMassProps).Property.MCenterOfMass;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dab49b:
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetGeometry @ 143dab850

FImplicitObject * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetGeometry
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  FImplicitObject *pFVar2;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      this_01 = (TGeometryParticleHandleImp<double,3,1> *)
                FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                          (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)
                 &(this_00->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar1 != 0xc) {
        return (FImplicitObject *)0x0;
      }
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)
                 &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar2 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_01);
      return pFVar2;
    }
  }
  return (FImplicitObject *)0x0;
}

// GetGeometry @ 143dab8b0

/* WARNING: Type propagation algorithm not settling */

FImplicitObject * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetGeometry
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar2;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar2 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return (FImplicitObject *)0x0;
      }
      pTVar2 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar2 != (TPBDRigidParticle<double,3> *)0x0) {
      return *(FImplicitObject **)&pTVar2->field_0x50;
    }
  }
  return (FImplicitObject *)0x0;
}

// GetKinematicParticle @ 143dab960

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetKinematicParticle
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar3;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar3 = (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0;
      if (pTVar2->field_0xc != '\0') {
        pTVar3 = (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar2;
      }
      return pTVar3;
    }
  }
  return (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0;
}

// GetKinematicParticle @ 143dab9d0

/* WARNING: Type propagation algorithm not settling */

TKinematicGeometryParticle<double,3> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetKinematicParticle
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar2;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar2 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return (TKinematicGeometryParticle<double,3> *)0x0;
      }
      pTVar2 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar2 != (TPBDRigidParticle<double,3> *)0x0) {
      if (pTVar2->field_0x98 == '\0') {
        pTVar2 = (TPBDRigidParticle<double,3> *)0x0;
      }
      return (TKinematicGeometryParticle<double,3> *)pTVar2;
    }
  }
  return (TKinematicGeometryParticle<double,3> *)0x0;
}

// GetMass @ 143dabb00

float __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetMass
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  FPhysicsObject **ppFVar11;
  float fVar12;
  
  ppFVar11 = param_1->DataPtr;
  fVar12 = 0.0;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  if (ppFVar11 == ppFVar1) {
    return 0.0;
  }
  do {
    pFVar4 = *ppFVar11;
    if ((pFVar4 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143dabbf1;
        pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar9->field_0xc) {
          pTVar10 = pTVar9;
        }
        if (pTVar10 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar3 = *(uint *)&pTVar10->field_0x8;
          lVar5 = *(longlong *)pTVar10;
          uVar8 = 0;
          if ((int)uVar3 < *(int *)(lVar5 + 0x3d0)) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            fVar12 = (float)(*pcVar6)();
            return fVar12;
          }
          fVar12 = fVar12 + (float)*(double *)
                                    (*(longlong *)(lVar5 + 0x3c8) + (longlong)(int)uVar3 * 8);
        }
      }
    }
LAB_143dabbf1:
    ppFVar11 = ppFVar11 + 1;
    if (ppFVar11 == ppFVar1) {
      return fVar12;
    }
  } while( true );
}

// GetMass @ 143dabc40

/* WARNING: Type propagation algorithm not settling */

float __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetMass
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar4;
  FPhysicsObject **ppFVar5;
  float fVar6;
  
  ppFVar5 = param_1->DataPtr;
  fVar6 = 0.0;
  ppFVar1 = ppFVar5 + param_1->ArrayNum;
  if (ppFVar5 == ppFVar1) {
    return 0.0;
  }
  do {
    pFVar3 = *ppFVar5;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143dabcbd;
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if ((pTVar4 != (TPBDRigidParticle<double,3> *)0x0) && (1 < (byte)pTVar4->field_0x98)) {
        fVar6 = fVar6 + (float)(pTVar4->MMassProps).Property.MM;
      }
    }
LAB_143dabcbd:
    ppFVar5 = ppFVar5 + 1;
    if (ppFVar5 == ppFVar1) {
      return fVar6;
    }
  } while( true );
}

// GetParticle @ 143dabd40

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetParticle
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)
               FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
      return pTVar2;
    }
    if (iVar1 == 0xb) {
      return *(TGeometryParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum;
    }
    if (iVar1 == 0xc) {
      return *(TGeometryParticleHandleImp<double,3,1> **)
              &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
  }
  return (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// GetParticle @ 143dabd90

/* WARNING: Type propagation algorithm not settling */

TGeometryParticle<double,3> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetParticle
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar2;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
      return (TGeometryParticle<double,3> *)pTVar2;
    }
    if (iVar1 == 0xb) {
      return (TGeometryParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data;
    }
    if (iVar1 == 0xc) {
      return (TGeometryParticle<double,3> *)
             (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
  }
  return (TGeometryParticle<double,3> *)0x0;
}

// GetR @ 143dac140

TQuat<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetR
          (FReadPhysicsObjectInterface<1> *this,TQuat<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar13;
  TQuat<double> *pTVar14;
  longlong lVar15;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar3 = *(int *)&this_00->field_0x1c;
    if (iVar3 == 2) {
      pTVar13 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                          (this_00,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar13 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 &(this_00->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dac234;
      pTVar13 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar13 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      lVar5 = *(longlong *)pTVar13;
      uVar4 = *(uint *)&pTVar13->field_0x8;
      lVar15 = (longlong)(int)uVar4;
      uVar12 = 0;
      if ((int)uVar4 < *(int *)(lVar5 + 0x50)) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TQuat<double> *)(*pcVar6)();
          return pTVar14;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x48);
      fVar1 = *(float *)(lVar5 + 4 + lVar15 * 0x10);
      uVar2 = *(undefined8 *)(lVar5 + 8 + lVar15 * 0x10);
      __return_storage_ptr__->X = (double)*(float *)(lVar5 + lVar15 * 0x10);
      __return_storage_ptr__->Y = (double)fVar1;
      dVar8 = (double)(float)uVar2;
      dVar9 = (double)(float)((ulonglong)uVar2 >> 0x20);
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      __return_storage_ptr__->Z = dVar8;
      __return_storage_ptr__->W = (double)auVar7._8_8_;
      return __return_storage_ptr__;
    }
  }
LAB_143dac234:
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  dVar9 = UE::Math::TQuat<double>::Identity.Z;
  dVar8 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar8;
  __return_storage_ptr__->Z = dVar9;
  __return_storage_ptr__->W = dVar10;
  return __return_storage_ptr__;
}

// GetR @ 143dac260

/* WARNING: Type propagation algorithm not settling */

TQuat<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetR
          (FReadPhysicsObjectInterface<0> *this,TQuat<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  TPBDRigidParticle<double,3> *pTVar8;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar3 = *(int *)&this_00->field_0x1c;
    if (iVar3 == 2) {
      pTVar8 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar8 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dac2d7;
      pTVar8 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar8 != (TPBDRigidParticle<double,3> *)0x0) {
      fVar1 = *(float *)&pTVar8->field_0x44;
      uVar2 = *(undefined8 *)&pTVar8->field_0x48;
      __return_storage_ptr__->X = (double)*(float *)&pTVar8->field_0x40;
      dVar5 = (double)(float)uVar2;
      dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
      __return_storage_ptr__->Y = (double)fVar1;
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      __return_storage_ptr__->Z = dVar5;
      __return_storage_ptr__->W = (double)auVar4._8_8_;
      return __return_storage_ptr__;
    }
  }
LAB_143dac2d7:
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  dVar6 = UE::Math::TQuat<double>::Identity.Z;
  dVar5 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar5;
  __return_storage_ptr__->Z = dVar6;
  __return_storage_ptr__->W = dVar7;
  return __return_storage_ptr__;
}

// GetRigidParticle @ 143dac300

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetRigidParticle
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      }
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar3 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar2->field_0xc) {
        pTVar3 = pTVar2;
      }
      return pTVar3;
    }
  }
  return (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
}

// GetRigidParticle @ 143dac370

/* WARNING: Type propagation algorithm not settling */

TPBDRigidParticle<double,3> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetRigidParticle
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar2;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar2 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return (TPBDRigidParticle<double,3> *)0x0;
      }
      pTVar2 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar2 != (TPBDRigidParticle<double,3> *)0x0) {
      if ((byte)pTVar2->field_0x98 < 2) {
        pTVar2 = (TPBDRigidParticle<double,3> *)0x0;
      }
      return pTVar2;
    }
  }
  return (TPBDRigidParticle<double,3> *)0x0;
}

// GetRootObject @ 143dac3e0

FPhysicsObject * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetRootObject
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  FGeometryCollectionPhysicsProxy *pFVar1;
  IPhysicsProxyBase *pIVar2;
  int iVar3;
  bool *pbVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  FPhysicsObject *pFVar6;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return (FPhysicsObject *)0x0;
  }
  pFVar1 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  if (pFVar1 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143dac43b:
    pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  }
  else {
    iVar3 = *(int *)&pFVar1->field_0x1c;
    if (iVar3 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (pFVar1,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar1->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dac43b;
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(pFVar1->Parameters).InitializationCommands.ArrayNum;
    }
  }
  pFVar1 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  iVar3 = *(int *)&pFVar1->field_0x1c;
  if (iVar3 == 2) {
    iVar3 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)&pFVar1->PhysicsThreadCollection,
                       param_1->BodyIndex);
    if (iVar3 != -1) {
      pFVar6 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(pFVar1,iVar3);
      goto joined_r0x000143dac47e;
    }
  }
  else if ((iVar3 != 0xb) && (iVar3 != 0xc)) {
    return param_1;
  }
  pIVar2 = param_1->Proxy->ParentProxy;
  if (pIVar2 == (IPhysicsProxyBase *)0x0) {
    return param_1;
  }
  if (pIVar2->Type != ClusterUnionProxy) {
    return param_1;
  }
  pFVar6 = (FPhysicsObject *)pIVar2[5]._padding_;
joined_r0x000143dac47e:
  do {
    if (pFVar6 == (FPhysicsObject *)0x0) {
      return param_1;
    }
    this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)pTVar5->field_0xc) {
      this_00 = pTVar5;
    }
    if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      return param_1;
    }
    pbVar4 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00);
    if (*pbVar4 == false) {
      return param_1;
    }
    pFVar1 = (FGeometryCollectionPhysicsProxy *)pFVar6->Proxy;
    if (pFVar1 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143dac516:
      pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      iVar3 = *(int *)&pFVar1->field_0x1c;
      if (iVar3 == 2) {
        pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (pFVar1,pFVar6->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar1->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dac516;
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar1->Parameters).InitializationCommands.ArrayNum;
      }
    }
    pFVar1 = (FGeometryCollectionPhysicsProxy *)pFVar6->Proxy;
    iVar3 = *(int *)&pFVar1->field_0x1c;
    param_1 = pFVar6;
    if (iVar3 != 2) {
      if ((iVar3 != 0xb) && (iVar3 != 0xc)) {
        return pFVar6;
      }
LAB_143dac530:
      pIVar2 = pFVar6->Proxy->ParentProxy;
      if (pIVar2 == (IPhysicsProxyBase *)0x0) {
        return pFVar6;
      }
      if (pIVar2->Type != ClusterUnionProxy) {
        return pFVar6;
      }
      pFVar6 = (FPhysicsObject *)pIVar2[5]._padding_;
      goto joined_r0x000143dac47e;
    }
    iVar3 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)&pFVar1->PhysicsThreadCollection,
                       pFVar6->BodyIndex);
    if (iVar3 == -1) goto LAB_143dac530;
    pFVar6 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(pFVar1,iVar3);
  } while( true );
}

// GetRootObject @ 143dac5a0

/* WARNING: Type propagation algorithm not settling */

FPhysicsObject * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetRootObject
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  FGeometryCollectionPhysicsProxy *pFVar1;
  IPhysicsProxyBase *pIVar2;
  int iVar3;
  TPBDRigidParticle<double,3> *pTVar4;
  FPhysicsObject *pFVar5;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return (FPhysicsObject *)0x0;
  }
  pFVar1 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  if (pFVar1 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143dac5fb:
    pTVar4 = (TPBDRigidParticle<double,3> *)0x0;
  }
  else {
    iVar3 = *(int *)&pFVar1->field_0x1c;
    if (iVar3 == 2) {
      pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (pFVar1,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar4 = (TPBDRigidParticle<double,3> *)(pFVar1->Parameters).Name.Data.AllocatorInstance.Data;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dac5fb;
      pTVar4 = (TPBDRigidParticle<double,3> *)
               (pFVar1->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
  }
  pFVar1 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  iVar3 = *(int *)&pFVar1->field_0x1c;
  if (iVar3 == 2) {
    iVar3 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)pFVar1->GameThreadCollection,
                       param_1->BodyIndex);
    if (iVar3 != -1) {
      pFVar5 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(pFVar1,iVar3);
      goto joined_r0x000143dac63e;
    }
  }
  else if ((iVar3 != 0xb) && (iVar3 != 0xc)) {
    return param_1;
  }
  pIVar2 = param_1->Proxy->ParentProxy;
  if (pIVar2 == (IPhysicsProxyBase *)0x0) {
    return param_1;
  }
  if (pIVar2->Type != ClusterUnionProxy) {
    return param_1;
  }
  pFVar5 = (FPhysicsObject *)pIVar2[5]._padding_;
joined_r0x000143dac63e:
  do {
    if (((pFVar5 == (FPhysicsObject *)0x0) || ((byte)pTVar4->field_0x98 < 2)) ||
       ((pTVar4->MMiscData).Property.bDisabled == false)) {
      return param_1;
    }
    pFVar1 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy;
    if (pFVar1 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143dac6cc:
      pTVar4 = (TPBDRigidParticle<double,3> *)0x0;
    }
    else {
      iVar3 = *(int *)&pFVar1->field_0x1c;
      if (iVar3 == 2) {
        pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (pFVar1,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (pFVar1->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dac6cc;
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (pFVar1->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
    }
    pFVar1 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy;
    iVar3 = *(int *)&pFVar1->field_0x1c;
    param_1 = pFVar5;
    if (iVar3 != 2) {
      if ((iVar3 != 0xb) && (iVar3 != 0xc)) {
        return pFVar5;
      }
LAB_143dac6e6:
      pIVar2 = pFVar5->Proxy->ParentProxy;
      if (pIVar2 == (IPhysicsProxyBase *)0x0) {
        return pFVar5;
      }
      if (pIVar2->Type != ClusterUnionProxy) {
        return pFVar5;
      }
      pFVar5 = (FPhysicsObject *)pIVar2[5]._padding_;
      goto joined_r0x000143dac63e;
    }
    iVar3 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)pFVar1->GameThreadCollection,pFVar5->BodyIndex
                      );
    if (iVar3 == -1) goto LAB_143dac6e6;
    pFVar5 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(pFVar1,iVar3);
  } while( true );
}

// GetSpatialIndex @ 143dac8c0

FSpatialAccelerationIdx __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetSpatialIndex
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  FSpatialAccelerationIdx *pFVar3;
  undefined8 *in_R8;
  
  if ((in_R8 != (undefined8 *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)*in_R8,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,*(int *)(in_R8 + 1));
    }
    else if (iVar1 == 0xb) {
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dac923;
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pFVar3 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                         (*(TGeometryParticlesImp<double,3,0> **)pTVar2,*(int *)&pTVar2->field_0x8);
      *(FSpatialAccelerationIdx *)&param_1->Proxy = *pFVar3;
      return SUB82(param_1,0);
    }
  }
LAB_143dac923:
  *(undefined2 *)&param_1->Proxy = 0;
  return SUB82(param_1,0);
}

// GetSpatialIndex @ 143dac940

/* WARNING: Type propagation algorithm not settling */

FSpatialAccelerationIdx __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetSpatialIndex
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar2;
  undefined8 *in_R8;
  
  if ((in_R8 != (undefined8 *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)*in_R8,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,*(int *)(in_R8 + 1));
    }
    else if (iVar1 == 0xb) {
      pTVar2 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dac999;
      pTVar2 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar2 != (TPBDRigidParticle<double,3> *)0x0) {
      *(undefined2 *)&param_1->Proxy = *(undefined2 *)&pTVar2->field_0x5c;
      return SUB82(param_1,0);
    }
  }
LAB_143dac999:
  *(undefined2 *)&param_1->Proxy = 0;
  return SUB82(param_1,0);
}

// GetTransform @ 143dac9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetTransform
          (FReadPhysicsObjectInterface<1> *this,TTransform<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TVector<double,3> *pTVar8;
  TQuat<double> *pTVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TQuat<double> local_38;
  
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143daca30;
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar8 = TParticles<double,3>::GetX
                         (*(TParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8);
      uVar10 = *(undefined4 *)pTVar8;
      uVar11 = *(undefined4 *)&pTVar8->field_0x4;
      uVar12 = *(undefined4 *)&pTVar8->field_0x8;
      uVar13 = *(undefined4 *)&pTVar8->field_0xc;
      uVar2 = *(double *)&pTVar8->field_0x10;
    }
  }
LAB_143daca30:
  pTVar9 = GetR(this,&local_38,param_1);
  uVar3 = *(undefined4 *)&pTVar9->Y;
  uVar4 = *(undefined4 *)((longlong)&pTVar9->Y + 4);
  dVar5 = pTVar9->Z;
  dVar6 = pTVar9->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar9->X;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar10;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar11;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar12;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar13;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)uVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar5 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  dVar5 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
  return __return_storage_ptr__;
}

// GetTransform @ 143dacab0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetTransform
          (FReadPhysicsObjectInterface<0> *this,TTransform<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  int iVar1;
  undefined1 auVar2 [12];
  TPBDRigidParticle<double,3> *pTVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  double dVar4;
  double dVar6;
  undefined1 auVar5 [16];
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_48;
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (param_1 == (FPhysicsObject *)0x0) {
    local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar4 = UE::Math::TQuat<double>::Identity.Z;
    dVar6 = UE::Math::TQuat<double>::Identity.W;
    dVar7 = UE::Math::TQuat<double>::Identity.X;
    dVar8 = UE::Math::TQuat<double>::Identity.Y;
    goto LAB_143dacaed;
  }
  this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar3 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
      this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
    }
    else if (iVar1 == 0xb) {
      pTVar3 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dacb95;
      pTVar3 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pTVar3 != (TPBDRigidParticle<double,3> *)0x0) {
      uVar9 = *(undefined4 *)&pTVar3->field_0x20;
      uVar10 = *(undefined4 *)&pTVar3->field_0x24;
      uVar11 = *(undefined4 *)&pTVar3->field_0x28;
      uVar12 = *(undefined4 *)&pTVar3->field_0x2c;
      local_48 = *(double *)&pTVar3->field_0x30;
    }
  }
LAB_143dacb95:
  dVar4 = UE::Math::TQuat<double>::Identity.Z;
  dVar6 = UE::Math::TQuat<double>::Identity.W;
  dVar7 = UE::Math::TQuat<double>::Identity.X;
  dVar8 = UE::Math::TQuat<double>::Identity.Y;
  if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar3 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar3 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dacaed;
      pTVar3 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    dVar4 = UE::Math::TQuat<double>::Identity.Z;
    dVar6 = UE::Math::TQuat<double>::Identity.W;
    dVar7 = UE::Math::TQuat<double>::Identity.X;
    dVar8 = UE::Math::TQuat<double>::Identity.Y;
    if (pTVar3 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar4 = (double)(float)*(undefined8 *)&pTVar3->field_0x48;
      dVar6 = (double)(float)((ulonglong)*(undefined8 *)&pTVar3->field_0x48 >> 0x20);
      dVar7 = (double)*(float *)&pTVar3->field_0x40;
      dVar8 = (double)*(float *)&pTVar3->field_0x44;
    }
  }
LAB_143dacaed:
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = dVar7;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar8;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
  auVar2._4_8_ = dVar6;
  auVar2._0_4_ = uVar10;
  auVar5._0_8_ = auVar2._0_8_ << 0x20;
  auVar5._8_4_ = uVar11;
  auVar5._12_4_ = uVar12;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)CONCAT44(uVar10,uVar9);
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = auVar5._8_8_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_48;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar4 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  dVar4 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// GetUserDefinedEntity @ 143dacc00

FChaosUserDefinedEntity * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetUserDefinedEntity
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  undefined1 local_res18 [16];
  
  `Chaos::FReadPhysicsObjectInterface<1>::GetUserDefinedEntity'::__l7::<lambda_1>::operator()
            (local_res18);
  return (FChaosUserDefinedEntity *)0x0;
}

// GetUserDefinedEntity @ 143dacc20

/* WARNING: Type propagation algorithm not settling */

FChaosUserDefinedEntity * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetUserDefinedEntity
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  int *piVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar3 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar3 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return (FChaosUserDefinedEntity *)0x0;
      }
      pTVar3 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if ((((pTVar3 != (TPBDRigidParticle<double,3> *)0x0) &&
         (piVar2 = *(int **)&pTVar3->field_0x78, piVar2 != (int *)0x0)) && (*piVar2 == 8)) &&
       (*(longlong *)(piVar2 + 2) != 0)) {
      return *(FChaosUserDefinedEntity **)(*(longlong *)(piVar2 + 2) + 0x18);
    }
  }
  return (FChaosUserDefinedEntity *)0x0;
}

// GetV @ 143dacc90

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetV
          (FReadPhysicsObjectInterface<1> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined8 uVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar3 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dacd15;
      pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar3 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar3->field_0xc) {
        pTVar4 = pTVar3;
      }
      if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar4,
                   (TVector<double,3> *)&local_28,*(int *)&pTVar4->field_0x8);
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dacd15:
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetV @ 143dacd40

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetV
          (FReadPhysicsObjectInterface<0> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined8 uVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar3 = *(int *)&this_00->field_0x1c;
    if (iVar3 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar5 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dacdd7;
      pTVar5 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
      if ((byte)pTVar5->field_0x98 < 2) {
        pTVar5 = (TPBDRigidParticle<double,3> *)0x0;
      }
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        fVar1 = *(float *)&pTVar5->field_0xa4;
        fVar2 = *(float *)&pTVar5->field_0xa8;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pTVar5->field_0xa0;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dacdd7:
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetVAtPoint @ 143dace00

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetVAtPoint
          (FReadPhysicsObjectInterface<1> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1,TVector<double> *param_2)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double,3> *pTVar6;
  TQuat<double> *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TVector<double> *pTVar8;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double> local_88;
  TQuat<double> local_68 [2];
  
  if ((param_1 == (FPhysicsObject *)0x0) ||
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     pFVar2 == (FGeometryCollectionPhysicsProxy *)0x0)) {
LAB_143dad09e:
    dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  iVar1 = *(int *)&pFVar2->field_0x1c;
  if (iVar1 == 2) {
    pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal(pFVar2,param_1->BodyIndex)
    ;
  }
  else if (iVar1 == 0xb) {
    pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar2->Parameters).Name.Data.ArrayNum;
  }
  else {
    if (iVar1 != 0xc) goto LAB_143dad09e;
    pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              &(pFVar2->Parameters).InitializationCommands.ArrayNum;
  }
  if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143dad09e;
  pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (pTVar7->field_0xc != '\0') {
    pTVar9 = pTVar7;
  }
  if (pTVar9 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143dad09e;
  pFVar2 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  if (pFVar2 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143daceff:
    local_f8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dStack_f0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (pFVar2,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar2->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143daceff;
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(pFVar2->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143daceff;
    pTVar6 = TParticles<double,3>::GetX(*(TParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8)
    ;
    local_f8 = *(double *)pTVar6;
    dStack_f0 = *(double *)&pTVar6->field_0x8;
    local_e8 = *(double *)&pTVar6->field_0x10;
  }
  this_00 = GetR(this,local_68,param_1);
  pFVar2 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  local_a8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_a8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_a8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_a8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pFVar2 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (pFVar2,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar2->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dacf97;
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(pFVar2->Parameters).InitializationCommands.ArrayNum;
    }
    local_a8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_a8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_a8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_a8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar7->field_0xc) {
        this_01 = pTVar7;
      }
      if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar6 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(this_01);
        local_a8._0_4_ = *(undefined4 *)pTVar6;
        local_a8._4_4_ = *(undefined4 *)&pTVar6->field_0x4;
        local_a8._8_4_ = *(undefined4 *)&pTVar6->field_0x8;
        local_a8._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
        local_a8._s_0.Z = *(double *)&pTVar6->field_0x10;
      }
    }
  }
LAB_143dacf97:
  pTVar8 = UE::Math::TQuat<double>::RotateVector
                     (this_00,&local_88,(TVector<double> *)&local_a8._s_0);
  dVar4 = (param_2->field0_0x0)._s_0.X - (local_f8 + (pTVar8->field0_0x0)._s_0.X);
  dVar5 = (param_2->field0_0x0)._s_0.Y - (dStack_f0 + (pTVar8->field0_0x0)._s_0.Y);
  dVar3 = (param_2->field0_0x0)._s_0.Z - (local_e8 + (pTVar8->field0_0x0)._s_0.Z);
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar9,(TVector<double,3> *)&local_c8,
             *(int *)&pTVar9->field_0x8);
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar9,(TVector<double,3> *)&local_e0,
             *(int *)&pTVar9->field_0x8);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_c8 - (dVar5 * local_d0 - dVar3 * local_d8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_c0 - (dVar3 * local_e0 - dVar4 * local_d0);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_b8 - (dVar4 * local_d8 - dVar5 * local_e0);
  return __return_storage_ptr__;
}

// GetVAtPoint @ 143dad0e0

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetVAtPoint
          (FReadPhysicsObjectInterface<0> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  TPBDRigidParticle<double,3> *pTVar11;
  TVector<double>_u_0 local_68 [4];
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar6 = *(int *)&this_00->field_0x1c;
    if (iVar6 == 2) {
      pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                          (this_00,param_1->BodyIndex);
    }
    else if (iVar6 == 0xb) {
      pTVar11 = (TPBDRigidParticle<double,3> *)
                (this_00->Parameters).Name.Data.AllocatorInstance.Data;
    }
    else {
      if (iVar6 != 0xc) goto LAB_143dad262;
      pTVar11 = (TPBDRigidParticle<double,3> *)
                (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar11 != (TPBDRigidParticle<double,3> *)0x0) {
      if (pTVar11->field_0x98 == '\0') {
        pTVar11 = (TPBDRigidParticle<double,3> *)0x0;
      }
      if (pTVar11 != (TPBDRigidParticle<double,3> *)0x0) {
        GetWorldCoM(this,(TVector<double> *)&local_68[0]._s_0,param_1);
        dVar7 = (param_2->field0_0x0)._s_0.X - (double)local_68[0]._0_8_;
        dVar9 = (param_2->field0_0x0)._s_0.Y - (double)local_68[0]._8_8_;
        dVar8 = (param_2->field0_0x0)._s_0.Z - (double)local_68[0]._16_8_;
        fVar1 = *(float *)&pTVar11->field_0xac;
        fVar2 = *(float *)&pTVar11->field_0xb0;
        fVar3 = *(float *)&pTVar11->field_0xb4;
        fVar4 = *(float *)&pTVar11->field_0xa4;
        fVar5 = *(float *)&pTVar11->field_0xa8;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (double)*(float *)&pTVar11->field_0xa0 -
             ((double)fVar3 * dVar9 - (double)fVar2 * dVar8);
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             (double)fVar4 - ((double)fVar1 * dVar8 - (double)fVar3 * dVar7);
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             (double)fVar5 - ((double)fVar2 * dVar7 - (double)fVar1 * dVar9);
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dad262:
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetW @ 143dad2a0

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetW
          (FReadPhysicsObjectInterface<1> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined8 uVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar3 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143dad325;
      pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar3 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar3->field_0xc) {
        pTVar4 = pTVar3;
      }
      if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        TKinematicGeometryParticlesImp<double,3,0>::GetW
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar4,
                   (TVector<double,3> *)&local_28,*(int *)&pTVar4->field_0x8);
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dad325:
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetW @ 143dad350

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetW
          (FReadPhysicsObjectInterface<0> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined8 uVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar3 = *(int *)&this_00->field_0x1c;
    if (iVar3 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar5 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dad3e7;
      pTVar5 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
      if ((byte)pTVar5->field_0x98 < 2) {
        pTVar5 = (TPBDRigidParticle<double,3> *)0x0;
      }
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        fVar1 = *(float *)&pTVar5->field_0xb0;
        fVar2 = *(float *)&pTVar5->field_0xb4;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pTVar5->field_0xac;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
    }
  }
LAB_143dad3e7:
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetWorldBounds @ 143dad410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetWorldBounds
          (FReadPhysicsObjectInterface<1> *this,TBox<double> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar15;
  TBox<double> *pTVar16;
  TVector<double,3> *pTVar17;
  FPhysicsObject **ppFVar18;
  FPhysicsObject **ppFVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  FPhysicsObject **local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  ppFVar18 = param_1->DataPtr;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  uVar12 = _UNK_150689688;
  uVar11 = ___xmm_3ff00000000000003ff0000000000000;
  uVar10 = _UNK_150689518;
  uVar9 = ___xmm_00000000000000003ff0000000000000;
  ppFVar19 = ppFVar18 + param_1->ArrayNum;
  local_180 = ppFVar19;
  if (ppFVar18 != ppFVar19) {
    do {
      pFVar5 = *ppFVar18;
      if ((pFVar5 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar3 = *(int *)&this_00->field_0x1c;
        if (iVar3 == 2) {
          pTVar15 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                              (this_00,pFVar5->BodyIndex);
        }
        else if (iVar3 == 0xb) {
          pTVar15 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar3 != 0xc) goto LAB_143dad782;
          pTVar15 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar15 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar4 = *(uint *)&pTVar15->field_0x8;
          lVar6 = *(longlong *)pTVar15;
          uVar33 = 0;
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar25 = 0;
          uVar26 = 0;
          uVar27 = 0;
          uVar28 = 0;
          iVar3 = *(int *)(lVar6 + 0x68);
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          local_1b8 = 0.0;
          uStack_1b0 = 0.0;
          uVar14 = 0;
          if ((int)uVar4 < iVar3) {
            uVar14 = ~uVar4 >> 0x1f;
          }
          local_188 = 0;
          local_1a8 = 0.0;
          dStack_1a0 = 0.0;
          local_198 = 0.0;
          dStack_190 = 0.0;
          if ((uVar14 == 0) &&
             (local_1c8 = (longlong)(int)uVar4, local_1c0 = (longlong)iVar3,
             bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            pTVar16 = (TBox<double> *)(*pcVar8)();
            return pTVar16;
          }
          plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x60) + (longlong)(int)uVar4 * 8);
          if ((plVar7 == (longlong *)0x0) || (*(char *)((longlong)plVar7 + 0x16) == '\0')) {
            uVar21 = (undefined4)local_188;
            uVar22 = (undefined4)((ulonglong)local_188 >> 0x20);
          }
          else {
            uVar4 = *(uint *)&pTVar15->field_0x8;
            lVar20 = (longlong)(int)uVar4;
            lVar6 = *(longlong *)pTVar15;
            pcVar8 = *(code **)(*plVar7 + 0x98);
            iVar3 = *(int *)(lVar6 + 0x50);
            uVar14 = 0;
            if ((int)uVar4 < iVar3) {
              uVar14 = ~uVar4 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_1c8 = lVar20, local_1c0 = (longlong)iVar3,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar16 = (TBox<double> *)(*pcVar8)();
              return pTVar16;
            }
            lVar6 = *(longlong *)(lVar6 + 0x48);
            fVar1 = *(float *)(lVar6 + lVar20 * 0x10);
            uVar2 = *(undefined8 *)(lVar6 + 8 + lVar20 * 0x10);
            dVar24 = (double)(float)((ulonglong)uVar2 >> 0x20);
            dVar23 = (double)*(float *)(lVar6 + 4 + lVar20 * 0x10);
            pTVar17 = TParticles<double,3>::GetX
                                (*(TParticles<double,3> **)pTVar15,*(int *)&pTVar15->field_0x8);
            local_f8._8_4_ = SUB84(dVar24,0);
            local_f8._0_8_ = (double)(float)uVar2;
            local_f8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
            local_108._8_4_ = SUB84(dVar23,0);
            local_108._0_8_ = (double)fVar1;
            local_108._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
            local_d8 = *(undefined8 *)&pTVar17->field_0x10;
            local_e8 = *(undefined8 *)pTVar17;
            uStack_e0 = *(undefined8 *)&pTVar17->field_0x8;
            uStack_d0 = 0;
            local_c8 = uVar11;
            uStack_c0 = uVar12;
            local_b8 = uVar9;
            uStack_b0 = uVar10;
            (*pcVar8)(plVar7,&local_140,local_108);
            local_148 = 1;
            local_160 = SUB84(local_128,0);
            uStack_15c = (undefined4)((ulonglong)local_128 >> 0x20);
            uStack_158 = SUB84(dStack_120,0);
            uStack_154 = (undefined4)((ulonglong)dStack_120 >> 0x20);
            local_188 = CONCAT71(uStack_147,1);
            uVar21 = (undefined4)local_188;
            uVar22 = (undefined4)((uint7)uStack_147 >> 0x18);
            uVar31 = SUB84(local_118,0);
            uVar32 = (undefined4)((ulonglong)local_118 >> 0x20);
            uStack_168 = local_130;
            uStack_164 = uStack_12c;
            local_1a8 = (double)CONCAT44(uStack_12c,local_130);
            dStack_1a0 = local_128;
            local_198 = dStack_120;
            dStack_190 = local_118;
            local_178 = local_140;
            uStack_174 = uStack_13c;
            uStack_170 = uStack_138;
            uStack_16c = uStack_134;
            local_1b8 = (double)CONCAT44(uStack_13c,local_140);
            uStack_1b0 = (double)CONCAT44(uStack_134,uStack_138);
            ppFVar19 = local_180;
            uVar25 = local_130;
            uVar26 = uStack_12c;
            uVar27 = local_160;
            uVar28 = uStack_15c;
            uVar29 = uStack_158;
            uVar30 = uStack_154;
            uVar33 = local_140;
            uVar34 = uStack_13c;
            uVar35 = uStack_138;
            uVar36 = uStack_134;
            uStack_150 = uVar31;
            uStack_14c = uVar32;
          }
          if ((char)local_188 != '\0') {
            if (__return_storage_ptr__->IsValid == '\0') {
              *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar33;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar34;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar35;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar36;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar25;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar26;
              *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar27;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar28;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar29;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar30;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar31;
              *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar32;
              __return_storage_ptr__->IsValid = (char)uVar21;
              __return_storage_ptr__->Pad[0] = (char)((uint)uVar21 >> 8);
              __return_storage_ptr__->Pad[1] = (char)((uint)uVar21 >> 0x10);
              __return_storage_ptr__->Pad[2] = (char)((uint)uVar21 >> 0x18);
              __return_storage_ptr__->Pad[3] = (char)uVar22;
              __return_storage_ptr__->Pad[4] = (char)((uint)uVar22 >> 8);
              __return_storage_ptr__->Pad[5] = (char)((uint)uVar22 >> 0x10);
              __return_storage_ptr__->Pad[6] = (char)((uint)uVar22 >> 0x18);
            }
            else {
              dVar24 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
              uVar25 = SUB84(dVar24,0);
              uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
              if (local_1b8 <= dVar24) {
                uVar25 = SUB84(local_1b8,0);
                uVar26 = (undefined4)((ulonglong)local_1b8 >> 0x20);
              }
              dVar24 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
              dVar23 = uStack_1b0;
              if (dVar24 <= uStack_1b0) {
                dVar23 = dVar24;
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar26,uVar25);
              dVar24 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
              uVar25 = SUB84(dVar24,0);
              uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
              if (local_1a8 <= dVar24) {
                uVar25 = SUB84(local_1a8,0);
                uVar26 = (undefined4)((ulonglong)local_1a8 >> 0x20);
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar23;
              dVar24 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
              dVar23 = dStack_1a0;
              if (dStack_1a0 <= dVar24) {
                dVar23 = dVar24;
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar26,uVar25);
              uVar25 = SUB84(local_198,0);
              uVar26 = (undefined4)((ulonglong)local_198 >> 0x20);
              dVar24 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
              if (local_198 <= dVar24) {
                uVar25 = SUB84(dVar24,0);
                uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
              }
              *(double *)&(__return_storage_ptr__->Max).field0_0x0 = dVar23;
              dVar24 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
              if (dVar24 <= dStack_190) {
                dVar24 = dStack_190;
              }
              (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar26,uVar25);
              (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar24;
            }
          }
        }
      }
LAB_143dad782:
      ppFVar18 = ppFVar18 + 1;
    } while (ppFVar18 != ppFVar19);
  }
  return __return_storage_ptr__;
}

// GetWorldBounds @ 143dad810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetWorldBounds
          (FReadPhysicsObjectInterface<0> *this,TBox<double> *__return_storage_ptr__,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong *plVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TPBDRigidParticle<double,3> *pTVar13;
  FPhysicsObject **ppFVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_138 [80];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  ppFVar14 = param_1->DataPtr;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  uVar11 = _UNK_150689688;
  uVar10 = ___xmm_3ff00000000000003ff0000000000000;
  uVar9 = _UNK_150689518;
  uVar8 = ___xmm_00000000000000003ff0000000000000;
  ppFVar1 = ppFVar14 + param_1->ArrayNum;
  do {
    if (ppFVar14 == ppFVar1) {
      return __return_storage_ptr__;
    }
    pFVar5 = *ppFVar14;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar13 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                            (this_00,pFVar5->BodyIndex);
      }
      else if (iVar4 == 0xb) {
        pTVar13 = (TPBDRigidParticle<double,3> *)
                  (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143dada32;
        pTVar13 = (TPBDRigidParticle<double,3> *)
                  (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar13 != (TPBDRigidParticle<double,3> *)0x0) {
        bVar7 = false;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        uVar25 = 0;
        uVar26 = 0;
        plVar6 = *(longlong **)&pTVar13->field_0x50;
        local_e8 = 0;
        if ((plVar6 == (longlong *)0x0) || (*(char *)((longlong)plVar6 + 0x16) == '\0')) {
          uVar15 = 0;
          uVar16 = 0;
        }
        else {
          local_88 = *(undefined8 *)&pTVar13->field_0x20;
          uStack_80 = *(undefined4 *)&pTVar13->field_0x28;
          uStack_7c = *(undefined4 *)&pTVar13->field_0x2c;
          local_98._8_4_ = SUB84((double)*(float *)&pTVar13->field_0x4c,0);
          local_98._0_8_ = (double)*(float *)&pTVar13->field_0x48;
          local_98._12_4_ = (int)((ulonglong)(double)*(float *)&pTVar13->field_0x4c >> 0x20);
          local_78 = *(undefined8 *)&pTVar13->field_0x30;
          local_a8._8_4_ = SUB84((double)*(float *)&pTVar13->field_0x44,0);
          local_a8._0_8_ = (double)*(float *)&pTVar13->field_0x40;
          local_a8._12_4_ = (int)((ulonglong)(double)*(float *)&pTVar13->field_0x44 >> 0x20);
          uStack_70 = 0;
          local_68 = uVar10;
          uStack_60 = uVar11;
          local_58 = uVar8;
          uStack_50 = uVar9;
          (**(code **)(*plVar6 + 0x98))(plVar6,&local_e0,local_a8);
          uVar12 = local_78;
          local_78 = CONCAT71(local_78._1_7_,1);
          local_98._8_4_ = (undefined4)local_c8;
          local_98._12_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
          local_88._0_4_ = (undefined4)uStack_c0;
          local_88._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
          uVar15 = (undefined4)local_78;
          uVar16 = (undefined4)((ulonglong)uVar12 >> 0x20);
          uVar25 = (undefined4)local_b8;
          uVar26 = (undefined4)((ulonglong)local_b8 >> 0x20);
          local_e8 = local_78;
          bVar7 = true;
          local_98._4_4_ = uStack_cc;
          local_98._0_4_ = local_d0;
          uVar17 = local_e0;
          uVar18 = uStack_dc;
          uVar19 = uStack_d8;
          uVar20 = uStack_d4;
          uVar21 = local_d0;
          uVar22 = uStack_cc;
          uVar23 = local_98._8_4_;
          uVar24 = local_98._12_4_;
          uStack_80 = uVar25;
          uStack_7c = uVar26;
        }
        if (bVar7) {
          if (__return_storage_ptr__->IsValid == '\0') {
            *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar17;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar18;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar19;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar20;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar21;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar22;
            *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar23;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar24;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) =
                 (undefined4)local_88;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) =
                 local_88._4_4_;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar25;
            *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar26;
            __return_storage_ptr__->IsValid = (char)uVar15;
            __return_storage_ptr__->Pad[0] = (char)((uint)uVar15 >> 8);
            __return_storage_ptr__->Pad[1] = (char)((uint)uVar15 >> 0x10);
            __return_storage_ptr__->Pad[2] = (char)((uint)uVar15 >> 0x18);
            __return_storage_ptr__->Pad[3] = (char)uVar16;
            __return_storage_ptr__->Pad[4] = (char)((uint)uVar16 >> 8);
            __return_storage_ptr__->Pad[5] = (char)((uint)uVar16 >> 0x10);
            __return_storage_ptr__->Pad[6] = (char)((uint)uVar16 >> 0x18);
          }
          else {
            dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
            dVar3 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
            if (dVar3 <= (double)CONCAT44(uVar18,uVar17)) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
            if (dVar3 <= (double)CONCAT44(uVar20,uVar19)) {
              uVar19 = SUB84(dVar3,0);
              uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
            dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
            if (dVar3 <= (double)CONCAT44(uVar22,uVar21)) {
              uVar21 = SUB84(dVar3,0);
              uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            uVar17 = SUB84(dVar2,0);
            uVar18 = (int)((ulonglong)dVar2 >> 0x20);
            if (dVar2 <= (double)CONCAT44(uVar24,uVar23)) {
              uVar17 = uVar23;
              uVar18 = uVar24;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar20,uVar19);
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar22,uVar21);
            dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
            if ((double)CONCAT44(local_88._4_4_,(undefined4)local_88) <= dVar2) {
              local_88._0_4_ = SUB84(dVar2,0);
              local_88._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (int)((ulonglong)dVar2 >> 0x20);
            if (dVar2 <= (double)CONCAT44(uVar26,uVar25)) {
              uVar17 = uVar25;
              uVar18 = uVar26;
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y =
                 (double)CONCAT44(local_88._4_4_,(undefined4)local_88);
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
          }
        }
      }
    }
LAB_143dada32:
    ppFVar14 = ppFVar14 + 1;
  } while( true );
}

// GetWorldCoM @ 143dada80

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetWorldCoM
          (FReadPhysicsObjectInterface<1> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FGeometryCollectionPhysicsProxy *pFVar4;
  TQuat<double> *this_00;
  TVector<double> *pTVar5;
  TVector<double,3> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double> local_58;
  TQuat<double> local_38;
  
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  if (param_1 == (FPhysicsObject *)0x0) {
    local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this_00 = GetR(this,&local_38,(FPhysicsObject *)0x0);
    local_78._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_78._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_78._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_78._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    goto LAB_143dadad9;
  }
  pFVar4 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  if (pFVar4 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143dadb8b:
    uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar9 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    iVar3 = *(int *)&pFVar4->field_0x1c;
    if (iVar3 == 2) {
      pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (pFVar4,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar4->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dadb8b;
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(pFVar4->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143dadb8b;
    pTVar6 = TParticles<double,3>::GetX(*(TParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8)
    ;
    uVar8 = (undefined4)*(undefined8 *)&pTVar6->field_0x10;
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)&pTVar6->field_0x10 >> 0x20);
    uVar10 = *(undefined4 *)pTVar6;
    uVar11 = *(undefined4 *)&pTVar6->field_0x4;
    uVar12 = *(undefined4 *)&pTVar6->field_0x8;
    uVar13 = *(undefined4 *)&pTVar6->field_0xc;
  }
  local_88 = (double)CONCAT44(uVar9,uVar8);
  this_00 = GetR(this,&local_38,param_1);
  pFVar4 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
  local_78._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_78._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_78._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_78._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar3 = *(int *)&pFVar4->field_0x1c;
    if (iVar3 == 2) {
      pTVar7 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (pFVar4,param_1->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar4->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar3 != 0xc) goto LAB_143dadad9;
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(pFVar4->Parameters).InitializationCommands.ArrayNum;
    }
    local_78._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_78._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_78._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_78._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar7->field_0xc) {
        this_01 = pTVar7;
      }
      if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar6 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(this_01);
        local_78._0_4_ = *(undefined4 *)pTVar6;
        local_78._4_4_ = *(undefined4 *)&pTVar6->field_0x4;
        local_78._8_4_ = *(undefined4 *)&pTVar6->field_0x8;
        local_78._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
        local_78._s_0.Z = *(double *)&pTVar6->field_0x10;
      }
    }
  }
LAB_143dadad9:
  pTVar5 = UE::Math::TQuat<double>::RotateVector
                     (this_00,&local_58,(TVector<double> *)&local_78._s_0);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar11,uVar10) + (pTVar5->field0_0x0)._s_0.X;
  dVar2 = (pTVar5->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar13,uVar12) + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88 + dVar2;
  return __return_storage_ptr__;
}

// GetWorldCoM @ 143dadc30

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetWorldCoM
          (FReadPhysicsObjectInterface<0> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  TVector<double> *pTVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double> local_58;
  undefined1 local_38 [24];
  double dStack_20;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_38._0_8_ = UE::Math::TQuat<double>::Identity.X;
    local_38._8_8_ = UE::Math::TQuat<double>::Identity.Y;
    dStack_20 = UE::Math::TQuat<double>::Identity.W;
    local_38._16_8_ = UE::Math::TQuat<double>::Identity.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
    if (this_00 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143dadd44:
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,param_1->BodyIndex);
        this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
      }
      else if (iVar4 == 0xb) {
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143dadd44;
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar6 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143dadd44;
      local_88 = *(double *)&pTVar6->field_0x30;
      uVar9 = *(undefined4 *)&pTVar6->field_0x20;
      uVar10 = *(undefined4 *)&pTVar6->field_0x24;
      uVar11 = *(undefined4 *)&pTVar6->field_0x28;
      uVar12 = *(undefined4 *)&pTVar6->field_0x2c;
    }
    if (this_00 == (FGeometryCollectionPhysicsProxy *)0x0) {
LAB_143daddd1:
      local_38._0_8_ = UE::Math::TQuat<double>::Identity.X;
      local_38._8_8_ = UE::Math::TQuat<double>::Identity.Y;
      dStack_20 = UE::Math::TQuat<double>::Identity.W;
      local_38._16_8_ = UE::Math::TQuat<double>::Identity.Z;
    }
    else {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,param_1->BodyIndex);
        this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy;
      }
      else if (iVar4 == 0xb) {
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143daddd1;
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar6 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143daddd1;
      local_38._0_8_ = (undefined8)*(float *)&pTVar6->field_0x40;
      local_38._8_8_ = (undefined8)*(float *)&pTVar6->field_0x44;
      dVar1 = (double)(float)((ulonglong)*(undefined8 *)&pTVar6->field_0x48 >> 0x20);
      unique0x10000088 = SUB84(dVar1,0);
      local_38._16_8_ = (double)(float)*(undefined8 *)&pTVar6->field_0x48;
      unique0x1000008c = (int)((ulonglong)dVar1 >> 0x20);
    }
    if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,param_1->BodyIndex);
      }
      else if (iVar4 == 0xb) {
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143dadc80;
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
        if ((byte)pTVar6->field_0x98 < 2) {
          pTVar6 = (TPBDRigidParticle<double,3> *)0x0;
        }
        if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
          local_78._0_4_ = *(undefined4 *)&(pTVar6->MMassProps).Property.MCenterOfMass;
          local_78._4_4_ = *(undefined4 *)&(pTVar6->MMassProps).Property.MCenterOfMass.field_0x4;
          local_78._8_4_ = *(undefined4 *)&(pTVar6->MMassProps).Property.MCenterOfMass.field_0x8;
          local_78._12_4_ = *(undefined4 *)&(pTVar6->MMassProps).Property.MCenterOfMass.field_0xc;
          uVar3 = *(undefined8 *)&(pTVar6->MMassProps).Property.MCenterOfMass.field_0x10;
          uVar7 = (undefined4)uVar3;
          uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
          goto LAB_143dadc83;
        }
      }
    }
  }
LAB_143dadc80:
  uVar7 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar8 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  local_78._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_78._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_78._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_78._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
LAB_143dadc83:
  local_78._s_0.Z = (double)CONCAT44(uVar8,uVar7);
  pTVar5 = UE::Math::TQuat<double>::RotateVector
                     ((TQuat<double> *)local_38,&local_58,(TVector<double> *)&local_78._s_0);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar10,uVar9) + (pTVar5->field0_0x0)._s_0.X;
  dVar2 = (pTVar5->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar12,uVar11) + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88 + dVar2;
  return __return_storage_ptr__;
}

// GetX @ 143dade70

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<1>::GetX
          (FReadPhysicsObjectInterface<1> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  double dVar1;
  int iVar2;
  FGeometryCollectionPhysicsProxy *this_00;
  double dVar3;
  undefined8 uVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TVector<double,3> *pTVar6;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar2 = *(int *)&this_00->field_0x1c;
    if (iVar2 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar2 == 0xb) {
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar2 != 0xc) goto LAB_143dadedd;
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar6 = TParticles<double,3>::GetX
                         (*(TParticles<double,3> **)pTVar5,*(int *)&pTVar5->field_0x8);
      dVar3 = *(double *)&pTVar6->field_0x8;
      dVar1 = *(double *)&pTVar6->field_0x10;
      (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
LAB_143dadedd:
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetX @ 143dadf10

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
Chaos::FReadPhysicsObjectInterface<0>::GetX
          (FReadPhysicsObjectInterface<0> *this,TVector<double> *__return_storage_ptr__,
          FPhysicsObject *param_1)

{
  double dVar1;
  int iVar2;
  FGeometryCollectionPhysicsProxy *this_00;
  double dVar3;
  undefined8 uVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  
  if ((param_1 != (FPhysicsObject *)0x0) &&
     (this_00 = (FGeometryCollectionPhysicsProxy *)param_1->Proxy,
     this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar2 = *(int *)&this_00->field_0x1c;
    if (iVar2 == 2) {
      pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                         (this_00,param_1->BodyIndex);
    }
    else if (iVar2 == 0xb) {
      pTVar5 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar2 != 0xc) goto LAB_143dadf73;
      pTVar5 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar3 = *(double *)&pTVar5->field_0x28;
      dVar1 = *(double *)&pTVar5->field_0x30;
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&pTVar5->field_0x20;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
LAB_143dadf73:
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// HasChildren @ 143dadfa0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<1>::HasChildren
          (FReadPhysicsObjectInterface<1> *this,FPhysicsObject *param_1)

{
  int iVar1;
  FClusterUnionPhysicsProxy *this_00;
  bool bVar2;
  
  if (param_1 != (FPhysicsObject *)0x0) {
    this_00 = (FClusterUnionPhysicsProxy *)param_1->Proxy;
    iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
    if (iVar1 == 2) {
      bVar2 = FTransformDynamicCollection::HasChildren
                        ((FTransformDynamicCollection *)
                         &this_00[3].InitData.InitialTransform.Scale3D,param_1->BodyIndex);
      return bVar2;
    }
    if (iVar1 == 0xc) {
      bVar2 = FClusterUnionPhysicsProxy::HasChildren_Internal(this_00);
      return bVar2;
    }
  }
  return false;
}

// HasChildren @ 143dadfe0

bool __thiscall
Chaos::FReadPhysicsObjectInterface<0>::HasChildren
          (FReadPhysicsObjectInterface<0> *this,FPhysicsObject *param_1)

{
  IPhysicsProxyBase *pIVar1;
  bool bVar2;
  
  if (param_1 != (FPhysicsObject *)0x0) {
    pIVar1 = param_1->Proxy;
    if (pIVar1->Type == GeometryCollectionType) {
      bVar2 = FTransformDynamicCollection::HasChildren
                        (*(FTransformDynamicCollection **)&pIVar1[0x1f].InitializedOnStep,
                         param_1->BodyIndex);
      return bVar2;
    }
    if (pIVar1->Type == ClusterUnionProxy) {
      return *(int *)&pIVar1[5].SyncTimestamp.Object != 0;
    }
  }
  return false;
}

// VisitEveryShape @ 143dbcf60

void __thiscall
Chaos::FReadPhysicsObjectInterface<1>::VisitEveryShape
          (FReadPhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,
          TFunctionRef<bool___cdecl(Chaos::FPhysicsObject_const_*,Chaos::FShapeInstance_*)> *param_2
          )

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  undefined8 *puVar13;
  FPhysicsObject **ppFVar14;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  FPhysicsObject *local_48 [2];
  
  ppFVar14 = param_1->DataPtr;
  ppFVar2 = ppFVar14 + param_1->ArrayNum;
  do {
    if (ppFVar14 == ppFVar2) {
      return;
    }
    pFVar5 = *ppFVar14;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar12 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dbd0c2;
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        uVar4 = *(uint *)&pTVar12->field_0x8;
        lVar6 = *(longlong *)pTVar12;
        uVar11 = 0;
        if ((int)uVar4 < *(int *)(lVar6 + 0x100)) {
          uVar11 = ~uVar4 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0xf8);
        puVar13 = (undefined8 *)(lVar6 + (longlong)(int)uVar4 * 0x18);
        puVar7 = *(undefined8 **)(lVar6 + 8 + (longlong)(int)uVar4 * 0x18);
        piVar1 = (int *)(puVar13 + 2);
        iVar3 = *piVar1;
        if (puVar7 != (undefined8 *)0x0) {
          puVar13 = puVar7;
        }
        puVar7 = puVar13 + iVar3;
        while( true ) {
          if (*piVar1 != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar13 == puVar7) break;
          local_res20 = *puVar13;
          local_48[0] = pFVar5;
          cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_48,&local_res20);
          if (cVar10 != '\0') {
            return;
          }
          puVar13 = puVar13 + 1;
        }
      }
    }
LAB_143dbd0c2:
    ppFVar14 = ppFVar14 + 1;
  } while( true );
}

// VisitEveryShape @ 143dbd100

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FReadPhysicsObjectInterface<0>::VisitEveryShape
          (FReadPhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,
          TFunctionRef<bool___cdecl(Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*)>
          *param_2)

{
  FPhysicsObject **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  char cVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  undefined8 *puVar7;
  FPhysicsObject **ppFVar8;
  undefined8 local_res10 [2];
  FPhysicsObject *local_res20;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar4 = *ppFVar8;
    if ((pFVar4 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dbd1f7;
        pTVar6 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
        puVar7 = (undefined8 *)&pTVar6->field_0x80;
        iVar3 = *(int *)&pTVar6->field_0x90;
        if (*(undefined8 **)&pTVar6->field_0x88 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&pTVar6->field_0x88;
        }
        puVar2 = puVar7 + iVar3;
        while( true ) {
          if (*(int *)&pTVar6->field_0x90 != iVar3) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar7 == puVar2) break;
          local_res10[0] = *puVar7;
          local_res20 = pFVar4;
          cVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20,local_res10);
          if (cVar5 != '\0') {
            return;
          }
          puVar7 = puVar7 + 1;
        }
      }
    }
LAB_143dbd1f7:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// operator() @ 1504a87f0

bool __thiscall
`Chaos::FReadPhysicsObjectInterface<1>::GetUserDefinedEntity'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5286570181156405465>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5286570181156405465>,
                       &`public:___cdecl_`public:_class_FChaosUserDefinedEntity*___ptr64___cdecl_Chaos::FReadPhysicsObjectInterface<1>::GetUserDefinedEntity(Chaos::FPhysicsObject_const*___ptr64_const)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

