// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 26

// FGenericParticlePairMidPhase @ 1439c0740

FGenericParticlePairMidPhase * __thiscall
Chaos::FGenericParticlePairMidPhase::FGenericParticlePairMidPhase
          (FGenericParticlePairMidPhase *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7FGenericParticlePairMidPhase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)&this->Constraints = 0;
  *(undefined8 *)&(this->Constraints).field_0x8 = 0;
  *(undefined8 *)&(this->Constraints).field_0x20 = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = -1;
  *(undefined4 *)&(this->Constraints).field_0x28 = 0;
  *(undefined4 *)&(this->Constraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->Constraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Constraints).field_0x34 = 0;
  *(undefined8 *)&(this->Constraints).field_0x40 = 0;
  *(undefined4 *)&(this->Constraints).field_0x48 = 0;
  (this->NewConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewConstraints).ArrayNum = 0;
  (this->NewConstraints).ArrayMax = 0;
  return this;
}

// ~FGenericParticlePairMidPhase @ 1439c0df0

void __thiscall
Chaos::FGenericParticlePairMidPhase::~FGenericParticlePairMidPhase
          (FGenericParticlePairMidPhase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FGenericParticlePairMidPhase_Chaos__6B_;
  pFVar1 = (this->NewConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Constraints).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Constraints).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Constraints);
  this->_padding_ = (longlong)&___7FParticlePairMidPhase_Chaos__6B_;
  return;
}

// operator() @ 1439c2a80

void __thiscall
`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitHierarchy'::__l2::<lambda_1>::
operator()(void *this,FImplicitObject *param_1,TRigidTransform<double,3> *param_2,int param_3,
          int param_4,int param_5)

{
  uint uVar1;
  FShapeInstance *pFVar2;
  FCollisionFilterData *pFVar3;
  longlong lVar4;
  FCollisionData *this_00;
  
  pFVar2 = Chaos::GetShapeInstance
                     (*(TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        **)((longlong)this + 0x20),param_3,
                      (FConvexOptimizer *)**(undefined8 **)((longlong)this + 0x40));
  if (pFVar2 != (FShapeInstance *)0x0) {
    uVar1 = (uint)pFVar2->_padding_ & 3;
    lVar4 = 0x79;
    if (uVar1 != 0) {
      lVar4 = 0x71;
    }
    if ((*(byte *)((longlong)&pFVar2->_padding_ + lVar4) & 1) == 0) {
      return;
    }
    this_00 = (FCollisionData *)&(pFVar2->CollisionData).QueryData.Word2;
    if (uVar1 != 0) {
      this_00 = &pFVar2->CollisionData;
    }
    pFVar3 = Chaos::FCollisionData::GetSimData(this_00);
    if ((((pFVar3->Word0 == 0) && (pFVar3->Word1 == 0)) && (pFVar3->Word2 == 0)) &&
       (pFVar3->Word3 == 0)) {
      return;
    }
  }
  Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitLeaf
            (*(FGenericParticlePairMidPhase **)this,
             *(TGeometryParticleHandleImp<double,3,1> **)((longlong)this + 8),
             *(FImplicitBVH **)((longlong)this + 0x10),
             *(TGeometryParticleHandleImp<double,3,1> **)((longlong)this + 0x18),param_1,pFVar2,
             param_2,param_5,*(double *)((longlong)this + 0x28),*(double *)((longlong)this + 0x30),
             *(FCollisionContext **)((longlong)this + 0x38));
  return;
}

// operator() @ 1439c2b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitLeaf'::__l2::<lambda_1>::
operator()(void *this,FImplicitObject *param_1,TRigidTransform<float,3> *param_2,
          TAABB<float,3> *param_3,int param_4,int param_5)

{
  FShapeInstance *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FCollisionFilterData *pFVar6;
  uint uVar7;
  uint uVar8;
  FCollisionData *this_00;
  undefined1 auStackY_1f8 [32];
  TRigidTransform<double,3> local_168;
  TRigidTransform<double,3> local_108;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  lVar5 = *(longlong *)((longlong)this + 0x10);
  if ((param_4 < 0) || (bVar4 = true, *(int *)(lVar5 + 0x10) <= param_4)) {
    bVar4 = false;
  }
  uVar8 = 0;
  if (bVar4) {
    uVar8 = param_4;
  }
  uVar7 = 0;
  if ((int)uVar8 < *(int *)(lVar5 + 0x10)) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(longlong *)(lVar5 + 8) != 0) {
    lVar5 = *(longlong *)(lVar5 + 8);
  }
  pFVar1 = *(FShapeInstance **)(lVar5 + (longlong)(int)uVar8 * 8);
  if (pFVar1 != (FShapeInstance *)0x0) {
    uVar8 = (uint)pFVar1->_padding_ & 3;
    lVar5 = 0x79;
    if (uVar8 != 0) {
      lVar5 = 0x71;
    }
    if ((*(byte *)((longlong)&pFVar1->_padding_ + lVar5) & 1) == 0) {
      return;
    }
    this_00 = (FCollisionData *)&(pFVar1->CollisionData).QueryData.Word2;
    if (uVar8 != 0) {
      this_00 = &pFVar1->CollisionData;
    }
    pFVar6 = Chaos::FCollisionData::GetSimData(this_00);
    if ((((pFVar6->Word0 == 0) && (pFVar6->Word1 == 0)) && (pFVar6->Word2 == 0)) &&
       (pFVar6->Word3 == 0)) {
      return;
    }
  }
  puVar2 = *(undefined8 **)((longlong)this + 0x38);
  local_78 = (double)*(float *)&param_2->field_0x18;
  local_98._8_4_ = SUB84((double)*(float *)&param_2->field_0xc,0);
  local_98._0_8_ = (double)*(float *)&param_2->field_0x8;
  local_98._12_4_ = (int)((ulonglong)(double)*(float *)&param_2->field_0xc >> 0x20);
  local_a8._8_4_ = SUB84((double)*(float *)&param_2->field_0x4,0);
  local_a8._0_8_ = (double)*(float *)param_2;
  local_a8._12_4_ = (int)((ulonglong)(double)*(float *)&param_2->field_0x4 >> 0x20);
  uStack_70 = 0;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_00000000000000003ff0000000000000;
  uStack_50 = _UNK_150689518;
  local_88._8_4_ = SUB84((double)*(float *)&param_2->field_0x14,0);
  local_88._0_8_ = (double)*(float *)&param_2->field_0x10;
  local_88._12_4_ = (int)((ulonglong)(double)*(float *)&param_2->field_0x14 >> 0x20);
  local_168._0_8_ = *puVar2;
  local_168._8_8_ = puVar2[1];
  local_168._16_8_ = puVar2[2];
  local_168._24_8_ = puVar2[3];
  local_168._32_8_ = puVar2[4];
  local_168._40_8_ = puVar2[5];
  local_168._48_8_ = puVar2[6];
  local_168._56_8_ = puVar2[7];
  local_168._64_8_ = puVar2[8];
  local_168._72_8_ = puVar2[9];
  local_168._80_8_ = puVar2[10];
  local_168._88_8_ = puVar2[0xb];
  puVar2 = *(undefined8 **)((longlong)this + 0x18);
  local_108._0_8_ = *puVar2;
  local_108._8_8_ = puVar2[1];
  local_108._16_8_ = puVar2[2];
  local_108._24_8_ = puVar2[3];
  local_108._32_8_ = puVar2[4];
  local_108._40_8_ = puVar2[5];
  local_108._64_8_ = puVar2[8];
  local_108._72_8_ = puVar2[9];
  local_108._48_8_ = puVar2[6];
  local_108._56_8_ = puVar2[7];
  local_108._80_8_ = puVar2[10];
  local_108._88_8_ = puVar2[0xb];
  Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitLeafImplicitLeaf
            (*(FGenericParticlePairMidPhase **)this,
             *(TGeometryParticleHandleImp<double,3,1> **)((longlong)this + 8),param_1,pFVar1,
             &local_108,(TRigidTransform<double,3> *)local_a8,param_5,
             *(TGeometryParticleHandleImp<double,3,1> **)((longlong)this + 0x20),
             *(FImplicitObject **)((longlong)this + 0x28),
             *(FShapeInstance **)((longlong)this + 0x30),&local_168,
             *(TRigidTransform<double,3> **)((longlong)this + 0x40),*(int *)((longlong)this + 0x48),
             *(double *)((longlong)this + 0x50),*(double *)((longlong)this + 0x58),
             *(FCollisionContext **)((longlong)this + 0x60));
  return;
}

// operator() @ 1439c2e20

void __thiscall
`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2::
<lambda_1>::operator()
          (void *this,FImplicitObject *param_1,TRigidTransform<double,3> *param_2,int param_3,
          int param_4,int param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  FShapeInstance *pFVar7;
  FCollisionFilterData *pFVar8;
  TAABB<double,3> *pTVar9;
  longlong lVar10;
  FCollisionData *this_00;
  code *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  FImplicitObject *local_f8;
  FShapeInstance *local_f0;
  undefined8 local_e8;
  TRigidTransform<double,3> *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  TAABB<double,3> local_98;
  TAABB<double,3> local_68;
  TAABB<double,3> local_38;
  
  pFVar7 = Chaos::GetShapeInstance
                     (*(TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        **)((longlong)this + 0x10),param_3,
                      (FConvexOptimizer *)**(undefined8 **)((longlong)this + 0x60));
  if (pFVar7 != (FShapeInstance *)0x0) {
    uVar6 = (uint)pFVar7->_padding_ & 3;
    lVar10 = 0x79;
    if (uVar6 != 0) {
      lVar10 = 0x71;
    }
    if ((*(byte *)((longlong)&pFVar7->_padding_ + lVar10) & 1) == 0) {
      return;
    }
    this_00 = (FCollisionData *)&(pFVar7->CollisionData).QueryData.Word2;
    if (uVar6 != 0) {
      this_00 = &pFVar7->CollisionData;
    }
    pFVar8 = Chaos::FCollisionData::GetSimData(this_00);
    if ((((pFVar8->Word0 == 0) && (pFVar8->Word1 == 0)) && (pFVar8->Word2 == 0)) &&
       (pFVar8->Word3 == 0)) {
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0x98))(param_1,&local_68,param_2);
  pTVar9 = Chaos::TAABB<double,3>::TransformedAABB
                     (&local_68,&local_38,*(TRigidTransform<double,3> **)((longlong)this + 0x40));
  dVar1 = *(double *)((longlong)this + 0x48);
  dVar3 = *(double *)&(pTVar9->MMin).field_0x8 - dVar1;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = *(double *)&pTVar9->MMin - dVar1;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&pTVar9->MMin = auVar2;
  *(double *)&(pTVar9->MMin).field_0x10 = *(double *)&(pTVar9->MMin).field_0x10 - dVar1;
  dVar5 = *(double *)&(pTVar9->MMax).field_0x8 + dVar1;
  dVar3 = *(double *)&(pTVar9->MMax).field_0x10;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = *(double *)&pTVar9->MMax + dVar1;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&pTVar9->MMax = auVar4;
  *(double *)&(pTVar9->MMax).field_0x10 = dVar1 + dVar3;
  local_98.MMin._0_8_ = *(undefined8 *)&pTVar9->MMin;
  local_98.MMin._8_8_ = *(undefined8 *)&(pTVar9->MMin).field_0x8;
  local_a0 = *(undefined8 **)((longlong)this + 0x68);
  local_98.MMin._16_8_ = *(undefined8 *)&(pTVar9->MMin).field_0x10;
  local_98.MMax._0_8_ = *(undefined8 *)&pTVar9->MMax;
  local_98.MMax._8_8_ = *(undefined8 *)&(pTVar9->MMax).field_0x8;
  local_98.MMax._16_8_ = *(undefined8 *)&(pTVar9->MMax).field_0x10;
  local_108 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x48);
  uStack_b0 = *(undefined8 *)((longlong)this + 0x50);
  local_100 = *(undefined8 *)((longlong)this + 8);
  local_e8 = *(undefined8 *)((longlong)this + 0x18);
  local_d8 = param_5;
  local_d0 = *(undefined8 *)((longlong)this + 0x20);
  local_c8 = *(undefined8 *)((longlong)this + 0x38);
  local_c0 = *(undefined8 *)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x58);
  local_110 = &local_108;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<``Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
              ::Call;
  local_f8 = param_1;
  local_f0 = pFVar7;
  local_e0 = param_2;
  Chaos::Private::VisitOverlappingObjects
            ((FConvexOptimizer *)*local_a0,*(FImplicitObject **)((longlong)this + 0x30),&local_98,
             (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
              *)&local_118);
  return;
}

// BuildDetectorsImpl @ 1439c6aa0

