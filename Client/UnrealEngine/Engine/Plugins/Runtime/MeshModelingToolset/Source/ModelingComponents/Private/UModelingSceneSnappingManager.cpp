// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 26

// StaticClass @ 14cb58820

UClass * __cdecl UModelingSceneSnappingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingSceneSnappingManager",
               &Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton,
               StaticRegisterNativesUModelingSceneSnappingManager,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModelingSceneSnappingManager>,
               InternalVTableHelperCtorCaller<UModelingSceneSnappingManager>,local_res8,
               USceneSnappingManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton;
}

// UModelingSceneSnappingManager @ 14cb637a0

UModelingSceneSnappingManager * __thiscall
UModelingSceneSnappingManager::UModelingSceneSnappingManager
          (UModelingSceneSnappingManager *this,FVTableHelper *param_1)

{
  USceneSnappingManager::USceneSnappingManager((USceneSnappingManager *)this,param_1);
  this->_padding_ = (longlong)&___7UModelingSceneSnappingManager__6B_;
  (this->ParentContext).field0_0x0.DebugPtr = (UInteractiveToolsContext *)0x0;
  *(undefined8 *)&this->ComponentToActorMap = 0;
  *(undefined8 *)&(this->ComponentToActorMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToActorMap).field_0x20 = 0;
  this->QueriesAPI = (IToolsContextQueriesAPI *)0x0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentToActorMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x48 = 0;
  (this->SpatialCache).Object = (FSceneGeometrySpatialCache *)0x0;
  (this->SpatialCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OnObjectModifiedHandler).ID = 0;
  (this->OnComponentTransformChangedHandle).ID = 0;
  *(undefined8 *)&this->DynamicMeshComponents = 0;
  *(undefined8 *)&(this->DynamicMeshComponents).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicMeshComponents).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicMeshComponents).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x48 = 0;
  this->bQueueModifiedDynamicMeshUpdates = false;
  *(undefined8 *)&(this->PendingModifiedDynamicMeshes).Elements = 0;
  *(undefined8 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x30 = 0xffffffff;
  (this->PendingModifiedDynamicMeshes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingModifiedDynamicMeshes).HashSize = 0;
  return this;
}

// UModelingSceneSnappingManager @ 14cb638b0

UModelingSceneSnappingManager * __thiscall
UModelingSceneSnappingManager::UModelingSceneSnappingManager
          (UModelingSceneSnappingManager *this,FObjectInitializer *param_1)

{
  USceneSnappingManager::USceneSnappingManager((USceneSnappingManager *)this,param_1);
  this->_padding_ = (longlong)&___7UModelingSceneSnappingManager__6B_;
  (this->ParentContext).field0_0x0.DebugPtr = (UInteractiveToolsContext *)0x0;
  *(undefined8 *)&this->ComponentToActorMap = 0;
  *(undefined8 *)&(this->ComponentToActorMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToActorMap).field_0x20 = 0;
  this->QueriesAPI = (IToolsContextQueriesAPI *)0x0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentToActorMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToActorMap).field_0x48 = 0;
  (this->SpatialCache).Object = (FSceneGeometrySpatialCache *)0x0;
  (this->SpatialCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OnObjectModifiedHandler).ID = 0;
  (this->OnComponentTransformChangedHandle).ID = 0;
  *(undefined8 *)&this->DynamicMeshComponents = 0;
  *(undefined8 *)&(this->DynamicMeshComponents).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicMeshComponents).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicMeshComponents).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x48 = 0;
  this->bQueueModifiedDynamicMeshUpdates = false;
  *(undefined8 *)&(this->PendingModifiedDynamicMeshes).Elements = 0;
  *(undefined8 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x30 = 0xffffffff;
  (this->PendingModifiedDynamicMeshes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingModifiedDynamicMeshes).HashSize = 0;
  return this;
}

// ~UModelingSceneSnappingManager @ 14cb652d0

void __thiscall
UModelingSceneSnappingManager::~UModelingSceneSnappingManager(UModelingSceneSnappingManager *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UModelingSceneSnappingManager__6B_;
  (this->PendingModifiedDynamicMeshes).HashSize = 0;
  FVar1 = (this->PendingModifiedDynamicMeshes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UDynamicMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UDynamicMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingModifiedDynamicMeshes).Elements);
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicMeshComponents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicMeshComponents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpatialCache).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ComponentToActorMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentToActorMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentToActorMap);
  USceneSnappingManager::~USceneSnappingManager((USceneSnappingManager *)this);
  return;
}

// operator() @ 14cb69040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition'::__l2::<lambda_1>::operator()
          (void *this,FSceneSnapQueryRequest *param_1,TRay<double> *param_2,
          FSceneSnapQueryResult *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  dVar1 = __real_bff0000000000000;
  dVar3 = __real_3ff0000000000000;
  if ((param_1->TargetTypes & MeshVertex) != None) {
    dVar2 = 0.0;
    dVar5 = (param_2->Origin).field0_0x0._s_0.X;
    dVar10 = (param_1->Position).field0_0x0._s_0.X - dVar5;
    dVar7 = *param_4;
    uVar12 = SUB84(dVar7,0);
    uVar13 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar8 = (param_2->Origin).field0_0x0._s_0.Y;
    dVar9 = (param_1->Position).field0_0x0._s_0.Y - dVar8;
    dVar11 = (param_2->Origin).field0_0x0._s_0.Z;
    dVar4 = (param_1->Position).field0_0x0._s_0.Z - dVar11;
    dVar6 = SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar4 * dVar4);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
      dVar9 = 0.0;
      dVar10 = 0.0;
    }
    else {
      dVar6 = __real_3ff0000000000000 / dVar6;
      dVar10 = dVar6 * dVar10;
      dVar9 = dVar6 * dVar9;
      dVar6 = dVar6 * dVar4;
    }
    dVar5 = param_3->TriVertices[0].field0_0x0._s_0.X - dVar5;
    dVar8 = param_3->TriVertices[0].field0_0x0._s_0.Y - dVar8;
    dVar11 = param_3->TriVertices[0].field0_0x0._s_0.Z - dVar11;
    dVar4 = SQRT(dVar8 * dVar8 + dVar5 * dVar5 + dVar11 * dVar11);
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
      dVar8 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar4 = __real_3ff0000000000000 / dVar4;
      dVar5 = dVar4 * dVar5;
      dVar8 = dVar4 * dVar8;
      dVar4 = dVar4 * dVar11;
    }
    dVar5 = dVar8 * dVar9 + dVar5 * dVar10 + dVar4 * dVar6;
    dVar8 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar5) && (dVar8 = dVar5, __real_3ff0000000000000 <= dVar5)) {
      dVar8 = __real_3ff0000000000000;
    }
    dVar5 = acos(dVar8);
    dVar8 = __real_404ca5dc1a63c1f8;
    if (dVar5 * __real_404ca5dc1a63c1f8 < dVar7) {
      *param_4 = dVar5 * __real_404ca5dc1a63c1f8;
      dVar5 = param_3->TriVertices[0].field0_0x0._s_0.Y;
      (param_3->Position).field0_0x0._s_0.X = param_3->TriVertices[0].field0_0x0._s_0.X;
      (param_3->Position).field0_0x0._s_0.Y = dVar5;
      (param_3->Position).field0_0x0._s_0.Z = param_3->TriVertices[0].field0_0x0._s_0.Z;
      param_3->TargetType = MeshVertex;
      param_3->TriSnapIndex = 0;
      uVar12 = SUB84(*param_4,0);
      uVar13 = (undefined4)((ulonglong)*param_4 >> 0x20);
    }
    dVar10 = (param_1->Position).field0_0x0._s_0.Z - (param_2->Origin).field0_0x0._s_0.Z;
    dVar5 = (param_2->Origin).field0_0x0._s_0.X;
    dVar11 = (param_1->Position).field0_0x0._s_0.X - dVar5;
    dVar6 = (param_1->Position).field0_0x0._s_0.Y - (param_2->Origin).field0_0x0._s_0.Y;
    dVar7 = SQRT(dVar6 * dVar6 + dVar11 * dVar11 + dVar10 * dVar10);
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
      dVar6 = 0.0;
      dVar11 = 0.0;
    }
    else {
      dVar7 = dVar3 / dVar7;
      dVar11 = dVar7 * dVar11;
      dVar6 = dVar7 * dVar6;
      dVar7 = dVar7 * dVar10;
    }
    dVar4 = param_3->TriVertices[1].field0_0x0._s_0.Z - (param_2->Origin).field0_0x0._s_0.Z;
    dVar5 = param_3->TriVertices[1].field0_0x0._s_0.X - dVar5;
    dVar9 = param_3->TriVertices[1].field0_0x0._s_0.Y - (param_2->Origin).field0_0x0._s_0.Y;
    dVar10 = SQRT(dVar9 * dVar9 + dVar5 * dVar5 + dVar4 * dVar4);
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
      dVar9 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar10 = dVar3 / dVar10;
      dVar5 = dVar10 * dVar5;
      dVar9 = dVar10 * dVar9;
      dVar10 = dVar10 * dVar4;
    }
    dVar5 = dVar9 * dVar6 + dVar5 * dVar11 + dVar10 * dVar7;
    dVar7 = dVar1;
    if ((dVar1 <= dVar5) && (dVar7 = dVar5, dVar3 <= dVar5)) {
      dVar7 = dVar3;
    }
    dVar5 = acos(dVar7);
    dVar5 = dVar5 * dVar8;
    if (dVar5 < (double)CONCAT44(uVar13,uVar12)) {
      *param_4 = dVar5;
      dVar5 = param_3->TriVertices[1].field0_0x0._s_0.Y;
      (param_3->Position).field0_0x0._s_0.X = param_3->TriVertices[1].field0_0x0._s_0.X;
      (param_3->Position).field0_0x0._s_0.Y = dVar5;
      (param_3->Position).field0_0x0._s_0.Z = param_3->TriVertices[1].field0_0x0._s_0.Z;
      param_3->TargetType = MeshVertex;
      param_3->TriSnapIndex = 1;
      uVar12 = SUB84(*param_4,0);
      uVar13 = (undefined4)((ulonglong)*param_4 >> 0x20);
    }
    dVar10 = (param_1->Position).field0_0x0._s_0.Z - (param_2->Origin).field0_0x0._s_0.Z;
    dVar5 = (param_2->Origin).field0_0x0._s_0.X;
    dVar11 = (param_1->Position).field0_0x0._s_0.X - dVar5;
    dVar6 = (param_1->Position).field0_0x0._s_0.Y - (param_2->Origin).field0_0x0._s_0.Y;
    dVar7 = SQRT(dVar6 * dVar6 + dVar11 * dVar11 + dVar10 * dVar10);
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
      dVar6 = 0.0;
      dVar11 = 0.0;
    }
    else {
      dVar7 = dVar3 / dVar7;
      dVar11 = dVar7 * dVar11;
      dVar6 = dVar7 * dVar6;
      dVar7 = dVar7 * dVar10;
    }
    dVar4 = param_3->TriVertices[2].field0_0x0._s_0.Z - (param_2->Origin).field0_0x0._s_0.Z;
    dVar5 = param_3->TriVertices[2].field0_0x0._s_0.X - dVar5;
    dVar9 = param_3->TriVertices[2].field0_0x0._s_0.Y - (param_2->Origin).field0_0x0._s_0.Y;
    dVar10 = SQRT(dVar9 * dVar9 + dVar5 * dVar5 + dVar4 * dVar4);
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
      dVar9 = 0.0;
    }
    else {
      dVar10 = dVar3 / dVar10;
      dVar2 = dVar10 * dVar5;
      dVar9 = dVar10 * dVar9;
      dVar10 = dVar10 * dVar4;
    }
    dVar5 = dVar9 * dVar6 + dVar2 * dVar11 + dVar10 * dVar7;
    if ((dVar1 <= dVar5) && (dVar1 = dVar5, dVar3 <= dVar5)) {
      dVar1 = dVar3;
    }
    dVar1 = acos(dVar1);
    dVar1 = dVar1 * dVar8;
    if (dVar1 < (double)CONCAT44(uVar13,uVar12)) {
      *param_4 = dVar1;
      dVar1 = param_3->TriVertices[2].field0_0x0._s_0.Y;
      (param_3->Position).field0_0x0._s_0.X = param_3->TriVertices[2].field0_0x0._s_0.X;
      (param_3->Position).field0_0x0._s_0.Y = dVar1;
      (param_3->Position).field0_0x0._s_0.Z = param_3->TriVertices[2].field0_0x0._s_0.Z;
      param_3->TargetType = MeshVertex;
      param_3->TriSnapIndex = 2;
    }
  }
  return;
}

