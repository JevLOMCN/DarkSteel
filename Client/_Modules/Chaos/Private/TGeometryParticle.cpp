// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 81

// CastToKinematicParticle @ 1436fba60

TKinematicGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::CastToKinematicParticle(TGeometryParticle<double,3> *this)

{
  TKinematicGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (TKinematicGeometryParticle<double,3> *)0x0;
  if (this->Type != Static) {
    pTVar1 = (TKinematicGeometryParticle<double,3> *)this;
  }
  return pTVar1;
}

// CastToRigidParticle @ 1436fbaa0

TPBDRigidParticle<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::CastToRigidParticle(TGeometryParticle<double,3> *this)

{
  TPBDRigidParticle<double,3> *pTVar1;
  
  pTVar1 = (TPBDRigidParticle<double,3> *)0x0;
  if (Kinematic < this->Type) {
    pTVar1 = (TPBDRigidParticle<double,3> *)this;
  }
  return pTVar1;
}

// TGeometryParticle<double,3> @ 14373b850

TGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::TGeometryParticle<double,3>
          (TGeometryParticle<double,3> *this,FGeometryParticleParameters *param_1)

{
  FSpatialAccelerationIdx *pFVar1;
  int iVar2;
  IPhysicsProxyBase *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7__TGeometryParticle_N_02_Chaos__6B_;
  *(undefined8 *)&(this->MXR).Property.MR = 0;
  *(undefined8 *)&(this->MXR).Property.MR.field_0x8 = 0;
  (this->MNonFrequentData).Property.MGeometry.Reference = (FImplicitObject *)0x0;
  (this->MNonFrequentData).Property.MUniqueIdx.Idx = -1;
  pFVar1 = &(this->MNonFrequentData).Property.MSpatialIdx;
  pFVar1->Bucket = 0;
  pFVar1->InnerIdx = 0;
  (this->MNonFrequentData).Property.MParticleID.GlobalID = -1;
  (this->MNonFrequentData).Property.MParticleID.LocalID = -1;
  (this->MNonFrequentData).Property.MDebugName.Object = (FString *)0x0;
  (this->MNonFrequentData).Property.MDebugName.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MShapesArray).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
        )0x0;
  (this->MShapesArray).ArrayNum = 0;
  (this->MShapesArray).ArrayMax = 1;
  (this->MDirtyFlags).Bits = 0;
  this->Proxy = (IPhysicsProxyBase *)0x0;
  this->Type = Static;
  this->MUserData = (void *)0x0;
  *(undefined8 *)&(this->MXR).Property.MX = 0;
  *(undefined8 *)&(this->MXR).Property.MX.field_0x8 = 0;
  *(undefined8 *)&(this->MXR).Property.MX.field_0x10 = 0;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 1;
  pIVar3 = this->Proxy;
  iVar2 = (this->MDirtyFlags).Bits;
  fVar4 = (float)UE::Math::TQuat<double>::Identity.Y;
  fVar5 = (float)UE::Math::TQuat<double>::Identity.Z;
  fVar6 = (float)UE::Math::TQuat<double>::Identity.W;
  *(float *)&(this->MXR).Property.MR = (float)UE::Math::TQuat<double>::Identity.X;
  *(float *)&(this->MXR).Property.MR.field_0x4 = fVar4;
  *(float *)&(this->MXR).Property.MR.field_0x8 = fVar5;
  *(float *)&(this->MXR).Property.MR.field_0xc = fVar6;
  (this->MDirtyFlags).Bits = iVar2;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  pIVar3 = this->Proxy;
  pFVar1 = &(this->MNonFrequentData).Property.MSpatialIdx;
  pFVar1->Bucket = 0;
  pFVar1->InnerIdx = 0;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  pIVar3 = this->Proxy;
  (this->MNonFrequentData).Property.MResimType = FullResim;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  pIVar3 = this->Proxy;
  (this->MNonFrequentData).Property.MEnabledDuringResim = true;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  return this;
}

// ~TGeometryParticle<double,3> @ 14373dfe0

void __thiscall
Chaos::TGeometryParticle<double,3>::~TGeometryParticle<double,3>(TGeometryParticle<double,3> *this)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar4;
  
  this->_padding_ = (longlong)&___7__TGeometryParticle_N_02_Chaos__6B_;
  (this->MNonFrequentData).Property.MUniqueIdx.Idx = -1;
  FVar4 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar4 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
  }
  DestructItems<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int>
            ((TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> *)
             FVar4,(this->MShapesArray).ArrayNum);
  FVar4 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FMemory::Free((void *)FVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MNonFrequentData).Property.MDebugName.SharedReferenceCount.ReferenceController);
  pFVar2 = (this->MNonFrequentData).Property.MGeometry.Reference;
  if (pFVar2 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

// IsParticleValid @ 143798310

bool __thiscall
Chaos::TGeometryParticle<double,3>::IsParticleValid(TGeometryParticle<double,3> *this)

{
  FImplicitObject *pFVar1;
  char cVar2;
  
  pFVar1 = (this->MNonFrequentData).Property.MGeometry.Reference;
  if (pFVar1 != (FImplicitObject *)0x0) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x30))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// SerializationFactory @ 1437a7940

TGeometryParticle<double,3> * __cdecl
Chaos::TGeometryParticle<double,3>::SerializationFactory
          (FChaosArchive *param_1,TGeometryParticle<double,3> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  TKinematicGeometryParticle<double,3> *pTVar6;
  EParticleType local_res8 [16];
  FKinematicGeometryParticleParameters local_res18 [8];
  FGeometryParticleParameters local_res20 [8];
  FPBDRigidParticleParameters local_18;
  FPBDRigidParticleParameters local_14 [3];
  
  if ((param_1->_padding_ & 1) == 0) {
    local_res8[0] = param_2->Type;
  }
  else {
    local_res8[0] = Static;
  }
  plVar1 = (longlong *)param_1->_padding_;
  if ((EParticleType *)plVar1[1] < (EParticleType *)*plVar1 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EParticleType *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res8[0] == Static) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar4 = ::operator_new(0xa0);
      if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
        pTVar4 = TGeometryParticle<double,3>(pTVar4,local_res20);
        return pTVar4;
      }
    }
  }
  else if (local_res8[0] == Kinematic) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar6 = ::operator_new(0xf0);
      if (pTVar6 != (TKinematicGeometryParticle<double,3> *)0x0) {
        pTVar6 = TKinematicGeometryParticle<double,3>::TKinematicGeometryParticle<double,3>
                           (pTVar6,local_res18);
        return (TGeometryParticle<double,3> *)pTVar6;
      }
    }
  }
  else if (local_res8[0] == Rigid) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar5 = ::operator_new(0x1c0);
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        local_14[0]._padding_ = '\0';
        local_14[0].bStartSleeping = false;
        local_14[0].bGravityEnabled = true;
        local_14[0].bCCDEnabled = false;
        pTVar5 = TPBDRigidParticle<double,3>::TPBDRigidParticle<double,3>(pTVar5,local_14);
        return (TGeometryParticle<double,3> *)pTVar5;
      }
    }
  }
  else if (local_res8[0] == GeometryCollection) {
    if ((param_1->_padding_ & 1) != 0) {
      pTVar5 = ::operator_new(0x1c0);
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        local_18._padding_ = '\0';
        local_18.bStartSleeping = false;
        local_18.bGravityEnabled = true;
        local_18.bCCDEnabled = false;
        TPBDRigidParticle<double,3>::TPBDRigidParticle<double,3>(pTVar5,&local_18);
        pTVar5->field_0x98 = 6;
        *(undefined ***)pTVar5 = &___7FPBDGeometryCollectionParticle_Chaos__6B_;
        return (TGeometryParticle<double,3> *)pTVar5;
      }
      return (TGeometryParticle<double,3> *)0x0;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xf49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TGeometryParticle<double,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TGeometryParticle<double,3> *)0x0;
}

