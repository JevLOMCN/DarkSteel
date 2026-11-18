// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 33

// StaticClass @ 14ca41440

UClass * __cdecl UOctreeDynamicMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OctreeDynamicMeshComponent",
               &Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.InnerSingleton,
               StaticRegisterNativesUOctreeDynamicMeshComponent,0x720,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOctreeDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UOctreeDynamicMeshComponent>,local_res8,
               UBaseDynamicMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.InnerSingleton;
}

// UOctreeDynamicMeshComponent @ 14ca68640

UOctreeDynamicMeshComponent * __thiscall
UOctreeDynamicMeshComponent::UOctreeDynamicMeshComponent
          (UOctreeDynamicMeshComponent *this,FVTableHelper *param_1)

{
  UBaseDynamicMeshComponent::UBaseDynamicMeshComponent((UBaseDynamicMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__IToolFrameworkComponent__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x5a0 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x5a8 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  *(undefined8 *)&this->OnMeshChanged = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x10 = 0;
  *(undefined8 *)&this->TriangleColorFunc = 0;
  *(undefined8 *)&(this->TriangleColorFunc).field_0x28 = 0;
  (this->MeshObject).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->MeshObjectChangedHandle).ID = 0;
  (this->PreMeshChangeHandle).ID = 0;
  (this->Octree).Ptr = (FDynamicMeshOctree3 *)0x0;
  (this->OctreeCut).Ptr = (FTreeCutSet *)0x0;
  (this->TriangleDecomposition).Sets.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleDecomposition).Sets.Array.ArrayNum = 0;
  (this->TriangleDecomposition).Sets.Array.ArrayMax = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x20 = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x18 = 2;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x34 = 0;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x48 = 0;
  (this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleDecomposition).AllSetIDs.ArrayNum = 0;
  (this->TriangleDecomposition).AllSetIDs.ArrayMax = 0;
  (this->TriangleDecomposition).IDCounter = 1;
  (this->CutCellSetMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CutCellSetMap).ArrayNum = 0;
  (this->CutCellSetMap).ArrayMax = 0;
  return this;
}

// UOctreeDynamicMeshComponent @ 14ca687b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UOctreeDynamicMeshComponent * __thiscall
UOctreeDynamicMeshComponent::UOctreeDynamicMeshComponent
          (UOctreeDynamicMeshComponent *this,FObjectInitializer *param_1)

{
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
  *pTVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UDynamicMesh *pUVar6;
  FDelegateHandle FVar7;
  FDynamicMeshOctree3 *pFVar8;
  FDynamicMeshOctree3 *pFVar9;
  FDynamicMeshOctree3 *pFVar10;
  FName local_res8;
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 uStack_20;
  
  UBaseDynamicMeshComponent::UBaseDynamicMeshComponent((UBaseDynamicMeshComponent *)this,param_1);
  pFVar10 = (FDynamicMeshOctree3 *)0x0;
  *(undefined ***)this = &_vftable__for__UObject__;
  pTVar1 = &this->Octree;
  *(undefined8 *)&this->OnMeshChanged = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  pTVar2 = &this->OctreeCut;
  *(undefined8 *)&(this->OnMeshChanged).field_0x8 = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->OnMeshChanged).field_0x10 = 0;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined8 *)&(this->OnMeshChanged).field_0x18 = 2;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__IToolFrameworkComponent__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x5a0 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined8 *)&this->TriangleColorFunc = 0;
  *(undefined8 *)&(this->TriangleColorFunc).field_0x28 = 0;
  (this->MeshObject).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->MeshObjectChangedHandle).ID = 0;
  (this->PreMeshChangeHandle).ID = 0;
  pTVar1->Ptr = (FDynamicMeshOctree3 *)0x0;
  pTVar2->Ptr = (FTreeCutSet *)0x0;
  (this->TriangleDecomposition).Sets.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleDecomposition).Sets.Array.ArrayNum = 0;
  (this->TriangleDecomposition).Sets.Array.ArrayMax = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x20 = 0;
  *(undefined ***)&this->field_0x5a8 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x34 = 0;
  *(undefined8 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x48 = 0;
  (this->TriangleDecomposition).IDCounter = 1;
  (this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleDecomposition).AllSetIDs.ArrayNum = 0;
  (this->TriangleDecomposition).AllSetIDs.ArrayMax = 0;
  this->field_0x42 = this->field_0x42 & 0xfd;
  (this->CutCellSetMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CutCellSetMap).ArrayNum = 0;
  (this->CutCellSetMap).ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  pFVar4 = ::FName::FName(&local_res8,L"DynamicMesh");
  FVar3 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UDynamicMesh_NoRegister();
  pUVar6 = (UDynamicMesh *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  uStack_20._0_4_ = 0;
  local_28 = OnMeshObjectChanged;
  (this->MeshObject).field0_0x0.DebugPtr = pUVar6;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UOctreeDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar6->MeshChangedEvent,(UOctreeDynamicMeshComponent *)&local_res8,
                     (pmf_8d422e59 *)this);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
                    /* WARNING: Load size is inaccurate */
  (this->MeshObjectChangedHandle).ID = *FVar7.ID;
  local_28 = OnPreMeshObjectChanged;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UOctreeDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&((this->MeshObject).field0_0x0.DebugPtr)->PreMeshChangedEvent,
                     (UOctreeDynamicMeshComponent *)&local_res8,(pmf_8d422e59 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->PreMeshChangeHandle).ID = *FVar7.ID;
  pFVar8 = ::operator_new(0x208);
  pFVar9 = pFVar10;
  if (pFVar8 != (FDynamicMeshOctree3 *)0x0) {
    memset(pFVar8,0,0x208);
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar8);
    (pFVar8->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (pFVar8->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (pFVar8->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (pFVar8->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (pFVar8->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (pFVar8->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    pFVar9 = pFVar8;
  }
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
                 *)&local_38) {
    if (pFVar9 == (FDynamicMeshOctree3 *)0x0) goto LAB_14ca68ab3;
    UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar9);
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar8 == (FDynamicMeshOctree3 *)0x0) goto LAB_14ca68ab3;
    UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar8);
    pFVar9 = pFVar8;
  }
  ::operator_delete(pFVar9,0x208);
LAB_14ca68ab3:
  UE::Geometry::FDynamicMeshOctree3::Initialize
            (pTVar1->Ptr,(((this->MeshObject).field0_0x0.DebugPtr)->Mesh).Ptr);
  pFVar9 = ::operator_new(0x68);
  if (pFVar9 != (FDynamicMeshOctree3 *)0x0) {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar9->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    pFVar9->_padding_ = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    pFVar10 = pFVar9;
  }
  if (pTVar2 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
                 *)&local_30) {
    if (pFVar10 == (FDynamicMeshOctree3 *)0x0) {
      return this;
    }
    *(undefined4 *)&pFVar10->_padding_ = 0;
    if ((void *)pFVar10->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar10->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar10->_padding_);
    pFVar9 = pFVar10;
    if ((void *)pFVar10->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar10->_padding_);
    }
  }
  else {
    pFVar9 = (FDynamicMeshOctree3 *)pTVar2->Ptr;
    pTVar2->Ptr = (FTreeCutSet *)pFVar10;
    if (pFVar9 == (FDynamicMeshOctree3 *)0x0) {
      return this;
    }
    *(undefined4 *)&pFVar9->_padding_ = 0;
    if ((void *)pFVar9->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar9->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar9->_padding_);
    if ((void *)pFVar9->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar9->_padding_);
    }
  }
  ::operator_delete(pFVar9,0x68);
  return this;
}

// ~UOctreeDynamicMeshComponent @ 14ca6b920

void __thiscall
UOctreeDynamicMeshComponent::~UOctreeDynamicMeshComponent(UOctreeDynamicMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FTreeCutSet *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FDynamicMeshOctree3 *this_00;
  longlong *plVar5;
  longlong *plVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__IToolFrameworkComponent__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x5a0 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x5a8 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  pFVar1 = (this->CutCellSetMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TriangleDecomposition).SetIdentifierMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TriangleDecomposition).SetIdentifierMap);
  TIndirectArray<UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->TriangleDecomposition).Sets,0);
  pFVar1 = (this->TriangleDecomposition).Sets.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (this->OctreeCut).Ptr;
  if (pFVar3 != (FTreeCutSet *)0x0) {
    (pFVar3->CutCellIDs).HashSize = 0;
    FVar4 = (pFVar3->CutCellIDs).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar3->CutCellIDs).Elements);
    pFVar1 = (pFVar3->CutCells).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x68);
  }
  this_00 = (this->Octree).Ptr;
  if (this_00 != (FDynamicMeshOctree3 *)0x0) {
    UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)this_00);
    ::operator_delete(this_00,0x208);
  }
  if (*(longlong *)&this->TriangleColorFunc != 0) {
    plVar5 = *(longlong **)&(this->TriangleColorFunc).field_0x28;
    plVar6 = (longlong *)&(this->TriangleColorFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshChanged).field_0x8,*(int *)&(this->OnMeshChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnMeshChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshChanged);
  UBaseDynamicMeshComponent::~UBaseDynamicMeshComponent((UBaseDynamicMeshComponent *)this);
  return;
}

// operator() @ 14ca6ecf0

void __thiscall
`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>::operator()
          (void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FCellReference *pFVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> **local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  lVar4 = *(longlong *)this;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar4 + 0x708)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x700);
  uVar11 = *(uint *)(lVar4 + (longlong)param_1 * 8);
  pFVar3 = (FCellReference *)(lVar4 + (longlong)param_1 * 8);
  pdVar5 = *(double **)((longlong)this + 8);
  pdVar6 = *(double **)(*(longlong *)this + 0x678);
  if (((((int)uVar11 < 0) ||
       (*(int *)(pdVar6 + 3) * 0x200 + *(int *)((longlong)pdVar6 + 0x1c) <= (int)uVar11)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     ((longlong)pdVar6[4] + (ulonglong)(uVar11 >> 9) * 8) +
                                   (ulonglong)(uVar11 & 0x1ff) * 2) - 1U))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CellRefCounts.IsValid(CellRef.CellID)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshOctree3.h"
                          ,0x167,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar14 = (ulonglong)(pFVar3->CellID & 0x1ff) * 0x34;
  lVar4 = *(longlong *)((longlong)pdVar6[0xb] + (ulonglong)(pFVar3->CellID >> 9) * 8);
  local_68 = pdVar5[2];
  dStack_60 = pdVar5[3];
  local_78 = *pdVar5;
  dStack_70 = pdVar5[1];
  local_58 = pdVar5[4];
  dStack_50 = pdVar5[5];
  dVar15 = *pdVar6 / (double)(ulonglong)(1L << (*(byte *)(lVar4 + 4 + lVar14) & 0x1f));
  dVar17 = dVar15 * pdVar6[1];
  dVar18 = (double)*(int *)(lVar4 + 0xc + lVar14) * dVar15 - dVar17;
  dVar16 = (double)*(int *)(lVar4 + 8 + lVar14) * dVar15 - dVar17;
  dVar9 = (double)*(int *)(lVar4 + 0x10 + lVar14) * dVar15 - dVar17;
  dVar15 = dVar17 + dVar17 + dVar15;
  if ((((dVar16 < dStack_60) && (local_78 < dVar15 + dVar16)) &&
      ((dVar18 < local_58 && ((dStack_70 < dVar15 + dVar18 && (dVar9 < dStack_50)))))) &&
     (local_68 < dVar15 + dVar9)) {
    pFVar1 = (FScriptContainerElement *)(pFVar3 + 1);
    pTVar13 = UE::Geometry::FArrayIndexSetsDecomposition::GetIndexSetArray
                        ((FArrayIndexSetsDecomposition *)(*(longlong *)this + 0x688),*(uint *)pFVar1
                        );
    pTVar13->ArrayNum = 0;
    if (pTVar13->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar13->AllocatorInstance,0,&pTVar13->ArrayMax);
    }
    local_80 = &local_res8;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<``UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
    local_res8 = pTVar13;
    UE::Geometry::FDynamicMeshOctree3::CollectTriangles
              (*(FDynamicMeshOctree3 **)(*(longlong *)this + 0x678),pFVar3,
               (TFunctionRef<void___cdecl(int)> *)&local_88);
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + pTVar13->ArrayNum;
    pFVar7 = *(ForAnyElementType **)((longlong)this + 0x20);
    if (((pFVar7->Data <= pFVar1) &&
        (pFVar1 < pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = *(int *)&pFVar7[1].Data;
    piVar2 = (int *)((longlong)&pFVar7[1].Data + 4);
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,pFVar7,piVar2);
    }
    *(int *)&pFVar7[1].Data = iVar12 + 1;
    *(uint *)(pFVar7->Data + (longlong)iVar12 * 4) = *(uint *)pFVar1;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
  }
  return;
}

// operator() @ 14ca6f410

FColor __thiscall
`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FColor_u_0 FVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 in_register_00000084;
  uint in_R9D;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  plVar1 = *(longlong **)this;
  if (plVar1[0xc6] != 0) {
    local_res10 = (**(code **)(*plVar1 + 0xb38))
                            (plVar1,param_1,CONCAT44(in_register_00000084,param_2));
    UE::Core::Private::Function::CheckCallable((void *)plVar1[0xc6]);
    pcVar2 = (code *)plVar1[0xc6];
    plVar5 = plVar1 + 200;
    if ((longlong *)plVar1[0xcb] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[0xcb];
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(param_1,uVar4,&local_res10,local_res8);
    return (FColor)SUB84(param_1,0);
  }
  FVar3 = FColor::White.field0_0x0;
  if ((in_R9D & 1) == 0) {
    FVar3 = FColor::Red.field0_0x0;
  }
  *(FColor_u_0 *)&param_1->_padding_ = FVar3;
  return (FColor)SUB84(param_1,0);
}