// operator() @ 14cb6cd40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition'::__l2::<lambda_2>::operator()
          (void *this,FSceneSnapQueryRequest *param_1,TVector<double> *param_2,TRay<double> *param_3
          ,FSceneSnapQueryResult *param_4,double *param_5)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  TVector<double>_u_0 local_f0;
  undefined8 local_d8;
  
  dVar2 = __real_3ff0000000000000;
  if (((param_1->TargetTypes & MeshEdge) != None) && (param_4->TargetType != MeshVertex)) {
    pdVar4 = &param_4->TriVertices[0].field0_0x0._s_0.Y;
    uVar19 = (undefined4)__real_3fe0000000000000;
    uVar20 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    uVar1 = *(undefined8 *)&(param_3->Origin).field0_0x0;
    uVar21 = (undefined4)uVar1;
    uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&(param_3->Origin).field0_0x0 + 8);
    uVar23 = (undefined4)uVar1;
    uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&(param_3->Origin).field0_0x0 + 0x10);
    uVar25 = (undefined4)uVar1;
    uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      local_d8 = 0;
      iVar3 = iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                      (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) * -3;
      dVar11 = param_4->TriVertices[iVar3].field0_0x0._s_0.X;
      dVar14 = param_4->TriVertices[iVar3].field0_0x0._s_0.Y;
      dVar16 = param_4->TriVertices[iVar3].field0_0x0._s_0.Z;
      local_f0._s_0.X = dVar11 - ((TVector<double>_u_0_s_0 *)(pdVar4 + -1))->X;
      local_f0._s_0.Y = dVar14 - *pdVar4;
      dVar7 = (((TVector<double>_u_0_s_0 *)(pdVar4 + -1))->X + dVar11) *
              (double)CONCAT44(uVar20,uVar19);
      dVar14 = (*pdVar4 + dVar14) * (double)CONCAT44(uVar20,uVar19);
      local_f0._s_0.Z = dVar16 - pdVar4[1];
      dVar8 = (pdVar4[1] + dVar16) * (double)CONCAT44(uVar20,uVar19);
      dVar9 = UE::Geometry::Normalize<double>((TVector<double> *)&local_f0._s_0,0.0);
      dVar15 = dVar9 * (double)CONCAT44(uVar20,uVar19);
      dVar11 = ((param_2->field0_0x0)._s_0.X - dVar7) * local_f0._s_0.X +
               ((param_2->field0_0x0)._s_0.Y - dVar14) * local_f0._s_0.Y +
               ((param_2->field0_0x0)._s_0.Z - dVar8) * local_f0._s_0.Z;
      dVar16 = dVar15;
      if ((dVar15 <= dVar11) || (dVar16 = dVar11, dVar9 * __real_bfe0000000000000 < dVar11)) {
        dVar7 = local_f0._s_0.X * dVar16 + dVar7;
        dVar8 = local_f0._s_0.Z * dVar16 + dVar8;
        dVar14 = local_f0._s_0.Y * dVar16 + dVar14;
      }
      else {
        dVar7 = dVar7 - local_f0._s_0.X * dVar15;
        dVar14 = dVar14 - local_f0._s_0.Y * dVar15;
        dVar8 = dVar8 - local_f0._s_0.Z * dVar15;
      }
      dVar11 = (param_1->Position).field0_0x0._s_0.X - (double)CONCAT44(uVar22,uVar21);
      dVar9 = (param_1->Position).field0_0x0._s_0.Y - (double)CONCAT44(uVar24,uVar23);
      dVar15 = (param_1->Position).field0_0x0._s_0.Z - (double)CONCAT44(uVar26,uVar25);
      dVar16 = SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar15 * dVar15);
      if (dVar16 <= 0.0) {
        dVar15 = 0.0;
        dVar9 = 0.0;
        dVar11 = 0.0;
      }
      else {
        dVar16 = dVar2 / dVar16;
        dVar11 = dVar11 * dVar16;
        dVar9 = dVar9 * dVar16;
        dVar15 = dVar15 * dVar16;
      }
      dVar10 = dVar14 - (double)CONCAT44(uVar24,uVar23);
      dVar16 = dVar7 - (double)CONCAT44(uVar22,uVar21);
      dVar18 = dVar8 - (double)CONCAT44(uVar26,uVar25);
      auVar12._0_8_ = dVar10 * dVar10;
      auVar12._8_8_ = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar16 * dVar16 + auVar12._0_8_ + dVar18 * dVar18;
      auVar13 = sqrtpd(auVar12,auVar13);
      if (auVar13._0_8_ <= 0.0) {
        dVar17 = 0.0;
        dVar10 = 0.0;
        dVar16 = 0.0;
      }
      else {
        dVar17 = dVar2 / auVar13._0_8_;
        dVar16 = dVar17 * dVar16;
        dVar10 = dVar17 * dVar10;
        dVar17 = dVar17 * dVar18;
      }
      dVar16 = dVar10 * dVar9 + dVar16 * dVar11 + dVar17 * dVar15;
      dVar11 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar16) && (dVar11 = dVar16, dVar2 <= dVar16)) {
        dVar11 = dVar2;
      }
      dVar11 = acos(dVar11);
      if (dVar11 * __real_404ca5dc1a63c1f8 < *param_5) {
        *param_5 = dVar11 * __real_404ca5dc1a63c1f8;
        param_4->TargetType = MeshEdge;
        param_4->TriSnapIndex = iVar5;
        (param_4->Position).field0_0x0._s_0.X = dVar7;
        (param_4->Position).field0_0x0._s_0.Y = dVar14;
        (param_4->Position).field0_0x0._s_0.Z = dVar8;
        uVar1 = *(undefined8 *)&(param_3->Origin).field0_0x0;
        uVar21 = (undefined4)uVar1;
        uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)((longlong)&(param_3->Origin).field0_0x0 + 8);
        uVar23 = (undefined4)uVar1;
        uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)((longlong)&(param_3->Origin).field0_0x0 + 0x10);
        uVar25 = (undefined4)uVar1;
        uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      uVar19 = (undefined4)__real_3fe0000000000000;
      uVar20 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      pdVar4 = pdVar4 + 3;
      iVar5 = iVar6;
    } while (iVar6 < 3);
  }
  return;
}