// Serialize @ 1437aa690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticle<double,3>::Serialize
          (TGeometryParticle<double,3> *this,FChaosArchive *param_1)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  undefined8 uVar2;
  EParticleType *pEVar3;
  FImplicitObject *pFVar4;
  int iVar5;
  FArchive *pFVar6;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  TQuat<double> local_a8;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (**(code **)(param_1->_padding_ + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar5 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (iVar5 < 0xc) {
    local_a8.X = (double)*(float *)&(this->MXR).Property.MR;
    local_a8.Y = (double)*(float *)&(this->MXR).Property.MR.field_0x4;
    uVar2 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
    local_a8.Z = (double)(float)uVar2;
    local_a8.W = (double)(float)((ulonglong)uVar2 >> 0x20);
    pFVar6 = SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->MXR);
    UE::Math::operator<<(pFVar6,&local_a8);
  }
  else {
    pFVar6 = SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->MXR);
    UE::Math::operator<<(pFVar6,(TQuat<float> *)&(this->MXR).Property.MR);
  }
  FChaosArchive::SerializePtr<Chaos::FImplicitObject>
            (param_1,(TRefCountPtr<Chaos::FImplicitObject> *)&this->MNonFrequentData);
  operator<<<Chaos::FShapeInstanceProxy_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->MShapesArray);
  pEVar3 = *(EParticleType **)param_1->_padding_;
  if ((EParticleType *)((undefined8 *)param_1->_padding_)[1] < pEVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->Type,1);
  }
  else {
    this->Type = *pEVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar5 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar5 < 0x10) {
    local_68 = *(undefined8 *)&(this->MXR).Property.MX;
    uStack_60 = *(undefined8 *)&(this->MXR).Property.MX.field_0x8;
    pFVar4 = (this->MNonFrequentData).Property.MGeometry.Reference;
    local_58 = *(undefined8 *)&(this->MXR).Property.MX.field_0x10;
    uStack_50 = 0;
    local_48 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_40 = _UNK_150689688;
    local_38 = ___xmm_00000000000000003ff0000000000000;
    uStack_30 = _UNK_150689518;
    uVar2 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
    local_78 = (double)(float)uVar2;
    dStack_70 = (double)(float)((ulonglong)uVar2 >> 0x20);
    dVar8 = (double)*(float *)&(this->MXR).Property.MR.field_0x4;
    local_88._8_4_ = SUB84(dVar8,0);
    local_88._0_8_ = (double)*(float *)&(this->MXR).Property.MR;
    local_88._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    if ((pFVar4 != (FImplicitObject *)0x0) && (pFVar4->bHasBoundingBox != false)) {
      FVar7 = (this->MShapesArray).AllocatorInstance.SecondaryData;
      iVar5 = (this->MShapesArray).ArrayNum;
      if (FVar7 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                    )0x0) {
        FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )&this->MShapesArray;
      }
      FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )((longlong)FVar7 + (longlong)iVar5 * 8);
      while( true ) {
        if ((this->MShapesArray).ArrayNum != iVar5) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_b8);
        }
        if (FVar7 == FVar1) break;
        FShapeInstanceProxy::UpdateShapeBounds
                  (*(FShapeInstanceProxy **)FVar7,(TRigidTransform<double,3> *)local_88);
        FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )((longlong)FVar7 + 8);
      }
    }
  }
  return;
}

// SetR @ 1437b0480

void __thiscall
Chaos::TGeometryParticle<double,3>::SetR
          (TGeometryParticle<double,3> *this,TRotation<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  IPhysicsProxyBase *pIVar4;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_1->field_0x18;
  pIVar4 = this->Proxy;
  *(float *)&(this->MXR).Property.MR = (float)*(double *)param_1;
  *(float *)&(this->MXR).Property.MR.field_0x4 = (float)dVar1;
  *(float *)&(this->MXR).Property.MR.field_0x8 = (float)dVar2;
  *(float *)&(this->MXR).Property.MR.field_0xc = (float)dVar3;
  if (((param_2) &&
      ((this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 1, pIVar4 != (IPhysicsProxyBase *)0x0))
     && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    return;
  }
  return;
}

// SetX @ 1437b07a0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetX
          (TGeometryParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  
  pIVar1 = this->Proxy;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->MXR).Property.MX = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MXR).Property.MX.field_0x8 = uVar2;
  *(undefined8 *)&(this->MXR).Property.MX.field_0x10 = *(undefined8 *)&param_1->field_0x10;
  if (((param_2) &&
      ((this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 1, pIVar1 != (IPhysicsProxyBase *)0x0))
     && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SyncRemoteDataImp @ 1437b1f70

void __thiscall
Chaos::TGeometryParticle<double,3>::SyncRemoteDataImp
          (TGeometryParticle<double,3> *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  FParticlePositionRotation *pFVar8;
  FParticleNonFrequentData *this_00;
  
  uVar7 = (param_3->Flags).Bits;
  if ((uVar7 & 1) != 0) {
    uVar1 = *(undefined8 *)&(this->MXR).Property.MX;
    uVar2 = *(undefined8 *)&(this->MXR).Property.MX.field_0x8;
    uVar3 = *(undefined8 *)&(this->MXR).Property.MX.field_0x10;
    lVar4 = (this->MXR).Property._padding_;
    uVar5 = *(undefined8 *)&(this->MXR).Property.MR;
    uVar6 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
    pFVar8 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                       (&param_1->XRPool,param_2);
    *(undefined8 *)&pFVar8->MX = uVar1;
    *(undefined8 *)&(pFVar8->MX).field_0x8 = uVar2;
    *(undefined8 *)&(pFVar8->MX).field_0x10 = uVar3;
    pFVar8->_padding_ = lVar4;
    *(undefined8 *)&pFVar8->MR = uVar5;
    *(undefined8 *)&(pFVar8->MR).field_0x8 = uVar6;
    uVar7 = (param_3->Flags).Bits;
  }
  if ((uVar7 & 0x10) != 0) {
    this_00 = TDirtyElementPool<Chaos::FParticleNonFrequentData>::GetElement
                        (&param_1->NonFrequentDataPool,param_2);
    FParticleNonFrequentData::operator=(this_00,&(this->MNonFrequentData).Property);
  }
  return;
}

// operator()<Chaos::FParticleNonFrequentData> @ 143bb57e0

void __thiscall
`Chaos::TGeometryParticle<double,3>::
ModifyGeometry<`Chaos::TGeometryParticle<double,3>::RemoveShapesAtSortedIndices'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<Chaos::FParticleNonFrequentData>
          (void *this,FParticleNonFrequentData *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FImplicitObject *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  FImplicitObject *pFVar9;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_38 [2];
  
  pFVar9 = (FImplicitObject *)0x0;
  pFVar4 = (param_1->MGeometry).Reference;
  if (pFVar4 == (FImplicitObject *)0x0) {
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x18);
  if (iVar3 == 0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
    pFVar9 = pFVar4;
LAB_143bb5930:
    RemoveShapesAtSortedIndices'::__l2::<lambda_1>::operator()
              (*(void **)((longlong)this + 0x10),pFVar9);
    FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(pFVar9);
  }
  else {
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,&local_res20);
      if (local_38 != puVar8) {
        pFVar9 = (FImplicitObject *)*puVar8;
        *puVar8 = 0;
      }
      if (local_res20 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res20 + 1);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (*(int *)((longlong)local_res20 + 0xc) == 0)) {
          (**(code **)*local_res20)(local_res20,1);
        }
      }
    }
    else {
      if (iVar3 != 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xc73,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_143bb5930;
      }
      puVar8 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x48))(pFVar4,&local_res18);
      if (local_38 != puVar8) {
        pFVar9 = (FImplicitObject *)*puVar8;
        *puVar8 = 0;
      }
      if (local_res18 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res18 + 1);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (*(int *)((longlong)local_res18 + 0xc) == 0)) {
          (**(code **)*local_res18)(local_res18,1);
        }
      }
    }
    RemoveShapesAtSortedIndices'::__l2::<lambda_1>::operator()
              (*(void **)((longlong)this + 0x10),pFVar9);
    pFVar4 = (param_1->MGeometry).Reference;
    if (pFVar4 != pFVar9) {
      (param_1->MGeometry).Reference = pFVar9;
      if (pFVar9 != (FImplicitObject *)0x0) {
        LOCK();
        *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FImplicitObject *)0x0) {
        LOCK();
        plVar2 = &pFVar4->_padding_;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  Chaos::TGeometryParticle<double,3>::UpdateShapesArray(*(TGeometryParticle<double,3> **)this);
  if (pFVar9 != (FImplicitObject *)0x0) {
    LOCK();
    plVar2 = &pFVar9->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar9->_padding_ + 4) == 0)) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  return;
}

// operator()<Chaos::FParticleNonFrequentData> @ 143bb5990

void __thiscall
`Chaos::TGeometryParticle<double,3>::
ModifyGeometry<`Chaos::TGeometryParticle<double,3>::SetIgnoreAnalyticCollisions'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<Chaos::FParticleNonFrequentData>
          (void *this,FParticleNonFrequentData *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  FImplicitObject *pFVar9;
  FImplicitObject *pFVar10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_38 [2];
  
  pFVar9 = (FImplicitObject *)0x0;
  pFVar10 = (param_1->MGeometry).Reference;
  bVar5 = false;
  if (pFVar10 == (FImplicitObject *)0x0) {
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x18);
  if (iVar3 == 0) {
    LOCK();
    *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
    UNLOCK();
  }
  else {
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)(**(code **)(pFVar10->_padding_ + 0x38))(pFVar10,&local_res20);
      if (local_38 != puVar8) {
        pFVar9 = (FImplicitObject *)*puVar8;
        *puVar8 = 0;
      }
    }
    else {
      if (iVar3 != 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xc73,L"");
        pFVar10 = pFVar9;
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_143bb5a76;
      }
      puVar8 = (undefined8 *)(**(code **)(pFVar10->_padding_ + 0x48))(pFVar10,&local_res18);
      local_res20 = local_res18;
      if (local_38 != puVar8) {
        pFVar9 = (FImplicitObject *)*puVar8;
        *puVar8 = 0;
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res20 + 1);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)((longlong)local_res20 + 0xc) == 0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    bVar5 = true;
    pFVar10 = pFVar9;
  }
LAB_143bb5a76:
  Chaos::TGeometryParticle<double,3>::SetIgnoreAnalyticCollisionsImp
            ((TGeometryParticle<double,3> *)**(undefined8 **)((longlong)this + 0x10),pFVar10,
             *(bool *)(*(undefined8 **)((longlong)this + 0x10) + 1));
  if (bVar5) {
    pFVar9 = (param_1->MGeometry).Reference;
    if (pFVar9 != pFVar10) {
      (param_1->MGeometry).Reference = pFVar10;
      if (pFVar10 != (FImplicitObject *)0x0) {
        LOCK();
        *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar9 != (FImplicitObject *)0x0) {
        LOCK();
        plVar2 = &pFVar9->_padding_;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar9->_padding_ + 4) == 0)) {
          (**(code **)pFVar9->_padding_)(pFVar9,1);
        }
      }
    }
  }
  else {
    FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(pFVar10);
  }
  Chaos::TGeometryParticle<double,3>::UpdateShapesArray(*(TGeometryParticle<double,3> **)this);
  if (pFVar10 != (FImplicitObject *)0x0) {
    LOCK();
    plVar2 = &pFVar10->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar10->_padding_ + 4) == 0)) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// operator()<Chaos::FParticleNonFrequentData> @ 143bb5b10