void __thiscall
Chaos::FGenericParticlePairMidPhase::BuildDetectorsImpl(FGenericParticlePairMidPhase *this)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObject *pFVar3;
  
  pFVar3 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                     ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
  if (pFVar3 == (FImplicitObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particle0->GetGeometry() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                       ,0x518,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                     ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
  if (pFVar3 == (FImplicitObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particle1->GetGeometry() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                       ,0x519,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CreateConstraint @ 1439c8fd0

FPBDCollisionConstraint * __thiscall
Chaos::FGenericParticlePairMidPhase::CreateConstraint
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitObject *param_2,FPerShapeData *param_3,FBVHParticles *param_4,
          TRigidTransform<double,3> *param_5,TGeometryParticleHandleImp<double,3,1> *param_6,
          FImplicitObject *param_7,FPerShapeData *param_8,FBVHParticles *param_9,
          TRigidTransform<double,3> *param_10,FParticlePairMidPhaseCollisionKey *param_11,
          FCollisionSortKeyNonHashed *param_12,double param_13,EContactShapesType param_14,
          bool param_15,FCollisionContext *param_16)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FCollisionShapePairKey_u_0 FVar4;
  FCollisionContext *pFVar5;
  bool bVar6;
  FPBDCollisionConstraint *pFVar7;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  local_28;
  FCollisionSortKeyNonHashed **local_18;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  *local_10;
  
  pFVar5 = param_16;
  Chaos::Private::FCollisionContextAllocator::CreateConstraint
            (param_16->Allocator,&local_28,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,param_10,param_13,param_15,param_14);
  iVar2 = pFVar5->Allocator->CurrentEpoch;
  ((local_28.Ptr)->ContainerCookie).MidPhase = (FParticlePairMidPhase *)this;
  ((local_28.Ptr)->ContainerCookie).bIsMultiShapePair = 1;
  ((local_28.Ptr)->ContainerCookie).CreationEpoch = iVar2;
  FVar4 = (param_12->ShapePairKey).field0_0x0;
  ((local_28.Ptr)->CollisionSortKey).ParticlePairKey.Key = (param_12->ParticlePairKey).Key;
  ((local_28.Ptr)->CollisionSortKey).ShapePairKey.field0_0x0 = FVar4;
  param_12 = *(FCollisionSortKeyNonHashed **)&param_11->field0_0x0;
  local_18 = &param_12;
  local_10 = &local_28;
  TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_&&,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_&&>_>
            ((TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
              *)&this->Constraints,
             (TPairInitializer<unsigned___int64_&&,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_&&>
              *)&param_16,(bool *)&local_18);
  pFVar7 = *(FPBDCollisionConstraint **)
            ((longlong)(int)param_16 * 0x20 + 0x10 + *(longlong *)&this->Constraints);
  if (local_28.Ptr != (FPBDCollisionConstraint *)0x0) {
    if ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_28._padding_ ==
        (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pool != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x249,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPBDCollisionConstraint *)(*pcVar3)();
        return pFVar7;
      }
    }
    TObjectPool<Chaos::FPBDCollisionConstraint>::Free
              ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_28._padding_,local_28.Ptr);
  }
  return pFVar7;
}

// DoBoundsOverlap @ 1439cb020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FGenericParticlePairMidPhase::DoBoundsOverlap
          (FGenericParticlePairMidPhase *this,FImplicitObject *param_1,
          TRigidTransform<double,3> *param_2,TRigidTransform<double,3> *param_3,
          FImplicitObject *param_4,TRigidTransform<double,3> *param_5,
          TRigidTransform<double,3> *param_6,FImplicitBoundsTestFlags param_7,float param_8,
          double param_9)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStackY_228 [32];
  TVector<float,3> local_1f8;
  double local_1e8 [12];
  TTransform<double> local_188;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_188.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_188.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_188.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_188.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_188,(TTransform<double> *)param_3,(TTransform<double> *)param_2);
  local_128 = local_188.Rotation.XY.m128d_f64[0];
  dStack_120 = local_188.Rotation.XY.m128d_f64[1];
  local_108 = local_188.Translation.XY.m128d_f64[0];
  dStack_100 = local_188.Translation.XY.m128d_f64[1];
  local_e8 = local_188.Scale3D.XY.m128d_f64[0];
  dStack_e0 = local_188.Scale3D.XY.m128d_f64[1];
  local_118 = local_188.Rotation.ZW.m128d_f64[0];
  dStack_110 = local_188.Rotation.ZW.m128d_f64[1];
  local_188.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_f8 = local_188.Translation.ZW.m128d_f64[0];
  dStack_f0 = local_188.Translation.ZW.m128d_f64[1];
  local_d8 = local_188.Scale3D.ZW.m128d_f64[0];
  dStack_d0 = local_188.Scale3D.ZW.m128d_f64[1];
  local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_188.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_188.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_188.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_188,(TTransform<double> *)param_6,(TTransform<double> *)param_5);
  local_c8._0_8_ = local_188.Rotation.XY.m128d_f64[0];
  local_c8._8_8_ = local_188.Rotation.XY.m128d_f64[1];
  local_b8 = local_188.Rotation.ZW.m128d_f64[0];
  dStack_b0 = local_188.Rotation.ZW.m128d_f64[1];
  local_a8 = local_188.Translation.XY.m128d_f64[0];
  dStack_a0 = local_188.Translation.XY.m128d_f64[1];
  local_98 = local_188.Translation.ZW.m128d_f64[0];
  dStack_90 = local_188.Translation.ZW.m128d_f64[1];
  local_88 = local_188.Scale3D.XY.m128d_f64[0]._0_4_;
  uStack_84 = local_188.Scale3D.XY.m128d_f64[0]._4_4_;
  uStack_80 = local_188.Scale3D.XY.m128d_f64[1]._0_4_;
  uStack_7c = local_188.Scale3D.XY.m128d_f64[1]._4_4_;
  local_78 = local_188.Scale3D.ZW.m128d_f64[0]._0_4_;
  uStack_74 = local_188.Scale3D.ZW.m128d_f64[0]._4_4_;
  uStack_70 = local_188.Scale3D.ZW.m128d_f64[1]._0_4_;
  uStack_6c = local_188.Scale3D.ZW.m128d_f64[1]._4_4_;
  pauVar8 = (undefined1 (*) [16])
            (**(code **)(param_1->_padding_ + 0x98))
                      (param_1,&local_188,(TRigidTransform<double,3> *)&local_128);
  dVar4 = *(double *)(*pauVar8 + 8) - param_9;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = *(double *)*pauVar8 - param_9;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *pauVar8 = auVar2;
  *(double *)pauVar8[1] = *(double *)pauVar8[1] - param_9;
  dVar4 = *(double *)pauVar8[2] + param_9;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = *(double *)(pauVar8[1] + 8) + param_9;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(pauVar8[1] + 8) = auVar3;
  *(double *)(pauVar8[2] + 8) = param_9 + *(double *)(pauVar8[2] + 8);
  local_1e8[8] = *(double *)pauVar8[1];
  dVar4 = *(double *)*pauVar8;
  dVar10 = *(double *)(*pauVar8 + 8);
  dVar5 = *(double *)(pauVar8[1] + 8);
  dVar6 = *(double *)pauVar8[2];
  local_1e8[0xb] = *(double *)(pauVar8[2] + 8);
  local_1e8[6] = dVar4;
  local_1e8[7] = dVar10;
  local_1e8[9] = dVar5;
  local_1e8[10] = dVar6;
  (**(code **)(param_4->_padding_ + 0x98))(param_4,local_1e8,local_c8);
  if ((param_7.Bits & 1) != 0) {
    lVar9 = 0;
    do {
      dVar11 = *(double *)((longlong)local_1e8 + lVar9 + 0x30);
      pdVar1 = (double *)((longlong)local_1e8 + lVar9 + 0x18);
      if ((*pdVar1 <= dVar11 && dVar11 != *pdVar1) ||
         (*(double *)((longlong)local_1e8 + lVar9 + 0x48) < *(double *)((longlong)local_1e8 + lVar9)
         )) goto LAB_1439cb365;
      lVar9 = lVar9 + 8;
    } while (lVar9 < 0x18);
  }
  if ((((param_7.Bits & 8) == 0) || (param_8 <= 0.0)) ||
     (dVar11 = ((local_1e8[0xb] - local_1e8[8]) * __real_3fe0000000000000 + local_1e8[8]) -
               ((local_1e8[5] - local_1e8[2]) * __real_3fe0000000000000 + local_1e8[2]),
     dVar10 = ((dVar6 - dVar10) * __real_3fe0000000000000 + dVar10) -
              ((local_1e8[4] - local_1e8[1]) * __real_3fe0000000000000 + local_1e8[1]),
     dVar4 = ((dVar5 - dVar4) * __real_3fe0000000000000 + dVar4) -
             ((local_1e8[3] - local_1e8[0]) * __real_3fe0000000000000 + local_1e8[0]),
     dVar10 * dVar10 + dVar4 * dVar4 + dVar11 * dVar11 <=
     ((double)param_8 + param_9) * ((double)param_8 + param_9))) {
    local_1f8._0_8_ = 0;
    local_1f8._8_4_ = 0;
    if ((param_7.Bits & 6) != 0) {
      if (((param_7.Bits & 2) != 0) &&
         (bVar7 = ImplicitOverlapOBBToAABB
                            (param_1,param_4,(TRigidTransform<double,3> *)&local_128,
                             (TRigidTransform<double,3> *)local_c8,&local_1f8,param_9), !bVar7))
      goto LAB_1439cb365;
      if ((param_7.Bits & 4) != 0) {
        bVar7 = ImplicitOverlapOBBToAABB
                          (param_4,param_1,(TRigidTransform<double,3> *)local_c8,
                           (TRigidTransform<double,3> *)&local_128,&local_1f8,param_9);
        return bVar7;
      }
    }
    bVar7 = true;
  }
  else {
LAB_1439cb365:
    bVar7 = false;
  }
  return bVar7;
}

// FindConstraint @ 1439cc820

FPBDCollisionConstraint * __thiscall
Chaos::FGenericParticlePairMidPhase::FindConstraint
          (FGenericParticlePairMidPhase *this,FParticlePairMidPhaseCollisionKey *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  
  uVar1 = (param_1->field0_0x0).Key;
  if (*(int *)&(this->Constraints).field_0x8 != *(int *)&(this->Constraints).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Constraints).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Constraints).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->Constraints).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Constraints);
        if (*puVar3 == uVar1) {
          puVar4 = puVar3 + 1;
          if (puVar3 == (ulonglong *)0x0) {
            puVar4 = (ulonglong *)0x0;
          }
          if (puVar4 == (ulonglong *)0x0) {
            return (FPBDCollisionConstraint *)0x0;
          }
          return (FPBDCollisionConstraint *)puVar4[1];
        }
        iVar2 = (int)puVar3[3];
      } while (iVar2 != -1);
    }
  }
  return (FPBDCollisionConstraint *)0x0;
}

// FindOrCreateConstraint @ 1439cc9d0

/* WARNING: Type propagation algorithm not settling */

FPBDCollisionConstraint * __thiscall
Chaos::FGenericParticlePairMidPhase::FindOrCreateConstraint
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitObject *param_2,int param_3,FShapeInstance *param_4,FBVHParticles *param_5,
          TRigidTransform<double,3> *param_6,TGeometryParticleHandleImp<double,3,1> *param_7,
          FImplicitObject *param_8,int param_9,FShapeInstance *param_10,FBVHParticles *param_11,
          TRigidTransform<double,3> *param_12,double param_13,EContactShapesType param_14,
          bool param_15,bool param_16,FCollisionContext *param_17)