// operator() @ 14ca70870

void __thiscall
`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l19::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ca70b30

void __thiscall
`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l12::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ca71670

void __thiscall
`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_3>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ca71990

void __thiscall
`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_3>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ca71a40

void __thiscall
`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_4>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ca71e60

void __thiscall
`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_4>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// ApplyChange @ 14ca78bf0

void __thiscall
UOctreeDynamicMeshComponent::ApplyChange
          (UOctreeDynamicMeshComponent *this,FMeshChange *param_1,bool param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0xc0 + 0x30) + 0x10))();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x70)
  ;
  return;
}

// ApplyChange @ 14ca78c20

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
UOctreeDynamicMeshComponent::ApplyChange
          (UOctreeDynamicMeshComponent *this,FMeshReplacementChange *param_1,bool param_2)

{
  undefined1 *puVar1;
  FDynamicMeshOctree3 *this_00;
  FSparseDynamicOctree3 *pFVar2;
  FDynamicMesh3 *pFVar3;
  FSparseDynamicOctree3 *pFVar4;
  FSparseDynamicOctree3 *pFVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  (**(code **)(*(longlong *)(*(longlong *)&this->field_0xb8 + 0x38) + 0x10))();
  pFVar2 = ::operator_new(0x208);
  pFVar5 = (FSparseDynamicOctree3 *)0x0;
  pFVar4 = pFVar5;
  if (pFVar2 != (FSparseDynamicOctree3 *)0x0) {
    memset(pFVar2,0,0x208);
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(pFVar2);
    pFVar2[1].MaxExpandFactor = 1.7976931348623157e+308;
    *(undefined8 *)&pFVar2[1].MaxTreeDepth = 0x7fefffffffffffff;
    pFVar2[1].CellRefCounts.RefCounts.CurBlock = 0xffffffff;
    pFVar2[1].CellRefCounts.RefCounts.CurBlockUsed = 0x7fefffff;
    pFVar2[1].CellRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
         (FScriptContainerElement *)0xffefffffffffffff;
    pFVar2[1].CellRefCounts.RefCounts.Blocks.ArrayNum = -1;
    pFVar2[1].CellRefCounts.RefCounts.Blocks.ArrayMax = -0x100001;
    pFVar2[1].CellRefCounts.FreeIndices.CurBlock = 0xffffffff;
    pFVar2[1].CellRefCounts.FreeIndices.CurBlockUsed = 0xffefffff;
    pFVar4 = pFVar2;
  }
  puVar1 = &this->field_0xd0;
  if ((undefined8 *)puVar1 == &local_28) {
    if (pFVar4 != (FSparseDynamicOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(pFVar4);
      goto LAB_14ca78cf6;
    }
  }
  else {
    pFVar2 = *(FSparseDynamicOctree3 **)puVar1;
    *(FSparseDynamicOctree3 **)puVar1 = pFVar4;
    if (pFVar2 != (FSparseDynamicOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(pFVar2);
      pFVar4 = pFVar2;
LAB_14ca78cf6:
      ::operator_delete(pFVar4,0x208);
    }
  }
  this_00 = *(FDynamicMeshOctree3 **)puVar1;
  pFVar3 = (FDynamicMesh3 *)
           (**(code **)(*(longlong *)&this[-1].field_0x178 + 0xb38))(&this[-1].field_0x178);
  UE::Geometry::FDynamicMeshOctree3::Initialize(this_00,pFVar3);
  pFVar4 = ::operator_new(0x68);
  if (pFVar4 != (FSparseDynamicOctree3 *)0x0) {
    (pFVar4->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar4->CellRefCounts).RefCounts.Blocks.ArrayNum = 0;
    (pFVar4->CellRefCounts).RefCounts.Blocks.ArrayMax = 0;
    *(undefined8 *)&(pFVar4->CellRefCounts).UsedCount = 0;
    *(undefined8 *)((longlong)&(pFVar4->Cells).Blocks.AllocatorInstance.Data + 4) = 0;
    (pFVar4->Cells).Blocks.ArrayMax = 0;
    pFVar4->RootDimension = 0.0;
    pFVar4->MaxExpandFactor = 0.0;
    *(undefined8 *)&pFVar4->MaxTreeDepth = 0;
    (pFVar4->CellRefCounts).RefCounts.CurBlock = 0;
    (pFVar4->CellRefCounts).RefCounts.CurBlockUsed = 0;
    (pFVar4->CellRefCounts).FreeIndices.CurBlock = 0;
    (pFVar4->CellRefCounts).FreeIndices.CurBlockUsed = 0;
    *(undefined4 *)&(pFVar4->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = 0;
    *(undefined4 *)
     ((longlong)&(pFVar4->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data + 4) = 0x80;
    (pFVar4->CellRefCounts).FreeIndices.Blocks.ArrayNum = -1;
    (pFVar4->CellRefCounts).FreeIndices.Blocks.ArrayMax = 0;
    (pFVar4->Cells).CurBlock = 0;
    (pFVar4->Cells).CurBlockUsed = 0;
    *(undefined4 *)&(pFVar4->Cells).Blocks.AllocatorInstance.Data = 0;
    pFVar5 = pFVar4;
  }
  puVar1 = &this->field_0xd8;
  if ((undefined8 *)puVar1 == &local_20) {
    if (pFVar5 == (FSparseDynamicOctree3 *)0x0) goto LAB_14ca78e06;
    *(undefined4 *)&(pFVar5->Cells).Blocks.AllocatorInstance.Data = 0;
    if (*(void **)&pFVar5->Cells != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar5->Cells);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar5->MaxTreeDepth);
    pFVar4 = pFVar5;
    if ((void *)pFVar5->RootDimension != (void *)0x0) {
      FMemory::Free((void *)pFVar5->RootDimension);
    }
  }
  else {
    pFVar4 = *(FSparseDynamicOctree3 **)puVar1;
    *(FSparseDynamicOctree3 **)puVar1 = pFVar5;
    if (pFVar4 == (FSparseDynamicOctree3 *)0x0) goto LAB_14ca78e06;
    *(undefined4 *)&(pFVar4->Cells).Blocks.AllocatorInstance.Data = 0;
    if (*(void **)&pFVar4->Cells != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar4->Cells);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar4->MaxTreeDepth);
    if ((void *)pFVar4->RootDimension != (void *)0x0) {
      FMemory::Free((void *)pFVar4->RootDimension);
    }
  }
  ::operator_delete(pFVar4,0x68);
LAB_14ca78e06:
  *(undefined4 *)&this->field_0x160 = 0;
  if (*(int *)&this->field_0x164 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->field_0x158,0,(int *)&this->field_0x164);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)&this[-1].field_0x178);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x68)
  ;
  return;
}

// ApplyChange @ 14ca78e70

