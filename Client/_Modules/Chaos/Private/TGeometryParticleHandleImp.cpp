// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 116

// CastToClustered @ 1436fba40

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToClustered
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (2 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar1;
}

// CastToKinematicParticle @ 1436fba80

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToKinematicParticle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    pTVar1 = this;
  }
  return (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar1;
}

// CastToRigidParticle @ 1436fbac0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToRigidParticle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidParticleHandleImp<double,3,1> *)pTVar1;
}

// WorldSpaceInflatedBounds @ 143704e50

TAABB<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TAABB<double,3> *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x148)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAABB<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TAABB<double,3> *)((longlong)(int)uVar1 * 0x30 + *(longlong *)(lVar2 + 0x140));
}

// CCDAxisThreshold @ 1437592a0

TVector<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CCDAxisThreshold
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x128) + (longlong)(int)uVar1 * 0x18);
}

// CastToClustered @ 143759790

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToClustered
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (2 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar1;
}

// CastToKinematicParticle @ 1437597b0

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToKinematicParticle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    pTVar1 = this;
  }
  return (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar1;
}

// CastToRigidParticle @ 1437597d0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToRigidParticle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidParticleHandleImp<double,3,1> *)pTVar1;
}

// GetConstraintGraphNode @ 14378fed0

FPBDIslandParticle * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPBDIslandParticle *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x1f0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPBDIslandParticle *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FPBDIslandParticle **)(*(longlong *)(lVar2 + 0x1e8) + (longlong)(int)uVar1 * 8);
}

// GetGeometry @ 143790830

FImplicitObject * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FImplicitObject *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x68)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FImplicitObject **)(*(longlong *)(lVar2 + 0x60) + (longlong)(int)uVar1 * 8);
}

// GetTransformXR @ 143792f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetTransformXR
          (TGeometryParticleHandleImp<double,3,1> *this,
          TRigidTransform<double,3> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  TRigidTransform<double,3> *pTVar13;
  TVector<double,3> *pTVar14;
  longlong lVar15;
  
  uVar3 = (uint)this->_padding_;
  lVar15 = (longlong)(int)uVar3;
  lVar4 = this->_padding_;
  uVar12 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TRigidTransform<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x48);
  fVar1 = *(float *)(lVar4 + lVar15 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar15 * 0x10);
  dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar9 = (double)*(float *)(lVar4 + 4 + lVar15 * 0x10);
  pTVar14 = TParticles<double,3>::GetX((TParticles<double,3> *)this->_padding_,(int)this->_padding_)
  ;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)(float)uVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar6;
  uVar10 = *(undefined8 *)&pTVar14->field_0x8;
  uVar2 = *(undefined8 *)&pTVar14->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)pTVar14;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar10;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  uVar2 = _UNK_150689688;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar2;
  uVar2 = _UNK_150689518;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar2;
  return __return_storage_ptr__;
}

// LightWeightDisabled @ 143798480

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
          (TGeometryParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x238)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (bool)*(undefined1 *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x230));
}

// ObjectState @ 14379ac70

EObjectStateType __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ObjectState
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    pTVar2 = this;
  }
  if (pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return Static;
  }
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
    this_00 = pTVar2;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    return EVar1;
  }
  return Kinematic;
}

// SerializationFactory @ 1437a7ad0

TGeometryParticleHandleImp<double,3,1> * __cdecl
Chaos::TGeometryParticleHandleImp<double,3,1>::SerializationFactory
          (FChaosArchive *param_1,TGeometryParticleHandleImp<double,3,1> *param_2)

{
  TGeometryParticleHandleImp<double,3,1> *this;
  
  if ((param_1->_padding_ & 1) == 0) {
    return (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  this = ::operator_new(0x18);
  if (this != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    SetConstraintGraphNode(this,(FPBDIslandParticle *)0x0);
    return this;
  }
  return (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// Serialize @ 1437aa890

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::Serialize
          (TGeometryParticleHandleImp<double,3,1> *this,FChaosArchive *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  
  puVar2 = *(undefined4 **)param_1->_padding_;
  if ((undefined4 *)((undefined8 *)param_1->_padding_)[1] < puVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->_padding_,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&this->_padding_);
    }
  }
  else {
    *(undefined4 *)&this->_padding_ = *puVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  plVar3 = (longlong *)param_1->_padding_;
  local_res8[0] = *(undefined1 *)((longlong)&this->_padding_ + 4);
  if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = local_res8[0];
  FChaosArchive::SerializePtr<Chaos::TGeometryParticlesImp<double,3,0>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> *)this);
  piVar1 = &this->HandleIdx;
  piVar4 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar4 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  TGeometryParticlesImp<double,3,0>::SetHandle
            ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_,this);
  return;
}

// SetConstraintGraphNode @ 1437ac890

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
          (TGeometryParticleHandleImp<double,3,1> *this,FPBDIslandParticle *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x1f0)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(FPBDIslandParticle **)(*(longlong *)(lVar2 + 0x1e8) + (longlong)(int)uVar1 * 8) = param_1;
  return;
}

// ShapeInstances @ 1437b09e0

TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ShapeInstances
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x100)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)(lVar2 + 0xf8) + (longlong)(int)uVar1 * 0x18);
}

// AddToLists @ 14389bc30

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::AddToLists
          (TGeometryParticleHandleImp<double,3,1> *this,EGeometryParticleListMask param_1)

{
  EGeometryParticleListMask *pEVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x250)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar1 = (EGeometryParticleListMask *)(*(longlong *)(lVar3 + 0x248) + (longlong)(int)uVar2 * 4);
  *pEVar1 = *pEVar1 | param_1;
  return;
}

// CastToGeometryCollection @ 1438a7400

TPBDGeometryCollectionParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToGeometryCollection
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (5 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar1;
}

// GetR @ 1438bc1f0