{
  int *piVar1;
  TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FParticleID FVar3;
  FParticleID FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [4];
  undefined1 auVar8 [4];
  FCollisionShapePairKey_u_0 FVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  FCollisionContext *pFVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FParticleID *pFVar16;
  longlong *plVar17;
  FPBDCollisionConstraint *pFVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  FPBDCollisionConstraint *local_e0;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  local_d8;
  TGeometryParticleHandleImp<double,3,1> *local_c8;
  TGeometryParticleHandleImp<double,3,1> *local_c0;
  int local_b8;
  int iStack_b4;
  FCollisionContext *local_b0;
  FBVHParticles *local_a8;
  FImplicitObject *local_a0;
  undefined8 local_98;
  int iStack_90;
  int iStack_8c;
  TRigidTransform<double,3> *local_88;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  *local_80;
  FBVHParticles *local_78;
  FImplicitObject *local_70;
  TRigidTransform<double,3> *local_68;
  FShapeInstance *local_60;
  FGenericParticlePairMidPhase *local_58;
  TGeometryParticleHandleImp<double,3,1> **local_50;
  TGeometryParticleHandleImp<double,3,1> **local_48;
  
  local_d8._padding_ = (longlong)param_4;
  local_88 = param_6;
  local_60 = param_10;
  local_a8 = param_11;
  local_68 = param_12;
  local_b0 = param_17;
  plVar20 = &this->_padding_;
  local_78 = param_5;
  local_c0 = param_7;
  local_70 = param_8;
  local_e4 = (undefined1  [4])param_3;
  local_c8 = param_1;
  local_a0 = param_2;
  if (((param_1 != (TGeometryParticleHandleImp<double,3,1> *)this->_padding_) ||
      (param_7 != (TGeometryParticleHandleImp<double,3,1> *)*plVar20)) &&
     ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)*plVar20 ||
      (param_7 != (TGeometryParticleHandleImp<double,3,1> *)this->_padding_)))) {
    local_50 = &local_c8;
    local_48 = &local_c0;
    local_58 = this;
    bVar13 = `Chaos::FGenericParticlePairMidPhase::FindOrCreateConstraint'::__l3::<lambda_1>::
             operator()(&local_58);
    if (!bVar13) {
      return (FPBDCollisionConstraint *)0x0;
    }
  }
  if ((local_c8 == (TGeometryParticleHandleImp<double,3,1> *)this->_padding_) &&
     (local_c0 == (TGeometryParticleHandleImp<double,3,1> *)*plVar20)) {
    bVar13 = true;
    iStack_b4 = param_9;
    local_b8 = (int)local_e4;
  }
  else {
    bVar13 = false;
    local_b8 = param_9;
    iStack_b4 = (int)local_e4;
  }
  auVar7 = local_e4;
  auVar8 = (undefined1  [4])param_9;
  if (!bVar13) {
    auVar7 = (undefined1  [4])param_9;
    auVar8 = local_e4;
  }
  uVar23 = 0;
  if (*(int *)&(this->Constraints).field_0x8 != *(int *)&(this->Constraints).field_0x34) {
    puVar21 = *(undefined1 **)&(this->Constraints).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->Constraints).field_0x38;
    }
    iVar15 = *(int *)(puVar21 +
                     (ulonglong)
                     ((int)auVar8 * 0x17 + (int)auVar7 &
                     *(int *)&(this->Constraints).field_0x48 - 1U) * 4);
    if (iVar15 != -1) {
      do {
        plVar20 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)&this->Constraints);
        if (*plVar20 == CONCAT44(auVar8,auVar7)) {
          plVar17 = plVar20 + 1;
          if (plVar20 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          if (plVar17 != (longlong *)0x0) {
            local_e0 = (FPBDCollisionConstraint *)plVar17[1];
            if ((local_e0 != (FPBDCollisionConstraint *)0x0) &&
               ((((local_e0->Implicit[0] != local_a0 || (local_e0->Implicit[1] != param_8)) ||
                 (local_e0->Simplicial[0] != param_5)) || (local_e0->Simplicial[1] != local_a8)))) {
              local_e8[0] = 0;
              bVar13 = `Chaos::FGenericParticlePairMidPhase::FindOrCreateConstraint'::__l6::
                       <lambda_2>::operator()(local_e8);
              if (!bVar13) {
                return (FPBDCollisionConstraint *)0x0;
              }
            }
            goto LAB_1439ccb6b;
          }
          break;
        }
        iVar15 = (int)plVar20[3];
      } while (iVar15 != -1);
    }
  }
  local_e0 = (FPBDCollisionConstraint *)0x0;
LAB_1439ccb6b:
  pTVar11 = local_c0;
  pTVar10 = local_c8;
  pFVar18 = local_e0;
  if (local_e0 == (FPBDCollisionConstraint *)0x0) {
    local_98 = 0;
    if ((local_c8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (local_c0 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
      pFVar16 = TGeometryParticlesImp<double,3,0>::ParticleID
                          ((TGeometryParticlesImp<double,3,0> *)local_c8->_padding_,
                           (int)local_c8->_padding_);
      FVar3 = *pFVar16;
      pFVar16 = TGeometryParticlesImp<double,3,0>::ParticleID
                          ((TGeometryParticlesImp<double,3,0> *)pTVar11->_padding_,
                           (int)pTVar11->_padding_);
      FVar4 = *pFVar16;
      pFVar16 = TGeometryParticlesImp<double,3,0>::ParticleID
                          ((TGeometryParticlesImp<double,3,0> *)pTVar10->_padding_,
                           (int)pTVar10->_padding_);
      if (FVar3.LocalID == -1) {
        uVar22 = pFVar16->GlobalID;
      }
      else {
        uVar22 = (*pFVar16).LocalID;
      }
      pFVar16 = TGeometryParticlesImp<double,3,0>::ParticleID
                          ((TGeometryParticlesImp<double,3,0> *)pTVar11->_padding_,
                           (int)pTVar11->_padding_);
      if (FVar4.LocalID == -1) {
        uVar19 = pFVar16->GlobalID;
      }
      else {
        uVar19 = (*pFVar16).LocalID;
      }
      uVar14 = uVar23;
      if (FVar3.LocalID != -1) {
        uVar14 = 0x80000000;
      }
      if (FVar4.LocalID != -1) {
        uVar23 = 0x80000000;
      }
      local_98 = CONCAT44(uVar23 | uVar19 & 0x7fffffff,uVar14 | uVar22 & 0x7fffffff);
      param_5 = local_78;
      param_8 = local_70;
    }
    pFVar12 = local_b0;
    iStack_90 = (int)local_e4;
    iStack_8c = param_9;
    Chaos::Private::FCollisionContextAllocator::CreateConstraint
              (local_b0->Allocator,&local_d8,local_c8,local_a0,(FPerShapeData *)local_d8._padding_,
               param_5,local_88,local_c0,param_8,(FPerShapeData *)local_60,local_a8,local_68,
               param_13,param_15,param_14);
    FVar9._s_0.ShapeID1 = iStack_8c;
    FVar9._s_0.ShapeID0 = iStack_90;
    iVar15 = pFVar12->Allocator->CurrentEpoch;
    ((local_d8.Ptr)->ContainerCookie).MidPhase = (FParticlePairMidPhase *)this;
    ((local_d8.Ptr)->ContainerCookie).bIsMultiShapePair = 1;
    ((local_d8.Ptr)->ContainerCookie).CreationEpoch = iVar15;
    ((local_d8.Ptr)->CollisionSortKey).ParticlePairKey.Key.Key64 = local_98;
    ((local_d8.Ptr)->CollisionSortKey).ShapePairKey.field0_0x0 = FVar9;
    local_b0 = (FCollisionContext *)CONCAT44(iStack_b4,local_b8);
    local_88 = (TRigidTransform<double,3> *)&local_b0;
    local_80 = &local_d8;
    TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_&&,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_&&>_>
              ((TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
                *)&this->Constraints,
               (TPairInitializer<unsigned___int64_&&,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_&&>
                *)local_e4,(bool *)&local_88);
    pFVar18 = *(FPBDCollisionConstraint **)
               ((longlong)(int)local_e4 * 0x20 + 0x10 + *(longlong *)&this->Constraints);
    if (local_d8.Ptr != (FPBDCollisionConstraint *)0x0) {
      if (((FShapeInstance *)local_d8._padding_ == (FShapeInstance *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pool != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                              ,0x249,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FPBDCollisionConstraint *)(*pcVar6)();
        return pFVar18;
      }
      TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_d8._padding_,local_d8.Ptr);
    }
  }
  local_e0 = pFVar18;
  if (((*(byte *)&local_e0->Flags >> 1 & 1) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Constraint->IsEnabled()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                          ,0x729,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FPBDCollisionConstraint *)(*pcVar6)();
    return pFVar18;
  }
  pTVar2 = &this->NewConstraints;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_e0) &&
      ((FScriptContainerElement *)&local_e0 < pFVar5 + (longlong)(this->NewConstraints).ArrayMax * 8
      )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FPBDCollisionConstraint *)(*pcVar6)();
    return pFVar18;
  }
  iVar15 = (this->NewConstraints).ArrayNum;
  piVar1 = &(this->NewConstraints).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NewConstraints).ArrayNum = iVar15 + 1;
  *(FPBDCollisionConstraint **)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_e0;
  return local_e0;
}

// GenerateCollisionsBVHBVH @ 1439d11c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHBVH
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitBVH *param_2,TGeometryParticleHandleImp<double,3,1> *param_3,
          FImplicitBVH *param_4,double param_5,double param_6,FCollisionContext *param_7)

{
  TTransform<double> *pTVar1;
  undefined1 auStack_1e8 [32];
  FGenericParticleHandleImp local_1c8 [2];
  <lambda_1> local_1b8;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1c8[0].MHandle = param_1;
  FGenericParticleHandleImp::GetTransformPQ(local_1c8,(TRigidTransform<double,3> *)&local_f8);
  local_1c8[0].MHandle = param_3;
  FGenericParticleHandleImp::GetTransformPQ(local_1c8,(TRigidTransform<double,3> *)&local_98);
  pTVar1 = UE::Math::TTransform<double>::GetRelativeTransform
                     (&local_98,(TTransform<double> *)&local_1b8,&local_f8);
  local_158 = (pTVar1->Rotation).XY.m128d_f64[0];
  dStack_150 = (pTVar1->Rotation).XY.m128d_f64[1];
  local_148 = (pTVar1->Rotation).ZW.m128d_f64[0];
  dStack_140 = (pTVar1->Rotation).ZW.m128d_f64[1];
  local_138 = (pTVar1->Translation).XY.m128d_f64[0];
  dStack_130 = (pTVar1->Translation).XY.m128d_f64[1];
  local_128 = (pTVar1->Translation).ZW.m128d_f64[0];
  dStack_120 = (pTVar1->Translation).ZW.m128d_f64[1];
  local_118 = (pTVar1->Scale3D).XY.m128d_f64[0];
  dStack_110 = (pTVar1->Scale3D).XY.m128d_f64[1];
  local_108 = (pTVar1->Scale3D).ZW.m128d_f64[0];
  dStack_100 = (pTVar1->Scale3D).ZW.m128d_f64[1];
  local_1b8.ParticleWorldTransformA = (TRigidTransform<double,3> *)&local_f8;
  local_1b8.__this = this;
  local_1b8.ParticleA = param_1;
  local_1b8.BVHA = param_2;
  local_1b8.ShapeInstancesA = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
  local_1b8.ParticleWorldTransformB = (TRigidTransform<double,3> *)&local_98;
  local_1b8.BVHB = param_4;
  local_1b8.ParticleB = param_3;
  local_1b8.ShapeInstancesB = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_3);
  local_1b8.Context = param_7;
  local_1b8.CullDistance = param_5;
  local_1b8.Dt = param_6;
  Chaos::Private::FImplicitBVH::
  VisitOverlappingLeafNodesStack<_Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHBVH_::__l2::<lambda_1>_>
            (param_2,param_4,(TRigidTransform<double,3> *)&local_158,&local_1b8);
  return;
}

// GenerateCollisionsBVHImplicitHierarchy @ 1439d1320

void __thiscall
Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitHierarchy
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitBVH *param_2,TGeometryParticleHandleImp<double,3,1> *param_3,
          FImplicitObject *param_4,FConvexOptimizer *param_5,double param_6,double param_7,
          FCollisionContext *param_8)

{
  code *local_68;
  FGenericParticlePairMidPhase **local_60;
  FGenericParticlePairMidPhase *local_58;
  TGeometryParticleHandleImp<double,3,1> *local_50;
  FImplicitBVH *local_48;
  TGeometryParticleHandleImp<double,3,1> *local_40;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_38;
  double local_30;
  double local_28;
  FCollisionContext *local_20;
  FConvexOptimizer **local_18;
  
  local_58 = this;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_3);
  local_20 = param_8;
  local_18 = &param_5;
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitHierarchy'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
             ::Call;
  local_30 = param_6;
  local_28 = param_7;
  Chaos::Private::VisitCollisionObjects
            (param_5,param_4,
             (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
              *)&local_68);
  return;
}

