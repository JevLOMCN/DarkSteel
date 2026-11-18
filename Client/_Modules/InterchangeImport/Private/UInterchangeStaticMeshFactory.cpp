// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 23

// StaticClass @ 14e700ac0

UClass * __cdecl UInterchangeStaticMeshFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeStaticMeshFactory",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshFactory,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshFactory>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.InnerSingleton;
}

// UInterchangeStaticMeshFactory @ 14e708d50

UInterchangeStaticMeshFactory * __thiscall
UInterchangeStaticMeshFactory::UInterchangeStaticMeshFactory
          (UInterchangeStaticMeshFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshFactory__6B_;
  *(undefined8 *)&this->PayloadsPerLodIndex = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x34 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x48 = 0;
  (this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum = 0;
  (this->ImportAssetObjectData).LodMeshDescriptions.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphereElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SphereElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphereElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.BoxElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.BoxElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.BoxElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphylElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SphylElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphylElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.ConvexElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.ConvexElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.ConvexElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.TaperedCapsuleElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.TaperedCapsuleElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.TaperedCapsuleElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.LevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.LevelSetElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.LevelSetElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedLevelSetElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedLevelSetElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.MLLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.MLLevelSetElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.MLLevelSetElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->ImportAssetObjectData).AggregateGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  (this->ImportAssetObjectData).bIsAppGame = false;
  (this->ImportAssetObjectData).bImportedCustomCollision = false;
  (this->ImportAssetObjectData).bImportCollision = false;
  (this->ImportAssetObjectData).Collision = None;
  return this;
}

// UInterchangeStaticMeshFactory @ 14e708e50

UInterchangeStaticMeshFactory * __thiscall
UInterchangeStaticMeshFactory::UInterchangeStaticMeshFactory
          (UInterchangeStaticMeshFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshFactory__6B_;
  *(undefined8 *)&this->PayloadsPerLodIndex = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x34 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x48 = 0;
  (this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum = 0;
  (this->ImportAssetObjectData).LodMeshDescriptions.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphereElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SphereElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphereElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.BoxElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.BoxElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.BoxElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphylElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SphylElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SphylElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.ConvexElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.ConvexElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.ConvexElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.TaperedCapsuleElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.TaperedCapsuleElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.TaperedCapsuleElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.LevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.LevelSetElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.LevelSetElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedLevelSetElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedLevelSetElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.MLLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.MLLevelSetElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.MLLevelSetElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->ImportAssetObjectData).AggregateGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->ImportAssetObjectData).AggregateGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->ImportAssetObjectData).AggregateGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  (this->ImportAssetObjectData).bIsAppGame = false;
  (this->ImportAssetObjectData).bImportedCustomCollision = false;
  (this->ImportAssetObjectData).bImportCollision = false;
  (this->ImportAssetObjectData).Collision = None;
  return this;
}

// ~UInterchangeStaticMeshFactory @ 14e709b30

void __thiscall
UInterchangeStaticMeshFactory::~UInterchangeStaticMeshFactory(UInterchangeStaticMeshFactory *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshFactory__6B_;
  FKAggregateGeom::~FKAggregateGeom(&(this->ImportAssetObjectData).AggregateGeom);
  DestructItems<FMeshDescription,int>
            ((FMeshDescription *)
             (this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data,
             (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum);
  pFVar1 = (this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PayloadsPerLodIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PayloadsPerLodIndex);
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e70b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_1>::operator()
          (void *this,FString *param_1,bool param_2,bool param_3,UInterchangeMeshNode **param_4,
          TTransform<double> *param_5)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  UInterchangeSceneNode *this_00;
  UClass *pUVar6;
  UInterchangeMeshNode *pUVar7;
  undefined1 auStackY_108 [32];
  FString local_d8;
  FString local_c8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this_00 = (UInterchangeSceneNode *)
            UInterchangeBaseNodeContainer::GetNode
                      (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x30),param_1);
  if (this_00 != (UInterchangeSceneNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      *param_4 = (UInterchangeMeshNode *)this_00;
      if (!param_2) {
        return;
      }
      pdVar2 = *(double **)((longlong)this + 8);
      dVar4 = pdVar2[1];
      (param_5->Rotation).XY.m128d_f64[0] = *pdVar2;
      (param_5->Rotation).XY.m128d_f64[1] = dVar4;
      dVar4 = pdVar2[3];
      (param_5->Rotation).ZW.m128d_f64[0] = pdVar2[2];
      (param_5->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar4 = pdVar2[5];
      (param_5->Translation).XY.m128d_f64[0] = pdVar2[4];
      (param_5->Translation).XY.m128d_f64[1] = dVar4;
      dVar4 = pdVar2[7];
      (param_5->Translation).ZW.m128d_f64[0] = pdVar2[6];
      (param_5->Translation).ZW.m128d_f64[1] = dVar4;
      dVar4 = pdVar2[9];
      (param_5->Scale3D).XY.m128d_f64[0] = pdVar2[8];
      (param_5->Scale3D).XY.m128d_f64[1] = dVar4;
      dVar4 = pdVar2[0xb];
      (param_5->Scale3D).ZW.m128d_f64[0] = pdVar2[10];
      (param_5->Scale3D).ZW.m128d_f64[1] = dVar4;
      return;
    }
  }
  *param_4 = (UInterchangeMeshNode *)0x0;
  if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e70b505:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8012982632876867433>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                       ,0x97,"SceneNode");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((byte)LogInterchangeImport._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
    return;
  }
  pUVar6 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14e70b505;
    if (param_2) {
      local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_b8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_b8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      bVar5 = UInterchangeSceneNode::GetCustomGlobalTransform
                        (this_00,*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x30),
                         *(TTransform<double> **)((longlong)this + 8),&local_b8,false);
      if (bVar5) {
        (param_5->Rotation).XY.m128d_f64[0] = local_b8.Rotation.XY.m128d_f64[0];
        (param_5->Rotation).XY.m128d_f64[1] = local_b8.Rotation.XY.m128d_f64[1];
        (param_5->Rotation).ZW.m128d_f64[0] = local_b8.Rotation.ZW.m128d_f64[0];
        (param_5->Rotation).ZW.m128d_f64[1] = local_b8.Rotation.ZW.m128d_f64[1];
        (param_5->Translation).XY.m128d_f64[0] = local_b8.Translation.XY.m128d_f64[0];
        (param_5->Translation).XY.m128d_f64[1] = local_b8.Translation.XY.m128d_f64[1];
        (param_5->Translation).ZW.m128d_f64[0] = local_b8.Translation.ZW.m128d_f64[0];
        (param_5->Translation).ZW.m128d_f64[1] = local_b8.Translation.ZW.m128d_f64[1];
        (param_5->Scale3D).XY.m128d_f64[0] = local_b8.Scale3D.XY.m128d_f64[0];
        (param_5->Scale3D).XY.m128d_f64[1] = local_b8.Scale3D.XY.m128d_f64[1];
        (param_5->Scale3D).ZW.m128d_f64[0] = local_b8.Scale3D.ZW.m128d_f64[0];
        (param_5->Scale3D).ZW.m128d_f64[1] = local_b8.Scale3D.ZW.m128d_f64[1];
      }
    }
    UE::Interchange::Private::MeshHelper::AddSceneNodeGeometricAndPivotToGlobalTransform
              (param_5,this_00,param_2,param_3);
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_c8);
    pUVar7 = (UInterchangeMeshNode *)
             UInterchangeBaseNodeContainer::GetNode
                       (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x30),&local_c8);
    if (pUVar7 != (UInterchangeMeshNode *)0x0) {
      pUVar6 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_14e70b4f2;
    }
    pUVar7 = (UInterchangeMeshNode *)0x0;
LAB_14e70b4f2:
    *param_4 = pUVar7;
    if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    return;
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
            ((UInterchangeInstancedStaticMeshComponentNode *)this_00,&local_d8);
  pUVar7 = (UInterchangeMeshNode *)
           UInterchangeBaseNodeContainer::GetNode
                     (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x30),&local_d8);
  if (pUVar7 != (UInterchangeMeshNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14e70b3a4;
  }
  pUVar7 = (UInterchangeMeshNode *)0x0;
LAB_14e70b3a4:
  *param_4 = pUVar7;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e70bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TMap<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>_>
          *param_2,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  FAttributeStorage *pFVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ForAnyElementType _Src;
  bool bVar18;
  undefined4 extraout_EAX;
  int iVar19;
  FString *pFVar20;
  UInterchangeSceneNode *this_00;
  UClass *pUVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  ulonglong uVar24;
  void *this_01;
  TReferenceControllerBase<1> *pTVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  bool bVar28;
  TReferenceControllerBase<1> *pTVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulong64 uVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  undefined4 uVar56;
  double dVar57;
  double dVar58;
  undefined4 uVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  undefined1 auStackY_5d8 [32];
  undefined1 local_576 [6];
  TReferenceControllerBase<1> *local_570;
  TReferenceControllerBase<1> *local_568;
  int local_560;
  uint local_55c;
  FAttributeKey local_558;
  FString local_548;
  EInterchangeMeshPayLoadType local_538;
  int local_534;
  char local_530;
  FInterchangeMeshPayLoadKey local_528;
  UInterchangeMeshNode *local_510;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_508;
  UInterchangeMeshNode *local_500;
  FInterchangeMeshPayLoadKey *local_4f8;
  FScriptContainerElement *local_4f0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_4e8;
  FString local_4e0;
  code *local_4c8;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  undefined8 *local_4a0;
  undefined1 local_498 [16];
  double local_488;
  undefined1 local_480 [16];
  double local_470;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  FString *local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined8 local_218;
  FString local_210;
  EInterchangeMeshPayLoadType local_200;
  int local_1fc;
  undefined1 local_1f8 [72];
  undefined4 local_1b0;
  ForAnyElementType local_1a8;
  _RTL_CRITICAL_SECTION local_180;
  TTransform<double> local_158;
  ulonglong local_f8;
  uint uVar44;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_508 = param_1;
  local_4e8 = param_3;
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
             *)param_2,param_1->ArrayNum);
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((*(char *)((longlong)this + 0x10) == '\0') &&
     (param_3 ==
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0)) {
    bVar27 = false;
  }
  else {
    bVar27 = true;
  }
  if ((*(char *)((longlong)this + 0x11) == '\0') &&
     (param_3 ==
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0)) {
    bVar28 = false;
  }
  else {
    bVar28 = true;
  }
  local_55c = local_508->ArrayNum;
  uVar24 = (ulonglong)(int)local_55c;
  pFVar30 = (local_508->AllocatorInstance).Data;
  pFVar26 = pFVar30 + uVar24 * 0x10;
  local_4f0 = pFVar26;