TRotation<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
          (TGeometryParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// MoveToSOA @ 1438c3fe0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::MoveToSOA
          (TGeometryParticleHandleImp<double,3,1> *this,TGeometryParticlesImp<double,3,0> *param_1)

{
  int *piVar1;
  uint *puVar2;
  EGeometryParticleListMask *pEVar3;
  uint uVar4;
  EGeometryParticleListMask EVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((param_1->MParticleType != *(EParticleType *)((longlong)&this->_padding_ + 4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToSOA.ParticleType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0x315,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar6 = (TGeometryParticlesImp<double,3,0> *)this->_padding_;
  if (pTVar6 != param_1) {
    uVar4 = (uint)this->_padding_;
    if (((int)pTVar6->_padding_ != (int)param_1->_padding_) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MArrays.Num() == Other.MArrays.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayCollection.h"
                           ,0x86,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((uint)pTVar6->_padding_ <= uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<uint32>(Index) < MSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayCollection.h"
                           ,0x87,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar11 = 0;
    if (0 < (int)pTVar6->_padding_) {
      lVar12 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar11 < (int)pTVar6->_padding_) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar7 = *(longlong **)(lVar12 + pTVar6->_padding_);
        if (plVar7 != (longlong *)0x0) {
          pcVar8 = *(code **)(*plVar7 + 0x28);
          uVar10 = 0;
          if ((int)uVar11 < (int)param_1->_padding_) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (*pcVar8)(plVar7,uVar4,*(undefined8 *)(lVar12 + param_1->_padding_));
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < (int)pTVar6->_padding_);
    }
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + -1;
    piVar1 = (int *)((longlong)&pTVar6->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    lVar12 = this->_padding_;
    uVar4 = (uint)this->_padding_;
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      uVar11 = 0;
      if ((int)uVar4 < *(int *)(lVar12 + 0xa0)) {
        uVar11 = ~uVar4 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)(*(longlong *)(*(longlong *)(lVar12 + 0x98) + (longlong)(int)uVar4 * 8) + 8) = uVar4;
    }
    *(int *)&this->_padding_ = (int)param_1->_padding_ + -1;
    if ((*(int *)(this->_padding_ + 0x74) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeometryParticles->GetContainerListMask() != EGeometryParticleListMask::None"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0x322,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_1->MContainerListMask == None) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ToSOA.GetContainerListMask() != EGeometryParticleListMask::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0x323,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = (uint)this->_padding_;
    uVar11 = *(uint *)(this->_padding_ + 0x74);
    uVar10 = 0;
    if ((int)uVar4 < *(int *)&(param_1->MParticleListMask).field_0x10) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar2 = (uint *)(*(longlong *)&(param_1->MParticleListMask).field_0x8 +
                     (longlong)(int)uVar4 * 4);
    *puVar2 = *puVar2 & ~uVar11;
    uVar4 = (uint)this->_padding_;
    EVar5 = param_1->MContainerListMask;
    uVar11 = 0;
    if ((int)uVar4 < *(int *)&(param_1->MParticleListMask).field_0x10) {
      uVar11 = ~uVar4 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pEVar3 = (EGeometryParticleListMask *)
             (*(longlong *)&(param_1->MParticleListMask).field_0x8 + (longlong)(int)uVar4 * 4);
    *pEVar3 = *pEVar3 | EVar5;
    this->_padding_ = (longlong)param_1;
  }
  return;
}

// PhysicsProxy @ 1438c5320

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IPhysicsProxyBase *pIVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xd0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (IPhysicsProxyBase *)(*pcVar3)();
      return pIVar6;
    }
  }
  return *(IPhysicsProxyBase **)(*(longlong *)(lVar2 + 200) + (longlong)(int)uVar1 * 8);
}

// RemoveFromLists @ 1438cd900

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
          (TGeometryParticleHandleImp<double,3,1> *this,EGeometryParticleListMask param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x250)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (uint *)(*(longlong *)(lVar3 + 0x248) + (longlong)(int)uVar2 * 4);
  *puVar1 = *puVar1 & ~param_1;
  return;
}

// SetPhysicsProxy @ 1438d3eb0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetPhysicsProxy
          (TGeometryParticleHandleImp<double,3,1> *this,IPhysicsProxyBase *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xd0)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(IPhysicsProxyBase **)(*(longlong *)(lVar2 + 200) + (longlong)(int)uVar1 * 8) = param_1;
  return;
}

// SetR @ 1438d4000

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
          (TGeometryParticleHandleImp<double,3,1> *this,TRotation<double,3> *param_1,bool param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  
  uVar6 = (uint)this->_padding_;
  lVar7 = this->_padding_;
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)&param_1->field_0x10;
  dVar5 = *(double *)&param_1->field_0x18;
  uVar10 = 0;
  if ((int)uVar6 < *(int *)(lVar7 + 0x50)) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar6 * 0x10);
  *puVar1 = CONCAT44((float)dVar3,(float)dVar2);
  puVar1[1] = CONCAT44((float)dVar5,(float)dVar4);
  return;
}

// LocalBounds @ 1439d5780

TAABB<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::LocalBounds
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TAABB<double,3> *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x118)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAABB<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TAABB<double,3> *)((longlong)(int)uVar1 * 0x30 + *(longlong *)(lVar2 + 0x110));
}

// GetDebugName @ 143a0f1d0

FString * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetDebugName
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x280)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x278) + (longlong)(int)uVar1 * 0x10) == 0) {
    pFVar6 = &Chaos::Private::EmptyParticleName;
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x280)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar6 = *(FString **)(*(longlong *)(lVar2 + 0x278) + (longlong)(int)uVar1 * 0x10);
  }
  return pFVar6;
}

// ToString @ 143a1c0d0

FString * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ToString
          (TGeometryParticleHandleImp<double,3,1> *this,FString *__return_storage_ptr__)

{
  char cVar1;
  wchar_t *pwVar2;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if (cVar1 == '\0') {
    pwVar2 = L"Static[%d]";
  }
  else if (cVar1 == '\x01') {
    pwVar2 = L"Kinemmatic[%d]";
  }
  else if (cVar1 == '\x02') {
    pwVar2 = L"Dynamic[%d]";
  }
  else if (cVar1 == '\x03') {
    pwVar2 = L"Clustered[%d]";
  }
  else {
    if (cVar1 != '\x06') {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pwVar2 = L"GeometryCollection[%d]";
  }
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// ParticleCollisions @ 143a882d0

FParticleCollisions * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ParticleCollisions
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FParticleCollisions *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x1d8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FParticleCollisions *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FParticleCollisions *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x1d0));
}

// SetRf @ 143a92ea0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetRf
          (TGeometryParticleHandleImp<double,3,1> *this,TRotation<float,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)&param_1->field_0x4;
  uVar7 = *(undefined4 *)&param_1->field_0x8;
  uVar8 = *(undefined4 *)&param_1->field_0xc;
  uVar10 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 0x10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}

// SetX @ 143a93310

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetX
          (TGeometryParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = (uint)this->_padding_;
  lVar4 = this->_padding_;
  uVar6 = *(undefined4 *)param_1;
  uVar7 = *(undefined4 *)&param_1->field_0x4;
  uVar8 = *(undefined4 *)&param_1->field_0x8;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x30)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x28);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = uVar2;
  return;
}

