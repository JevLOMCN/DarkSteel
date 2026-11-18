// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// FPerShapeData @ 143dfba70

FPerShapeData * __thiscall
Chaos::FPerShapeData::FPerShapeData
          (FPerShapeData *this,EPerShapeDataType param_1,FPerShapeData *param_2)

{
  FImplicitObject *pFVar1;
  undefined8 uVar2;
  EPerShapeDataType EVar3;
  
  this->_padding_ = (longlong)&___7FPerShapeData_Chaos__6B_;
  EVar3 = (this->Type ^ param_1) & (SimExtended|Sim) ^ *(EPerShapeDataType *)&this->field_0x8;
  *(EPerShapeDataType *)&this->field_0x8 = EVar3;
  EVar3 = (EVar3 ^ *(EPerShapeDataType *)&param_2->field_0x8) & 4 ^ EVar3;
  *(EPerShapeDataType *)&this->field_0x8 = EVar3;
  *(EPerShapeDataType *)&this->field_0x8 =
       (EVar3 ^ *(EPerShapeDataType *)&param_2->field_0x8) & 7 ^
       *(EPerShapeDataType *)&param_2->field_0x8;
  (this->DirtyFlags).Bits = 0;
  (this->Geometry).Reference = (FImplicitObject *)0x0;
  pFVar1 = (param_2->Geometry).Reference;
  (this->Geometry).Reference = pFVar1;
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)&(param_2->WorldSpaceShapeBounds).MMin.field_0x8;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMin =
       *(undefined8 *)&(param_2->WorldSpaceShapeBounds).MMin;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMin.field_0x8 = uVar2;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMin.field_0x10 =
       *(undefined8 *)&(param_2->WorldSpaceShapeBounds).MMin.field_0x10;
  uVar2 = *(undefined8 *)&(param_2->WorldSpaceShapeBounds).MMax.field_0x8;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMax =
       *(undefined8 *)&(param_2->WorldSpaceShapeBounds).MMax;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMax.field_0x8 = uVar2;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMax.field_0x10 =
       *(undefined8 *)&(param_2->WorldSpaceShapeBounds).MMax.field_0x10;
  return this;
}

// ~FPerShapeData @ 143dfe120

void __thiscall Chaos::FPerShapeData::~FPerShapeData(FPerShapeData *this)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FPerShapeData_Chaos__6B_;
  pFVar2 = (this->Geometry).Reference;
  if (pFVar2 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143dfe152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// CreatePerShapeData @ 143e18a50

TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> __cdecl
Chaos::FPerShapeData::CreatePerShapeData
          (int param_1,TSerializablePtr<Chaos::FImplicitObject> param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> TVar3;
  undefined4 in_register_0000000c;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ShapeInstance.cpp"
                     ,0xbb,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FPerShapeData *)(*pcVar1)();
    return (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>)TVar3.Ptr;
  }
  ((FPerShapeData *)CONCAT44(in_register_0000000c,param_1))->_padding_ = 0;
  return (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>)
         (FPerShapeData *)CONCAT44(in_register_0000000c,param_1);
}

// GetCombinedShapeFilterData @ 143e26c00

FCombinedShapeFilterData * __thiscall
Chaos::FPerShapeData::GetCombinedShapeFilterData
          (FPerShapeData *this,FCombinedShapeFilterData *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = 0x50;
  if (this->Type != 0) {
    lVar1 = 0x48;
  }
  FCollisionData::GetCombinedShapeFilterData
            ((FCollisionData *)((longlong)&this->_padding_ + lVar1),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFilterInstanceData @ 143e29250

FInstanceData * __thiscall
Chaos::FPerShapeData::GetFilterInstanceData
          (FPerShapeData *this,FInstanceData *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = 0x50;
  if (this->Type != 0) {
    lVar1 = 0x48;
  }
  FCollisionData::GetFilterInstanceData
            ((FCollisionData *)((longlong)&this->_padding_ + lVar1),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetShapeFilterData @ 143e2c920

FShapeFilterData * __thiscall
Chaos::FPerShapeData::GetShapeFilterData
          (FPerShapeData *this,FShapeFilterData *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = 0x50;
  if (this->Type != 0) {
    lVar1 = 0x48;
  }
  FCollisionData::GetShapeFilterData
            ((FCollisionData *)((longlong)&this->_padding_ + lVar1),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SerializationFactory @ 143e4a680

FPerShapeData * __cdecl
Chaos::FPerShapeData::SerializationFactory(FChaosArchive *param_1,FPerShapeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPerShapeData *pFVar3;
  FShapeInstanceProxy *pFVar4;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7995036322483929426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ShapeInstance.cpp"
                     ,0x152,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPerShapeData *)(*pcVar1)();
    return pFVar3;
  }
  pFVar4 = FShapeInstanceProxy::SerializationFactory(param_1,(FShapeInstanceProxy *)0x0);
  return (FPerShapeData *)pFVar4;
}

// Serialize @ 143e4b740

void __thiscall Chaos::FPerShapeData::Serialize(FPerShapeData *this,FChaosArchive *param_1)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))
            (param_1,&FExternalPhysicsMaterialCustomObjectVersion::GUID);
  FChaosArchive::SerializePtr<Chaos::FImplicitObject>(param_1,&this->Geometry);
  lVar2 = 0x50;
  if (this->Type != 0) {
    lVar2 = 0x48;
  }
  FCollisionData::Serialize((FCollisionData *)((longlong)&this->_padding_ + lVar2),param_1);
  (**(code **)(this->_padding_ + 0x10))(this,param_1);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0xf < iVar1) {
    TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->WorldSpaceShapeBounds);
    return;
  }
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMin = 0;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMin.field_0x8 = 0;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMin.field_0x10 = 0;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMax = 0;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMax.field_0x8 = 0;
  *(undefined8 *)&(this->WorldSpaceShapeBounds).MMax.field_0x10 = 0;
  return;
}