LAB_14e70bed0:
  do {
    if (local_508->ArrayNum != (int)uVar24) {
      local_576[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_576);
    }
    if (pFVar30 == pFVar26) {
      return;
    }
    local_468.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_468.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_510 = (UInterchangeMeshNode *)0x0;
    local_468.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_468.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_468.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_468.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_468.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_468.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_468.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_468.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_468.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_468.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    __l34::<lambda_1>::operator()
              (*(void **)((longlong)this + 0x38),(FString *)pFVar30,bVar27,bVar28,&local_510,
               &local_468);
    if (*(char *)((longlong)this + 0x10) == '\0') {
      if (param_3 ==
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *)0x0) {
        if ((*(char *)((longlong)this + 0x11) == '\0') && (1 < *(int *)((longlong)this + 0x40))) {
          this_00 = (UInterchangeSceneNode *)
                    UInterchangeBaseNodeContainer::GetNode
                              (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x30),
                               (FString *)pFVar30);
          if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e70c36b:
            this_00 = (UInterchangeSceneNode *)0x0;
          }
          else {
            pUVar21 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
            iVar19 = (int)pUVar21->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar19) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
                &pUVar21->_padding_)) goto LAB_14e70c36b;
          }
          if (this_00 != (UInterchangeSceneNode *)0x0) {
            local_158.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_158.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_158.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_158.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_158.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_158.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_158.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_158.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UInterchangeSceneNode::GetCustomLocalTransform(this_00,&local_158);
            local_2e8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_2e8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_2e8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_2e8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_2e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_2e8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_2e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_2e8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_2e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_2e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(&local_2e8,&local_468,&local_158);
            local_468.Rotation.XY.m128d_f64[0] = local_2e8.Rotation.XY.m128d_f64[0];
            local_468.Rotation.XY.m128d_f64[1] = local_2e8.Rotation.XY.m128d_f64[1];
            local_468.Rotation.ZW.m128d_f64[0] = local_2e8.Rotation.ZW.m128d_f64[0];
            local_468.Rotation.ZW.m128d_f64[1] = local_2e8.Rotation.ZW.m128d_f64[1];
            local_468.Translation.XY.m128d_f64[0] = local_2e8.Translation.XY.m128d_f64[0];
            local_468.Translation.XY.m128d_f64[1] = local_2e8.Translation.XY.m128d_f64[1];
            local_468.Translation.ZW.m128d_f64[0] = local_2e8.Translation.ZW.m128d_f64[0];
            local_468.Translation.ZW.m128d_f64[1] = local_2e8.Translation.ZW.m128d_f64[1];
            local_468.Scale3D.XY.m128d_f64[0] = local_2e8.Scale3D.XY.m128d_f64[0];
            local_468.Scale3D.XY.m128d_f64[1] = local_2e8.Scale3D.XY.m128d_f64[1];
            local_468.Scale3D.ZW.m128d_f64[0] = local_2e8.Scale3D.ZW.m128d_f64[0];
            local_468.Scale3D.ZW.m128d_f64[1] = local_2e8.Scale3D.ZW.m128d_f64[1];
          }
        }
      }
      else {
        pFVar20 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)param_3,(FString *)pFVar30);
        if (pFVar20 != (FString *)0x0) {
          local_408.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_408.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_500 = (UInterchangeMeshNode *)0x0;
          this_01 = *(void **)((longlong)this + 0x38);
          local_408.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_408.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_408.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_408.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_408.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_408.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_408.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_408.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uVar53 = GlobalVectorConstants::Float1110.m128_u64[1];
          local_408.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_408.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          __l34::<lambda_1>::operator()(this_01,pFVar20,bVar27,bVar28,&local_500,&local_408);
          auVar34._8_8_ = local_408.Scale3D.XY.m128d_f64[1];
          auVar34._0_8_ = local_408.Scale3D.XY.m128d_f64[0];
          dVar54 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
          dVar57 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
          uVar44 = (uint)((ulonglong)local_408.Scale3D.ZW.m128d_f64[0] >> 0x20);
          auVar39._0_8_ =
               (double)CONCAT44(uVar44 & uVar15,SUB84(local_408.Scale3D.ZW.m128d_f64[0],0) & uVar14)
          ;
          auVar39._8_4_ = SUB84(local_408.Scale3D.ZW.m128d_f64[1],0) & uVar16;
          auVar39._12_4_ = (uint)((ulonglong)local_408.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar17;
          dVar60 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
          auVar62._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
          auVar62._0_8_ = dVar60;
          auVar62._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20);
          uVar68 = SUB84(local_408.Scale3D.XY.m128d_f64[0],0) & uVar14;
          uVar69 = (uint)((ulonglong)local_408.Scale3D.XY.m128d_f64[0] >> 0x20) & uVar15;
          uVar70 = SUB84(local_408.Scale3D.XY.m128d_f64[1],0) & uVar16;
          uVar71 = (uint)((ulonglong)local_408.Scale3D.XY.m128d_f64[1] >> 0x20) & uVar17;
          auVar33._8_8_ = -(ulonglong)(auVar62._8_8_ < auVar39._8_8_);
          auVar33._0_8_ = -(ulonglong)(dVar60 < auVar39._0_8_);
          auVar40._8_4_ = SUB84(dVar57,0);
          auVar40._0_8_ = dVar54;
          auVar40._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
          uVar23 = movmskpd((int)this_01,auVar33);
          auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < (double)CONCAT44(uVar71,uVar70));
          auVar41._0_8_ = -(ulonglong)(dVar54 < (double)CONCAT44(uVar69,uVar68));
          iVar19 = movmskpd(extraout_EAX,auVar41);
          if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
            local_3a8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_3a8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_3a8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_3a8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_3a8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_3a8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            auVar13._4_8_ = uVar53;
            auVar13._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
            auVar49._0_8_ = auVar13._0_8_ << 0x20;
            auVar49._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar49._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar50._8_8_ = auVar49._8_8_;
            auVar50._0_8_ = local_408.Scale3D.ZW.m128d_f64[0];
            dVar11 = local_408.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar12 = local_408.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            uVar66 = SUB84(dVar12,0);
            uVar67 = (undefined4)((ulonglong)dVar12 >> 0x20);
            dVar9 = local_408.Rotation.ZW.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar10 = local_408.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            uVar59 = (undefined4)((ulonglong)dVar10 >> 0x20);
            auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34)
            ;
            lVar31 = -(ulonglong)((double)CONCAT44(uVar69,uVar68) <= dVar54);
            lVar32 = -(ulonglong)((double)CONCAT44(uVar71,uVar70) <= dVar57);
            local_3a8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar31 & auVar34._0_4_;
            local_3a8.Scale3D.XY.m128d_f64[0]._4_4_ =
                 ~(uint)((ulonglong)lVar31 >> 0x20) & auVar34._4_4_;
            local_3a8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar32 & auVar34._8_4_;
            local_3a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 ~(uint)((ulonglong)lVar32 >> 0x20) & auVar34._12_4_;
            auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar50)
            ;
            lVar31 = -(ulonglong)
                      ((double)CONCAT44(uVar44 & uVar15,
                                        SUB84(local_408.Scale3D.ZW.m128d_f64[0],0) & uVar14) <=
                      dVar60);
            dVar54 = local_408.Translation.XY.m128d_f64[0] *
                     (double)CONCAT44(local_3a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                      local_3a8.Scale3D.XY.m128d_f64[0]._0_4_);
            dVar57 = local_408.Translation.XY.m128d_f64[1] *
                     (double)CONCAT44(local_3a8.Scale3D.XY.m128d_f64[1]._4_4_,
                                      local_3a8.Scale3D.XY.m128d_f64[1]._0_4_);
            uVar56 = (undefined4)((ulonglong)dVar57 >> 0x20);
            local_3a8.Scale3D.ZW.m128d_f64[0] =
                 (double)CONCAT44(~(uint)((ulonglong)lVar31 >> 0x20) & auVar34._4_4_,
                                  ~(uint)lVar31 & auVar34._0_4_);
            local_3a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar66;
            local_3a8.Rotation.XY.m128d_f64[0] = dVar11;
            local_3a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar67;
            local_3a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
            local_3a8.Rotation.ZW.m128d_f64[0] = dVar9;
            local_3a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar59;
            auVar45._8_4_ = uVar66;
            auVar45._0_8_ = dVar11;
            auVar45._12_4_ = uVar67;
            dVar48 = auVar45._8_8_;
            auVar63._8_4_ = SUB84(dVar57,0);
            auVar63._0_8_ = dVar54;
            auVar63._12_4_ = uVar56;
            auVar35._8_4_ = SUB84(dVar9,0);
            auVar35._0_8_ = dVar48;
            auVar35._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            auVar61._8_4_ = uVar66;
            auVar61._0_8_ = dVar11;
            auVar61._12_4_ = uVar67;
            dVar60 = local_408.Translation.ZW.m128d_f64[0] * local_3a8.Scale3D.ZW.m128d_f64[0];
            dVar55 = local_408.Translation.ZW.m128d_f64[1] * 0.0;
            auVar8._8_4_ = SUB84(dVar10,0);
            auVar8._0_8_ = dVar9;
            auVar8._12_4_ = uVar59;
            auVar62 = blendpd(auVar61,auVar8,2);
            auVar42._8_4_ = SUB84(dVar57,0);
            auVar42._0_8_ = dVar54;
            auVar42._12_4_ = uVar56;
            auVar7._8_4_ = SUB84(dVar55,0);
            auVar7._0_8_ = dVar60;
            auVar7._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
            auVar34 = blendpd(auVar42,auVar7,2);
            auVar64._0_8_ = auVar63._8_8_ * dVar11 - dVar48 * dVar54;
            auVar64._8_8_ = dVar60 * dVar12 - auVar35._8_8_ * dVar57;
            auVar43._0_8_ = auVar34._0_8_ * dVar9 - auVar62._0_8_ * dVar60;
            auVar43._8_8_ = auVar34._8_8_ * dVar10 - auVar62._8_8_ * dVar55;
            dVar55 = auVar64._8_8_ + auVar64._8_8_;
            dVar58 = auVar43._0_8_ + auVar43._0_8_;
            auVar34 = blendpd(auVar64,auVar43,2);
            auVar65._0_8_ = auVar34._0_8_ + auVar34._0_8_;
            auVar65._8_8_ = auVar34._8_8_ + auVar34._8_8_;
            uVar56 = SUB84(dVar58,0);
            auVar51._8_4_ = uVar56;
            auVar51._0_8_ = dVar55;
            uVar59 = (undefined4)((ulonglong)dVar58 >> 0x20);
            auVar51._12_4_ = uVar59;
            auVar36._8_4_ = uVar56;
            auVar36._0_8_ = dVar55;
            auVar36._12_4_ = uVar59;
            auVar46._8_4_ = uVar56;
            auVar46._0_8_ = dVar55;
            auVar46._12_4_ = uVar59;
            auVar34 = blendpd(auVar46,auVar65,2);
            auVar52._0_8_ = auVar51._8_8_ * dVar11 - dVar55 * dVar48;
            auVar52._8_8_ = auVar65._0_8_ * dVar12 - auVar36._8_8_ * dVar9;
            auVar37._8_4_ = SUB84(auVar65._8_8_,0);
            auVar37._0_8_ = auVar65._0_8_;
            auVar37._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
            auVar47._0_8_ = auVar34._0_8_ * dVar9 - auVar65._0_8_ * auVar62._0_8_;
            auVar47._8_8_ = auVar34._8_8_ * dVar10 - auVar37._8_8_ * auVar62._8_8_;
            auVar38._8_4_ = SUB84(auVar52._8_8_,0);
            auVar38._0_8_ = auVar52._0_8_;
            auVar38._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
            auVar34 = blendpd(auVar52,auVar47,2);
            local_3a8.Translation.ZW.m128d_f64[1] = 0.0;
            local_3a8.Translation.ZW.m128d_f64[0] =
                 0.0 - (auVar65._0_8_ * dVar10 + dVar60 + auVar34._0_8_);
            local_3a8.Translation.XY.m128d_f64[1] = 0.0 - (dVar58 * dVar10 + dVar57 + auVar47._0_8_)
            ;
            local_3a8.Translation.XY.m128d_f64[0] = 0.0 - (dVar55 * dVar10 + dVar54 + auVar38._8_8_)
            ;
            local_3a8.Scale3D.ZW.m128d_f64[1] = 0.0;
          }
          local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_348.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_348.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_348.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_348.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_348.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_348.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_348.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_348.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_348,&local_468,&local_3a8);
          local_468.Rotation.XY.m128d_f64[0] = local_348.Rotation.XY.m128d_f64[0];
          local_468.Rotation.XY.m128d_f64[1] = local_348.Rotation.XY.m128d_f64[1];
          local_468.Rotation.ZW.m128d_f64[0] = local_348.Rotation.ZW.m128d_f64[0];
          local_468.Rotation.ZW.m128d_f64[1] = local_348.Rotation.ZW.m128d_f64[1];
          local_468.Translation.XY.m128d_f64[0] = local_348.Translation.XY.m128d_f64[0];
          local_468.Translation.XY.m128d_f64[1] = local_348.Translation.XY.m128d_f64[1];
          local_468.Translation.ZW.m128d_f64[0] = local_348.Translation.ZW.m128d_f64[0];
          local_468.Translation.ZW.m128d_f64[1] = local_348.Translation.ZW.m128d_f64[1];
          local_468.Scale3D.XY.m128d_f64[0] = local_348.Scale3D.XY.m128d_f64[0];
          local_468.Scale3D.XY.m128d_f64[1] = local_348.Scale3D.XY.m128d_f64[1];
          local_468.Scale3D.ZW.m128d_f64[0] = local_348.Scale3D.ZW.m128d_f64[0];
          local_468.Scale3D.ZW.m128d_f64[1] = local_348.Scale3D.ZW.m128d_f64[1];
        }
      }
    }
    if (local_510 == (UInterchangeMeshNode *)0x0) {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8012982632876867362>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                          ,0xde,"MeshNode");
      if (bVar18) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (2 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
        pFVar30 = pFVar30 + 0x10;
        uVar24 = (ulonglong)local_55c;
        param_3 = local_4e8;
        goto LAB_14e70bed0;
      }
    }
    else {
      (**(code **)(local_510->_padding_ + 0x2f8))();
      if (local_530 == '\0') {
        bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8012982632876867355>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                            ,0xe5,"OptionalPayLoadKey.IsSet()");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (2 < (byte)LogInterchangeImport._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport)
          ;
        }
      }
      else {
        ::FString::FString(&local_528.UniqueId,&local_548);
        local_498._8_8_ = local_468.Scale3D.XY.m128d_f64[1];
        local_498._0_8_ = local_468.Scale3D.XY.m128d_f64[0];
        local_480._8_8_ = local_468.Translation.XY.m128d_f64[1];
        local_480._0_8_ = local_468.Translation.XY.m128d_f64[0];
        local_488 = local_468.Scale3D.ZW.m128d_f64[0];
        local_528.Type = local_538;
        local_528.FrameNumber = local_534;
        local_470 = local_468.Translation.ZW.m128d_f64[0];
        ::FString::PrintfImpl(&local_4e0,L"%.5f,%.5f,%.5f|%.5f,%.5f,%.5f,%.5f|%.5f,%.5f,%.5f");
        if (local_4e0.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = local_4e0.Data.ArrayNum + -1;
        }
        ::FString::AppendChars
                  (&local_528.UniqueId,(wchar_t *)local_4e0.Data.AllocatorInstance.Data,iVar19);
        if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
        }
        uVar23 = ::GetTypeHash(&local_528);
        iVar19 = TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FInterchangeMeshPayLoadKey>
                           ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
                             *)param_2,uVar23,&local_528);
        if (iVar19 == -1) {
          uVar23 = ::GetTypeHash(&local_528);
          iVar19 = TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FInterchangeMeshPayLoadKey>
                             ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
                               *)param_2,uVar23,&local_528);
          if ((iVar19 == -1) ||
             (lVar31 = (longlong)iVar19 * 0x3f0 + *(longlong *)param_2, lVar31 == 0)) {
            local_4f8 = &local_528;
            TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FInterchangeMeshPayLoadKey_const_&>_>
                      ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
                        *)param_2,(uint)&local_560,
                       (TKeyInitializer<FInterchangeMeshPayLoadKey_const_&> *)(ulonglong)uVar23,
                       (bool *)&local_4f8);
            lVar31 = (longlong)local_560 * 0x3f0 + *(longlong *)param_2;
          }
          *(double *)(lVar31 + 0x380) = local_468.Rotation.XY.m128d_f64[0];
          *(double *)(lVar31 + 0x388) = local_468.Rotation.XY.m128d_f64[1];
          *(double *)(lVar31 + 0x390) = local_468.Rotation.ZW.m128d_f64[0];
          *(double *)(lVar31 + 0x398) = local_468.Rotation.ZW.m128d_f64[1];
          *(double *)(lVar31 + 0x3a0) = local_468.Translation.XY.m128d_f64[0];
          *(double *)(lVar31 + 0x3a8) = local_468.Translation.XY.m128d_f64[1];
          *(double *)(lVar31 + 0x3b0) = local_468.Translation.ZW.m128d_f64[0];
          *(double *)(lVar31 + 0x3b8) = local_468.Translation.ZW.m128d_f64[1];
          *(double *)(lVar31 + 0x3c0) = local_468.Scale3D.XY.m128d_f64[0];
          *(double *)(lVar31 + 0x3c8) = local_468.Scale3D.XY.m128d_f64[1];
          *(double *)(lVar31 + 0x3d0) = local_468.Scale3D.ZW.m128d_f64[0];
          *(double *)(lVar31 + 0x3d8) = local_468.Scale3D.ZW.m128d_f64[1];
          iVar19 = 0;
          if (local_548.Data.ArrayNum != 0) {
            iVar19 = local_548.Data.ArrayNum + -1;
          }
          ::FString::AssignRange
                    ((FString *)(lVar31 + 0x20),(wchar_t *)local_548.Data.AllocatorInstance.Data,
                     iVar19);
          _Src = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.
                 AllocatorInstance;
          lVar32 = (longlong)
                   UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
          pFVar4 = *(FAttributeStorage **)((longlong)this + 0x30);
          local_558.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_558.Key.Data.ArrayMax = 0;
          local_558.Key.Data.ArrayNum =
               UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
          if (UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.
                           ArrayNum,0,(ForAnyElementType *)&local_558,
                       UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum,
                       &local_558.Key.Data.ArrayMax);
            memcpy(local_558.Key.Data.AllocatorInstance.Data,_Src.Data,lVar32 * 2);
          }
          UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                    (pFVar4,&local_558,&local_468,None);
          if (local_558.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.Key.Data.AllocatorInstance.Data);
          }
          local_218 = *(undefined8 *)((longlong)this + 8);
          pFVar4 = *(FAttributeStorage **)((longlong)this + 0x30);
          local_278 = local_468.Rotation.XY.m128d_f64[0];
          dStack_270 = local_468.Rotation.XY.m128d_f64[1];
          local_268 = local_468.Rotation.ZW.m128d_f64[0];
          dStack_260 = local_468.Rotation.ZW.m128d_f64[1];
          local_258 = local_468.Translation.XY.m128d_f64[0];
          dStack_250 = local_468.Translation.XY.m128d_f64[1];
          local_248 = local_468.Translation.ZW.m128d_f64[0];
          dStack_240 = local_468.Translation.ZW.m128d_f64[1];
          local_238 = local_468.Scale3D.XY.m128d_f64[0];
          dStack_230 = local_468.Scale3D.XY.m128d_f64[1];
          local_228 = local_468.Scale3D.ZW.m128d_f64[0];
          dStack_220 = local_468.Scale3D.ZW.m128d_f64[1];
          local_288 = (FString *)(lVar31 + 0x20);
          ::FString::FString(&local_210,&local_548);
          local_200 = local_538;
          local_1fc = local_534;
          UE::Interchange::FAttributeStorage::FAttributeStorage
                    ((FAttributeStorage *)local_1f8,pFVar4);
          cVar3 = *(char *)((longlong)this + 0x28);
          pTVar22 = ::operator_new(0xb0);
          pTVar25 = (TReferenceControllerBase<1> *)0x0;
          if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
            pTVar29 = (TReferenceControllerBase<1> *)&DAT_00000010;
          }
          else {
            pTVar22->SharedReferenceCount = (atomic<int>)0x1;
            pTVar22->WeakReferenceCount = (atomic<int>)0x1;
            local_4c8 = (code *)0x0;
            pTVar22->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFInterchangeTaskLambda_Interchange_UE___00_SharedPointerInternals__6B_
            ;
            local_4a0 = (undefined8 *)0x0;
            local_4a0 = FMemory::Malloc(0x140,0x10);
            *local_4a0 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::`34'::<lambda_2>::operator()'::`46'::<lambda_1>,0,1>
                          ::_vftable_;
            puVar1 = local_4a0 + 2;
            *puVar1 = local_288;
            local_4a0[4] = local_278;
            local_4a0[5] = dStack_270;
            local_4a0[6] = local_268;
            local_4a0[7] = dStack_260;
            local_4a0[8] = local_258;
            local_4a0[9] = dStack_250;
            local_4a0[10] = local_248;
            local_4a0[0xb] = dStack_240;
            local_4a0[0xc] = local_238;
            local_4a0[0xd] = dStack_230;
            local_4a0[0xe] = local_228;
            local_4a0[0xf] = dStack_220;
            local_4a0[0x10] = local_218;
            local_4a0[0x11] = 0;
            local_4a0[0x11] = local_210.Data.AllocatorInstance.Data;
            local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(local_4a0 + 0x12) = local_210.Data.ArrayNum;
            *(int *)((longlong)local_4a0 + 0x94) = local_210.Data.ArrayMax;
            local_210.Data.ArrayNum = 0;
            local_210.Data.ArrayMax = 0;
            *(EInterchangeMeshPayLoadType *)(local_4a0 + 0x13) = local_200;
            *(int *)((longlong)local_4a0 + 0x9c) = local_1fc;
            UE::Interchange::FAttributeStorage::FAttributeStorage
                      ((FAttributeStorage *)(local_4a0 + 0x14),(FAttributeStorage *)local_1f8);
            if (puVar1 != (undefined8 *)0x0) {
              local_4c8 = UE::Core::Private::Function::
                          TFunctionRefCaller<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()'::__l46::<lambda_1>,void>
                          ::Call;
            }
            pTVar22[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)&pTVar22[1].SharedReferenceCount,4000);
            pTVar22[1]._padding_ = (longlong)&___7FInterchangeTaskLambda_Interchange_UE__6B_;
            pTVar22[4]._padding_ = -1;
            *(undefined1 *)&pTVar22[4].SharedReferenceCount = 0;
            pTVar22[5]._padding_ = 0;
            pTVar22[5].SharedReferenceCount = (atomic<int>)0x0;
            pTVar22[5].WeakReferenceCount = (atomic<int>)0x0;
            pTVar22[6]._padding_ = 0;
            pTVar22[6].SharedReferenceCount = (atomic<int>)0x0;
            pTVar22[6].WeakReferenceCount = (atomic<int>)0x0;
            *(bool *)&pTVar22[7]._padding_ = cVar3 != '\0';
            pTVar22[8]._padding_ = (longlong)local_4c8;
            *(undefined8 **)&pTVar22[10].SharedReferenceCount = local_4a0;
            pTVar22[9]._padding_ = local_4b8;
            pTVar22[9].SharedReferenceCount = (atomic<int>)(undefined4)uStack_4b0;
            pTVar22[9].WeakReferenceCount = (atomic<int>)uStack_4b0._4_4_;
            local_4a0 = (undefined8 *)0x0;
            pTVar22[10]._padding_ = local_4a8;
            if (pTVar22[8]._padding_ == 0) {
              if (local_4c8 != (code *)0x0) {
                (**(code **)(local_4b8 + 0x10))(&local_4b8);
              }
            }
            else {
              local_4c8 = (code *)0x0;
            }
            pTVar29 = pTVar22 + 1;
            if ((pTVar29 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar18)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            LOCK();
            pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
            UNLOCK();
            pTVar25 = pTVar22;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          DeleteCriticalSection(&local_180);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          local_1b0 = 0;
          if ((void *)local_1f8._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1f8._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1f8);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          pFVar5 = *(ForAnyElementType **)((longlong)this + 0x20);
          if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_570 = pTVar29;
          local_568 = pTVar25;
          if (((pFVar5->Data <= (FScriptContainerElement *)&local_570) &&
              ((FScriptContainerElement *)&local_570 <
               pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x10)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar19 = *(int *)&pFVar5[1].Data;
          piVar2 = (int *)((longlong)&pFVar5[1].Data + 4);
          if (iVar19 == *piVar2) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,pFVar5,piVar2);
          }
          *(int *)&pFVar5[1].Data = iVar19 + 1;
          pFVar26 = pFVar5->Data;
          *(TReferenceControllerBase<1> **)(pFVar26 + (longlong)iVar19 * 0x10) = local_570;
          *(TReferenceControllerBase<1> **)(pFVar26 + (longlong)iVar19 * 0x10 + 8) = local_568;
          local_568 = (TReferenceControllerBase<1> *)0x0;
          local_570 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          pFVar26 = local_4f0;
        }
        if (local_528.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_528.UniqueId.Data.AllocatorInstance.Data);
        }
      }
      if ((local_530 != '\0') &&
         (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_548.Data.AllocatorInstance.Data);
      }
    }
    pFVar30 = pFVar30 + 0x10;
    uVar24 = (ulonglong)local_55c;
    param_3 = local_4e8;
  } while( true );
}