// GenerateCollisionsBVHImplicitLeaf @ 1439d13c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitLeaf
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitBVH *param_2,TGeometryParticleHandleImp<double,3,1> *param_3,
          FImplicitObject *param_4,FShapeInstance *param_5,TRigidTransform<double,3> *param_6,
          int param_7,double param_8,double param_9,FCollisionContext *param_10)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  uchar uVar5;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  TTransform<double> *pTVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auStack_308 [32];
  FGenericParticleHandleImp local_2e8;
  FGenericParticleHandleImp local_2e0;
  FGenericParticlePairMidPhase *local_2d8;
  TGeometryParticleHandleImp<double,3,1> *local_2d0;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_2c8;
  TTransform<double> *local_2c0;
  TGeometryParticleHandleImp<double,3,1> *local_2b8;
  FImplicitObject *local_2b0;
  FShapeInstance *local_2a8;
  TTransform<double> *local_2a0;
  TRigidTransform<double,3> *local_298;
  int local_290;
  double local_288;
  double local_280;
  FCollisionContext *local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238 [32];
  __m128d local_218;
  __m128d local_208;
  __m128d local_1f8;
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_2e8.MHandle = param_1;
  local_2e0.MHandle = param_3;
  FGenericParticleHandleImp::GetTransformPQ(&local_2e8,(TRigidTransform<double,3> *)&local_118);
  FGenericParticleHandleImp::GetTransformPQ(&local_2e0,(TRigidTransform<double,3> *)&local_b8);
  pTVar6 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
  local_238._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_238._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_238._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_238._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_238._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_238._28_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_218.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_218.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_218.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_208.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_208.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_208.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1f8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1f8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1f8.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1e8.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            ((TTransform<double> *)local_238,(TTransform<double> *)param_6,&local_b8);
  local_178.Rotation.XY.m128d_f64[0] = (double)local_238._0_8_;
  local_178.Rotation.XY.m128d_f64[1] = (double)local_238._8_8_;
  local_178.Rotation.ZW.m128d_f64[0] = (double)local_238._16_8_;
  local_178.Rotation.ZW.m128d_f64[1] = (double)local_238._24_8_;
  local_178.Translation.XY.m128d_f64[0] = local_218.m128d_f64[0];
  local_178.Translation.XY.m128d_f64[1] = local_218.m128d_f64[1];
  local_178.Translation.ZW.m128d_f64[0] = local_208.m128d_f64[0];
  local_178.Translation.ZW.m128d_f64[1] = local_208.m128d_f64[1];
  local_178.Scale3D.XY.m128d_f64[0] = local_1f8.m128d_f64[0];
  local_178.Scale3D.XY.m128d_f64[1] = local_1f8.m128d_f64[1];
  local_178.Scale3D.ZW.m128d_f64[0] = local_1e8.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = local_1e8.m128d_f64[1];
  pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform
                     (&local_178,(TTransform<double> *)local_238,&local_118);
  local_1d8 = (pTVar7->Rotation).XY.m128d_f64[0];
  dStack_1d0 = (pTVar7->Rotation).XY.m128d_f64[1];
  local_1c8 = (pTVar7->Rotation).ZW.m128d_f64[0];
  dStack_1c0 = (pTVar7->Rotation).ZW.m128d_f64[1];
  local_1b8 = (pTVar7->Translation).XY.m128d_f64[0];
  dStack_1b0 = (pTVar7->Translation).XY.m128d_f64[1];
  local_1a8 = (pTVar7->Translation).ZW.m128d_f64[0];
  dStack_1a0 = (pTVar7->Translation).ZW.m128d_f64[1];
  local_198 = *(undefined4 *)(pTVar7->Scale3D).XY.m128d_f64;
  uStack_194 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 4);
  uStack_190 = *(undefined4 *)((pTVar7->Scale3D).XY.m128d_f64 + 1);
  uStack_18c = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 0xc);
  local_188 = *(undefined4 *)(pTVar7->Scale3D).ZW.m128d_f64;
  uStack_184 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 4);
  uStack_180 = *(undefined4 *)((pTVar7->Scale3D).ZW.m128d_f64 + 1);
  uStack_17c = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 0xc);
  pauVar8 = (undefined1 (*) [16])
            (**(code **)(param_4->_padding_ + 0x98))(param_4,local_238,&local_1d8);
  dVar1 = *(double *)pauVar8[1];
  dVar4 = *(double *)(*pauVar8 + 8) - param_8;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = *(double *)*pauVar8 - param_8;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *pauVar8 = auVar2;
  *(double *)pauVar8[1] = dVar1 - param_8;
  dVar1 = *(double *)pauVar8[2] + param_8;
  auVar3._8_4_ = SUB84(dVar1,0);
  auVar3._0_8_ = *(double *)(pauVar8[1] + 8) + param_8;
  auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(pauVar8[1] + 8) = auVar3;
  *(double *)(pauVar8[2] + 8) = param_8 + *(double *)(pauVar8[2] + 8);
  local_268 = *(undefined8 *)*pauVar8;
  uStack_260 = *(undefined8 *)(*pauVar8 + 8);
  local_258 = *(undefined8 *)pauVar8[1];
  local_250 = *(undefined8 *)(pauVar8[1] + 8);
  uStack_248 = *(undefined8 *)pauVar8[2];
  local_240 = *(undefined8 *)(pauVar8[2] + 8);
  uVar5 = FImplicitObject::GetType(param_4);
  local_2a8 = param_5;
  local_2c0 = &local_118;
  local_218.m128d_f64[0]._0_1_ = uVar5 == '\f';
  local_2a0 = &local_b8;
  local_278 = param_10;
  local_238._24_8_ = &local_1d8;
  local_238._16_8_ = &local_268;
  local_290 = param_7;
  local_218.m128d_f64[1] = (double)&local_2d8;
  local_288 = param_8;
  local_280 = param_9;
  local_2b0 = param_4;
  local_298 = param_6;
  local_238._8_8_ = param_4;
  local_238._0_8_ = param_2;
  local_2d8 = this;
  local_2d0 = param_1;
  local_2c8 = pTVar6;
  local_2b8 = param_3;
  Chaos::Private::FImplicitBVH::
  VisitNodesStack<_Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitLeaf_::__l2::<lambda_2>_>
            (param_2,(<lambda_2> *)local_238);
  return;
}

// GenerateCollisionsImpl @ 1439d1680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImpl
          (FGenericParticlePairMidPhase *this,float param_1,float param_2,TVector<float,3> *param_3,
          FCollisionContext *param_4)

{
  ushort *puVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  FImplicitBVH *pFVar7;
  uchar uVar8;
  int iVar9;
  TPimplPtr<Chaos::Private::FConvexOptimizer,0> *pTVar10;
  TTransform<double> *pTVar11;
  FImplicitBVH *pFVar12;
  FConvexOptimizer *pFVar13;
  FConvexOptimizer *pFVar14;
  FConvexOptimizer *this_01;
  FCollisionContext *pFVar15;
  ushort uVar16;
  FImplicitBVH *pFVar17;
  undefined1 auStackY_298 [32];
  FGenericParticleHandleImp local_248;
  FCollisionContext *local_240;
  FImplicitObject *local_238;
  FImplicitBVH *local_230;
  undefined1 local_228 [16];
  FGenericParticleHandleImp local_218;
  FConvexOptimizer *local_210;
  <lambda_1> local_208;
  FGenericParticleHandleImp *local_1a8;
  FConvexOptimizer **local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_240 = param_4;
  local_238 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                        ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
  local_230 = (FImplicitBVH *)
              TGeometryParticleHandleImp<double,3,1>::GetGeometry
                        ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
  pFVar13 = (FConvexOptimizer *)0x0;
  pFVar14 = pFVar13;
  if (2 < (byte)(((FConvexOptimizer *)this->_padding_)->SimplifiedConvexes).ArrayMax) {
    pFVar14 = (FConvexOptimizer *)this->_padding_;
  }
  this_01 = pFVar13;
  if (2 < (byte)(((FConvexOptimizer *)this->_padding_)->SimplifiedConvexes).ArrayMax) {
    this_01 = (FConvexOptimizer *)this->_padding_;
  }
  if (((this->_padding_ & 0x200000) != 0) && (pFVar14 != (FConvexOptimizer *)0x0)) {
    pTVar10 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer
                        ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pFVar14);
    pFVar13 = pTVar10->Ptr;
  }
  pFVar14 = (FConvexOptimizer *)0x0;
  if (((this->_padding_ & 0x200000) != 0) && (this_01 != (FConvexOptimizer *)0x0)) {
    pTVar10 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer
                        ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_01);
    pFVar14 = pTVar10->Ptr;
  }
  pFVar12 = (FImplicitBVH *)0x0;
  if ((pFVar13 == (FConvexOptimizer *)0x0) || ((pFVar13->SimplifiedConvexes).ArrayNum == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((pFVar14 == (FConvexOptimizer *)0x0) || ((pFVar14->SimplifiedConvexes).ArrayNum == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((bVar5) || (bVar6)) {
    uVar16 = 0x40;
  }
  else {
    uVar16 = 0;
  }
  puVar1 = (ushort *)((longlong)&this->_padding_ + 2);
  *puVar1 = *puVar1 & 0xffbf;
  puVar1 = (ushort *)((longlong)&this->_padding_ + 2);
  *puVar1 = *puVar1 | uVar16;
  pFVar17 = pFVar12;
  if (CVars::bChaosUnionBVHEnabled != false) {
    uVar8 = FImplicitObject::GetType(local_238);
    pFVar7 = local_230;
    if ((((uVar8 == '\x05') || (uVar8 == '\x0f')) &&
        (pFVar17 = (FImplicitBVH *)0x0, local_238 != (FImplicitObject *)0x0)) && (!bVar5)) {
      pFVar17 = (FImplicitBVH *)local_238[3]._padding_;
    }
    uVar8 = FImplicitObject::GetType((FImplicitObject *)local_230);
    if (((uVar8 == '\x05') || (uVar8 == '\x0f')) &&
       ((pFVar12 = (FImplicitBVH *)0x0, pFVar7 != (FImplicitBVH *)0x0 && (!bVar6)))) {
      pFVar12 = *(FImplicitBVH **)&pFVar7[1].Nodes.ArrayNum;
    }
    if ((pFVar17 != (FImplicitBVH *)0x0) && (pFVar12 != (FImplicitBVH *)0x0)) {
      pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
      pFVar13 = (FConvexOptimizer *)this->_padding_;
      local_248.MHandle = pTVar2;
      FGenericParticleHandleImp::GetTransformPQ(&local_248,(TRigidTransform<double,3> *)&local_138);
      local_248.MHandle = (TGeometryParticleHandleImp<double,3,1> *)pFVar13;
      FGenericParticleHandleImp::GetTransformPQ(&local_248,(TRigidTransform<double,3> *)&local_d8);
      pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform
                          (&local_d8,(TTransform<double> *)&local_208,&local_138);
      local_198 = (pTVar11->Rotation).XY.m128d_f64[0];
      dStack_190 = (pTVar11->Rotation).XY.m128d_f64[1];
      local_188 = (pTVar11->Rotation).ZW.m128d_f64[0];
      dStack_180 = (pTVar11->Rotation).ZW.m128d_f64[1];
      local_178 = (pTVar11->Translation).XY.m128d_f64[0];
      dStack_170 = (pTVar11->Translation).XY.m128d_f64[1];
      local_168 = (pTVar11->Translation).ZW.m128d_f64[0];
      dStack_160 = (pTVar11->Translation).ZW.m128d_f64[1];
      local_158 = (pTVar11->Scale3D).XY.m128d_f64[0];
      dStack_150 = (pTVar11->Scale3D).XY.m128d_f64[1];
      local_148 = (pTVar11->Scale3D).ZW.m128d_f64[0];
      dStack_140 = (pTVar11->Scale3D).ZW.m128d_f64[1];
      local_208.ParticleWorldTransformA = (TRigidTransform<double,3> *)&local_138;
      local_208.__this = this;
      local_208.ParticleA = pTVar2;
      local_208.BVHA = pFVar17;
      local_208.ShapeInstancesA = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(pTVar2);
      local_208.ParticleWorldTransformB = (TRigidTransform<double,3> *)&local_d8;
      local_208.ParticleB = (TGeometryParticleHandleImp<double,3,1> *)pFVar13;
      local_208.BVHB = pFVar12;
      local_208.ShapeInstancesB =
           TGeometryParticleHandleImp<double,3,1>::ShapeInstances
                     ((TGeometryParticleHandleImp<double,3,1> *)pFVar13);
      pFVar15 = local_240;
      local_208.CullDistance = (double)param_2;
      local_208.Context = local_240;
      local_208.Dt = (double)param_1;
      Chaos::Private::FImplicitBVH::
      VisitOverlappingLeafNodesStack<_Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHBVH_::__l2::<lambda_1>_>
                (pFVar17,pFVar12,(TRigidTransform<double,3> *)&local_198,&local_208);
      goto LAB_1439d1aab;
    }
  }
  pFVar15 = local_240;
  this_00 = (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *)this->_padding_;
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
  dVar4 = (double)param_2;
  dVar3 = (double)param_1;
  if (pFVar17 == (FImplicitBVH *)0x0) {
    if (pFVar12 == (FImplicitBVH *)0x0) {
      local_248.MHandle = (TGeometryParticleHandleImp<double,3,1> *)pFVar13;
      local_228._0_8_ = this_00;
      local_218.MHandle = pTVar2;
      local_210 = pFVar14;
      pFVar12 = (FImplicitBVH *)TGeometryParticleHandleImp<double,3,1>::ShapeInstances(pTVar2);
      pFVar13 = (FConvexOptimizer *)
                TGeometryParticleHandleImp<double,3,1>::ShapeInstances
                          ((TGeometryParticleHandleImp<double,3,1> *)this_00);
      FGenericParticleHandleImp::GetTransformPQ(&local_218,(TRigidTransform<double,3> *)&local_d8);
      FGenericParticleHandleImp::GetTransformPQ
                ((FGenericParticleHandleImp *)local_228,(TRigidTransform<double,3> *)&local_138);
      pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform
                          (&local_d8,(TTransform<double> *)&local_208,&local_138);
      pFVar15 = local_240;
      local_198 = (pTVar11->Rotation).XY.m128d_f64[0];
      dStack_190 = (pTVar11->Rotation).XY.m128d_f64[1];
      local_188 = (pTVar11->Rotation).ZW.m128d_f64[0];
      dStack_180 = (pTVar11->Rotation).ZW.m128d_f64[1];
      local_178 = (pTVar11->Translation).XY.m128d_f64[0];
      dStack_170 = (pTVar11->Translation).XY.m128d_f64[1];
      local_168 = (pTVar11->Translation).ZW.m128d_f64[0];
      dStack_160 = (pTVar11->Translation).ZW.m128d_f64[1];
      local_158 = (pTVar11->Scale3D).XY.m128d_f64[0];
      dStack_150 = (pTVar11->Scale3D).XY.m128d_f64[1];
      local_148 = (pTVar11->Scale3D).ZW.m128d_f64[0];
      dStack_140 = (pTVar11->Scale3D).ZW.m128d_f64[1];
      local_208.ParticleWorldTransformA = (TRigidTransform<double,3> *)&local_d8;
      local_208.BVHB = local_230;
      local_208.ParticleWorldTransformB = (TRigidTransform<double,3> *)&local_138;
      local_1a8 = &local_248;
      local_1a0 = &local_210;
      local_228._8_8_ = &local_208;
      local_228._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
           ::Call;
      local_208.Context = local_240;
      local_208.__this = this;
      local_208.ParticleA = pTVar2;
      local_208.BVHA = pFVar12;
      local_208.ShapeInstancesA = this_00;
      local_208.ParticleB = (TGeometryParticleHandleImp<double,3,1> *)pFVar13;
      local_208.ShapeInstancesB =
           (TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)&local_198;
      local_208.CullDistance = dVar4;
      local_208.Dt = dVar3;
      Chaos::Private::VisitCollisionObjects
                ((FConvexOptimizer *)local_248.MHandle,local_238,
                 (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                  *)local_228);
    }
    else {
      GenerateCollisionsBVHImplicitHierarchy
                (this,(TGeometryParticleHandleImp<double,3,1> *)this_00,pFVar12,pTVar2,local_238,
                 pFVar13,dVar4,dVar3,local_240);
    }
  }
  else {
    GenerateCollisionsBVHImplicitHierarchy
              (this,pTVar2,pFVar17,(TGeometryParticleHandleImp<double,3,1> *)this_00,
               (FImplicitObject *)local_230,pFVar14,dVar4,dVar3,local_240);
    pFVar15 = local_240;
  }
LAB_1439d1aab:
  if ((this->NewConstraints).ArrayNum < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = ProcessNewConstraints(this,(double)param_2,(double)param_1,pFVar15);
  }
  return iVar9;
}

// GenerateCollisionsImplicitHierarchyImplicitHierarchy @ 1439d2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitObject *param_2,FConvexOptimizer *param_3,
          TGeometryParticleHandleImp<double,3,1> *param_4,FImplicitObject *param_5,
          FConvexOptimizer *param_6,double param_7,double param_8,FCollisionContext *param_9)

{
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_218 [32];
  FConvexOptimizer *local_1f8;
  undefined1 local_1f0 [16];
  FGenericParticleHandleImp local_1e0;
  TTransform<double> local_1d8;
  FConvexOptimizer **local_178;
  FConvexOptimizer **local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1f0._0_8_ = param_4;
  local_1f8 = param_3;
  local_1e0.MHandle = param_1;
  pTVar1 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
  pTVar2 = TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_4);
  FGenericParticleHandleImp::GetTransformPQ(&local_1e0,(TRigidTransform<double,3> *)&local_108);
  FGenericParticleHandleImp::GetTransformPQ
            ((FGenericParticleHandleImp *)local_1f0,(TRigidTransform<double,3> *)&local_a8);
  pTVar3 = UE::Math::TTransform<double>::GetRelativeTransform(&local_108,&local_1d8,&local_a8);
  local_168 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_160 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_158 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_150 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_148 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_140 = (pTVar3->Translation).XY.m128d_f64[1];
  local_138 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_130 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_128 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_120 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_118 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_110 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  local_1d8.Rotation.ZW.m128d_f64[1] = (double)&local_108;
  local_1d8.Translation.ZW.m128d_f64[0] = (double)param_5;
  local_1d8.Translation.ZW.m128d_f64[1] = (double)&local_a8;
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)&local_168;
  local_1d8.Scale3D.ZW.m128d_f64[1] = (double)param_9;
  local_178 = &local_1f8;
  local_170 = &param_6;
  local_1f0._8_8_ = &local_1d8;
  local_1f0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
       ::Call;
  local_1d8.Scale3D.XY.m128d_f64[1] = param_7;
  local_1d8.Scale3D.ZW.m128d_f64[0] = param_8;
  local_1d8.Translation.XY.m128d_f64[0] = (double)param_4;
  local_1d8.Rotation.XY.m128d_f64[0] = (double)this;
  local_1d8.Rotation.XY.m128d_f64[1] = (double)param_1;
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)pTVar1;
  local_1d8.Translation.XY.m128d_f64[1] = (double)pTVar2;
  Chaos::Private::VisitCollisionObjects
            (local_1f8,param_2,
             (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
              *)local_1f0);
  return;
}