void __thiscall
UOctreeDynamicMeshComponent::ApplyChange
          (UOctreeDynamicMeshComponent *this,FMeshVertexChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                     ,0x146,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyTransform @ 14ca793b0

void __thiscall
UOctreeDynamicMeshComponent::ApplyTransform
          (UOctreeDynamicMeshComponent *this,TTransform<double> *param_1,bool param_2)

{
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
  *pTVar2;
  double dVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMeshOctree3 *pFVar5;
  FDynamicMeshOctree3 *pFVar6;
  FDynamicMeshOctree3 *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double local_98;
  double local_90;
  TQuaternion<double>_u_0 local_88;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_88._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_88._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_88._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_88._s_0.W = (param_1->Rotation).ZW.m128d_f64[1];
  local_58 = (param_1->Translation).ZW.m128d_f64[0];
  local_b8._s_0.Z = (param_1->Scale3D).ZW.m128d_f64[0];
  local_68 = (param_1->Translation).XY.m128d_f64[0];
  dStack_60 = (param_1->Translation).XY.m128d_f64[1];
  local_50 = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
  uStack_4c = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
  uStack_48 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
  uStack_44 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  local_40 = local_b8._s_0.Z;
  if (param_2) {
    pFVar4 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))();
    MeshTransforms::ApplyTransformInverse(pFVar4,(TTransformSRT3<double> *)&local_88._s_0,true,All);
  }
  else {
    pFVar4 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))();
    MeshTransforms::ApplyTransform(pFVar4,(TTransformSRT3<double> *)&local_88._s_0,true,All);
  }
  if (*(longlong *)&this->field_0x530 != 0) {
    pFVar6 = (this->Octree).Ptr;
    dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_47efffffe0000000;
    dVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_47efffffe0000000;
    dVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_47efffffe0000000;
    dVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c7efffffe0000000;
    dVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c7efffffe0000000;
    (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.X =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c7efffffe0000000;
    (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.Y = dVar9;
    (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.Z = dVar10;
    (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.X = dVar3;
    (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar11;
    (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.Z = dVar8;
                    /* WARNING: Could not recover jumptable at 0x00014ca79504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0xb50))();
    return;
  }
  pFVar4 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))(this);
  UE::Geometry::FDynamicMesh3::GetBounds(pFVar4,(TAxisAlignedBox3<double> *)&local_b8._s_0,true);
  pFVar5 = ::operator_new(0x208);
  pFVar7 = (FDynamicMeshOctree3 *)0x0;
  pFVar6 = pFVar7;
  if (pFVar5 != (FDynamicMeshOctree3 *)0x0) {
    memset(pFVar5,0,0x208);
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar5);
    (pFVar5->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (pFVar5->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (pFVar5->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (pFVar5->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (pFVar5->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (pFVar5->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    pFVar6 = pFVar5;
  }
  pTVar1 = &this->Octree;
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
                 *)&local_38) {
    if (pFVar6 != (FDynamicMeshOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar6);
      goto LAB_14ca795eb;
    }
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar6;
    if (pFVar5 != (FDynamicMeshOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar5);
      pFVar6 = pFVar5;
LAB_14ca795eb:
      ::operator_delete(pFVar6,0x208);
    }
  }
  local_90 = local_90 - local_b8._s_0.Z;
  local_a0 = local_a0 - local_b8._s_0.X;
  dVar10 = local_98 - local_b8._s_0.Y;
  if (local_98 - local_b8._s_0.Y <= 0.0) {
    dVar10 = 0.0;
  }
  if (local_90 <= 0.0) {
    local_90 = 0.0;
  }
  if (local_a0 <= 0.0) {
    local_a0 = 0.0;
  }
  if (dVar10 <= local_90) {
    dVar10 = local_90;
  }
  if (dVar10 <= local_a0) {
    dVar10 = local_a0;
  }
  pTVar1->Ptr->_padding_ = (longlong)(dVar10 * __real_3fd0000000000000);
  pFVar6 = pTVar1->Ptr;
  pFVar4 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))(this);
  UE::Geometry::FDynamicMeshOctree3::Initialize(pFVar6,pFVar4);
  pFVar6 = ::operator_new(0x68);
  if (pFVar6 != (FDynamicMeshOctree3 *)0x0) {
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar6->_padding_ + 4) = 0;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar6->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0;
    pFVar6->_padding_ = 0;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    pFVar7 = pFVar6;
  }
  pTVar2 = &this->OctreeCut;
  if (pTVar2 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
                 *)local_30) {
    if (pFVar7 == (FDynamicMeshOctree3 *)0x0) goto LAB_14ca79739;
    *(undefined4 *)&pFVar7->_padding_ = 0;
    if ((void *)pFVar7->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar7->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar7->_padding_);
    pFVar6 = pFVar7;
    if ((void *)pFVar7->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar7->_padding_);
    }
  }
  else {
    pFVar6 = (FDynamicMeshOctree3 *)pTVar2->Ptr;
    pTVar2->Ptr = (FTreeCutSet *)pFVar7;
    if (pFVar6 == (FDynamicMeshOctree3 *)0x0) goto LAB_14ca79739;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    if ((void *)pFVar6->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar6->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->_padding_);
    if ((void *)pFVar6->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar6->_padding_);
    }
  }
  ::operator_delete(pFVar6,0x68);
LAB_14ca79739:
  (this->CutCellSetMap).ArrayNum = 0;
  if ((this->CutCellSetMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CutCellSetMap).AllocatorInstance,0,&(this->CutCellSetMap).ArrayMax);
  }
  return;
}

// CalcBounds @ 14ca7b0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UOctreeDynamicMeshComponent::CalcBounds
          (UOctreeDynamicMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__
          ,TTransform<double> *param_1)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
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
  bool bVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  FFunctionStorage *pFVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined1 auStack_268 [32];
  int local_248 [4];
  undefined1 local_238 [16];
  FFunctionStorage local_228;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  BaseIterator local_198;
  code *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong *plStack_160;
  code *local_158 [2];
  longlong local_148 [3];
  longlong *local_130;
  FRefCountVector *local_128;
  FRefCountVector *local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *plStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_268;
  bVar14 = false;
  local_208 = 0.0;
  dStack_200 = 0.0;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_1e8 = 0.0;
  dStack_1e0 = 0.0;
  lVar18 = (**(code **)(*(longlong *)this + 0xb30))();
  plStack_1a0 = (longlong *)0x0;
  local_1b8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_228.HeapAllocation = (FFunctionStorage *)0x0;
  local_1c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
              ::Call;
  local_238._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
       ::Call;
  uStack_1b0 = lVar18;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_1b8,&local_228);
  local_128 = (FRefCountVector *)(lVar18 + 0x20);
  local_158[0] = (code *)0x0;
  local_130 = (longlong *)0x0;
  TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
            ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_158,
             (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_238);
  if ((code *)local_238._0_8_ != (code *)0x0) {
    pFVar20 = &local_228;
    if (local_228.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar20 = local_228.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar20->InlineAllocation + 0x10))();
  }
  if (local_1c8 != (code *)0x0) {
    plVar22 = &local_1b8;
    if (plStack_1a0 != (longlong *)0x0) {
      plVar22 = plStack_1a0;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  local_238._0_8_ = local_128;
  local_238._8_4_ = 0;
  local_238._12_4_ = (local_128->RefCounts).CurBlockUsed + (local_128->RefCounts).CurBlock * 0x200;
  if ((local_238._12_4_ != 0) &&
     (pFVar2 = (local_128->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar23 = 1;
    local_238._8_4_ = 1;
    if (1 < (int)local_238._12_4_) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar2 + (uVar23 >> 9) * 8) +
                          (ulonglong)(local_238._8_4_ & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        local_238._8_4_ = (int)uVar23 + 1;
        uVar23 = (ulonglong)(uint)local_238._8_4_;
      } while ((int)local_238._8_4_ < (int)local_238._12_4_);
    }
  }
  local_188 = (code *)0x0;
  plStack_160 = (longlong *)0x0;
  local_1c8 = local_158[0];
  plStack_1a0 = (longlong *)0x0;
  local_198.Vector = local_128;
  local_198.Index = local_238._8_4_;
  local_198.LastIndex = local_238._12_4_;
  if (local_158[0] != (code *)0x0) {
    plVar22 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar22 = local_130;
    }
    (**(code **)*plVar22)(plVar22,&local_1b8);
  }
  plVar22 = plStack_160;
  uVar17 = local_168;
  uVar16 = uStack_180;
  pcVar15 = local_188;
  lVar18 = CONCAT44(uStack_174,local_178);
  uVar19 = CONCAT44(uStack_16c,uStack_170);
  local_188 = local_1c8;
  uStack_180 = uStack_1c0;
  local_168 = local_1a8;
  plStack_160 = plStack_1a0;
  local_178 = (undefined4)local_1b8;
  uStack_174 = local_1b8._4_4_;
  uStack_170 = (undefined4)uStack_1b0;
  uStack_16c = uStack_1b0._4_4_;
  local_1c8 = pcVar15;
  uStack_1c0 = uVar16;
  local_1a8 = uVar17;
  plStack_1a0 = plVar22;
  local_1b8 = (undefined **)lVar18;
  uStack_1b0 = uVar19;
  if (pcVar15 != (code *)0x0) {
    plVar21 = &local_1b8;
    if (plVar22 != (longlong *)0x0) {
      plVar21 = plVar22;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  local_238._8_4_ = (local_128->RefCounts).CurBlockUsed + (local_128->RefCounts).CurBlock * 0x200;
  local_108 = (code *)0x0;
  plStack_e0 = (longlong *)0x0;
  plStack_1a0 = (longlong *)0x0;
  local_1c8 = local_158[0];
  local_118 = local_128;
  uStack_110 = CONCAT44(local_238._8_4_,local_238._8_4_);
  local_238._0_8_ = local_128;
  local_238._12_4_ = local_238._8_4_;
  if (local_158[0] != (code *)0x0) {
    plVar22 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar22 = local_130;
    }
    (**(code **)*plVar22)(plVar22,&local_1b8);
  }
  plVar22 = plStack_e0;
  uVar16 = local_e8;
  uVar19 = uStack_100;
  pcVar15 = local_108;
  local_108 = local_1c8;
  uStack_100 = uStack_1c0;
  local_e8 = local_1a8;
  plStack_e0 = plStack_1a0;
  local_f8 = (undefined4)local_1b8;
  uStack_f4 = local_1b8._4_4_;
  uStack_f0 = (undefined4)uStack_1b0;
  uStack_ec = uStack_1b0._4_4_;
  local_1c8 = pcVar15;
  uStack_1c0 = uVar19;
  local_1a8 = uVar16;
  plStack_1a0 = plVar22;
  if (pcVar15 != (code *)0x0) {
    plVar21 = &local_1b8;
    if (plVar22 != (longlong *)0x0) {
      plVar21 = plVar22;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  dVar9 = dStack_1e0;
  dVar10 = dStack_200;
  dVar3 = dStack_1f0;
  dVar6 = dStack_1f0;
  dVar8 = local_1e8;
  dVar11 = local_1f8;
  dVar12 = local_208;
  if (local_198.Index != (int)uStack_110) {
    do {
      local_248[0] = local_198.Index;
      UE::Core::Private::Function::CheckCallable(local_188);
      pcVar15 = local_188;
      plVar22 = (longlong *)&local_178;
      if (plStack_160 != (longlong *)0x0) {
        plVar22 = plStack_160;
      }
      uVar19 = (**(code **)(*plVar22 + 8))();
      (*pcVar15)(local_238,uVar19,local_248);
      auVar33 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      auVar29 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar13 = (param_1->Rotation).ZW.m128d_f64[1];
      local_228.InlineAllocation._0_8_ =
           (double)local_228.InlineAllocation._0_8_ * (param_1->Scale3D).ZW.m128d_f64[0];
      dVar5 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar26 = (param_1->Scale3D).XY.m128d_f64[0] * (double)local_238._0_8_;
      dVar4 = (param_1->Scale3D).XY.m128d_f64[1] *
              (double)CONCAT44(local_238._12_4_,local_238._8_4_);
      uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar24 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar34._8_4_ = SUB84(dVar4,0);
      auVar34._0_8_ = dVar26;
      auVar34._12_4_ = uVar37;
      dVar6 = auVar33._0_8_;
      auVar27 = blendpd(auVar24,auVar33,2);
      auVar35._0_8_ = auVar34._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar26;
      auVar35._8_8_ = (double)local_228.InlineAllocation._0_8_ * auVar24._8_8_ - dVar6 * dVar4;
      auVar30._8_4_ = SUB84(dVar4,0);
      auVar30._0_8_ = dVar26;
      auVar30._12_4_ = uVar37;
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = local_228.InlineAllocation._0_8_;
      auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar24 = blendpd(auVar30,auVar24,2);
      auVar25._0_8_ =
           auVar24._0_8_ * dVar6 - auVar27._0_8_ * (double)local_228.InlineAllocation._0_8_;
      auVar25._8_8_ = auVar24._8_8_ * auVar33._8_8_ - auVar27._8_8_ * dVar5;
      auVar24 = blendpd(auVar35,auVar25,2);
      dVar5 = auVar35._8_8_ + auVar35._8_8_;
      dVar7 = auVar25._0_8_ + auVar25._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar36._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar36._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar31._8_4_ = SUB84(dVar7,0);
      auVar31._0_8_ = dVar5;
      auVar31._12_4_ = uVar37;
      auVar28._8_4_ = SUB84(dVar7,0);
      auVar28._0_8_ = dVar5;
      auVar28._12_4_ = uVar37;
      auVar24 = blendpd(auVar28,auVar36,2);
      auVar32._0_8_ = auVar31._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar5;
      auVar32._8_8_ = auVar36._0_8_ * auVar29._8_8_ - dVar6 * dVar7;
      auVar27._8_4_ = SUB84(auVar32._8_8_,0);
      auVar27._0_8_ = auVar32._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
      auVar30 = blendpd(auVar29,auVar33,2);
      auVar29._0_8_ = auVar24._0_8_ * dVar6 - auVar30._0_8_ * auVar36._0_8_;
      auVar29._8_8_ = auVar24._8_8_ * auVar33._8_8_ - auVar30._8_8_ * auVar36._8_8_;
      auVar33 = blendpd(auVar32,auVar29,2);
      local_228.InlineAllocation._0_8_ =
           auVar36._0_8_ * dVar13 + (double)local_228.InlineAllocation._0_8_ + auVar33._0_8_ +
           (param_1->Translation).ZW.m128d_f64[0];
      dVar6 = dVar5 * dVar13 + dVar26 + auVar27._8_8_ + (param_1->Translation).XY.m128d_f64[0];
      dVar26 = dVar7 * dVar13 + dVar4 + auVar29._0_8_ + (param_1->Translation).XY.m128d_f64[1];
      if (bVar14) {
        if ((double)local_228.InlineAllocation._0_8_ <= dVar11) {
          dVar11 = (double)local_228.InlineAllocation._0_8_;
        }
        if (dVar9 <= (double)local_228.InlineAllocation._0_8_) {
          dVar9 = (double)local_228.InlineAllocation._0_8_;
        }
        if (dVar6 <= dVar12) {
          dVar12 = dVar6;
        }
        if (dVar3 <= dVar6) {
          dVar3 = dVar6;
        }
        dVar6 = dVar3;
        if (dVar26 <= dVar10) {
          dVar10 = dVar26;
        }
        if (dVar8 <= dVar26) {
          dVar8 = dVar26;
        }
      }
      else {
        bVar14 = true;
        dVar10 = dVar26;
        dVar9 = (double)local_228.InlineAllocation._0_8_;
        dVar8 = dVar26;
        dVar11 = (double)local_228.InlineAllocation._0_8_;
        dVar12 = dVar6;
      }
      UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_198);
      dVar3 = dVar6;
    } while (local_198.Index != (int)uStack_110);
  }
  if (local_108 != (code *)0x0) {
    plVar22 = (longlong *)&local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar22 = plStack_e0;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  if (local_188 != (code *)0x0) {
    plVar22 = (longlong *)&local_178;
    if (plStack_160 != (longlong *)0x0) {
      plVar22 = plStack_160;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  if (local_158[0] != (code *)0x0) {
    plVar22 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar22 = local_130;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  dVar9 = dVar9 - dVar11;
  dVar8 = dVar8 - dVar10;
  dVar3 = dVar9 * __real_3fe0000000000000;
  dVar6 = (dVar6 - dVar12) * __real_3fe0000000000000;
  dVar26 = dVar8 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar12 + dVar6;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar10 + dVar26;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar11 + dVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar6;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar26;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar3;
  dVar6 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  __return_storage_ptr__->SphereRadius =
       SQRT((dVar9 * dVar9 + dVar8 * dVar8) * __real_3fd0000000000000 + dVar6 * dVar6);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14ca856d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UOctreeDynamicMeshComponent::CreateSceneProxy(UOctreeDynamicMeshComponent *this)

{
  int *piVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
  *pTVar2;
  TArray<UOctreeDynamicMeshComponent::FCutCellIndexSet,TSizedDefaultAllocator<32>_> *pTVar3;
  FArrayIndexSetsDecomposition *this_00;
  longlong lVar4;
  uint uVar5;
  FDynamicMeshOctree3 *pFVar6;
  void *pvVar7;
  FTreeCutSet *pFVar8;
  undefined1 *puVar9;
  code *pcVar10;
  bool bVar11;
  FPrimitiveSceneProxy *pFVar12;
  longlong lVar13;
  FOctreeDynamicMeshSceneProxy *pFVar14;
  FDynamicMesh3 *pFVar15;
  FScriptContainerElement *pFVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  FOctreeDynamicMeshSceneProxy *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong *plVar23;
  int iVar24;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [4];
  FCellReference local_184;
  FScriptContainerElement *local_180;
  uint local_178;
  uint uStack_174;
  FScriptContainerElement *local_170;
  uint local_168;
  FOctreeDynamicMeshSceneProxy *local_160;
  TPairInitializer<int_const_&,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*_const_&>
  local_158;
  FScriptContainerElement *local_148;
  TArray<int,TSizedDefaultAllocator<32>_> *local_140;
  TArray<int,TSizedDefaultAllocator<32>_> *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement **local_128;
  code *local_120;
  FIndexSet ***local_118;
  code *local_110;
  TArray<int,TSizedDefaultAllocator<32>_> **local_108;
  code *local_100;
  TArray<int,TSizedDefaultAllocator<32>_> **local_f8;
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
  local_f0;
  undefined1 local_e8 [16];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  undefined8 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((*(longlong *)&this->field_0x530 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetCurrentSceneProxy() == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                          ,0xe9,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar12 = (FPrimitiveSceneProxy *)(*pcVar10)();
    return pFVar12;
  }
  pFVar21 = (FOctreeDynamicMeshSceneProxy *)0x0;
  lVar13 = (**(code **)(*(longlong *)this + 0xb38))(this);
  if (*(int *)(lVar13 + 0x170) < 1) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pFVar14 = ::operator_new(0x540);
  if (pFVar14 == (FOctreeDynamicMeshSceneProxy *)0x0) {
    local_160 = (FOctreeDynamicMeshSceneProxy *)0x0;
    pFVar14 = pFVar21;
  }
  else {
    local_160 = pFVar14;
    FBaseDynamicMeshSceneProxy::FBaseDynamicMeshSceneProxy
              ((FBaseDynamicMeshSceneProxy *)pFVar14,(UBaseDynamicMeshComponent *)this);
    pFVar14->_padding_ = (longlong)&___7FOctreeDynamicMeshSceneProxy__6B_;
    pcVar10 = *(code **)(*(longlong *)this + 0xaa8);
    FSceneInterface::GetShaderPlatform((FSceneInterface *)pFVar14->_padding_);
    (*pcVar10)(this,&pFVar14->MaterialRelevance);
    *(undefined8 *)&pFVar14->RenderBufferSets = 0;
    *(undefined8 *)&(pFVar14->RenderBufferSets).field_0x8 = 0;
    *(undefined8 *)&(pFVar14->RenderBufferSets).field_0x20 = 0;
    *(undefined4 *)&(pFVar14->RenderBufferSets).field_0x28 = 0;
    *(undefined4 *)&(pFVar14->RenderBufferSets).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar14->RenderBufferSets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar14->RenderBufferSets).field_0x34 = 0;
    *(undefined8 *)&(pFVar14->RenderBufferSets).field_0x40 = 0;
    *(undefined4 *)&(pFVar14->RenderBufferSets).field_0x48 = 0;
    bVar11 = IsInGameThread();
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                            ,0x34,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar12 = (FPrimitiveSceneProxy *)(*pcVar10)();
      return pFVar12;
    }
    pFVar14->ParentComponent = this;
  }
  if (*(longlong *)&this->TriangleColorFunc != 0) {
    ((FMeshRenderBufferSetConversionUtil *)&pFVar14->_padding_)->bUsePerTriangleColor = true;
    local_68 = *(longlong *)&pFVar14->_padding_;
    lVar4 = pFVar14->_padding_;
    local_58 = pFVar14->_padding_;
    lStack_50 = pFVar14->_padding_;
    lVar13 = pFVar14->_padding_;
    plStack_40 = (longlong *)pFVar14->_padding_;
    *(code **)&pFVar14->_padding_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
         ::Call;
    pFVar14->_padding_ = lStack_60;
    *(undefined4 *)&pFVar14->_padding_ = 0x528fa8b8;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 1;
    pFVar14->_padding_ = (longlong)this;
    *(undefined4 *)&pFVar14->_padding_ = (undefined4)local_48;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = local_48._4_4_;
    *(undefined4 *)&pFVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 0;
    local_48 = lVar13;
    lStack_60 = lVar4;
    if (local_68 != 0) {
      plVar23 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar23 = plStack_40;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  pFVar14 = ::operator_new(0x68);
  if (pFVar14 != (FOctreeDynamicMeshSceneProxy *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    *(undefined4 *)&pFVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar14->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 0;
    pFVar14->_padding_ = 0;
    *(undefined4 *)&pFVar14->_padding_ = 0;
    pFVar21 = pFVar14;
  }
  pTVar2 = &this->OctreeCut;
  if (pTVar2 == &local_f0) {
    if (pFVar21 == (FOctreeDynamicMeshSceneProxy *)0x0) goto LAB_14ca859e0;
    *(undefined4 *)&pFVar21->_padding_ = 0;
    if ((void *)pFVar21->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar21->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar21->_padding_);
    pFVar14 = pFVar21;
    if ((void *)pFVar21->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar21->_padding_);
    }
  }
  else {
    pFVar14 = (FOctreeDynamicMeshSceneProxy *)pTVar2->Ptr;
    pTVar2->Ptr = (FTreeCutSet *)pFVar21;
    if (pFVar14 == (FOctreeDynamicMeshSceneProxy *)0x0) goto LAB_14ca859e0;
    *(undefined4 *)&pFVar14->_padding_ = 0;
    if ((void *)pFVar14->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar14->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar14->_padding_);
    if ((void *)pFVar14->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar14->_padding_);
    }
  }
  ::operator_delete(pFVar14,0x68);
LAB_14ca859e0:
  pTVar3 = &this->CutCellSetMap;
  (this->CutCellSetMap).ArrayNum = 0;
  if ((this->CutCellSetMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar3->AllocatorInstance,0,&(this->CutCellSetMap).ArrayMax);
  }
  pFVar6 = (this->Octree).Ptr;
  pFVar15 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))(this);
  InitializeOctreeCutSet(pFVar15,pFVar6,pTVar2);
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  this_00 = &this->TriangleDecomposition;
  local_c8.AllocatorInstance.InlineData[0] = '\0';
  local_c8.AllocatorInstance.InlineData[1] = '\0';
  local_c8.AllocatorInstance.InlineData[2] = '\0';
  local_c8.AllocatorInstance.InlineData[3] = '\0';
  local_c8.AllocatorInstance.InlineData[4] = '\0';
  local_c8.AllocatorInstance.InlineData[5] = '\0';
  local_c8.AllocatorInstance.InlineData[6] = '\0';
  local_c8.AllocatorInstance.InlineData[7] = '\0';
  local_c8.AllocatorInstance.InlineData[8] = '\0';
  local_c8.AllocatorInstance.InlineData[9] = '\0';
  local_c8.AllocatorInstance.InlineData[10] = '\0';
  local_c8.AllocatorInstance.InlineData[0xb] = '\0';
  local_c8.AllocatorInstance.InlineData[0xc] = '\0';
  local_c8.AllocatorInstance.InlineData[0xd] = '\0';
  local_c8.AllocatorInstance.InlineData[0xe] = '\0';
  local_c8.AllocatorInstance.InlineData[0xf] = '\0';
  local_a0 = 0;
  local_90 = 0;
  local_88._0_4_ = 1;
  local_88._4_4_ = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  UE::Geometry::FArrayIndexSetsDecomposition::operator=
            (this_00,(FArrayIndexSetsDecomposition *)local_e8);
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  local_90 = local_90 & 0xffffffff00000000;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  uVar18 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  pFVar22 = (FScriptContainerElement *)local_e8._0_8_;
  for (iVar24 = local_e8._8_4_; iVar24 != 0; iVar24 = iVar24 + -1) {
    pvVar7 = *(void **)pFVar22;
    if (pvVar7 != (void *)0x0) {
      if (*(void **)((longlong)pvVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 8));
      }
      ::operator_delete(pvVar7,0x18);
    }
    pFVar22 = pFVar22 + 8;
  }
  bVar11 = local_e8._12_4_ != 0;
  local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  if (bVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  iVar24 = UE::Geometry::FArrayIndexSetsDecomposition::CreateNewIndexSet(this_00);
  pFVar8 = (this->OctreeCut).Ptr;
  this->SpillDecompSetID = iVar24;
  local_168 = (pFVar8->CutCells).ArrayNum;
  uVar18 = (ulonglong)(int)local_168;
  pFVar22 = (pFVar8->CutCells).AllocatorInstance.Data;
  local_148 = pFVar22 + uVar18 * 4;
  do {
    pFVar16 = local_148;
    pFVar19 = (FScriptContainerElement *)0x0;
    if ((pFVar8->CutCells).ArrayNum != (int)uVar18) {
      local_188[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshOctree3::FCellReference,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_188);
    }
    if (pFVar22 == pFVar16) {
      pTVar17 = UE::Geometry::FArrayIndexSetsDecomposition::GetIndexSetArray
                          (this_00,this->SpillDecompSetID);
      local_108 = &local_140;
      local_110 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_3>,void,int>
                  ::Call;
      local_140 = pTVar17;
      UE::Geometry::FDynamicMeshOctree3::CollectRootTriangles
                ((this->Octree).Ptr,(this->OctreeCut).Ptr,
                 (TFunctionRef<void___cdecl(int)> *)&local_110);
      local_f8 = &local_138;
      local_100 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_4>,void,int>
                  ::Call;
      local_138 = pTVar17;
      UE::Geometry::FDynamicMeshOctree3::CollectSpillTriangles
                ((this->Octree).Ptr,(TFunctionRef<void___cdecl(int)> *)&local_100);
      FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition(local_160,this_00);
      return (FPrimitiveSceneProxy *)local_160;
    }
    local_184.CellID = *(uint *)pFVar22;
    pFVar16 = ::operator_new(0x18);
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)pFVar16 = 0;
      *(undefined8 *)(pFVar16 + 8) = 0;
      *(undefined8 *)(pFVar16 + 0x10) = 0;
      pFVar19 = pFVar16;
    }
    uVar5 = (this->TriangleDecomposition).IDCounter;
    (this->TriangleDecomposition).IDCounter = uVar5 + 1;
    *(uint *)pFVar19 = uVar5;
    pFVar16 = (this_00->Sets).Array.AllocatorInstance.Data;
    local_180 = pFVar19;
    local_170 = pFVar19;
    if (((pFVar16 <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 <
         pFVar16 + (longlong)(this->TriangleDecomposition).Sets.Array.ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar12 = (FPrimitiveSceneProxy *)(*pcVar10)();
      return pFVar12;
    }
    iVar24 = (this->TriangleDecomposition).Sets.Array.ArrayNum;
    piVar1 = &(this->TriangleDecomposition).Sets.Array.ArrayMax;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)this_00,piVar1);
    }
    (this->TriangleDecomposition).Sets.Array.ArrayNum = iVar24 + 1;
    *(FScriptContainerElement **)
     ((this_00->Sets).Array.AllocatorInstance.Data + (longlong)iVar24 * 8) = local_170;
    local_130 = local_180;
    local_128 = &local_180;
    TSet<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>,FDefaultSetAllocator>
                *)&(this->TriangleDecomposition).SetIdentifierMap,&local_158,(bool *)&local_130);
    pFVar19 = local_180;
    pFVar16 = (this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data;
    if (((pFVar16 <= local_180) &&
        (local_180 < pFVar16 + (longlong)(this->TriangleDecomposition).AllSetIDs.ArrayMax * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar12 = (FPrimitiveSceneProxy *)(*pcVar10)();
      return pFVar12;
    }
    iVar24 = (this->TriangleDecomposition).AllSetIDs.ArrayNum;
    piVar1 = &(this->TriangleDecomposition).AllSetIDs.ArrayMax;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->TriangleDecomposition).AllSetIDs.AllocatorInstance,piVar1);
    }
    (this->TriangleDecomposition).AllSetIDs.ArrayNum = iVar24 + 1;
    *(uint *)((this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data + (longlong)iVar24 * 4)
         = *(uint *)pFVar19;
    uVar5 = *(uint *)local_180;
    if (*(int *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x8 !=
        *(int *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x34) {
      puVar9 = *(undefined1 **)&(this->TriangleDecomposition).SetIdentifierMap.field_0x40;
      puVar20 = &(this->TriangleDecomposition).SetIdentifierMap.field_0x38;
      if (puVar9 != (undefined1 *)0x0) {
        puVar20 = puVar9;
      }
      iVar24 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x48 - 1U &
                       uVar5) * 4);
      if (iVar24 != -1) {
        lVar13 = *(longlong *)&(this->TriangleDecomposition).SetIdentifierMap;
        do {
          lVar4 = lVar13 + (longlong)iVar24 * 0x18;
          if (*(uint *)(lVar13 + (longlong)iVar24 * 0x18) == uVar5) {
            plVar23 = (longlong *)(lVar4 + 8);
            if (lVar4 == 0) {
              plVar23 = (longlong *)0x0;
            }
            if (plVar23 == (longlong *)0x0) goto LAB_14ca85dff;
            goto LAB_14ca85e25;
          }
          iVar24 = *(int *)(lVar4 + 0x10);
        } while (iVar24 != -1);
      }
    }
    plVar23 = (longlong *)0x0;
LAB_14ca85dff:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Found != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexSetDecompositions.h"
                        ,0x43,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pFVar12 = (FPrimitiveSceneProxy *)(*pcVar10)();
      return pFVar12;
    }
LAB_14ca85e25:
    local_158.Value = (FIndexSet **)(*plVar23 + 8);
    local_118 = &local_158.Value;
    local_120 = UE::Core::Private::Function::
                TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l19::<lambda_2>,void,int>
                ::Call;
    UE::Geometry::FDynamicMeshOctree3::CollectTriangles
              ((this->Octree).Ptr,&local_184,(TFunctionRef<void___cdecl(int)> *)&local_120);
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    local_178 = local_184.CellID;
    piVar1 = &(this->CutCellSetMap).ArrayMax;
    uStack_174 = uVar5;
    if (((pFVar16 <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 < pFVar16 + (longlong)*piVar1 * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar12 = (FPrimitiveSceneProxy *)(*pcVar10)();
      return pFVar12;
    }
    iVar24 = (this->CutCellSetMap).ArrayNum;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->CutCellSetMap).ArrayNum = iVar24 + 1;
    pFVar22 = pFVar22 + 4;
    *(ulonglong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar24 * 8) =
         CONCAT44(uStack_174,local_178);
    uVar18 = (ulonglong)local_168;
  } while( true );
}

// GetBaseSceneProxy @ 14ca8e270

FBaseDynamicMeshSceneProxy * __thiscall
UOctreeDynamicMeshComponent::GetBaseSceneProxy(UOctreeDynamicMeshComponent *this)

{
  return *(FBaseDynamicMeshSceneProxy **)&this->field_0x530;
}

// GetDynamicMesh @ 14ca8e840

UDynamicMesh * __thiscall
UOctreeDynamicMeshComponent::GetDynamicMesh(UOctreeDynamicMeshComponent *this)

{
  return (this->MeshObject).field0_0x0.DebugPtr;
}

// GetMesh @ 14ca90820

FDynamicMesh3 * __thiscall UOctreeDynamicMeshComponent::GetMesh(UOctreeDynamicMeshComponent *this)

{
  return (((this->MeshObject).field0_0x0.DebugPtr)->Mesh).Ptr;
}

// GetMesh @ 14ca90840

FDynamicMesh3 * __thiscall UOctreeDynamicMeshComponent::GetMesh(UOctreeDynamicMeshComponent *this)

{
  return (((this->MeshObject).field0_0x0.DebugPtr)->Mesh).Ptr;
}

// GetPrivateStaticClass @ 14ca91df0

UClass * __cdecl UOctreeDynamicMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OctreeDynamicMeshComponent",
               &Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.InnerSingleton,
               StaticRegisterNativesUOctreeDynamicMeshComponent,0x720,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOctreeDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UOctreeDynamicMeshComponent>,local_res8,
               UBaseDynamicMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.InnerSingleton;
}

// GetTriangleColor @ 14ca93f00

FColor __thiscall
UOctreeDynamicMeshComponent::GetTriangleColor(UOctreeDynamicMeshComponent *this,int param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FColor_u_0 FVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 in_register_00000014;
  uint in_R8D;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  
  if (*(longlong *)&this->TriangleColorFunc != 0) {
    local_res20 = (**(code **)(*(longlong *)this + 0xb38))();
    UE::Core::Private::Function::CheckCallable(*(void **)&this->TriangleColorFunc);
    pcVar1 = *(code **)&this->TriangleColorFunc;
    plVar2 = *(longlong **)&(this->TriangleColorFunc).field_0x28;
    plVar5 = (longlong *)&(this->TriangleColorFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)((FColor_u_0 *)CONCAT44(in_register_00000014,param_1),uVar4,&local_res20,local_res8);
    return (FColor)(FColor_u_0)param_1;
  }
  FVar3 = FColor::White.field0_0x0;
  if ((in_R8D & 1) == 0) {
    FVar3 = FColor::Red.field0_0x0;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// NotifyMaterialSetUpdated @ 14ca99600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOctreeDynamicMeshComponent::NotifyMaterialSetUpdated(UOctreeDynamicMeshComponent *this)

{
  FBaseDynamicMeshSceneProxy *this_00;
  code *pcVar1;
  EShaderPlatform EVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  this_00 = *(FBaseDynamicMeshSceneProxy **)&this->field_0x530;
  if (this_00 != (FBaseDynamicMeshSceneProxy *)0x0) {
    FBaseDynamicMeshSceneProxy::UpdatedReferencedMaterials(this_00);
    plVar3 = (longlong *)this_00[1]._padding_;
    pcVar1 = *(code **)(*plVar3 + 0xaa8);
    EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this_00->_padding_);
    plVar3 = (longlong *)(*pcVar1)(plVar3,local_res8,EVar2);
    this_00[1]._padding_ = *plVar3;
  }
  return;
}

// NotifyMeshUpdated @ 14ca996d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOctreeDynamicMeshComponent::NotifyMeshUpdated(UOctreeDynamicMeshComponent *this)

{
  int *piVar1;
  FArrayIndexSetsDecomposition *pFVar2;
  TArray<UOctreeDynamicMeshComponent::FCutCellIndexSet,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FDynamicMeshOctree3 *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  FIndexSet **ppFVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateExisting> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateCutSet> FVar20;
  TStatId TVar21;
  FScriptContainerElement *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateSpill> FVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateFromDecomp> FVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  FNameEntryId FVar29;
  FName FVar30;
  FName FVar31;
  FNameEntryId FVar32;
  FScriptContainerElement *pFVar33;
  ForAnyElementType FVar34;
  bool bVar35;
  undefined1 auStackY_308 [32];
  <lambda_1> local_2a8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_2a0;
  uint local_290;
  int local_28c;
  uint local_288;
  uint uStack_284;
  TPairInitializer<int_const_&,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*_const_&>
  local_280;
  uint local_270;
  uint uStack_26c;
  FName local_268;
  FScriptContainerElement *local_260;
  TArray<UE::Geometry::FDynamicMeshOctree3::FCellReference,TSizedDefaultAllocator<32>_> local_258;
  FColor_u_0 local_248;
  FColor_u_0 local_244;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  FName local_238;
  byte local_230;
  FName local_228;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f0;
  FName local_1e0;
  LARGE_INTEGER local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a8;
  LARGE_INTEGER local_1a0;
  FStatMessage local_198;
  FStatMessage local_188;
  FStatMessage local_178;
  FStatMessage local_168;
  FSourceLocation local_158;
  TArrayView<std::nullptr_t,int> local_138;
  code *local_128;
  UOctreeDynamicMeshComponent **local_120;
  FScriptContainerElement *local_118;
  FIndexSet ***local_110;
  code *local_108;
  TArray<int,TSizedDefaultAllocator<32>_> **local_100;
  code *local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_f0;
  code *local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_e0;
  UOctreeDynamicMeshComponent *local_d8;
  double *local_d0;
  _RTL_CRITICAL_SECTION *local_c8;
  int *local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  _RTL_CRITICAL_SECTION local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (*(longlong *)&this->field_0x530 == 0) {
    return;
  }
  pFVar6 = (this->Octree).Ptr;
  pFVar33 = (FScriptContainerElement *)0x0;
  local_88 = (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.X;
  dStack_80 = (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.Y;
  local_78 = (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.Z;
  dStack_70 = (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.X;
  local_68 = (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.Y;
  dStack_60 = (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.Z;
  (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (pFVar6->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (pFVar6->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  FVar32.Value = 0;
  local_28c = 0;
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  FVar17 = StatPtr_STAT_SculptToolOctree_UpdateExisting;
  if (StatPtr_STAT_SculptToolOctree_UpdateExisting ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateExisting>)0x0) {
    pFVar16 = ::FName::FName(&local_90,"STAT_SculptToolOctree_UpdateExisting");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateExisting>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SculptToolOctree_UpdateExisting,
                        *pFVar16,L"SculptToolOctree_UpdateExisting","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar30 = *(FName *)FVar17;
  bVar10 = false;
  bVar12 = false;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  FVar29 = FVar30.ComparisonIndex.Value;
  uVar26 = FVar30.Number;
  if ((FVar29.Value == 0) && (uVar26 == 0)) {
LAB_14ca998b0:
    bVar35 = false;
    FVar30 = local_200;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_248.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_248._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar29.Value;
        local_218.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                   ,0x7d);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca998b0;
    local_288 = FVar29.Value;
    uStack_284 = uVar26;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar10 = false;
    bVar35 = true;
  }
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  local_d0 = &local_88;
  local_c8 = &local_58;
  local_c0 = &local_28c;
  local_138.DataPtr = (void **)0x0;
  local_b8 = &local_2a0;
  local_138.ArrayNum = 0;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>,void,int>
              ::Call;
  local_120 = &local_d8;
  local_d8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->CutCellSetMap).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_128,local_2a8[0],None,&local_138);
  DeleteCriticalSection(&local_58);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar35) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_198.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
      local_198.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_198.StatData.Pad[4] = '\0';
      local_198.StatData.Pad[5] = '\0';
      local_198.StatData.Pad[6] = '\0';
      local_198.StatData.Pad[7] = '\0';
      local_198.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_198.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_198.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_198.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_198);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  FVar20 = StatPtr_STAT_SculptToolOctree_UpdateCutSet;
  if (StatPtr_STAT_SculptToolOctree_UpdateCutSet ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateCutSet>)0x0) {
    pFVar16 = ::FName::FName(&local_a8,"STAT_SculptToolOctree_UpdateCutSet");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateCutSet>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SculptToolOctree_UpdateCutSet,
                        *pFVar16,L"SculptToolOctree_UpdateCutSet","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar30 = *(FName *)FVar20;
  bVar10 = false;
  bVar12 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  FVar29 = FVar30.ComparisonIndex.Value;
  uVar26 = FVar30.Number;
  if ((FVar29.Value == 0) && (uVar26 == 0)) {
    UE::Geometry::FDynamicMeshOctree3::UpdateLevelCutSet
              ((this->Octree).Ptr,(this->OctreeCut).Ptr,&local_258);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_244.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_244._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210.ComparisonIndex.Value = FVar29.Value;
        local_210.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                   ,0x99);
        bVar10 = true;
        bVar12 = true;
      }
    }
    bVar35 = FThreadStats::bPrimaryEnable != false;
    FVar31 = local_1f0;
    if (bVar35) {
      local_288 = FVar29.Value;
      uStack_284 = uVar26;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar10 = false;
      FVar31 = FVar30;
    }
    UE::Geometry::FDynamicMeshOctree3::UpdateLevelCutSet
              ((this->Octree).Ptr,(this->OctreeCut).Ptr,&local_258);
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar35) && (FVar31 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_188.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
        local_188.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1b8);
        local_188.StatData.Pad[4] = '\0';
        local_188.StatData.Pad[5] = '\0';
        local_188.StatData.Pad[6] = '\0';
        local_188.StatData.Pad[7] = '\0';
        local_188.StatData.Pad[0] = local_1b8.s.LowPart._0_1_;
        local_188.StatData.Pad[1] = local_1b8.s.LowPart._1_1_;
        local_188.StatData.Pad[2] = local_1b8.s.LowPart._2_1_;
        local_188.StatData.Pad[3] = local_1b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar18,&local_188);
        piVar1 = &pFVar18->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_SculptToolOctree_CreateNew,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_SculptToolOctree_CreateNew,1> *)
                      &StatPtr_STAT_SculptToolOctree_CreateNew);
  local_158.Impl._Line = 0x9f;
  local_158.Impl._Function = "void __cdecl UOctreeDynamicMeshComponent::NotifyMeshUpdated(void)";
  local_158.Impl._Column = 4;
  local_158.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_238,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_158);
  iVar15 = local_258.ArrayNum;
  uVar27 = (ulonglong)local_258.ArrayNum;
  pFVar4 = local_258.AllocatorInstance.Data + uVar27 * 4;
  FVar34.Data = local_258.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar27 != iVar15) {
      local_2a8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshOctree3::FCellReference,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_2a8);
    }
    if (FVar34.Data == pFVar4) break;
    pFVar2 = &this->TriangleDecomposition;
    pFVar22 = ::operator_new(0x18);
    local_280.Value = (FIndexSet **)pFVar33;
    if (pFVar22 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)pFVar22 = 0;
      *(undefined8 *)(pFVar22 + 8) = 0;
      *(undefined8 *)(pFVar22 + 0x10) = 0;
      local_280.Value = (FIndexSet **)pFVar22;
    }
    uVar26 = (this->TriangleDecomposition).IDCounter;
    (this->TriangleDecomposition).IDCounter = uVar26 + 1;
    *(uint *)local_280.Value = uVar26;
    pFVar22 = (pFVar2->Sets).Array.AllocatorInstance.Data;
    local_260 = (FScriptContainerElement *)local_280.Value;
    if (((pFVar22 <= (FScriptContainerElement *)&local_260) &&
        ((FScriptContainerElement *)&local_260 <
         pFVar22 + (longlong)(this->TriangleDecomposition).Sets.Array.ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->TriangleDecomposition).Sets.Array.ArrayNum;
    piVar1 = &(this->TriangleDecomposition).Sets.Array.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar2,piVar1);
    }
    (this->TriangleDecomposition).Sets.Array.ArrayNum = iVar14 + 1;
    *(FScriptContainerElement **)
     ((pFVar2->Sets).Array.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_260;
    local_118 = (FScriptContainerElement *)local_280.Value;
    local_110 = &local_280.Value;
    TSet<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>,FDefaultSetAllocator>
                *)&(this->TriangleDecomposition).SetIdentifierMap,&local_280,(bool *)&local_118);
    ppFVar11 = local_280.Value;
    pFVar22 = (this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data;
    if (((pFVar22 <= local_280.Value) &&
        (local_280.Value < pFVar22 + (longlong)(this->TriangleDecomposition).AllSetIDs.ArrayMax * 4)
        ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->TriangleDecomposition).AllSetIDs.ArrayNum;
    piVar1 = &(this->TriangleDecomposition).AllSetIDs.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->TriangleDecomposition).AllSetIDs.AllocatorInstance,piVar1);
    }
    (this->TriangleDecomposition).AllSetIDs.ArrayNum = iVar14 + 1;
    *(uint *)((this->TriangleDecomposition).AllSetIDs.AllocatorInstance.Data + (longlong)iVar14 * 4)
         = *(uint *)ppFVar11;
    local_290 = *(uint *)local_280.Value;
    pFVar22 = pFVar33;
    if (*(int *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x8 !=
        *(int *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x34) {
      puVar7 = *(undefined1 **)&(this->TriangleDecomposition).SetIdentifierMap.field_0x40;
      puVar28 = &(this->TriangleDecomposition).SetIdentifierMap.field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar28 = puVar7;
      }
      iVar14 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->TriangleDecomposition).SetIdentifierMap.field_0x48 - 1U &
                       local_290) * 4);
      if (iVar14 != -1) {
        lVar8 = *(longlong *)&(this->TriangleDecomposition).SetIdentifierMap;
        do {
          lVar5 = lVar8 + (longlong)iVar14 * 0x18;
          if (*(uint *)(lVar8 + (longlong)iVar14 * 0x18) == local_290) {
            pFVar22 = (FScriptContainerElement *)(lVar5 + 8);
            if (lVar5 == 0) {
              pFVar22 = pFVar33;
            }
            if (pFVar22 != (FScriptContainerElement *)0x0) goto LAB_14ca99f05;
            break;
          }
          iVar14 = *(int *)(lVar5 + 0x10);
        } while (iVar14 != -1);
      }
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Found != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexSetDecompositions.h"
                        ,0x43,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
LAB_14ca99f05:
    lVar8 = *(longlong *)pFVar22;
    local_100 = &local_1c8;
    local_1c8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar8 + 8);
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l12::<lambda_2>,void,int>
                ::Call;
    UE::Geometry::FDynamicMeshOctree3::CollectTriangles
              ((this->Octree).Ptr,(FCellReference *)FVar34.Data,
               (TFunctionRef<void___cdecl(int)> *)&local_108);
    pTVar3 = &this->CutCellSetMap;
    local_28c = local_28c + *(int *)(lVar8 + 0x10);
    local_270 = *(uint *)FVar34.Data;
    pFVar22 = (pTVar3->AllocatorInstance).Data;
    uStack_26c = local_290;
    if (((pFVar22 <= (FScriptContainerElement *)&local_270) &&
        ((FScriptContainerElement *)&local_270 <
         pFVar22 + (longlong)(this->CutCellSetMap).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->CutCellSetMap).ArrayNum;
    piVar1 = &(this->CutCellSetMap).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->CutCellSetMap).ArrayNum = iVar14 + 1;
    *(ulonglong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 8) =
         CONCAT44(uStack_26c,local_270);
    if (((local_2a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_290) &&
        ((FScriptContainerElement *)&local_290 <
         local_2a0.AllocatorInstance.Data + (longlong)local_2a0.ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = local_2a0.ArrayNum;
    if (local_2a0.ArrayNum == local_2a0.ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax);
    }
    FVar34.Data = FVar34.Data + 4;
    local_2a0.ArrayNum = iVar14 + 1;
    *(uint *)(local_2a0.AllocatorInstance.Data + (longlong)iVar14 * 4) = local_290;
    uVar27 = local_258._8_8_ & 0xffffffff;
  }
  if ((local_230 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_230 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_230 & 4) != 0) {
    FThreadStats::AddMessage(local_238,CycleScopeEnd);
  }
  local_230 = 0;
  FVar23 = StatPtr_STAT_SculptToolOctree_UpdateSpill;
  if (StatPtr_STAT_SculptToolOctree_UpdateSpill ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateSpill>)0x0) {
    pFVar16 = ::FName::FName(&local_a0,"STAT_SculptToolOctree_UpdateSpill");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateSpill>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SculptToolOctree_UpdateSpill,
                        *pFVar16,L"SculptToolOctree_UpdateSpill","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar30 = *(FName *)FVar23;
  bVar10 = false;
  bVar12 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  FVar29 = FVar30.ComparisonIndex.Value;
  uVar26 = FVar30.Number;
  if ((FVar29.Value != 0) || (uVar26 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar29.Value;
        local_208.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                   ,0xb1);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_288 = FVar29.Value;
      uStack_284 = uVar26;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar10 = false;
      bVar35 = true;
      goto LAB_14ca9a208;
    }
  }
  bVar35 = false;
  FVar30 = local_1e0;
LAB_14ca9a208:
  piVar1 = &this->SpillDecompSetID;
  pTVar24 = UE::Geometry::FArrayIndexSetsDecomposition::GetIndexSetArray
                      (&this->TriangleDecomposition,*piVar1);
  pTVar24->ArrayNum = 0;
  if (pTVar24->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar24->AllocatorInstance,0,&pTVar24->ArrayMax);
  }
  local_f0 = &local_1b0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_3>,void,int>
             ::Call;
  local_1b0 = pTVar24;
  UE::Geometry::FDynamicMeshOctree3::CollectRootTriangles
            ((this->Octree).Ptr,(this->OctreeCut).Ptr,(TFunctionRef<void___cdecl(int)> *)&local_f8);
  local_e0 = &local_1a8;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_4>,void,int>
             ::Call;
  local_1a8 = pTVar24;
  UE::Geometry::FDynamicMeshOctree3::CollectSpillTriangles
            ((this->Octree).Ptr,(TFunctionRef<void___cdecl(int)> *)&local_e8);
  local_28c = local_28c + pTVar24->ArrayNum;
  if (((local_2a0.AllocatorInstance.Data <= piVar1) &&
      (piVar1 < local_2a0.AllocatorInstance.Data + (longlong)local_2a0.ArrayMax * 4)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar15 = local_2a0.ArrayNum;
  if (local_2a0.ArrayNum == local_2a0.ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax);
  }
  local_2a0.ArrayNum = iVar15 + 1;
  *(int *)(local_2a0.AllocatorInstance.Data + (longlong)iVar15 * 4) = *piVar1;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar35) && (FVar30 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_178.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
      local_178.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1a0);
      local_178.StatData.Pad[4] = '\0';
      local_178.StatData.Pad[5] = '\0';
      local_178.StatData.Pad[6] = '\0';
      local_178.StatData.Pad[7] = '\0';
      local_178.StatData.Pad[0] = local_1a0.s.LowPart._0_1_;
      local_178.StatData.Pad[1] = local_1a0.s.LowPart._1_1_;
      local_178.StatData.Pad[2] = local_1a0.s.LowPart._2_1_;
      local_178.StatData.Pad[3] = local_1a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_178);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  FVar25 = StatPtr_STAT_SculptToolOctree_UpdateFromDecomp;
  if (StatPtr_STAT_SculptToolOctree_UpdateFromDecomp ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateFromDecomp>)0x0) {
    pFVar16 = ::FName::FName(&local_98,"STAT_SculptToolOctree_UpdateFromDecomp");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateFromDecomp>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SculptToolOctree_UpdateFromDecomp
                        ,*pFVar16,L"SculptToolOctree_UpdateFromDecomp","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar30 = *(FName *)FVar25;
  bVar12 = false;
  bVar10 = false;
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  FVar29 = FVar30.ComparisonIndex.Value;
  uVar26 = FVar30.Number;
  if ((FVar29.Value == 0) && (uVar26 == 0)) {
    FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition
              (*(FOctreeDynamicMeshSceneProxy **)&this->field_0x530,&this->TriangleDecomposition,
               &local_2a0);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23c._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar12 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar29.Value;
        local_268.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                   ,0xc4);
        bVar12 = true;
        bVar10 = true;
      }
    }
    bVar35 = FThreadStats::bPrimaryEnable != false;
    FVar31 = local_228;
    if (bVar35) {
      local_268.ComparisonIndex.Value = FVar29.Value;
      local_268.Number = uVar26;
      local_228 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      FVar31 = FVar30;
      FVar32.Value = local_228.ComparisonIndex.Value;
    }
    FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition
              (*(FOctreeDynamicMeshSceneProxy **)&this->field_0x530,&this->TriangleDecomposition,
               &local_2a0);
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar35) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_168.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
        local_168.NameAndInfo.Index.Value = FVar32.Value;
        QueryPerformanceCounter(&local_1d0);
        local_168.StatData.Pad[4] = '\0';
        local_168.StatData.Pad[5] = '\0';
        local_168.StatData.Pad[6] = '\0';
        local_168.StatData.Pad[7] = '\0';
        local_168.StatData.Pad[0] = local_1d0.s.LowPart._0_1_;
        local_168.StatData.Pad[1] = local_1d0.s.LowPart._1_1_;
        local_168.StatData.Pad[2] = local_1d0.s.LowPart._2_1_;
        local_168.StatData.Pad[3] = local_1d0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar18,&local_168);
        piVar1 = &pFVar18->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  return;
}

// OnMeshObjectChanged @ 14ca9ac20

void __thiscall
UOctreeDynamicMeshComponent::OnMeshObjectChanged
          (UOctreeDynamicMeshComponent *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2->Type == MeshChange) {
    if (param_2->MeshChange == (FMeshChange *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2511191387114832300>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                         ,0x1ac,"ChangeInfo.MeshChange != nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      UE::Geometry::FDynamicMeshChange::GetSavedTriangleList
                ((param_2->MeshChange->DynamicMeshChange).Ptr,&local_18,param_2->bIsRevertChange);
      UE::Geometry::FDynamicMeshOctree3::InsertTriangles((this->Octree).Ptr,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  (**(code **)(*(longlong *)this + 0xb50))(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(&this->OnMeshChanged)
  ;
  return;
}

// OnPreMeshObjectChanged @ 14ca9ad90

void __thiscall
UOctreeDynamicMeshComponent::OnPreMeshObjectChanged
          (UOctreeDynamicMeshComponent *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FDynamicMeshOctree3 *pFVar4;
  FDynamicMesh3 *this_00;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 local_res18 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if (param_2->Type == MeshChange) {
    if (param_2->MeshChange == (FMeshChange *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2511191387114832286>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                         ,0x19e,"ChangeInfo.MeshChange != nullptr");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      UE::Geometry::FDynamicMeshChange::GetSavedTriangleList
                ((param_2->MeshChange->DynamicMeshChange).Ptr,&local_58,
                 param_2->bIsRevertChange == false);
    }
    iVar6 = local_58.ArrayNum;
    if (0 < local_58.ArrayNum) {
      pFVar4 = (this->Octree).Ptr;
      (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
      (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
      (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
      (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
      (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
      (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
      uVar8 = (ulonglong)local_58.ArrayNum;
      pFVar4 = (this->Octree).Ptr;
      pFVar1 = local_58.AllocatorInstance.Data + uVar8 * 4;
      FVar9.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar8 != iVar6) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar9.Data == pFVar1) break;
        uVar3 = *(uint *)FVar9.Data;
        bVar7 = UE::Geometry::FSparseDynamicOctree3::RemoveObject
                          ((FSparseDynamicOctree3 *)pFVar4,uVar3);
        if ((((bVar7) && (this_00 = pFVar4->Mesh, -1 < (int)uVar3)) &&
            ((int)uVar3 <
             (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          UE::Geometry::FDynamicMesh3::GetTriBounds
                    (this_00,(TAxisAlignedBox3<double> *)&local_48._s_0,uVar3);
          uVar11 = (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Y;
          if (local_48._s_0.Y <= (double)uVar11) {
            uVar11 = local_48._s_0.Y;
          }
          dVar2 = (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.X;
          uVar10 = local_48._s_0.X;
          if (dVar2 <= local_48._s_0.X) {
            uVar10 = dVar2;
          }
          (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)uVar11;
          dVar2 = (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.X;
          dVar13 = local_30;
          if (local_30 <= dVar2) {
            dVar13 = dVar2;
          }
          (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.X = (double)uVar10;
          uVar11 = (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Z;
          if (local_48._s_0.Z <= (double)uVar11) {
            uVar11 = local_48._s_0.Z;
          }
          (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.X = dVar13;
          dVar2 = (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Z;
          dVar13 = local_20;
          if (local_20 <= dVar2) {
            dVar13 = dVar2;
          }
          (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)uVar11;
          dVar2 = (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Y;
          dVar12 = local_28;
          if (local_28 <= dVar2) {
            dVar12 = dVar2;
          }
          (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Z = dVar13;
          (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar12;
        }
        uVar8 = local_58._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 4;
      }
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// ProcessMesh @ 14ca9f190

void __thiscall
UOctreeDynamicMeshComponent::ProcessMesh
          (UOctreeDynamicMeshComponent *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UDynamicMesh::ProcessMesh((this->MeshObject).field0_0x0.DebugPtr,&local_18);
  return;
}

// SetDynamicMesh @ 14caa32c0

void __thiscall
UOctreeDynamicMeshComponent::SetDynamicMesh(UOctreeDynamicMeshComponent *this,UDynamicMesh *param_1)

{
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
  *pTVar2;
  UDynamicMesh *pUVar3;
  code *pcVar4;
  bool bVar5;
  FDelegateHandle FVar6;
  FDynamicMeshOctree3 *pFVar7;
  FDynamicMesh3 *pFVar8;
  FDynamicMeshOctree3 *pFVar9;
  FDynamicMeshOctree3 *pFVar10;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 uStack_30;
  code *local_28;
  longlong lStack_20;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2511191387114832314>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                       ,0x1ba,"NewMesh");
    if (!bVar5) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = (this->MeshObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UDynamicMesh *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2511191387114832319>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                       ,0x1bf,"MeshObject");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Remove((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
              *)&pUVar3->MeshChangedEvent,(FDelegateHandle)(this->MeshObjectChangedHandle).ID);
    TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Remove((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
              *)&((this->MeshObject).field0_0x0.DebugPtr)->PreMeshChangedEvent,
             (FDelegateHandle)(this->PreMeshChangeHandle).ID);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->MeshObject).field0_0x0.DebugPtr = param_1;
  pFVar10 = (FDynamicMeshOctree3 *)0x0;
  uStack_30._0_4_ = 0;
  local_38 = OnMeshObjectChanged;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UOctreeDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&param_1->MeshChangedEvent,(UOctreeDynamicMeshComponent *)&stack0x00000010,
                     (pmf_8d422e59 *)this);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
                    /* WARNING: Load size is inaccurate */
  (this->MeshObjectChangedHandle).ID = *FVar6.ID;
  local_38 = OnPreMeshObjectChanged;
  local_28 = OnPreMeshObjectChanged;
  lStack_20 = uStack_30;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UOctreeDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&((this->MeshObject).field0_0x0.DebugPtr)->PreMeshChangedEvent,
                     (UOctreeDynamicMeshComponent *)&stack0x00000018,(pmf_8d422e59 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->PreMeshChangeHandle).ID = *FVar6.ID;
  pFVar7 = ::operator_new(0x208);
  pFVar9 = pFVar10;
  if (pFVar7 != (FDynamicMeshOctree3 *)0x0) {
    memset(pFVar7,0,0x208);
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar7);
    (pFVar7->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (pFVar7->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (pFVar7->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (pFVar7->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (pFVar7->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (pFVar7->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    pFVar9 = pFVar7;
  }
  pTVar1 = &this->Octree;
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
                 *)&local_48) {
    if (pFVar9 != (FDynamicMeshOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar9);
      goto LAB_14caa34c5;
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar7 != (FDynamicMeshOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar7);
      pFVar9 = pFVar7;
LAB_14caa34c5:
      ::operator_delete(pFVar9,0x208);
    }
  }
  pFVar9 = pTVar1->Ptr;
  pFVar8 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))(this);
  UE::Geometry::FDynamicMeshOctree3::Initialize(pFVar9,pFVar8);
  pFVar9 = ::operator_new(0x68);
  if (pFVar9 != (FDynamicMeshOctree3 *)0x0) {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar9->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    pFVar9->_padding_ = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    pFVar10 = pFVar9;
  }
  pTVar2 = &this->OctreeCut;
  if (pTVar2 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
                 *)&local_40) {
    if (pFVar10 == (FDynamicMeshOctree3 *)0x0) goto LAB_14caa35d0;
    *(undefined4 *)&pFVar10->_padding_ = 0;
    if ((void *)pFVar10->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar10->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar10->_padding_);
    pFVar9 = pFVar10;
    if ((void *)pFVar10->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar10->_padding_);
    }
  }
  else {
    pFVar9 = (FDynamicMeshOctree3 *)pTVar2->Ptr;
    pTVar2->Ptr = (FTreeCutSet *)pFVar10;
    if (pFVar9 == (FDynamicMeshOctree3 *)0x0) goto LAB_14caa35d0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    if ((void *)pFVar9->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar9->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar9->_padding_);
    if ((void *)pFVar9->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar9->_padding_);
    }
  }
  ::operator_delete(pFVar9,0x68);
LAB_14caa35d0:
  (this->CutCellSetMap).ArrayNum = 0;
  if ((this->CutCellSetMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CutCellSetMap).AllocatorInstance,0,&(this->CutCellSetMap).ArrayMax);
  }
  (**(code **)(*(longlong *)this + 0xb50))(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(&this->OnMeshChanged)
  ;
  return;
}

// SetMesh @ 14caa3a60

void __thiscall
UOctreeDynamicMeshComponent::SetMesh(UOctreeDynamicMeshComponent *this,FDynamicMesh3 *param_1)

{
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
  *pTVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMeshOctree3 *pFVar4;
  FDynamicMeshOctree3 *pFVar5;
  FDynamicMeshOctree3 *pFVar6;
  undefined8 local_78;
  undefined8 local_70;
  FStatistics local_68;
  TVector<double>_u_0 local_38;
  double local_20;
  double local_18;
  double local_10;
  
  UDynamicMesh::SetMesh((this->MeshObject).field0_0x0.DebugPtr,param_1);
  pFVar3 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))(this);
  UE::Geometry::FDynamicMesh3::GetBounds(pFVar3,(TAxisAlignedBox3<double> *)&local_38._s_0,true);
  pFVar4 = ::operator_new(0x208);
  pFVar6 = (FDynamicMeshOctree3 *)0x0;
  pFVar5 = pFVar6;
  if (pFVar4 != (FDynamicMeshOctree3 *)0x0) {
    memset(pFVar4,0,0x208);
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar4);
    (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (pFVar4->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (pFVar4->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    pFVar5 = pFVar4;
  }
  pTVar1 = &this->Octree;
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3>_>
                 *)&local_78) {
    if (pFVar5 != (FDynamicMeshOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar5);
      goto LAB_14caa3b56;
    }
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar4 != (FDynamicMeshOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3((FSparseDynamicOctree3 *)pFVar4);
      pFVar5 = pFVar4;
LAB_14caa3b56:
      ::operator_delete(pFVar5,0x208);
    }
  }
  local_18 = local_18 - local_38._s_0.Y;
  local_10 = local_10 - local_38._s_0.Z;
  local_20 = local_20 - local_38._s_0.X;
  if (local_18 <= 0.0) {
    local_18 = 0.0;
  }
  if (local_10 <= 0.0) {
    local_10 = 0.0;
  }
  if (local_20 <= 0.0) {
    local_20 = 0.0;
  }
  if (local_18 <= local_10) {
    local_18 = local_10;
  }
  if (local_18 <= local_20) {
    local_18 = local_20;
  }
  pTVar1->Ptr->_padding_ = (longlong)(local_18 * __real_3fd0000000000000);
  pFVar5 = pTVar1->Ptr;
  pFVar3 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0xb38))(this);
  UE::Geometry::FDynamicMeshOctree3::Initialize(pFVar5,pFVar3);
  local_68.LevelBoxCounts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.LevelBoxCounts.ArrayNum = 0;
  local_68.LevelBoxCounts.ArrayMax = 0;
  local_68.LevelObjCounts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.LevelObjCounts.ArrayNum = 0;
  local_68.LevelObjCounts.ArrayMax = 0;
  UE::Geometry::FSparseDynamicOctree3::ComputeStatistics
            ((FSparseDynamicOctree3 *)pTVar1->Ptr,&local_68);
  pFVar5 = ::operator_new(0x68);
  if (pFVar5 != (FDynamicMeshOctree3 *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar5->_padding_ + 4) = 0;
    *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    *(undefined4 *)&pFVar5->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar5->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 0;
    pFVar5->_padding_ = 0;
    *(undefined4 *)&pFVar5->_padding_ = 0;
    pFVar6 = pFVar5;
  }
  pTVar2 = &this->OctreeCut;
  if (pTVar2 == (TUniquePtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,TDefaultDelete<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet>_>
                 *)&local_70) {
    if (pFVar6 == (FDynamicMeshOctree3 *)0x0) goto LAB_14caa3cd8;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    if ((void *)pFVar6->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar6->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->_padding_);
    pFVar5 = pFVar6;
    if ((void *)pFVar6->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar6->_padding_);
    }
  }
  else {
    pFVar5 = (FDynamicMeshOctree3 *)pTVar2->Ptr;
    pTVar2->Ptr = (FTreeCutSet *)pFVar6;
    if (pFVar5 == (FDynamicMeshOctree3 *)0x0) goto LAB_14caa3cd8;
    *(undefined4 *)&pFVar5->_padding_ = 0;
    if ((void *)pFVar5->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar5->_padding_);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar5->_padding_);
    if ((void *)pFVar5->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar5->_padding_);
    }
  }
  ::operator_delete(pFVar5,0x68);
