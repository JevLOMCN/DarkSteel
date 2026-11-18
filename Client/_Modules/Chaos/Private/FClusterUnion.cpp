// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FClusterUnion @ 14388a4c0

FClusterUnion * __thiscall
Chaos::FClusterUnion::FClusterUnion(FClusterUnion *this,FClusterUnion *param_1)

{
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TArray<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::EClusterUnionConnectivityOperation>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TMap<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  FImplicitObject *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar11;
  undefined8 uVar12;
  FUniqueIdx *pFVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined6 uVar19;
  uint uVar20;
  byte bVar21;
  
  this->InternalCluster = param_1->InternalCluster;
  (this->Geometry).Reference = (FImplicitObject *)0x0;
  pFVar8 = (param_1->Geometry).Reference;
  (this->Geometry).Reference = pFVar8;
  if (pFVar8 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
    UNLOCK();
  }
  pTVar1 = &this->ChildParticles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChildParticles).ArrayMax;
  iVar7 = (param_1->ChildParticles).ArrayNum;
  pFVar9 = (param_1->ChildParticles).AllocatorInstance.Data;
  (this->ChildParticles).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 3);
  }
  pTVar1 = &this->GeometryChildParticles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GeometryChildParticles).ArrayMax;
  iVar7 = (param_1->GeometryChildParticles).ArrayNum;
  pFVar9 = (param_1->GeometryChildParticles).AllocatorInstance.Data;
  (this->GeometryChildParticles).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 3);
  }
  *(undefined8 *)&(this->ChildProperties).field_0x0 = 0;
  *(undefined8 *)&(this->ChildProperties).field_0x8 = 0;
  *(undefined8 *)&(this->ChildProperties).field_0x20 = 0;
  *(undefined4 *)&(this->ChildProperties).field_0x28 = 0;
  *(undefined4 *)&(this->ChildProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildProperties).field_0x34 = 0;
  *(undefined8 *)&(this->ChildProperties).field_0x40 = 0;
  *(undefined4 *)&(this->ChildProperties).field_0x48 = 0;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
               *)&this->ChildProperties,
              (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
               *)&param_1->ChildProperties);
  pTVar4 = &this->PendingConnectivityOperations;
  this->InternalIndex = param_1->InternalIndex;
  this->ExplicitIndex = param_1->ExplicitIndex;
  iVar7 = (param_1->Parameters).MaxNumConnections;
  bVar14 = (param_1->Parameters).bCleanCollisionParticles;
  bVar15 = (param_1->Parameters).bCopyCollisionParticles;
  bVar16 = (param_1->Parameters).bGenerateConnectionGraph;
  uVar17 = (param_1->Parameters).field_0xf;
  uVar5 = this->field_0xf8;
  (this->Parameters).CoillisionThicknessPercent = (param_1->Parameters).CoillisionThicknessPercent;
  (this->Parameters).MaxNumConnections = iVar7;
  (this->Parameters).bCleanCollisionParticles = bVar14;
  (this->Parameters).bCopyCollisionParticles = bVar15;
  (this->Parameters).bGenerateConnectionGraph = bVar16;
  (this->Parameters).field_0xf = uVar17;
  uVar18 = *(undefined4 *)&(param_1->Parameters).field_0x14;
  dVar10 = (param_1->Parameters).ConnectionGraphBoundsFilteringMargin;
  (this->Parameters).ConnectionMethod = (param_1->Parameters).ConnectionMethod;
  *(undefined4 *)&(this->Parameters).field_0x14 = uVar18;
  (this->Parameters).ConnectionGraphBoundsFilteringMargin = dVar10;
  pTVar11 = (param_1->Parameters).ClusterParticleHandle;
  (this->Parameters).CollisionParticles = (param_1->Parameters).CollisionParticles;
  (this->Parameters).ClusterParticleHandle = pTVar11;
  uVar12 = *(undefined8 *)&(param_1->Parameters).Scale.field_0x8;
  *(undefined8 *)&(this->Parameters).Scale = *(undefined8 *)&(param_1->Parameters).Scale;
  *(undefined8 *)&(this->Parameters).Scale.field_0x8 = uVar12;
  bVar14 = (param_1->Parameters).bIsAnchored;
  bVar15 = (param_1->Parameters).bEnableStrainOnCollision;
  uVar19 = *(undefined6 *)&(param_1->Parameters).field_0x4a;
  *(undefined8 *)&(this->Parameters).Scale.field_0x10 =
       *(undefined8 *)&(param_1->Parameters).Scale.field_0x10;
  (this->Parameters).bIsAnchored = bVar14;
  (this->Parameters).bEnableStrainOnCollision = bVar15;
  *(undefined6 *)&(this->Parameters).field_0x4a = uVar19;
  uVar18 = *(undefined4 *)&(param_1->ClusterUnionParameters).field_0x4;
  pFVar13 = (param_1->ClusterUnionParameters).UniqueIndex;
  (this->ClusterUnionParameters).ExplicitIndex = (param_1->ClusterUnionParameters).ExplicitIndex;
  *(undefined4 *)&(this->ClusterUnionParameters).field_0x4 = uVar18;
  (this->ClusterUnionParameters).UniqueIndex = pFVar13;
  uVar20 = (param_1->ClusterUnionParameters).ComponentId;
  iVar7 = (param_1->ClusterUnionParameters).GravityGroupOverride;
  uVar18 = *(undefined4 *)&(param_1->ClusterUnionParameters).field_0x1c;
  (this->ClusterUnionParameters).ActorId = (param_1->ClusterUnionParameters).ActorId;
  (this->ClusterUnionParameters).ComponentId = uVar20;
  (this->ClusterUnionParameters).GravityGroupOverride = iVar7;
  *(undefined4 *)&(this->ClusterUnionParameters).field_0x1c = uVar18;
  bVar21 = (this->bNeedsXRInitialization ^ param_1->bNeedsXRInitialization) & 1U ^ uVar5;
  this->field_0xf8 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0xf8) & 2 ^ bVar21;
  this->field_0xf8 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0xf8) & 4 ^ bVar21;
  this->field_0xf8 = bVar21;
  bVar21 = (bVar21 ^ param_1->field_0xf8) & 8 ^ bVar21;
  this->field_0xf8 = bVar21;
  bVar6 = param_1->field_0xf8;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->field_0xf8 = (bVar21 ^ bVar6) & 0x10 ^ bVar21;
  piVar2 = &(this->PendingConnectivityOperations).ArrayMax;
  iVar7 = (param_1->PendingConnectivityOperations).ArrayNum;
  pFVar9 = (param_1->PendingConnectivityOperations).AllocatorInstance.Data;
  (this->PendingConnectivityOperations).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 4);
  }
  this_00 = &this->PendingGeometryOperations;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PendingGeometryOperations).field_0x8 = 0;
  puVar3 = &(this->PendingGeometryOperations).field_0x48;
  *(undefined8 *)&(this->PendingGeometryOperations).field_0x20 = 0;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x28 = 0;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x34 = 0;
  *(undefined8 *)&(this->PendingGeometryOperations).field_0x40 = 0;
  *(undefined4 *)puVar3 = 0;
  if (this_00 != &param_1->PendingGeometryOperations) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->PendingGeometryOperations).field_0x38,
               (int *)puVar3,
               (ForElementType<FSetElementId> *)&(param_1->PendingGeometryOperations).field_0x38,
               *(int *)&(param_1->PendingGeometryOperations).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(this_00,(TSparseArray<TSparseSetElement<TTuple<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&param_1->PendingGeometryOperations);
  }
  return this;
}