// GenerateCollisionsImplicitLeafImplicitLeaf @ 1439d25e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitLeafImplicitLeaf
          (FGenericParticlePairMidPhase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitObject *param_2,FShapeInstance *param_3,TRigidTransform<double,3> *param_4,
          TRigidTransform<double,3> *param_5,int param_6,
          TGeometryParticleHandleImp<double,3,1> *param_7,FImplicitObject *param_8,
          FShapeInstance *param_9,TRigidTransform<double,3> *param_10,
          TRigidTransform<double,3> *param_11,int param_12,double param_13,double param_14,
          FCollisionContext *param_15)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uchar uVar4;
  EContactShapesType EVar5;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar6;
  FBVHParticles *pFVar7;
  FBVHParticles *pFVar8;
  undefined8 *puVar9;
  FShapeInstance *pFVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  int iVar12;
  FImplicitObject *pFVar13;
  undefined1 auStackY_138 [32];
  FBVHParticles *pFVar14;
  TRigidTransform<double,3> *pTVar15;
  FShapeInstance *pFVar16;
  TRigidTransform<double,3> *pTVar17;
  bool local_a8 [8];
  TRigidTransform<double,3> *local_a0;
  TRigidTransform<double,3> *local_98;
  FShapeInstance *local_90;
  FGenericParticleHandleImp local_88;
  FShapeInstance *local_80;
  TRigidTransform<double,3> *local_78;
  TRigidTransform<double,3> *local_70;
  FCollisionContext *local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_70 = param_4;
  local_a0 = param_5;
  local_90 = param_9;
  local_78 = param_10;
  local_98 = param_11;
  local_68 = param_15;
  local_80 = param_3;
  if (param_2 == (FImplicitObject *)0x0) {
    bVar1 = 7;
LAB_1439d26aa:
    local_88.MHandle = param_1;
    pTVar6 = FGenericParticleHandleImp::CollisionParticles(&local_88);
    if ((pTVar6->Ptr == (FBVHParticles *)0x0) || ((int)pTVar6->Ptr->_padding_ == 0)) {
      if (param_2 == (FImplicitObject *)0x0) {
        bVar1 = 7;
      }
      else {
        bVar1 = FImplicitObject::GetType(param_2);
        bVar1 = bVar1 & 0x1f;
      }
    }
  }
  else {
    bVar1 = FImplicitObject::GetCollisionType(param_2);
    bVar1 = bVar1 & 0x1f;
    if ((byte)(bVar1 - 6) < 2) goto LAB_1439d26aa;
  }
  if (param_8 == (FImplicitObject *)0x0) {
    bVar2 = 7;
  }
  else {
    bVar2 = FImplicitObject::GetCollisionType(param_8);
    bVar2 = bVar2 & 0x1f;
    if (1 < (byte)(bVar2 - 6)) goto LAB_1439d273e;
  }
  local_88.MHandle = param_7;
  pTVar6 = FGenericParticleHandleImp::CollisionParticles(&local_88);
  if ((pTVar6->Ptr == (FBVHParticles *)0x0) || ((int)pTVar6->Ptr->_padding_ == 0)) {
    if (param_8 == (FImplicitObject *)0x0) {
      bVar2 = 7;
    }
    else {
      bVar2 = FImplicitObject::GetType(param_8);
      bVar2 = bVar2 & 0x1f;
    }
  }
LAB_1439d273e:
  bVar3 = DoCollide(bVar1,(FPerShapeData *)param_3,bVar2,(FPerShapeData *)local_90);
  if ((bVar3) &&
     (bVar3 = DoBoundsOverlap(this,param_2,local_70,local_a0,param_8,local_78,local_98,
                              (FImplicitBoundsTestFlags)0x7,0.0,param_13), bVar3)) {
    pFVar7 = (FBVHParticles *)0x0;
    pFVar8 = (FBVHParticles *)0x0;
    uVar4 = FImplicitObject::GetCollisionType(param_2);
    if (uVar4 == '\x06') {
      pFVar7 = FindLevelSetParticles(param_1,param_2);
    }
    uVar4 = FImplicitObject::GetCollisionType(param_8);
    if (uVar4 == '\x06') {
      pFVar8 = FindLevelSetParticles(param_7,param_8);
    }
    local_a8[0] = false;
    EVar5 = Collisions::CalculateShapePairType(param_1,param_2,param_7,param_8,local_a8);
    bVar1 = FImplicitObject::GetType(param_2);
    pFVar13 = param_2;
    if ((bVar1 & 0x40) == 0) {
      pFVar13 = (FImplicitObject *)0x0;
    }
    if (pFVar13 != (FImplicitObject *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 0x160))(pFVar13,&local_70);
      param_2 = (FImplicitObject *)*puVar9;
    }
    bVar1 = FImplicitObject::GetType(param_8);
    pFVar13 = param_8;
    if ((bVar1 & 0x40) == 0) {
      pFVar13 = (FImplicitObject *)0x0;
    }
    if (pFVar13 != (FImplicitObject *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 0x160))(pFVar13,&local_78);
      param_8 = (FImplicitObject *)*puVar9;
    }
    pFVar10 = local_90;
    pTVar11 = param_7;
    pFVar13 = param_8;
    iVar12 = param_12;
    pFVar14 = pFVar8;
    pTVar15 = local_98;
    pFVar16 = local_80;
    pTVar17 = local_a0;
    if (local_a8[0] == false) {
      pFVar10 = local_80;
      pTVar11 = param_1;
      pFVar13 = param_2;
      iVar12 = param_6;
      pFVar14 = pFVar7;
      pTVar15 = local_a0;
      param_1 = param_7;
      param_2 = param_8;
      pFVar16 = local_90;
      pFVar7 = pFVar8;
      pTVar17 = local_98;
      param_6 = param_12;
    }
    FindOrCreateConstraint
              (this,pTVar11,pFVar13,iVar12,pFVar10,pFVar14,pTVar15,param_1,param_2,param_6,pFVar16,
               pFVar7,pTVar17,param_13,EVar5,local_68->Settings->bAllowManifolds,
               (bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 3 & 1),local_68);
  }
  return;
}

// InjectCollisionImpl @ 1439d5270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FGenericParticlePairMidPhase::InjectCollisionImpl
          (FGenericParticlePairMidPhase *this,FPBDCollisionConstraint *param_1,
          FCollisionContext *param_2)

{
  if (2 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return;
  }
  return;
}

// ProcessNewConstraints @ 1439d7530

int __thiscall
Chaos::FGenericParticlePairMidPhase::ProcessNewConstraints
          (FGenericParticlePairMidPhase *this,double param_1,double param_2,
          FCollisionContext *param_3)

{
  TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  FPBDCollisionConstraint *this_00;
  FCollisionContextAllocator *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ushort uVar16;
  FPBDCollisionConstraint *local_68;
  longlong local_60;
  
  local_60 = (longlong)(this->NewConstraints).ArrayNum;
  iVar11 = 0;
  uVar16 = *(ushort *)((longlong)&this->_padding_ + 2) & 0xc;
  if (0 < local_60) {
    uVar9 = 0;
    lVar14 = 0;
    iVar15 = 1;
    if (uVar16 == 0xc) {
      uVar9 = 0x400;
    }
    do {
      uVar10 = 0;
      if (iVar15 + -1 < (this->NewConstraints).ArrayNum) {
        uVar10 = ~(iVar15 - 1U) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar11 = (*pcVar6)();
        return iVar11;
      }
      this_00 = *(FPBDCollisionConstraint **)
                 ((this->NewConstraints).AllocatorInstance.Data + lVar14 * 8);
      if (iVar15 < (this->NewConstraints).ArrayNum) {
        if ((iVar15 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar11 = (*pcVar6)();
          return iVar11;
        }
        lVar13 = 0xd;
        do {
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      bVar8 = *(byte *)((longlong)&this->_padding_ + 2) >> 2 & 1;
      (this_00->Flags).Bits = (this_00->Flags).Bits & 0xfdff;
      (this_00->Flags).Bits =
           (ushort)bVar8 << 9 | (this_00->Flags).Bits & 0xfbff | (ushort)bVar8 << 10;
      if ((bVar8 != 0) && (this_00->CCDEnablePenetration == 0.0)) {
        FPBDCollisionConstraint::InitCCDThreshold(this_00);
      }
      (this_00->Flags).Bits = (this_00->Flags).Bits & 0xfbff;
      (this_00->Flags).Bits = (this_00->Flags).Bits | uVar9;
      if (bChaosCCDResetTOIFix != false) {
        this_00->CCDTimeOfImpact = 3.4028235e+38;
      }
      if (((this_00->BoundsTestFlags).Bits & 0x20) == 0) {
        if (uVar16 == 0xc) {
          bVar7 = UpdateCollisionCCD(this,this_00,param_1,param_2,param_3);
        }
        else {
          bVar7 = UpdateCollision(this,this_00,param_1,param_2,param_3);
        }
        if (bVar7 != false) goto LAB_1439d773c;
      }
      else {
LAB_1439d773c:
        pFVar4 = param_3->Allocator;
        iVar12 = pFVar4->CurrentEpoch;
        local_68 = this_00;
        if ((this_00->ContainerCookie).LastUsedEpoch != iVar12) {
          (this_00->ContainerCookie).ConstraintIndex = -1;
          (this_00->ContainerCookie).LastUsedEpoch = iVar12;
          (this_00->ContainerCookie).CCDConstraintIndex = -1;
          pTVar1 = &pFVar4->NewActiveConstraints;
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               pFVar5 + (longlong)(pFVar4->NewActiveConstraints).ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar11 = (*pcVar6)();
            return iVar11;
          }
          iVar12 = (pFVar4->NewActiveConstraints).ArrayNum;
          piVar2 = &(pFVar4->NewActiveConstraints).ArrayMax;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar1->AllocatorInstance,piVar2);
          }
          (pFVar4->NewActiveConstraints).ArrayNum = iVar12 + 1;
          *(FPBDCollisionConstraint **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) =
               local_68;
          FPBDCollisionConstraint::Activate(local_68);
        }
        iVar11 = iVar11 + 1;
      }
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < local_60);
  }
  (this->NewConstraints).ArrayNum = 0;
  if ((this->NewConstraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NewConstraints).AllocatorInstance,0,&(this->NewConstraints).ArrayMax);
  }
  return iVar11;
}