// GetRf @ 143b21ff0

TRotation<float,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::GetRf
          (TGeometryParticleHandleImp<double,3,0> *this,TRotation<float,3> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TRotation<float,3> *pTVar8;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TRotation<float,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 0x10);
  uVar5 = puVar1[1];
  *(undefined8 *)__return_storage_ptr__ = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  return __return_storage_ptr__;
}

// SetRf @ 143b411b0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::SetRf
          (TGeometryParticleHandleImp<double,3,0> *this,TRotation<float,3> *param_1,bool param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)&param_1->field_0x4;
  uVar7 = *(undefined4 *)&param_1->field_0x8;
  uVar8 = *(undefined4 *)&param_1->field_0xc;
  uVar10 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 0x10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}

// UpdateWorldSpaceStateSwept @ 143b4a760

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::UpdateWorldSpaceStateSwept
          (TGeometryParticleHandleImp<double,3,0> *this,TRigidTransform<double,3> *param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  uint uVar1;
  TGeometryParticlesImp<double,3,0> *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = (uint)this->_padding_;
  lVar6 = (longlong)(int)uVar1;
  this_00 = (TGeometryParticlesImp<double,3,0> *)this->_padding_;
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState(this_00,uVar1,param_1,param_2);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)&(this_00->MWorldSpaceInflatedBounds).field_0x10) {
    uVar5 = ~uVar1 >> 0x1f;
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
  lVar2 = *(longlong *)&(this_00->MWorldSpaceInflatedBounds).field_0x8;
  dVar9 = *(double *)&param_3->field_0x8;
  dVar8 = *(double *)&param_3->field_0x10;
  dVar7 = *(double *)param_3;
  if (0.0 <= dVar9) {
    dVar9 = 0.0;
  }
  if (0.0 <= dVar8) {
    dVar8 = 0.0;
  }
  if (0.0 <= dVar7) {
    dVar7 = 0.0;
  }
  *(double *)(lVar2 + 8 + lVar6 * 0x30) = dVar9 + *(double *)(lVar2 + 8 + lVar6 * 0x30);
  *(double *)(lVar2 + 0x10 + lVar6 * 0x30) = dVar8 + *(double *)(lVar2 + 0x10 + lVar6 * 0x30);
  *(double *)(lVar2 + lVar6 * 0x30) = dVar7 + *(double *)(lVar2 + lVar6 * 0x30);
  dVar9 = *(double *)&param_3->field_0x8;
  dVar8 = *(double *)&param_3->field_0x10;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  dVar7 = *(double *)param_3;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  *(double *)(lVar2 + 0x20 + lVar6 * 0x30) = dVar9 + *(double *)(lVar2 + 0x20 + lVar6 * 0x30);
  *(double *)(lVar2 + 0x28 + lVar6 * 0x30) = dVar8 + *(double *)(lVar2 + 0x28 + lVar6 * 0x30);
  *(double *)(lVar2 + 0x18 + lVar6 * 0x30) = dVar7 + *(double *)(lVar2 + 0x18 + lVar6 * 0x30);
  return;
}

// GetConstraintGraphNode @ 143b67670

FPBDIslandParticle * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::GetConstraintGraphNode
          (TGeometryParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPBDIslandParticle *pFVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x1f0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPBDIslandParticle *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FPBDIslandParticle **)(*(longlong *)(lVar2 + 0x1e8) + (longlong)(int)uVar1 * 8);
}

// GetRf @ 143b687e0

TRotation<float,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetRf
          (TGeometryParticleHandleImp<double,3,1> *this,TRotation<float,3> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TRotation<float,3> *pTVar8;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TRotation<float,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 0x10);
  uVar5 = puVar1[1];
  *(undefined8 *)__return_storage_ptr__ = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  return __return_storage_ptr__;
}

// Sleeping @ 143b79d40

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::Sleeping
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  byte bVar1;
  bool bVar2;
  EObjectStateType EVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar4 = this_00;
  if (1 < bVar1) {
    pTVar4 = this;
  }
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar2 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar4);
    return bVar2;
  }
  pTVar4 = this_00;
  if (bVar1 != 0) {
    pTVar4 = this;
  }
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
      this_00 = pTVar4;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      return EVar3 == Sleeping;
    }
    return false;
  }
  return false;
}

// GetPayload<int> @ 143bbfa70

int __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetPayload<int>
          (TGeometryParticleHandleImp<double,3,1> *this,int param_1)

{
  return param_1;
}

// GetPayload<int> @ 143bbfa80

int __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::GetPayload<int>
          (TGeometryParticleHandleImp<double,3,0> *this,int param_1)

{
  return param_1;
}

// TGeometryParticleHandleImp<double,3,1> @ 143bdd2e0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::TGeometryParticleHandleImp<double,3,1>
          (TGeometryParticleHandleImp<double,3,1> *this,TGeometryParticlesImp<double,3,0> *param_1,
          int param_2)

{
  this->_padding_ = 0;
  *(int *)&this->_padding_ = param_2;
  if (param_1 != (TGeometryParticlesImp<double,3,0> *)0x0) {
    *(EParticleType *)((longlong)&this->_padding_ + 4) = param_1->MParticleType;
    this->_padding_ = (longlong)param_1;
    return this;
  }
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TGeometryParticleHandleImp<double,3,1> @ 143bdd310

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::TGeometryParticleHandleImp<double,3,1>
          (TGeometryParticleHandleImp<double,3,1> *this,
          TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> param_1,int param_2,
          int param_3,FGeometryParticleParameters *param_4)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  EParticleType EVar4;
  bool bVar5;
  FSpatialAccelerationIdx *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  bool *pbVar8;
  uint uVar9;
  TVector<double,3> local_48;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  this->_padding_ = (longlong)param_1.Ptr;
  *(int *)&this->_padding_ = param_2;
  if (param_1.Ptr == (TGeometryParticlesImp<double,3,0> *)0x0) {
    EVar4 = Static;
  }
  else {
    EVar4 = (param_1.Ptr)->MParticleType;
  }
  *(EParticleType *)((longlong)&this->_padding_ + 4) = EVar4;
  local_48._16_8_ = 0;
  this->HandleIdx = param_3;
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  SetX(this,&local_48,false);
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  SetR(this,(TRotation<double,3> *)&local_28,false);
  pFVar6 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  pFVar6->Bucket = 0;
  pFVar6->InnerIdx = 0;
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar9 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x208)) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x200)) = 0;
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar9 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x220)) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x218)) = 1;
  pbVar8 = TGeometryParticlesImp<double,3,0>::HasBounds
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *pbVar8 = false;
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar9 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x238)) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x230)) = 0;
  SetConstraintGraphNode(this,(FPBDIslandParticle *)0x0);
  return this;
}

