// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 20

// TKinematicGeometryParticle<double,3> @ 14373b9c0

TKinematicGeometryParticle<double,3> * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::TKinematicGeometryParticle<double,3>
          (TKinematicGeometryParticle<double,3> *this,FKinematicGeometryParticleParameters *param_1)

{
  uint *puVar1;
  IPhysicsProxyBase *pIVar2;
  
  TGeometryParticle<double,3>::TGeometryParticle<double,3>
            ((TGeometryParticle<double,3> *)this,(FGeometryParticleParameters *)param_1);
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticle_N_02_Chaos__6B_;
  *(undefined8 *)&(this->MKinematicTarget).Property.Rotation = 0;
  *(undefined4 *)&(this->MKinematicTarget).Property.Rotation.field_0x8 = 0;
  *(undefined4 *)&(this->MKinematicTarget).Property.Rotation.field_0xc = 0x3f800000;
  *(undefined8 *)&(this->MKinematicTarget).Property.Position = 0;
  *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x8 = 0;
  *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x10 = 0;
  (this->MKinematicTarget).Property.Mode = None;
  pIVar2 = (IPhysicsProxyBase *)this->_padding_;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined8 *)&(this->MVelocities).Property.MV = 0;
  *(undefined4 *)&(this->MVelocities).Property.MV.field_0x8 = 0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 2;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = (IPhysicsProxyBase *)this->_padding_;
  *(undefined8 *)&(this->MVelocities).Property.MW = 0;
  *(undefined4 *)&(this->MVelocities).Property.MW.field_0x8 = 0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 2;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = (IPhysicsProxyBase *)this->_padding_;
  if (AccelerationStructureSplitStaticAndDynamic == 1) {
    *(undefined2 *)((longlong)&this->_padding_ + 4) = 8;
  }
  else {
    *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0x10;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  return this;
}

// Serialize @ 1437aa9c0

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::Serialize
          (TKinematicGeometryParticle<double,3> *this,FChaosArchive *param_1)

{
  int iVar1;
  FArchive *pFVar2;
  TChaosProperty<Chaos::FParticleVelocities,1> *pTVar3;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  TGeometryParticle<double,3>::Serialize((TGeometryParticle<double,3> *)this,param_1);
  pTVar3 = &this->MVelocities;
  (**(code **)(param_1->_padding_ + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (0xb < iVar1) {
    pFVar2 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)pTVar3);
    operator<<<3>(pFVar2,&(this->MVelocities).Property.MW);
    return;
  }
  local_38 = (double)*(float *)&(pTVar3->Property).MV;
  local_30 = (double)*(float *)&(this->MVelocities).Property.MV.field_0x4;
  local_28 = (double)*(float *)&(this->MVelocities).Property.MV.field_0x8;
  local_20 = (double)*(float *)&(this->MVelocities).Property.MW;
  local_18 = (double)*(float *)&(this->MVelocities).Property.MW.field_0x4;
  local_10 = (double)*(float *)&(this->MVelocities).Property.MW.field_0x8;
  pFVar2 = SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&local_38);
  SerializeReal<double,3>(pFVar2,(TVector<double,3> *)&local_20);
  *(float *)&(pTVar3->Property).MV = (float)local_38;
  *(float *)&(this->MVelocities).Property.MV.field_0x4 = (float)local_30;
  *(float *)&(this->MVelocities).Property.MV.field_0x8 = (float)local_28;
  *(float *)&(this->MVelocities).Property.MW = (float)local_20;
  *(float *)&(this->MVelocities).Property.MW.field_0x4 = (float)local_18;
  *(float *)&(this->MVelocities).Property.MW.field_0x8 = (float)local_10;
  return;
}

// SetV @ 1437b0610

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::SetV
          (TKinematicGeometryParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  IPhysicsProxyBase *pIVar4;
  
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  pIVar4 = (IPhysicsProxyBase *)this->_padding_;
  *(float *)&(this->MVelocities).Property.MV = (float)*(double *)param_1;
  *(float *)&(this->MVelocities).Property.MV.field_0x4 = (float)dVar2;
  *(float *)&(this->MVelocities).Property.MV.field_0x8 = (float)dVar3;
  if (((param_2) &&
      (puVar1 = (uint *)((longlong)&this->_padding_ + 4), *puVar1 = *puVar1 | 2,
      pIVar4 != (IPhysicsProxyBase *)0x0)) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    return;
  }
  return;
}