// PruneConstraints @ 1439da1c0

void __thiscall
Chaos::FGenericParticlePairMidPhase::PruneConstraints
          (FGenericParticlePairMidPhase *this,int param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
  *pTVar3;
  TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
  *this_00;
  TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  longlong lVar9;
  ulong64 *puVar10;
  ForElementType<unsigned___int64> FVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForElementType<unsigned___int64> local_138;
  undefined8 local_130;
  ulong64 local_128;
  FMemMark local_120;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
  *local_f0;
  int local_e8;
  int local_e4;
  ulong64 local_e0;
  TMap<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>_>
  *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  code *local_78;
  undefined1 *local_70;
  undefined4 local_4c;
  
  if (((this->NewConstraints).ArrayNum != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewConstraints.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                         ,0x82d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar7 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_70 = local_res20;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar7);
  uVar14 = 0;
  uVar12 = 0;
  local_130 = 0;
  local_138.Data = (ulong64 *)0x0;
  local_120.Mem = (FMemStackBase *)(pFVar8 + 2);
  local_120.Top = (local_120.Mem)->Top;
  local_120.SavedChunk = *(FTaggedMemory **)(pFVar8 + 4);
  local_120.bPopped = false;
  local_120.NextTopmostMark = *(FMemMark **)(pFVar8 + 5);
  pFVar8[5] = (FTlsAutoCleanup)&local_120;
  *(int *)(pFVar8 + 6) = *(int *)(pFVar8 + 6) + 1;
  uVar16 = *(int *)&(this->Constraints).field_0x8 - *(int *)&(this->Constraints).field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  uVar15 = uVar14;
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<4>::ForElementType<unsigned___int64>_>
              (8,8,uVar16,&local_138,0,(int *)((longlong)&local_130 + 4));
    uVar15 = local_130 & 0xffffffff;
  }
  FVar11.Data = local_138.Data;
  local_f0 = (TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
              *)&this->Constraints;
  uStack_cc = 1;
  uVar16 = *(uint *)&(this->Constraints).field_0x28;
  local_c8 = &(this->Constraints).field_0x10;
  local_b8 = 0;
  uStack_bc = uVar12;
  if (uVar16 != 0) {
    puVar7 = *(uint **)&(this->Constraints).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_c8;
    }
    uVar6 = *puVar7;
    uVar17 = uVar14;
    local_b8 = 0;
    uVar12 = 0;
    while (uVar6 == 0) {
      iVar13 = (int)uVar14;
      local_b8 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)local_b8;
      uVar12 = iVar13 + 1;
      uVar14 = (ulonglong)uVar12;
      uStack_bc = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_1439da34f;
      uVar6 = puVar7[(longlong)iVar13 + 1];
    }
    uStack_cc = -uVar6 & uVar6;
    uVar14 = (ulonglong)uStack_cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e8 = (int)lVar9;
    uStack_bc = (local_b8 - 1) + local_e8;
    if ((int)uVar16 < (int)uStack_bc) {
      uStack_bc = uVar16;
    }
  }
LAB_1439da34f:
  uStack_b4 = local_4c;
  iStack_b0 = *(int *)&(this->Constraints).field_0x8 - *(int *)&(this->Constraints).field_0x34;
  TStack_a0._padding_ = CONCAT44(uStack_cc,uVar12);
  uVar6 = *(uint *)&(this->Constraints).field_0x28;
  uStack_c0 = 0xffffffff;
  local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Constraints).field_0x10;
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  uVar20 = uVar6 & 0xffffffe0;
  iVar13 = (int)uVar6 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = (TMap<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>_>
              *)local_f0;
  uStack_d0 = uVar12;
  local_a8 = local_f0;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  if ((((int)uVar6 < 0) || ((int)uVar16 < (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = local_f0;
  uVar12 = *(uint *)&(this->Constraints).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Constraints).field_0x10;
  if (uVar6 != uVar12) {
    puVar18 = *(undefined1 **)&(this->Constraints).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar19;
    }
    uVar16 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar13;
      uVar20 = uVar20 + 0x20;
      iVar13 = iVar13 + 1;
      uVar6 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1439da470;
      uVar16 = *(uint *)(puVar18 + lVar9 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e4 = (int)lVar9;
    uVar6 = local_e4 + -1 + uVar20;
    if ((int)uVar12 < (int)uVar6) {
      uVar6 = uVar12;
    }
  }
LAB_1439da470:
  while( true ) {
    pTVar4 = local_a8;
    iVar13 = (int)uVar15;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      pTVar19 = local_f8;
    }
    this_00 = local_f0;
    if (((TStack_a0.CurrentBitIndex == uVar6) && (TStack_a0.Array == pTVar19)) && (pTVar4 == pTVar3)
       ) break;
    puVar10 = (ulong64 *)
              ((longlong)TStack_a0.CurrentBitIndex * 0x20 + *(longlong *)&pTVar4->Elements);
    local_128 = *puVar10;
    uVar1 = puVar10[2];
    if ((*(int *)(uVar1 + 0x14c) < param_1) && (*(longlong *)(uVar1 + 0x10) == 0)) {
      if ((FVar11.Data <= &local_128) &&
         ((&local_128 < FVar11.Data + local_130._4_4_ &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar13 == local_130._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<4>::ForElementType<unsigned___int64>_>
                           (0x808,&local_138,(int *)((longlong)&local_130 + 4));
        FVar11.Data = local_138.Data;
      }
      uVar15 = (ulonglong)(iVar13 + 1U);
      FVar11.Data[iVar13] = local_128;
      local_130 = CONCAT44(local_130._4_4_,iVar13 + 1U);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    pTVar19 = local_f8;
  }
  puVar10 = FVar11.Data + iVar13;
  for (; FVar11.Data != puVar10; FVar11.Data = FVar11.Data + 1) {
    local_e0 = *FVar11.Data;
    if (*(int *)&(this->Constraints).field_0x8 != *(int *)&(this->Constraints).field_0x34) {
      TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                (this_00,(int)(local_e0 >> 0x20) * 0x17 + (int)local_e0,&local_e0);
    }
  }
  if (local_120.bPopped == false) {
    if (((local_120.Mem)->TopMark != &local_120) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_120.bPopped = true;
    (local_120.Mem)->NumMarks = (local_120.Mem)->NumMarks + -1;
    if (local_120.SavedChunk != (local_120.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_120.Mem,local_120.SavedChunk);
    }
    (local_120.Mem)->Top = local_120.Top;
    (local_120.Mem)->TopMark = local_120.NextTopmostMark;
  }
  return;
}

// ResetImpl @ 1439dd9c0

void __thiscall Chaos::FGenericParticlePairMidPhase::ResetImpl(FGenericParticlePairMidPhase *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = 1 < *(int *)&(this->Constraints).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
                      *)&this->Constraints);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->Constraints,0,*(int *)&(this->Constraints).field_0x8);
  puVar1 = &(this->Constraints).field_0xc;
  *(undefined4 *)&(this->Constraints).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->Constraints,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Constraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Constraints).field_0x34 = 0;
  iVar3 = *(int *)&(this->Constraints).field_0x2c;
  *(undefined4 *)&(this->Constraints).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Constraints).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Constraints).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->Constraints).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
              *)&this->Constraints);
  }
  piVar2 = &(this->NewConstraints).ArrayMax;
  (this->NewConstraints).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NewConstraints).AllocatorInstance,0,piVar2);
  }
  return;
}

// SetConvexOptimizationIsActive @ 1439de2e0

void __thiscall
Chaos::FGenericParticlePairMidPhase::SetConvexOptimizationIsActive
          (FGenericParticlePairMidPhase *this,bool param_1,
          TFunctionRef<void___cdecl(Chaos::FPBDCollisionConstraint_*)> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  byte bVar12;
  ushort uVar13;
  int iVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar13 = (ushort)(param_1 | 8) << 5 | *(ushort *)((longlong)&this->_padding_ + 2) & 0xffdf;
  *(ushort *)((longlong)&this->_padding_ + 2) = uVar13;
  if ((CVars::bChaosMidPhaseModifierConvexOptimizerFix != false) &&
     (bVar12 = (byte)uVar13, ((bVar12 >> 1 ^ bVar12) & 0x20) != 0)) {
    iVar10 = 0;
    iVar14 = 0;
    uVar5 = 1;
    iVar2 = *(int *)&(this->Constraints).field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Constraints).field_0x10;
    iVar6 = 0;
    if (iVar2 != 0) {
      puVar15 = *(uint **)&(this->Constraints).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_60.Array;
      }
      uVar9 = *puVar15;
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar10;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar10 + 1;
        iVar6 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1439de3ce;
        uVar9 = puVar15[lVar7 + 1];
      }
      uVar5 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (int)lVar7 + -1 + iVar14;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
    }
LAB_1439de3ce:
    uVar9 = *(uint *)&(this->Constraints).field_0x28;
    uVar8 = uVar9 & 0xffffffe0;
    puVar16 = &(this->Constraints).field_0x10;
    TStack_60.CurrentBitIndex = iVar6;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar5,iVar10);
    iVar10 = (int)uVar9 >> 5;
    TStack_60._28_4_ = iVar6;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->Constraints).field_0x8 -
                         *(int *)&(this->Constraints).field_0x34);
    if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = *(uint *)&(this->Constraints).field_0x28;
    if (uVar9 != uVar5) {
      puVar11 = *(undefined1 **)&(this->Constraints).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar16;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar10;
        uVar8 = uVar8 + 0x20;
        iVar10 = iVar10 + 1;
        uVar9 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1439de4e0;
        uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar8;
      if ((int)uVar5 < (int)uVar9) {
        uVar9 = uVar5;
      }
    }
LAB_1439de4e0:
    while( true ) {
      if (*(int *)&(this->Constraints).field_0x8 - *(int *)&(this->Constraints).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar9) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) break;
      local_res20 = *(undefined8 *)
                     ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                     *(longlong *)&(this->Constraints).field_0x0);
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>,0>,FDefaultSetAllocator>
             *)&this->Constraints);
  }
  return;
}