void __thiscall
`Chaos::TGeometryParticle<double,3>::
ModifyGeometry<`Chaos::TGeometryParticle<double,3>::MergeGeometry'::__l5::<lambda_1>_>'::__l2::
<lambda_1>::operator()<Chaos::FParticleNonFrequentData>
          (void *this,FParticleNonFrequentData *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  FImplicitObjectUnion *this_00;
  FImplicitObjectUnion *pFVar9;
  FImplicitObjectUnion *pFVar10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_38 [2];
  
  pFVar10 = (FImplicitObjectUnion *)0x0;
  pFVar9 = (FImplicitObjectUnion *)(param_1->MGeometry).Reference;
  bVar5 = false;
  if (pFVar9 == (FImplicitObjectUnion *)0x0) {
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x18);
  if (iVar3 == 0) {
    LOCK();
    *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
    UNLOCK();
  }
  else {
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)(**(code **)(pFVar9->_padding_ + 0x38))(pFVar9,&local_res20);
      pFVar9 = pFVar10;
      if (local_38 != puVar8) {
        pFVar9 = (FImplicitObjectUnion *)*puVar8;
        *puVar8 = 0;
      }
    }
    else {
      if (iVar3 != 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xc73,L"");
        pFVar9 = pFVar10;
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_143bb5c37;
      }
      puVar8 = (undefined8 *)(**(code **)(pFVar9->_padding_ + 0x48))(pFVar9,&local_res18);
      local_res20 = local_res18;
      pFVar9 = pFVar10;
      if (local_38 != puVar8) {
        pFVar9 = (FImplicitObjectUnion *)*puVar8;
        *puVar8 = 0;
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res20 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)((longlong)local_res20 + 0xc) == 0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    bVar5 = true;
  }
LAB_143bb5c37:
  this_00 = pFVar9;
  if ((char)pFVar9->_padding_ != '\x05') {
    this_00 = pFVar10;
  }
  if (this_00 != (FImplicitObjectUnion *)0x0) {
    Chaos::FImplicitObjectUnion::Combine
              (this_00,(TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
                       **(undefined8 **)((longlong)this + 0x10));
  }
  if (bVar5) {
    pFVar10 = (FImplicitObjectUnion *)(param_1->MGeometry).Reference;
    if (pFVar10 != pFVar9) {
      (param_1->MGeometry).Reference = (FImplicitObject *)pFVar9;
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
      if (pFVar10 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        plVar1 = &pFVar10->_padding_;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar10->_padding_ + 4) == 0)) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
    }
  }
  else {
    FChaosVisualDebuggerTrace::InvalidateGeometryFromCache((FImplicitObject *)pFVar9);
  }
  Chaos::TGeometryParticle<double,3>::UpdateShapesArray(*(TGeometryParticle<double,3> **)this);
  LOCK();
  plVar1 = &pFVar9->_padding_;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar9->_padding_ + 4) == 0)) {
    (**(code **)pFVar9->_padding_)(pFVar9,1);
  }
  return;
}

// operator() @ 143be6160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::TGeometryParticle<double,3>::RemoveShapesAtSortedIndices'::__l2::<lambda_1>::operator()
          (void *this,FImplicitObject *param_1)

{
  longlong *plVar1;
  TArrayView<int_const_,int> *this_00;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *this_01;
  
  uVar3 = Chaos::FImplicitObject::GetType(param_1);
  if (((uVar3 == '\x05') || (uVar3 == '\x0f')) && (param_1 != (FImplicitObject *)0x0)) {
    this_00 = *(TArrayView<int_const_,int> **)((longlong)this + 8);
    lVar6 = *(longlong *)this;
    this_01 = (TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)(lVar6 + 0x80);
    if (this_00->ArrayNum != 0) {
      iVar11 = 1;
      piVar5 = TArrayView<int_const_,int>::operator[](this_00,0);
      iVar7 = this_00->ArrayNum;
      uVar8 = 1;
      iVar14 = *piVar5;
      if (1 < iVar7) {
        lVar12 = 4;
        do {
          uVar9 = 0;
          if ((int)uVar8 < iVar7) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = *(int *)(lVar12 + (longlong)this_00->DataPtr);
          if (iVar7 != iVar14) {
            Chaos::
            MoveArrayItemsDown<TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_01,iVar14 + 1,iVar7,iVar11);
            iVar11 = iVar11 + 1;
            iVar14 = iVar7;
          }
          iVar7 = this_00->ArrayNum;
          uVar8 = uVar8 + 1;
          lVar12 = lVar12 + 4;
        } while ((int)uVar8 < iVar7);
      }
      Chaos::
      MoveArrayItemsDown<TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                (this_01,iVar14 + 1,*(int *)(lVar6 + 0x90),iVar11);
      TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum(this_01,*(int *)(lVar6 + 0x90) - iVar11,No);
    }
    Chaos::FImplicitObjectUnion::RemoveAtSortedIndices
              ((FImplicitObjectUnion *)param_1,*(TArrayView<int_const_,int> **)((longlong)this + 8))
    ;
    if ((*(TArrayView<int_const_,int> **)((longlong)this + 8))->ArrayNum != 0) {
      piVar5 = TArrayView<int_const_,int>::operator[]
                         (*(TArrayView<int_const_,int> **)((longlong)this + 8),0);
      lVar6 = *(longlong *)this;
      uVar10 = (ulonglong)*piVar5;
      if (*piVar5 < *(int *)(lVar6 + 0x90)) {
        lVar12 = uVar10 * 8;
        do {
          uVar9 = (uint)uVar10;
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(lVar6 + 0x90)) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar13 = lVar6 + 0x80;
          if (*(longlong *)(lVar6 + 0x88) != 0) {
            lVar13 = *(longlong *)(lVar6 + 0x88);
          }
          uVar10 = (ulonglong)(uVar9 + 1);
          plVar1 = (longlong *)(lVar12 + lVar13);
          lVar12 = lVar12 + 8;
          *(uint *)(*plVar1 + 8) = *(uint *)(*plVar1 + 8) & 7 | uVar9 * 8;
          lVar6 = *(longlong *)this;
        } while ((int)(uVar9 + 1) < *(int *)(lVar6 + 0x90));
      }
    }
  }
  return;
}

// CastToKinematicParticle @ 143bf3df0

TKinematicGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::CastToKinematicParticle(TGeometryParticle<double,3> *this)

{
  TKinematicGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (TKinematicGeometryParticle<double,3> *)0x0;
  if (this->Type != Static) {
    pTVar1 = (TKinematicGeometryParticle<double,3> *)this;
  }
  return pTVar1;
}

// CastToRigidParticle @ 143bf3e10

TPBDRigidParticle<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::CastToRigidParticle(TGeometryParticle<double,3> *this)

{
  TPBDRigidParticle<double,3> *pTVar1;
  
  pTVar1 = (TPBDRigidParticle<double,3> *)0x0;
  if (Kinematic < this->Type) {
    pTVar1 = (TPBDRigidParticle<double,3> *)this;
  }
  return pTVar1;
}

// ClearDirtyFlags @ 143bf4830

void __thiscall
Chaos::TGeometryParticle<double,3>::ClearDirtyFlags(TGeometryParticle<double,3> *this)

{
  (this->MDirtyFlags).Bits = 0;
  return;
}

// CreateParticle @ 143c008a0

TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
__cdecl Chaos::TGeometryParticle<double,3>::CreateParticle(FGeometryParticleParameters *param_1)

{
  TGeometryParticle<double,3> *pTVar1;
  FGeometryParticleParameters *in_RDX;
  
  pTVar1 = ::operator_new(0xa0);
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    pTVar1 = TGeometryParticle<double,3>(pTVar1,in_RDX);
    *(TGeometryParticle<double,3> **)param_1 = pTVar1;
    return (TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
            )(TGeometryParticle<double,3> *)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
          )(TGeometryParticle<double,3> *)param_1;
}

// DebugName @ 143c01640

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticle<double,3>::DebugName(TGeometryParticle<double,3> *this)

{
  return &(this->MNonFrequentData).Property.MDebugName;
}

// DirtyFlags @ 143c016d0

TDirtyFlags<Chaos::EChaosPropertyFlags> * __thiscall
Chaos::TGeometryParticle<double,3>::DirtyFlags(TGeometryParticle<double,3> *this)

{
  return &this->MDirtyFlags;
}

// EnabledDuringResim @ 143c02340

bool __thiscall
Chaos::TGeometryParticle<double,3>::EnabledDuringResim(TGeometryParticle<double,3> *this)

{
  return (this->MNonFrequentData).Property.MEnabledDuringResim;
}

// ForceDirty @ 143c04a80

void __thiscall
Chaos::TGeometryParticle<double,3>::ForceDirty
          (TGeometryParticle<double,3> *this,EChaosPropertyFlags param_1)

{
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | param_1;
  return;
}