LAB_14caa3cd8:
  (this->CutCellSetMap).ArrayNum = 0;
  if ((this->CutCellSetMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CutCellSetMap).AllocatorInstance,0,&(this->CutCellSetMap).ArrayMax);
  }
  (**(code **)(*(longlong *)this + 0xb50))(this);
  if (local_68.LevelObjCounts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.LevelObjCounts.AllocatorInstance.Data);
  }
  if (local_68.LevelBoxCounts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.LevelBoxCounts.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUOctreeDynamicMeshComponent @ 14caa7240

void __cdecl UOctreeDynamicMeshComponent::StaticRegisterNativesUOctreeDynamicMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetDynamicMesh @ 14caab290

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UOctreeDynamicMeshComponent::execSetDynamicMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  FDynamicMeshOctree3 *this;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  FDelegateHandle FVar7;
  FSparseDynamicOctree3 *pFVar8;
  FDynamicMesh3 *pFVar9;
  FSparseDynamicOctree3 *pFVar10;
  FSparseDynamicOctree3 *pFVar11;
  UObject *local_res10;
  undefined1 local_58 [40];
  undefined8 uStack_30;
  code *local_28;
  longlong lStack_20;
  
  pFVar11 = (FSparseDynamicOctree3 *)0x0;
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2511191387114832314>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                       ,0x1ba,"NewMesh");
    if (!bVar6) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(longlong *)&param_1[0x28].field_0x20 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2511191387114832319>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshComponent.cpp"
                       ,0x1bf,"MeshObject");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Remove((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
              *)(*(longlong *)&param_1[0x28].field_0x20 + 0x60),
             (FDelegateHandle)*(ulong64 *)(param_1 + 0x29));
    TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Remove((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
              *)(*(longlong *)&param_1[0x28].field_0x20 + 0x40),
             (FDelegateHandle)*(ulong64 *)&param_1[0x29].field_0x8);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  uStack_30._0_4_ = 0;
  local_58._32_8_ = OnMeshObjectChanged;
  *(UObject **)&param_1[0x28].field_0x20 = pUVar5;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UOctreeDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar5[2].field_0x10,(UOctreeDynamicMeshComponent *)&stack0x00000020,
                     (pmf_8d422e59 *)param_1);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  *(undefined8 *)(param_1 + 0x29) = *(undefined8 *)FVar7.ID;
  local_58._32_8_ = OnPreMeshObjectChanged;
  local_28 = OnPreMeshObjectChanged;
  lStack_20 = uStack_30;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UOctreeDynamicMeshComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                      *)(*(longlong *)&param_1[0x28].field_0x20 + 0x40),
                     (UOctreeDynamicMeshComponent *)local_58,(pmf_8d422e59 *)param_1);
  *(undefined8 *)&param_1[0x29].field_0x8 = *(undefined8 *)FVar7.ID;
  pFVar8 = ::operator_new(0x208);
  pFVar10 = pFVar11;
  if (pFVar8 != (FSparseDynamicOctree3 *)0x0) {
    memset(pFVar8,0,0x208);
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(pFVar8);
    pFVar8[1].MaxExpandFactor = 1.7976931348623157e+308;
    *(undefined8 *)&pFVar8[1].MaxTreeDepth = 0x7fefffffffffffff;
    pFVar8[1].CellRefCounts.RefCounts.CurBlock = 0xffffffff;
    pFVar8[1].CellRefCounts.RefCounts.CurBlockUsed = 0x7fefffff;
    pFVar8[1].CellRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
         (FScriptContainerElement *)0xffefffffffffffff;
    pFVar8[1].CellRefCounts.RefCounts.Blocks.ArrayNum = -1;
    pFVar8[1].CellRefCounts.RefCounts.Blocks.ArrayMax = -0x100001;
    pFVar8[1].CellRefCounts.FreeIndices.CurBlock = 0xffffffff;
    pFVar8[1].CellRefCounts.FreeIndices.CurBlockUsed = 0xffefffff;
    pFVar10 = pFVar8;
  }
  puVar1 = &param_1[0x29].field_0x10;
  if (puVar1 == local_58 + 8) {
    if (pFVar10 != (FSparseDynamicOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(pFVar10);
      goto LAB_14caab4f7;
    }
  }
  else {
    pFVar8 = *(FSparseDynamicOctree3 **)puVar1;
    *(FSparseDynamicOctree3 **)puVar1 = pFVar10;
    if (pFVar8 != (FSparseDynamicOctree3 *)0x0) {
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(pFVar8);
      pFVar10 = pFVar8;
LAB_14caab4f7:
      ::operator_delete(pFVar10,0x208);
    }
  }
  this = *(FDynamicMeshOctree3 **)puVar1;
  pFVar9 = (FDynamicMesh3 *)(**(code **)(*(longlong *)param_1 + 0xb38))(param_1);
  UE::Geometry::FDynamicMeshOctree3::Initialize(this,pFVar9);
  pFVar10 = ::operator_new(0x68);
  if (pFVar10 != (FSparseDynamicOctree3 *)0x0) {
    (pFVar10->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar10->CellRefCounts).RefCounts.Blocks.ArrayNum = 0;
    (pFVar10->CellRefCounts).RefCounts.Blocks.ArrayMax = 0;
    *(undefined8 *)&(pFVar10->CellRefCounts).UsedCount = 0;
    *(undefined8 *)((longlong)&(pFVar10->Cells).Blocks.AllocatorInstance.Data + 4) = 0;
    (pFVar10->Cells).Blocks.ArrayMax = 0;
    pFVar10->RootDimension = 0.0;
    pFVar10->MaxExpandFactor = 0.0;
    *(undefined8 *)&pFVar10->MaxTreeDepth = 0;
    (pFVar10->CellRefCounts).RefCounts.CurBlock = 0;
    (pFVar10->CellRefCounts).RefCounts.CurBlockUsed = 0;
    (pFVar10->CellRefCounts).FreeIndices.CurBlock = 0;
    (pFVar10->CellRefCounts).FreeIndices.CurBlockUsed = 0;
    *(undefined4 *)&(pFVar10->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = 0;
    *(undefined4 *)
     ((longlong)&(pFVar10->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data + 4) = 0x80;
    (pFVar10->CellRefCounts).FreeIndices.Blocks.ArrayNum = -1;
    (pFVar10->CellRefCounts).FreeIndices.Blocks.ArrayMax = 0;
    (pFVar10->Cells).CurBlock = 0;
    (pFVar10->Cells).CurBlockUsed = 0;
    *(undefined4 *)&(pFVar10->Cells).Blocks.AllocatorInstance.Data = 0;
    pFVar11 = pFVar10;
  }
  puVar1 = &param_1[0x29].field_0x18;
  if (puVar1 == local_58 + 0x10) {
    if (pFVar11 == (FSparseDynamicOctree3 *)0x0) goto LAB_14caab602;
    *(undefined4 *)&(pFVar11->Cells).Blocks.AllocatorInstance.Data = 0;
    if (*(void **)&pFVar11->Cells != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar11->Cells);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar11->MaxTreeDepth);
    pFVar10 = pFVar11;
    if ((void *)pFVar11->RootDimension != (void *)0x0) {
      FMemory::Free((void *)pFVar11->RootDimension);
    }
  }
  else {
    pFVar10 = *(FSparseDynamicOctree3 **)puVar1;
    *(FSparseDynamicOctree3 **)puVar1 = pFVar11;
    if (pFVar10 == (FSparseDynamicOctree3 *)0x0) goto LAB_14caab602;
    *(undefined4 *)&(pFVar10->Cells).Blocks.AllocatorInstance.Data = 0;
    if (*(void **)&pFVar10->Cells != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar10->Cells);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar10->MaxTreeDepth);
    if ((void *)pFVar10->RootDimension != (void *)0x0) {
      FMemory::Free((void *)pFVar10->RootDimension);
    }
  }
  ::operator_delete(pFVar10,0x68);
LAB_14caab602:
  iVar2 = *(int *)&param_1[0x2d].field_0x4;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&param_1[0x2c].field_0x20,0,
               (int *)&param_1[0x2d].field_0x4);
  }
  (**(code **)(*(longlong *)param_1 + 0xb50))(param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1[0x26].field_0x20);
  return;
}