// SetW @ 1437b0740

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::SetW
          (TKinematicGeometryParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  IPhysicsProxyBase *pIVar4;
  
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  pIVar4 = (IPhysicsProxyBase *)this->_padding_;
  *(float *)&(this->MVelocities).Property.MW = (float)*(double *)param_1;
  *(float *)&(this->MVelocities).Property.MW.field_0x4 = (float)dVar2;
  *(float *)&(this->MVelocities).Property.MW.field_0x8 = (float)dVar3;
  if (((param_2) &&
      (puVar1 = (uint *)((longlong)&this->_padding_ + 4), *puVar1 = *puVar1 | 2,
      pIVar4 != (IPhysicsProxyBase *)0x0)) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    return;
  }
  return;
}

// SyncRemoteDataImp @ 1437b2020

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::SyncRemoteDataImp
          (TKinematicGeometryParticle<double,3> *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  EKinematicTargetMode EVar12;
  undefined4 uVar13;
  uint uVar14;
  FParticlePositionRotation *pFVar15;
  FParticleNonFrequentData *this_00;
  FParticleVelocities *pFVar16;
  FKinematicTarget *pFVar17;
  
  uVar14 = (param_3->Flags).Bits;
  if ((uVar14 & 1) != 0) {
    lVar2 = this->_padding_;
    lVar3 = this->_padding_;
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    pFVar15 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_2);
    *(longlong *)&pFVar15->MX = lVar2;
    *(longlong *)&(pFVar15->MX).field_0x8 = lVar3;
    *(longlong *)&(pFVar15->MX).field_0x10 = lVar4;
    pFVar15->_padding_ = lVar5;
    *(longlong *)&pFVar15->MR = lVar6;
    *(longlong *)&(pFVar15->MR).field_0x8 = lVar7;
    uVar14 = (param_3->Flags).Bits;
  }
  if ((uVar14 & 0x10) != 0) {
    this_00 = TDirtyElementPool<Chaos::FParticleNonFrequentData>::GetElement
                        (&param_1->NonFrequentDataPool,param_2);
    FParticleNonFrequentData::operator=(this_00,(FParticleNonFrequentData *)&this->_padding_);
    uVar14 = (param_3->Flags).Bits;
  }
  if ((uVar14 & 2) != 0) {
    uVar8 = *(undefined8 *)&(this->MVelocities).Property.MV;
    uVar9 = *(undefined8 *)&(this->MVelocities).Property.MV.field_0x8;
    uVar1 = *(undefined8 *)&(this->MVelocities).Property.MW.field_0x4;
    pFVar16 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->VelocitiesPool,param_2);
    *(undefined8 *)&pFVar16->MV = uVar8;
    *(undefined8 *)&(pFVar16->MV).field_0x8 = uVar9;
    *(undefined8 *)&(pFVar16->MW).field_0x4 = uVar1;
    uVar14 = (param_3->Flags).Bits;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar1 = *(undefined8 *)&(this->MKinematicTarget).Property.Rotation;
    uVar8 = *(undefined8 *)&(this->MKinematicTarget).Property.Rotation.field_0x8;
    uVar9 = *(undefined8 *)&(this->MKinematicTarget).Property.Position;
    uVar10 = *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x8;
    uVar11 = *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x10;
    EVar12 = (this->MKinematicTarget).Property.Mode;
    uVar13 = *(undefined4 *)&(this->MKinematicTarget).Property.field_0x2c;
    pFVar17 = TDirtyElementPool<Chaos::FKinematicTarget>::GetElement
                        (&param_1->KinematicTargetPool,param_2);
    *(undefined8 *)&pFVar17->Rotation = uVar1;
    *(undefined8 *)&(pFVar17->Rotation).field_0x8 = uVar8;
    *(undefined8 *)&pFVar17->Position = uVar9;
    *(undefined8 *)&(pFVar17->Position).field_0x8 = uVar10;
    *(undefined8 *)&(pFVar17->Position).field_0x10 = uVar11;
    pFVar17->Mode = EVar12;
    *(undefined4 *)&pFVar17->field_0x2c = uVar13;
  }
  return;
}