// TGeometryParticleHandleImp<double,3,1> @ 143bdd4e0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::TGeometryParticleHandleImp<double,3,1>
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  SetConstraintGraphNode(this,(FPBDIslandParticle *)0x0);
  return this;
}

// ~TGeometryParticleHandleImp<double,3,1> @ 143be2830

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  TArrayCollection *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPBDIslandParticle *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  
  pFVar9 = GetConstraintGraphNode(this);
  if (pFVar9 != (FPBDIslandParticle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetConstraintGraphNode() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0x1fa,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = (uint)this->_padding_;
  lVar13 = this->_padding_;
  uVar10 = 0;
  if ((int)uVar8 < *(int *)(lVar13 + 0x1a8)) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(*(longlong *)(lVar13 + 0x1a0) + (longlong)(int)uVar8 * 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  this_00 = (TArrayCollection *)this->_padding_;
  iVar7 = (int)this->_padding_;
  if ((char)this_00[1].MSize == '\0') {
    TArrayCollection::RemoveAtSwapHelper(this_00,iVar7);
  }
  else {
    pFVar11 = (this_00->MArrays).AllocatorInstance.Data;
    iVar14 = (this_00->MArrays).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this_00->MArrays).ArrayNum != iVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar2) break;
      plVar3 = *(longlong **)pFVar11;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,iVar7,1);
      }
      pFVar11 = pFVar11 + 8;
    }
    iVar7 = this_00->MSize - iVar7;
    iVar14 = 1;
    if (iVar7 < 1) {
      iVar14 = iVar7;
    }
    this_00->MSize = this_00->MSize - iVar14;
  }
  *(int *)&this_00[1].field_0x1c = *(int *)&this_00[1].field_0x1c + 1;
  lVar13 = this->_padding_;
  uVar8 = (uint)this->_padding_;
  uVar12 = (ulonglong)(int)uVar8;
  if (uVar8 < *(uint *)(lVar13 + 0x18)) {
    if (*(char *)(lVar13 + 0x38) == '\0') {
      uVar10 = 0;
      if ((int)uVar8 < *(int *)(lVar13 + 0xa0)) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)(*(longlong *)(lVar13 + 0x98) + uVar12 * 8) + 8) = uVar8;
    }
    else {
      lVar15 = uVar12 * 8;
      do {
        uVar10 = (uint)uVar12;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar13 + 0xa0)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar12 = (ulonglong)(uVar10 + 1);
        plVar3 = (longlong *)(lVar15 + *(longlong *)(lVar13 + 0x98));
        lVar15 = lVar15 + 8;
        piVar1 = (int *)(*plVar3 + 8);
        *piVar1 = *piVar1 + -1;
        lVar13 = this->_padding_;
      } while (uVar10 + 1 < *(uint *)(lVar13 + 0x18));
    }
  }
  this->HandleIdx = -1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 7;
  FChaosVisualDebuggerTrace::InvalidateParticleMetadataFromCache(this);
  return;
}

// AddConstraintHandle @ 143bec4c0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::AddConstraintHandle
          (TGeometryParticleHandleImp<double,3,1> *this,FConstraintHandle *param_1)

{
  TGeometryParticlesImp<double,3,0>::AddConstraintHandle
            ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int *)&this->_padding_,param_1);
  return;
}

// AsTransient @ 143bef3b0

TGeometryParticleHandleImp<double,3,0> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::AsTransient
          (TGeometryParticleHandleImp<double,3,1> *this,
          TGeometryParticleHandleImp<double,3,0> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = this->_padding_;
  lVar2 = this->_padding_;
  __return_storage_ptr__->_padding_ = 0;
  *(int *)&__return_storage_ptr__->_padding_ = (int)lVar2;
  if (lVar1 != 0) {
    *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
         *(undefined1 *)(lVar1 + 0x70);
    __return_storage_ptr__->_padding_ = lVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  return __return_storage_ptr__;
}

// CastToGeometryCollection @ 143bf3dd0

TPBDGeometryCollectionParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::CastToGeometryCollection
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (5 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar1;
}

// ConstraintGraphIndex @ 143bfe5f0

int __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ConstraintGraphIndex
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  return -1;
}

// CreateParticleHandle @ 143c009c0

TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
 __cdecl Chaos::TGeometryParticleHandleImp<double,3,1>::CreateParticleHandle
                   (TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> param_1,int param_2,
                   int param_3,FGeometryParticleParameters *param_4)

{
  TGeometryParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  undefined4 in_register_00000014;
  TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> this_00;
  FGeometryParticleParameters *in_stack_00000028;
  
  this_00.Ptr._4_4_ = in_register_00000014;
  this_00.Ptr._0_4_ = param_2;
  this = ::operator_new(0x18);
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (this != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar1 = TGeometryParticleHandleImp<double,3,1>
                       (this,this_00,param_3,(int)param_4,in_stack_00000028);
  }
  (param_1.Ptr)->_padding_ = (longlong)pTVar1;
  TGeometryParticlesImp<double,3,0>::SetHandle(this_00.Ptr,param_3,pTVar1);
  return (TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          )(TGeometryParticleHandleImp<double,3,1> *)param_1.Ptr;
}

// DebugName @ 143c01650

TSharedPtr<FString,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::DebugName
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TSharedPtr<FString,1> *pTVar1;
  
  pTVar1 = TGeometryParticlesImp<double,3,0>::DebugName
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pTVar1;
}

// DynamicGeometry @ 143c02000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x27d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _DummyPtr = 0;
      atexit(`Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
         &`public:_class_TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::DynamicGeometry(void)const___ptr64'
          ::__l2::DummyPtr;
}

// EnabledDuringResim @ 143c02350

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::EnabledDuringResim
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x220)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (bool)*(undefined1 *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x218));
}

// GTGeometryParticle @ 143c04a90

TGeometryParticle<double,3> ** __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GTGeometryParticle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticle<double,3> **ppTVar1;
  
  ppTVar1 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return ppTVar1;
}

// GTGeometryParticle @ 143c04ab0

TGeometryParticle<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GTGeometryParticle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TGeometryParticle<double,3> **ppTVar1;
  
  ppTVar1 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return *ppTVar1;
}