// ~FClusterUnion @ 14388c920

void __thiscall Chaos::FClusterUnion::~FClusterUnion(FClusterUnion *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FImplicitObject *pFVar4;
  longlong lVar5;
  
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PendingGeometryOperations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PendingGeometryOperations);
  pFVar3 = (this->PendingConnectivityOperations).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->ChildProperties).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChildProperties).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildProperties);
  pFVar3 = (this->GeometryChildParticles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ChildParticles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->Geometry).Reference;
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar4->_padding_;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// AddPendingGeometryOperation @ 14389b2d0

void __thiscall
Chaos::FClusterUnion::AddPendingGeometryOperation
          (FClusterUnion *this,EClusterUnionGeometryOperation param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this_00;
  EClusterUnionGeometryOperation local_res10 [8];
  TPBDRigidParticleHandleImp<double,3,1> *local_res18 [2];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  this_00 = TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<enum_Chaos::EClusterUnionGeometryOperation_const_&>
                      (&this->PendingGeometryOperations,(int)(char)param_1,local_res10);
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>(this_00,local_res18);
  return;
}

// ClearAllPendingGeometryOperations @ 1438a83c0

void __thiscall Chaos::FClusterUnion::ClearAllPendingGeometryOperations(FClusterUnion *this)

{
  undefined1 *puVar1;
  TMap<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this->bGeometryModified = true;
  this_00 = &this->PendingGeometryOperations;
  bVar3 = 1 < *(int *)&(this->PendingGeometryOperations).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->PendingGeometryOperations).field_0x8);
  puVar1 = &(this->PendingGeometryOperations).field_0xc;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x34 = 0;
  iVar2 = *(int *)&(this->PendingGeometryOperations).field_0x2c;
  *(undefined4 *)&(this->PendingGeometryOperations).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PendingGeometryOperations).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingGeometryOperations).field_0x10
               ,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->PendingGeometryOperations).field_0x48 = 1;
    TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

// ClearPendingGeometryOperations @ 1438a8780

void __thiscall
Chaos::FClusterUnion::ClearPendingGeometryOperations
          (FClusterUnion *this,EClusterUnionGeometryOperation param_1)

{
  EClusterUnionGeometryOperation local_res10 [24];
  
  this->bGeometryModified = true;
  if (*(int *)&(this->PendingGeometryOperations).field_0x8 !=
      *(int *)&(this->PendingGeometryOperations).field_0x34) {
    local_res10[0] = param_1;
    TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_Chaos::EClusterUnionGeometryOperation>
              (&this->PendingGeometryOperations,(int)(char)param_1,local_res10);
  }
  return;
}

// GetPendingGeometryOperationParticles @ 1438bbab0

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClusterUnion::GetPendingGeometryOperationParticles
          (FClusterUnion *this,EClusterUnionGeometryOperation param_1)

{
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Chaos::FClusterUnion::GetPendingGeometryOperationParticles'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find(&this->PendingGeometryOperations,param_1);
  pTVar2 = &::EmptyArray;
  if (pTVar1 != (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    pTVar2 = pTVar1;
  }
  return pTVar2;
}