// BuildSpatialCacheForWorld @ 14cb75620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::BuildSpatialCacheForWorld
          (UModelingSceneSnappingManager *this,UWorld *param_1,
          TFunctionRef<bool___cdecl(AActor_*)> *param_2,
          TFunctionRef<bool___cdecl(UPrimitiveComponent_*)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  UClass *local_res10;
  AActor *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  TActorIteratorBase<TActorIterator<AActor>_> local_98;
  FString local_38;
  FString local_28;
  
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  local_98.Flags = OnlyActiveLevels|SkipPendingKill;
  local_98.State.bIsSet = false;
  local_res10 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FActorIteratorState::FActorIteratorState
            (&local_98.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_res10);
  local_98.State.bIsSet = true;
  while( true ) {
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_98);
    if (local_98.State.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_98.State.TypedValue.ReachedEnd != false) {
      if (local_98.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_98.State.TypedValue.CurrentWorld,
                   local_98.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_98.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      return;
    }
    if (local_98.State.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAVar5 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
    if (pAVar5 == (AActor *)0x0) break;
    local_b8 = pAVar5;
    cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_b8);
    if (cVar3 != '\0') {
      pcVar1 = *(code **)(this->_padding_ + 0x2d8);
      local_b0 = *(undefined8 *)param_3;
      local_a8 = *(undefined8 *)&param_3->field_0x8;
      if (local_98.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pAVar5 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
      if (pAVar5 == (AActor *)0x0) {
        pFVar6 = GetTypeName<AActor>(&local_38);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      (*pcVar1)(this,pAVar5,&local_b0);
    }
  }
  pFVar6 = GetTypeName<AActor>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// ExecuteSceneHitQuery @ 14cb8a2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UModelingSceneSnappingManager::ExecuteSceneHitQuery
          (UModelingSceneSnappingManager *this,FSceneHitQueryRequest *param_1,
          FSceneHitQueryResult *param_2)

{
  IToolsContextQueriesAPI *pIVar1;
  FSceneGeometrySpatialCache *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  UWorld *pUVar15;
  AActor *pAVar16;
  UPrimitiveComponent *pUVar17;
  FHitResult *pFVar18;
  undefined8 *puVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 local_res8 [2];
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  undefined8 local_3f0;
  undefined4 uStack_3e8;
  undefined1 uStack_3e4;
  undefined2 uStack_3e3;
  undefined1 uStack_3e1;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  AActor *local_3a0;
  UPrimitiveComponent *local_398;
  undefined8 local_390;
  undefined4 local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined2 local_2ec;
  double local_2e8;
  TVector<double>_u_0 local_2d8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [24];
  double dStack_290;
  double local_288;
  double local_268;
  double dStack_260;
  double local_258;
  int local_204;
  FActorInstanceHandle local_1f0;
  FWeakObjectPtr local_1d0 [5];
  FHitResult local_1a8;
  
  dVar11 = __real_7fefffffffffffff;
  dVar4 = __real_3ff0000000000000;
  pIVar1 = this->QueriesAPI;
  if (pIVar1 == (IToolsContextQueriesAPI *)0x0) {
    return false;
  }
  local_2d8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_2d8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_2d8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_2c0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_2f8 = 0x42b40000;
  local_2b8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_2b0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  local_2f4 = 0x42c80000;
  dVar22 = 0.0;
  local_2f0 = 0x3f800000;
  local_2ec = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  local_2e8 = __real_3ff0000000000000;
  local_308 = ___xmm_3ff00000000000000000000000000000;
  uStack_300 = _UNK_15061cbc8;
  uVar25 = SUB84(__real_7fefffffffffffff,0);
  uVar26 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,&local_338);
  local_390 = 0xffffffffffffffff;
  local_3b8 = ___xmm_3ff00000000000000000000000000000;
  uStack_3b0 = _UNK_15061cbc8;
  local_3a8 = __real_47efffffe0000000;
  local_3c0 = 0;
  local_3d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_3d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_3c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_3a0 = (AActor *)0x0;
  local_398 = (UPrimitiveComponent *)0x0;
  local_388 = 0;
  local_380 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_378 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = 0;
  local_370 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_368 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_360 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_358 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_350 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    uVar13 = (*pcVar3)();
    return (bool)uVar13;
  }
  pFVar2 = (this->SpatialCache).Object;
  cVar14 = (**(code **)(pFVar2->_padding_ + 0x38))
                     (pFVar2,&local_2d8,&local_3d8,local_res8,&param_1->VisibilityFilter,dVar11);
  if (cVar14 != '\0') {
    if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      uVar13 = (*pcVar3)();
      return (bool)uVar13;
    }
    pFVar2 = (this->SpatialCache).Object;
    (**(code **)(pFVar2->_padding_ + 0x40))
              (pFVar2,local_res8[0],local_388,local_390._4_4_,1,&local_448,&local_430,&local_418);
    uVar25 = (undefined4)local_3a8;
    uVar26 = (undefined4)((ulonglong)local_3a8 >> 0x20);
    (param_2->Position).field0_0x0._s_0.X = local_350;
    (param_2->Position).field0_0x0._s_0.Y = dStack_348;
    param_2->TargetActor = local_3a0;
    param_2->TargetComponent = local_398;
    param_2->HitTriIndex = local_390._4_4_;
    (param_2->Position).field0_0x0._s_0.Z = local_340;
    dVar6 = (dStack_410 - dStack_440) * (local_420 - local_438) -
            (local_408 - local_438) * (dStack_428 - dStack_440);
    dVar21 = (local_408 - local_438) * (local_430 - local_448) -
             (local_418 - local_448) * (local_420 - local_438);
    auVar23._0_8_ = dVar6 * dVar6;
    auVar23._8_8_ = 0;
    dVar5 = (local_418 - local_448) * (dStack_428 - dStack_440) -
            (dStack_410 - dStack_440) * (local_430 - local_448);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar21 * dVar21 + auVar23._0_8_ + dVar5 * dVar5;
    auVar24 = sqrtpd(auVar23,auVar24);
    if (auVar24._0_8_ <= 0.0) {
      dVar21 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar4 = dVar4 / auVar24._0_8_;
      dVar22 = dVar4 * dVar5;
      dVar21 = dVar4 * dVar21;
      dVar4 = dVar4 * dVar6;
    }
    (param_2->Normal).field0_0x0._s_0.X = dVar4;
    (param_2->Normal).field0_0x0._s_0.Y = dVar21;
    (param_2->Normal).field0_0x0._s_0.Z = dVar22;
    param_2->TriVertices[0].field0_0x0._s_0.X = local_448;
    param_2->TriVertices[0].field0_0x0._s_0.Y = dStack_440;
    param_2->TriVertices[0].field0_0x0._s_0.Z = local_438;
    param_2->TriVertices[1].field0_0x0._s_0.X = local_430;
    param_2->TriVertices[1].field0_0x0._s_0.Y = dStack_428;
    param_2->TriVertices[1].field0_0x0._s_0.Z = local_420;
    param_2->TriVertices[2].field0_0x0._s_0.X = local_418;
    param_2->TriVertices[2].field0_0x0._s_0.Y = dStack_410;
    param_2->TriVertices[2].field0_0x0._s_0.Z = local_408;
    FSceneHitQueryResult::InitializeHitResult(param_2,param_1);
  }
  memset(local_2a8,0,0x100);
  local_1f0.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1f0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1f0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1f0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_3e3 = 0;
  uStack_3e1 = 0;
  local_3f0 = 0;
  uStack_3e4 = 0;
  pFVar2 = (this->SpatialCache).Object;
  local_2a8._4_4_ = 1.0;
  local_204 = -1;
  uStack_3e8 = 0xffffffff;
  local_1f0.InstanceIndex = -1;
  local_1f0.ResolutionStatus = Invalid;
  local_1f0._29_3_ = 0;
  local_1f0.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  pUVar15 = (UWorld *)(**(code **)((longlong)*this->QueriesAPI + 8))();
  bVar12 = FindNearestVisibleObjectHit_Internal
                     (pUVar15,(FHitResult *)local_2a8,(TRay<double> *)&local_2d8._s_0,true,
                      &param_1->VisibilityFilter,pFVar2);
  dVar4 = (double)CONCAT44(uVar26,uVar25);
  if ((bVar12) &&
     (dVar22 = (double)(float)local_2a8._8_4_, dVar4 = (double)CONCAT44(uVar26,uVar25),
     dVar22 < (double)CONCAT44(uVar26,uVar25))) {
    pAVar16 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(local_2a8 + 0xb8));
    param_2->TargetActor = pAVar16;
    pUVar17 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_2a8 + 0xd8));
    lVar20 = 2;
    (param_2->Position).field0_0x0._s_0.X = (double)local_2a8._16_8_;
    (param_2->Position).field0_0x0._s_0.Y = dStack_290;
    param_2->TargetComponent = pUVar17;
    (param_2->Position).field0_0x0._s_0.Z = local_288;
    (param_2->Normal).field0_0x0._s_0.X = local_268;
    (param_2->Normal).field0_0x0._s_0.Y = dStack_260;
    param_2->HitTriIndex = local_2a8._0_4_;
    (param_2->Normal).field0_0x0._s_0.Z = local_258;
    pFVar18 = &param_2->HitResult;
    puVar19 = (undefined8 *)local_2a8;
    do {
      uVar7 = *puVar19;
      uVar8 = puVar19[1];
      uVar9 = puVar19[2];
      uVar10 = puVar19[3];
      pFVar18->FaceIndex = (int)uVar7;
      pFVar18->Time = (float)(int)((ulonglong)uVar7 >> 0x20);
      pFVar18->Distance = (float)(int)uVar8;
      pFVar18->_padding_ = (int)((ulonglong)uVar8 >> 0x20);
      uVar7 = puVar19[4];
      uVar8 = puVar19[5];
      *(undefined8 *)&pFVar18->Location = uVar9;
      *(undefined8 *)&(pFVar18->Location).field_0x8 = uVar10;
      uVar9 = puVar19[6];
      uVar10 = puVar19[7];
      *(undefined8 *)&(pFVar18->Location).field_0x10 = uVar7;
      *(undefined8 *)&pFVar18->ImpactPoint = uVar8;
      uVar7 = puVar19[8];
      uVar8 = puVar19[9];
      *(undefined8 *)&(pFVar18->ImpactPoint).field_0x8 = uVar9;
      *(undefined8 *)&(pFVar18->ImpactPoint).field_0x10 = uVar10;
      uVar9 = puVar19[10];
      uVar10 = puVar19[0xb];
      *(undefined8 *)&pFVar18->Normal = uVar7;
      *(undefined8 *)&(pFVar18->Normal).field_0x8 = uVar8;
      uVar7 = puVar19[0xc];
      uVar8 = puVar19[0xd];
      *(undefined8 *)&(pFVar18->Normal).field_0x10 = uVar9;
      *(undefined8 *)&pFVar18->ImpactNormal = uVar10;
      uVar9 = puVar19[0xe];
      uVar10 = puVar19[0xf];
      *(undefined8 *)&(pFVar18->ImpactNormal).field_0x8 = uVar7;
      *(undefined8 *)&(pFVar18->ImpactNormal).field_0x10 = uVar8;
      *(undefined8 *)&pFVar18->TraceStart = uVar9;
      *(undefined8 *)&(pFVar18->TraceStart).field_0x8 = uVar10;
      lVar20 = lVar20 + -1;
      pFVar18 = (FHitResult *)&(pFVar18->TraceStart).field_0x10;
      puVar19 = puVar19 + 0x10;
    } while (lVar20 != 0);
    dVar4 = dVar22;
    if (param_1->bWantHitGeometryInfo != false) {
      pFVar18 = FHitResult::FHitResult(&local_1a8,(FHitResult *)local_2a8);
      GetComponentHitTriangle_Internal<UE::Math::TVector<double>_>(pFVar18,param_2->TriVertices);
    }
  }
  return dVar4 < dVar11;
}