// Geometry @ 143c04b20

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::Geometry
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TSerializablePtr<Chaos::FImplicitObject> TVar3;
  FImplicitObject *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x26e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TSerializablePtr<Chaos::FImplicitObject>)TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetHandleIdx @ 143c06a20

int __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetHandleIdx
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  return this->HandleIdx;
}

// GetX @ 143c08340

TVector<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::GetX(TGeometryParticleHandleImp<double,3,1> *this)

{
  TVector<double,3> *pTVar1;
  
  pTVar1 = TParticles<double,3>::GetX((TParticles<double,3> *)this->_padding_,(int)this->_padding_);
  return pTVar1;
}

// Handle @ 143c0a3a0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::Handle(TGeometryParticleHandleImp<double,3,1> *this)

{
  return this;
}

// Handle @ 143c0a3b0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::Handle(TGeometryParticleHandleImp<double,3,1> *this)

{
  return this;
}

// HasBounds @ 143c0a660

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::HasBounds
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  bool *pbVar1;
  
  pbVar1 = TGeometryParticlesImp<double,3,0>::HasBounds
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return *pbVar1;
}

// HasCollision @ 143c0a680

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::HasCollision
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  bool *pbVar1;
  
  pbVar1 = TGeometryParticlesImp<double,3,0>::HasCollision
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return *pbVar1;
}

// InitTransform @ 143c0ab00

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::InitTransform
          (TGeometryParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,
          TRotation<double,3> *param_2)

{
  SetX(this,param_1,false);
  SetR(this,param_2,false);
  return;
}

// IsInAllLists @ 143c0b200

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::IsInAllLists
          (TGeometryParticleHandleImp<double,3,1> *this,EGeometryParticleListMask param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x250)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (*(EGeometryParticleListMask *)(*(longlong *)(lVar2 + 0x248) + (longlong)(int)uVar1 * 4) &
         param_1) == param_1;
}

// IsInAnyList @ 143c0b290

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::IsInAnyList
          (TGeometryParticleHandleImp<double,3,1> *this,EGeometryParticleListMask param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x250)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (*(EGeometryParticleListMask *)(*(longlong *)(lVar2 + 0x248) + (longlong)(int)uVar1 * 4) &
         param_1) != None;
}

// IsInConstraintGraph @ 143c0b320

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::IsInConstraintGraph
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  FPBDIslandParticle *pFVar1;
  
  pFVar1 = GetConstraintGraphNode(this);
  return pFVar1 != (FPBDIslandParticle *)0x0;
}

// LightWeightDisabled @ 143c0b860

bool __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::LightWeightDisabled
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x238)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (bool)*(undefined1 *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x230));
}

// ListMask @ 143c0ba40

EGeometryParticleListMask __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ListMask
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EGeometryParticleListMask EVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x250)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  return *(EGeometryParticleListMask *)(*(longlong *)(lVar2 + 0x248) + (longlong)(int)uVar1 * 4);
}

// LockGeometry @ 143c0c020

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::LockGeometry
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uchar uVar1;
  FImplicitObjectUnion *this_00;
  
  this_00 = (FImplicitObjectUnion *)GetGeometry(this);
  if (this_00 != (FImplicitObjectUnion *)0x0) {
    uVar1 = FImplicitObject::GetType((FImplicitObject *)this_00);
    if ((uVar1 == '\x05') || (uVar1 == '\x0f')) {
      FImplicitObjectUnion::SetLockedRecursive(this_00,true);
      return;
    }
  }
  return;
}

// MergeGeometry @ 143c0c3c0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::MergeGeometry
          (TGeometryParticleHandleImp<double,3,1> *this,
          TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  FImplicitObjectUnion *this_00;
  
  if (param_1->ArrayNum != 0) {
    this_00 = (FImplicitObjectUnion *)GetGeometry(this);
    if (this_00 == (FImplicitObjectUnion *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2677745228101713811>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ParticleHandle.cpp"
                         ,0x6d,"CurrentGeometry != nullptr");
      if (!bVar4) {
        return;
      }
code_r0x000143c0c463:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = FImplicitObject::GetType((FImplicitObject *)this_00);
    if (uVar5 == '\x05') {
      if (((char)this_00->_padding_ != '\x05') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("T_DERIVED::StaticType() == Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                             ,0xc2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FImplicitObjectUnion::Combine(this_00,param_1);
      uVar1 = (uint)this->_padding_;
      lVar2 = this->_padding_;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x68)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*(longlong *)this->_padding_ + 0x10))
                ((longlong *)this->_padding_,(int)this->_padding_,
                 *(longlong *)(lVar2 + 0x60) + (longlong)(int)uVar1 * 8);
      FChaosVisualDebuggerTrace::InvalidateGeometryFromCache((FImplicitObject *)this_00);
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2677745228101713809>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ParticleHandle.cpp"
                         ,0x6f,"CurrentGeometry->GetType() == FImplicitObjectUnion::StaticType()");
      if (bVar4) goto code_r0x000143c0c463;
    }
  }
  return;
}

// ParticleCollisions @ 143c0ef20

FParticleCollisions * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ParticleCollisions
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  FParticleCollisions *pFVar1;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pFVar1;
}

// ParticleConstraints @ 143c0ef40

TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ParticleConstraints
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pTVar1;
}

// ParticleConstraints @ 143c0ef60

TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ParticleConstraints
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pTVar1;
}

// ParticleID @ 143c0ef90

FParticleID __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ParticleID
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  FParticleID *pFVar1;
  FParticleID in_RDX;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::ParticleID
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *(FParticleID *)in_RDX = *pFVar1;
  return in_RDX;
}

// PhysicsProxy @ 143c0f6c0

IPhysicsProxyBase * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pIVar1;
}

// R @ 143c0ff10

TRotation<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::R
          (TGeometryParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// R @ 143c0ffb0

TRotation<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::R
          (TGeometryParticleHandleImp<double,3,1> *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRotation<double,3> *pTVar7;
  
  uVar2 = (uint)this->_padding_;
  lVar3 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x10);
  *(double *)__return_storage_ptr__ = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar1;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// RemoveConstraintHandle @ 143c11ac0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::RemoveConstraintHandle
          (TGeometryParticleHandleImp<double,3,1> *this,FConstraintHandle *param_1)

{
  TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
            ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int *)&this->_padding_,param_1);
  return;
}