// SetCombinedShapeFilterData @ 143e4ced0

void __thiscall
Chaos::FPerShapeData::SetCombinedShapeFilterData
          (FPerShapeData *this,FCombinedShapeFilterData *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  IPhysicsProxyBase *pIVar3;
  FCombinedShapeFilterData local_28;
  
  if (this->Type == 0) {
    local_28.ShapeFilterData.QueryBlockChannels = (param_1->ShapeFilterData).QueryBlockChannels;
    local_28.ShapeFilterData.QueryOverlapChannels = (param_1->ShapeFilterData).QueryOverlapChannels;
    local_28.ShapeFilterData.SimBlockChannels = (param_1->ShapeFilterData).SimBlockChannels;
    local_28.ShapeFilterData.Word3 = (param_1->ShapeFilterData).Word3;
    local_28._16_8_ = *(undefined8 *)&(param_1->ShapeFilterData).SimWord3;
    local_28.InstanceData.ComponentId = (param_1->InstanceData).ComponentId;
    local_28.InstanceData.BodyIndex = (param_1->InstanceData).BodyIndex;
    pIVar3 = (IPhysicsProxyBase *)this[1]._padding_;
    FCollisionData::SetCombinedShapeFilterData((FCollisionData *)&this[1].field_0x8,&local_28);
    uVar2 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar2 | 1;
    if (((uVar2 == 0) && (pIVar3 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar3->Solver,pIVar3,this->ShapeIdx);
    }
    return;
  }
  FCollisionData::SetCombinedShapeFilterData((FCollisionData *)(this + 1),param_1);
  return;
}

// SetFilterInstanceData @ 143e4d0d0

void __thiscall
Chaos::FPerShapeData::SetFilterInstanceData(FPerShapeData *this,FInstanceData *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  IPhysicsProxyBase *pIVar3;
  FInstanceData local_18;
  
  if (this->Type == 0) {
    local_18.ActorId = param_1->ActorId;
    local_18.ComponentId = param_1->ComponentId;
    local_18.BodyIndex = param_1->BodyIndex;
    pIVar3 = (IPhysicsProxyBase *)this[1]._padding_;
    FCollisionData::SetFilterInstanceData((FCollisionData *)&this[1].field_0x8,&local_18);
    uVar2 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar2 | 1;
    if (((uVar2 == 0) && (pIVar3 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar3->Solver,pIVar3,this->ShapeIdx);
    }
    return;
  }
  FCollisionData::SetFilterInstanceData((FCollisionData *)(this + 1),param_1);
  return;
}

// SetShapeFilterData @ 143e4e480

void __thiscall
Chaos::FPerShapeData::SetShapeFilterData(FPerShapeData *this,FShapeFilterData *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  IPhysicsProxyBase *pIVar3;
  FShapeFilterData local_28;
  
  if (this->Type == 0) {
    local_28.QueryBlockChannels = param_1->QueryBlockChannels;
    local_28.QueryOverlapChannels = param_1->QueryOverlapChannels;
    local_28.SimBlockChannels = param_1->SimBlockChannels;
    local_28.Word3 = param_1->Word3;
    local_28.SimWord3 = param_1->SimWord3;
    pIVar3 = (IPhysicsProxyBase *)this[1]._padding_;
    FCollisionData::SetShapeFilterData((FCollisionData *)&this[1].field_0x8,&local_28);
    uVar2 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar2 | 1;
    if (((uVar2 == 0) && (pIVar3 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar3->Solver,pIVar3,this->ShapeIdx);
    }
    return;
  }
  FCollisionData::SetShapeFilterData((FCollisionData *)(this + 1),param_1);
  return;
}

// UpdateGeometry @ 143e616c0

void __cdecl
Chaos::FPerShapeData::UpdateGeometry
          (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *param_1,
          TSerializablePtr<Chaos::FImplicitObject> param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ShapeInstance.cpp"
                     ,0xc1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// NumMaterials @ 143f70ed0

int __thiscall Chaos::FPerShapeData::NumMaterials(FPerShapeData *this)

{
  longlong lVar1;
  FChaosPhysicsMaterial *pFVar2;
  
  if (this->Type == 0) {
    return *(int *)&this[1].WorldSpaceShapeBounds.MMax.field_0x10;
  }
  if (this->bIsSingleMaterial != 0) {
    pFVar2 = FMaterialHandle::Get((FMaterialHandle *)&this[1].WorldSpaceShapeBounds.MMax);
    return (int)(pFVar2 != (FChaosPhysicsMaterial *)0x0);
  }
  lVar1 = *(longlong *)&this[1].WorldSpaceShapeBounds.MMax;
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 8);
  }
  return 0;
}