// UpdateCollision @ 1439e28e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FGenericParticlePairMidPhase::UpdateCollision
          (FGenericParticlePairMidPhase *this,FPBDCollisionConstraint *param_1,double param_2,
          double param_3,FCollisionContext *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  TTransform<double> *pTVar18;
  ushort uVar19;
  FFlags *pFVar20;
  int iVar21;
  undefined1 auStack_328 [32];
  FGenericParticleHandleImp local_308;
  FGenericParticleHandleImp local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TRigidTransform<double,3> local_178;
  TRigidTransform<double,3> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_308.MHandle = param_1->Particle[0];
  pTVar18 = (TTransform<double> *)FGenericParticleHandleImp::GetTransformPQ(&local_308,&local_178);
  local_238.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_238.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_238.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_238.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_238.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_238.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_238.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_238.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_238.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_238.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_238.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_238.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_238,(TTransform<double> *)param_1->ImplicitTransform,pTVar18);
  local_300.MHandle = param_1->Particle[1];
  dVar4 = local_238.Rotation.XY.m128d_f64[0];
  dVar5 = local_238.Rotation.XY.m128d_f64[1];
  dVar6 = local_238.Rotation.ZW.m128d_f64[0];
  dVar7 = local_238.Rotation.ZW.m128d_f64[1];
  dVar8 = local_238.Translation.XY.m128d_f64[0];
  dVar9 = local_238.Translation.XY.m128d_f64[1];
  dVar10 = local_238.Translation.ZW.m128d_f64[0];
  dVar11 = local_238.Translation.ZW.m128d_f64[1];
  dVar12 = local_238.Scale3D.XY.m128d_f64[0];
  dVar13 = local_238.Scale3D.XY.m128d_f64[1];
  dVar14 = local_238.Scale3D.ZW.m128d_f64[0];
  dVar15 = local_238.Scale3D.ZW.m128d_f64[1];
  local_298 = local_238.Rotation.XY.m128d_f64[0];
  dStack_290 = local_238.Rotation.XY.m128d_f64[1];
  local_288 = local_238.Rotation.ZW.m128d_f64[0];
  dStack_280 = local_238.Rotation.ZW.m128d_f64[1];
  local_278 = local_238.Translation.XY.m128d_f64[0];
  dStack_270 = local_238.Translation.XY.m128d_f64[1];
  local_268 = local_238.Translation.ZW.m128d_f64[0];
  dStack_260 = local_238.Translation.ZW.m128d_f64[1];
  local_258 = local_238.Scale3D.XY.m128d_f64[0];
  dStack_250 = local_238.Scale3D.XY.m128d_f64[1];
  local_248 = local_238.Scale3D.ZW.m128d_f64[0];
  dStack_240 = local_238.Scale3D.ZW.m128d_f64[1];
  pTVar18 = (TTransform<double> *)FGenericParticleHandleImp::GetTransformPQ(&local_300,&local_118);
  local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_1d8,(TTransform<double> *)(param_1->ImplicitTransform + 1),pTVar18);
  local_2f8 = local_1d8.Rotation.XY.m128d_f64[0];
  dStack_2f0 = local_1d8.Rotation.XY.m128d_f64[1];
  iVar1 = (param_1->ContainerCookie).LastUsedEpoch;
  local_2a8 = local_1d8.Scale3D.ZW.m128d_f64[0];
  dStack_2a0 = local_1d8.Scale3D.ZW.m128d_f64[1];
  local_2e8 = local_1d8.Rotation.ZW.m128d_f64[0];
  dStack_2e0 = local_1d8.Rotation.ZW.m128d_f64[1];
  local_2d8 = local_1d8.Translation.XY.m128d_f64[0];
  dStack_2d0 = local_1d8.Translation.XY.m128d_f64[1];
  local_2c8 = local_1d8.Translation.ZW.m128d_f64[0];
  dStack_2c0 = local_1d8.Translation.ZW.m128d_f64[1];
  local_2b8 = local_1d8.Scale3D.XY.m128d_f64[0];
  dStack_2b0 = local_1d8.Scale3D.XY.m128d_f64[1];
  iVar21 = param_4->Allocator->CurrentEpoch;
  *(double *)param_1->ShapeWorldTransforms = dVar4;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x8 = dVar5;
  iVar21 = iVar21 + -1;
  *(double *)(param_1->ShapeWorldTransforms + 1) = local_1d8.Rotation.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x8 = local_1d8.Rotation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x10 = dVar6;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x18 = dVar7;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x10 = local_1d8.Rotation.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x18 = local_1d8.Rotation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x20 = dVar8;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x28 = dVar9;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x20 = local_1d8.Translation.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x28 = local_1d8.Translation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x30 = dVar10;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x38 = dVar11;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x30 = local_1d8.Translation.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x38 = local_1d8.Translation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x40 = dVar12;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x48 = dVar13;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x40 = local_1d8.Scale3D.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x48 = local_1d8.Scale3D.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x50 = local_1d8.Scale3D.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x58 = local_1d8.Scale3D.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x50 = dVar14;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x58 = dVar15;
  param_1->CullDistance = (float)param_2;
  if (iVar1 < iVar21) {
LAB_1439e2b9c:
    FPBDCollisionConstraint::ResetManifold(param_1);
  }
  else {
    iVar2 = (param_1->ManifoldPoints).ArrayNum;
    if (iVar2 < 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
    }
    else if (iVar2 == 0) goto LAB_1439e2b9c;
  }
  if (((param_4->Settings->bAllowManifoldReuse == false) || (iVar1 < iVar21)) ||
     ((*(byte *)&param_1->Flags >> 4 & 1) == 0)) {
    FPBDCollisionConstraint::ResetActiveManifoldContacts(param_1);
  }
  else {
    bVar16 = FPBDCollisionConstraint::TryRestoreManifold(param_1);
    if (bVar16) goto LAB_1439e2c15;
  }
  if (param_4->Settings->bDeferNarrowPhase == false) {
    Collisions::UpdateConstraint
              (param_1,param_1->ShapeWorldTransforms,param_1->ShapeWorldTransforms + 1,param_3);
  }
  FPBDCollisionConstraint::SetLastShapeWorldTransforms
            (param_1,(TRigidTransform<double,3> *)&local_298,(TRigidTransform<double,3> *)&local_2f8
            );
LAB_1439e2c15:
  pFVar20 = &param_1->Flags;
  dVar4 = FPBDCollisionConstraint::GetPhi(param_1);
  if ((dVar4 <= param_2) || (param_4->Settings->bDeferNarrowPhase != false)) {
    pFVar20->Bits = pFVar20->Bits & 0xdfff;
    bVar16 = true;
    uVar19 = 0;
    if (iVar1 < iVar21) {
      uVar19 = 0x2000;
    }
    pFVar20->Bits = pFVar20->Bits | uVar19;
  }
  else {
    bVar16 = false;
  }
  return bVar16;
}

// UpdateCollisionCCD @ 1439e2ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FGenericParticlePairMidPhase::UpdateCollisionCCD
          (FGenericParticlePairMidPhase *this,FPBDCollisionConstraint *param_1,double param_2,
          double param_3,FCollisionContext *param_4)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  EObjectStateType EVar15;
  bool bVar16;
  uint uVar17;
  TTransform<double> *pTVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  TVector<double,3> *pTVar20;
  longlong lVar21;
  TGeometryParticleHandleImp<double,3,1> *pTVar22;
  uint uVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  TGeometryParticleHandleImp<double,3,1> *pTVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_5f8 [32];
  FGenericParticleHandleImp local_5c8;
  FGenericParticleHandleImp local_5c0;
  FGenericParticleHandleImp local_5b8;
  FGenericParticleHandleImp local_5b0;
  FGenericParticleHandleImp local_5a8;
  FGenericParticleHandleImp local_5a0;
  undefined1 local_598 [24];
  TVector<double,3> local_580;
  double local_558;
  TTransform<double> local_548;
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  TTransform<double> local_428;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  TRigidTransform<double,3> local_188;
  TRigidTransform<double,3> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  if ((((param_1->Flags).Bits >> 10 & 1) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constraint->GetCCDSweepEnabled()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                          ,0x7e6,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  local_5b8.MHandle = param_1->Particle[0];
  pTVar18 = (TTransform<double> *)FGenericParticleHandleImp::GetTransformPQ(&local_5b8,&local_188);
  local_548.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_548.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_548.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_548.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_548.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_548.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_548.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_548.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_548.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_548.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_548.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_548.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_548.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_548.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_548.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_548.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_548.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_548.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_548,(TTransform<double> *)param_1->ImplicitTransform,pTVar18);
  local_5b0.MHandle = param_1->Particle[1];
  local_3c8 = local_548.Rotation.XY.m128d_f64[0];
  dStack_3c0 = local_548.Rotation.XY.m128d_f64[1];
  local_3b8 = local_548.Rotation.ZW.m128d_f64[0];
  dStack_3b0 = local_548.Rotation.ZW.m128d_f64[1];
  local_3a8 = local_548.Translation.XY.m128d_f64[0];
  dStack_3a0 = local_548.Translation.XY.m128d_f64[1];
  local_398 = local_548.Translation.ZW.m128d_f64[0];
  dStack_390 = local_548.Translation.ZW.m128d_f64[1];
  local_388 = local_548.Scale3D.XY.m128d_f64[0];
  dStack_380 = local_548.Scale3D.XY.m128d_f64[1];
  local_378 = local_548.Scale3D.ZW.m128d_f64[0];
  dStack_370 = local_548.Scale3D.ZW.m128d_f64[1];
  pTVar18 = (TTransform<double> *)FGenericParticleHandleImp::GetTransformPQ(&local_5b0,&local_128);
  local_4e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_4e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_4e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_4e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_4e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_4e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_4e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_4e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_4e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_4e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_4e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_4e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_4e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_4e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_4e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_4e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_4e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_4e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_4e8,(TTransform<double> *)(param_1->ImplicitTransform + 1),pTVar18);
  local_1c8 = local_4e8.Translation.XY.m128d_f64[0];
  dStack_1c0 = local_4e8.Translation.XY.m128d_f64[1];
  local_1b8 = local_4e8.Translation.ZW.m128d_f64[0];
  dStack_1b0 = local_4e8.Translation.ZW.m128d_f64[1];
  local_1a8 = local_4e8.Scale3D.XY.m128d_f64[0];
  dStack_1a0 = local_4e8.Scale3D.XY.m128d_f64[1];
  local_198 = local_4e8.Scale3D.ZW.m128d_f64[0];
  dStack_190 = local_4e8.Scale3D.ZW.m128d_f64[1];
  *(double *)param_1->ShapeWorldTransforms = local_3c8;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x8 = dStack_3c0;
  local_1e8 = local_4e8.Rotation.XY.m128d_f64[0];
  dStack_1e0 = local_4e8.Rotation.XY.m128d_f64[1];
  local_1d8 = local_4e8.Rotation.ZW.m128d_f64[0];
  dStack_1d0 = local_4e8.Rotation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x10 = local_3b8;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x18 = dStack_3b0;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x20 = local_3a8;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x28 = dStack_3a0;
  *(double *)(param_1->ShapeWorldTransforms + 1) = local_4e8.Rotation.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x8 = local_4e8.Rotation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x10 = local_4e8.Rotation.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x18 = local_4e8.Rotation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x30 = local_398;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x38 = dStack_390;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x40 = local_388;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x48 = dStack_380;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x20 = local_4e8.Translation.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x28 = local_4e8.Translation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x30 = local_4e8.Translation.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x38 = local_4e8.Translation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x40 = local_4e8.Scale3D.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x48 = local_4e8.Scale3D.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x50 = local_378;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x58 = dStack_370;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x50 = local_4e8.Scale3D.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x58 = local_4e8.Scale3D.ZW.m128d_f64[1];
  param_1->CullDistance = (float)param_2;
  FPBDCollisionConstraint::ResetManifold(param_1);
  FPBDCollisionConstraint::ResetActiveManifoldContacts(param_1);
  pTVar22 = param_1->Particle[0];
  pTVar4 = param_1->Particle[1];
  local_5c8.MHandle = pTVar4;
  local_5c0.MHandle = pTVar22;
  bVar13 = FGenericParticleHandleImp::IsDynamic(&local_5c0);
  pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  uVar17 = 0;
  if (bVar13) {
    pTVar19 = pTVar25;
    if (1 < *(byte *)((longlong)&pTVar22->_padding_ + 4)) {
      pTVar19 = pTVar22;
    }
    uVar3 = (uint)pTVar19->_padding_;
    lVar21 = pTVar19->_padding_;
    uVar23 = uVar17;
    if ((int)uVar3 < *(int *)(lVar21 + 0x568)) {
      uVar23 = ~uVar3 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    lVar21 = *(longlong *)(lVar21 + 0x560);
  }
  else {
    uVar3 = (uint)pTVar22->_padding_;
    lVar21 = pTVar22->_padding_;
    uVar23 = uVar17;
    if ((int)uVar3 < *(int *)(lVar21 + 0x50)) {
      uVar23 = ~uVar3 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    lVar21 = *(longlong *)(lVar21 + 0x48);
  }
  lVar26 = (longlong)(int)uVar3;
  fVar1 = *(float *)(lVar21 + lVar26 * 0x10);
  uVar2 = *(undefined8 *)(lVar21 + 8 + lVar26 * 0x10);
  dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
  pTVar19 = pTVar25;
  if (*(char *)((longlong)&pTVar22->_padding_ + 4) != '\0') {
    pTVar19 = pTVar22;
  }
  dVar7 = (double)*(float *)(lVar21 + 4 + lVar26 * 0x10);
  if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1439e30b0:
    pTVar19 = pTVar25;
    if (*(char *)((longlong)&pTVar22->_padding_ + 4) != '\0') {
      pTVar19 = pTVar22;
    }
    if (pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar24 = pTVar25;
      if (1 < *(byte *)((longlong)&pTVar19->_padding_ + 4)) {
        pTVar24 = pTVar19;
      }
      if (pTVar24 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar15 = Kinematic;
      }
      else {
        EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
      }
      if (EVar15 == Sleeping) goto LAB_1439e30dd;
    }
    pTVar20 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pTVar22->_padding_,(int)pTVar22->_padding_);
  }
  else {
    pTVar24 = pTVar25;
    if (1 < *(byte *)((longlong)&pTVar19->_padding_ + 4)) {
      pTVar24 = pTVar19;
    }
    if (pTVar24 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar15 = Kinematic;
    }
    else {
      EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
    }
    if (EVar15 != Dynamic) goto LAB_1439e30b0;
LAB_1439e30dd:
    pTVar19 = pTVar25;
    if (1 < *(byte *)((longlong)&pTVar22->_padding_ + 4)) {
      pTVar19 = pTVar22;
    }
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
  }
  pTVar19 = pTVar25;
  if (*(char *)((longlong)&pTVar22->_padding_ + 4) != '\0') {
    pTVar19 = pTVar22;
  }
  if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar27 = FGenericParticleHandleImp::ZeroVector._16_4_;
    uVar28 = FGenericParticleHandleImp::ZeroVector._20_4_;
    local_580._0_4_ = FGenericParticleHandleImp::ZeroVector._0_4_;
    local_580._4_4_ = FGenericParticleHandleImp::ZeroVector._4_4_;
    local_580._8_4_ = FGenericParticleHandleImp::ZeroVector._8_4_;
    local_580._12_4_ = FGenericParticleHandleImp::ZeroVector._12_4_;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar19->_padding_,&local_580,
               (int)pTVar19->_padding_);
    uVar27 = local_580._16_4_;
    uVar28 = local_580._20_4_;
  }
  dVar12 = _UNK_150689688;
  dVar11 = ___xmm_3ff00000000000003ff0000000000000;
  dVar10 = _UNK_150689518;
  dVar9 = ___xmm_00000000000000003ff0000000000000;
  local_558 = (double)CONCAT44(uVar28,uVar27);
  local_2a8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar20->field_0x10 - param_3 * local_558;
  dVar6 = *(double *)&pTVar20->field_0x8 -
          param_3 * (double)CONCAT44(local_580._12_4_,local_580._8_4_);
  local_2a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
  local_2a8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar2;
  local_2a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_2a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_2a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_2a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_2a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_2a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
  local_2a8.Rotation.XY.m128d_f64[0] = (double)fVar1;
  local_2a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_2a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
  local_2a8.Translation.XY.m128d_f64[0] =
       *(double *)pTVar20 - param_3 * (double)CONCAT44(local_580._4_4_,local_580._0_4_);
  local_2a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_2a8.Translation.ZW.m128d_f64[1] = 0.0;
  bVar13 = FGenericParticleHandleImp::IsDynamic(&local_5c8);
  if (bVar13) {
    pTVar22 = pTVar25;
    if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
      pTVar22 = pTVar4;
    }
    uVar3 = (uint)pTVar22->_padding_;
    lVar21 = pTVar22->_padding_;
    if ((int)uVar3 < *(int *)(lVar21 + 0x568)) {
      uVar17 = ~uVar3 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    lVar21 = *(longlong *)(lVar21 + 0x560);
  }
  else {
    uVar3 = (uint)pTVar4->_padding_;
    lVar21 = pTVar4->_padding_;
    if ((int)uVar3 < *(int *)(lVar21 + 0x50)) {
      uVar17 = ~uVar3 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    lVar21 = *(longlong *)(lVar21 + 0x48);
  }
  lVar26 = (longlong)(int)uVar3;
  fVar1 = *(float *)(lVar21 + lVar26 * 0x10);
  uVar2 = *(undefined8 *)(lVar21 + 8 + lVar26 * 0x10);
  dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
  pTVar22 = pTVar25;
  if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
    pTVar22 = pTVar4;
  }
  dVar7 = (double)*(float *)(lVar21 + 4 + lVar26 * 0x10);
  if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1439e32f8:
    pTVar22 = pTVar25;
    if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
      pTVar22 = pTVar4;
    }
    if (pTVar22 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar19 = pTVar25;
      if (1 < *(byte *)((longlong)&pTVar22->_padding_ + 4)) {
        pTVar19 = pTVar22;
      }
      if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar15 = Kinematic;
      }
      else {
        EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
      }
      if (EVar15 == Sleeping) goto LAB_1439e3325;
    }
    pTVar20 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pTVar4->_padding_,(int)pTVar4->_padding_);
  }
  else {
    pTVar19 = pTVar25;
    if (1 < *(byte *)((longlong)&pTVar22->_padding_ + 4)) {
      pTVar19 = pTVar22;
    }
    if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar15 = Kinematic;
    }
    else {
      EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
    }
    if (EVar15 != Dynamic) goto LAB_1439e32f8;