// RemoveShape @ 143c11cb0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::RemoveShape
          (TGeometryParticleHandleImp<double,3,1> *this,FPerShapeData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  FImplicitObject *pFVar5;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar6;
  FImplicitObjectUnion *this_00;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res18 [4];
  TArrayView<int_const_,int> local_38;
  
  pFVar5 = GetGeometry(this);
  if (pFVar5 == (FImplicitObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2677745228101713731>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ParticleHandle.cpp"
                       ,0xbd,"CurrentGeometry != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar6 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )TGeometryParticlesImp<double,3,0>::ShapesArray
                       ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
    local_res18[0] = 0;
    iVar8 = *(int *)((longlong)FVar6 + 0x10);
    if (0 < iVar8) {
      lVar10 = 0;
      do {
        uVar4 = 0;
        if ((int)local_res18[0] < iVar8) {
          uVar4 = ~local_res18[0] >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar7 = FVar6;
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar6 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    *)((longlong)FVar6 + 8);
        }
        if (param_1 == *(FPerShapeData **)(lVar10 + (longlong)FVar7)) {
          local_38.DataPtr = (int *)local_res18;
          local_38.ArrayNum = 1;
          this_00 = (FImplicitObjectUnion *)GetGeometry(this);
          if (this_00 == (FImplicitObjectUnion *)0x0) {
            return;
          }
          uVar3 = FImplicitObject::GetType((FImplicitObject *)this_00);
          if ((uVar3 != '\x05') && (uVar3 != '\x0f')) {
            return;
          }
          TGeometryParticlesImp<double,3,0>::RemoveShapesAtSortedIndices
                    ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_,
                     &local_38);
          FImplicitObjectUnion::RemoveAtSortedIndices(this_00,&local_38);
          FChaosVisualDebuggerTrace::InvalidateGeometryFromCache((FImplicitObject *)this_00);
          uVar4 = (uint)this->_padding_;
          lVar10 = this->_padding_;
          uVar9 = 0;
          if ((int)uVar4 < *(int *)(lVar10 + 0x68)) {
            uVar9 = ~uVar4 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(*(longlong *)this->_padding_ + 0x10))
                    ((longlong *)this->_padding_,(int)this->_padding_,
                     *(longlong *)(lVar10 + 0x60) + (longlong)(int)uVar4 * 8);
          return;
        }
        iVar8 = *(int *)((longlong)FVar6 + 0x10);
        local_res18[0] = local_res18[0] + 1;
        lVar10 = lVar10 + 8;
      } while ((int)local_res18[0] < iVar8);
    }
    FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(pFVar5);
  }
  return;
}

// RemoveShapesAtSortedIndices @ 143c11fb0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::RemoveShapesAtSortedIndices
          (TGeometryParticleHandleImp<double,3,1> *this,TArrayView<int_const_,int> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  uint uVar6;
  FImplicitObjectUnion *this_00;
  
  this_00 = (FImplicitObjectUnion *)GetGeometry(this);
  if (this_00 != (FImplicitObjectUnion *)0x0) {
    uVar4 = FImplicitObject::GetType((FImplicitObject *)this_00);
    if ((uVar4 == '\x05') || (uVar4 == '\x0f')) {
      TGeometryParticlesImp<double,3,0>::RemoveShapesAtSortedIndices
                ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_,param_1);
      FImplicitObjectUnion::RemoveAtSortedIndices(this_00,param_1);
      FChaosVisualDebuggerTrace::InvalidateGeometryFromCache((FImplicitObject *)this_00);
      uVar1 = (uint)this->_padding_;
      lVar2 = this->_padding_;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x68)) {
        uVar6 = ~uVar1 >> 0x1f;
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
      (**(code **)(*(longlong *)this->_padding_ + 0x10))
                ((longlong *)this->_padding_,(int)this->_padding_,
                 *(longlong *)(lVar2 + 0x60) + (longlong)(int)uVar1 * 8);
    }
  }
  return;
}

// ResimType @ 143c12960

EResimType __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ResimType
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EResimType EVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x208)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return *(EResimType *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x200));
}

// SetConstraintGraphIndex @ 143c15620

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphIndex
          (TGeometryParticleHandleImp<double,3,1> *this,int param_1)

{
  return;
}

// SetDebugName @ 143c15770

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetDebugName
          (TGeometryParticleHandleImp<double,3,1> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  pTVar4 = TGeometryParticlesImp<double,3,0>::DebugName
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  pTVar4->Object = pFVar2;
  (pTVar4->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetDynamicGeometry @ 143c15910

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetDynamicGeometry
          (TGeometryParticleHandleImp<double,3,1> *this,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x280,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetEnabledDuringResim @ 143c15c60

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetEnabledDuringResim
          (TGeometryParticleHandleImp<double,3,1> *this,bool param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x220)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(bool *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x218)) = param_1;
  return;
}

// SetGeometry @ 143c15f20

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetGeometry
          (TGeometryParticleHandleImp<double,3,1> *this,
          TRefCountPtr<Chaos::FImplicitObject> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c15f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x10))
            ((longlong *)this->_padding_,(int)this->_padding_,param_1);
  return;
}

// SetGeometry @ 143c15f40

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetGeometry
          (TGeometryParticleHandleImp<double,3,1> *this,
          TSerializablePtr<Chaos::FImplicitObject> param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x271,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetHasBounds @ 143c16150

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetHasBounds
          (TGeometryParticleHandleImp<double,3,1> *this,bool param_1)

{
  bool *pbVar1;
  
  pbVar1 = TGeometryParticlesImp<double,3,0>::HasBounds
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *pbVar1 = param_1;
  return;
}

// SetHasCollision @ 143c16180

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetHasCollision
          (TGeometryParticleHandleImp<double,3,1> *this,bool param_1)

{
  bool *pbVar1;
  
  pbVar1 = TGeometryParticlesImp<double,3,0>::HasCollision
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *pbVar1 = param_1;
  return;
}

// SetLightWeightDisabled @ 143c16c30

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetLightWeightDisabled
          (TGeometryParticleHandleImp<double,3,1> *this,bool param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x238)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(bool *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x230)) = param_1;
  return;
}

// SetLocalBounds @ 143c16e90

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetLocalBounds
          (TGeometryParticleHandleImp<double,3,1> *this,TAABB<double,3> *param_1)