// ExecuteSceneSnapQuery @ 14cb8a870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModelingSceneSnappingManager::ExecuteSceneSnapQuery
          (UModelingSceneSnappingManager *this,FSceneSnapQueryRequest *param_1,
          TArray<FSceneSnapQueryResult,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1->RequestType == Position) {
                    /* WARNING: Could not recover jumptable at 0x00014cb8a8c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(this->_padding_ + 800))();
    return (bool)uVar3;
  }
  if (param_1->RequestType != Rotation) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Only Position and Rotation Snap Queries are supported\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Snapping\\ModelingSceneSnappingManager.cpp"
                       ,0x111,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb8a8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x318))();
  return (bool)uVar3;
}

// ExecuteSceneSnapQueryPosition @ 14cb8a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition
          (UModelingSceneSnappingManager *this,FSceneSnapQueryRequest *param_1,
          TArray<FSceneSnapQueryResult,TSizedDefaultAllocator<32>_> *param_2)

{
  IToolsContextQueriesAPI *pIVar1;
  FScriptContainerElement *pFVar2;
  FSceneSnapQueryResult *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  TOptional<UE::Math::TVector<double>_> *pTVar20;
  UWorld *pUVar21;
  FSceneGeometrySpatialCache *pFVar22;
  FHitResult *pFVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStackY_838 [32];
  undefined1 local_7e8;
  undefined1 local_7e7 [3];
  undefined4 local_7e4;
  double local_7e0;
  double local_7d8;
  FSceneQueryVisibilityFilter local_7d0;
  TVector<double>_u_0 local_7c0;
  TVector<double>_u_0 local_7a8;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined4 uStack_778;
  undefined1 uStack_774;
  undefined2 uStack_773;
  undefined1 uStack_771;
  undefined1 local_770 [16];
  double local_760;
  undefined1 local_758 [16];
  double local_748;
  double local_740;
  double dStack_738;
  double local_730;
  double local_728;
  double dStack_720;
  double local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 uStack_700;
  double local_6f8;
  AActor *local_6f0;
  UActorComponent *local_6e8;
  undefined8 local_6e0;
  undefined4 local_6d8;
  double local_6d0;
  double dStack_6c8;
  double local_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  TVector<double>_u_0 local_6a0;
  double local_688;
  undefined8 uStack_680;
  double local_678;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined2 local_63c;
  double local_638;
  double local_628;
  double dStack_620;
  double local_618;
  double local_610;
  double dStack_608;
  double local_600;
  double local_5e8;
  undefined1 local_5d8 [40];
  undefined1 local_5b0 [16];
  double local_5a0;
  int local_534;
  FActorInstanceHandle local_520;
  FWeakObjectPtr local_500 [5];
  char local_4d8 [8];
  TOptional<UE::Math::TVector<double>_> local_4d0 [2];
  FHitResult local_488;
  FSceneSnapQueryResult local_388;
  FSceneSnapQueryResult local_2a8;
  FScriptContainerElement local_1c8;
  FScriptContainerElement local_1c7;
  undefined8 local_1c0;
  undefined8 local_1b8;
  FScriptContainerElement local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_838;
  pIVar1 = this->QueriesAPI;
  if (pIVar1 == (IToolsContextQueriesAPI *)0x0) {
    return false;
  }
  iVar18 = 0;
  if (((param_1->TargetTypes & Grid) != None) &&
     ((**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_4d8), iVar18 = 0, local_4d8[0] != '\0'))
  {
    pTVar20 = &param_1->GridSize;
    local_1c7 = (FScriptContainerElement)0x0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = (FScriptContainerElement)0x4;
    if ((param_1->GridSize).bIsSet == false) {
      pTVar20 = local_4d0;
    }
    dVar34 = (pTVar20->TypedValue).field0_0x0._s_0.Y;
    dVar25 = (pTVar20->TypedValue).field0_0x0._s_0.Z;
    local_1a8 = UE::Geometry::SnapToIncrement<double>
                          ((param_1->Position).field0_0x0._s_0.X,
                           (pTVar20->TypedValue).field0_0x0._s_0.X,0.0);
    dStack_1a0 = UE::Geometry::SnapToIncrement<double>
                           ((param_1->Position).field0_0x0._s_0.Y,dVar34,0.0);
    local_730 = dVar25;
    local_198 = UE::Geometry::SnapToIncrement<double>
                          ((param_1->Position).field0_0x0._s_0.Z,dVar25,0.0);
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (((pFVar2 <= &local_1c8) && (&local_1c8 < pFVar2 + (longlong)param_2->ArrayMax * 0xe0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    iVar18 = param_2->ArrayNum;
    if (iVar18 == param_2->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    param_2->ArrayNum = iVar18 + 1;
    lVar24 = (longlong)iVar18 * 0xe0;
    pFVar2[lVar24 + 1] = (FScriptContainerElement)0x0;
    pFVar2[lVar24 + 1] = local_1c7;
    if (local_1c7 != (FScriptContainerElement)0x0) {
      pFVar2[lVar24] = local_1c8;
    }
    iVar18 = 1;
    *(undefined8 *)(pFVar2 + lVar24 + 8) = local_1c0;
    *(undefined8 *)(pFVar2 + lVar24 + 0x10) = local_1b8;
    pFVar2[lVar24 + 0x18] = local_1b0;
    *(double *)(pFVar2 + lVar24 + 0x20) = local_1a8;
    *(double *)(pFVar2 + lVar24 + 0x20 + 8) = dStack_1a0;
    *(double *)(pFVar2 + lVar24 + 0x30) = local_198;
    *(undefined8 *)(pFVar2 + lVar24 + 0x38) = local_190;
    *(undefined8 *)(pFVar2 + lVar24 + 0x38 + 8) = uStack_188;
    *(undefined8 *)(pFVar2 + lVar24 + 0x48) = local_180;
    *(undefined8 *)(pFVar2 + lVar24 + 0x50) = local_178;
    *(undefined8 *)(pFVar2 + lVar24 + 0x50 + 8) = uStack_170;
    *(undefined8 *)(pFVar2 + lVar24 + 0x60) = local_168;
    *(undefined8 *)(pFVar2 + lVar24 + 0x60 + 8) = uStack_160;
    *(undefined8 *)(pFVar2 + lVar24 + 0x70) = local_158;
    *(undefined8 *)(pFVar2 + lVar24 + 0x78) = local_150;
    *(undefined8 *)(pFVar2 + lVar24 + 0x78 + 8) = uStack_148;
    *(undefined8 *)(pFVar2 + lVar24 + 0x88) = local_140;
    *(undefined8 *)(pFVar2 + lVar24 + 0x90) = local_138;
    *(undefined8 *)(pFVar2 + lVar24 + 0x90 + 8) = uStack_130;
    *(undefined8 *)(pFVar2 + lVar24 + 0xa0) = local_128;
    *(undefined8 *)(pFVar2 + lVar24 + 0xa0 + 8) = uStack_120;
    *(undefined8 *)(pFVar2 + lVar24 + 0xb0) = local_118;
    *(undefined8 *)(pFVar2 + lVar24 + 0xb0 + 8) = uStack_110;
    *(undefined8 *)(pFVar2 + lVar24 + 0xc0) = local_108;
    *(undefined8 *)(pFVar2 + lVar24 + 0xc0 + 8) = uStack_100;
    *(undefined8 *)(pFVar2 + lVar24 + 0xd0) = local_f8;
    *(undefined4 *)(pFVar2 + lVar24 + 0xd8) = local_f0;
  }
  dVar11 = __real_3ff0000000000000;
  local_688 = 0.0;
  uStack_680 = 0;
  local_658 = ___xmm_3ff00000000000000000000000000000;
  uStack_650 = _UNK_15061cbc8;
  local_678 = 0.0;
  local_638 = __real_3ff0000000000000;
  local_668 = 0;
  uStack_660 = 0;
  local_648 = 0x42b40000;
  local_644 = 0x42c80000;
  local_640 = 0x3f800000;
  local_63c = 0;
  (**(code **)((longlong)*this->QueriesAPI + 0x18))(this->QueriesAPI,&local_688);
  local_7c0._8_8_ = uStack_680;
  local_7c0._0_8_ = local_688;
  local_5e8 = (param_1->Position).field0_0x0._s_0.Z;
  auVar10._4_8_ = extraout_XMM0_Qb;
  auVar10._0_4_ = (int)((ulonglong)local_688 >> 0x20);
  auVar29._0_8_ = auVar10._0_8_ << 0x20;
  auVar29._8_4_ = (int)uStack_680;
  auVar29._12_4_ = (int)((ulonglong)uStack_680 >> 0x20);
  dVar34 = (param_1->Position).field0_0x0._s_0.X - local_688;
  dVar25 = (param_1->Position).field0_0x0._s_0.Y - auVar29._8_8_;
  dVar32 = local_5e8 - local_678;
  local_748 = local_678;
  local_760 = SQRT(dVar25 * dVar25 + dVar34 * dVar34 + dVar32 * dVar32);
  if (local_760 <= 0.0) {
    local_760 = 0.0;
    dVar34 = 0.0;
    dVar25 = 0.0;
  }
  else {
    local_760 = dVar11 / local_760;
    dVar25 = local_760 * dVar25;
    dVar34 = local_760 * dVar34;
    local_760 = local_760 * dVar32;
  }
  uVar31 = (undefined4)((ulonglong)dVar25 >> 0x20);
  local_7a8._s_0.Z = local_760;
  local_770._8_4_ = SUB84(dVar25,0);
  local_770._0_8_ = dVar34;
  local_770._12_4_ = uVar31;
  local_7c0._s_0.Z = local_678;
  local_7a8._8_4_ = SUB84(dVar25,0);
  local_7a8._0_8_ = dVar34;
  local_7a8._12_4_ = uVar31;
  local_758 = local_7c0._0_16_;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_7a8._s_0,__real_3e45798ee0000000);
  local_7d0.ComponentsToIgnore = param_1->ComponentsToIgnore;
  local_7d0.InvisibleComponentsToInclude = param_1->InvisibleComponentsToInclude;
  local_708 = ___xmm_3ff00000000000000000000000000000;
  uStack_700 = _UNK_15061cbc8;
  local_6f8 = __real_47efffffe0000000;
  local_710 = 0;
  local_728 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_720 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_718 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_6f0 = (AActor *)0x0;
  local_6e8 = (UActorComponent *)0x0;
  local_6e0 = 0xffffffffffffffff;
  local_6d8 = 0;
  local_6d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_6c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_7e4 = 0;
  local_6c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_6b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_6b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_6a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_6a0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_6a0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_6a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return (bool)uVar15;
  }
  pFVar22 = (this->SpatialCache).Object;
  cVar16 = (**(code **)(pFVar22->_padding_ + 0x38))(pFVar22,&local_7c0,&local_728,&local_7e4);
  memset(local_5d8,0,0x100);
  local_520.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_520.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_520.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_520.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_773 = 0;
  local_790 = 0;
  uStack_788 = 0;
  uStack_771 = 0;
  local_780 = 0;
  uStack_774 = 0;
  pFVar22 = (this->SpatialCache).Object;
  local_5d8._4_4_ = 1.0;
  local_534 = -1;
  uStack_778 = 0xffffffff;
  local_520.InstanceIndex = -1;
  local_520.ResolutionStatus = Invalid;
  local_520._29_3_ = 0;
  local_520.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  pUVar21 = (UWorld *)(**(code **)((longlong)*this->QueriesAPI + 8))();
  bVar14 = FindNearestVisibleObjectHit_Internal
                     (pUVar21,(FHitResult *)local_5d8,(TRay<double> *)&local_7c0._s_0,true,
                      &local_7d0,pFVar22);
  dVar32 = local_748;
  dVar34 = __real_404ca5dc1a63c1f8;
  dVar25 = __real_bff0000000000000;
  uVar13 = local_758._8_8_;
  uVar12 = local_758._0_8_;
  if (cVar16 == '\0') {
LAB_14cb8b378:
    if (bVar14 == false) goto LAB_14cb8b760;
  }
  else {
    if (!bVar14) {
LAB_14cb8af32:
      local_5e8 = (param_1->Position).field0_0x0._s_0.Z;
      dVar8 = local_5e8 - local_748;
      dVar7 = (param_1->Position).field0_0x0._s_0.Y - (double)local_758._8_8_;
      dVar9 = (param_1->Position).field0_0x0._s_0.X - (double)local_758._0_8_;
      dVar26 = SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8);
      if (dVar26 <= 0.0) {
        dVar8 = 0.0;
        dVar7 = 0.0;
        dVar9 = 0.0;
      }
      else {
        dVar26 = dVar11 / dVar26;
        dVar9 = dVar9 * dVar26;
        dVar7 = dVar7 * dVar26;
        dVar8 = dVar8 * dVar26;
      }
      dVar33 = local_6a0._s_0.X - (double)local_758._0_8_;
      dVar26 = local_6a0._s_0.Y - (double)local_758._8_8_;
      dVar35 = local_6a0._s_0.Z - local_748;
      auVar28._0_8_ = dVar35 * dVar35;
      auVar28._8_8_ = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar26 * dVar26 + dVar33 * dVar33 + auVar28._0_8_;
      auVar29 = sqrtpd(auVar28,auVar5);
      if (auVar29._0_8_ <= 0.0) {
        dVar35 = 0.0;
        dVar26 = 0.0;
        dVar33 = 0.0;
      }
      else {
        dVar27 = dVar11 / auVar29._0_8_;
        dVar33 = dVar33 * dVar27;
        dVar26 = dVar26 * dVar27;
        dVar35 = dVar35 * dVar27;
      }
      dVar26 = dVar26 * dVar7 + dVar33 * dVar9 + dVar35 * dVar8;
      dVar7 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar26) && (dVar7 = dVar26, dVar11 <= dVar26)) {
        dVar7 = dVar11;
      }
      dVar26 = acos(dVar7);
      if (dVar26 * dVar34 < (double)param_1->VisualAngleThresholdDegrees) {
        pFVar22 = TSharedPtr<UE::Geometry::FSceneGeometrySpatialCache,1>::operator->
                            (&this->SpatialCache);
        (**(code **)(pFVar22->_padding_ + 0x40))(pFVar22,local_7e4,local_6d8,local_6e0._4_4_);
        local_388.TriVertices[0].field0_0x0._s_0.X = local_628;
        local_388.TriVertices[0].field0_0x0._s_0.Y = dStack_620;
        local_388.CoordinateSpace.bIsSet = false;
        local_388.TriVertices[0].field0_0x0._s_0.Z = local_618;
        local_388.TriVertices[1].field0_0x0._s_0.X = local_610;
        local_388.TriVertices[1].field0_0x0._s_0.Y = dStack_608;
        local_388.TargetActor = (AActor *)0x0;
        local_388.TargetComponent = (UActorComponent *)0x0;
        local_388.TriVertices[1].field0_0x0._s_0.Z = local_600;
        local_388.TriVertices[2].field0_0x0._s_0.X = local_740;
        local_388.TriVertices[2].field0_0x0._s_0.Y = dStack_738;
        local_7e0 = (double)param_1->VisualAngleThresholdDegrees;
        local_388.TargetType = None;
        local_388.TriVertices[2].field0_0x0._s_0.Z = local_730;
        `UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition'::__l2::<lambda_1>::operator()
                  (&local_7e8,param_1,(TRay<double> *)&local_7c0._s_0,&local_388,&local_7e0);
        `UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition'::__l2::<lambda_2>::operator()
                  (local_7e7,param_1,(TVector<double> *)&local_6a0._s_0,
                   (TRay<double> *)&local_7c0._s_0,&local_388,&local_7e0);
        if (local_7e0 < (double)param_1->VisualAngleThresholdDegrees) {
          pFVar3 = (FSceneSnapQueryResult *)(param_2->AllocatorInstance).Data;
          local_388.TargetActor = local_6f0;
          local_388.TargetComponent = local_6e8;
          if (((pFVar3 <= &local_388) && (&local_388 < pFVar3 + param_2->ArrayMax)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          iVar19 = param_2->ArrayNum;
          if (iVar19 == param_2->ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar19 + 1;
          lVar24 = (longlong)iVar19 * 0xe0;
          pFVar2[lVar24 + 1] = (FScriptContainerElement)0x0;
          pFVar2[lVar24 + 1] = (FScriptContainerElement)local_388.CoordinateSpace.bIsSet;
          if ((FScriptContainerElement)local_388.CoordinateSpace.bIsSet !=
              (FScriptContainerElement)0x0) {
            pFVar2[lVar24] = (FScriptContainerElement)local_388.CoordinateSpace.TypedValue;
          }
          iVar18 = iVar18 + 1;
          *(AActor **)(pFVar2 + lVar24 + 8) = local_388.TargetActor;
          *(UActorComponent **)(pFVar2 + lVar24 + 0x10) = local_388.TargetComponent;
          pFVar2[lVar24 + 0x18] = (FScriptContainerElement)local_388.TargetType;
          *(double *)(pFVar2 + lVar24 + 0x20) = local_388.Position.field0_0x0._s_0.X;
          *(double *)(pFVar2 + lVar24 + 0x20 + 8) = local_388.Position.field0_0x0._s_0.Y;
          *(double *)(pFVar2 + lVar24 + 0x30) = local_388.Position.field0_0x0._s_0.Z;
          *(double *)(pFVar2 + lVar24 + 0x38) = local_388.Normal.field0_0x0._s_0.X;
          *(double *)(pFVar2 + lVar24 + 0x38 + 8) = local_388.Normal.field0_0x0._s_0.Y;
          *(double *)(pFVar2 + lVar24 + 0x48) = local_388.Normal.field0_0x0._s_0.Z;
          *(double *)(pFVar2 + lVar24 + 0x50) = local_388.DeltaRotation.X;
          *(double *)(pFVar2 + lVar24 + 0x50 + 8) = local_388.DeltaRotation.Y;
          *(double *)(pFVar2 + lVar24 + 0x60) = local_388.DeltaRotation.Z;
          *(double *)(pFVar2 + lVar24 + 0x60 + 8) = local_388.DeltaRotation.W;
          *(double *)(pFVar2 + lVar24 + 0x70) = local_388.RotationAngle;
          *(double *)(pFVar2 + lVar24 + 0x78) = local_388.Scale.field0_0x0._s_0.X;
          *(double *)(pFVar2 + lVar24 + 0x78 + 8) = local_388.Scale.field0_0x0._s_0.Y;
          *(double *)(pFVar2 + lVar24 + 0x88) = local_388.Scale.field0_0x0._s_0.Z;
          *(double *)(pFVar2 + lVar24 + 0x90) = local_388.TriVertices[0].field0_0x0._s_0.X;
          *(double *)(pFVar2 + lVar24 + 0x90 + 8) = local_388.TriVertices[0].field0_0x0._s_0.Y;
          *(double *)(pFVar2 + lVar24 + 0xa0) = local_388.TriVertices[0].field0_0x0._s_0.Z;
          *(double *)(pFVar2 + lVar24 + 0xa0 + 8) = local_388.TriVertices[1].field0_0x0._s_0.X;
          *(double *)(pFVar2 + lVar24 + 0xb0) = local_388.TriVertices[1].field0_0x0._s_0.Y;
          *(double *)(pFVar2 + lVar24 + 0xb0 + 8) = local_388.TriVertices[1].field0_0x0._s_0.Z;
          *(double *)(pFVar2 + lVar24 + 0xc0) = local_388.TriVertices[2].field0_0x0._s_0.X;
          *(double *)(pFVar2 + lVar24 + 0xc0 + 8) = local_388.TriVertices[2].field0_0x0._s_0.Y;
          *(double *)(pFVar2 + lVar24 + 0xd0) = local_388.TriVertices[2].field0_0x0._s_0.Z;
          *(int *)(pFVar2 + lVar24 + 0xd8) = local_388.TriSnapIndex;
        }
      }
      goto LAB_14cb8b378;
    }
    if (local_6f8 < (double)(float)local_5d8._8_4_) {
      bVar14 = false;
      goto LAB_14cb8af32;
    }
  }
  local_5e8 = (param_1->Position).field0_0x0._s_0.Z;
  dVar8 = local_5e8 - dVar32;
  dVar7 = (param_1->Position).field0_0x0._s_0.Y - (double)uVar13;
  dVar9 = (param_1->Position).field0_0x0._s_0.X - (double)uVar12;
  dVar26 = SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8);
  if (dVar26 <= 0.0) {
    dVar8 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
  }
  else {
    dVar26 = dVar11 / dVar26;
    dVar9 = dVar9 * dVar26;
    dVar7 = dVar7 * dVar26;
    dVar8 = dVar8 * dVar26;
  }
  dVar33 = (double)local_5b0._0_8_ - (double)uVar12;
  dVar26 = (double)local_5b0._8_8_ - (double)uVar13;
  local_5a0 = local_5a0 - dVar32;
  auVar30._0_8_ = local_5a0 * local_5a0;
  auVar30._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar26 * dVar26 + dVar33 * dVar33 + auVar30._0_8_;
  auVar29 = sqrtpd(auVar30,auVar6);
  if (auVar29._0_8_ <= 0.0) {
    local_5a0 = 0.0;
    dVar26 = 0.0;
    dVar33 = 0.0;
  }
  else {
    dVar32 = dVar11 / auVar29._0_8_;
    dVar33 = dVar33 * dVar32;
    dVar26 = dVar26 * dVar32;
    local_5a0 = local_5a0 * dVar32;
  }
  dVar32 = dVar26 * dVar7 + dVar33 * dVar9 + local_5a0 * dVar8;
  if ((dVar25 <= dVar32) && (dVar25 = dVar32, dVar11 <= dVar32)) {
    dVar25 = dVar11;
  }
  dVar25 = acos(dVar25);
  if (dVar25 * dVar34 < (double)param_1->VisualAngleThresholdDegrees) {
    local_2a8.CoordinateSpace.bIsSet = false;
    local_2a8.TargetActor = (AActor *)0x0;
    local_2a8.TargetComponent = (UActorComponent *)0x0;
    local_2a8.TargetType = None;
    pFVar23 = FHitResult::FHitResult(&local_488,(FHitResult *)local_5d8);
    bVar14 = GetComponentHitTriangle_Internal<UE::Math::TVector<double>_>
                       (pFVar23,local_2a8.TriVertices);
    if (bVar14) {
      local_7d8 = (double)param_1->VisualAngleThresholdDegrees;
      `UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition'::__l2::<lambda_1>::operator()
                (&local_7e8,param_1,(TRay<double> *)&local_7c0._s_0,&local_2a8,&local_7d8);
      `UModelingSceneSnappingManager::ExecuteSceneSnapQueryPosition'::__l2::<lambda_2>::operator()
                (local_7e7,param_1,(TVector<double> *)(local_5d8 + 0x28),
                 (TRay<double> *)&local_7c0._s_0,&local_2a8,&local_7d8);
      if (local_7d8 < (double)param_1->VisualAngleThresholdDegrees) {
        local_2a8.TargetActor =
             FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(local_5d8 + 0xb8));
        local_2a8.TargetComponent =
             (UActorComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_5d8 + 0xd8));
        pFVar3 = (FSceneSnapQueryResult *)(param_2->AllocatorInstance).Data;
        if (((pFVar3 <= &local_2a8) && (&local_2a8 < pFVar3 + param_2->ArrayMax)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        iVar19 = param_2->ArrayNum;
        if (iVar19 == param_2->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        param_2->ArrayNum = iVar19 + 1;
        lVar24 = (longlong)iVar19 * 0xe0;
        pFVar2[lVar24 + 1] = (FScriptContainerElement)0x0;
        pFVar2[lVar24 + 1] = (FScriptContainerElement)local_2a8.CoordinateSpace.bIsSet;
        if ((FScriptContainerElement)local_2a8.CoordinateSpace.bIsSet !=
            (FScriptContainerElement)0x0) {
          pFVar2[lVar24] = (FScriptContainerElement)local_2a8.CoordinateSpace.TypedValue;
        }
        iVar18 = iVar18 + 1;
        *(AActor **)(pFVar2 + lVar24 + 8) = local_2a8.TargetActor;
        *(UActorComponent **)(pFVar2 + lVar24 + 0x10) = local_2a8.TargetComponent;
        pFVar2[lVar24 + 0x18] = (FScriptContainerElement)local_2a8.TargetType;
        *(double *)(pFVar2 + lVar24 + 0x20) = local_2a8.Position.field0_0x0._s_0.X;
        *(double *)(pFVar2 + lVar24 + 0x20 + 8) = local_2a8.Position.field0_0x0._s_0.Y;
        *(double *)(pFVar2 + lVar24 + 0x30) = local_2a8.Position.field0_0x0._s_0.Z;
        *(double *)(pFVar2 + lVar24 + 0x38) = local_2a8.Normal.field0_0x0._s_0.X;
        *(double *)(pFVar2 + lVar24 + 0x38 + 8) = local_2a8.Normal.field0_0x0._s_0.Y;
        *(double *)(pFVar2 + lVar24 + 0x48) = local_2a8.Normal.field0_0x0._s_0.Z;
        *(double *)(pFVar2 + lVar24 + 0x50) = local_2a8.DeltaRotation.X;
        *(double *)(pFVar2 + lVar24 + 0x50 + 8) = local_2a8.DeltaRotation.Y;
        *(double *)(pFVar2 + lVar24 + 0x60) = local_2a8.DeltaRotation.Z;
        *(double *)(pFVar2 + lVar24 + 0x60 + 8) = local_2a8.DeltaRotation.W;
        *(double *)(pFVar2 + lVar24 + 0x70) = local_2a8.RotationAngle;
        *(double *)(pFVar2 + lVar24 + 0x78) = local_2a8.Scale.field0_0x0._s_0.X;
        *(double *)(pFVar2 + lVar24 + 0x78 + 8) = local_2a8.Scale.field0_0x0._s_0.Y;
        *(double *)(pFVar2 + lVar24 + 0x88) = local_2a8.Scale.field0_0x0._s_0.Z;
        *(double *)(pFVar2 + lVar24 + 0x90) = local_2a8.TriVertices[0].field0_0x0._s_0.X;
        *(double *)(pFVar2 + lVar24 + 0x90 + 8) = local_2a8.TriVertices[0].field0_0x0._s_0.Y;
        *(double *)(pFVar2 + lVar24 + 0xa0) = local_2a8.TriVertices[0].field0_0x0._s_0.Z;
        *(double *)(pFVar2 + lVar24 + 0xa0 + 8) = local_2a8.TriVertices[1].field0_0x0._s_0.X;
        *(double *)(pFVar2 + lVar24 + 0xb0) = local_2a8.TriVertices[1].field0_0x0._s_0.Y;
        *(double *)(pFVar2 + lVar24 + 0xb0 + 8) = local_2a8.TriVertices[1].field0_0x0._s_0.Z;
        *(double *)(pFVar2 + lVar24 + 0xc0) = local_2a8.TriVertices[2].field0_0x0._s_0.X;
        *(double *)(pFVar2 + lVar24 + 0xc0 + 8) = local_2a8.TriVertices[2].field0_0x0._s_0.Y;
        *(double *)(pFVar2 + lVar24 + 0xd0) = local_2a8.TriVertices[2].field0_0x0._s_0.Z;
        *(int *)(pFVar2 + lVar24 + 0xd8) = local_2a8.TriSnapIndex;
      }
    }
  }
LAB_14cb8b760:
  return iVar18 != 0;
}

// ExecuteSceneSnapQueryRotation @ 14cb8b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModelingSceneSnappingManager::ExecuteSceneSnapQueryRotation
          (UModelingSceneSnappingManager *this,FSceneSnapQueryRequest *param_1,
          TArray<FSceneSnapQueryResult,TSizedDefaultAllocator<32>_> *param_2)

{
  IToolsContextQueriesAPI *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  TQuat<double> *pTVar9;
  longlong lVar10;
  TOptional<UE::Math::TRotator<double>_> *pTVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auStack_1f8 [32];
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  TRotator<double> local_1a8;
  TQuat<double> local_188;
  undefined1 local_168 [32];
  char local_148;
  TOptional<UE::Math::TRotator<double>_> local_140;
  FScriptContainerElement local_118;
  FScriptContainerElement local_117;
  undefined8 local_110;
  undefined8 local_108;
  FScriptContainerElement local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pIVar1 = this->QueriesAPI;
  if (((pIVar1 == (IToolsContextQueriesAPI *)0x0) || ((param_1->TargetTypes & Grid) == None)) ||
     ((**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_168), local_148 == '\0')) {
    bVar6 = false;
  }
  else {
    UE::Math::TRotator<double>::TRotator<double>(&local_1a8,&param_1->DeltaRotation);
    if ((param_1->RotGridSize).bIsSet == false) {
      pTVar11 = &local_140;
    }
    else {
      pTVar11 = &param_1->RotGridSize;
    }
    local_188.Z = (pTVar11->TypedValue).Roll;
    dVar4 = (pTVar11->TypedValue).Pitch;
    dVar5 = (pTVar11->TypedValue).Yaw;
    if (local_188.Z != 0.0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (local_188.Z * __real_3fe0000000000000 + local_1a8.Roll) / local_188.Z;
      auVar14 = roundpd(unaff_XMM6,auVar14,1);
      local_1a8.Roll = auVar14._0_8_ * local_188.Z;
    }
    if (dVar5 != 0.0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (dVar5 * __real_3fe0000000000000 + local_1a8.Yaw) / dVar5;
      auVar14 = roundpd(in_XMM5,auVar12,1);
      local_1a8.Yaw = auVar14._0_8_ * dVar5;
    }
    if (dVar4 != 0.0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (dVar4 * __real_3fe0000000000000 + local_1a8.Pitch) / dVar4;
      auVar14 = roundpd(auVar13,auVar13,1);
      local_1a8.Pitch = auVar14._0_8_ * dVar4;
    }
    local_110 = 0;
    local_108 = 0;
    local_117 = (FScriptContainerElement)0x0;
    local_100 = (FScriptContainerElement)0x4;
    pTVar9 = UE::Math::TRotator<double>::Quaternion(&local_1a8,&local_188);
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_c8 = pTVar9->X;
    dStack_c0 = pTVar9->Y;
    local_b8 = pTVar9->Z;
    dStack_b0 = pTVar9->W;
    if ((pFVar2 <= &local_118) && (&local_118 < pFVar2 + (longlong)param_2->ArrayMax * 0xe0)) {
      local_1c0 = (longlong)param_2->ArrayNum;
      local_1b8 = 0xe0;
      local_1d8 = &local_118;
      local_1d0 = pFVar2;
      local_1c8 = (longlong)param_2->ArrayMax;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    param_2->ArrayNum = iVar8 + 1;
    lVar10 = (longlong)iVar8 * 0xe0;
    pFVar2[lVar10 + 1] = (FScriptContainerElement)0x0;
    pFVar2[lVar10 + 1] = local_117;
    if (local_117 != (FScriptContainerElement)0x0) {
      pFVar2[lVar10] = local_118;
    }
    *(undefined8 *)(pFVar2 + lVar10 + 8) = local_110;
    *(undefined8 *)(pFVar2 + lVar10 + 0x10) = local_108;
    pFVar2[lVar10 + 0x18] = local_100;
    *(undefined8 *)(pFVar2 + lVar10 + 0x20) = local_f8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x20 + 8) = uStack_f0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x30) = local_e8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x38) = local_e0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x38 + 8) = uStack_d8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x48) = local_d0;
    *(double *)(pFVar2 + lVar10 + 0x50) = local_c8;
    *(double *)(pFVar2 + lVar10 + 0x50 + 8) = dStack_c0;
    *(double *)(pFVar2 + lVar10 + 0x60) = local_b8;
    *(double *)(pFVar2 + lVar10 + 0x60 + 8) = dStack_b0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x70) = local_a8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x78) = local_a0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x78 + 8) = uStack_98;
    *(undefined8 *)(pFVar2 + lVar10 + 0x88) = local_90;
    *(undefined8 *)(pFVar2 + lVar10 + 0x90) = local_88;
    *(undefined8 *)(pFVar2 + lVar10 + 0x90 + 8) = uStack_80;
    *(undefined8 *)(pFVar2 + lVar10 + 0xa0) = local_78;
    *(undefined8 *)(pFVar2 + lVar10 + 0xa0 + 8) = uStack_70;
    *(undefined8 *)(pFVar2 + lVar10 + 0xb0) = local_68;
    *(undefined8 *)(pFVar2 + lVar10 + 0xb0 + 8) = uStack_60;
    *(undefined8 *)(pFVar2 + lVar10 + 0xc0) = local_58;
    *(undefined8 *)(pFVar2 + lVar10 + 0xc0 + 8) = uStack_50;
    *(undefined8 *)(pFVar2 + lVar10 + 0xd0) = local_48;
    *(undefined4 *)(pFVar2 + lVar10 + 0xd8) = local_40;
    bVar6 = true;
  }
  return bVar6;
}

// GetPrivateStaticClass @ 14cb99280

UClass * __cdecl UModelingSceneSnappingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingSceneSnappingManager",
               &Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton,
               StaticRegisterNativesUModelingSceneSnappingManager,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModelingSceneSnappingManager>,
               InternalVTableHelperCtorCaller<UModelingSceneSnappingManager>,local_res8,
               USceneSnappingManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton;
}

// HandleDynamicMeshModifiedDelegate @ 14cba0890

void __thiscall
UModelingSceneSnappingManager::HandleDynamicMeshModifiedDelegate
          (UModelingSceneSnappingManager *this,UDynamicMeshComponent *param_1)

{
  FSceneGeometrySpatialCache *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDynamicMeshComponent *local_res8;
  UDynamicMeshComponent *local_res10;
  
  local_res10 = param_1;
  if (this->bQueueModifiedDynamicMeshUpdates != false) {
    TSet<UDynamicMeshComponent_*,DefaultKeyFuncs<UDynamicMeshComponent_*,0>,FDefaultSetAllocator>::
    Emplace<UDynamicMeshComponent_*_const_&>
              (&this->PendingModifiedDynamicMeshes,&local_res8,(bool *)&local_res10);
    return;
  }
  if ((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SpatialCache).Object;
                    /* WARNING: Could not recover jumptable at 0x00014cba0921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_1,0);
  return;
}

// HandleGlobalComponentTransformChangedDelegate @ 14cba0930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::HandleGlobalComponentTransformChangedDelegate
          (UModelingSceneSnappingManager *this,USceneComponent *param_1)

{
  FSceneGeometrySpatialCache *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  undefined1 *puVar7;
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595, uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb,
       *(int *)&(this->ComponentToActorMap).field_0x8 !=
       *(int *)&(this->ComponentToActorMap).field_0x34)) {
      puVar7 = *(undefined1 **)&(this->ComponentToActorMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->ComponentToActorMap).field_0x38;
      }
      iVar5 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->ComponentToActorMap).field_0x48 - 1U &
                                (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar5 != -1) {
        while (*(USceneComponent **)
                (*(longlong *)&this->ComponentToActorMap + (longlong)iVar5 * 0x18) != param_1) {
          iVar5 = *(int *)(*(longlong *)&this->ComponentToActorMap + 0x10 + (longlong)iVar5 * 0x18);
          if (iVar5 == -1) {
            return;
          }
        }
        if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->SpatialCache).Object;
        (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,param_1);
      }
    }
  }
  return;
}

// HandleGlobalObjectModifiedDelegate @ 14cba0a50

void __thiscall
UModelingSceneSnappingManager::HandleGlobalObjectModifiedDelegate
          (UModelingSceneSnappingManager *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      (**(code **)(this->_padding_ + 0x2f8))(this,param_1);
    }
  }
  return;
}

// Initialize @ 14cba2040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UModelingSceneSnappingManager::Initialize
          (UModelingSceneSnappingManager *this,TObjectPtr<UInteractiveToolsContext> param_1)

{
  UInteractiveToolsContext *pUVar1;
  UInteractiveToolManager *pUVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSceneGeometrySpatialCache *pFVar7;
  FSceneGeometrySpatialCache *local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
  pUVar1 = *(UInteractiveToolsContext **)param_1.field0_0x0;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  (this->ParentContext).field0_0x0.DebugPtr = pUVar1;
  pTVar5 = pTVar6;
  if ((pUVar1 != (UInteractiveToolsContext *)0x0) &&
     (pUVar2 = (pUVar1->ToolManager).field0_0x0.DebugPtr, pUVar2 != (UInteractiveToolManager *)0x0))
  {
    pTVar5 = (TReferenceControllerBase<1> *)(**(code **)(pUVar2->_padding_ + 0x398))();
  }
  this->QueriesAPI = (IToolsContextQueriesAPI *)pTVar5;
  pTVar5 = ::operator_new(0x290);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FSceneGeometrySpatialCache *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSceneGeometrySpatialCache_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FSceneGeometrySpatialCache_Geometry_UE__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar5[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar5[5]._padding_ + 4) = 0;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = 0;
    pTVar5[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[9]._padding_ = 0;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar5[10]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar5[10]._padding_ + 4) = 0;
    pTVar5[0xb]._padding_ = 0;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
              ((FSparseDynamicOctree3 *)(pTVar5 + 0xc));
    pFVar7 = (FSceneGeometrySpatialCache *)(pTVar5 + 1);
    pTVar5[0xc]._padding_ = 0x40f86a0000000000;
    *(undefined4 *)&pTVar5[0xd]._padding_ = 7;
    if ((pFVar7 == (FSceneGeometrySpatialCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar5;
    pTVar6 = pTVar5;
    local_18 = pFVar7;
  }
  if (&this->SpatialCache != (TSharedPtr<UE::Geometry::FSceneGeometrySpatialCache,1> *)&local_18) {
    (this->SpatialCache).Object = pFVar7;
    local_18 = (FSceneGeometrySpatialCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SpatialCache).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// IsComponentTypeSupported @ 14cba3f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UModelingSceneSnappingManager::IsComponentTypeSupported
          (UModelingSceneSnappingManager *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBrushComponent_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
    if (param_1 != (UPrimitiveComponent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// OnActorAdded @ 14cba5400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::OnActorAdded
          (UModelingSceneSnappingManager *this,AActor *param_1,
          TFunctionRef<bool___cdecl(UPrimitiveComponent_*)> *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  UClass *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  AActor *local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_108 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_100;
  uint local_f0;
  FScriptContainerElement *local_e8;
  int local_e0;
  int local_dc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_d8;
  longlong local_d0;
  FScriptContainerElement *local_c8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_res10[0] = param_1;
  if (param_1 != (AActor *)0x0) {
    pUVar12 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar12->_padding_)) {
      return;
    }
  }
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  AActor::GetAllChildActors(local_res10[0],&local_100,true);
  if (((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar11 = local_100.ArrayNum;
  if (local_100.ArrayNum == local_100.ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_100.AllocatorInstance,&local_100.ArrayMax);
  }
  local_f0 = iVar11 + 1;
  local_100.ArrayNum = local_f0;
  *(AActor **)(local_100.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_res10[0];
  uVar14 = (ulonglong)(int)local_f0;
  local_c8 = local_100.AllocatorInstance.Data + uVar14 * 8;
  uVar15 = uVar14;
  FVar17.Data = local_100.AllocatorInstance.Data;
  do {
    pFVar8 = local_c8;
    local_e8 = FVar17.Data;
    if ((int)uVar14 != (int)uVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar17.Data == pFVar8) {
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      return;
    }
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&(*(AActor **)FVar17.Data)->OwnedComponents);
    iVar11 = *(int *)&(pTVar13->Elements).field_0x28;
    iStack_b8 = 0;
    local_a0 = 0;
    puVar1 = &(pTVar13->Elements).field_0x10;
    uStack_b4 = 1;
    iStack_a4 = 0;
    if (iVar11 != 0) {
      puVar3 = *(uint **)&(pTVar13->Elements).field_0x20;
      puVar21 = (uint *)puVar1;
      if (puVar3 != (uint *)0x0) {
        puVar21 = puVar3;
      }
      uVar19 = *puVar21;
      while (uVar19 == 0) {
        iStack_b8 = iStack_b8 + 1;
        local_a0 = local_a0 + 0x20;
        iStack_a4 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14cba560d;
        uVar19 = puVar21[iStack_b8];
      }
      uStack_b4 = ~(uVar19 - 1) & uVar19;
      uVar15 = (ulonglong)uStack_b4 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_e0 = (int)lVar5;
      iStack_a4 = local_e0 + -1 + local_a0;
      if (iVar11 < iStack_a4) {
        iStack_a4 = iVar11;
      }
    }
LAB_14cba560d:
    uVar19 = *(uint *)&(pTVar13->Elements).field_0x28;
    uStack_9c = local_44;
    iStack_98 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
    uVar18 = uVar19 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uStack_a8 = 0xffffffff;
    TStack_88.CurrentBitIndex = iStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar19 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    local_d8 = pTVar13;
    local_c0 = pTVar13;
    local_b0 = puVar1;
    local_90 = pTVar13;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar7 = local_d8;
    uVar2 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar19 != uVar2) {
      puVar4 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      puVar20 = puVar1;
      if (puVar4 != (undefined1 *)0x0) {
        puVar20 = puVar4;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
      while (uVar19 == 0) {
        iVar16 = iVar16 + 1;
        uVar18 = uVar18 + 0x20;
        uVar19 = uVar2;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar16)
        goto LAB_14cba5711;
        uVar19 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
      }
      uVar15 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_dc = (int)lVar5;
      uVar19 = local_dc + -1 + uVar18;
      if ((int)uVar2 < (int)uVar19) {
        uVar19 = uVar2;
      }
    }
LAB_14cba5711:
    while( true ) {
      pTVar13 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        local_108[0] = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_88.CurrentBitIndex == uVar19) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar13 == pTVar7)) break;
      lVar5 = *(longlong *)
               (*(longlong *)&pTVar13->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      if (lVar5 != 0) {
        pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar11 = (int)pUVar12->_padding_;
        if (((iVar11 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
             &pUVar12->_padding_)) &&
           (local_d0 = lVar5,
           cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_d0),
           cVar10 != '\0')) {
          (**(code **)(this->_padding_ + 0x2e8))(this,lVar5);
        }
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    uVar14 = local_100._8_8_ & 0xffffffff;
    FVar17.Data = local_e8 + 8;
    uVar15 = (ulonglong)local_f0;
  } while( true );
}

// OnActorRemoved @ 14cba5810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::OnActorRemoved(UModelingSceneSnappingManager *this,AActor *param_1)

{
  undefined1 *puVar1;
  TMap<UPrimitiveComponent_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  AActor *pAVar8;
  TMap<UPrimitiveComponent_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  AActor *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  AActor *local_c0;
  TMap<UPrimitiveComponent_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  TMap<UPrimitiveComponent_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  puVar1 = &(this->ComponentToActorMap).field_0x10;
  local_d8.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->ComponentToActorMap;
  local_d0 = 0;
  iStack_cc = 0;
  iVar5 = *(int *)&(this->ComponentToActorMap).field_0x28;
  uStack_ac = 1;
  iStack_b0 = 0;
  local_98 = 0;
  iStack_9c = iStack_b0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->ComponentToActorMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    local_98 = 0;
    iStack_b0 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14cba58bd;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_ac = -uVar15 & uVar15;
    uVar4 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res20;
    if (iVar5 < iStack_9c) {
      iStack_9c = iVar5;
    }
  }
LAB_14cba58bd:
  uVar15 = *(uint *)&(this->ComponentToActorMap).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_90 = *(int *)&(this->ComponentToActorMap).field_0x8 -
              *(int *)&(this->ComponentToActorMap).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_res10 = param_1;
  local_b8 = pTVar2;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar8 = local_res10;
  uVar6 = *(uint *)&(this->ComponentToActorMap).field_0x28;
  if (uVar15 != uVar6) {
    puVar16 = *(undefined1 **)&(this->ComponentToActorMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cba59c1;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_88 = (int)lVar11;
    uVar15 = local_88 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_14cba59c1:
  while( true ) {
    pTVar9 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar5 = local_d0;
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    lVar11 = *(longlong *)pTVar9;
    local_c8 = *(undefined8 *)(lVar11 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    local_c0 = *(AActor **)(lVar11 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    if (local_c0 == pAVar8) {
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)iStack_cc * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d8,&iStack_cc);
      }
      lVar11 = (longlong)local_d0;
      local_d0 = local_d0 + 1;
      *(undefined8 *)(local_d8.Data + lVar11 * 8) = local_c8;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  pFVar3 = local_d8.Data + (longlong)local_d0 * 8;
  FVar13.Data = local_d8.Data;
  while( true ) {
    if (local_d0 != iVar5) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar13.Data == pFVar3) break;
    (**(code **)(this->_padding_ + 0x2f0))(this,*(undefined8 *)FVar13.Data);
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// OnComponentAdded @ 14cba5c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::OnComponentAdded
          (UModelingSceneSnappingManager *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  FSceneGeometrySpatialCache *pFVar2;
  code *pcVar3;
  UPrimitiveComponent *pUVar4;
  char cVar5;
  bool bVar6;
  UClass *pUVar7;
  UPrimitiveComponent *local_res10;
  undefined4 local_res18 [4];
  FWeakObjectPtr local_78;
  TPairInitializer<UPrimitiveComponent_*_&&,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_&&>
  local_70;
  UPrimitiveComponent *local_60;
  UPrimitiveComponent *local_58;
  UPrimitiveComponent *local_50;
  UPrimitiveComponent **local_48;
  TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr> **local_40;
  UPrimitiveComponent **local_38;
  FWeakObjectPtr *local_30;
  undefined1 local_28 [16];
  
  if ((*(longlong *)&param_1->field_0xa8 != 0) &&
     (local_res10 = param_1, cVar5 = (**(code **)(this->_padding_ + 0x2d0))(), cVar5 != '\0')) {
    local_res18[0] = 0;
    if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->SpatialCache).Object;
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2,local_res10,local_res18);
    local_70.Value =
         *(TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr> **)&local_res10->field_0xa8;
    local_48 = &local_res10;
    local_40 = &local_70.Value;
    TSet<TTuple<UPrimitiveComponent_*,AActor_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPrimitiveComponent_*_const_&,AActor_*_&&>_>
              ((TSet<TTuple<UPrimitiveComponent_*,AActor_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>,FDefaultSetAllocator>
                *)&this->ComponentToActorMap,
               (TPairInitializer<UPrimitiveComponent_*_const_&,AActor_*_&&> *)(local_res18 + 2),
               (bool *)&local_48);
    pUVar4 = local_res10;
    if (local_res10 != (UPrimitiveComponent *)0x0) {
      pUVar7 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        local_60 = pUVar4;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UModelingSceneSnappingManager,UDynamicMeshComponent_*_&>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar4[1].field_0xd0,(UModelingSceneSnappingManager *)local_28,
                   (pmf_87267ceb)this,(UDynamicMeshComponent **)HandleDynamicMeshModifiedDelegate);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        local_78.ObjectIndex = 0;
        local_78.ObjectSerialNumber = 0;
        local_58 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_58);
        local_38 = &local_50;
        local_50 = pUVar4;
        local_30 = &local_78;
        TSet<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UPrimitiveComponent_*_&&,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_&&>_>
                  ((TSet<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&this->DynamicMeshComponents,&local_70,(bool *)&local_38);
      }
    }
  }
  return;
}

// OnComponentModified @ 14cba5e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::OnComponentModified
          (UModelingSceneSnappingManager *this,UActorComponent *param_1)

{
  int iVar1;
  FSceneGeometrySpatialCache *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->SpatialCache).Object;
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,param_1,0);
    }
  }
  return;
}

// OnComponentRemoved @ 14cba5ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UModelingSceneSnappingManager::OnComponentRemoved
          (UModelingSceneSnappingManager *this,UPrimitiveComponent *param_1)

{
  longlong lVar1;
  FSceneGeometrySpatialCache *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  FWeakObjectPtr *this_00;
  UPrimitiveComponent *local_res8;
  UPrimitiveComponent *local_res10;
  
  if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->SpatialCache).Object;
  (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,param_1);
  uVar8 = (uint)((ulonglong)param_1 >> 4);
  local_res8 = param_1;
  if (*(int *)&(this->ComponentToActorMap).field_0x8 !=
      *(int *)&(this->ComponentToActorMap).field_0x34) {
    uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar8) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    TSet<TTuple<UPrimitiveComponent_*,AActor_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<UPrimitiveComponent_const_*>
              ((TSet<TTuple<UPrimitiveComponent_*,AActor_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,AActor_*,0>,FDefaultSetAllocator>
                *)&this->ComponentToActorMap,uVar9 >> 0x10 ^ uVar9,&local_res8);
  }
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar8) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)&(this->DynamicMeshComponents).field_0x8 !=
      *(int *)&(this->DynamicMeshComponents).field_0x34) {
    puVar10 = *(undefined1 **)&(this->DynamicMeshComponents).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DynamicMeshComponents).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->DynamicMeshComponents).field_0x48 - 1U & uVar8) * 4)
    ;
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->DynamicMeshComponents).field_0x0;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x18;
        if (*(UPrimitiveComponent **)(lVar3 + (longlong)iVar6 * 0x18) == param_1) {
          this_00 = (FWeakObjectPtr *)(lVar1 + 8);
          if (lVar1 == 0) {
            this_00 = (FWeakObjectPtr *)0x0;
          }
          if (this_00 == (FWeakObjectPtr *)0x0) {
            return;
          }
          bVar5 = FWeakObjectPtr::IsValid(this_00);
          if (bVar5) {
            pUVar7 = FWeakObjectPtr::Get(this_00);
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0x27].field_0x8
                       ,this);
          }
          if (*(int *)&(this->DynamicMeshComponents).field_0x8 ==
              *(int *)&(this->DynamicMeshComponents).field_0x34) {
            return;
          }
          local_res10 = param_1;
          TSet<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UPrimitiveComponent_const_*>
                    ((TSet<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&this->DynamicMeshComponents,uVar8,&local_res10);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  return;
}

// PauseSceneGeometryUpdates @ 14cba6c00

void __thiscall
UModelingSceneSnappingManager::PauseSceneGeometryUpdates(UModelingSceneSnappingManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bQueueModifiedDynamicMeshUpdates == false) {
    this->bQueueModifiedDynamicMeshUpdates = true;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8344203286609395941>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Snapping\\ModelingSceneSnappingManager.cpp"
                     ,0xe5,"bQueueModifiedDynamicMeshUpdates == false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bQueueModifiedDynamicMeshUpdates = true;
  return;
}

// Shutdown @ 14cbb3210

void __thiscall UModelingSceneSnappingManager::Shutdown(UModelingSceneSnappingManager *this)

{
  return;
}

// StaticRegisterNativesUModelingSceneSnappingManager @ 14cbb4610

void __cdecl UModelingSceneSnappingManager::StaticRegisterNativesUModelingSceneSnappingManager(void)

{
  return;
}

// UnPauseSceneGeometryUpdates @ 14cbb62d0

void __thiscall
UModelingSceneSnappingManager::UnPauseSceneGeometryUpdates
          (UModelingSceneSnappingManager *this,bool param_1)

{
  TSet<UDynamicMeshComponent_*,DefaultKeyFuncs<UDynamicMeshComponent_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  FSceneGeometrySpatialCache *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res10 = param_1;
  if (this->bQueueModifiedDynamicMeshUpdates == false) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8344203286609395948>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Snapping\\ModelingSceneSnappingManager.cpp"
                       ,0xec,"bQueueModifiedDynamicMeshUpdates");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    iVar12 = 0;
    iVar14 = 0;
    this_00 = &this->PendingModifiedDynamicMeshes;
    uVar8 = 1;
    puVar1 = &(this->PendingModifiedDynamicMeshes).Elements.field_0x10;
    iVar3 = *(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x28;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->PendingModifiedDynamicMeshes).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cbb63de;
        uVar11 = puVar15[lVar10 + 1];
      }
      uVar8 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iVar9 = local_res18 + -1 + iVar14;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_14cbb63de:
    uVar11 = *(uint *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x28;
    uVar16 = uVar11 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar8,iVar12);
    TStack_70.CurrentBitIndex = iVar9;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_70._28_4_ = iVar9;
    TStack_70.BaseBitIndex = iVar14;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x8 -
                         *(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x28;
    if (uVar11 != uVar8) {
      puVar13 = *(undefined1 **)&(this->PendingModifiedDynamicMeshes).Elements.field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14cbb64f0;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      uVar11 = local_res20 + -1 + uVar16;
      if ((int)uVar8 < (int)uVar11) {
        uVar11 = uVar8;
      }
    }
LAB_14cbb64f0:
    while( true ) {
      if (*(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x8 -
          *(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x34 != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<UDynamicMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar11) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      uVar4 = *(undefined8 *)
               (*(longlong *)&this_00->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
      if (((this->SpatialCache).Object == (FSceneGeometrySpatialCache *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->SpatialCache).Object;
      (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,uVar4);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (*(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x8 !=
        *(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x34) {
      TSet<UDynamicMeshComponent_*,DefaultKeyFuncs<UDynamicMeshComponent_*,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
      iVar3 = *(int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0xc;
      *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x8 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->PendingModifiedDynamicMeshes).Elements.field_0xc);
      }
      *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->PendingModifiedDynamicMeshes).Elements.field_0x28 = 0;
    }
    this->bQueueModifiedDynamicMeshUpdates = false;
  }
  return;
}