// Geometry @ 143c04ad0

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TGeometryParticle<double,3>::Geometry(TGeometryParticle<double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TSerializablePtr<Chaos::FImplicitObject> TVar3;
  FImplicitObject *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0xb27,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TSerializablePtr<Chaos::FImplicitObject>)TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GeometrySharedLowLevel @ 143c04b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(TGeometryParticle<double,3> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _DummyPtr = 0;
      DAT_155071178 = 0;
      atexit(`Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
             &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(void)const___ptr64'
              ::__l2::DummyPtr;
    }
  }
  return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
         &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticle<double,3>::GeometrySharedLowLevel(void)const___ptr64'
          ::__l2::DummyPtr;
}

// GetDebugName @ 143c04c80

FString * __thiscall
Chaos::TGeometryParticle<double,3>::GetDebugName(TGeometryParticle<double,3> *this)

{
  FString *pFVar1;
  FString *pFVar2;
  
  pFVar1 = (this->MNonFrequentData).Property.MDebugName.Object;
  pFVar2 = &Chaos::Private::EmptyParticleName;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetGeometry @ 143c06a10

FImplicitObject * __thiscall
Chaos::TGeometryParticle<double,3>::GetGeometry(TGeometryParticle<double,3> *this)

{
  return (this->MNonFrequentData).Property.MGeometry.Reference;
}

// GetProxy @ 143c07520

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticle<double,3>::GetProxy(TGeometryParticle<double,3> *this)

{
  return this->Proxy;
}

// GetR @ 143c07540

TRotation<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::GetR
          (TGeometryParticle<double,3> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->MXR).Property.MR;
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetX @ 143c08330

TVector<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::GetX(TGeometryParticle<double,3> *this)

{
  return (TVector<double,3> *)&this->MXR;
}

// Handle @ 143c0a380

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticle<double,3>::Handle(TGeometryParticle<double,3> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  if (this->Proxy != (IPhysicsProxyBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c0a38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)(**(code **)this->Proxy->_padding_)();
    return pTVar1;
  }
  return (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// IsClean @ 143c0adb0

bool __thiscall Chaos::TGeometryParticle<double,3>::IsClean(TGeometryParticle<double,3> *this)

{
  return (this->MDirtyFlags).Bits == 0;
}

// IsDirty @ 143c0add0

bool __thiscall
Chaos::TGeometryParticle<double,3>::IsDirty
          (TGeometryParticle<double,3> *this,EChaosPropertyFlags param_1)

{
  return ((this->MDirtyFlags).Bits & param_1) != 0;
}

// IsDirty @ 143c0ade0

bool __thiscall Chaos::TGeometryParticle<double,3>::IsDirty(TGeometryParticle<double,3> *this)

{
  return (this->MDirtyFlags).Bits != 0;
}

// LockGeometry @ 143c0bfd0

void __thiscall Chaos::TGeometryParticle<double,3>::LockGeometry(TGeometryParticle<double,3> *this)

{
  FImplicitObjectUnion *this_00;
  uchar uVar1;
  
  if (((((this->MDirtyFlags).Bits & 0x10) != 0) &&
      (this_00 = (FImplicitObjectUnion *)(this->MNonFrequentData).Property.MGeometry.Reference,
      this_00 != (FImplicitObjectUnion *)0x0)) &&
     ((uVar1 = FImplicitObject::GetType((FImplicitObject *)this_00), uVar1 == '\x05' ||
      (uVar1 == '\x0f')))) {
    FImplicitObjectUnion::SetLockedRecursive(this_00,true);
    return;
  }
  return;
}

// MarkDirty @ 143c0c090

void __thiscall
Chaos::TGeometryParticle<double,3>::MarkDirty
          (TGeometryParticle<double,3> *this,EChaosPropertyFlags param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPlatformRWLock *SRWLock;
  
  if (param_2) {
    (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | param_1;
    pIVar1 = this->Proxy;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) &&
       (pFVar2 = pIVar1->Solver, pFVar2 != (FPhysicsSolverBase *)0x0)) {
      if ((pIVar1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((pIVar1->SyncTimestamp).Object)->bDeleted != false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProxyBaseIn->GetMarkedDeleted() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x14b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SRWLock = (FPlatformRWLock *)0x0;
      if (CVars::bEnableAsyncInitBody != false) {
        SRWLock = &(pFVar2->MarshallingManager).MarshallingManagerLock;
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        return;
      }
      FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
      return;
    }
  }
  return;
}

// MergeGeometry @ 143c0c200

void __thiscall
Chaos::TGeometryParticle<double,3>::MergeGeometry
          (TGeometryParticle<double,3> *this,
          TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *this_00;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  undefined4 uVar5;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *local_38;
  TGeometryParticle<double,3> *local_30;
  TGeometryParticle<double,3> *local_28;
  FPhysicsSolverBase *local_20;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> **local_18;
  undefined4 local_10;
  
  if (((this->MNonFrequentData).Property.MGeometry.Reference == (FImplicitObject *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2677745228101713839>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ParticleHandle.cpp"
                         ,0x51,"MNonFrequentData.Read().GetGeometry()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = FImplicitObject::GetType((this->MNonFrequentData).Property.MGeometry.Reference);
  if ((uVar4 != '\x05') &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2677745228101713836>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ParticleHandle.cpp"
                         ,0x54,
                         "MNonFrequentData.Read().GetGeometry()->GetType() == FImplicitObjectUnion::StaticType()"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = FImplicitObject::GetType((this->MNonFrequentData).Property.MGeometry.Reference);
  if (uVar4 != '\x05') {
    return;
  }
  uVar5 = 1;
  local_38 = param_1;
  local_30 = this;
  if (((CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564218798>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xc52,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = this->Proxy;
  if (pIVar1 == (IPhysicsProxyBase *)0x0) {
    local_20 = (FPhysicsSolverBase *)0x0;
  }
  else {
    local_20 = pIVar1->Solver;
    if (local_20 != (FPhysicsSolverBase *)0x0) {
      if (CVars::GForceDeepCopyOnModifyGeometry != false) {
        uVar5 = 2;
      }
      goto LAB_143c0c316;
    }
  }
  uVar5 = 0;
LAB_143c0c316:
  local_18 = &local_38;
  local_28 = this;
  local_10 = uVar5;
  `Chaos::TGeometryParticle<double,3>::
  ModifyGeometry<`Chaos::TGeometryParticle<double,3>::MergeGeometry'::__l5::<lambda_1>_>'::__l2::
  <lambda_1>::operator()<Chaos::FParticleNonFrequentData>
            (&local_28,&(this->MNonFrequentData).Property);
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) &&
     (this_00 = pIVar1->Solver, this_00 != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(this_00,pIVar1);
  }
  return;
}

// MergeGeometry @ 143c0c380

void __thiscall
Chaos::TGeometryParticle<double,3>::MergeGeometry
          (TGeometryParticle<double,3> *this,
          TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0xb21,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// MergeShapeInstances @ 143c0c540

void __thiscall
Chaos::TGeometryParticle<double,3>::MergeShapeInstances
          (TGeometryParticle<double,3> *this,
          TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayNum;
  if (((this->MShapesArray).ArrayNum < *piVar1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InShapes.Num() <= (MShapesArray.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xb94,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = *piVar1;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  uVar10 = (this->MShapesArray).ArrayNum - iVar2;
  if (FVar3 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    param_1 = (TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)param_1 + (longlong)iVar2 * 8);
  lVar11 = (longlong)(int)uVar10 * 8;
  while( true ) {
    if (*piVar1 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
         )param_1 == FVar3) {
      return;
    }
    if (((this->MShapesArray).ArrayNum <= (int)uVar10) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218984>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xb98,"Idx < MShapesArray.Num()"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(uint *)(*(longlong *)param_1 + 8) = *(uint *)(*(longlong *)param_1 + 8) & 7 | uVar10 * 8;
    uVar8 = 0;
    if ((int)uVar10 < (this->MShapesArray).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FVar4 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
    if (FVar4 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar9 = FVar4;
    }
    uVar10 = uVar10 + 1;
    FVar9 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )(lVar11 + (longlong)FVar9);
    lVar11 = lVar11 + 8;
    if (FVar9 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )param_1) {
      puVar5 = *(undefined8 **)FVar9;
      *(longlong *)FVar9 = *(longlong *)param_1;
      *(longlong *)param_1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
    }
    param_1 = (TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 8);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// MergeShapesArray @ 143c0c6f0

void __thiscall
Chaos::TGeometryParticle<double,3>::MergeShapesArray
          (TGeometryParticle<double,3> *this,
          TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackX_8 [8];
  
  piVar1 = &param_1->ArrayNum;
  if (((this->MShapesArray).ArrayNum < *piVar1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InShapes.Num() <= (MShapesArray.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xb94,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar3 = *piVar1;
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  uVar11 = (this->MShapesArray).ArrayNum - iVar3;
  if (FVar4 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )0x0) {
    param_1 = (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar4;
  }
  FVar4 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)param_1 + (longlong)iVar3 * 8);
  lVar12 = (longlong)(int)uVar11 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
        param_1 == FVar4) {
      return;
    }
    if (((this->MShapesArray).ArrayNum <= (int)uVar11) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218984>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xb98,"Idx < MShapesArray.Num()"), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(uint *)(*(longlong *)param_1 + 8) = *(uint *)(*(longlong *)param_1 + 8) & 7 | uVar11 * 8;
    uVar9 = 0;
    if ((int)uVar11 < (this->MShapesArray).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    FVar5 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&this->MShapesArray;
    if (FVar5 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar10 = FVar5;
    }
    uVar11 = uVar11 + 1;
    FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )(lVar12 + (longlong)FVar10);
    lVar12 = lVar12 + 8;
    if (FVar2 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )param_1) {
      puVar6 = *(undefined8 **)FVar2;
      *(longlong *)FVar2 = *(longlong *)param_1;
      *(longlong *)param_1 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
    }
    param_1 = (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 8);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ObjectState @ 143c0cc40

EObjectStateType __thiscall
Chaos::TGeometryParticle<double,3>::ObjectState(TGeometryParticle<double,3> *this)

{
  if (this->Type == Static) {
    this = (TGeometryParticle<double,3> *)0x0;
  }
  if (this != (TGeometryParticle<double,3> *)0x0) {
    if (Kinematic < this->Type) {
      return *(EObjectStateType *)&this[2].MNonFrequentData.Property.MSpatialIdx;
    }
    return Kinematic;
  }
  return Static;
}

// ObjectType @ 143c0ccb0

EParticleType __thiscall
Chaos::TGeometryParticle<double,3>::ObjectType(TGeometryParticle<double,3> *this)

{
  return this->Type;
}

// ParticleID @ 143c0ef80

FParticleID * __thiscall
Chaos::TGeometryParticle<double,3>::ParticleID(TGeometryParticle<double,3> *this)

{
  return &(this->MNonFrequentData).Property.MParticleID;
}

// PrepareBVH @ 143c0f940

void __thiscall Chaos::TGeometryParticle<double,3>::PrepareBVH(TGeometryParticle<double,3> *this)

{
  FImplicitObjectUnion *this_00;
  uchar uVar1;
  
  if ((((((this->MDirtyFlags).Bits & 0x10) != 0) &&
       (this_00 = (FImplicitObjectUnion *)(this->MNonFrequentData).Property.MGeometry.Reference,
       this_00 != (FImplicitObjectUnion *)0x0)) &&
      ((uVar1 = FImplicitObject::GetType((FImplicitObject *)this_00), uVar1 == '\x05' ||
       (uVar1 == '\x0f')))) && (((this_00->Flags).Bits & 1) == 0)) {
    FImplicitObjectUnion::CheckNotLocked(this_00);
    (this_00->Flags).Bits = (this_00->Flags).Bits | 1;
    FImplicitObjectUnion::RebuildBVH(this_00);
    return;
  }
  return;
}

// PrepareBVHImpl @ 143c0f9a0

void __thiscall
Chaos::TGeometryParticle<double,3>::PrepareBVHImpl(TGeometryParticle<double,3> *this)

{
  FImplicitObjectUnion *this_00;
  uchar uVar1;
  
  if ((((((this->MDirtyFlags).Bits & 0x10) != 0) &&
       (this_00 = (FImplicitObjectUnion *)(this->MNonFrequentData).Property.MGeometry.Reference,
       this_00 != (FImplicitObjectUnion *)0x0)) &&
      ((uVar1 = FImplicitObject::GetType((FImplicitObject *)this_00), uVar1 == '\x05' ||
       (uVar1 == '\x0f')))) && (((this_00->Flags).Bits & 1) == 0)) {
    FImplicitObjectUnion::CheckNotLocked(this_00);
    (this_00->Flags).Bits = (this_00->Flags).Bits | 1;
    FImplicitObjectUnion::RebuildBVH(this_00);
    return;
  }
  return;
}

// R @ 143c0fef0

TRotation<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::R
          (TGeometryParticle<double,3> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->MXR).Property.MR;
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// RemoveShape @ 143c11ae0

void __thiscall
Chaos::TGeometryParticle<double,3>::RemoveShape
          (TGeometryParticle<double,3> *this,FPerShapeData *param_1,bool param_2)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  IPhysicsProxyBase *pIVar2;
  FPhysicsSolverBase *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint local_res8 [2];
  uint *local_58;
  undefined4 local_50;
  TGeometryParticle<double,3> *local_48;
  uint **local_40;
  TGeometryParticle<double,3> *local_38;
  FPhysicsSolverBase *local_30;
  TGeometryParticle<double,3> **local_28;
  undefined4 local_20;
  
  FImplicitObject::GetType((this->MNonFrequentData).Property.MGeometry.Reference);
  local_res8[0] = 0;
  if (0 < (this->MShapesArray).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)local_res8[0] < (this->MShapesArray).ArrayNum) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = (this->MShapesArray).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
      if (FVar1 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                    )0x0) {
        FVar6 = FVar1;
      }
      if (param_1 == *(FPerShapeData **)(lVar8 + (longlong)FVar6)) {
        local_58 = local_res8;
        uVar7 = 1;
        local_50 = 1;
        FImplicitObject::GetType((this->MNonFrequentData).Property.MGeometry.Reference);
        local_40 = &local_58;
        local_48 = this;
        if (((CVars::bEnableAsyncInitBody == false) && (bVar4 = IsInGameThread(), !bVar4)) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3133560516564218798>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                               ,0xc52,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = this->Proxy;
        if (pIVar2 == (IPhysicsProxyBase *)0x0) {
          local_30 = (FPhysicsSolverBase *)0x0;
        }
        else {
          local_30 = pIVar2->Solver;
          if (local_30 != (FPhysicsSolverBase *)0x0) {
            if (CVars::GForceDeepCopyOnModifyGeometry != false) {
              uVar7 = 2;
            }
            goto LAB_143c11c37;
          }
        }
        uVar7 = 0;
LAB_143c11c37:
        local_28 = &local_48;
        local_38 = this;
        local_20 = uVar7;
        `Chaos::TGeometryParticle<double,3>::
        ModifyGeometry<`Chaos::TGeometryParticle<double,3>::RemoveShapesAtSortedIndices'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::operator()<Chaos::FParticleNonFrequentData>
                  (&local_38,&(this->MNonFrequentData).Property);
        (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
        if (pIVar2 == (IPhysicsProxyBase *)0x0) {
          return;
        }
        this_00 = pIVar2->Solver;
        if (this_00 == (FPhysicsSolverBase *)0x0) {
          return;
        }
        FPhysicsSolverBase::AddDirtyProxy(this_00,pIVar2);
        return;
      }
      local_res8[0] = local_res8[0] + 1;
      lVar8 = lVar8 + 8;
    } while ((int)local_res8[0] < (this->MShapesArray).ArrayNum);
  }
  return;
}

// RemoveShapesAtSortedIndices @ 143c11ea0

void __thiscall
Chaos::TGeometryParticle<double,3>::RemoveShapesAtSortedIndices
          (TGeometryParticle<double,3> *this,TArrayView<int_const_,int> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *this_00;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  TGeometryParticle<double,3> *local_38;
  TArrayView<int_const_,int> *local_30;
  TGeometryParticle<double,3> *local_28;
  FPhysicsSolverBase *local_20;
  TGeometryParticle<double,3> **local_18;
  undefined4 local_10;
  
  FImplicitObject::GetType((this->MNonFrequentData).Property.MGeometry.Reference);
  uVar4 = 1;
  local_38 = this;
  local_30 = param_1;
  if (CVars::bEnableAsyncInitBody == false) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564218798>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xc52,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pIVar1 = this->Proxy;
  if (pIVar1 == (IPhysicsProxyBase *)0x0) {
    local_20 = (FPhysicsSolverBase *)0x0;
  }
  else {
    local_20 = pIVar1->Solver;
    if (local_20 != (FPhysicsSolverBase *)0x0) {
      if (CVars::GForceDeepCopyOnModifyGeometry != false) {
        uVar4 = 2;
      }
      goto LAB_143c11f40;
    }
  }
  uVar4 = 0;
LAB_143c11f40:
  local_18 = &local_38;
  local_28 = this;
  local_10 = uVar4;
  `Chaos::TGeometryParticle<double,3>::
  ModifyGeometry<`Chaos::TGeometryParticle<double,3>::RemoveShapesAtSortedIndices'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()<Chaos::FParticleNonFrequentData>
            (&local_28,&(this->MNonFrequentData).Property);
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) &&
     (this_00 = pIVar1->Solver, this_00 != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(this_00,pIVar1);
  }
  return;
}

// ResimType @ 143c12950

EResimType __thiscall
Chaos::TGeometryParticle<double,3>::ResimType(TGeometryParticle<double,3> *this)

{
  return (this->MNonFrequentData).Property.MResimType;
}

// SetDebugName @ 143c15700

void __thiscall
Chaos::TGeometryParticle<double,3>::SetDebugName
          (TGeometryParticle<double,3> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IPhysicsProxyBase *pIVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = this->Proxy;
  pFVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->MNonFrequentData).Property.MDebugName.SharedReferenceCount.ReferenceController;
  (this->MNonFrequentData).Property.MDebugName.Object = pFVar3;
  (this->MNonFrequentData).Property.MDebugName.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  return;
}

// SetEnabledDuringResim @ 143c15c30

void __thiscall
Chaos::TGeometryParticle<double,3>::SetEnabledDuringResim
          (TGeometryParticle<double,3> *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = this->Proxy;
  (this->MNonFrequentData).Property.MEnabledDuringResim = param_1;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetGeometry @ 143c15d50

void __thiscall
Chaos::TGeometryParticle<double,3>::SetGeometry
          (TGeometryParticle<double,3> *this,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0xb18,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetGeometry @ 143c15d90

void __thiscall
Chaos::TGeometryParticle<double,3>::SetGeometry
          (TGeometryParticle<double,3> *this,TRefCountPtr<Chaos::FImplicitObject> param_1)

{
  int *piVar1;
  int iVar2;
  FImplicitObject *pFVar3;
  IPhysicsProxyBase *pIVar4;
  FImplicitObject *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  
  pFVar3 = (FImplicitObject *)(param_1.Reference)->_padding_;
  pIVar4 = this->Proxy;
  if (pFVar3 == (FImplicitObject *)0x0) {
    plVar8 = (longlong *)&DAT_00000008;
  }
  else {
    plVar8 = &pFVar3->_padding_;
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
  }
  pFVar5 = (this->MNonFrequentData).Property.MGeometry.Reference;
  if (pFVar5 != pFVar3) {
    (this->MNonFrequentData).Property.MGeometry.Reference = pFVar3;
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)plVar8 = (int)*plVar8 + 1;
      UNLOCK();
    }
    if (pFVar5 != (FImplicitObject *)0x0) {
      LOCK();
      plVar8 = &pFVar5->_padding_;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar5->_padding_ + 4) == 0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    plVar8 = &pFVar3->_padding_;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
  }
  UpdateShapesArray(this);
  puVar6 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  return;
}

// SetGeometry @ 143c15e90

void __thiscall
Chaos::TGeometryParticle<double,3>::SetGeometry
          (TGeometryParticle<double,3> *this,TSerializablePtr<Chaos::FImplicitObject> param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0xb1e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetGeometry @ 143c15ed0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetGeometry
          (TGeometryParticle<double,3> *this,TSharedPtr<Chaos::FImplicitObject,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0xb1b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIgnoreAnalyticCollisions @ 143c162a0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetIgnoreAnalyticCollisions
          (TGeometryParticle<double,3> *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *this_00;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  TGeometryParticle<double,3> *local_38;
  undefined1 local_30;
  TGeometryParticle<double,3> *local_28;
  FPhysicsSolverBase *local_20;
  TGeometryParticle<double,3> **local_18;
  undefined4 local_10;
  
  uVar4 = 2;
  local_38 = this;
  local_30 = param_1;
  if (((!CVars::bEnableAsyncInitBody) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564218798>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xc52,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = this->Proxy;
  if (pIVar1 == (IPhysicsProxyBase *)0x0) {
    local_20 = (FPhysicsSolverBase *)0x0;
  }
  else {
    local_20 = pIVar1->Solver;
    if (local_20 != (FPhysicsSolverBase *)0x0) goto LAB_143c16323;
  }
  uVar4 = 0;
LAB_143c16323:
  local_18 = &local_38;
  local_28 = this;
  local_10 = uVar4;
  `Chaos::TGeometryParticle<double,3>::
  ModifyGeometry<`Chaos::TGeometryParticle<double,3>::SetIgnoreAnalyticCollisions'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()<Chaos::FParticleNonFrequentData>
            (&local_28,&(this->MNonFrequentData).Property);
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) &&
     (this_00 = pIVar1->Solver, this_00 != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(this_00,pIVar1);
  }
  return;
}

// SetIgnoreAnalyticCollisionsImp @ 143c16390

void __thiscall
Chaos::TGeometryParticle<double,3>::SetIgnoreAnalyticCollisionsImp
          (TGeometryParticle<double,3> *this,FImplicitObject *param_1,bool param_2)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uchar uVar7;
  byte bVar8;
  FImplicitObject *pFVar9;
  byte *pbVar10;
  FImplicitObject *pFVar11;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  pFVar11 = (FImplicitObject *)0x0;
  while( true ) {
    while( true ) {
      if ((param_1 == (FImplicitObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Implicit",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ParticleHandle.cpp"
                             ,0x10a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = FImplicitObject::GetType(param_1);
      if (uVar7 == '\x05') {
        if (param_1->Type != '\x05') {
          param_1 = pFVar11;
        }
        puVar13 = (undefined8 *)param_1[1]._padding_;
        iVar3 = (int)param_1[1]._padding_;
        puVar2 = puVar13 + iVar3;
        while( true ) {
          if ((int)param_1[1]._padding_ != iVar3) {
            `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res20);
          }
          if (puVar13 == puVar2) break;
          SetIgnoreAnalyticCollisionsImp(this,(FImplicitObject *)*puVar13,param_2);
          puVar13 = puVar13 + 1;
        }
        return;
      }
      uVar7 = FImplicitObject::GetType(param_1);
      if (uVar7 != '\x04') break;
      pFVar9 = pFVar11;
      if (param_1->Type == '\x04') {
        pFVar9 = param_1;
      }
      param_1 = (FImplicitObject *)pFVar9[1]._padding_;
    }
    bVar8 = FImplicitObject::GetType(param_1);
    if ((bVar8 & 0x40) == 0) break;
    uVar7 = FImplicitObject::GetType(param_1);
    if (uVar7 == 'H') {
      pFVar9 = pFVar11;
      if (param_1->Type == 'H') {
        pFVar9 = param_1;
      }
      param_1 = (FImplicitObject *)pFVar9[1]._padding_;
    }
    else if (uVar7 == 'A') {
      pFVar9 = pFVar11;
      if (param_1->Type == 'A') {
        pFVar9 = param_1;
      }
      param_1 = (FImplicitObject *)pFVar9[1]._padding_;
    }
    else if (uVar7 == 'C') {
      pFVar9 = pFVar11;
      if (param_1->Type == 'C') {
        pFVar9 = param_1;
      }
      param_1 = (FImplicitObject *)pFVar9[1]._padding_;
    }
    else if (uVar7 == '@') {
      pFVar9 = pFVar11;
      if (param_1->Type == '@') {
        pFVar9 = param_1;
      }
      param_1 = (FImplicitObject *)pFVar9[1]._padding_;
    }
    else if (uVar7 == 'K') {
      pFVar9 = pFVar11;
      if (param_1->Type == 'K') {
        pFVar9 = param_1;
      }
      param_1 = (FImplicitObject *)pFVar9[1]._padding_;
    }
    else {
      param_1 = (FImplicitObject *)0x0;
    }
  }
  FVar12 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  iVar3 = (this->MShapesArray).ArrayNum;
  if (FVar12 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )0x0) {
    FVar12 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&this->MShapesArray;
  }
  FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar12 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->MShapesArray).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar12 == FVar1) goto LAB_143c164f8;
    lVar4 = *(longlong *)FVar12;
    if (*(FImplicitObject **)(lVar4 + 0x10) == param_1) break;
    FVar12 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )((longlong)FVar12 + 8);
  }
  if ((*(byte *)(lVar4 + 8) & 3) == 0) {
    pbVar10 = (byte *)(lVar4 + 0x79);
  }
  else {
    pbVar10 = (byte *)(lVar4 + 0x71);
  }
  if ((*pbVar10 & 1) != 0) {
LAB_143c164f8:
    if (param_2) {
      param_1->CollisionType = '\x06';
    }
    else {
      uVar7 = FImplicitObject::GetType(param_1);
      param_1->CollisionType = uVar7;
    }
  }
  return;
}