{
  undefined8 uVar1;
  TAABB<double,3> *pTVar2;
  
  pTVar2 = TGeometryParticlesImp<double,3,0>::LocalBounds
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&pTVar2->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(pTVar2->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(pTVar2->MMin).field_0x10 = *(undefined8 *)&(param_1->MMin).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&pTVar2->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined8 *)&(pTVar2->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(pTVar2->MMax).field_0x10 = *(undefined8 *)&(param_1->MMax).field_0x10;
  return;
}

// SetNonFrequentData @ 143c17440

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetNonFrequentData
          (TGeometryParticleHandleImp<double,3,1> *this,FParticleNonFrequentData *param_1)

{
  longlong *plVar1;
  FSpatialAccelerationIdx FVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FString *pFVar5;
  FParticleID FVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TSharedPtr<FString,1> *pTVar9;
  FUniqueIdx *pFVar10;
  FSpatialAccelerationIdx *pFVar11;
  FParticleID *pFVar12;
  FImplicitObject *local_res10;
  
  pTVar9 = TGeometryParticlesImp<double,3,0>::DebugName
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  pTVar4 = (param_1->MDebugName).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->MDebugName).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pTVar9->SharedReferenceCount).ReferenceController;
  pTVar9->Object = pFVar5;
  (pTVar9->SharedReferenceCount).ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_res10 = (param_1->MGeometry).Reference;
  if (local_res10 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&local_res10->_padding_ = (int)local_res10->_padding_ + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x10))
            ((longlong *)this->_padding_,(int)this->_padding_,&local_res10);
  if (local_res10 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &local_res10->_padding_;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (*(int *)((longlong)&local_res10->_padding_ + 4) == 0)) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
  }
  iVar3 = (param_1->MUniqueIdx).Idx;
  pFVar10 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  pFVar10->Idx = iVar3;
  FVar2 = param_1->MSpatialIdx;
  pFVar11 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                      ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *pFVar11 = FVar2;
  if (((param_1->MParticleID).GlobalID != -1) || ((param_1->MParticleID).LocalID != -1)) {
    FVar6 = param_1->MParticleID;
    pFVar12 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
    *pFVar12 = FVar6;
  }
  return;
}

// SetParticleID @ 143c18260

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetParticleID
          (TGeometryParticleHandleImp<double,3,1> *this,FParticleID *param_1)

{
  FParticleID FVar1;
  FParticleID *pFVar2;
  
  if ((param_1->GlobalID != -1) || (param_1->LocalID != -1)) {
    FVar1 = *param_1;
    pFVar2 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
    *pFVar2 = FVar1;
  }
  return;
}

// SetResimType @ 143c188f0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetResimType
          (TGeometryParticleHandleImp<double,3,1> *this,EResimType param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x208)) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(EResimType *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x200)) = param_1;
  return;
}

// SetSharedGeometry @ 143c19510

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetSharedGeometry
          (TGeometryParticleHandleImp<double,3,1> *this,
          TSharedPtr<Chaos::FImplicitObject_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x277,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSpatialIdx @ 143c197a0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetSpatialIdx
          (TGeometryParticleHandleImp<double,3,1> *this,FSpatialAccelerationIdx param_1)

{
  FSpatialAccelerationIdx *pFVar1;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *pFVar1 = param_1;
  return;
}

// SetSyncState @ 143c197d0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetSyncState
          (TGeometryParticleHandleImp<double,3,1> *this,ESyncState param_1)

{
  ESyncState *pEVar1;
  
  pEVar1 = TGeometryParticlesImp<double,3,0>::SyncState
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *pEVar1 = param_1;
  return;
}

// SetUniqueIdx @ 143c19a20

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetUniqueIdx
          (TGeometryParticleHandleImp<double,3,1> *this,FUniqueIdx param_1,bool param_2)

{
  FUniqueIdx *pFVar1;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  pFVar1->Idx = param_1.Idx;
  return;
}

// SetXR @ 143c1a2f0

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SetXR
          (TGeometryParticleHandleImp<double,3,1> *this,FParticlePositionRotation *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  TVector<double,3> *pTVar9;
  uint uVar10;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar11;
  double local_38;
  double local_30;
  undefined1 local_28 [16];
  
  SetX(this,&param_1->MX,false);
  local_38 = (double)*(float *)&param_1->MR;
  local_30 = (double)*(float *)&(param_1->MR).field_0x4;
  uVar2 = *(undefined8 *)&(param_1->MR).field_0x8;
  dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
  local_28._8_4_ = SUB84(dVar6,0);
  local_28._0_8_ = (double)(float)uVar2;
  local_28._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  SetR(this,(TRotation<double,3> *)&local_38,false);
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->_padding_ + 4)) {
    this_00 = this;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar9 = TParticles<double,3>::GetX
                       ((TParticles<double,3> *)this->_padding_,(int)this->_padding_);
    TPBDRigidParticleHandleImp<double,3,1>::SetP
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,pTVar9);
    uVar11 = (uint)this->_padding_;
    lVar3 = this->_padding_;
    uVar10 = 0;
    if ((int)uVar11 < *(int *)(lVar3 + 0x50)) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = (uint)this_00->_padding_;
    lVar4 = this_00->_padding_;
    puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar11 * 0x10);
    uVar2 = *puVar1;
    uVar7 = puVar1[1];
    uVar11 = 0;
    if ((int)uVar10 < *(int *)(lVar4 + 0x568)) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x560) + (longlong)(int)uVar10 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar7;
  }
  return;
}

// ShapesArray @ 143c1a490

TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::ShapesArray
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  pTVar1 = TGeometryParticlesImp<double,3,0>::ShapesArray
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pTVar1;
}

// SharedGeometry @ 143c1a4b0

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometry
          (TGeometryParticleHandleImp<double,3,1> *this,
          TSharedPtr<Chaos::FImplicitObject_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Chaos::FImplicitObject_const_,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x274,L"");
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