// ~TKinematicGeometryParticle<double,3> @ 143be2a90

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::~TKinematicGeometryParticle<double,3>
          (TKinematicGeometryParticle<double,3> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7__TGeometryParticle_N_02_Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  plVar4 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar4 = &this->_padding_;
  }
  DestructItems<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int>
            ((TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> *)
             plVar4,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// Cast @ 143bf3d50

TKinematicGeometryParticle<double,3> * __cdecl
Chaos::TKinematicGeometryParticle<double,3>::Cast(TGeometryParticle<double,3> *param_1)

{
  TKinematicGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (TKinematicGeometryParticle<double,3> *)0x0;
  if ((param_1 != (TGeometryParticle<double,3> *)0x0) &&
     (pTVar1 = (TKinematicGeometryParticle<double,3> *)param_1, param_1->Type == Static)) {
    pTVar1 = (TKinematicGeometryParticle<double,3> *)0x0;
  }
  return pTVar1;
}

// Cast @ 143bf3d70

TKinematicGeometryParticle<double,3> * __cdecl
Chaos::TKinematicGeometryParticle<double,3>::Cast(TGeometryParticle<double,3> *param_1)

{
  TKinematicGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (TKinematicGeometryParticle<double,3> *)0x0;
  if ((param_1 != (TGeometryParticle<double,3> *)0x0) &&
     (pTVar1 = (TKinematicGeometryParticle<double,3> *)param_1, param_1->Type == Static)) {
    pTVar1 = (TKinematicGeometryParticle<double,3> *)0x0;
  }
  return pTVar1;
}

// ClearKinematicTarget @ 143bf49a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::ClearKinematicTarget
          (TKinematicGeometryParticle<double,3> *this)

{
  int iVar1;
  EPhysicsProxyType EVar2;
  IPhysicsProxyBase *pIVar3;
  FPhysicsSolverBase *pFVar4;
  FPushPhysicsData *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FPlatformRWLock *SRWLock;
  
  pIVar3 = (IPhysicsProxyBase *)this->_padding_;
  uVar8 = *(uint *)((longlong)&this->_padding_ + 4) & 0xffffffbf;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar8;
  if (((pIVar3 != (IPhysicsProxyBase *)0x0) && (uVar8 == 0)) &&
     (pFVar4 = pIVar3->Solver, pFVar4 != (FPhysicsSolverBase *)0x0)) {
    SRWLock = (FPlatformRWLock *)0x0;
    if (CVars::bEnableAsyncInitBody != false) {
      SRWLock = &(pFVar4->MarshallingManager).MarshallingManagerLock;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    iVar1 = pIVar3->DirtyIdx;
    pFVar5 = (pFVar4->MarshallingManager).ProducerData;
    if (((iVar1 != -1) && (EVar2 = pIVar3->Type, -1 < iVar1)) &&
       (iVar1 < (pFVar5->DirtyProxiesDataBuffer).DirtyProxyBuckets[EVar2].ProxiesData.ArrayNum)) {
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((pFVar5->DirtyProxiesDataBuffer).DirtyProxyBuckets[EVar2].ProxiesData.
                   AllocatorInstance.Data + (longlong)iVar1 * 0x20 + 0x18) == 0) {
        FDirtySet::Remove(&pFVar5->DirtyProxiesDataBuffer,pIVar3);
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// CreateParticle @ 143c00900

TUniquePtr<Chaos::TKinematicGeometryParticle<double,3>,TDefaultDelete<Chaos::TKinematicGeometryParticle<double,3>_>_>
 __cdecl Chaos::TKinematicGeometryParticle<double,3>::CreateParticle
                   (FKinematicGeometryParticleParameters *param_1)

{
  TKinematicGeometryParticle<double,3> *pTVar1;
  FKinematicGeometryParticleParameters *in_RDX;
  
  pTVar1 = ::operator_new(0xf0);
  if (pTVar1 != (TKinematicGeometryParticle<double,3> *)0x0) {
    pTVar1 = TKinematicGeometryParticle<double,3>(pTVar1,in_RDX);
    *(TKinematicGeometryParticle<double,3> **)param_1 = pTVar1;
    return (TUniquePtr<Chaos::TKinematicGeometryParticle<double,3>,TDefaultDelete<Chaos::TKinematicGeometryParticle<double,3>_>_>
            )(TKinematicGeometryParticle<double,3> *)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Chaos::TKinematicGeometryParticle<double,3>,TDefaultDelete<Chaos::TKinematicGeometryParticle<double,3>_>_>
          )(TKinematicGeometryParticle<double,3> *)param_1;
}

// GetV @ 143c07d60

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::GetV
          (TKinematicGeometryParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MVelocities).Property.MV.field_0x4;
  *(double *)__return_storage_ptr__ = (double)*(float *)&(this->MVelocities).Property.MV;
  fVar2 = *(float *)&(this->MVelocities).Property.MV.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetW @ 143c08040

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::GetW
          (TKinematicGeometryParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MVelocities).Property.MW.field_0x4;
  *(double *)__return_storage_ptr__ = (double)*(float *)&(this->MVelocities).Property.MW;
  fVar2 = *(float *)&(this->MVelocities).Property.MW.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// IsKinematicTargetDirty @ 143c0b540

bool __thiscall
Chaos::TKinematicGeometryParticle<double,3>::IsKinematicTargetDirty
          (TKinematicGeometryParticle<double,3> *this)

{
  return (bool)((byte)(*(uint *)((longlong)&this->_padding_ + 4) >> 6) & 1);
}

// KinematicTarget @ 143c0b670

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::KinematicTarget
          (TKinematicGeometryParticle<double,3> *this,FKinematicTarget *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EKinematicTargetMode EVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined8 *)&(this->MKinematicTarget).Property.Rotation.field_0x8;
  uVar2 = *(undefined8 *)&(this->MKinematicTarget).Property.Position;
  uVar3 = *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Rotation =
       *(undefined8 *)&(this->MKinematicTarget).Property.Rotation;
  *(undefined8 *)&(__return_storage_ptr__->Rotation).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x10;
  EVar4 = (this->MKinematicTarget).Property.Mode;
  uVar5 = *(undefined4 *)&(this->MKinematicTarget).Property.field_0x2c;
  *(undefined8 *)&__return_storage_ptr__->Position = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->Position).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->Position).field_0x10 = uVar1;
  __return_storage_ptr__->Mode = EVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar5;
  return __return_storage_ptr__;
}

// ObjectState @ 143c0cc70

EObjectStateType __thiscall
Chaos::TKinematicGeometryParticle<double,3>::ObjectState(TKinematicGeometryParticle<double,3> *this)

{
  if ((byte)this->_padding_ < 2) {
    this = (TKinematicGeometryParticle<double,3> *)0x0;
  }
  if (this != (TKinematicGeometryParticle<double,3> *)0x0) {
    return *(EObjectStateType *)&this[1].MVelocities.Property.MW;
  }
  return Kinematic;
}

// SetKinematicTarget @ 143c16b90

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::SetKinematicTarget
          (TKinematicGeometryParticle<double,3> *this,FKinematicTarget *param_1,bool param_2)

{
  uint *puVar1;
  IPhysicsProxyBase *pIVar2;
  undefined8 uVar3;
  EKinematicTargetMode EVar4;
  undefined4 uVar5;
  
  uVar3 = *(undefined8 *)&(param_1->Rotation).field_0x8;
  pIVar2 = (IPhysicsProxyBase *)this->_padding_;
  *(undefined8 *)&(this->MKinematicTarget).Property.Rotation = *(undefined8 *)&param_1->Rotation;
  *(undefined8 *)&(this->MKinematicTarget).Property.Rotation.field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->Position).field_0x8;
  *(undefined8 *)&(this->MKinematicTarget).Property.Position = *(undefined8 *)&param_1->Position;
  *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x8 = uVar3;
  EVar4 = param_1->Mode;
  uVar5 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined8 *)&(this->MKinematicTarget).Property.Position.field_0x10 =
       *(undefined8 *)&(param_1->Position).field_0x10;
  (this->MKinematicTarget).Property.Mode = EVar4;
  *(undefined4 *)&(this->MKinematicTarget).Property.field_0x2c = uVar5;
  if (((param_2) &&
      (puVar1 = (uint *)((longlong)&this->_padding_ + 4), *puVar1 = *puVar1 | 0x40,
      pIVar2 != (IPhysicsProxyBase *)0x0)) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetVelocities @ 143c19ca0

void __thiscall
Chaos::TKinematicGeometryParticle<double,3>::SetVelocities
          (TKinematicGeometryParticle<double,3> *this,FParticleVelocities *param_1,bool param_2)

{
  uint *puVar1;
  IPhysicsProxyBase *pIVar2;
  undefined8 uVar3;
  
  pIVar2 = (IPhysicsProxyBase *)this->_padding_;
  uVar3 = *(undefined8 *)&(param_1->MV).field_0x8;
  *(undefined8 *)&(this->MVelocities).Property.MV = *(undefined8 *)&param_1->MV;
  *(undefined8 *)&(this->MVelocities).Property.MV.field_0x8 = uVar3;
  *(undefined8 *)&(this->MVelocities).Property.MW.field_0x4 =
       *(undefined8 *)&(param_1->MW).field_0x4;
  if (((param_2) &&
      (puVar1 = (uint *)((longlong)&this->_padding_ + 4), *puVar1 = *puVar1 | 2,
      pIVar2 != (IPhysicsProxyBase *)0x0)) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// V @ 143c1d310

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::V
          (TKinematicGeometryParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MVelocities).Property.MV.field_0x4;
  *(double *)__return_storage_ptr__ = (double)*(float *)&(this->MVelocities).Property.MV;
  fVar2 = *(float *)&(this->MVelocities).Property.MV.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// Velocities @ 143c1d730

FParticleVelocities * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::Velocities(TKinematicGeometryParticle<double,3> *this)

{
  return &(this->MVelocities).Property;
}

// W @ 143c1d7f0

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticle<double,3>::W
          (TKinematicGeometryParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MVelocities).Property.MW.field_0x4;
  *(double *)__return_storage_ptr__ = (double)*(float *)&(this->MVelocities).Property.MW;
  fVar2 = *(float *)&(this->MVelocities).Property.MW.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