// SetNonFrequentData @ 143c173f0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetNonFrequentData
          (TGeometryParticle<double,3> *this,FParticleNonFrequentData *param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = this->Proxy;
  FParticleNonFrequentData::operator=(&(this->MNonFrequentData).Property,param_1);
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetParticleID @ 143c18210

void __thiscall
Chaos::TGeometryParticle<double,3>::SetParticleID
          (TGeometryParticle<double,3> *this,FParticleID *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPlatformRWLock *SRWLock;
  
  if (((this->MNonFrequentData).Property.MParticleID.GlobalID != param_1->GlobalID) ||
     ((this->MNonFrequentData).Property.MParticleID.LocalID != param_1->LocalID)) {
    pIVar1 = this->Proxy;
    (this->MNonFrequentData).Property.MParticleID = *param_1;
    if ((param_2) &&
       (((this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10,
        pIVar1 != (IPhysicsProxyBase *)0x0 &&
        (pFVar2 = pIVar1->Solver, pFVar2 != (FPhysicsSolverBase *)0x0)))) {
      if ((pIVar1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((pIVar1->SyncTimestamp).Object)->bDeleted != false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProxyBaseIn->GetMarkedDeleted() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x14b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SRWLock = (FPlatformRWLock *)0x0;
      if (CVars::bEnableAsyncInitBody != false) {
        SRWLock = &(pFVar2->MarshallingManager).MarshallingManagerLock;
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        return;
      }
      FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
      return;
    }
  }
  return;
}

// SetProxy @ 143c18760

void __thiscall
Chaos::TGeometryParticle<double,3>::SetProxy
          (TGeometryParticle<double,3> *this,IPhysicsProxyBase *param_1)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  int iVar2;
  IPhysicsProxyBase *pIVar3;
  longlong lVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  undefined1 local_res8 [8];
  
  this->Proxy = param_1;
  if (((param_1 != (IPhysicsProxyBase *)0x0) && ((this->MDirtyFlags).Bits != 0)) &&
     (param_1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(param_1->Solver,param_1);
  }
  FVar5 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  iVar2 = (this->MShapesArray).ArrayNum;
  if (FVar5 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar5 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
  }
  FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar5 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->MShapesArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5 == FVar1) break;
    pIVar3 = this->Proxy;
    lVar4 = *(longlong *)FVar5;
    *(IPhysicsProxyBase **)(lVar4 + 0x48) = pIVar3;
    if (((pIVar3 != (IPhysicsProxyBase *)0x0) && (*(int *)(lVar4 + 0xc) != 0)) &&
       (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar3->Solver,pIVar3,*(uint *)(lVar4 + 8) >> 3);
    }
    FVar5 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar5 + 8);
  }
  return;
}

// SetResimType @ 143c188c0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetResimType
          (TGeometryParticle<double,3> *this,EResimType param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = this->Proxy;
  (this->MNonFrequentData).Property.MResimType = param_1;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetShapeCollisionTraceType @ 143c18e80

void __thiscall
Chaos::TGeometryParticle<double,3>::SetShapeCollisionTraceType
          (TGeometryParticle<double,3> *this,int param_1,EChaosCollisionTraceFlag param_2)

{
  longlong lVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  
  uVar5 = 0;
  if (param_1 < (this->MShapesArray).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar6 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
  }
  if (*(EChaosCollisionTraceFlag *)(*(longlong *)((longlong)FVar6 + (longlong)param_1 * 8) + 0x78)
      != param_2) {
    uVar5 = 0;
    if (param_1 < (this->MShapesArray).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar6 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
    }
    lVar1 = *(longlong *)((longlong)FVar6 + (longlong)param_1 * 8);
    pIVar2 = *(IPhysicsProxyBase **)(lVar1 + 0x48);
    *(EChaosCollisionTraceFlag *)(lVar1 + 0x78) = param_2;
    uVar5 = *(uint *)(lVar1 + 0xc);
    *(uint *)(lVar1 + 0xc) = uVar5 | 1;
    if (((uVar5 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,*(uint *)(lVar1 + 8) >> 3);
    }
  }
  return;
}

// SetShapeInstances @ 143c19030

void __thiscall
Chaos::TGeometryParticle<double,3>::SetShapeInstances
          (TGeometryParticle<double,3> *this,
          TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar3;
  TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  if (param_1->ArrayNum != (this->MShapesArray).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShapes.Num() == MShapesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xb8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar4 = &this->MShapesArray;
  if (pTVar4 != param_1) {
    FVar3 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar3 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )pTVar4;
    }
    DestructItems<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int>
              ((TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> *
               )FVar3,(this->MShapesArray).ArrayNum);
    if ((param_1->AllocatorInstance).SecondaryData ==
        (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
         )0x0) {
      *(undefined8 *)(pTVar4->AllocatorInstance).InlineData =
           *(undefined8 *)(param_1->AllocatorInstance).InlineData;
    }
    FVar3 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar3);
    }
    (this->MShapesArray).AllocatorInstance.SecondaryData =
         (param_1->AllocatorInstance).SecondaryData;
    (param_1->AllocatorInstance).SecondaryData =
         (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
          )0x0;
    (this->MShapesArray).ArrayNum = param_1->ArrayNum;
    (this->MShapesArray).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 1;
  }
  return;
}