// BackupSourceData @ 14e70eb00

void __thiscall
UInterchangeStaticMeshFactory::BackupSourceData
          (UInterchangeStaticMeshFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e70fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeStaticMeshFactory::BeginImportAsset_GameThread
          (UInterchangeStaticMeshFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *this_00;
  UObject *pUVar2;
  FName FVar3;
  TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> TVar4;
  bool bVar5;
  UInterchangeManager *this_01;
  UInterchangeEditorUtilitiesBase *pUVar6;
  longlong lVar7;
  longlong lVar8;
  UClass *pUVar9;
  UStaticMesh *pUVar10;
  FName *pFVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> local_f8;
  FSoftObjectPath local_f0;
  FName local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId290,
               "UInterchangeStaticMeshFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
               ,0x122);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
  }
  (this->ImportAssetObjectData).bIsAppGame = false;
  this_01 = UInterchangeManager::GetInterchangeManager();
  pUVar6 = UInterchangeManager::GetEditorUtilities(this_01);
  if (pUVar6 != (UInterchangeEditorUtilitiesBase *)0x0) {
    bVar5 = (bool)(**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6);
    (this->ImportAssetObjectData).bIsAppGame = bVar5;
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e71005d:
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return __return_storage_ptr__;
  }
  lVar7 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  lVar8 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar8 == 0) goto LAB_14e71005d;
  if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) || (this_00 = param_1->AssetNode, this_00 == (UInterchangeFactoryBaseNode *)0x0))
  goto LAB_14e71005d;
  pUVar9 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar9->_padding_)) goto LAB_14e71005d;
  pUVar10 = (UStaticMesh *)param_1->ReimportObject;
  if (pUVar10 == (UStaticMesh *)0x0) {
    local_f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_f0.AssetPath.PackageName.Number = 0;
    local_f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_f0.AssetPath.AssetName.Number = 0;
    local_f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.SubPathString.Data.ArrayNum = 0;
    local_f0.SubPathString.Data.ArrayMax = 0;
    bVar5 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_f0);
    if (bVar5) {
      pUVar10 = (UStaticMesh *)FSoftObjectPath::TryLoad(&local_f0,(FUObjectSerializeContext *)0x0);
    }
    if (local_f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pUVar10 != (UStaticMesh *)0x0) goto LAB_14e70ff54;
    if ((param_1->AssetName).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
    }
    pFVar11 = ::FName::FName(&local_d0,pwVar13);
    pUVar2 = param_1->Parent;
    local_f8.Ptr = (FStaticMeshRenderData *)0x0;
    FVar3 = *pFVar11;
    if (FVar3 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar9 = Z_Construct_UClass_UStaticMesh_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar9);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Standalone|RF_Public;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar2;
    local_c8._16_8_ = FVar3;
    pUVar10 = (UStaticMesh *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar12 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (GInterchangeMarkAsNotHavingNavigationData != false) {
      UStaticMesh::MarkAsNotHavingNavigationData(pUVar10);
    }
    if (pUVar10 != (UStaticMesh *)0x0) {
      UStaticMesh::CreateBodySetup(pUVar10);
      __return_storage_ptr__->ImportedObject = (UObject *)pUVar10;
      goto LAB_14e710025;
    }
  }
  else {
LAB_14e70ff54:
    pUVar9 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if (((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar9->_padding_)) && (pUVar10 != (UStaticMesh *)0x0)) {
      if (pUVar10->bRenderingResourcesInitialized != 0) {
        FStaticMeshComponentRecreateRenderStateContext::
        FStaticMeshComponentRecreateRenderStateContext
                  ((FStaticMeshComponentRecreateRenderStateContext *)local_c8,pUVar10,true,true);
        (**(code **)(pUVar10->_padding_ + 800))(pUVar10);
        FRenderCommandFence::Wait(&pUVar10->ReleaseResourcesFence,false);
        local_f8.Ptr = (FStaticMeshRenderData *)0x0;
        UStaticMesh::SetRenderData(pUVar10,&local_f8);
        TVar4.Ptr = local_f8.Ptr;
        if (local_f8.Ptr != (FStaticMeshRenderData *)0x0) {
          FStaticMeshRenderData::~FStaticMeshRenderData(local_f8.Ptr);
          ::operator_delete(TVar4.Ptr,0x98);
        }
        FStaticMeshComponentRecreateRenderStateContext::
        ~FStaticMeshComponentRecreateRenderStateContext
                  ((FStaticMeshComponentRecreateRenderStateContext *)local_c8);
      }
      __return_storage_ptr__->ImportedObject = (UObject *)pUVar10;
      goto LAB_14e710025;
    }
  }
  if ((param_1->ReimportObject == (UObject *)0x0) && (2 < (byte)LogInterchangeImport._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
LAB_14e710025:
  if (!bVar14) {
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// BuildFromMeshDescriptions @ 14e7105d0

void __thiscall
UInterchangeStaticMeshFactory::BuildFromMeshDescriptions
          (UInterchangeStaticMeshFactory *this,UStaticMesh *param_1)

{
  uint uVar1;
  FMeshDescription *pFVar2;
  code *pcVar3;
  bool bVar4;
  FStaticMeshRenderData *pFVar5;
  FMeshDescription *pFVar6;
  FMeshDescription *local_58;
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> local_50;
  FBuildMeshDescriptionsParams local_40;
  
  if ((this->ImportAssetObjectData).bIsAppGame != false) {
    pFVar2 = (FMeshDescription *)
             (this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data;
    (this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    uVar1 = (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum;
    (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum = 0;
    (this->ImportAssetObjectData).LodMeshDescriptions.ArrayMax = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&local_50.AllocatorInstance,0,&local_50.ArrayMax);
    }
    for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (int)uVar1; pFVar6 = pFVar6 + 1) {
      local_58 = pFVar6;
      if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_50.ArrayNum == local_50.ArrayMax) {
        local_50.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      *(FMeshDescription **)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8) =
           local_58;
      local_50.ArrayNum = local_50.ArrayNum + 1;
    }
    local_40.bAllowCpuAccess = (this->ImportAssetObjectData).Collision != None;
    local_40.PerLODOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.PerLODOverrides.ArrayNum = 0;
    local_40.PerLODOverrides.ArrayMax = 0;
    param_1->bAllowCPUAccess = '\0';
    param_1->field_0x1e5 = param_1->field_0x1e5 | local_40.bAllowCpuAccess * '\x02';
    local_40.bMarkPackageDirty = false;
    local_40.bUseHashAsGuid = true;
    local_40.bBuildSimpleCollision = false;
    local_40.bCommitMeshDescription = false;
    local_40.bFastBuild = true;
    UStaticMesh::BuildFromMeshDescriptions(param_1,&local_50,&local_40);
    pFVar5 = UStaticMesh::GetRenderData(param_1);
    if (pFVar5 == (FStaticMeshRenderData *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8012982632876866530>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                         ,0x41e,"StaticMesh.GetRenderData()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (((this->ImportAssetObjectData).Collision != None) &&
            ((this->ImportAssetObjectData).bImportedCustomCollision == false)) {
      if ((param_1->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
        UStaticMesh::CreateBodySetup(param_1);
      }
      *(undefined1 *)((longlong)&((param_1->BodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 3;
    }
    if (local_40.PerLODOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.PerLODOverrides.AllocatorInstance.Data);
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    DestructItems<FMeshDescription,int>(pFVar2,uVar1);
    if (pFVar2 != (FMeshDescription *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// BuildObject_GameThread @ 14e710850

void __thiscall
UInterchangeStaticMeshFactory::BuildObject_GameThread
          (UInterchangeStaticMeshFactory *this,FSetupObjectParams *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                       ,0x4af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_2 = false;
  return;
}

// ClearBackupSourceData @ 14e711960

void __thiscall
UInterchangeStaticMeshFactory::ClearBackupSourceData
          (UInterchangeStaticMeshFactory *this,UObject *param_1)

{
  return;
}

// CommitMeshDescriptions @ 14e7119e0

void __thiscall
UInterchangeStaticMeshFactory::CommitMeshDescriptions
          (UInterchangeStaticMeshFactory *this,UStaticMesh *param_1)

{
  return;
}

// CreatePayloadTasks @ 14e712360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeStaticMeshFactory::CreatePayloadTasks
          (UInterchangeStaticMeshFactory *this,FImportAssetObjectParams *param_1,bool param_2,
          TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  UInterchangeMeshFactoryNode *this_00;
  UInterchangeTranslatorBase *this_01;
  void *_Src;
  code *pcVar1;
  uint uVar2;
  TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  uint uVar5;
  UClass *pUVar6;
  void *pvVar7;
  UInterchangeCommonPipelineDataFactoryNode *this_02;
  UInterchangeStaticMeshLodDataNode *this_03;
  FLodPayloads *pFVar8;
  char cVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStackY_3a8 [32];
  bool local_368;
  bool local_367;
  char local_366;
  undefined1 local_365;
  uint local_364;
  TArray<FString,TSizedDefaultAllocator<32>_> local_360;
  FString local_350;
  TArray<FString,TSizedDefaultAllocator<32>_> local_340;
  TArray<FString,TSizedDefaultAllocator<32>_> local_330;
  TArray<FString,TSizedDefaultAllocator<32>_> local_320;
  TArray<FString,TSizedDefaultAllocator<32>_> local_310;
  TArray<FString,TSizedDefaultAllocator<32>_> local_300;
  TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_> *local_2f0
  ;
  FImportAssetObjectParams *local_2e8;
  void *local_2e0;
  char local_2d8;
  undefined1 local_2d7;
  TTransform<double> *local_2d0;
  TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_> *local_2c8
  ;
  undefined1 local_2c0;
  undefined1 *local_2b8;
  FImportAssetObjectParams **local_2b0;
  int local_2a8;
  FImportAssetObjectParams *local_298;
  TTransform<double> *local_290;
  undefined1 local_288 [64];
  void *local_248;
  undefined4 local_240;
  ForAnyElementType local_238;
  long64 lStack_230;
  long64 local_228;
  ulong64 local_220;
  undefined8 local_218;
  _RTL_CRITICAL_SECTION local_210;
  TTransform<double> local_1e8;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_188;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_138;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_e8;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  bVar12 = CpuChannel->Enabled < 0;
  local_365 = param_2;
  local_2f0 = param_3;
  if (bVar12) {
    local_366 = '\0';
  }
  else {
    local_366 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"UInterchangeStaticMeshFactory::CreatePayloadTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  cVar9 = !bVar12;
  this_00 = (UInterchangeMeshFactoryNode *)param_1->AssetNode;
  if (this_00 == (UInterchangeMeshFactoryNode *)0x0) goto LAB_14e712aa0;
  pUVar6 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
  iVar11 = (int)pUVar6->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar11) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8)
      != &pUVar6->_padding_)) goto LAB_14e712aa0;
  iVar4 = UInterchangeMeshFactoryNode::GetLodDataCount(this_00);
  iVar11 = 8;
  if (iVar4 < 8) {
    iVar11 = iVar4;
  }
  local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.ArrayNum = 0;
  local_360.ArrayMax = 0;
  UInterchangeMeshFactoryNode::GetLodDataUniqueIds(this_00,&local_360);
  if ((local_360.ArrayNum < iVar11) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8012982632876867496>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                          ,0x58,"LodDataUniqueIds.Num() >= LodCount"), bVar12)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = param_1->Translator;
  if (this_01 == (UInterchangeTranslatorBase *)0x0) {
LAB_14e712a57:
    if (1 < (byte)LogInterchangeImport._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
    pvVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar6);
    if (pvVar7 == (void *)0x0) goto LAB_14e712a57;
    local_1e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_1e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_368 = false;
    local_367 = false;
    this_02 = UInterchangeCommonPipelineDataFactoryNode::GetUniqueInstance(param_1->NodeContainer);
    if (this_02 != (UInterchangeCommonPipelineDataFactoryNode *)0x0) {
      UInterchangeCommonPipelineDataFactoryNode::GetCustomGlobalOffsetTransform(this_02,&local_1e8);
      UInterchangeCommonPipelineDataFactoryNode::GetBakeMeshes(this_02,&local_368);
      if (local_368 == false) {
        UInterchangeCommonPipelineDataFactoryNode::GetBakePivotMeshes(this_02,&local_367);
      }
    }
    TSet<TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>,FDefaultSetAllocator>
               *)&this->PayloadsPerLodIndex,iVar11);
    local_288._44_4_ = 0x80;
    local_288._0_8_ = 0;
    local_238.Data = (FScriptContainerElement *)0x0;
    lStack_230 = 0;
    local_288._8_8_ = 0;
    local_288._32_8_ = 0;
    local_288._40_4_ = 0;
    local_288._48_4_ = 0xffffffff;
    local_288._52_4_ = 0;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218._0_4_ = 0.1;
    local_218._4_4_ = 0;
    InitializeCriticalSectionAndSpinCount(&local_210,4000);
    UInterchangeMeshFactoryNode::CopyPayloadKeyStorageAttributes
              ((UInterchangeBaseNode *)this_00,(FAttributeStorage *)local_288);
    pTVar3 = local_2f0;
    local_364 = 0;
    if (0 < iVar11) {
      do {
        uVar2 = local_364;
        uVar5 = 0;
        if ((int)local_364 < local_360.ArrayNum) {
          uVar5 = ~local_364 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_350.Data.ArrayNum =
             *(int *)(local_360.AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10 + 8);
        lVar10 = (longlong)local_350.Data.ArrayNum;
        _Src = *(void **)(local_360.AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10);
        if (local_350.Data.ArrayNum == 0) {
          local_350.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_350.Data.ArrayNum,0,(ForAnyElementType *)&local_350,
                     local_350.Data.ArrayNum,&local_350.Data.ArrayMax);
          memcpy(local_350.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
        }
        this_03 = (UInterchangeStaticMeshLodDataNode *)
                  UInterchangeBaseNodeContainer::GetNode(param_1->NodeContainer,&local_350);
        if (this_03 == (UInterchangeStaticMeshLodDataNode *)0x0) {
LAB_14e7129ba:
          if (2 < (byte)LogInterchangeImport._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
          }
        }
        else {
          pUVar6 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
          iVar4 = (int)pUVar6->_padding_;
          if ((*(int *)(this_03->_padding_ + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar6->_padding_)) goto LAB_14e7129ba;
          pFVar8 = TMapBase<int,UInterchangeStaticMeshFactory::FLodPayloads,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>_>
                   ::FindOrAddImpl<int_const_&>
                             ((TMapBase<int,UInterchangeStaticMeshFactory::FLodPayloads,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>_>
                               *)&this->PayloadsPerLodIndex,local_364,(int *)&local_364);
          local_2d8 = local_368;
          local_290 = &local_1e8;
          local_2d0 = &local_1e8;
          local_2c0 = local_365;
          local_2b8 = local_288;
          local_2b0 = &local_298;
          local_2d7 = local_367;
          local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_300.ArrayNum = 0;
          local_300.ArrayMax = 0;
          local_2c8 = pTVar3;
          local_2e8 = param_1;
          local_2e0 = pvVar7;
          local_2a8 = iVar11;
          local_298 = param_1;
          UInterchangeStaticMeshLodDataNode::GetMeshUids(this_03,&local_300);
          `UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()
                    (&local_2e8,&local_300,&pFVar8->MeshPayloadPerKey,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)0x0);
          if (local_364 == 0) {
            UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshMap
                      (this_03,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)&local_98);
            local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_310.ArrayNum = 0;
            local_310.ArrayMax = 0;
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::GetKeys<TSizedDefaultAllocator<32>_>(&local_98,&local_310);
            `UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()
                      (&local_2e8,&local_310,&pFVar8->CollisionBoxPayloadPerKey,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_98);
            UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshMap
                      (this_03,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)&local_e8);
            local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_320.ArrayNum = 0;
            local_320.ArrayMax = 0;
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::GetKeys<TSizedDefaultAllocator<32>_>(&local_e8,&local_320);
            `UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()
                      (&local_2e8,&local_320,&pFVar8->CollisionCapsulePayloadPerKey,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_e8);
            UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshMap
                      (this_03,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)&local_138);
            local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_330.ArrayNum = 0;
            local_330.ArrayMax = 0;
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::GetKeys<TSizedDefaultAllocator<32>_>(&local_138,&local_330);
            `UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()
                      (&local_2e8,&local_330,&pFVar8->CollisionSpherePayloadPerKey,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_138);
            UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshMap
                      (this_03,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)&local_188);
            local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_340.ArrayNum = 0;
            local_340.ArrayMax = 0;
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::GetKeys<TSizedDefaultAllocator<32>_>(&local_188,&local_340);
            `UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()
                      (&local_2e8,&local_340,&pFVar8->CollisionConvexPayloadPerKey,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_188);
            DestructItems<FString,int>
                      ((FString *)local_340.AllocatorInstance.Data,local_340.ArrayNum);
            if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_340.AllocatorInstance.Data);
            }
            local_188.Pairs.HashSize = 0;
            if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_188.Pairs.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_188);
            DestructItems<FString,int>
                      ((FString *)local_330.AllocatorInstance.Data,local_330.ArrayNum);
            if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.AllocatorInstance.Data);
            }
            local_138.Pairs.HashSize = 0;
            if (local_138.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_138.Pairs.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_138);
            DestructItems<FString,int>
                      ((FString *)local_320.AllocatorInstance.Data,local_320.ArrayNum);
            if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_320.AllocatorInstance.Data);
            }
            local_e8.Pairs.HashSize = 0;
            if (local_e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_e8.Pairs.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_e8);
            DestructItems<FString,int>
                      ((FString *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
            if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.AllocatorInstance.Data);
            }
            local_98.Pairs.HashSize = 0;
            if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_98);
          }
          DestructItems<FString,int>((FString *)local_300.AllocatorInstance.Data,local_300.ArrayNum)
          ;
          if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.AllocatorInstance.Data);
          }
        }
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        local_364 = local_364 + 1;
        cVar9 = local_366;
      } while ((int)local_364 < iVar11);
    }
    DeleteCriticalSection(&local_210);
    if (local_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data);
    }
    local_240 = 0;
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_288);
  }
  DestructItems<FString,int>((FString *)local_360.AllocatorInstance.Data,local_360.ArrayNum);
  if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.AllocatorInstance.Data);
  }
LAB_14e712aa0:
  if (cVar9 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndImportAsset_GameThread @ 14e7136a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeStaticMeshFactory::EndImportAsset_GameThread
          (UInterchangeStaticMeshFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar3;
  FPolygonGroupID FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  FPolygonGroupID FVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  UClass *pUVar17;
  size_t sVar18;
  UStaticMesh *this_00;
  FImportAssetResult *pFVar19;
  FMeshElementContainer *pFVar20;
  FAttributesSetEntry *pFVar21;
  ForElementType<unsigned_int> FVar22;
  FName *pFVar23;
  ForElementType<unsigned_int> FVar24;
  FMeshDescription *this_01;
  int iVar25;
  uint uVar26;
  FPolygonGroupID FVar27;
  uint uVar28;
  UInterchangeStaticMeshFactoryNode *this_02;
  bool bVar29;
  undefined1 auStackY_178 [32];
  uint local_144;
  int local_140;
  uint uStack_13c;
  FPolygonGroupID FStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TMeshAttributesRef<FPolygonGroupID,FName_const_> local_120;
  longlong local_118;
  int local_110;
  int local_10c;
  UMaterial *local_108;
  UStaticMesh *local_100;
  UInterchangeStaticMeshFactory *local_f8;
  FImportAssetObjectParams *local_f0;
  UInterchangeStaticMeshFactoryNode *local_e8;
  FImportAssetResult *local_e0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  uint local_98;
  FPolygonGroupID FStack_94;
  TStringView<wchar_t> local_88;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar29 = -1 < CpuChannel->Enabled;
  local_f8 = this;
  local_f0 = param_1;
  local_e0 = __return_storage_ptr__;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId649,
               "UInterchangeStaticMeshFactory::EndImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
               ,0x289);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId649);
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e713cf9;
  lVar15 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  lVar16 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar16 == 0) goto LAB_14e713cf9;
  if ((*(int *)(lVar15 + 0x38) < *(int *)(lVar16 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
      lVar16 + 0x30)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((!bVar14) ||
     (this_02 = (UInterchangeStaticMeshFactoryNode *)param_1->AssetNode,
     this_02 == (UInterchangeStaticMeshFactoryNode *)0x0)) goto LAB_14e713cf9;
  pUVar17 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
  iVar25 = (int)pUVar17->_padding_;
  if ((*(int *)(this_02->_padding_ + 0x38) < iVar25) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar25 * 8)
      != &pUVar17->_padding_)) goto LAB_14e713cf9;
  if ((param_1->AssetName).Data.ArrayNum == 0) {
    local_d8 = (FScriptContainerElement *)0x15060d16c;
LAB_14e7137fb:
    sVar18 = wcslen((wchar_t *)local_d8);
    iStack_d0 = (int)sVar18;
  }
  else {
    local_d8 = (param_1->AssetName).Data.AllocatorInstance.Data;
    iStack_d0 = 0;
    if (local_d8 != (FScriptContainerElement *)0x0) goto LAB_14e7137fb;
  }
  local_88._12_4_ = uStack_cc;
  local_88.Size = iStack_d0;
  local_88.DataPtr = (wchar_t *)local_d8;
  this_00 = (UStaticMesh *)StaticFindObject((UClass *)0x0,param_1->Parent,&local_88,None);
  if (this_00 != (UStaticMesh *)0x0) {
    pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
    uVar13 = _UNK_15076b1fc;
    uVar12 = _UNK_15076b1f8;
    uVar11 = _UNK_15076b1f4;
    uVar10 = ___xmm_3f8000003f8000003f8000003f800000;
    iVar25 = (int)pUVar17->_padding_;
    if ((iVar25 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
        &pUVar17->_padding_)) {
      if ((this->ImportAssetObjectData).bIsAppGame == false) {
        local_144 = 0;
        if (0 < (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum) {
          local_118 = 0;
          local_100 = this_00;
          local_e8 = this_02;
          do {
            lVar15 = local_118;
            uVar26 = 0;
            if ((int)local_144 < (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum) {
              uVar26 = ~local_144 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FImportAssetResult *)(*pcVar7)();
              return pFVar19;
            }
            this_01 = (FMeshDescription *)
                      ((this->ImportAssetObjectData).LodMeshDescriptions.AllocatorInstance.Data +
                      lVar15);
            bVar14 = FMeshDescription::IsEmpty(this_01);
            __return_storage_ptr__ = local_e0;
            param_1 = local_f0;
            this_02 = local_e8;
            if (bVar14) break;
            pFVar20 = FMeshElementChannels::Get(this_01->PolygonGroupElements,0);
            pFVar21 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                              *)&pFVar20->Attributes,
                             MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
            if (((pFVar21 == (FAttributesSetEntry *)0x0) ||
                (local_120.ArrayPtr = (pFVar21->Ptr).Ptr, (local_120.ArrayPtr)->Type != 6)) ||
               ((local_120.ArrayPtr)->Extent != 1)) {
              local_120.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
            }
            FVar22 = (ForElementType<unsigned_int>)
                     FMeshElementChannels::Get(this_01->PolygonGroupElements,0);
            uStack_13c = 1;
            local_140 = 0;
            FVar27 = *(FPolygonGroupID *)((longlong)FVar22 + 0x18);
            FStack_12c = (FPolygonGroupID)0x0;
            iStack_128 = 0;
            if (FVar27 != (FPolygonGroupID)0x0) {
              FVar24 = FVar22;
              if (*(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar24 = *(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10);
              }
              uVar26 = *(uint *)FVar24;
              iStack_128 = 0;
              local_140 = 0;
              while (uVar26 == 0) {
                iStack_128 = iStack_128 + 0x20;
                lVar15 = (longlong)local_140;
                local_140 = local_140 + 1;
                FStack_12c = FVar27;
                if ((int)(((int)((int)FVar27 - 1U) >> 0x1f & 0x1fU) + ((int)FVar27 - 1U)) >> 5 <
                    local_140) goto LAB_14e713a17;
                uVar26 = ((uint *)((longlong)FVar24 + 4))[lVar15];
              }
              uStack_13c = -uVar26 & uVar26;
              uVar2 = (ulonglong)uStack_13c * 2 + 1;
              lVar15 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              local_110 = (int)lVar15;
              FStack_12c = (FPolygonGroupID)(local_110 + -1 + iStack_128);
              if ((int)FVar27 < (int)FStack_12c) {
                FStack_12c = FVar27;
              }
            }
LAB_14e713a17:
            local_c8._padding_ = CONCAT44(uStack_13c,local_140);
            local_c8.CurrentBitIndex = (int)FStack_12c;
            local_c8.UnvisitedBitMask = 0xffffffff;
            local_c8._28_4_ = uStack_124;
            local_c8.BaseBitIndex = iStack_128;
            iVar25 = (int)FVar27 >> 5;
            uVar26 = -1 << (FVar27._0_1_ & 0x1f);
            uVar28 = (uint)FVar27 & 0xffffffe0;
            local_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar22;
            local_98 = uVar26;
            FStack_94 = FVar27;
            if (((int)FVar27 < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FImportAssetResult *)(*pcVar7)();
              return pFVar19;
            }
            FVar4 = *(FPolygonGroupID *)((longlong)FVar22 + 0x18);
            FVar9 = FStack_94;
            if (FVar27 != FVar4) {
              FVar24 = FVar22;
              if (*(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar24 = *(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10);
              }
              uVar26 = uVar26 & *(uint *)((longlong)FVar24 + (longlong)iVar25 * 4);
              while (uVar26 == 0) {
                lVar15 = (longlong)iVar25;
                uVar28 = uVar28 + 0x20;
                iVar25 = iVar25 + 1;
                FStack_94 = FVar4;
                FVar9 = FVar4;
                if ((int)(((int)((int)FVar4 - 1U) >> 0x1f & 0x1fU) + ((int)FVar4 - 1U)) >> 5 <
                    iVar25) goto LAB_14e713af4;
                uVar26 = *(uint *)((longlong)FVar24 + 4 + lVar15 * 4);
                local_98 = 0xffffffff;
              }
              uVar2 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
              lVar15 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              local_10c = (int)lVar15;
              FStack_94 = (FPolygonGroupID)(local_10c + -1 + uVar28);
              FVar9 = FStack_94;
              if ((int)FVar4 < (int)FStack_94) {
                FStack_94 = FVar4;
                FVar9 = FVar4;
              }
            }
LAB_14e713af4:
            while (((FPolygonGroupID)local_c8.CurrentBitIndex != FVar9 ||
                   ((ForElementType<unsigned_int>)local_c8.Array != FVar22))) {
              FVar27 = (FPolygonGroupID)0xffffffff;
              if (local_c8.CurrentBitIndex < *(int *)((longlong)local_c8.Array + 0x18)) {
                FVar27 = (FPolygonGroupID)local_c8.CurrentBitIndex;
              }
              pFVar23 = TMeshAttributesRef<FPolygonGroupID,FName_const_>::
                        operator[]<FPolygonGroupID,0>(&local_120,FVar27);
              iVar25 = UStaticMesh::GetMaterialIndexFromImportedMaterialSlotName(this_00,*pFVar23);
              if (iVar25 == -1) {
                pTVar3 = &this_00->StaticMaterials;
                pFVar23 = TMeshAttributesRef<FPolygonGroupID,FName_const_>::
                          operator[]<FPolygonGroupID,0>(&local_120,FVar27);
                local_108 = UMaterial::GetDefaultMaterial(MD_Surface);
                uVar26 = (this_00->StaticMaterials).ArrayNum;
                piVar1 = &(this_00->StaticMaterials).ArrayMax;
                if (uVar26 == *piVar1) {
                  uVar26 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&pTVar3->AllocatorInstance,piVar1);
                  (this_00->StaticMaterials).ArrayNum = uVar26;
                }
                pFVar5 = (pTVar3->AllocatorInstance).Data;
                (this_00->StaticMaterials).ArrayNum = uVar26 + 1;
                lVar15 = (longlong)(int)uVar26 * 0x38;
                FStaticMaterial::FStaticMaterial
                          ((FStaticMaterial *)(pFVar5 + lVar15),(UMaterialInterface *)local_108,
                           *pFVar23,(UMaterialInterface *)0x0);
                local_78 = 1;
                uStack_74 = uVar10;
                uStack_70 = uVar11;
                uStack_6c = uVar12;
                uStack_68 = uVar13;
                uVar28 = 0;
                if ((int)uVar26 < (this_00->StaticMaterials).ArrayNum) {
                  uVar28 = ~uVar26 >> 0x1f;
                }
                uVar8 = CONCAT22(uStack_76,1);
                if ((uVar28 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  pFVar19 = (FImportAssetResult *)(*pcVar7)();
                  return pFVar19;
                }
                pFVar6 = (pTVar3->AllocatorInstance).Data;
                pFVar5 = pFVar6 + lVar15 + 0x18;
                *(ulonglong *)pFVar5 = CONCAT44(uVar10,uVar8);
                *(ulonglong *)(pFVar5 + 8) = CONCAT44(uVar12,uVar11);
                *(undefined4 *)(pFVar6 + lVar15 + 0x28) = uVar13;
                this_00 = local_100;
              }
              local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
            }
            local_144 = local_144 + 1;
            local_118 = local_118 + 0x2c0;
            this = local_f8;
            __return_storage_ptr__ = local_e0;
            param_1 = local_f0;
            this_02 = local_e8;
          } while ((int)local_144 < (local_f8->ImportAssetObjectData).LodMeshDescriptions.ArrayNum);
        }
        UE::Interchange::Private::MeshHelper::ImportSockets(param_1,this_00,this_02);
      }
      if (param_1->ReimportObject == (UObject *)0x0) {
        UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject
                  ((UInterchangeFactoryBaseNode *)this_02,(UObject *)this_00);
      }
      __return_storage_ptr__->ImportedObject = (UObject *)this_00;
      goto LAB_14e713cf9;
    }
  }
  bVar14 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_8012982632876866915>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                      ,0x29d,"StaticMesh");
  if (bVar14) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FImportAssetResult *)(*pcVar7)();
    return pFVar19;
  }
  if (1 < (byte)LogInterchangeImport._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
LAB_14e713cf9:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e718350

EInterchangeFactoryAssetType __thiscall
UInterchangeStaticMeshFactory::GetFactoryAssetType(UInterchangeStaticMeshFactory *this)

{
  return Meshes;
}

// GetFactoryClass @ 14e718470

UClass * __thiscall
UInterchangeStaticMeshFactory::GetFactoryClass(UInterchangeStaticMeshFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMesh.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMesh",
               &Z_Registration_Info_UClass_UStaticMesh.InnerSingleton,
               UStaticMesh::StaticRegisterNativesUStaticMesh,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMesh>,
               InternalVTableHelperCtorCaller<UStaticMesh>,aFStackX_8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMesh.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71aa00

UClass * __cdecl UInterchangeStaticMeshFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeStaticMeshFactory",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshFactory,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshFactory>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e71b730

bool __thiscall
UInterchangeStaticMeshFactory::GetSourceFilenames
          (UInterchangeStaticMeshFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAsset_Async @ 14e720500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeStaticMeshFactory::ImportAsset_Async
          (UInterchangeStaticMeshFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  ulonglong uVar1;
  UObject *pUVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  undefined1 *puVar4;
  void *_Src;
  UBodySetup *pUVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  FMeshDescription *pFVar9;
  float fVar10;
  ForElementType<TAlignedBytes<16,16>_> FVar11;
  longlong *plVar12;
  UInterchangeMeshFactoryNode *pUVar13;
  UInterchangeStaticMeshLodDataNode *pUVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  UClass *pUVar21;
  UStaticMesh *pUVar22;
  FImportAssetResult *pFVar23;
  UInterchangeStaticMeshLodDataNode *pUVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  FMeshElementContainer *pFVar27;
  FAttributesSetEntry *pFVar28;
  FStaticBasicLogRecord *pFVar29;
  ForElementType<unsigned_int> FVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  byte bVar33;
  int iVar34;
  ulonglong uVar35;
  FMeshAttributeArraySetBase *pFVar36;
  uint uVar37;
  ulonglong uVar38;
  FMeshDescription *pFVar39;
  char cVar40;
  UInterchangeStaticMeshFactory *pUVar41;
  ulonglong uVar42;
  FImportAssetObjectData *this_00;
  UInterchangeMeshFactoryNode *this_01;
  uint uVar43;
  FMeshAttributeArraySetBase *pFVar44;
  FMeshAttributeArraySetBase *pFVar45;
  bool bVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auStackY_4f8 [32];
  bool local_4b8;
  bool local_4b7;
  bool local_4b6;
  bool local_4b5;
  char local_4b4;
  bool local_4b3;
  bool local_4b2;
  bool local_4b1;
  EInterchangeMeshCollision local_4b0;
  char local_4af;
  undefined1 local_4ae [6];
  UInterchangeMeshFactoryNode *local_4a8;
  FColor_u_0 local_4a0 [2];
  FImportAssetResult *local_498;
  longlong local_490;
  uint local_488;
  uint local_484;
  uint local_480;
  UInterchangeStaticMeshLodDataNode *local_478;
  ForElementType<unsigned_int> local_470;
  FImportAssetObjectParams *local_468;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_460;
  FDelegateAllocation local_458;
  UInterchangeStaticMeshFactory *local_448;
  TArray<FString,TSizedDefaultAllocator<32>_> local_440;
  FString *local_430;
  UStaticMesh *local_428;
  FString local_420;
  FMeshDescription *local_410;
  longlong *local_408;
  undefined8 local_400;
  float local_3f8;
  longlong local_3f0;
  TElementIDs local_3e8;
  TElementIDs local_3e0;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  int local_398;
  int local_394;
  int *local_390;
  longlong local_388;
  UObject *local_380;
  longlong *local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  ForElementType<unsigned_int> local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  int local_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  FDestructionSentinel local_2d8;
  FDestructionSentinel local_2c0;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_270;
  TConstIterator local_220;
  TConstIterator local_200;
  TOptional<FMD5Hash> local_1e0 [2];
  undefined4 local_1ac;
  undefined1 local_1a8 [64];
  undefined1 *local_168;
  int local_160;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_158;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  int local_f8;
  undefined2 local_f0;
  bool local_ee [14];
  TVector<double>_u_0 local_e0 [5];
  bool local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  bVar46 = CpuChannel->Enabled < 0;
  local_498 = __return_storage_ptr__;
  local_468 = param_1;
  local_448 = this;
  if (bVar46) {
    local_4af = '\0';
  }
  else {
    local_4af = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId379,"UInterchangeStaticMeshFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
               ,0x17b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId379);
  }
  cVar40 = !bVar46;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e72071e;
  lVar19 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  lVar20 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar20 == 0) goto LAB_14e72071e;
  if ((*(int *)(lVar19 + 0x38) < *(int *)(lVar20 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) !=
      lVar20 + 0x30)) {
    bVar46 = false;
  }
  else {
    bVar46 = true;
  }
  if ((!bVar46) ||
     (this_01 = (UInterchangeMeshFactoryNode *)param_1->AssetNode,
     this_01 == (UInterchangeMeshFactoryNode *)0x0)) goto LAB_14e72071e;
  pUVar21 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
  iVar34 = (int)pUVar21->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar34) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar34 * 8)
      != &pUVar21->_padding_)) goto LAB_14e72071e;
  pUVar2 = param_1->Parent;
  pUVar21 = (UClass *)(**(code **)(this->_padding_ + 0x2b0))(this);
  local_430 = &param_1->AssetName;
  local_380 = UE::Interchange::FFactoryCommon::AsyncFindObject
                        ((UInterchangeFactoryBaseNode *)this_01,pUVar21,pUVar2,local_430);
  if ((param_1->ReimportObject == (UObject *)0x0) || (local_380 == (UObject *)0x0)) {
    bVar46 = false;
    local_4b8 = false;
    if (local_380 != (UObject *)0x0) goto LAB_14e72067b;
    if ((byte)LogInterchangeImport._0_1_ < 2) goto LAB_14e72071e;
    pFVar29 = &::LOG_Static;
  }
  else {
    bVar46 = true;
    local_4b8 = true;
LAB_14e72067b:
    pUVar22 = Cast<UStaticMesh,UObject>(local_380);
    local_428 = pUVar22;
    if (pUVar22 != (UStaticMesh *)0x0) {
      if ((pUVar22->bRenderingResourcesInitialized != 0) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8012982632876867175>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                              ,0x199,"!StaticMesh->AreRenderingResourcesInitialized()"), bVar15)) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FImportAssetResult *)(*pcVar6)();
        return pFVar23;
      }
      uVar17 = UInterchangeMeshFactoryNode::GetLodDataCount(this_01);
      uVar37 = 8;
      if ((int)uVar17 < 8) {
        uVar37 = uVar17;
      }
      uVar17 = UInterchangeMeshFactoryNode::GetLodDataCount(this_01);
      if ((uVar37 != uVar17) &&
         (UInterchangeMeshFactoryNode::GetLodDataCount(this_01),
         2 < (byte)LogInterchangeImport._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      local_1a8._44_4_ = 0x80;
      local_1a8._0_8_ = 0;
      local_1a8._8_8_ = 0;
      local_1a8._32_8_ = 0;
      local_1a8._40_4_ = 0;
      local_1a8._48_4_ = 0xffffffff;
      local_1a8._52_4_ = 0;
      local_168 = (undefined1 *)0x0;
      local_160 = 0;
      if (bVar46 != false) {
        UStaticMesh::GetVertexColorData
                  (pUVar22,(TMap<UE::Math::TVector<float>,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>_>
                            *)local_1a8);
      }
      local_4b3 = false;
      UInterchangeMeshFactoryNode::GetCustomKeepSectionsSeparate(this_01,&local_4b3);
      local_158.Elements._44_4_ = 0x80;
      local_158.Elements._0_8_ = 0;
      local_158.Elements._8_8_ = 0;
      local_158.Elements._32_8_ = 0;
      local_158.Elements._40_4_ = 0;
      local_158.Elements._52_4_ = 0;
      local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_158.HashSize = 0;
      local_158.Elements._48_4_ = 0xffffffff;
      UInterchangeMeshFactoryNode::GetSlotMaterialDependencies
                (this_01,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)&local_158);
      local_270.Elements._0_8_ = 0;
      local_270.Elements._8_8_ = 0;
      pUVar3 = local_468->NodeContainer;
      local_270.Elements._32_8_ = 0;
      local_270.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_270.Elements._48_8_ = _UNK_150631d98;
      local_270.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_270.HashSize = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(&local_270,&local_158);
      UE::Interchange::Private::MeshHelper::StaticMeshFactorySetupAssetMaterialArray
                (&local_428->StaticMaterials,
                 (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)&local_270,pUVar3,bVar46);
      local_158.HashSize = 0;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_158.Elements);
      local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_440.ArrayNum = 0;
      local_440.ArrayMax = 0;
      UInterchangeMeshFactoryNode::GetLodDataUniqueIds(this_01,&local_440);
      if ((local_440.ArrayNum < (int)uVar37) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8012982632876867139>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                              ,0x1bd,"LodDataUniqueIds.Num() >= LodCount"), bVar15)) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FImportAssetResult *)(*pcVar6)();
        return pFVar23;
      }
      this_00 = &this->ImportAssetObjectData;
      iVar34 = (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum;
      local_390 = &(this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum;
      if (iVar34 < (int)uVar37) {
        iVar18 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x2c0,8,uVar37 - iVar34,(ForAnyElementType *)this_00,local_390,
                            &(this->ImportAssetObjectData).LodMeshDescriptions.ArrayMax);
        DefaultConstructItems<FMeshDescription,int>
                  ((this_00->LodMeshDescriptions).AllocatorInstance.Data + (longlong)iVar18 * 0x2c0,
                   uVar37 - iVar34);
      }
      else {
        if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
        }
        if ((int)uVar37 < iVar34) {
          iVar34 = iVar34 - uVar37;
          if (iVar34 < 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              pFVar23 = (FImportAssetResult *)(*pcVar6)();
              return pFVar23;
            }
          }
          else if (iVar34 == 0) goto LAB_14e720a6f;
          TArray<FMeshDescription,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this_00->LodMeshDescriptions,uVar37,iVar34);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x2c0,8,(ForAnyElementType *)this_00,
                     (this->ImportAssetObjectData).LodMeshDescriptions.ArrayNum,
                     &(this->ImportAssetObjectData).LodMeshDescriptions.ArrayMax);
        }
      }
LAB_14e720a6f:
      fVar10 = __real_3b808081;
      local_388 = (longlong)(int)uVar37;
      local_4b5 = false;
      local_4b6 = false;
      local_484 = 0;
      local_4b0 = None;
      local_480 = 0;
      local_490 = 0;
      if ((int)uVar37 < 1) {
LAB_14e721dc8:
        pUVar41 = local_448;
        (local_448->ImportAssetObjectData).bImportCollision = local_4b5;
        (local_448->ImportAssetObjectData).Collision = local_4b0;
        (local_448->ImportAssetObjectData).bImportedCustomCollision = local_4b6;
        UInterchangeSourceData::GetFileContentHash(local_468->SourceData,local_1e0);
        BuildFromMeshDescriptions(pUVar41,local_428);
        pFVar23 = local_498;
        local_498->ImportedObject = local_380;
        DestructItems<FString,int>((FString *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
        if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.AllocatorInstance.Data);
        }
        local_160 = 0;
        if (local_168 != (undefined1 *)0x0) {
          FMemory::Free(local_168);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1a8);
        if (cVar40 == '\0') {
          return pFVar23;
        }
        FCpuProfilerTrace::OutputEndEvent();
        return pFVar23;
      }
      local_3f0 = 0;
      pUVar41 = local_448;
LAB_14e720ac4:
      uVar37 = local_480;
      if (*(int *)&(pUVar41->PayloadsPerLodIndex).field_0x8 !=
          *(int *)&(pUVar41->PayloadsPerLodIndex).field_0x34) {
        puVar4 = *(undefined1 **)&(pUVar41->PayloadsPerLodIndex).field_0x40;
        puVar32 = &(pUVar41->PayloadsPerLodIndex).field_0x38;
        puVar31 = puVar32;
        if (puVar4 != (undefined1 *)0x0) {
          puVar31 = puVar4;
        }
        iVar34 = *(int *)(puVar31 +
                         (ulonglong)
                         (*(int *)&(pUVar41->PayloadsPerLodIndex).field_0x48 - 1U & local_480) * 4);
        local_4b8 = bVar46;
        if (iVar34 != -1) {
          do {
            if (*(uint *)((longlong)iVar34 * 0x1a0 + *(longlong *)&pUVar41->PayloadsPerLodIndex) ==
                local_480) {
              uVar17 = 0;
              if ((int)local_480 < local_440.ArrayNum) {
                uVar17 = ~local_480 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                pFVar23 = (FImportAssetResult *)(*pcVar6)();
                return pFVar23;
              }
              local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_420.Data.ArrayNum =
                   *(int *)(local_440.AllocatorInstance.Data + local_490 * 0x10 + 8);
              lVar19 = (longlong)local_420.Data.ArrayNum;
              _Src = *(void **)(local_440.AllocatorInstance.Data + local_490 * 0x10);
              if (local_420.Data.ArrayNum == 0) {
                local_420.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_420.Data.ArrayNum,0,(ForAnyElementType *)&local_420,
                           local_420.Data.ArrayNum,&local_420.Data.ArrayMax);
                memcpy(local_420.Data.AllocatorInstance.Data,_Src,lVar19 * 2);
              }
              pUVar24 = (UInterchangeStaticMeshLodDataNode *)
                        UInterchangeBaseNodeContainer::GetNode(local_468->NodeContainer,&local_420);
              local_478 = pUVar24;
              if (pUVar24 != (UInterchangeStaticMeshLodDataNode *)0x0) {
                pUVar21 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
                iVar34 = (int)pUVar21->_padding_;
                if ((iVar34 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar34 * 8) ==
                    &pUVar21->_padding_)) {
                  uVar38 = 0;
                  uVar17 = 0;
                  if ((int)local_484 < *local_390) {
                    uVar17 = ~local_484 >> 0x1f;
                  }
                  local_4a8 = this_01;
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar6 = (code *)swi(3);
                    pFVar23 = (FImportAssetResult *)(*pcVar6)();
                    return pFVar23;
                  }
                  local_e0[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  local_e0[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_108 = (undefined1  [8])0x0;
                  local_410 = (FMeshDescription *)
                              ((pUVar41->ImportAssetObjectData).LodMeshDescriptions.
                               AllocatorInstance.Data + local_3f0 * 0x2c0);
                  local_68 = false;
                  local_100.Data = (FScriptContainerElement *)0x0;
                  local_f8 = 0;
                  local_f0._0_1_ = true;
                  local_f0._1_1_ = true;
                  local_e0[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_ee[0] = true;
                  local_ee[1] = true;
                  local_ee[2] = true;
                  local_ee[3] = true;
                  local_ee[4] = true;
                  local_ee[5] = true;
                  local_ee[6] = true;
                  local_ee[7] = true;
                  uVar35 = uVar38;
                  pUVar13 = this_01;
                  pUVar14 = pUVar24;
                  if (*(int *)&(pUVar41->PayloadsPerLodIndex).field_0x8 ==
                      *(int *)&(pUVar41->PayloadsPerLodIndex).field_0x34) goto LAB_14e720d3e;
                  puVar4 = *(undefined1 **)&(pUVar41->PayloadsPerLodIndex).field_0x40;
                  if (puVar4 != (undefined1 *)0x0) {
                    puVar32 = puVar4;
                  }
                  iVar34 = *(int *)(puVar32 +
                                   (ulonglong)
                                   (*(int *)&(pUVar41->PayloadsPerLodIndex).field_0x48 - 1U & uVar37
                                   ) * 4);
                  pUVar13 = local_4a8;
                  pUVar14 = local_478;
                  if (iVar34 == -1) goto LAB_14e720d3e;
                  lVar19 = *(longlong *)&pUVar41->PayloadsPerLodIndex;
                  goto LAB_14e721000;
                }
              }
              if (2 < (byte)LogInterchangeImport._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
              }
              if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_420.Data.AllocatorInstance.Data);
              }
              goto LAB_14e721d85;
            }
            iVar34 = *(int *)((longlong)iVar34 * 0x1a0 + 0x198 +
                             *(longlong *)&pUVar41->PayloadsPerLodIndex);
          } while (iVar34 != -1);
        }
      }
      if (1 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      goto LAB_14e721d85;
    }
    bVar46 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8012982632876867181>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                        ,0x193,"StaticMesh");
    if (bVar46) {
      pcVar6 = (code *)swi(3);
      pFVar23 = (FImportAssetResult *)(*pcVar6)();
      return pFVar23;
    }
    if ((byte)LogInterchangeImport._0_1_ < 2) goto LAB_14e72071e;
    if ((param_1->AssetName).Data.ArrayNum == 0) {
      pFVar29 = &::LOG_Static;
    }
    else {
      pFVar29 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar29,(FLogCategoryBase *)&LogInterchangeImport);
LAB_14e72071e:
  if ((bool)cVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_498;
  while (iVar34 = *(int *)((longlong)iVar34 * 0x1a0 + 0x198 + lVar19), pUVar13 = this_01,
        pUVar14 = pUVar24, iVar34 != -1) {
LAB_14e721000:
    if (*(uint *)((longlong)iVar34 * 0x1a0 + lVar19) == uVar37) {
      pUVar13 = this_01;
      pUVar14 = pUVar24;
      if ((iVar34 != -1) &&
         (uVar35 = (longlong)iVar34 * 0x1a0 + lVar19, local_4a8 = this_01, local_478 = pUVar24,
         uVar35 != 0)) goto LAB_14e720d64;
      break;
    }
  }
LAB_14e720d3e:
  local_478 = pUVar14;
  local_4a8 = pUVar13;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar15) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FImportAssetResult *)(*pcVar6)();
    return pFVar23;
  }
LAB_14e720d64:
  local_408 = (longlong *)(uVar35 + 8);
  local_4b4 = '\0';
  uVar37 = *(uint *)(uVar35 + 0x30);
  local_470 = (ForElementType<unsigned_int>)(uVar35 + 0x18);
  uStack_36c = 1;
  uVar42 = uVar38;
  uStack_35c = 0;
  if (uVar37 != 0) {
    FVar30 = local_470;
    if (*(ForElementType<unsigned_int> *)(uVar35 + 0x28) != (ForElementType<unsigned_int>)0x0) {
      FVar30 = *(ForElementType<unsigned_int> *)(uVar35 + 0x28);
    }
    for (uVar17 = *(uint *)FVar30; uVar17 == 0;
        uVar17 = *(uint *)((longlong)FVar30 + (longlong)(int)uVar17 * 4)) {
      uVar17 = (int)uVar38 + 1;
      uVar38 = (ulonglong)uVar17;
      uVar42 = (ulonglong)((int)uVar42 + 0x20);
      uStack_35c = uVar37;
      if ((int)(((int)(uVar37 - 1) >> 0x1f & 0x1fU) + (uVar37 - 1)) >> 5 < (int)uVar17)
      goto LAB_14e720df4;
    }
    uStack_36c = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_36c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_398 = (int)lVar19;
    uStack_35c = (int)uVar42 + -1 + local_398;
    if ((int)uVar37 < (int)uStack_35c) {
      uStack_35c = uVar37;
    }
  }
LAB_14e720df4:
  uVar17 = *(uint *)(uVar35 + 0x30);
  uStack_354 = local_1ac;
  uVar43 = uVar17 & 0xffffffe0;
  iStack_350 = *(int *)(uVar35 + 0x10) - *(int *)(uVar35 + 0x3c);
  uStack_370 = (undefined4)uVar38;
  auStack_340._0_8_ = CONCAT44(uStack_36c,uStack_370);
  uStack_360 = 0xffffffff;
  uStack_330 = 0xffffffff;
  auStack_340._8_8_ = local_470;
  uStack_32c = uStack_35c;
  local_358 = (int)uVar42;
  iVar34 = (int)uVar17 >> 5;
  local_328._4_4_ = local_1ac;
  local_328._0_4_ = local_358;
  uStack_320 = CONCAT44(uStack_34c,iStack_350);
  local_488 = uVar17;
  local_378 = local_408;
  local_368 = local_470;
  local_348 = local_408;
  if ((((int)uVar17 < 0) || ((int)uVar37 < (int)uVar17)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FImportAssetResult *)(*pcVar6)();
    return pFVar23;
  }
  uVar37 = *(int *)((longlong)local_470 + 0x18);
  uVar7 = local_488;
  if (uVar17 != uVar37) {
    FVar30 = local_470;
    if (*(ForElementType<unsigned_int> *)((longlong)local_470 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar30 = *(ForElementType<unsigned_int> *)((longlong)local_470 + 0x10);
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar34 * 4);
    while (uVar17 == 0) {
      iVar34 = iVar34 + 1;
      uVar43 = uVar43 + 0x20;
      local_488 = uVar37;
      uVar7 = uVar37;
      if ((int)(((int)(uVar37 - 1) >> 0x1f & 0x1fU) + (uVar37 - 1)) >> 5 < iVar34)
      goto LAB_14e720f31;
      uVar17 = *(uint *)((longlong)FVar30 + (longlong)iVar34 * 4);
    }
    uVar38 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_394 = (int)lVar19;
    local_488 = (uVar43 - 1) + local_394;
    uVar7 = local_488;
    if ((int)uVar37 < (int)local_488) {
      local_488 = uVar37;
      uVar7 = uVar37;
    }
  }
LAB_14e720f31:
  do {
    plVar12 = local_348;
    if ((int)local_348[1] - *(int *)((longlong)local_348 + 0x34) != (int)uStack_320) {
      local_4ae[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4ae);
    }
    pFVar39 = local_410;
    pUVar24 = local_478;
    if (((uStack_32c == uVar7) && ((ForElementType<unsigned_int>)auStack_340._8_8_ == local_470)) &&
       (plVar12 == local_408)) break;
    pFVar39 = (FMeshDescription *)(*plVar12 + 0x30 + (longlong)(int)uStack_32c * 0x3f0);
    if (*(char *)&pFVar39[1].PolygonGroupElements == '\0') {
      this_01 = local_4a8;
      local_478 = pUVar24;
      if (2 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Invalid_static__152f3e5d8,
                   (FLogCategoryBase *)&LogInterchangeImport);
        this_01 = local_4a8;
      }
    }
    else if (local_4b4 == '\0') {
      bVar15 = FMeshDescription::IsEmpty(pFVar39);
      pFVar9 = local_410;
      this_01 = local_4a8;
      if (!bVar15) {
        if (local_410 != pFVar39) {
          TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                      *)local_410,
                     (TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                      *)pFVar39);
        }
        pFVar9->VertexElements = pFVar39->VertexElements;
        pFVar9->VertexInstanceElements = pFVar39->VertexInstanceElements;
        pFVar9->UVElements = pFVar39->UVElements;
        pFVar9->EdgeElements = pFVar39->EdgeElements;
        pFVar9->TriangleElements = pFVar39->TriangleElements;
        pFVar9->PolygonElements = pFVar39->PolygonElements;
        pFVar9->PolygonGroupElements = pFVar39->PolygonGroupElements;
        (pFVar9->VertexInstanceVertices).ArrayPtr = (pFVar39->VertexInstanceVertices).ArrayPtr;
        uVar37 = (pFVar39->EdgeVertices).Extent;
        uVar8 = *(undefined4 *)&(pFVar39->EdgeVertices).field_0xc;
        (pFVar9->EdgeVertices).ArrayPtr = (pFVar39->EdgeVertices).ArrayPtr;
        (pFVar9->EdgeVertices).Extent = uVar37;
        *(undefined4 *)&(pFVar9->EdgeVertices).field_0xc = uVar8;
        uVar37 = (pFVar39->TriangleVertexInstances).Extent;
        uVar8 = *(undefined4 *)&(pFVar39->TriangleVertexInstances).field_0xc;
        (pFVar9->TriangleVertexInstances).ArrayPtr = (pFVar39->TriangleVertexInstances).ArrayPtr;
        (pFVar9->TriangleVertexInstances).Extent = uVar37;
        *(undefined4 *)&(pFVar9->TriangleVertexInstances).field_0xc = uVar8;
        (pFVar9->TrianglePolygons).ArrayPtr = (pFVar39->TrianglePolygons).ArrayPtr;
        uVar37 = (pFVar39->TriangleEdges).Extent;
        uVar8 = *(undefined4 *)&(pFVar39->TriangleEdges).field_0xc;
        (pFVar9->TriangleEdges).ArrayPtr = (pFVar39->TriangleEdges).ArrayPtr;
        (pFVar9->TriangleEdges).Extent = uVar37;
        *(undefined4 *)&(pFVar9->TriangleEdges).field_0xc = uVar8;
        uVar37 = (pFVar39->TriangleVertices).Extent;
        uVar8 = *(undefined4 *)&(pFVar39->TriangleVertices).field_0xc;
        (pFVar9->TriangleVertices).ArrayPtr = (pFVar39->TriangleVertices).ArrayPtr;
        (pFVar9->TriangleVertices).Extent = uVar37;
        *(undefined4 *)&(pFVar9->TriangleVertices).field_0xc = uVar8;
        uVar37 = (pFVar39->TriangleUVs).Extent;
        uVar8 = *(undefined4 *)&(pFVar39->TriangleUVs).field_0xc;
        (pFVar9->TriangleUVs).ArrayPtr = (pFVar39->TriangleUVs).ArrayPtr;
        (pFVar9->TriangleUVs).Extent = uVar37;
        *(undefined4 *)&(pFVar9->TriangleUVs).field_0xc = uVar8;
        (pFVar9->TrianglePolygonGroups).ArrayPtr = (pFVar39->TrianglePolygonGroups).ArrayPtr;
        (pFVar9->PolygonPolygonGroups).ArrayPtr = (pFVar39->PolygonPolygonGroups).ArrayPtr;
        (pFVar9->VertexPositions).ArrayPtr = (pFVar39->VertexPositions).ArrayPtr;
        FMeshElementIndexer::operator=
                  (&pFVar9->VertexToVertexInstances,&pFVar39->VertexToVertexInstances);
        FMeshElementIndexer::operator=(&pFVar9->VertexToEdges,&pFVar39->VertexToEdges);
        FMeshElementIndexer::operator=
                  (&pFVar9->VertexInstanceToTriangles,&pFVar39->VertexInstanceToTriangles);
        FMeshElementIndexer::operator=(&pFVar9->EdgeToTriangles,&pFVar39->EdgeToTriangles);
        FMeshElementIndexer::operator=(&pFVar9->UVToTriangles,&pFVar39->UVToTriangles);
        FMeshElementIndexer::operator=(&pFVar9->PolygonToTriangles,&pFVar39->PolygonToTriangles);
        FMeshElementIndexer::operator=
                  (&pFVar9->PolygonGroupToTriangles,&pFVar39->PolygonGroupToTriangles);
        FMeshElementIndexer::operator=
                  (&pFVar9->PolygonGroupToPolygons,&pFVar39->PolygonGroupToPolygons);
        local_4b4 = '\x01';
        this_01 = local_4a8;
      }
    }
    else {
      local_4a8 = this_01;
      bVar15 = FMeshDescription::IsEmpty(pFVar39);
      if (!bVar15) {
        if (local_4b3 != false) {
          local_460.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_458.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_460,(FWriteAccessScope *)&local_290);
          local_278 = &local_458;
          puVar25 = UE::Core::Private::DelegateAllocate(0x20,&local_458);
          if (puVar25 != (undefined8 *)0x0) {
            *puVar25 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEBUFMeshDescription__AEAU1_AEAV__TMap_UFPolygonGroupID__U1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_UFPolygonGroupID__U1__0A______ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar26 = FDelegateHandle::GenerateNewID();
            puVar25[2] = uVar26;
            *puVar25 = &TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::`160'::<lambda_1>_>
                        ::_vftable_;
          }
          if (local_290.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_460,(FWriteAccessScope *)&local_2d8);
          iVar34 = local_458.DelegateSize;
          FVar11 = local_458.DelegateAllocator;
          local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_458.DelegateSize = 0;
          if (local_2d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                     (FWriteAccessScope *)&local_2c0);
          if (local_f8 == 0) {
LAB_14e721355:
            if ((ForElementType<TAlignedBytes<16,16>_>)local_100.Data !=
                (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free(local_100.Data);
            }
          }
          else if ((ForElementType<TAlignedBytes<16,16>_>)local_100.Data !=
                   (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            (*(code *)**(undefined8 **)local_100.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_100,0,0,0x10);
            local_f8 = 0;
            goto LAB_14e721355;
          }
          local_100.Data = (FScriptContainerElement *)FVar11;
          local_f8 = iVar34;
          if (local_2c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_460,(FWriteAccessScope *)&local_2a8);
          if ((local_458.DelegateSize != 0) &&
             (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_458.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_458,0,0,0x10);
            local_458.DelegateSize = 0;
          }
          if (local_2a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
          }
          if (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_458.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_460.AccessDetector);
        }
        if ((*(char *)&pFVar39[1].PolygonGroupElements == '\0') &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar23 = (FImportAssetResult *)(*pcVar6)();
          return pFVar23;
        }
        FStaticMeshOperations::AppendMeshDescription(pFVar39,local_410,(FAppendSettings *)local_108)
        ;
        local_4a8 = this_01;
        local_478 = pUVar24;
      }
    }
    uStack_330 = uStack_330 & ~auStack_340._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
  } while( true );
  pFVar27 = FMeshElementChannels::Get(local_410->VertexInstanceElements,0);
  pFVar28 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar27->Attributes,MeshAttribute::VertexInstance::Color);
  this_01 = local_4a8;
  if (((pFVar28 == (FAttributesSetEntry *)0x0) || (pFVar36 = (pFVar28->Ptr).Ptr, pFVar36->Type != 0)
      ) || (pFVar36->Extent != 1)) {
    pFVar36 = (FMeshAttributeArraySetBase *)0x0;
  }
  local_4b2 = false;
  UInterchangeMeshFactoryNode::GetCustomVertexColorReplace(local_4a8,&local_4b2);
  if (local_4b2 == false) {
    local_4b1 = false;
    UInterchangeMeshFactoryNode::GetCustomVertexColorIgnore(this_01,&local_4b1);
    uVar37 = 0;
    if (local_4b1 == false) {
      bVar15 = UInterchangeMeshFactoryNode::GetCustomVertexColorOverride
                         (this_01,(FColor *)&local_4a0[0]._s_0);
      if (bVar15) {
        local_3e0.Array = &FMeshElementChannels::Get(pFVar39->VertexInstanceElements,0)->BitArray;
        TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
                  (&local_3e0,(TConstIterator *)&local_2f8);
        TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_3e0,&local_200);
        while ((local_2f8.CurrentBitIndex != local_200.Iterator.CurrentBitIndex ||
               (this_01 = local_4a8, pUVar24 = local_478,
               local_2f8.Array != local_200.Iterator.Array))) {
          iVar34 = -1;
          if (local_2f8.CurrentBitIndex < (local_2f8.Array)->NumBits) {
            iVar34 = local_2f8.CurrentBitIndex;
          }
          local_3a8 = FLinearColor::sRGBToLinearTable[(byte)local_4a0[0]._2_1_];
          fStack_3a4 = FLinearColor::sRGBToLinearTable[(byte)local_4a0[0]._1_1_];
          fStack_3a0 = FLinearColor::sRGBToLinearTable[(byte)local_4a0[0]._0_1_];
          fStack_39c = (float)(byte)local_4a0[0]._3_1_ * fVar10;
          if (((int)pFVar36[2].Type < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          pFVar45 = pFVar36 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar36[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar45 = (FMeshAttributeArraySetBase *)pFVar36[2]._padding_;
          }
          uVar43 = iVar34 * pFVar45->NumElements;
          uVar17 = uVar37;
          if ((int)uVar43 < (int)pFVar45->Type) {
            uVar17 = ~uVar43 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          puVar25 = (undefined8 *)(pFVar45->_padding_ + (longlong)(int)uVar43 * 0x10);
          *puVar25 = CONCAT44(fStack_3a4,local_3a8);
          puVar25[1] = CONCAT44(fStack_39c,fStack_3a0);
          local_2f8.UnvisitedBitMask = local_2f8.UnvisitedBitMask & ~local_2f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
        }
      }
    }
    else {
      local_3e8.Array = &FMeshElementChannels::Get(pFVar39->VertexInstanceElements,0)->BitArray;
      TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
                (&local_3e8,(TConstIterator *)&local_318);
      TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_3e8,&local_220);
      while ((local_318.CurrentBitIndex != local_220.Iterator.CurrentBitIndex ||
             (pUVar24 = local_478, local_318.Array != local_220.Iterator.Array))) {
        iVar34 = -1;
        if (local_318.CurrentBitIndex < (local_318.Array)->NumBits) {
          iVar34 = local_318.CurrentBitIndex;
        }
        if ((int)(local_1a8._8_4_ - local_1a8._52_4_) < 1) {
          local_3b8 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
          fStack_3b4 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
          fStack_3b0 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
          fStack_3ac = (float)FColor::White.field0_0x0._3_1_ * fVar10;
          if (((int)pFVar36[2].Type < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          pFVar45 = pFVar36 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar36[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar45 = (FMeshAttributeArraySetBase *)pFVar36[2]._padding_;
          }
          uVar43 = iVar34 * pFVar45->NumElements;
          uVar17 = uVar37;
          if ((int)uVar43 < (int)pFVar45->Type) {
            uVar17 = ~uVar43 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          uVar47 = CONCAT44(fStack_3b4,local_3b8);
          uVar48 = CONCAT44(fStack_3ac,fStack_3b0);
        }
        else {
          pFVar45 = (pFVar39->VertexInstanceVertices).ArrayPtr;
          if (((int)pFVar45[2].Type < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          pFVar44 = pFVar45 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar45[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar44 = (FMeshAttributeArraySetBase *)pFVar45[2]._padding_;
          }
          uVar43 = iVar34 * pFVar44->NumElements;
          uVar17 = 0;
          if ((int)uVar43 < (int)pFVar44->Type) {
            uVar17 = ~uVar43 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          pFVar45 = (pFVar39->VertexPositions).ArrayPtr;
          iVar18 = *(int *)(pFVar44->_padding_ + (longlong)(int)uVar43 * 4);
          if (((int)pFVar45[2].Type < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          pFVar44 = pFVar45 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar45[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar44 = (FMeshAttributeArraySetBase *)pFVar45[2]._padding_;
          }
          uVar43 = iVar18 * pFVar44->NumElements;
          uVar17 = 0;
          if ((int)uVar43 < (int)pFVar44->Type) {
            uVar17 = ~uVar43 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          local_400 = *(undefined8 *)(pFVar44->_padding_ + (longlong)(int)uVar43 * 0xc);
          local_3f8 = *(float *)(pFVar44->_padding_ + 8 + (longlong)(int)uVar43 * 0xc);
          uVar17 = FCrc::MemCrc_DEPRECATED(&local_400,0xc,0);
          if (local_1a8._8_4_ != local_1a8._52_4_) {
            puVar32 = local_1a8 + 0x38;
            if (local_168 != (undefined1 *)0x0) {
              puVar32 = local_168;
            }
            iVar18 = *(int *)(puVar32 + (ulonglong)(local_160 - 1U & uVar17) * 4);
            if (iVar18 != -1) {
              do {
                lVar19 = (longlong)iVar18;
                if ((((float)local_400 == *(float *)(local_1a8._0_8_ + lVar19 * 0x18)) &&
                    (local_400._4_4_ == *(float *)(local_1a8._0_8_ + 4 + lVar19 * 0x18))) &&
                   (local_3f8 == *(float *)(local_1a8._0_8_ + 8 + lVar19 * 0x18))) {
                  if (((iVar18 != -1) &&
                      (lVar19 = local_1a8._0_8_ + (longlong)iVar18 * 0x18, lVar19 != 0)) &&
                     ((byte *)(lVar19 + 0xc) != (byte *)0x0)) {
                    local_3d8 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar19 + 0xe)];
                    fStack_3d4 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar19 + 0xd)];
                    fStack_3d0 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar19 + 0xc)];
                    fStack_3cc = (float)*(byte *)(lVar19 + 0xf) * fVar10;
                    if (((int)pFVar36[2].Type < 1) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      pFVar23 = (FImportAssetResult *)(*pcVar6)();
                      return pFVar23;
                    }
                    pFVar45 = pFVar36 + 1;
                    if ((FMeshAttributeArraySetBase *)pFVar36[2]._padding_ !=
                        (FMeshAttributeArraySetBase *)0x0) {
                      pFVar45 = (FMeshAttributeArraySetBase *)pFVar36[2]._padding_;
                    }
                    uVar43 = iVar34 * pFVar45->NumElements;
                    uVar17 = uVar37;
                    if ((int)uVar43 < (int)pFVar45->Type) {
                      uVar17 = ~uVar43 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      pFVar23 = (FImportAssetResult *)(*pcVar6)();
                      return pFVar23;
                    }
                    uVar47 = CONCAT44(fStack_3d4,local_3d8);
                    uVar48 = CONCAT44(fStack_3cc,fStack_3d0);
                    goto LAB_14e721a26;
                  }
                  break;
                }
                iVar18 = *(int *)(local_1a8._0_8_ + 0x10 + lVar19 * 0x18);
              } while (iVar18 != -1);
            }
          }
          local_3c8 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
          fStack_3c4 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
          fStack_3c0 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
          fStack_3bc = (float)FColor::White.field0_0x0._3_1_ * fVar10;
          if (((int)pFVar36[2].Type < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          pFVar45 = pFVar36 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar36[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar45 = (FMeshAttributeArraySetBase *)pFVar36[2]._padding_;
          }
          uVar43 = iVar34 * pFVar45->NumElements;
          uVar17 = uVar37;
          if ((int)uVar43 < (int)pFVar45->Type) {
            uVar17 = ~uVar43 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FImportAssetResult *)(*pcVar6)();
            return pFVar23;
          }
          uVar47 = CONCAT44(fStack_3c4,local_3c8);
          uVar48 = CONCAT44(fStack_3bc,fStack_3c0);
        }
LAB_14e721a26:
        puVar25 = (undefined8 *)(pFVar45->_padding_ + (longlong)(int)uVar43 * 0x10);
        *puVar25 = uVar47;
        puVar25[1] = uVar48;
        local_318.UnvisitedBitMask = local_318.UnvisitedBitMask & ~local_318._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
      }
    }
  }
  uVar37 = local_484;
  if (local_484 == 0) {
    UInterchangeStaticMeshLodDataNode::GetImportCollision(pUVar24,&local_4b5);
    UInterchangeStaticMeshLodDataNode::GetImportCollisionType(pUVar24,&local_4b0);
    pUVar22 = local_428;
    pUVar41 = local_448;
    if (local_4b5 != false) {
      if (bVar46 != false) {
        pUVar5 = (local_428->BodySetup).field0_0x0.DebugPtr;
        FKAggregateGeom::FreeRenderInfo(&(local_448->ImportAssetObjectData).AggregateGeom);
        FKAggregateGeom::CloneAgg(&(pUVar41->ImportAssetObjectData).AggregateGeom,&pUVar5->AggGeom);
        FKAggregateGeom::EmptyElements(&((pUVar22->BodySetup).field0_0x0.DebugPtr)->AggGeom);
      }
      local_4b7 = false;
      bVar46 = UInterchangeStaticMeshLodDataNode::GetForceCollisionPrimitiveGeneration
                         (pUVar24,&local_4b7);
      plVar12 = local_408;
      if (!bVar46) {
        local_4b7 = false;
      }
      bVar46 = UE::Interchange::Private::MeshHelper::ImportBoxCollision
                         (local_468,
                          (TMap<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>_>
                           *)(local_408 + 10),pUVar22,local_4b7);
      bVar33 = bVar46 | local_4b6;
      bVar46 = UE::Interchange::Private::MeshHelper::ImportCapsuleCollision
                         (local_468,
                          (TMap<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>_>
                           *)(plVar12 + 0x14),pUVar22);
      bVar15 = UE::Interchange::Private::MeshHelper::ImportSphereCollision
                         (local_468,
                          (TMap<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>_>
                           *)(plVar12 + 0x1e),pUVar22,local_4b7);
      bVar16 = UE::Interchange::Private::MeshHelper::ImportConvexCollision
                         (local_468,
                          (TMap<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>_>
                           *)(plVar12 + 0x28),pUVar22,pUVar24);
      local_4b6 = (bool)(bVar16 | bVar15 | bVar46 | bVar33);
    }
  }
  local_3f0 = local_3f0 + 1;
  local_484 = uVar37 + 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
  pUVar41 = local_448;
  uVar37 = local_480;
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
    pUVar41 = local_448;
    uVar37 = local_480;
  }
LAB_14e721d85:
  local_480 = uVar37 + 1;
  local_490 = local_490 + 1;
  cVar40 = local_4af;
  bVar46 = local_4b8;
  if (local_388 <= local_490) goto LAB_14e721dc8;
  goto LAB_14e720ac4;
}

// ReinstateSourceData @ 14e727dc0

void __thiscall
UInterchangeStaticMeshFactory::ReinstateSourceData
          (UInterchangeStaticMeshFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e728340

bool __thiscall
UInterchangeStaticMeshFactory::SetSourceFilename
          (UInterchangeStaticMeshFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e729150

void __thiscall
UInterchangeStaticMeshFactory::SetupObject_GameThread
          (UInterchangeStaticMeshFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1129,"UInterchangeStaticMeshFactory::SetupObject_GameThread"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
               ,0x469);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1129);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                         ,0x46b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeStaticMeshFactory @ 14e72a600

void __cdecl UInterchangeStaticMeshFactory::StaticRegisterNativesUInterchangeStaticMeshFactory(void)

{
  return;
}