LAB_1439e3325:
    pTVar22 = pTVar25;
    if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
      pTVar22 = pTVar4;
    }
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar22);
  }
  pTVar22 = pTVar25;
  if (*(char *)((longlong)&pTVar4->_padding_ + 4) != '\0') {
    pTVar22 = pTVar4;
  }
  if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar27 = FGenericParticleHandleImp::ZeroVector._16_4_;
    uVar28 = FGenericParticleHandleImp::ZeroVector._20_4_;
    local_598._0_4_ = FGenericParticleHandleImp::ZeroVector._0_4_;
    local_598._4_4_ = FGenericParticleHandleImp::ZeroVector._4_4_;
    local_598._8_4_ = FGenericParticleHandleImp::ZeroVector._8_4_;
    local_598._12_4_ = FGenericParticleHandleImp::ZeroVector._12_4_;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar22->_padding_,
               (TVector<double,3> *)local_598,(int)pTVar22->_padding_);
    uVar27 = (undefined4)local_598._16_8_;
    uVar28 = SUB84(local_598._16_8_,4);
  }
  local_598._16_8_ = CONCAT44(uVar28,uVar27);
  local_248.Translation.ZW.m128d_f64[0] =
       *(double *)&pTVar20->field_0x10 - param_3 * (double)local_598._16_8_;
  dVar6 = *(double *)&pTVar20->field_0x8 -
          param_3 * (double)CONCAT44(local_598._12_4_,local_598._8_4_);
  local_248.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
  local_248.Rotation.ZW.m128d_f64[0] = (double)(float)uVar2;
  local_248.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_248.Scale3D.XY.m128d_f64[0] = dVar11;
  local_248.Scale3D.XY.m128d_f64[1] = dVar12;
  local_248.Scale3D.ZW.m128d_f64[0] = dVar9;
  local_248.Scale3D.ZW.m128d_f64[1] = dVar10;
  local_248.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
  local_248.Rotation.XY.m128d_f64[0] = (double)fVar1;
  local_248.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_248.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
  local_248.Translation.XY.m128d_f64[0] =
       *(double *)pTVar20 - param_3 * (double)CONCAT44(local_598._4_4_,local_598._0_4_);
  local_248.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_248.Translation.ZW.m128d_f64[1] = 0.0;
  local_488.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_488.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_488.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_488.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_488.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_488.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_488.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_488.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_488.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_488.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_488.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_488.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_488.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_488.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_488.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_488.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_488.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_488.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_488,(TTransform<double> *)param_1->ImplicitTransform,&local_2a8);
  local_368 = local_488.Rotation.XY.m128d_f64[0];
  dStack_360 = local_488.Rotation.XY.m128d_f64[1];
  local_348 = local_488.Translation.XY.m128d_f64[0];
  dStack_340 = local_488.Translation.XY.m128d_f64[1];
  local_328 = local_488.Scale3D.XY.m128d_f64[0];
  dStack_320 = local_488.Scale3D.XY.m128d_f64[1];
  local_358 = local_488.Rotation.ZW.m128d_f64[0];
  dStack_350 = local_488.Rotation.ZW.m128d_f64[1];
  local_428.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_428.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_428.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_338 = local_488.Translation.ZW.m128d_f64[0];
  dStack_330 = local_488.Translation.ZW.m128d_f64[1];
  local_318 = local_488.Scale3D.ZW.m128d_f64[0];
  dStack_310 = local_488.Scale3D.ZW.m128d_f64[1];
  local_428.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_428.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_428.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_428.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_428.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_428.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_428.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_428.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_428.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_428.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_428.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_428.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_428.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_428.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_428.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_428,(TTransform<double> *)(param_1->ImplicitTransform + 1),&local_248);
  local_308 = local_428.Rotation.XY.m128d_f64[0];
  dStack_300 = local_428.Rotation.XY.m128d_f64[1];
  local_2f8 = local_428.Rotation.ZW.m128d_f64[0];
  dStack_2f0 = local_428.Rotation.ZW.m128d_f64[1];
  local_2e8 = local_428.Translation.XY.m128d_f64[0];
  dStack_2e0 = local_428.Translation.XY.m128d_f64[1];
  local_2d8 = local_428.Translation.ZW.m128d_f64[0];
  dStack_2d0 = local_428.Translation.ZW.m128d_f64[1];
  local_2c8 = local_428.Scale3D.XY.m128d_f64[0];
  dStack_2c0 = local_428.Scale3D.XY.m128d_f64[1];
  local_2b8 = local_428.Scale3D.ZW.m128d_f64[0];
  dStack_2b0 = local_428.Scale3D.ZW.m128d_f64[1];
  bVar13 = Collisions::UpdateConstraintSwept
                     (param_1,(TRigidTransform<double,3> *)&local_368,
                      (TRigidTransform<double,3> *)&local_308,param_3);
  if (CVars::ChaosSolverDrawCCDInteractions != 0) {
    local_5a8.MHandle = param_1->Particle[0];
    bVar16 = FGenericParticleHandleImp::CCDEnabled(&local_5a8);
    if (bVar16) {
      Chaos::DebugDraw::DrawShape
                ((TRigidTransform<double,3> *)&local_368,param_1->Implicit[0],
                 (FPerShapeData *)param_1->Shape[0],&FColor::Black,
                 Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      Chaos::DebugDraw::DrawShape
                ((TRigidTransform<double,3> *)&local_3c8,param_1->Implicit[0],
                 (FPerShapeData *)param_1->Shape[0],&FColor::White,
                 Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    local_5a0.MHandle = param_1->Particle[1];
    bVar16 = FGenericParticleHandleImp::CCDEnabled(&local_5a0);
    if (bVar16) {
      Chaos::DebugDraw::DrawShape
                ((TRigidTransform<double,3> *)&local_308,param_1->Implicit[1],
                 (FPerShapeData *)param_1->Shape[1],&FColor::Black,
                 Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      Chaos::DebugDraw::DrawShape
                ((TRigidTransform<double,3> *)&local_1e8,param_1->Implicit[1],
                 (FPerShapeData *)param_1->Shape[1],&FColor::White,
                 Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
  }
  if (bVar13) {
    if (param_1->CCDTimeOfImpact <= __real_3f800000 && __real_3f800000 != param_1->CCDTimeOfImpact)
    {
      bVar13 = true;
      goto LAB_1439e3764;
    }
    if (param_1->CCDTimeOfImpact <= __real_3f800000 && __real_3f800000 != param_1->CCDTimeOfImpact)
    {
      return false;
    }
  }
  Collisions::UpdateConstraint
            (param_1,param_1->ShapeWorldTransforms,param_1->ShapeWorldTransforms + 1,param_3);
  (param_1->Flags).Bits = (param_1->Flags).Bits & 0xfbff;
  dVar8 = FPBDCollisionConstraint::GetPhi(param_1);
  bVar13 = dVar8 < param_2;
  if (param_2 <= dVar8) {
    return bVar13;
  }
LAB_1439e3764:
  if ((int)this->_padding_ < param_4->Allocator->CurrentEpoch + -1) {
    pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x2000;
  }
  (param_1->Flags).Bits = (ushort)pTVar25 | (param_1->Flags).Bits & 0xdfff;
  return bVar13;
}

// WakeCollisionsImpl @ 1439e3990

void __thiscall
Chaos::FGenericParticlePairMidPhase::WakeCollisionsImpl
          (FGenericParticlePairMidPhase *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FPBDCollisionConstraint *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Constraints).field_0x28;
  puVar1 = &(this->Constraints).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Constraints).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1439e3a3d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1439e3a3d:
  uVar11 = *(uint *)&(this->Constraints).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Constraints).field_0x8 -
                       *(int *)&(this->Constraints).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = local_res10;
  uVar7 = *(uint *)&(this->Constraints).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Constraints).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1439e3b41;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1439e3b41:
  while( true ) {
    if (*(int *)&(this->Constraints).field_0x8 - *(int *)&(this->Constraints).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->Constraints;
    pFVar4 = *(FPBDCollisionConstraint **)(lVar9 + 0x10);
    iVar12 = (pFVar4->ContainerCookie).LastUsedEpoch;
    if ((int)this->_padding_ <= iVar12) {
      if (CVars::bChaosMidPhaseActivateWakingConstraints == false) {
        (pFVar4->ContainerCookie).LastUsedEpoch = iVar3;
        puVar15 = (uint *)(*(longlong *)(lVar9 + 0x10) + 0x150);
        *puVar15 = *puVar15 | 0x7fffffff;
        *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 0x154) = 0xffffffff;
      }
      else {
        if (iVar12 != *(int *)(pFVar4->_padding_ + 0x78)) {
          Chaos::Private::FCollisionConstraintAllocator::AddActiveConstraintImpl
                    ((FCollisionConstraintAllocator *)(pFVar4->_padding_ + 0x28),pFVar4);
        }
        (pFVar4->Flags).Bits = (pFVar4->Flags).Bits & 0xfffd;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 1504a3ef0

bool __thiscall
`Chaos::FGenericParticlePairMidPhase::FindOrCreateConstraint'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6000059167799245054>);
  if (bVar2) {
    Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
              (*(TGeometryParticlesImp<double,3,0> **)**(longlong **)((longlong)this + 0x10),
               *(int *)((undefined8 *)**(longlong **)((longlong)this + 0x10) + 1));
    Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
              (*(TGeometryParticlesImp<double,3,0> **)**(longlong **)((longlong)this + 8),
               *(int *)((undefined8 *)**(longlong **)((longlong)this + 8) + 1));
    Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
              ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)(*(longlong *)this + 0x18),
               *(int *)(*(undefined8 **)(*(longlong *)this + 0x18) + 1));
    Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
              ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)(*(longlong *)this + 0x10),
               *(int *)(*(undefined8 **)(*(longlong *)this + 0x10) + 1));
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6000059167799245054>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a4050

bool __thiscall
`Chaos::FGenericParticlePairMidPhase::FindOrCreateConstraint'::__l6::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6000059167799245034>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6000059167799245034>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