// SetShapeQueryCollisionEnabled @ 143c190e0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetShapeQueryCollisionEnabled
          (TGeometryParticle<double,3> *this,int param_1,bool param_2)

{
  longlong lVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  
  uVar5 = 0;
  if (param_1 < (this->MShapesArray).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar6 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
  }
  if ((bool)(*(byte *)(*(longlong *)((longlong)FVar6 + (longlong)param_1 * 8) + 0x79) >> 1 & 1) !=
      param_2) {
    uVar5 = 0;
    if (param_1 < (this->MShapesArray).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar6 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
    }
    lVar1 = *(longlong *)((longlong)FVar6 + (longlong)param_1 * 8);
    pIVar2 = *(IPhysicsProxyBase **)(lVar1 + 0x48);
    *(byte *)(lVar1 + 0x79) = *(byte *)(lVar1 + 0x79) & 0xfd;
    *(byte *)(lVar1 + 0x79) = *(byte *)(lVar1 + 0x79) | param_2 * '\x02';
    uVar5 = *(uint *)(lVar1 + 0xc);
    *(uint *)(lVar1 + 0xc) = uVar5 | 1;
    if (((uVar5 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,*(uint *)(lVar1 + 8) >> 3);
    }
  }
  return;
}

// SetShapeSimCollisionEnabled @ 143c19240

void __thiscall
Chaos::TGeometryParticle<double,3>::SetShapeSimCollisionEnabled
          (TGeometryParticle<double,3> *this,int param_1,bool param_2)

{
  longlong lVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  
  uVar5 = 0;
  if (param_1 < (this->MShapesArray).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar6 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
  }
  if ((bool)(*(byte *)(*(longlong *)((longlong)FVar6 + (longlong)param_1 * 8) + 0x79) & 1) !=
      param_2) {
    uVar5 = 0;
    if (param_1 < (this->MShapesArray).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar6 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar6 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
    }
    lVar1 = *(longlong *)((longlong)FVar6 + (longlong)param_1 * 8);
    pIVar2 = *(IPhysicsProxyBase **)(lVar1 + 0x48);
    *(byte *)(lVar1 + 0x79) = *(byte *)(lVar1 + 0x79) & 0xfe;
    *(byte *)(lVar1 + 0x79) = *(byte *)(lVar1 + 0x79) | param_2;
    uVar5 = *(uint *)(lVar1 + 0xc);
    *(uint *)(lVar1 + 0xc) = uVar5 | 1;
    if (((uVar5 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,*(uint *)(lVar1 + 8) >> 3);
    }
  }
  return;
}

// SetShapeSimData @ 143c193a0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetShapeSimData
          (TGeometryParticle<double,3> *this,int param_1,FCollisionFilterData *param_2)

{
  longlong lVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar7;
  
  uVar6 = 0;
  if (param_1 < (this->MShapesArray).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )0x0) {
    FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )&this->MShapesArray;
  }
  lVar1 = *(longlong *)((longlong)FVar7 + (longlong)param_1 * 8);
  if ((((*(uint *)(lVar1 + 0x60) != param_2->Word0) || (*(uint *)(lVar1 + 100) != param_2->Word1))
      || (*(uint *)(lVar1 + 0x68) != param_2->Word2)) || (*(uint *)(lVar1 + 0x6c) != param_2->Word3)
     ) {
    uVar6 = 0;
    if (param_1 < (this->MShapesArray).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    uVar4 = *(undefined8 *)&param_2->Word2;
    if (FVar7 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
    }
    lVar1 = *(longlong *)((longlong)FVar7 + (longlong)param_1 * 8);
    pIVar2 = *(IPhysicsProxyBase **)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)param_2;
    *(undefined8 *)(lVar1 + 0x68) = uVar4;
    uVar6 = *(uint *)(lVar1 + 0xc);
    *(uint *)(lVar1 + 0xc) = uVar6 | 1;
    if (((uVar6 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,*(uint *)(lVar1 + 8) >> 3);
    }
  }
  return;
}

// SetSpatialIdx @ 143c19770

void __thiscall
Chaos::TGeometryParticle<double,3>::SetSpatialIdx
          (TGeometryParticle<double,3> *this,FSpatialAccelerationIdx param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = this->Proxy;
  (this->MNonFrequentData).Property.MSpatialIdx = param_1;
  (this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetUniqueIdx @ 143c199f0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetUniqueIdx
          (TGeometryParticle<double,3> *this,FUniqueIdx param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = this->Proxy;
  (this->MNonFrequentData).Property.MUniqueIdx.Idx = param_1.Idx;
  if (((param_2) &&
      ((this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 0x10,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetUserData @ 143c19bc0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetUserData(TGeometryParticle<double,3> *this,void *param_1)

{
  this->MUserData = param_1;
  return;
}

// SetXR @ 143c1a2a0

void __thiscall
Chaos::TGeometryParticle<double,3>::SetXR
          (TGeometryParticle<double,3> *this,FParticlePositionRotation *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)&(param_1->MX).field_0x8;
  pIVar1 = this->Proxy;
  *(undefined8 *)&(this->MXR).Property.MX = *(undefined8 *)&param_1->MX;
  *(undefined8 *)&(this->MXR).Property.MX.field_0x8 = uVar2;
  lVar3 = param_1->_padding_;
  *(undefined8 *)&(this->MXR).Property.MX.field_0x10 = *(undefined8 *)&(param_1->MX).field_0x10;
  (this->MXR).Property._padding_ = lVar3;
  uVar2 = *(undefined8 *)&(param_1->MR).field_0x8;
  *(undefined8 *)&(this->MXR).Property.MR = *(undefined8 *)&param_1->MR;
  *(undefined8 *)&(this->MXR).Property.MR.field_0x8 = uVar2;
  if (((param_2) &&
      ((this->MDirtyFlags).Bits = (this->MDirtyFlags).Bits | 1, pIVar1 != (IPhysicsProxyBase *)0x0))
     && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// ShapeInstances @ 143c1a470

TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall Chaos::TGeometryParticle<double,3>::ShapeInstances(TGeometryParticle<double,3> *this)

{
  return &this->MShapesArray;
}

// ShapesArray @ 143c1a480

TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall Chaos::TGeometryParticle<double,3>::ShapesArray(TGeometryParticle<double,3> *this)

{
  return (TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)&this->MShapesArray;
}

// SharedGeometryLowLevel @ 143c1a500

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticle<double,3>::SharedGeometryLowLevel
          (TGeometryParticle<double,3> *this,
          TSharedPtr<Chaos::FImplicitObject_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Chaos::FImplicitObject_const_,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0xb24,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<Chaos::FImplicitObject_const_,1> *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->Object = (FImplicitObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// SpatialIdx @ 143c1aa40

FSpatialAccelerationIdx __thiscall
Chaos::TGeometryParticle<double,3>::SpatialIdx(TGeometryParticle<double,3> *this)

{
  FSpatialAccelerationIdx *in_RDX;
  
  *in_RDX = (this->MNonFrequentData).Property.MSpatialIdx;
  return SUB82(in_RDX,0);
}

// SyncRemoteData @ 143c1abc0

void __thiscall
Chaos::TGeometryParticle<double,3>::SyncRemoteData
          (TGeometryParticle<double,3> *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          FShapeDirtyData *param_5)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar22;
  undefined4 in_register_00000084;
  uint *puVar23;
  
  param_3->ParticleBufferType = this->Type;
  (param_3->Flags).Bits = (this->MDirtyFlags).Bits;
  (**(code **)(this->_padding_ + 0x18))(this,param_1,CONCAT44(in_register_00000084,param_2));
  puVar17 = (undefined8 *)CONCAT71(param_4._1_7_,param_4._0_1_);
  puVar23 = (uint *)*puVar17;
  iVar3 = *(int *)(puVar17 + 1);
  puVar1 = puVar23 + iVar3;
  while( true ) {
    if (*(int *)(puVar17 + 1) != iVar3) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if (puVar23 == puVar1) {
      return;
    }
    uVar4 = *puVar23;
    lVar21 = (longlong)(int)uVar4;
    uVar20 = param_5[lVar21].ShapeIdx;
    uVar19 = 0;
    if ((int)uVar20 < (this->MShapesArray).ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) break;
    FVar5 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    FVar22 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&this->MShapesArray;
    if (FVar5 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar22 = FVar5;
    }
    lVar6 = *(longlong *)((longlong)FVar22 + (longlong)(int)uVar20 * 8);
    uVar20 = *(uint *)(lVar6 + 0xc);
    param_5[lVar21].Flags.Bits = uVar20;
    if ((uVar20 & 1) != 0) {
      uVar9 = *(undefined4 *)(lVar6 + 0x50);
      uVar10 = *(undefined4 *)(lVar6 + 0x54);
      uVar11 = *(undefined4 *)(lVar6 + 0x58);
      uVar12 = *(undefined4 *)(lVar6 + 0x5c);
      uVar13 = *(undefined8 *)(lVar6 + 0x60);
      uVar14 = *(undefined8 *)(lVar6 + 0x68);
      uVar15 = *(undefined8 *)(lVar6 + 0x70);
      uVar16 = *(undefined8 *)(lVar6 + 0x78);
      uVar20 = 0;
      if ((int)uVar4 < (param_1->CollisionDataShapePool).Elements.ArrayNum) {
        uVar20 = ~uVar4 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->CollisionDataShapePool).Elements.AllocatorInstance.Data;
      pFVar2 = pFVar7 + lVar21 * 0x30;
      *(undefined4 *)pFVar2 = uVar9;
      *(undefined4 *)(pFVar2 + 4) = uVar10;
      *(undefined4 *)(pFVar2 + 8) = uVar11;
      *(undefined4 *)(pFVar2 + 0xc) = uVar12;
      *(undefined8 *)(pFVar7 + lVar21 * 0x30 + 0x10) = uVar13;
      *(undefined8 *)(pFVar7 + lVar21 * 0x30 + 0x10 + 8) = uVar14;
      *(undefined8 *)(pFVar7 + lVar21 * 0x30 + 0x20) = uVar15;
      *(undefined8 *)(pFVar7 + lVar21 * 0x30 + 0x20 + 8) = uVar16;
    }
    if ((param_5[lVar21].Flags.Bits & 2) != 0) {
      uVar20 = 0;
      if ((int)uVar4 < (param_1->MaterialsShapePool).Elements.ArrayNum) {
        uVar20 = ~uVar4 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                ((param_1->MaterialsShapePool).Elements.AllocatorInstance.Data + lVar21 * 0x40);
      TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                (this_00,(TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                         (lVar6 + 0x80));
      TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(this_00 + 1),
                 (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x90));
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this_00 + 2),
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar6 + 0xa0));
      TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                (this_00 + 3,
                 (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)(lVar6 + 0xb0));
    }
    puVar23 = puVar23 + 1;
    *(undefined4 *)(lVar6 + 0xc) = 0;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// UniqueIdx @ 143c1b4c0

FUniqueIdx __thiscall
Chaos::TGeometryParticle<double,3>::UniqueIdx(TGeometryParticle<double,3> *this)

{
  int *in_RDX;
  
  *in_RDX = (this->MNonFrequentData).Property.MUniqueIdx.Idx;
  return (FUniqueIdx)(int)in_RDX;
}

// UpdateShapeBounds @ 143c1ceb0

void __thiscall
Chaos::TGeometryParticle<double,3>::UpdateShapeBounds
          (TGeometryParticle<double,3> *this,TRigidTransform<double,3> *param_1)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  int iVar2;
  FImplicitObject *pFVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->MNonFrequentData).Property.MGeometry.Reference;
  if ((pFVar3 != (FImplicitObject *)0x0) && (pFVar3->bHasBoundingBox != false)) {
    FVar4 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    iVar2 = (this->MShapesArray).ArrayNum;
    if (FVar4 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar4 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
    }
    FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar4 + (longlong)iVar2 * 8);
    while( true ) {
      if ((this->MShapesArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar4 == FVar1) break;
      FShapeInstanceProxy::UpdateShapeBounds(*(FShapeInstanceProxy **)FVar4,param_1);
      FVar4 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )((longlong)FVar4 + 8);
    }
  }
  return;
}

// UpdateShapeBounds @ 143c1cf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticle<double,3>::UpdateShapeBounds(TGeometryParticle<double,3> *this)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  undefined8 uVar2;
  int iVar3;
  FImplicitObject *pFVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58 = *(undefined8 *)&(this->MXR).Property.MX;
  uStack_50 = *(undefined8 *)&(this->MXR).Property.MX.field_0x8;
  pFVar4 = (this->MNonFrequentData).Property.MGeometry.Reference;
  local_48 = *(undefined8 *)&(this->MXR).Property.MX.field_0x10;
  uStack_40 = 0;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  uVar2 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
  local_68 = (double)(float)uVar2;
  dStack_60 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar6 = (double)*(float *)&(this->MXR).Property.MR.field_0x4;
  local_78._8_4_ = SUB84(dVar6,0);
  local_78._0_8_ = (double)*(float *)&(this->MXR).Property.MR;
  local_78._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_28 = ___xmm_00000000000000003ff0000000000000;
  uStack_20 = _UNK_150689518;
  if ((pFVar4 != (FImplicitObject *)0x0) && (pFVar4->bHasBoundingBox != false)) {
    FVar5 = (this->MShapesArray).AllocatorInstance.SecondaryData;
    iVar3 = (this->MShapesArray).ArrayNum;
    if (FVar5 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar5 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&this->MShapesArray;
    }
    FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar5 + (longlong)iVar3 * 8);
    while( true ) {
      if ((this->MShapesArray).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      if (FVar5 == FVar1) break;
      FShapeInstanceProxy::UpdateShapeBounds
                (*(FShapeInstanceProxy **)FVar5,(TRigidTransform<double,3> *)local_78);
      FVar5 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )((longlong)FVar5 + 8);
    }
  }
  return;
}

// UpdateShapesArray @ 143c1d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TGeometryParticle<double,3>::UpdateShapesArray(TGeometryParticle<double,3> *this)

{
  longlong *plVar1;
  undefined8 uVar2;
  IPhysicsProxyBase *pIVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_a8 [32];
  TRefCountPtr<Chaos::FImplicitObject> local_88 [2];
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58 = *(undefined8 *)&(this->MXR).Property.MX;
  uStack_50 = *(undefined8 *)&(this->MXR).Property.MX.field_0x8;
  local_88[0].Reference = (this->MNonFrequentData).Property.MGeometry.Reference;
  local_48 = *(undefined8 *)&(this->MXR).Property.MX.field_0x10;
  pIVar3 = this->Proxy;
  uStack_40 = 0;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_28 = ___xmm_00000000000000003ff0000000000000;
  uStack_20 = _UNK_150689518;
  uVar2 = *(undefined8 *)&(this->MXR).Property.MR.field_0x8;
  local_68 = (double)(float)uVar2;
  dStack_60 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar5 = (double)*(float *)&(this->MXR).Property.MR.field_0x4;
  local_78._8_4_ = SUB84(dVar5,0);
  local_78._0_8_ = (double)*(float *)&(this->MXR).Property.MR;
  local_78._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  if (local_88[0].Reference != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&(local_88[0].Reference)->_padding_ = (int)(local_88[0].Reference)->_padding_ + 1;
    UNLOCK();
  }
  UpdateShapesArrayFromGeometry
            (&this->MShapesArray,local_88,(TRigidTransform<double,3> *)local_78,pIVar3);
  if (local_88[0].Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_88[0].Reference)->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&(local_88[0].Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_88[0].Reference)->_padding_)(local_88[0].Reference,1);
    }
  }
  return;
}

// UserData @ 143c1d280

void * __thiscall Chaos::TGeometryParticle<double,3>::UserData(TGeometryParticle<double,3> *this)

{
  return this->MUserData;
}

// X @ 143c1dff0

TVector<double,3> * __thiscall
Chaos::TGeometryParticle<double,3>::X(TGeometryParticle<double,3> *this)

{
  return (TVector<double,3> *)&this->MXR;
}

// XR @ 143c1e0d0

FParticlePositionRotation * __thiscall
Chaos::TGeometryParticle<double,3>::XR(TGeometryParticle<double,3> *this)

{
  return &(this->MXR).Property;
}

