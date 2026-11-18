// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// GetParentObject<1> @ 143d8c7c0

FPhysicsObject * __thiscall Chaos::FPhysicsObject::GetParentObject<1>(FPhysicsObject *this)

{
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  iVar2 = *(int *)&this_00->field_0x1c;
  if (iVar2 == 2) {
    iVar2 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)&this_00->PhysicsThreadCollection,
                       this->BodyIndex);
    if (iVar2 != -1) {
      pFVar3 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(this_00,iVar2);
      return pFVar3;
    }
  }
  else if ((iVar2 != 0xb) && (iVar2 != 0xc)) {
    return (FPhysicsObject *)0x0;
  }
  pIVar1 = this->Proxy->ParentProxy;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Type == ClusterUnionProxy)) {
    return (FPhysicsObject *)pIVar1[5]._padding_;
  }
  return (FPhysicsObject *)0x0;
}

// GetParentObject<0> @ 143d8c850

FPhysicsObject * __thiscall Chaos::FPhysicsObject::GetParentObject<0>(FPhysicsObject *this)

{
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  iVar2 = *(int *)&this_00->field_0x1c;
  if (iVar2 == 2) {
    iVar2 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)this_00->GameThreadCollection,this->BodyIndex)
    ;
    if (iVar2 != -1) {
      pFVar3 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(this_00,iVar2);
      return pFVar3;
    }
  }
  else if ((iVar2 != 0xb) && (iVar2 != 0xc)) {
    return (FPhysicsObject *)0x0;
  }
  pIVar1 = this->Proxy->ParentProxy;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Type == ClusterUnionProxy)) {
    return (FPhysicsObject *)pIVar1[5]._padding_;
  }
  return (FPhysicsObject *)0x0;
}

// ObjectState<1> @ 143d90240

EObjectStateType __thiscall Chaos::FPhysicsObject::ObjectState<1>(FPhysicsObject *this)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  EObjectStateType EVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar3 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal(this_00,this->BodyIndex)
      ;
    }
    else if (iVar1 == 0xb) {
      pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this_00->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return Uninitialized;
      }
      pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this_00->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar3 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      this_01 = pTVar4;
      if (1 < (byte)pTVar3->field_0xc) {
        this_01 = pTVar3;
      }
      if (this_01 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar5 = pTVar4;
        if (pTVar3->field_0xc != 0) {
          pTVar5 = pTVar3;
        }
        if (pTVar5 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          return Static;
        }
        this_01 = pTVar4;
        if (1 < (byte)pTVar5->field_0xc) {
          this_01 = pTVar5;
        }
        if (this_01 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          return Kinematic;
        }
      }
      EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01);
      return EVar2;
    }
  }
  return Uninitialized;
}

// ObjectState<0> @ 143d902e0

/* WARNING: Type propagation algorithm not settling */

EObjectStateType __thiscall Chaos::FPhysicsObject::ObjectState<0>(FPhysicsObject *this)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External(this_00,this->BodyIndex)
      ;
    }
    else if (iVar1 == 0xb) {
      pTVar2 = (TPBDRigidParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) {
        return Uninitialized;
      }
      pTVar2 = (TPBDRigidParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar2 != (TPBDRigidParticle<double,3> *)0x0) {
      pTVar3 = pTVar2;
      if ((byte)pTVar2->field_0x98 < 2) {
        pTVar3 = (TPBDRigidParticle<double,3> *)0x0;
      }
      if (pTVar3 != (TPBDRigidParticle<double,3> *)0x0) {
        return (pTVar3->MMiscData).Property.MObjectState;
      }
      if (pTVar2->field_0x98 == 0) {
        pTVar2 = (TPBDRigidParticle<double,3> *)0x0;
      }
      if (pTVar2 == (TPBDRigidParticle<double,3> *)0x0) {
        return Static;
      }
      if ((byte)pTVar2->field_0x98 < 2) {
        return Kinematic;
      }
      return (pTVar2->MMiscData).Property.MObjectState;
    }
  }
  return Uninitialized;
}

// IsValid @ 143daf5b0

bool __thiscall Chaos::FPhysicsObject::IsValid(FPhysicsObject *this)