// SharedGeometryLowLevel @ 143c1a550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Chaos::FImplicitObject_const_,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Chaos::FImplicitObject_const_,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                     ,0x27a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<Chaos::FImplicitObject_const_,1> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _DummyPtr = 0;
      DAT_1550711a0 = 0;
      atexit(`Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel'::__l2::
             _dynamic_atexit_destructor_for__DummyPtr__);
      _Init_thread_footer(&`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
             &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel(void)const___ptr64'
              ::__l2::DummyPtr;
    }
  }
  return (TSharedPtr<Chaos::FImplicitObject_const_,1> *)
         &`public:_class_TSharedPtr<Chaos::FImplicitObject_const_,1>_const&___ptr64___cdecl_Chaos::TGeometryParticleHandleImp<double,3,1>::SharedGeometryLowLevel(void)const___ptr64'
          ::__l2::DummyPtr;
}

// SpatialIdx @ 143c1aa60

FSpatialAccelerationIdx __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SpatialIdx
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  FSpatialAccelerationIdx *pFVar1;
  FSpatialAccelerationIdx *in_RDX;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *in_RDX = *pFVar1;
  return SUB82(in_RDX,0);
}

// StaticType @ 143c1aa90

EParticleType __cdecl Chaos::TGeometryParticleHandleImp<double,3,1>::StaticType(void)

{
  return Static;
}

// SyncState @ 143c1ae40

ESyncState __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::SyncState
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  ESyncState *pEVar1;
  
  pEVar1 = TGeometryParticlesImp<double,3,0>::SyncState
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return *pEVar1;
}

// UniqueIdx @ 143c1b4d0

FUniqueIdx __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::UniqueIdx
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  FUniqueIdx *pFVar1;
  int *in_RDX;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  *in_RDX = pFVar1->Idx;
  return (FUniqueIdx)(int)in_RDX;
}

// UpdateWorldSpaceState @ 143c1d140

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::UpdateWorldSpaceState
          (TGeometryParticleHandleImp<double,3,1> *this,TRigidTransform<double,3> *param_1,
          TVector<double,3> *param_2)

{
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_,param_1,
             param_2);
  return;
}

// UpdateWorldSpaceStateSwept @ 143c1d160

void __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::UpdateWorldSpaceStateSwept
          (TGeometryParticleHandleImp<double,3,1> *this,TRigidTransform<double,3> *param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  uint uVar1;
  TGeometryParticlesImp<double,3,0> *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = (uint)this->_padding_;
  lVar6 = (longlong)(int)uVar1;
  this_00 = (TGeometryParticlesImp<double,3,0> *)this->_padding_;
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState(this_00,uVar1,param_1,param_2);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)&(this_00->MWorldSpaceInflatedBounds).field_0x10) {
    uVar5 = ~uVar1 >> 0x1f;
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
  lVar2 = *(longlong *)&(this_00->MWorldSpaceInflatedBounds).field_0x8;
  dVar9 = *(double *)&param_3->field_0x8;
  dVar8 = *(double *)&param_3->field_0x10;
  dVar7 = *(double *)param_3;
  if (0.0 <= dVar9) {
    dVar9 = 0.0;
  }
  if (0.0 <= dVar8) {
    dVar8 = 0.0;
  }
  if (0.0 <= dVar7) {
    dVar7 = 0.0;
  }
  *(double *)(lVar2 + 8 + lVar6 * 0x30) = dVar9 + *(double *)(lVar2 + 8 + lVar6 * 0x30);
  *(double *)(lVar2 + 0x10 + lVar6 * 0x30) = dVar8 + *(double *)(lVar2 + 0x10 + lVar6 * 0x30);
  *(double *)(lVar2 + lVar6 * 0x30) = dVar7 + *(double *)(lVar2 + lVar6 * 0x30);
  dVar9 = *(double *)&param_3->field_0x8;
  dVar8 = *(double *)&param_3->field_0x10;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  dVar7 = *(double *)param_3;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  *(double *)(lVar2 + 0x20 + lVar6 * 0x30) = dVar9 + *(double *)(lVar2 + 0x20 + lVar6 * 0x30);
  *(double *)(lVar2 + 0x28 + lVar6 * 0x30) = dVar8 + *(double *)(lVar2 + 0x28 + lVar6 * 0x30);
  *(double *)(lVar2 + 0x18 + lVar6 * 0x30) = dVar7 + *(double *)(lVar2 + 0x18 + lVar6 * 0x30);
  return;
}

// WeakParticleHandle @ 143c1dc90

FWeakParticleHandle * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::WeakParticleHandle
          (TGeometryParticleHandleImp<double,3,1> *this)

{
  FWeakParticleHandle *pFVar1;
  
  pFVar1 = TGeometryParticlesImp<double,3,0>::WeakParticleHandle
                     ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_);
  return pFVar1;
}

// X @ 143c1e000

TVector<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::X(TGeometryParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x30)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<double,3> *)(*(longlong *)(lVar2 + 0x28) + (longlong)(int)uVar1 * 0x18);
}

// X @ 143c1e080

TVector<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::X(TGeometryParticleHandleImp<double,3,1> *this)

{
  TVector<double,3> *pTVar1;
  
  pTVar1 = TParticles<double,3>::GetX((TParticles<double,3> *)this->_padding_,(int)this->_padding_);
  return pTVar1;
}

// CastToClustered @ 143d461a0

TPBDRigidClusteredParticleHandleImp<double,3,0> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::CastToClustered
          (TGeometryParticleHandleImp<double,3,0> *this)

{
  TGeometryParticleHandleImp<double,3,0> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
  if (2 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidClusteredParticleHandleImp<double,3,0> *)pTVar1;
}

// CastToRigidParticle @ 143d461c0

TPBDRigidParticleHandleImp<double,3,0> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::CastToRigidParticle
          (TGeometryParticleHandleImp<double,3,0> *this)

{
  TGeometryParticleHandleImp<double,3,0> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
  if (1 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidParticleHandleImp<double,3,0> *)pTVar1;
}

// CastToRigidParticle @ 143d461e0

TPBDRigidParticleHandleImp<double,3,0> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::CastToRigidParticle
          (TGeometryParticleHandleImp<double,3,0> *this)

{
  TGeometryParticleHandleImp<double,3,0> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
  if (1 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidParticleHandleImp<double,3,0> *)pTVar1;
}

// Handle @ 143d57ef0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::Handle(TGeometryParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return *(TGeometryParticleHandleImp<double,3,1> **)
          (*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8);
}

// Handle @ 143d57f70

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::Handle(TGeometryParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return *(TGeometryParticleHandleImp<double,3,1> **)
          (*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8);
}

// CastToClustered @ 14407f3a0

TPBDRigidClusteredParticleHandleImp<double,3,0> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,0>::CastToClustered
          (TGeometryParticleHandleImp<double,3,0> *this)

{
  TGeometryParticleHandleImp<double,3,0> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
  if (2 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar1 = this;
  }
  return (TPBDRigidClusteredParticleHandleImp<double,3,0> *)pTVar1;
}

// AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_> @ 1440bfe00

TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::
AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_>
          (TGeometryParticleHandleImp<double,3,1> *this,
          TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *pTVar5;
  
  uVar1 = this->HandleIdx;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)&param_1->field_0x10) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *)
         (*(longlong *)&param_1->field_0x8 + (longlong)(int)uVar1 * 8);
}