{
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pIVar1 = this->Proxy;
  if (pIVar1 != (IPhysicsProxyBase *)0x0) {
    if ((pIVar1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (((pIVar1->SyncTimestamp).Object)->bDeleted == false) {
      return true;
    }
  }
  return false;
}

// GetParticle<1> @ 1440c2a80

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FPhysicsObject::GetParticle<1>(FPhysicsObject *this)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  if (this_00 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar1 = *(int *)&this_00->field_0x1c;
    if (iVar1 == 2) {
      pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)
               FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal(this_00,this->BodyIndex)
      ;
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

// GetRootParticle<1> @ 1440c2ac0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FPhysicsObject::GetRootParticle<1>(FPhysicsObject *this)

{
  FGeometryCollectionPhysicsProxy *pFVar1;
  IPhysicsProxyBase *pIVar2;
  int iVar3;
  bool *pbVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FPhysicsObject *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  pFVar1 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar5 = pTVar7;
  if (pFVar1 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar3 = *(int *)&pFVar1->field_0x1c;
    if (iVar3 == 2) {
      pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)
               FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal(pFVar1,this->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)&(pFVar1->Parameters).Name.Data.ArrayNum;
    }
    else if (iVar3 == 0xc) {
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                &(pFVar1->Parameters).InitializationCommands.ArrayNum;
    }
  }
  pFVar1 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  iVar3 = *(int *)&pFVar1->field_0x1c;
  if (iVar3 == 2) {
    iVar3 = FTransformDynamicCollection::GetParent
                      ((FTransformDynamicCollection *)&pFVar1->PhysicsThreadCollection,
                       this->BodyIndex);
    if (iVar3 == -1) goto LAB_1440c2b88;
    pFVar6 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(pFVar1,iVar3);
  }
  else {
    if ((iVar3 != 0xb) && (iVar3 != 0xc)) goto LAB_1440c2b2d;
LAB_1440c2b88:
    pIVar2 = this->Proxy->ParentProxy;
    if ((pIVar2 == (IPhysicsProxyBase *)0x0) || (pIVar2->Type != ClusterUnionProxy))
    goto LAB_1440c2b2d;
    pFVar6 = (FPhysicsObject *)pIVar2[5]._padding_;
  }
  if (pFVar6 != (FPhysicsObject *)0x0) {
    do {
      this_00 = pTVar7;
      if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
        this_00 = pTVar5;
      }
      if ((this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         (pbVar4 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), *pbVar4 == false))
      break;
      pFVar1 = (FGeometryCollectionPhysicsProxy *)pFVar6->Proxy;
      pTVar5 = pTVar7;
      if (pFVar1 != (FGeometryCollectionPhysicsProxy *)0x0) {
        iVar3 = *(int *)&pFVar1->field_0x1c;
        if (iVar3 == 2) {
          pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)
                   FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                             (pFVar1,pFVar6->BodyIndex);
        }
        else if (iVar3 == 0xb) {
          pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                    &(pFVar1->Parameters).Name.Data.ArrayNum;
        }
        else if (iVar3 == 0xc) {
          pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                    &(pFVar1->Parameters).InitializationCommands.ArrayNum;
        }
      }
      pFVar1 = (FGeometryCollectionPhysicsProxy *)pFVar6->Proxy;
      iVar3 = *(int *)&pFVar1->field_0x1c;
      this = pFVar6;
      if (iVar3 == 2) {
        iVar3 = FTransformDynamicCollection::GetParent
                          ((FTransformDynamicCollection *)&pFVar1->PhysicsThreadCollection,
                           pFVar6->BodyIndex);
        if (iVar3 == -1) goto LAB_1440c2c23;
        pFVar6 = FGeometryCollectionPhysicsProxy::GetPhysicsObjectByIndex(pFVar1,iVar3);
      }
      else {
        if ((iVar3 != 0xb) && (iVar3 != 0xc)) break;
LAB_1440c2c23:
        pIVar2 = pFVar6->Proxy->ParentProxy;
        if ((pIVar2 == (IPhysicsProxyBase *)0x0) || (pIVar2->Type != ClusterUnionProxy)) break;
        pFVar6 = (FPhysicsObject *)pIVar2[5]._padding_;
      }
    } while (pFVar6 != (FPhysicsObject *)0x0);
    if (this == (FPhysicsObject *)0x0) {
      return (TGeometryParticleHandleImp<double,3,1> *)0x0;
    }
  }
LAB_1440c2b2d:
  pFVar1 = (FGeometryCollectionPhysicsProxy *)this->Proxy;
  if (pFVar1 != (FGeometryCollectionPhysicsProxy *)0x0) {
    iVar3 = *(int *)&pFVar1->field_0x1c;
    if (iVar3 == 2) {
      pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)
               FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal(pFVar1,this->BodyIndex);
    }
    else if (iVar3 == 0xb) {
      pTVar7 = *(TGeometryParticleHandleImp<double,3,1> **)&(pFVar1->Parameters).Name.Data.ArrayNum;
    }
    else if (iVar3 == 0xc) {
      pTVar7 = *(TGeometryParticleHandleImp<double,3,1> **)
                &(pFVar1->Parameters).InitializationCommands.ArrayNum;
    }
  }
  return pTVar7;
}

