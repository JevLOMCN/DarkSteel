// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 207

// StaticClass @ 148585a50

UClass * __cdecl USkeletalMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMesh",
               &Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton,
               StaticRegisterNativesUSkeletalMesh,0x518,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMesh>,InternalVTableHelperCtorCaller<USkeletalMesh>,
               local_res8,USkinnedAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton;
}

// USkeletalMesh @ 1485a57e0

USkeletalMesh * __thiscall USkeletalMesh::USkeletalMesh(USkeletalMesh *this,FVTableHelper *param_1)

{
  USkinnedAsset::USkinnedAsset((USkinnedAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  (this->SourceModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  (this->SourceModels).ArrayNum = 0;
  (this->SourceModels).ArrayMax = 0;
  (this->SkeletalMeshRenderData).Ptr = (FSkeletalMeshRenderData *)0x0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  *(undefined8 *)&this->SocketMap = 0;
  *(undefined8 *)&(this->SocketMap).field_0x8 = 0;
  *(undefined8 *)&(this->SocketMap).field_0x20 = 0;
  *(undefined4 *)&(this->SocketMap).field_0x28 = 0;
  *(undefined4 *)&(this->SocketMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SocketMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SocketMap).field_0x34 = 0;
  *(undefined8 *)&(this->SocketMap).field_0x40 = 0;
  *(undefined4 *)&(this->SocketMap).field_0x48 = 0;
  (this->MinQualityLevelLOD)._padding_ = 0;
  (this->MinQualityLevelLOD)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLOD).Default = 0;
  (this->MinLod).Default = 0;
  (this->DisableBelowMinLodStripping).Default = false;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->ShadowPhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->NodeMappingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeMappingData).ArrayNum = 0;
  (this->NodeMappingData).ArrayMax = 0;
  (this->MorphTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargets).ArrayNum = 0;
  (this->MorphTargets).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  FReferenceSkeleton::FReferenceSkeleton(&this->RefSkeleton,true);
  *(undefined8 *)&this->MorphTargetIndexMap = 0;
  *(undefined8 *)&(this->MorphTargetIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x48 = 0;
  (this->RefBasesInvMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefBasesInvMatrix).ArrayNum = 0;
  (this->RefBasesInvMatrix).ArrayMax = 0;
  (this->PostProcessAnimBlueprint).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->PostProcessAnimBPLODThreshold = -1;
  (this->MeshClothingAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshClothingAssets).ArrayNum = 0;
  (this->MeshClothingAssets).ArrayMax = 0;
  (this->SamplingInfo).Regions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplingInfo).Regions.ArrayNum = 0;
  (this->SamplingInfo).Regions.ArrayMax = 0;
  (this->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum = 0;
  (this->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayMax = 0;
  (this->SamplingInfo).BuiltData.RegionBuiltData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SamplingInfo).BuiltData.RegionBuiltData.ArrayNum = 0;
  (this->SamplingInfo).BuiltData.RegionBuiltData.ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComposedRefPoseMatrices).ArrayNum = 0;
  (this->CachedComposedRefPoseMatrices).ArrayMax = 0;
  (this->SkinWeightProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeightProfiles).ArrayNum = 0;
  (this->SkinWeightProfiles).ArrayMax = 0;
  (this->DefaultMeshDeformer).field0_0x0.DebugPtr = (UMeshDeformer *)0x0;
  (this->TargetMeshDeformers).field0_0x0.DebugPtr = (UMeshDeformerCollection *)0x0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->ForwardAxis).Value = '\x02';
  (this->LODInfo_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODInfo_DEPRECATED).ArrayNum = 0;
  (this->LODInfo_DEPRECATED).ArrayMax = 0;
  return this;
}

// USkeletalMesh @ 1485a5a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

USkeletalMesh * __thiscall
USkeletalMesh::USkeletalMesh(USkeletalMesh *this,FObjectInitializer *param_1)

{
  FPerQualityLevelInt *pFVar1;
  FString *pFVar2;
  FString local_88;
  FPerQualityLevelInt local_78;
  
  USkinnedAsset::USkinnedAsset((USkinnedAsset *)this,param_1);
  pFVar1 = &this->MinQualityLevelLOD;
  (this->SourceModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  (this->SourceModels).ArrayNum = 0;
  (this->SourceModels).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  (this->SkeletalMeshRenderData).Ptr = (FSkeletalMeshRenderData *)0x0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  *(undefined8 *)&this->SocketMap = 0;
  *(undefined8 *)&(this->SocketMap).field_0x8 = 0;
  *(undefined8 *)&(this->SocketMap).field_0x20 = 0;
  *(undefined4 *)&(this->SocketMap).field_0x28 = 0;
  *(undefined4 *)&(this->SocketMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SocketMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SocketMap).field_0x34 = 0;
  *(undefined8 *)&(this->SocketMap).field_0x40 = 0;
  *(undefined4 *)&(this->SocketMap).field_0x48 = 0;
  pFVar1->_padding_ = 0;
  (this->MinQualityLevelLOD)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLOD).Default = 0;
  (this->MinLod).Default = 0;
  (this->DisableBelowMinLodStripping).Default = false;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->ShadowPhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->NodeMappingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeMappingData).ArrayNum = 0;
  (this->NodeMappingData).ArrayMax = 0;
  (this->MorphTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargets).ArrayNum = 0;
  (this->MorphTargets).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  FReferenceSkeleton::FReferenceSkeleton(&this->RefSkeleton,true);
  *(undefined8 *)&this->MorphTargetIndexMap = 0;
  *(undefined8 *)&(this->MorphTargetIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x48 = 0;
  (this->RefBasesInvMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefBasesInvMatrix).ArrayNum = 0;
  (this->RefBasesInvMatrix).ArrayMax = 0;
  (this->PostProcessAnimBlueprint).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->PostProcessAnimBPLODThreshold = -1;
  (this->MeshClothingAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshClothingAssets).ArrayNum = 0;
  (this->MeshClothingAssets).ArrayMax = 0;
  (this->SamplingInfo).Regions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplingInfo).Regions.ArrayNum = 0;
  (this->SamplingInfo).Regions.ArrayMax = 0;
  (this->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum = 0;
  (this->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayMax = 0;
  (this->SamplingInfo).BuiltData.RegionBuiltData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SamplingInfo).BuiltData.RegionBuiltData.ArrayNum = 0;
  (this->SamplingInfo).BuiltData.RegionBuiltData.ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComposedRefPoseMatrices).ArrayNum = 0;
  (this->CachedComposedRefPoseMatrices).ArrayMax = 0;
  (this->SkinWeightProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeightProfiles).ArrayNum = 0;
  (this->SkinWeightProfiles).ArrayMax = 0;
  (this->DefaultMeshDeformer).field0_0x0.DebugPtr = (UMeshDeformer *)0x0;
  (this->TargetMeshDeformers).field0_0x0.DebugPtr = (UMeshDeformerCollection *)0x0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->ForwardAxis).Value = '\x02';
  (this->LODInfo_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODInfo_DEPRECATED).ArrayNum = 0;
  (this->LODInfo_DEPRECATED).ArrayMax = 0;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x8000000,ReadWrite);
  local_78.PerQuality._48_8_ = _UNK_150631d98;
  local_78.PerQuality._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  (this->MinLod).Default = 0;
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  local_78.PerQuality._0_8_ = 0;
  local_78.PerQuality._8_8_ = 0;
  local_78.PerQuality._32_8_ = 0;
  local_78.PerQuality._64_8_ = 0;
  local_78.PerQuality._72_4_ = 0;
  local_78.Default = 0;
  SetQualityLevelMinLod(this,&local_78);
  pFVar2 = ::FString::FString(&local_88,GSkeletalMeshMinLodQualityLevelCVarName);
  if (pFVar1 != (FPerQualityLevelInt *)pFVar2) {
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    pFVar1->_padding_ = (longlong)(pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->MinQualityLevelLOD)._padding_ = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)&(this->MinQualityLevelLOD)._padding_ + 4) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x10000000,ReadWrite);
  this->bSupportRayTracing = '\x01';
  (this->DisableBelowMinLodStripping).Default = false;
  this->RayTracingMinLOD = 0;
  return this;
}

// ~USkeletalMesh @ 1485a61f0

void __thiscall USkeletalMesh::~USkeletalMesh(USkeletalMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FSkeletalMeshRenderData *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  DestructItems<FSkeletalMeshLODInfo,int>
            ((FSkeletalMeshLODInfo *)(this->LODInfo_DEPRECATED).AllocatorInstance.Data,
             (this->LODInfo_DEPRECATED).ArrayNum);
  pFVar1 = (this->LODInfo_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinWeightProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSkeletalMeshSamplingInfo::~FSkeletalMeshSamplingInfo(&this->SamplingInfo);
  pFVar1 = (this->MeshClothingAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefBasesInvMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MorphTargetIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MorphTargetIndexMap);
  FReferenceSkeleton::~FReferenceSkeleton(&this->RefSkeleton);
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  pFVar1 = (this->MorphTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodeMappingData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MinQualityLevelLOD).PerQuality);
  pvVar2 = (void *)(this->MinQualityLevelLOD)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SocketMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SocketMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,USkeletalMesh::FSocketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,USkeletalMesh::FSocketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,USkeletalMesh::FSocketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SocketMap);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->SkeletalMeshRenderData).Ptr;
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    FSkeletalMeshRenderData::~FSkeletalMeshRenderData(this_00);
    ::operator_delete(this_00,0x30);
  }
  DestructItems<FSkeletalMeshSourceModel,int>
            ((FSkeletalMeshSourceModel *)(this->SourceModels).AllocatorInstance.Data,
             (this->SourceModels).ArrayNum);
  pFVar1 = (this->SourceModels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INodeMappingProviderInterface__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  USkinnedAsset::~USkinnedAsset((USkinnedAsset *)this);
  return;
}

// AddAssetUserData @ 1485a7ee0

void __thiscall USkeletalMesh::AddAssetUserData(USkeletalMesh *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  UObject *local_res10;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    (*pcVar2)(this,&local_res10);
    puVar5 = &(this->RefSkeleton).FinalNameToIndexMap.field_0x48;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)puVar5 <= local_18) &&
        (local_18 <
         *(UAssetUserData ***)puVar5 +
         *(int *)((longlong)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data + 4)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data + 4)
    ;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar5,piVar1);
    }
    *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data = iVar4 + 1;
    *(UAssetUserData **)(*(longlong *)puVar5 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddClothingAsset @ 1485a8020

void __thiscall USkeletalMesh::AddClothingAsset(USkeletalMesh *this,UClothingAssetBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UClothingAssetBase>_u_0 local_res10 [3];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0x33d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 != (UClothingAssetBase *)0x0) && ((USkeletalMesh *)param_1->_padding_ == this)) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x20,ReadWrite);
    local_res10[0].DebugPtr = param_1;
    TArray<TObjectPtr<UClothingAssetBase>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UClothingAssetBase>_>
              (&this->MeshClothingAssets,(TObjectPtr<UClothingAssetBase> *)&local_res10[0].ObjectPtr
              );
    (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  }
  return;
}

// AddLODInfo @ 1485a80e0

FSkeletalMeshLODInfo * __thiscall USkeletalMesh::AddLODInfo(USkeletalMesh *this)

{
  FSkeletalMeshSourceModel *pFVar1;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  pFVar1 = AddSourceModel(this,(this->SourceModels).ArrayNum != 0);
  return (FSkeletalMeshLODInfo *)pFVar1;
}

// AddLODInfo @ 1485a8120

int __thiscall USkeletalMesh::AddLODInfo(USkeletalMesh *this,FSkeletalMeshLODInfo *param_1)

{
  int iVar1;
  FSkeletalMeshSourceModel *this_00;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  iVar1 = (this->SourceModels).ArrayNum;
  this_00 = AddSourceModel(this,false);
  FSkeletalMeshLODInfo::operator=((FSkeletalMeshLODInfo *)this_00,param_1);
  return iVar1;
}

// AddSkinWeightProfile @ 1485a9ff0

void __thiscall
USkeletalMesh::AddSkinWeightProfile(USkeletalMesh *this,FSkinWeightProfileInfo *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FSkinWeightProfileInfo *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  TArray<FSkinWeightProfileInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x200000,ReadWrite);
  pTVar8 = &this->SkinWeightProfiles;
  pFVar3 = (FSkinWeightProfileInfo *)(pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->SkinWeightProfiles).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->SkinWeightProfiles).ArrayNum;
  piVar1 = &(this->SkinWeightProfiles).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->SkinWeightProfiles).ArrayNum = iVar7 + 1;
  FVar5 = *(FName *)&param_1->DefaultProfile;
  pFVar2 = (FName *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar2 = param_1->Name;
  pFVar2[1] = FVar5;
  return;
}

// AddSourceModel @ 1485aa0c0

FSkeletalMeshSourceModel * __thiscall
USkeletalMesh::AddSourceModel(USkeletalMesh *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UClass *this_00;
  FSkeletalMeshSourceModel *this_01;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80040,ReadWrite);
  iVar2 = (this->SourceModels).ArrayNum;
  piVar1 = &(this->SourceModels).ArrayMax;
  iVar3 = iVar2;
  if (iVar2 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,8,&(this->SourceModels).AllocatorInstance,piVar1);
    (this->SourceModels).ArrayNum = iVar3;
  }
  (this->SourceModels).ArrayNum = iVar3 + 1;
  this_01 = (FSkeletalMeshSourceModel *)
            ((this->SourceModels).AllocatorInstance.Data + (longlong)iVar3 * 0x150);
  DefaultConstructItems<FSkeletalMeshSourceModel,int>(this_01,1);
  FSkeletalMeshSourceModel::Initialize(this_01,this);
  this_00 = Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  USkeletalMeshLODSettings::SetLODSettingsToMesh
            ((USkeletalMeshLODSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr,this,
             iVar2);
  if ((0 < iVar2) && (param_1)) {
    CopyAutogeneratedLODInfoFromPreviousLOD(this,iVar2);
  }
  return this_01;
}

// AllocateResourceForRendering @ 1485aa250

void __thiscall USkeletalMesh::AllocateResourceForRendering(USkeletalMesh *this)

{
  TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> *pTVar1;
  FSkeletalMeshRenderData *pFVar2;
  undefined4 uVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong local_18 [2];
  
  pFVar4 = ::operator_new(0x30);
  if (pFVar4 == (FSkeletalMeshRenderData *)0x0) {
    pFVar4 = (FSkeletalMeshRenderData *)0x0;
  }
  else {
    pFVar4 = FSkeletalMeshRenderData::FSkeletalMeshRenderData(pFVar4);
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  pTVar1 = &this->SkeletalMeshRenderData;
  if (pTVar1 != (TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> *)
                local_18) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    pFVar4 = (FSkeletalMeshRenderData *)0x0;
    if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
      FSkeletalMeshRenderData::~FSkeletalMeshRenderData(pFVar2);
      ::operator_delete(pFVar2,0x30);
    }
  }
  pFVar2 = pTVar1->Ptr;
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    (pFVar2->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
    (pFVar2->OwnerName).Number = uVar3;
  }
  if (pFVar4 == (FSkeletalMeshRenderData *)0x0) {
    return;
  }
  FSkeletalMeshRenderData::~FSkeletalMeshRenderData(pFVar4);
  ::operator_delete(pFVar4,0x30);
  return;
}

// AreAllFlagsIdentical @ 1485aba30

bool __thiscall
USkeletalMesh::AreAllFlagsIdentical
          (USkeletalMesh *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  if ((iVar8 != 0) && (uVar6 = 0, 0 < iVar8 + -1)) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (pFVar1[lVar7] != (param_1->AllocatorInstance).Data[lVar7 + 1]) {
        return false;
      }
      iVar8 = param_1->ArrayNum;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < iVar8 + -1);
  }
  return true;
}

// BeginDestroy @ 1485ac360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USkeletalMesh::BeginDestroy(USkeletalMesh *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FSkinWeightProfileManager *this_00;
  longlong lVar4;
  USkeleton *this_01;
  FSkeletalMeshRenderData *this_02;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0x6dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UStreamableRenderAsset::BeginDestroy((UStreamableRenderAsset *)this);
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  this_00 = FSkinWeightProfileManager::Get(pUVar3);
  if (this_00 != (FSkinWeightProfileManager *)0x0) {
    FSkinWeightProfileManager::CancelSkinWeightProfileRequest(this_00,(UObject *)this);
  }
  lVar4 = (**(code **)(this->_padding_ + 0x408))(this);
  if (lVar4 != 0) {
    this_01 = (USkeleton *)(**(code **)(this->_padding_ + 0x408))(this);
    USkeleton::RemoveLinkup(this_01,(USkinnedAsset *)this);
  }
  bVar2 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if (!bVar2) {
    this_02 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
    if ((this_02 != (FSkeletalMeshRenderData *)0x0) && (this_02->bInitialized != false)) {
      FSkeletalMeshRenderData::ReleaseResources(this_02);
      FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
      return;
    }
  }
  return;
}

// BeginPostLoadInternal @ 1485ac440

void __thiscall
USkeletalMesh::BeginPostLoadInternal(USkeletalMesh *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// CalcCumulativeLODSize @ 1485ac450

int __thiscall USkeletalMesh::CalcCumulativeLODSize(USkeletalMesh *this,int param_1)

{
  longlong lVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar7 = 0;
  iVar5 = (**(code **)(this->_padding_ + 0x3d0))();
  uVar9 = iVar5 - 1;
  lVar8 = (longlong)(int)uVar9;
  while( true ) {
    if (lVar8 < iVar5 - param_1) {
      return iVar7;
    }
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    pFVar2 = (this->SkeletalMeshRenderData).Ptr;
    uVar6 = 0;
    if ((int)uVar9 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar9 = uVar9 - 1;
    lVar1 = lVar8 * 8;
    lVar8 = lVar8 + -1;
    iVar7 = iVar7 + *(int *)(*(longlong *)
                              ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar1) + 0x528
                            );
  }
  pcVar3 = (code *)swi(3);
  iVar7 = (*pcVar3)();
  return iVar7;
}

// CalculateExtendedBounds @ 1485aca90

void __thiscall USkeletalMesh::CalculateExtendedBounds(USkeletalMesh *this)

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
  bool bVar12;
  FSkeletalMeshRenderData *this_00;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x10000000000,ReadOnly);
  dVar7 = (this->ImportedBounds).Origin.field0_0x0._s_0.X;
  dVar9 = (this->ImportedBounds).Origin.field0_0x0._s_0.Y;
  dVar10 = (this->ImportedBounds).Origin.field0_0x0._s_0.Z;
  dVar1 = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.X;
  dVar2 = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar3 = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Z;
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) &&
     (bVar12 = FSkeletalMeshRenderData::HasValidNaniteData(this_00), bVar12)) {
    lVar13 = (**(code **)(this->_padding_ + 0x398))(this);
    lVar13 = *(longlong *)(lVar13 + 0x10);
    dVar2 = (double)(float)*(undefined8 *)(lVar13 + 200);
    dVar3 = (double)(float)((ulonglong)*(undefined8 *)(lVar13 + 200) >> 0x20);
    dVar7 = (double)*(float *)(lVar13 + 0xb8);
    dVar9 = (double)*(float *)(lVar13 + 0xbc);
    dVar10 = (double)*(float *)(lVar13 + 0xc0);
    dVar1 = (double)*(float *)(lVar13 + 0xc4);
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000000,ReadOnly);
  dVar5 = (dVar7 - dVar1) - (this->NegativeBoundsExtension).field0_0x0._s_0.X;
  dVar4 = (dVar10 - dVar3) - (this->NegativeBoundsExtension).field0_0x0._s_0.Z;
  dVar6 = (dVar9 - dVar2) - (this->NegativeBoundsExtension).field0_0x0._s_0.Y;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000000,ReadOnly);
  dVar8 = dVar7 + dVar1 + (this->PositiveBoundsExtension).field0_0x0._s_0.X;
  dVar9 = dVar9 + dVar2 + (this->PositiveBoundsExtension).field0_0x0._s_0.Y;
  dVar10 = dVar10 + dVar3 + (this->PositiveBoundsExtension).field0_0x0._s_0.Z;
  dVar3 = dVar8 - dVar5;
  dVar7 = dVar9 - dVar6;
  dVar2 = dVar10 - dVar4;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000000,ReadWrite)
  ;
  dVar11 = __real_3fe0000000000000;
  dVar1 = dVar7 * __real_3fe0000000000000;
  dVar14 = dVar3 * __real_3fe0000000000000;
  dVar9 = (dVar9 + dVar6) * __real_3fe0000000000000;
  dVar10 = (dVar10 + dVar4) * __real_3fe0000000000000;
  (this->ExtendedBounds).Origin.field0_0x0._s_0.X = (dVar8 + dVar5) * __real_3fe0000000000000;
  (this->ExtendedBounds).Origin.field0_0x0._s_0.Y = dVar9;
  (this->ExtendedBounds).Origin.field0_0x0._s_0.Z = dVar10;
  (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.X = dVar14;
  (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y = dVar1;
  auVar15._0_8_ = dVar2 * dVar11;
  auVar15._8_8_ = 0;
  (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z = auVar15._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (dVar7 * dVar7 + dVar3 * dVar3 + dVar2 * dVar2) * __real_3fd0000000000000;
  auVar16 = sqrtpd(auVar15,auVar16);
  (this->ExtendedBounds).SphereRadius = auVar16._0_8_;
  return;
}

// CalculateInvRefMatrices @ 1485acd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USkeletalMesh::CalculateInvRefMatrices(USkeletalMesh *this)

{
  uint *puVar1;
  float *pfVar2;
  int *piVar3;
  code *pcVar4;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  uint uVar25;
  longlong lVar26;
  ForAnyElementType *pFVar27;
  TMatrix<double> *pTVar28;
  FReferenceSkeleton *this_00;
  longlong *plVar29;
  FScriptContainerElement *pFVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined1 auStackY_358 [32];
  longlong local_328;
  longlong local_320;
  longlong local_318;
  FName local_308;
  FString local_300;
  FString local_2f0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  lVar26 = (**(code **)(this->_padding_ + 800))();
  uVar36 = *(uint *)(lVar26 + 8);
  local_318 = (longlong)(int)uVar36;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000,ReadWrite);
  lVar26 = (**(code **)(this->_padding_ + 0x380))(this);
  if (*(uint *)(lVar26 + 8) != uVar36) {
    pFVar27 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x380))(this);
    if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
    }
    puVar1 = (uint *)((longlong)&pFVar27[1].Data + 4);
    uVar31 = 0;
    *(undefined4 *)&pFVar27[1].Data = 0;
    if (*puVar1 != uVar36) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar36,pFVar27,0,(int *)puVar1);
    }
    pFVar27 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x380))(this);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar36,pFVar27,(int *)(pFVar27 + 1),(int *)((longlong)&pFVar27[1].Data + 4)
              );
    piVar3 = &(this->CachedComposedRefPoseMatrices).ArrayNum;
    piVar32 = &(this->CachedComposedRefPoseMatrices).ArrayMax;
    *piVar3 = 0;
    if (*piVar32 != uVar36) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar36,&(this->CachedComposedRefPoseMatrices).AllocatorInstance,0,piVar32
                );
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar36,&(this->CachedComposedRefPoseMatrices).AllocatorInstance,piVar3,
               piVar32);
    uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar21 = __real_3e45798ee0000000;
    if (0 < (int)uVar36) {
      local_320 = 0;
      local_328 = 0;
      uVar34 = uVar31;
      do {
        piVar32 = &(this->CachedComposedRefPoseMatrices).ArrayNum;
        uVar33 = (uint)uVar34;
        pTVar28 = GetRefPoseMatrix(this,&local_258,uVar33);
        uVar35 = ~uVar33 >> 0x1f;
        dVar5 = pTVar28->M[0][0];
        dVar6 = pTVar28->M[0][1];
        dVar7 = pTVar28->M[0][2];
        dVar8 = pTVar28->M[0][3];
        dVar9 = pTVar28->M[1][0];
        dVar10 = pTVar28->M[1][1];
        dVar11 = pTVar28->M[1][2];
        dVar12 = pTVar28->M[1][3];
        dVar13 = pTVar28->M[2][0];
        dVar14 = pTVar28->M[2][1];
        dVar15 = pTVar28->M[2][2];
        dVar16 = pTVar28->M[2][3];
        dVar17 = pTVar28->M[3][0];
        dVar18 = pTVar28->M[3][1];
        dVar19 = pTVar28->M[3][2];
        dVar20 = pTVar28->M[3][3];
        uVar36 = 0;
        if ((int)uVar33 < *piVar32) {
          uVar36 = uVar35;
        }
        if ((uVar36 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar30 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
        *(double *)(pFVar30 + uVar31) = dVar5;
        *(double *)(pFVar30 + uVar31 + 8) = dVar6;
        *(double *)(pFVar30 + uVar31 + 0x10) = dVar7;
        *(double *)(pFVar30 + uVar31 + 0x10 + 8) = dVar8;
        *(double *)(pFVar30 + uVar31 + 0x20) = dVar9;
        *(double *)(pFVar30 + uVar31 + 0x20 + 8) = dVar10;
        *(double *)(pFVar30 + uVar31 + 0x30) = dVar11;
        *(double *)(pFVar30 + uVar31 + 0x30 + 8) = dVar12;
        *(double *)(pFVar30 + uVar31 + 0x40) = dVar13;
        *(double *)(pFVar30 + uVar31 + 0x40 + 8) = dVar14;
        *(double *)(pFVar30 + uVar31 + 0x50) = dVar15;
        *(double *)(pFVar30 + uVar31 + 0x50 + 8) = dVar16;
        *(double *)(pFVar30 + uVar31 + 0x60) = dVar17;
        *(double *)(pFVar30 + uVar31 + 0x60 + 8) = dVar18;
        *(double *)(pFVar30 + uVar31 + 0x70) = dVar19;
        *(double *)(pFVar30 + uVar31 + 0x70 + 8) = dVar20;
        if (0 < (int)uVar33) {
          this_00 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
          uVar25 = FReferenceSkeleton::GetParentIndexInternal
                             (this_00,uVar33,
                              (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)this_00);
          uVar36 = 0;
          if ((int)uVar33 < *piVar32) {
            uVar36 = uVar35;
          }
          if ((uVar36 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar30 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
          uVar36 = 0;
          if ((int)uVar25 < *piVar3) {
            uVar36 = ~uVar25 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          VectorMatrixMultiply
                    (&local_1d8,(TMatrix<double> *)(pFVar30 + (longlong)(int)uVar33 * 0x80),
                     (TMatrix<double> *)
                     ((this->CachedComposedRefPoseMatrices).AllocatorInstance.Data +
                     (longlong)(int)uVar25 * 0x80));
          dVar20 = local_1d8.M[3][3];
          dVar19 = local_1d8.M[3][2];
          dVar18 = local_1d8.M[3][1];
          dVar17 = local_1d8.M[3][0];
          dVar16 = local_1d8.M[2][3];
          dVar15 = local_1d8.M[2][2];
          dVar14 = local_1d8.M[2][1];
          dVar13 = local_1d8.M[2][0];
          dVar12 = local_1d8.M[1][3];
          dVar11 = local_1d8.M[1][2];
          dVar10 = local_1d8.M[1][1];
          dVar9 = local_1d8.M[1][0];
          dVar8 = local_1d8.M[0][3];
          dVar7 = local_1d8.M[0][2];
          dVar6 = local_1d8.M[0][1];
          dVar5 = local_1d8.M[0][0];
          uVar36 = 0;
          if ((int)uVar33 < (this->CachedComposedRefPoseMatrices).ArrayNum) {
            uVar36 = uVar35;
          }
          if ((uVar36 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar30 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
          *(double *)(pFVar30 + uVar31) = dVar5;
          *(double *)(pFVar30 + uVar31 + 8) = dVar6;
          *(double *)(pFVar30 + uVar31 + 0x10) = dVar7;
          *(double *)(pFVar30 + uVar31 + 0x10 + 8) = dVar8;
          *(double *)(pFVar30 + uVar31 + 0x20) = dVar9;
          *(double *)(pFVar30 + uVar31 + 0x20 + 8) = dVar10;
          *(double *)(pFVar30 + uVar31 + 0x30) = dVar11;
          *(double *)(pFVar30 + uVar31 + 0x30 + 8) = dVar12;
          *(double *)(pFVar30 + uVar31 + 0x40) = dVar13;
          *(double *)(pFVar30 + uVar31 + 0x40 + 8) = dVar14;
          *(double *)(pFVar30 + uVar31 + 0x50) = dVar15;
          *(double *)(pFVar30 + uVar31 + 0x50 + 8) = dVar16;
          *(double *)(pFVar30 + uVar31 + 0x60) = dVar17;
          *(double *)(pFVar30 + uVar31 + 0x60 + 8) = dVar18;
          *(double *)(pFVar30 + uVar31 + 0x70) = dVar19;
          *(double *)(pFVar30 + uVar31 + 0x70 + 8) = dVar20;
        }
        uVar36 = 0;
        if ((int)uVar33 < (this->CachedComposedRefPoseMatrices).ArrayNum) {
          uVar36 = uVar35;
        }
        if ((uVar36 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar30 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
        uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31) & uVar22;
        uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31) >> 0x20) & uVar23;
        if ((((((((double)CONCAT44(uVar35,uVar36) < dVar21 ||
                  (double)CONCAT44(uVar35,uVar36) == dVar21) &&
                (uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 8) & uVar22,
                uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 8) >> 0x20) & uVar23,
                (double)CONCAT44(uVar35,uVar36) < dVar21 ||
                (double)CONCAT44(uVar35,uVar36) == dVar21)) &&
               (uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x10) & uVar22,
               uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x10) >> 0x20) & uVar23
               , (double)CONCAT44(uVar35,uVar36) < dVar21 ||
                 (double)CONCAT44(uVar35,uVar36) == dVar21)) &&
              ((uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x20) & uVar22,
               uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x20) >> 0x20) & uVar23
               , (double)CONCAT44(uVar35,uVar36) < dVar21 ||
                 (double)CONCAT44(uVar35,uVar36) == dVar21 &&
               (uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x28) & uVar22,
               uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x28) >> 0x20) & uVar23
               , (double)CONCAT44(uVar35,uVar36) < dVar21 ||
                 (double)CONCAT44(uVar35,uVar36) == dVar21)))) &&
             ((uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x30) & uVar22,
              uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x30) >> 0x20) & uVar23,
              (double)CONCAT44(uVar35,uVar36) < dVar21 || (double)CONCAT44(uVar35,uVar36) == dVar21
              && ((uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x40) & uVar22,
                  uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x40) >> 0x20) &
                           uVar23,
                  (double)CONCAT44(uVar35,uVar36) < dVar21 ||
                  (double)CONCAT44(uVar35,uVar36) == dVar21 &&
                  (uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x48) & uVar22,
                  uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x48) >> 0x20) &
                           uVar23,
                  (double)CONCAT44(uVar35,uVar36) < dVar21 ||
                  (double)CONCAT44(uVar35,uVar36) == dVar21)))))) &&
            (uVar36 = (uint)*(undefined8 *)(pFVar30 + uVar31 + 0x50) & uVar22,
            uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + uVar31 + 0x50) >> 0x20) & uVar23,
            (double)CONCAT44(uVar35,uVar36) < dVar21 || (double)CONCAT44(uVar35,uVar36) == dVar21))
           && (2 < (byte)LogSkeletalMesh._0_1_)) {
          lVar26 = (**(code **)(this->_padding_ + 800))();
          uVar36 = 0;
          if ((int)uVar33 < *(int *)(lVar26 + 0x28)) {
            uVar36 = ~uVar33 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_308 = *(FName *)(local_328 + *(longlong *)(lVar26 + 0x20));
          ::FName::ToString(&local_308,&local_2f0);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_300,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
        }
        uVar36 = 0;
        if ((int)uVar33 < (this->CachedComposedRefPoseMatrices).ArrayNum) {
          uVar36 = ~uVar33 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar30 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data + uVar31;
        uVar36 = (uint)*(undefined8 *)&pFVar30->field_0x0 & uVar22;
        uVar35 = (uint)((ulonglong)*(undefined8 *)&pFVar30->field_0x0 >> 0x20) & uVar23;
        if (((dVar21 <= (double)CONCAT44(uVar35,uVar36) && (double)CONCAT44(uVar35,uVar36) != dVar21
             ) || (uVar36 = (uint)*(undefined8 *)(pFVar30 + 8) & uVar22,
                  uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 8) >> 0x20) & uVar23,
                  dVar21 <= (double)CONCAT44(uVar35,uVar36) &&
                  (double)CONCAT44(uVar35,uVar36) != dVar21)) ||
           (uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x10) & uVar22,
           uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x10) >> 0x20) & uVar23,
           dVar21 <= (double)CONCAT44(uVar35,uVar36) && (double)CONCAT44(uVar35,uVar36) != dVar21))
        {
LAB_1485ad46f:
          FMath::MatrixInverse(&local_158,(TMatrix<double> *)pFVar30);
          uVar37 = local_158.M[0][2]._0_4_;
          uVar38 = local_158.M[0][2]._4_4_;
          uVar39 = local_158.M[0][3]._0_4_;
          uVar40 = local_158.M[0][3]._4_4_;
          uVar41 = local_158.M[1][0]._0_4_;
          uVar42 = local_158.M[1][0]._4_4_;
          uVar43 = local_158.M[1][1]._0_4_;
          uVar44 = local_158.M[1][1]._4_4_;
          uVar45 = local_158.M[1][2]._0_4_;
          uVar46 = local_158.M[1][2]._4_4_;
          uVar47 = local_158.M[1][3]._0_4_;
          uVar48 = local_158.M[1][3]._4_4_;
          uVar49 = local_158.M[2][0]._0_4_;
          uVar50 = local_158.M[2][0]._4_4_;
          uVar51 = local_158.M[2][1]._0_4_;
          uVar52 = local_158.M[2][1]._4_4_;
          uVar53 = local_158.M[2][2]._0_4_;
          uVar54 = local_158.M[2][2]._4_4_;
          uVar55 = local_158.M[2][3]._0_4_;
          uVar56 = local_158.M[2][3]._4_4_;
          uVar57 = local_158.M[3][0]._0_4_;
          uVar58 = local_158.M[3][0]._4_4_;
          uVar59 = local_158.M[3][1]._0_4_;
          uVar60 = local_158.M[3][1]._4_4_;
          uVar61 = local_158.M[3][2]._0_4_;
          uVar62 = local_158.M[3][2]._4_4_;
          uVar63 = local_158.M[3][3]._0_4_;
          uVar64 = local_158.M[3][3]._4_4_;
          uVar65 = local_158.M[0][0]._0_4_;
          uVar66 = local_158.M[0][0]._4_4_;
          uVar67 = local_158.M[0][1]._0_4_;
          uVar68 = local_158.M[0][1]._4_4_;
        }
        else {
          uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x20) & uVar22;
          uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x20) >> 0x20) & uVar23;
          if (((dVar21 <= (double)CONCAT44(uVar35,uVar36) &&
                (double)CONCAT44(uVar35,uVar36) != dVar21) ||
              (uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x28) & uVar22,
              uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x28) >> 0x20) & uVar23,
              dVar21 <= (double)CONCAT44(uVar35,uVar36) && (double)CONCAT44(uVar35,uVar36) != dVar21
              )) || (uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x30) & uVar22,
                    uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x30) >> 0x20) & uVar23,
                    dVar21 <= (double)CONCAT44(uVar35,uVar36) &&
                    (double)CONCAT44(uVar35,uVar36) != dVar21)) goto LAB_1485ad46f;
          uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x40) & uVar22;
          uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x40) >> 0x20) & uVar23;
          if (((dVar21 <= (double)CONCAT44(uVar35,uVar36) &&
                (double)CONCAT44(uVar35,uVar36) != dVar21) ||
              (uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x48) & uVar22,
              uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x48) >> 0x20) & uVar23,
              dVar21 <= (double)CONCAT44(uVar35,uVar36) && (double)CONCAT44(uVar35,uVar36) != dVar21
              )) || (uVar36 = (uint)*(undefined8 *)(pFVar30 + 0x50) & uVar22,
                    uVar35 = (uint)((ulonglong)*(undefined8 *)(pFVar30 + 0x50) >> 0x20) & uVar23,
                    uVar37 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_,
                    uVar38 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_,
                    uVar39 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_,
                    uVar40 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_,
                    uVar41 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_,
                    uVar42 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                    uVar43 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_,
                    uVar44 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                    uVar45 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
                    uVar46 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
                    uVar47 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
                    uVar48 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
                    uVar49 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
                    uVar50 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
                    uVar51 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
                    uVar52 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
                    uVar53 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
                    uVar54 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
                    uVar55 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
                    uVar56 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
                    uVar57 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
                    uVar58 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                    uVar59 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
                    uVar60 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                    uVar61 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
                    uVar62 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
                    uVar63 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
                    uVar64 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
                    uVar65 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
                    uVar66 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
                    uVar67 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
                    uVar68 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
                    dVar21 <= (double)CONCAT44(uVar35,uVar36) &&
                    (double)CONCAT44(uVar35,uVar36) != dVar21)) goto LAB_1485ad46f;
        }
        local_2d8 = uVar65;
        uStack_2d4 = uVar66;
        uStack_2d0 = uVar67;
        uStack_2cc = uVar68;
        local_2c8 = uVar37;
        uStack_2c4 = uVar38;
        uStack_2c0 = uVar39;
        uStack_2bc = uVar40;
        local_2b8 = uVar41;
        uStack_2b4 = uVar42;
        uStack_2b0 = uVar43;
        uStack_2ac = uVar44;
        local_2a8 = uVar45;
        uStack_2a4 = uVar46;
        uStack_2a0 = uVar47;
        uStack_29c = uVar48;
        local_298 = uVar49;
        uStack_294 = uVar50;
        uStack_290 = uVar51;
        uStack_28c = uVar52;
        local_288 = uVar53;
        uStack_284 = uVar54;
        uStack_280 = uVar55;
        uStack_27c = uVar56;
        local_278 = uVar57;
        uStack_274 = uVar58;
        uStack_270 = uVar59;
        uStack_26c = uVar60;
        local_268 = uVar61;
        uStack_264 = uVar62;
        uStack_260 = uVar63;
        uStack_25c = uVar64;
        plVar29 = (longlong *)(**(code **)(this->_padding_ + 0x380))();
        uVar36 = 0;
        if ((int)uVar33 < (int)plVar29[1]) {
          uVar36 = ~uVar33 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar26 = *plVar29;
        local_328 = local_328 + 0xc;
        uVar34 = (ulonglong)(uVar33 + 1);
        uVar31 = uVar31 + 0x80;
        pfVar2 = (float *)(lVar26 + local_320);
        *pfVar2 = (float)(double)CONCAT44(uVar66,uVar65);
        pfVar2[1] = (float)(double)CONCAT44(uVar68,uVar67);
        pfVar2[2] = (float)(double)CONCAT44(uVar38,uVar37);
        pfVar2[3] = (float)(double)CONCAT44(uVar40,uVar39);
        pfVar2 = (float *)(lVar26 + 0x10 + local_320);
        *pfVar2 = (float)(double)CONCAT44(uVar42,uVar41);
        pfVar2[1] = (float)(double)CONCAT44(uVar44,uVar43);
        pfVar2[2] = (float)(double)CONCAT44(uVar46,uVar45);
        pfVar2[3] = (float)(double)CONCAT44(uVar48,uVar47);
        pfVar2 = (float *)(lVar26 + 0x20 + local_320);
        *pfVar2 = (float)(double)CONCAT44(uVar50,uVar49);
        pfVar2[1] = (float)(double)CONCAT44(uVar52,uVar51);
        pfVar2[2] = (float)(double)CONCAT44(uVar54,uVar53);
        pfVar2[3] = (float)(double)CONCAT44(uVar56,uVar55);
        pfVar2 = (float *)(lVar26 + 0x30 + local_320);
        *pfVar2 = (float)(double)CONCAT44(uVar58,uVar57);
        pfVar2[1] = (float)(double)CONCAT44(uVar60,uVar59);
        pfVar2[2] = (float)(double)CONCAT44(uVar62,uVar61);
        pfVar2[3] = (float)(double)CONCAT44(uVar64,uVar63);
        local_320 = local_320 + 0x40;
        local_318 = local_318 + -1;
      } while (local_318 != 0);
    }
  }
  return;
}

// CancelAllPendingStreamingActions @ 1485adae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl USkeletalMesh::CancelAllPendingStreamingActions(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<USkeletalMesh> local_28;
  
  FlushRenderingCommands();
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<USkeletalMesh>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UStreamableRenderAsset::CancelPendingStreamingRequest
              (*(UStreamableRenderAsset **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8)
              );
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  FlushRenderingCommands();
  return;
}

// ComputeActiveClothingAssets @ 1485af040

bool __thiscall USkeletalMesh::ComputeActiveClothingAssets(USkeletalMesh *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x398))();
  if (plVar9 != (longlong *)0x0) {
    plVar12 = (longlong *)*plVar9;
    lVar5 = plVar9[1];
    plVar1 = plVar12 + (int)lVar5;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar12 == plVar1) break;
      lVar3 = *plVar12;
      uVar11 = 0;
      lVar14 = 0;
      iVar2 = *(int *)(lVar3 + 0x18);
      if (0 < (longlong)iVar2) {
        lVar13 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < *(int *)(lVar3 + 0x18)) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          lVar10 = *(longlong *)(lVar3 + 0x10) + lVar13;
          if (((*(int *)(lVar10 + 0x60) != 0 || *(int *)(lVar10 + 0x5c) != 0) ||
              *(int *)(lVar10 + 0x58) != 0) || *(int *)(lVar10 + 0x54) != 0) {
            return true;
          }
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x118;
        } while (lVar14 < iVar2);
      }
      plVar12 = plVar12 + 1;
    }
  }
  return false;
}

// ContainsPhysicsTriMeshData @ 1485afa90

bool __thiscall USkeletalMesh::ContainsPhysicsTriMeshData(USkeletalMesh *this,bool param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)&this[-1].MorphTargetIndexMap.field_0x38,0x1000000000,ReadOnly);
  return (bool)(*(byte *)((longlong)&(this->PositiveBoundsExtension).field0_0x0 + 0x15) >> 4 & 1);
}

// CopyAutogeneratedLODInfoFromPreviousLOD @ 1485afad0

void __thiscall
USkeletalMesh::CopyAutogeneratedLODInfoFromPreviousLOD(USkeletalMesh *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  
  if (param_1 != 0) {
    cVar3 = (**(code **)(this->_padding_ + 0x440))();
    if (cVar3 == '\0') {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3817078023119706244>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x1884,"IsValidLODIndex(InLODIndex)");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      pfVar5 = (float *)(**(code **)(this->_padding_ + 0x330))(this,param_1);
      iVar8 = param_1 + -1;
      pfVar6 = (float *)(**(code **)(this->_padding_ + 0x330))(this,iVar8);
      *pfVar5 = *pfVar6 * __real_3f000000;
      pfVar5[1] = pfVar6[1];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(pfVar6 + 0x2a) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pfVar6 + 0x2a));
      }
      *(undefined8 *)(pfVar5 + 0x2a) = *(undefined8 *)(pfVar6 + 0x2a);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(pfVar6 + 0x2c) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pfVar6 + 0x2c));
      }
      *(undefined8 *)(pfVar5 + 0x2c) = *(undefined8 *)(pfVar6 + 0x2c);
      TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)(pfVar5 + 0x1c),
                 (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)(pfVar6 + 0x1c));
      TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)(pfVar5 + 0x20),
                 (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)(pfVar6 + 0x20));
      TArray<FSectionReference,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FSectionReference,TSizedDefaultAllocator<32>_> *)(pfVar5 + 0x24),
                 (TArray<FSectionReference,TSizedDefaultAllocator<32>_> *)(pfVar6 + 0x24));
      if (-1 < iVar8) {
        while (lVar7 = (**(code **)(this->_padding_ + 0x330))(this,iVar8),
              (*(byte *)(lVar7 + 0xd0) & 1) == 0) {
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) {
            return;
          }
        }
        uVar2 = *(undefined8 *)(lVar7 + 0x38);
        *(undefined8 *)(pfVar5 + 0xc) = *(undefined8 *)(lVar7 + 0x30);
        *(undefined8 *)(pfVar5 + 0xe) = uVar2;
        uVar2 = *(undefined8 *)(lVar7 + 0x48);
        *(undefined8 *)(pfVar5 + 0x10) = *(undefined8 *)(lVar7 + 0x40);
        *(undefined8 *)(pfVar5 + 0x12) = uVar2;
        uVar2 = *(undefined8 *)(lVar7 + 0x58);
        *(undefined8 *)(pfVar5 + 0x14) = *(undefined8 *)(lVar7 + 0x50);
        *(undefined8 *)(pfVar5 + 0x16) = uVar2;
        *(undefined8 *)(pfVar5 + 0x18) = *(undefined8 *)(lVar7 + 0x60);
        pfVar5[0x1a] = *(float *)(lVar7 + 0x68);
        fVar9 = pfVar5[0xd] * __real_3f000000;
        if (__real_3f800000 <= pfVar5[0xd] * __real_3f000000) {
          fVar9 = __real_3f800000;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        pfVar5[0xd] = fVar9;
        fVar9 = pfVar5[0x11] * __real_3fc00000;
        if (__real_3f800000 <= pfVar5[0x11] * __real_3fc00000) {
          fVar9 = __real_3f800000;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        pfVar5[0x11] = fVar9;
      }
    }
  }
  return;
}

// CreateBodySetup @ 1485afd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USkeletalMesh::CreateBodySetup(USkeletalMesh *this)

{
  UClass *pUVar1;
  UBodySetup *this_00;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x2000000000,ReadWrite);
  if ((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UBodySetup_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    this_00 = (UBodySetup *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar2 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar2 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    this_00->bSharedCookedData = '\x01';
    UObjectBaseUtility::AddToCluster((UObjectBaseUtility *)this_00,(UObjectBaseUtility *)this,false)
    ;
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x2000000000,ReadWrite);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->BodySetup).field0_0x0.DebugPtr = this_00;
  }
  return;
}

// DebugVerifySkeletalMeshLOD @ 1485b0d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USkeletalMesh::DebugVerifySkeletalMeshLOD(USkeletalMesh *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  FString local_38 [3];
  
  iVar2 = (**(code **)(this->_padding_ + 0x3d0))();
  fVar1 = __real_3dcccccd;
  if (1 < iVar2) {
    iVar4 = 1;
    do {
      pfVar3 = (float *)(**(code **)(this->_padding_ + 0x330))(this,iVar4);
      if ((*pfVar3 <= fVar1) && (2 < (byte)LogSkeletalMesh._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_38,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
    return;
  }
  if (2 < (byte)LogSkeletalMesh._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_38,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DoesMipDataExist @ 1485b1340

bool __thiscall USkeletalMesh::DoesMipDataExist(USkeletalMesh *this,int param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  if ((this->SkeletalMeshRenderData).Ptr != (FSkeletalMeshRenderData *)0x0) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    if ((-1 < param_1) &&
       (param_1 < (((this->SkeletalMeshRenderData).Ptr)->LODRenderData).Array.ArrayNum)) {
      USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
      pFVar1 = (this->SkeletalMeshRenderData).Ptr;
      uVar5 = 0;
      if (param_1 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      bVar3 = FBulkData::DoesExist
                        ((FBulkData *)
                         (*(longlong *)
                           ((pFVar1->LODRenderData).Array.AllocatorInstance.Data +
                           (longlong)param_1 * 8) + 0x630));
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// ExecutePostLoadInternal @ 1485bab70

void __thiscall
USkeletalMesh::ExecutePostLoadInternal(USkeletalMesh *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// FindMorphTarget @ 1485bdfc0

UMorphTarget * __thiscall USkeletalMesh::FindMorphTarget(USkeletalMesh *this,FName param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  longlong *plVar6;
  UMorphTarget *pUVar7;
  
  if (param_1 != (FName)0x0) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x4000000000,ReadOnly);
    puVar5 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&this->MorphTargetIndexMap,param_1);
    if (puVar5 != (uint *)0x0) {
      plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x450))(this);
      uVar1 = *puVar5;
      uVar4 = 0;
      if ((int)uVar1 < (int)plVar6[1]) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar7 = (UMorphTarget *)(*pcVar2)();
          return pUVar7;
        }
      }
      return *(UMorphTarget **)(*plVar6 + (longlong)(int)uVar1 * 8);
    }
  }
  return (UMorphTarget *)0x0;
}

// FindMorphTargetAndIndex @ 1485be090

UMorphTarget * __thiscall
USkeletalMesh::FindMorphTargetAndIndex(USkeletalMesh *this,FName param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  longlong *plVar5;
  UMorphTarget *pUVar6;
  uint uVar7;
  
  *param_2 = -1;
  if (param_1 != (FName)0x0) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x4000000000,ReadOnly);
    puVar4 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&this->MorphTargetIndexMap,param_1);
    if (puVar4 != (uint *)0x0) {
      *param_2 = *puVar4;
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x450))();
      uVar1 = *puVar4;
      uVar7 = 0;
      if ((int)uVar1 < (int)plVar5[1]) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UMorphTarget *)(*pcVar2)();
          return pUVar6;
        }
      }
      return *(UMorphTarget **)(*plVar5 + (longlong)(int)uVar1 * 8);
    }
  }
  return (UMorphTarget *)0x0;
}

// FindSocket @ 1485c1ba0

USkeletalMeshSocket * __thiscall USkeletalMesh::FindSocket(USkeletalMesh *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshSocket *pUVar3;
  FSocketInfo *pFVar4;
  
  if (param_1 != (FName)0x0) {
    if (((uint)this->_padding_ >> 0xc & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyFlags(RF_NeedPostLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x139f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (USkeletalMeshSocket *)(*pcVar1)();
        return pUVar3;
      }
    }
    pFVar4 = TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
             ::Find((TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
                     *)&this->SocketMap,param_1);
    if (pFVar4 != (FSocketInfo *)0x0) {
      return pFVar4->Socket;
    }
  }
  return (USkeletalMeshSocket *)0x0;
}

// FindSocketAndIndex @ 1485c1c20

USkeletalMeshSocket * __thiscall
USkeletalMesh::FindSocketAndIndex(USkeletalMesh *this,FName param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshSocket *pUVar3;
  FSocketInfo *pFVar4;
  
  *param_2 = -1;
  if (param_1 != (FName)0x0) {
    if (((uint)this->_padding_ >> 0xc & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyFlags(RF_NeedPostLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x139f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (USkeletalMeshSocket *)(*pcVar1)();
        return pUVar3;
      }
    }
    pFVar4 = TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
             ::Find((TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
                     *)&this->SocketMap,param_1);
    if (pFVar4 != (FSocketInfo *)0x0) {
      *param_2 = pFVar4->SocketIndex;
      return pFVar4->Socket;
    }
  }
  return (USkeletalMeshSocket *)0x0;
}

// FindSocketInfo @ 1485c1cc0

USkeletalMeshSocket * __thiscall
USkeletalMesh::FindSocketInfo
          (USkeletalMesh *this,FName param_1,TTransform<double> *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  USkeletalMeshSocket *pUVar4;
  FSocketInfo *pFVar5;
  
  *param_4 = -1;
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *param_3 = -1;
  if (param_1 != (FName)0x0) {
    if ((((uint)this->_padding_ >> 0xc & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAnyFlags(RF_NeedPostLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                           ,0x13d1,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USkeletalMeshSocket *)(*pcVar1)();
      return pUVar4;
    }
    pFVar5 = TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
             ::Find((TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
                     *)&this->SocketMap,param_1);
    if (pFVar5 != (FSocketInfo *)0x0) {
      dVar2 = (pFVar5->SocketLocalTransform).Rotation.XY.m128d_f64[1];
      (param_2->Rotation).XY.m128d_f64[0] = (pFVar5->SocketLocalTransform).Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pFVar5->SocketLocalTransform).Rotation.ZW.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = (pFVar5->SocketLocalTransform).Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pFVar5->SocketLocalTransform).Translation.XY.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] =
           (pFVar5->SocketLocalTransform).Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pFVar5->SocketLocalTransform).Translation.ZW.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] =
           (pFVar5->SocketLocalTransform).Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pFVar5->SocketLocalTransform).Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = (pFVar5->SocketLocalTransform).Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = (pFVar5->SocketLocalTransform).Scale3D.ZW.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = (pFVar5->SocketLocalTransform).Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar2;
      *param_4 = pFVar5->SocketIndex;
      *param_3 = pFVar5->SocketBoneIndex;
      return pFVar5->Socket;
    }
  }
  return (USkeletalMeshSocket *)0x0;
}

// FinishPostLoadInternal @ 1485c20c0

void __thiscall
USkeletalMesh::FinishPostLoadInternal(USkeletalMesh *this,FSkinnedAssetPostLoadContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4165,"USkeletalMesh::FinishPostLoadInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
               ,0x1045);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4165);
  }
  InitMorphTargets(this,false);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar9 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar9,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    InitResources(this);
  }
  else {
    USkinnedAsset::UpdateUVChannelData((USkinnedAsset *)this,false);
  }
  CalculateInvRefMatrices(this);
  CalculateExtendedBounds(this);
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x398))(this);
  if (plVar8 != (longlong *)0x0) {
    plVar15 = (longlong *)*plVar8;
    lVar5 = plVar8[1];
    plVar1 = plVar15 + (int)lVar5;
    while( true ) {
      if ((int)plVar8[1] != (int)lVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar15 == plVar1) break;
      lVar3 = *plVar15;
      uVar14 = 0;
      lVar12 = 0;
      iVar2 = *(int *)(lVar3 + 0x18);
      if (0 < (longlong)iVar2) {
        lVar11 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar3 + 0x18)) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar10 = *(longlong *)(lVar3 + 0x10) + lVar11;
          if (((*(int *)(lVar10 + 0x60) != 0 || *(int *)(lVar10 + 0x5c) != 0) ||
              *(int *)(lVar10 + 0x58) != 0) || *(int *)(lVar10 + 0x54) != 0) {
            bVar13 = 8;
            goto LAB_1485c22db;
          }
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x118;
        } while (lVar12 < iVar2);
      }
      plVar15 = plVar15 + 1;
    }
  }
  bVar13 = 0;
LAB_1485c22db:
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80,ReadWrite);
  this->bHasActiveClothingAssets = '\0';
  this->field_0x28d = this->field_0x28d | bVar13;
  RebuildSocketMap(this);
  USkinnedAsset::ReleaseAsyncProperty((USkinnedAsset *)this,0xffffffffffffffff,ReadWrite);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FlushRenderState @ 1485c2a80

void __thiscall USkeletalMesh::FlushRenderState(USkeletalMesh *this)

{
  FSkeletalMeshRenderData *this_00;
  
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))();
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
    FSkeletalMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  }
  FRenderCommandFence::Wait(&this->ReleaseResourcesFence,false);
  return;
}

// GetActiveSocketList @ 1485c2fa0

TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetActiveSocketList
          (USkeletalMesh *this,
          TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong local_38 [2];
  
  iVar12 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (this->Sockets).ArrayNum;
  pFVar2 = (this->Sockets).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&__return_storage_ptr__->AllocatorInstance,iVar8,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,(longlong)iVar8 << 3);
  }
  lVar9 = (**(code **)(this->_padding_ + 0x400))(this);
  if (lVar9 != 0) {
    lVar9 = (**(code **)(this->_padding_ + 0x400))(this);
    for (; (-1 < iVar12 && (iVar12 < *(int *)(lVar9 + 0x1b0))); iVar12 = iVar12 + 1) {
      if ((iVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      uVar11 = 0;
      lVar3 = *(longlong *)(*(longlong *)(lVar9 + 0x1a8) + (longlong)iVar12 * 8);
      local_38[0] = lVar3;
      if (0 < (this->Sockets).ArrayNum) {
        lVar13 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar11 < (this->Sockets).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          lVar4 = *(longlong *)((this->Sockets).AllocatorInstance.Data + lVar13);
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) == *(longlong *)(lVar3 + 0x28)))
          goto LAB_1485c31d3;
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 8;
        } while ((int)uVar11 < (this->Sockets).ArrayNum);
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_38[0];
LAB_1485c31d3:
    }
  }
  return __return_storage_ptr__;
}

// GetAllSourceModels @ 1485c3210

TArrayView<FSkeletalMeshSourceModel,int> * __thiscall
USkeletalMesh::GetAllSourceModels
          (USkeletalMesh *this,TArrayView<FSkeletalMeshSourceModel,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSkeletalMeshSourceModel,int> *pTVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  iVar1 = (this->SourceModels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FSkeletalMeshSourceModel *)(this->SourceModels).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FSkeletalMeshSourceModel,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetAllSourceModels @ 1485c3290

TArrayView<FSkeletalMeshSourceModel_const_,int> * __thiscall
USkeletalMesh::GetAllSourceModels
          (USkeletalMesh *this,
          TArrayView<FSkeletalMeshSourceModel_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSkeletalMeshSourceModel_const_,int> *pTVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  iVar1 = (this->SourceModels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FSkeletalMeshSourceModel *)(this->SourceModels).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FSkeletalMeshSourceModel_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetAssetRegistryTags @ 1485c3310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USkeletalMesh::GetAssetRegistryTags
          (USkeletalMesh *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  USkeletalMesh *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(USkeletalMesh **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(USkeletalMesh **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(USkeletalMesh **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1485c3320

void __thiscall
USkeletalMesh::GetAssetRegistryTags(USkeletalMesh *this,FAssetRegistryTagsContext param_1)

{
  FSkeletalMeshLODRenderData *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FSkeletalMeshRenderData *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FAssetRegistryTagsContext FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FName local_res8;
  FString local_58;
  FAssetRegistryTag local_48;
  
  puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x398))();
  iVar2 = 0;
  uVar11 = 0;
  if ((puVar4 != (undefined8 *)0x0) && (iVar2 = 0, uVar11 = 0, 0 < *(int *)(puVar4 + 1))) {
    this_00 = *(FSkeletalMeshLODRenderData **)*puVar4;
    iVar2 = FSkeletalMeshLODRenderData::GetTotalFaces(this_00);
    uVar11 = (this_00->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  }
  iVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
  pFVar5 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
  iVar10 = 0;
  if (pFVar5 != (FSkeletalMeshRenderData *)0x0) {
    bVar1 = FSkeletalMeshRenderData::HasValidNaniteData(pFVar5);
    iVar10 = 0;
    if (bVar1) {
      lVar6 = (**(code **)(this->_padding_ + 0x398))(this);
      if (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8)) {
        iVar10 = *(int *)(*(longlong *)(lVar6 + 0x10) + 0xe4);
      }
    }
  }
  pFVar5 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
  iVar9 = 0;
  if (pFVar5 != (FSkeletalMeshRenderData *)0x0) {
    bVar1 = FSkeletalMeshRenderData::HasValidNaniteData(pFVar5);
    iVar9 = 0;
    if (bVar1) {
      lVar6 = (**(code **)(this->_padding_ + 0x398))(this);
      if (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8)) {
        iVar9 = *(int *)(*(longlong *)(lVar6 + 0x10) + 0xe8);
      }
    }
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,iVar10);
  pFVar7 = ::FName::FName(&local_res8,"NaniteTriangles");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,iVar9);
  pFVar7 = ::FName::FName(&local_res8,"NaniteVertices");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,uVar11);
  pFVar7 = ::FName::FName(&local_res8,"Vertices");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,iVar2);
  pFVar7 = ::FName::FName(&local_res8,"Triangles");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,iVar3);
  pFVar7 = ::FName::FName(&local_res8,"LODs");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  lVar6 = (**(code **)(this->_padding_ + 0x318))(this);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,*(int *)(lVar6 + 8));
  pFVar7 = ::FName::FName(&local_res8,"Bones");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  lVar6 = (**(code **)(this->_padding_ + 0x450))(this);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,*(int *)(lVar6 + 8));
  pFVar7 = ::FName::FName(&local_res8,"MorphTargets");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x200000,ReadOnly);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,(this->SkinWeightProfiles).ArrayNum);
  pFVar7 = ::FName::FName(&local_res8,"SkinWeightProfiles");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%llu");
  pFVar7 = ::FName::FName(&local_res8,"EstTotalCompressedSize");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 8;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%llu");
  pFVar7 = ::FName::FName(&local_res8,"EstNaniteCompressedSize");
  local_48.Name = *pFVar7;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 8;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar8);
  return;
}

// GetAssetUserDataArray @ 1485c38a0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetAssetUserDataArray(USkeletalMesh *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)
         &(this->RefSkeleton).FinalNameToIndexMap.field_0x48;
}

// GetAssetUserDataOfClass @ 1485c38b0

UAssetUserData * __thiscall
USkeletalMesh::GetAssetUserDataOfClass(USkeletalMesh *this,TSubclassOf<UAssetUserData> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  uVar8 = 0;
  iVar9 = (int)plVar4[1];
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar9) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar1)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar10 + *plVar4);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1485c3966;
LAB_1485c3994:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1485c3994;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1485c3966:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1485c3994;
          iVar9 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1485c3994;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      iVar9 = (int)plVar4[1];
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
  }
  return (UAssetUserData *)0x0;
}

// GetAsyncPropertyName @ 1485c39f0

FString * __thiscall
USkeletalMesh::GetAsyncPropertyName
          (USkeletalMesh *this,FString *__return_storage_ptr__,ulong64 param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties,(UObject *)pUVar1,
                       L"ESkeletalMeshAsyncProperties");
  }
  UEnum::GetValueOrBitfieldAsString
            (Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton,
             __return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetBakePose @ 1485c3a50

UAnimSequence * __thiscall USkeletalMesh::GetBakePose(USkeletalMesh *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_00000014;
  
  lVar1 = (**(code **)(this->_padding_ + 0x328))(this,CONCAT44(in_register_00000014,param_1));
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      lVar2 = (**(code **)(this->_padding_ + 0x400))(this);
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + 0x38);
        lVar3 = (**(code **)(this->_padding_ + 0x400))(this);
        if (lVar3 == lVar2) {
          return *(UAnimSequence **)(lVar1 + 0xb0);
        }
      }
    }
    if (*(longlong *)(lVar1 + 0xa8) != 0) {
      lVar2 = (**(code **)(this->_padding_ + 0x400))(this);
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xa8) + 0x38);
        lVar3 = (**(code **)(this->_padding_ + 0x400))(this);
        if (lVar3 == lVar2) {
          return *(UAnimSequence **)(lVar1 + 0xa8);
        }
      }
    }
  }
  return (UAnimSequence *)0x0;
}

// GetBounds @ 1485c3b30

TBoxSphereBounds<double,double> * __thiscall
USkeletalMesh::GetBounds
          (USkeletalMesh *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000000,ReadOnly);
  dVar1 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Z;
  dVar3 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (this->ExtendedBounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar1 = (this->ExtendedBounds).SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// GetClothingAsset @ 1485c3ba0

UClothingAssetBase * __thiscall USkeletalMesh::GetClothingAsset(USkeletalMesh *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  UClothingAssetBase *pUVar2;
  FScriptContainerElement *pFVar3;
  
  if (((param_1->B == 0 && param_1->C == 0) && param_1->A == 0) && param_1->D == 0) {
    return (UClothingAssetBase *)0x0;
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x20,ReadOnly);
  pFVar3 = (this->MeshClothingAssets).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->MeshClothingAssets).ArrayNum * 8;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (UClothingAssetBase *)0x0;
    }
    pUVar2 = *(UClothingAssetBase **)pFVar3;
    if ((pUVar2 != (UClothingAssetBase *)0x0) &&
       ((((pUVar2->AssetGuid).D == param_1->D && (pUVar2->AssetGuid).A == param_1->A) &&
        (pUVar2->AssetGuid).C == param_1->C) && (pUVar2->AssetGuid).B == param_1->B)) break;
    pFVar3 = pFVar3 + 8;
  }
  return pUVar2;
}

// GetClothingAssetIndex @ 1485c3c40

int __thiscall USkeletalMesh::GetClothingAssetIndex(USkeletalMesh *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x20,ReadOnly);
  iVar5 = (this->MeshClothingAssets).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->MeshClothingAssets).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(longlong *)((this->MeshClothingAssets).AllocatorInstance.Data + lVar7 * 8) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->MeshClothingAssets).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        lVar1 = *(longlong *)((this->MeshClothingAssets).AllocatorInstance.Data + lVar7 * 8);
        if (((*(uint *)(lVar1 + 0x34) == param_1->D && *(uint *)(lVar1 + 0x30) == param_1->C) &&
            *(uint *)(lVar1 + 0x2c) == param_1->B) && *(uint *)(lVar1 + 0x28) == param_1->A) {
          return uVar6;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  return -1;
}

// GetClothingAssetIndex @ 1485c3da0

int __thiscall USkeletalMesh::GetClothingAssetIndex(USkeletalMesh *this,UClothingAssetBase *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1 == (UClothingAssetBase *)0x0) {
    return -1;
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x20,ReadOnly);
  iVar5 = (this->MeshClothingAssets).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->MeshClothingAssets).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(longlong *)((this->MeshClothingAssets).AllocatorInstance.Data + lVar7 * 8) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->MeshClothingAssets).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        lVar1 = *(longlong *)((this->MeshClothingAssets).AllocatorInstance.Data + lVar7 * 8);
        if (((*(uint *)(lVar1 + 0x34) == (param_1->AssetGuid).D &&
             *(uint *)(lVar1 + 0x30) == (param_1->AssetGuid).C) &&
            *(uint *)(lVar1 + 0x2c) == (param_1->AssetGuid).B) &&
            (param_1->AssetGuid).A == *(uint *)(lVar1 + 0x28)) {
          return uVar6;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  return -1;
}

// GetClothingAssetsInUse @ 1485c3f10

void __thiscall
USkeletalMesh::GetClothingAssetsInUse
          (USkeletalMesh *this,TArray<UClothingAssetBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  UClothingAssetBase *local_res10;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x398))(this);
  if (plVar8 != (longlong *)0x0) {
    plVar14 = (longlong *)*plVar8;
    lVar5 = plVar8[1];
    plVar1 = plVar14 + (int)lVar5;
    while( true ) {
      if ((int)plVar8[1] != (int)lVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar14 == plVar1) break;
      lVar3 = *plVar14;
      uVar13 = 0;
      lVar11 = (longlong)*(int *)(lVar3 + 0x18);
      if (0 < lVar11) {
        lVar12 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar13 < *(int *)(lVar3 + 0x18)) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar10 = *(longlong *)(lVar3 + 0x10) + lVar12;
          if (((*(int *)(lVar10 + 0x60) != 0 || *(int *)(lVar10 + 0x5c) != 0) ||
              *(int *)(lVar10 + 0x58) != 0) || *(int *)(lVar10 + 0x54) != 0) {
            USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
                      ((USkinnedAsset *)this,0x20,ReadOnly);
            pFVar9 = (this->MeshClothingAssets).AllocatorInstance.Data;
            pFVar2 = pFVar9 + (longlong)(this->MeshClothingAssets).ArrayNum * 8;
            for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
              local_res10 = *(UClothingAssetBase **)pFVar9;
              if ((local_res10 != (UClothingAssetBase *)0x0) &&
                 ((((local_res10->AssetGuid).D == *(uint *)(lVar10 + 0x60) &&
                   (local_res10->AssetGuid).C == *(uint *)(lVar10 + 0x5c)) &&
                  (local_res10->AssetGuid).B == *(uint *)(lVar10 + 0x58)) &&
                  (local_res10->AssetGuid).A == *(uint *)(lVar10 + 0x54))) {
                TArray<UClothingAssetBase_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<UClothingAssetBase_*_const_&>(param_1,&local_res10);
                goto LAB_1485c40d1;
              }
            }
            local_res10 = (UClothingAssetBase *)0x0;
          }
LAB_1485c40d1:
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x118;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      plVar14 = plVar14 + 1;
    }
  }
  return;
}

// GetComposedRefPoseMatrix @ 1485c4280

TMatrix<double> * __thiscall
USkeletalMesh::GetComposedRefPoseMatrix
          (USkeletalMesh *this,TMatrix<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TMatrix<double> *pTVar9;
  longlong lVar10;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000,ReadOnly);
  uVar8 = 0;
  if (param_1 < (this->CachedComposedRefPoseMatrices).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TMatrix<double> *)(*pcVar2)();
      return pTVar9;
    }
  }
  pFVar1 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
  lVar10 = (longlong)param_1 * 0x80;
  dVar3 = *(double *)(pFVar1 + lVar10 + 8);
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x10);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x10 + 8);
  __return_storage_ptr__->M[0][0] = *(double *)(pFVar1 + lVar10);
  __return_storage_ptr__->M[0][1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar10 + 0x20);
  dVar6 = *(double *)(pFVar1 + lVar10 + 0x20 + 8);
  __return_storage_ptr__->M[0][2] = dVar4;
  __return_storage_ptr__->M[0][3] = dVar5;
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x30);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x30 + 8);
  __return_storage_ptr__->M[1][0] = dVar3;
  __return_storage_ptr__->M[1][1] = dVar6;
  dVar3 = *(double *)(pFVar1 + lVar10 + 0x40);
  dVar6 = *(double *)(pFVar1 + lVar10 + 0x40 + 8);
  __return_storage_ptr__->M[1][2] = dVar4;
  __return_storage_ptr__->M[1][3] = dVar5;
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x50);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x50 + 8);
  __return_storage_ptr__->M[2][0] = dVar3;
  __return_storage_ptr__->M[2][1] = dVar6;
  dVar3 = *(double *)(pFVar1 + lVar10 + 0x60);
  dVar6 = *(double *)(pFVar1 + lVar10 + 0x60 + 8);
  __return_storage_ptr__->M[2][2] = dVar4;
  __return_storage_ptr__->M[2][3] = dVar5;
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x70);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x70 + 8);
  __return_storage_ptr__->M[3][0] = dVar3;
  __return_storage_ptr__->M[3][1] = dVar6;
  __return_storage_ptr__->M[3][2] = dVar4;
  __return_storage_ptr__->M[3][3] = dVar5;
  return __return_storage_ptr__;
}

// GetComposedRefPoseMatrix @ 1485c4370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
USkeletalMesh::GetComposedRefPoseMatrix
          (USkeletalMesh *this,TMatrix<double> *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  TMatrix<double> *pTVar4;
  int iVar5;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_218 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_210 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_1f8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_1f0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_208 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_200 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_1d8 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_1d0 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_1e8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_1e0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_1b8 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
                               UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_);
  uStack_1b0 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
                                UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_);
  local_228 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_;
  uStack_224 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_;
  uStack_220 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
  uStack_21c = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
  local_1c8 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                               UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_);
  uStack_1c0 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                                UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_);
  if (param_1 != (FName)0x0) {
    lVar1 = (**(code **)(this->_padding_ + 0x318))();
    iVar5 = -1;
    piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)(lVar1 + 0x90),param_1);
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
    }
    if (iVar5 != -1) {
      (**(code **)(this->_padding_ + 0x350))(this,__return_storage_ptr__,iVar5);
      return __return_storage_ptr__;
    }
    lVar1 = (**(code **)(this->_padding_ + 0x3f0))(this,param_1);
    if (lVar1 != 0) {
      lVar3 = (**(code **)(this->_padding_ + 0x318))(this);
      if (((*(FName *)(lVar1 + 0x30) != (FName)0x0) &&
          (piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)(lVar3 + 0x90),*(FName *)(lVar1 + 0x30)), piVar2 != (int *)0x0)) &&
         (iVar5 = *piVar2, iVar5 != -1)) {
        UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
                  ((TRotationTranslationMatrix<double> *)&local_128,
                   (TRotator<double> *)(lVar1 + 0x50),(TVector<double> *)(lVar1 + 0x38));
        pTVar4 = (TMatrix<double> *)(**(code **)(this->_padding_ + 0x350))(this,local_a8,iVar5);
        VectorMatrixMultiply(&local_1a8,&local_128,pTVar4);
        local_218 = local_1a8.M[0][2];
        dStack_210 = local_1a8.M[0][3];
        local_1f8 = local_1a8.M[1][2];
        dStack_1f0 = local_1a8.M[1][3];
        local_208 = local_1a8.M[1][0];
        dStack_200 = local_1a8.M[1][1];
        local_1d8 = local_1a8.M[2][2];
        dStack_1d0 = local_1a8.M[2][3];
        local_1e8 = local_1a8.M[2][0];
        dStack_1e0 = local_1a8.M[2][1];
        local_1b8 = local_1a8.M[3][2];
        uStack_1b0 = local_1a8.M[3][3];
        local_1c8 = local_1a8.M[3][0];
        uStack_1c0 = local_1a8.M[3][1];
        local_228 = local_1a8.M[0][0]._0_4_;
        uStack_224 = local_1a8.M[0][0]._4_4_;
        uStack_220 = local_1a8.M[0][1]._0_4_;
        uStack_21c = local_1a8.M[0][1]._4_4_;
      }
    }
  }
  *(undefined4 *)__return_storage_ptr__->M[0] = local_228;
  *(undefined4 *)((longlong)__return_storage_ptr__->M[0] + 4) = uStack_224;
  *(undefined4 *)(__return_storage_ptr__->M[0] + 1) = uStack_220;
  *(undefined4 *)((longlong)__return_storage_ptr__->M[0] + 0xc) = uStack_21c;
  __return_storage_ptr__->M[0][2] = local_218;
  __return_storage_ptr__->M[0][3] = dStack_210;
  __return_storage_ptr__->M[1][0] = local_208;
  __return_storage_ptr__->M[1][1] = dStack_200;
  __return_storage_ptr__->M[1][2] = local_1f8;
  __return_storage_ptr__->M[1][3] = dStack_1f0;
  __return_storage_ptr__->M[2][0] = local_1e8;
  __return_storage_ptr__->M[2][1] = dStack_1e0;
  __return_storage_ptr__->M[2][2] = local_1d8;
  __return_storage_ptr__->M[2][3] = dStack_1d0;
  __return_storage_ptr__->M[3][0] = local_1c8;
  __return_storage_ptr__->M[3][1] = uStack_1c0;
  __return_storage_ptr__->M[3][2] = local_1b8;
  __return_storage_ptr__->M[3][3] = uStack_1b0;
  return __return_storage_ptr__;
}

// GetDefaultAnimatingRig @ 1485c4900

TSoftObjectPtr<UObject> * __thiscall
USkeletalMesh::GetDefaultAnimatingRig
          (USkeletalMesh *this,TSoftObjectPtr<UObject> *__return_storage_ptr__)

{
  undefined1 *this_00;
  undefined8 local_res10 [3];
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80000000,ReadWrite);
  this_00 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res10[0] = 0;
  FSoftObjectPtr::operator=(&__return_storage_ptr__->SoftObjectPtr,(FObjectPtr)local_res10);
  return __return_storage_ptr__;
}

// GetDefaultLODSetting @ 1485c4970

USkeletalMeshLODSettings * __thiscall USkeletalMesh::GetDefaultLODSetting(USkeletalMesh *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (USkeletalMeshLODSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (USkeletalMeshLODSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetDefaultMeshDeformer @ 1485c49b0

UMeshDeformer * __thiscall USkeletalMesh::GetDefaultMeshDeformer(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x100000000000000,ReadOnly);
  return (this->DefaultMeshDeformer).field0_0x0.DebugPtr;
}

// GetDefaultMinLod @ 1485c49f0

int __thiscall USkeletalMesh::GetDefaultMinLod(USkeletalMesh *this)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3b0))();
  if (cVar1 != '\0') {
    return (this->MinQualityLevelLOD).Default;
  }
  piVar2 = (int *)(**(code **)(this->_padding_ + 0x3a8))(this);
  return *piVar2;
}

// GetDesc @ 1485c4bd0

FString * __thiscall USkeletalMesh::GetDesc(USkeletalMesh *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FString *pFVar5;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x398))();
  if (puVar4 != (undefined8 *)0x0) {
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->LODRenderData.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                           ,0x17fc,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    (**(code **)(this->_padding_ + 800))(this);
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    FSkeletalMeshLODRenderData::GetTotalFaces(*(FSkeletalMeshLODRenderData **)*puVar4);
    ::FString::PrintfImpl(&local_18,L"%d Triangles, %d Bones");
    if (__return_storage_ptr__ != &local_18) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDisableBelowMinLodStripping @ 1485c4d40

FPerPlatformBool * __thiscall USkeletalMesh::GetDisableBelowMinLodStripping(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x10000000,ReadOnly);
  return &this->DisableBelowMinLodStripping;
}

// GetHasBeenSimplified @ 1485c5190

bool __thiscall USkeletalMesh::GetHasBeenSimplified(USkeletalMesh *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(this->_padding_ + 0x3d0))();
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(this->_padding_ + 0x328))(this,iVar3);
      if ((*(byte *)(lVar2 + 0xd0) & 1) != 0) {
        return true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return false;
}

// GetHasVertexColors @ 1485c5210

bool __thiscall USkeletalMesh::GetHasVertexColors(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x200,ReadOnly);
  return this->bHasVertexColors;
}

// GetImportedBounds @ 1485c5250

TBoxSphereBounds<double,double> * __thiscall
USkeletalMesh::GetImportedBounds
          (USkeletalMesh *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x10000000000,ReadOnly);
  dVar1 = (this->ImportedBounds).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->ImportedBounds).Origin.field0_0x0._s_0.Z;
  dVar3 = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (this->ImportedBounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar1 = (this->ImportedBounds).SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// GetLODInfo @ 1485c5340

FSkeletalMeshLODInfo * __thiscall USkeletalMesh::GetLODInfo(USkeletalMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshLODInfo *pFVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  if ((-1 < param_1) && (param_1 < (this->SourceModels).ArrayNum)) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
    if ((this->SourceModels).ArrayNum <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceModels.IsValidIndex(InLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0xacf,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSkeletalMeshLODInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    uVar3 = 0;
    if (param_1 < (this->SourceModels).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSkeletalMeshLODInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FSkeletalMeshLODInfo *)
           ((this->SourceModels).AllocatorInstance.Data + (longlong)param_1 * 0x150);
  }
  return (FSkeletalMeshLODInfo *)0x0;
}

// GetLODInfo @ 1485c5430

FSkeletalMeshLODInfo * __thiscall USkeletalMesh::GetLODInfo(USkeletalMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshLODInfo *pFVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  if ((-1 < param_1) && (param_1 < (this->SourceModels).ArrayNum)) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
    if ((this->SourceModels).ArrayNum <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceModels.IsValidIndex(InLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0xac6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSkeletalMeshLODInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    uVar3 = 0;
    if (param_1 < (this->SourceModels).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSkeletalMeshLODInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FSkeletalMeshLODInfo *)
           ((this->SourceModels).AllocatorInstance.Data + (longlong)param_1 * 0x150);
  }
  return (FSkeletalMeshLODInfo *)0x0;
}

// GetLODInfoArray @ 1485c5520

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetLODInfoArray(USkeletalMesh *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType *pFVar8;
  FSkeletalMeshLODInfo *pFVar9;
  uint uVar10;
  FSkeletalMeshLODInfo *pFVar11;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar2 + 0x9028) & 1) == 0) {
    *(uint *)(lVar2 + 0x9028) = *(uint *)(lVar2 + 0x9028) | 1;
    __tlregdtor(`USkeletalMesh::GetLODInfoArray'::__l2::
                _dynamic_atexit_destructor_for__LODInfoArray__);
  }
  pTVar7 = (TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x9018);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  iVar6 = *(int *)(lVar2 + 0x9020);
  uVar1 = (this->SourceModels).ArrayNum;
  if (iVar6 < (int)uVar1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,uVar1 - iVar6,(ForAnyElementType *)pTVar7,(int *)(lVar2 + 0x9020),
               (int *)(lVar2 + 0x9024));
  }
  else {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((int)uVar1 < iVar6) {
      uVar10 = iVar6 - uVar1;
      if (((int)(uVar10 | uVar1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if (uVar10 != 0) {
        TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(pTVar7,uVar1,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd8,8,(ForAnyElementType *)pTVar7,*(int *)(lVar2 + 0x9020),
                   (int *)(lVar2 + 0x9024));
      }
    }
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  iVar6 = (this->SourceModels).ArrayNum;
  pFVar11 = (FSkeletalMeshLODInfo *)(this->SourceModels).AllocatorInstance.Data;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  pvVar4 = ThreadLocalStoragePointer;
  pFVar9 = (FSkeletalMeshLODInfo *)((longlong)pFVar11 + (longlong)iVar6 * 0x150);
  while( true ) {
    if (pFVar11 == pFVar9) {
      return (TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9018);
    }
    lVar2 = *(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8);
    pFVar8 = (ForAnyElementType *)(lVar2 + 0x9018);
    if ((((FSkeletalMeshLODInfo *)pFVar8->Data <= pFVar11) &&
        (pFVar11 < (FSkeletalMeshLODInfo *)pFVar8->Data + *(int *)(lVar2 + 0x9024))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = *(int *)(lVar2 + 0x9020);
    if (iVar6 == *(int *)(lVar2 + 0x9024)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8d8,pFVar8,(int *)(lVar2 + 0x9024));
    }
    *(int *)(lVar2 + 0x9020) = iVar6 + 1;
    FSkeletalMeshLODInfo::FSkeletalMeshLODInfo
              ((FSkeletalMeshLODInfo *)(pFVar8->Data + (longlong)iVar6 * 0xd8),pFVar11);
    pFVar11 = (FSkeletalMeshLODInfo *)&pFVar11[1].BonesToRemove.ArrayNum;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetLODInfoArray @ 1485c57c0

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetLODInfoArray(USkeletalMesh *this)

{
  TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001485c57c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x390))();
  return pTVar1;
}

// GetLODNum @ 1485c57d0

int __thiscall USkeletalMesh::GetLODNum(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  return (this->SourceModels).ArrayNum;
}

// GetMappableNodeData @ 1485c5aa0

void __thiscall
USkeletalMesh::GetMappableNodeData
          (USkeletalMesh *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNodeItem,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  void *_Src;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FReferenceSkeleton *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1d8;
  longlong local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int *local_158;
  longlong local_150;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  puVar1 = &this[-1].MorphTargetIndexMap.field_0x28;
  lVar10 = (**(code **)(*(longlong *)puVar1 + 0x318))(puVar1);
  uVar15 = *(uint *)(lVar10 + 0x28);
  lVar10 = (longlong)(int)uVar15;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  local_158 = &param_1->ArrayNum;
  *local_158 = 0;
  if (param_1->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  piVar2 = &param_2->ArrayNum;
  *piVar2 = 0;
  if (param_2->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,uVar15,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  lVar11 = (**(code **)(*(longlong *)puVar1 + 0x318))(puVar1);
  local_148.DataPtr = *(TTransform<double> **)(lVar11 + 0x30);
  local_148.ArrayNum = *(int *)(lVar11 + 0x38);
  if ((local_148.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = (FReferenceSkeleton *)(**(code **)(*(longlong *)puVar1 + 0x318))(puVar1);
  FAnimationRuntime::FillUpComponentSpaceTransforms(pFVar12,&local_148,&local_1d8);
  if (0 < (int)uVar15) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar15,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax)
    ;
    local_150 = lVar10;
    memset((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,0,lVar10 * 8);
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,0x10,uVar15,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    DefaultConstructItems<FNodeItem,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x70,uVar15);
    lVar11 = (**(code **)(*(longlong *)puVar1 + 0x318))(puVar1);
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = *(int *)(lVar11 + 0x28);
    lVar13 = (longlong)local_1e0;
    _Src = *(void **)(lVar11 + 0x20);
    if (local_1e0 == 0) {
      local_1dc = 0;
      iVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_1e0,0,&local_1e8,local_1e0,&local_1dc);
      memcpy(local_1e8.Data,_Src,lVar13 * 0xc);
      iVar7 = local_1e0;
    }
    uVar15 = 0;
    if (0 < lVar10) {
      lVar10 = 0;
      local_1c8 = 0;
      lVar11 = 0;
      lVar13 = 0;
      do {
        lVar17 = local_1c8;
        uVar14 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < iVar7) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined8 *)(local_1e8.Data + lVar13);
        uVar8 = 0;
        if ((int)uVar15 < *local_158) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)((param_1->AllocatorInstance).Data + lVar10 * 8) = uVar3;
        uVar8 = 0;
        if ((int)uVar15 < local_1e0) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = 0;
        if (*(int *)(local_1e8.Data + lVar13 + 8) == -1) {
          uVar9 = uVar8;
          if ((int)uVar15 < local_1d8.ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_c8 = 0;
          local_168 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11);
          uStack_160 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 8);
          local_178 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x10);
          uStack_170 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x10 + 8);
          local_188 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x20);
          uStack_180 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x20 + 8);
          local_198 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x30);
          uStack_190 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x30 + 8);
          local_1a8 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x40);
          uStack_1a0 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x40 + 8);
          local_1b8 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x50);
          uStack_1b0 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar11 + 0x50 + 8);
          if ((int)uVar15 < *piVar2) {
            uVar8 = uVar14;
          }
          local_b8 = local_168;
          uStack_b0 = uStack_160;
          local_a8 = local_178;
          uStack_a0 = uStack_170;
          local_98 = local_188;
          uStack_90 = uStack_180;
          local_88 = local_198;
          uStack_80 = uStack_190;
          local_78 = local_1a8;
          uStack_70 = uStack_1a0;
          local_68 = local_1b8;
          uStack_60 = uStack_1b0;
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar18 = (undefined4)local_c8;
          uVar19 = local_c8._4_4_;
          uVar20 = uStack_c0;
          uVar21 = uStack_bc;
          uVar22 = (undefined4)local_168;
          uVar23 = local_168._4_4_;
          uVar24 = (undefined4)uStack_160;
          uVar25 = uStack_160._4_4_;
          uVar26 = (undefined4)local_178;
          uVar27 = local_178._4_4_;
          uVar28 = (undefined4)uStack_170;
          uVar29 = uStack_170._4_4_;
          uVar30 = (undefined4)local_188;
          uVar31 = local_188._4_4_;
          uVar32 = (undefined4)uStack_180;
          uVar33 = uStack_180._4_4_;
          uVar34 = (undefined4)local_198;
          uVar35 = local_198._4_4_;
          uVar36 = (undefined4)uStack_190;
          uVar37 = uStack_190._4_4_;
          uVar38 = (undefined4)local_1a8;
          uVar39 = local_1a8._4_4_;
          uVar40 = (undefined4)uStack_1a0;
          uVar41 = uStack_1a0._4_4_;
          uVar42 = (undefined4)local_1b8;
          uVar43 = local_1b8._4_4_;
          uVar44 = (undefined4)uStack_1b0;
          uVar45 = uStack_1b0._4_4_;
        }
        else {
          uVar9 = 0;
          if ((int)uVar15 < local_1d8.ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = local_1d8.AllocatorInstance.Data + lVar11;
          if ((int)uVar15 < local_1e0) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = *(uint *)(local_1e8.Data + lVar13 + 8);
          uVar9 = 0;
          if ((int)uVar8 < local_1e0) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_1b8 = *(undefined8 *)pFVar16;
          uStack_1b0 = *(undefined8 *)(pFVar16 + 8);
          local_1a8 = *(undefined8 *)(pFVar16 + 0x10);
          uStack_1a0 = *(undefined8 *)(pFVar16 + 0x18);
          local_138 = *(undefined8 *)(local_1e8.Data + (longlong)(int)uVar8 * 0xc);
          local_198 = *(undefined8 *)(pFVar16 + 0x20);
          uStack_190 = *(undefined8 *)(pFVar16 + 0x28);
          local_188 = *(undefined8 *)(pFVar16 + 0x30);
          uStack_180 = *(undefined8 *)(pFVar16 + 0x38);
          local_178 = *(undefined8 *)(pFVar16 + 0x40);
          uStack_170 = *(undefined8 *)(pFVar16 + 0x48);
          local_168 = *(undefined8 *)(pFVar16 + 0x50);
          uStack_160 = *(undefined8 *)(pFVar16 + 0x58);
          uVar8 = 0;
          if ((int)uVar15 < *piVar2) {
            uVar8 = uVar14;
          }
          local_128 = local_1b8;
          uStack_120 = uStack_1b0;
          local_118 = local_1a8;
          uStack_110 = uStack_1a0;
          local_108 = local_198;
          uStack_100 = uStack_190;
          local_f8 = local_188;
          uStack_f0 = uStack_180;
          local_e8 = local_178;
          uStack_e0 = uStack_170;
          local_d8 = local_168;
          uStack_d0 = uStack_160;
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar17 = local_1c8;
          uVar18 = (undefined4)local_138;
          uVar19 = local_138._4_4_;
          uVar20 = uStack_130;
          uVar21 = uStack_12c;
          uVar22 = (undefined4)local_1b8;
          uVar23 = local_1b8._4_4_;
          uVar24 = (undefined4)uStack_1b0;
          uVar25 = uStack_1b0._4_4_;
          uVar26 = (undefined4)local_1a8;
          uVar27 = local_1a8._4_4_;
          uVar28 = (undefined4)uStack_1a0;
          uVar29 = uStack_1a0._4_4_;
          uVar30 = (undefined4)local_198;
          uVar31 = local_198._4_4_;
          uVar32 = (undefined4)uStack_190;
          uVar33 = uStack_190._4_4_;
          uVar34 = (undefined4)local_188;
          uVar35 = local_188._4_4_;
          uVar36 = (undefined4)uStack_180;
          uVar37 = uStack_180._4_4_;
          uVar38 = (undefined4)local_178;
          uVar39 = local_178._4_4_;
          uVar40 = (undefined4)uStack_170;
          uVar41 = uStack_170._4_4_;
          uVar42 = (undefined4)local_168;
          uVar43 = local_168._4_4_;
          uVar44 = (undefined4)uStack_160;
          uVar45 = uStack_160._4_4_;
        }
        uVar15 = uVar15 + 1;
        lVar10 = lVar10 + 1;
        lVar13 = lVar13 + 0xc;
        lVar11 = lVar11 + 0x60;
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar16 = pFVar4 + lVar17;
        *(undefined4 *)pFVar16 = uVar18;
        *(undefined4 *)(pFVar16 + 4) = uVar19;
        *(undefined4 *)(pFVar16 + 8) = uVar20;
        *(undefined4 *)(pFVar16 + 0xc) = uVar21;
        pFVar16 = pFVar4 + lVar17 + 0x10;
        *(undefined4 *)pFVar16 = uVar22;
        *(undefined4 *)(pFVar16 + 4) = uVar23;
        *(undefined4 *)(pFVar16 + 8) = uVar24;
        *(undefined4 *)(pFVar16 + 0xc) = uVar25;
        pFVar16 = pFVar4 + lVar17 + 0x20;
        *(undefined4 *)pFVar16 = uVar26;
        *(undefined4 *)(pFVar16 + 4) = uVar27;
        *(undefined4 *)(pFVar16 + 8) = uVar28;
        *(undefined4 *)(pFVar16 + 0xc) = uVar29;
        pFVar16 = pFVar4 + lVar17 + 0x30;
        *(undefined4 *)pFVar16 = uVar30;
        *(undefined4 *)(pFVar16 + 4) = uVar31;
        *(undefined4 *)(pFVar16 + 8) = uVar32;
        *(undefined4 *)(pFVar16 + 0xc) = uVar33;
        pFVar16 = pFVar4 + lVar17 + 0x40;
        *(undefined4 *)pFVar16 = uVar34;
        *(undefined4 *)(pFVar16 + 4) = uVar35;
        *(undefined4 *)(pFVar16 + 8) = uVar36;
        *(undefined4 *)(pFVar16 + 0xc) = uVar37;
        pFVar16 = pFVar4 + lVar17 + 0x50;
        *(undefined4 *)pFVar16 = uVar38;
        *(undefined4 *)(pFVar16 + 4) = uVar39;
        *(undefined4 *)(pFVar16 + 8) = uVar40;
        *(undefined4 *)(pFVar16 + 0xc) = uVar41;
        pFVar4 = pFVar4 + lVar17 + 0x60;
        *(undefined4 *)pFVar4 = uVar42;
        *(undefined4 *)(pFVar4 + 4) = uVar43;
        *(undefined4 *)(pFVar4 + 8) = uVar44;
        *(undefined4 *)(pFVar4 + 0xc) = uVar45;
        local_1c8 = lVar17 + 0x70;
        iVar7 = local_1e0;
      } while (lVar10 < local_150);
    }
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
  }
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  return;
}

// GetMaterials @ 1485c61d0

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetMaterials(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,1,ReadWrite);
  return &this->Materials;
}

// GetMaterials @ 1485c6200

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetMaterials(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,1,ReadOnly);
  return &this->Materials;
}

// GetMeshId @ 1485c6230

void __thiscall USkeletalMesh::GetMeshId(USkeletalMesh *this,FString *param_1)

{
  ::FString::operator=(param_1,L"659304F7CF5D4F31BCC54A9FBB0B49E0");
  return;
}

// GetMeshOnlySocketList @ 1485c6250

TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetMeshOnlySocketList(USkeletalMesh *this)

{
  return &this->Sockets;
}

// GetMeshOnlySocketList @ 1485c6260

TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetMeshOnlySocketList(USkeletalMesh *this)

{
  return (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *)&this->Sockets;
}

// GetMinLod @ 1485c6270

FPerPlatformInt * __thiscall USkeletalMesh::GetMinLod(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x8000000,ReadOnly);
  return &this->MinLod;
}

// GetMinLodIdx @ 1485c62a0

int __thiscall USkeletalMesh::GetMinLodIdx(USkeletalMesh *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3b0))();
  if (cVar1 != '\0') {
    if (param_1) {
      iVar2 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetLowestValue
                        ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                         &this->MinQualityLevelLOD);
      return iVar2;
    }
    if ((*(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 !=
         *(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x34) &&
       (-1 < GSkeletalMeshMinLodQualityLevel)) {
      puVar5 = *(undefined1 **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->MinQualityLevelLOD).PerQuality.field_0x38;
      }
      iVar2 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 - 1U &
                                GSkeletalMeshMinLodQualityLevel) * 4);
      if (iVar2 != -1) {
        while (piVar4 = (int *)((longlong)iVar2 * 0x10 +
                               *(longlong *)&(this->MinQualityLevelLOD).PerQuality),
              *piVar4 != GSkeletalMeshMinLodQualityLevel) {
          iVar2 = piVar4[2];
          if (iVar2 == -1) {
            return (this->MinQualityLevelLOD).Default;
          }
        }
        piVar3 = piVar4 + 1;
        if (piVar4 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        if (piVar3 != (int *)0x0) goto LAB_1485c6377;
      }
    }
    return (this->MinQualityLevelLOD).Default;
  }
  piVar3 = (int *)(**(code **)(this->_padding_ + 0x3a8))(this);
LAB_1485c6377:
  return *piVar3;
}

// GetMipIoFilenameHash @ 1485c6390

uint __thiscall USkeletalMesh::GetMipIoFilenameHash(USkeletalMesh *this,int param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  if ((this->SkeletalMeshRenderData).Ptr != (FSkeletalMeshRenderData *)0x0) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    if ((-1 < param_1) &&
       (param_1 < (((this->SkeletalMeshRenderData).Ptr)->LODRenderData).Array.ArrayNum)) {
      USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
      pFVar1 = (this->SkeletalMeshRenderData).Ptr;
      uVar4 = 0;
      if (param_1 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      uVar4 = MakeIoFilenameHash((FIoChunkId *)
                                 (*(longlong *)
                                   ((pFVar1->LODRenderData).Array.AllocatorInstance.Data +
                                   (longlong)param_1 * 8) + 0x648));
      return uVar4;
    }
  }
  return 0;
}

// GetMorphTargets @ 1485c6480

TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetMorphTargets(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800,ReadWrite);
  return &this->MorphTargets;
}

// GetMorphTargets @ 1485c64b0

TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetMorphTargets(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800,ReadOnly);
  return &this->MorphTargets;
}

// GetNodeMappingContainer @ 1485c65c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNodeMappingContainer * __thiscall
USkeletalMesh::GetNodeMappingContainer(USkeletalMesh *this,UBlueprint *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UNodeMappingContainer *pUVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  UBlueprint *local_res18 [2];
  undefined1 local_68 [8];
  FSoftObjectPath local_60;
  
  uVar6 = 0;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000000,ReadOnly);
  iVar8 = (this->NodeMappingData).ArrayNum;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar8) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < iVar8) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UNodeMappingContainer *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UNodeMappingContainer **)((this->NodeMappingData).AllocatorInstance.Data + uVar9);
      if (pUVar4 == (UNodeMappingContainer *)0x0) {
LAB_1485c6701:
        bVar2 = false;
      }
      else {
        uVar7 = 1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlueprint *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_60.AssetPath.AssetName.Number = 0;
        local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_60.AssetPath.PackageName.Number = 0;
        local_60.SubPathString.Data.ArrayNum = 0;
        local_60.SubPathString.Data.ArrayMax = 0;
        local_68 = (undefined1  [8])0x0;
        FUtf8String::Reset(&local_60.SubPathString,0);
        local_res18[0] = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlueprint *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_68,(FObjectPtr)local_res18);
        bVar2 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&(pUVar4->SourceAsset).SoftObjectPtr.field_0x8,
                           &local_60);
        if (!bVar2) goto LAB_1485c6701;
        bVar2 = true;
      }
      if ((uVar7 != 0) &&
         (uVar7 = 0,
         local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        return pUVar4;
      }
      iVar8 = (this->NodeMappingData).ArrayNum;
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar5 + 1) < iVar8);
  }
  return (UNodeMappingContainer *)0x0;
}

// GetNumNaniteTriangles @ 1485c6830

int __thiscall USkeletalMesh::GetNumNaniteTriangles(USkeletalMesh *this)

{
  bool bVar1;
  FSkeletalMeshRenderData *this_00;
  longlong lVar2;
  
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))();
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    bVar1 = FSkeletalMeshRenderData::HasValidNaniteData(this_00);
    if (bVar1) {
      lVar2 = (**(code **)(this->_padding_ + 0x398))(this);
      if (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8)) {
        return *(int *)(*(longlong *)(lVar2 + 0x10) + 0xe4);
      }
    }
  }
  return 0;
}

// GetNumNaniteVertices @ 1485c6890

int __thiscall USkeletalMesh::GetNumNaniteVertices(USkeletalMesh *this)

{
  bool bVar1;
  FSkeletalMeshRenderData *this_00;
  longlong lVar2;
  
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))();
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    bVar1 = FSkeletalMeshRenderData::HasValidNaniteData(this_00);
    if (bVar1) {
      lVar2 = (**(code **)(this->_padding_ + 0x398))(this);
      if (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8)) {
        return *(int *)(*(longlong *)(lVar2 + 0x10) + 0xe8);
      }
    }
  }
  return 0;
}

// GetNumSourceModels @ 1485c68f0

int __thiscall USkeletalMesh::GetNumSourceModels(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  return (this->SourceModels).ArrayNum;
}

// GetOverlayMaterial @ 1485c6ae0

UMaterialInterface * __thiscall USkeletalMesh::GetOverlayMaterial(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x200000000000000,ReadOnly);
  return (this->OverlayMaterial).field0_0x0.DebugPtr;
}

// GetOverlayMaterialMaxDrawDistance @ 1485c6b20

float __thiscall USkeletalMesh::GetOverlayMaterialMaxDrawDistance(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x400000000000000,ReadOnly);
  return this->OverlayMaterialMaxDrawDistance;
}

// GetPhysicsAsset @ 1485c6c00

UPhysicsAsset * __thiscall USkeletalMesh::GetPhysicsAsset(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x20000000000,ReadWrite);
  return (this->PhysicsAsset).field0_0x0.DebugPtr;
}

// GetPhysicsTriMeshData @ 1485c6c40

bool __thiscall
USkeletalMesh::GetPhysicsTriMeshData
          (USkeletalMesh *this,FTriMeshCollisionData *param_1,bool param_2)

{
  return false;
}

// GetPlatformMinLODIdx @ 1485c6c50

int __thiscall USkeletalMesh::GetPlatformMinLODIdx(USkeletalMesh *this,ITargetPlatform *param_1)

{
  return 0;
}

// GetPostProcessAnimGraphLODThreshold @ 1485c6c60

int __thiscall USkeletalMesh::GetPostProcessAnimGraphLODThreshold(USkeletalMesh *this)

{
  return this->PostProcessAnimBPLODThreshold;
}

// GetPreloadDependencies @ 1485c6c70

void __thiscall
USkeletalMesh::GetPreloadDependencies
          (USkeletalMesh *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_18 [2];
  
  UObject::GetPreloadDependencies((UObject *)this,param_1);
  local_18[0] = (**(code **)(this->_padding_ + 0x408))(this);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetPrivateStaticClass @ 1485c6df0

UClass * __cdecl USkeletalMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMesh",
               &Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton,
               StaticRegisterNativesUSkeletalMesh,0x518,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMesh>,InternalVTableHelperCtorCaller<USkeletalMesh>,
               local_res8,USkinnedAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton;
}

// GetRayTracingMinLOD @ 1485c6eb0

int __thiscall USkeletalMesh::GetRayTracingMinLOD(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x40000000000000,ReadOnly);
  return this->RayTracingMinLOD;
}

// GetRefBasesInvMatrix @ 1485c6ee0

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetRefBasesInvMatrix(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x10,ReadWrite);
  return &this->RefBasesInvMatrix;
}

// GetRefBasesInvMatrix @ 1485c6f10

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::GetRefBasesInvMatrix(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x10,ReadOnly);
  return &this->RefBasesInvMatrix;
}

// GetRefPoseMatrix @ 1485c6f40

TMatrix<double> * __thiscall
USkeletalMesh::GetRefPoseMatrix
          (USkeletalMesh *this,TMatrix<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  code *pcVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  longlong lVar9;
  TMatrix<double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  TTransform<double> local_78;
  
  if (-1 < param_1) {
    lVar9 = (**(code **)(this->_padding_ + 0x318))();
    if (param_1 < *(int *)(lVar9 + 8)) goto LAB_1485c6f9c;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("BoneIndex >= 0 && BoneIndex < GetRefSkeleton().GetRawBoneNum()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                     ,0x1432,L"");
  if (bVar8) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TMatrix<double> *)(*pcVar2)();
    return pTVar10;
  }
LAB_1485c6f9c:
  lVar9 = (**(code **)(this->_padding_ + 0x318))();
  uVar11 = 0;
  if (param_1 < *(int *)(lVar9 + 0x18)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TMatrix<double> *)(*pcVar2)();
      return pTVar10;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x10);
  lVar12 = (longlong)param_1 * 0x60;
  dVar4 = *(double *)(lVar12 + lVar9);
  dVar5 = ((double *)(lVar12 + lVar9))[1];
  pdVar1 = (double *)(lVar12 + 0x10 + lVar9);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  pdVar1 = (double *)(lVar12 + 0x20 + lVar9);
  local_78.Translation.XY.m128d_f64[0] = *pdVar1;
  local_78.Translation.XY.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar12 + 0x30 + lVar9);
  local_78.Translation.ZW.m128d_f64[0] = *pdVar1;
  local_78.Translation.ZW.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar12 + 0x40 + lVar9);
  local_78.Scale3D.XY.m128d_f64[0] = *pdVar1;
  local_78.Scale3D.XY.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar12 + 0x50 + lVar9);
  local_78.Scale3D.ZW.m128d_f64[0] = *pdVar1;
  local_78.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
  auVar22._0_8_ = dVar4 * dVar4 + dVar6 * dVar6;
  auVar22._8_8_ = dVar5 * dVar5 + dVar7 * dVar7;
  auVar17._8_4_ = SUB84(auVar22._8_8_,0);
  auVar17._0_8_ = auVar22._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
  auVar18._0_8_ = auVar17._8_8_ + auVar22._0_8_;
  auVar18._8_8_ = auVar22._0_8_ + auVar22._8_8_;
  auVar23 = sqrtpd(auVar22,auVar18);
  uVar13 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar18._0_8_);
  uVar15 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar18._8_8_);
  uVar14 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar18._0_8_);
  uVar16 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar18._8_8_);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar21._0_8_ = uVar13 & (ulonglong)(auVar20._0_8_ * dVar4);
  uVar3 = uVar15 & (ulonglong)(auVar20._8_8_ * dVar5);
  auVar21._8_4_ = (undefined4)uVar3;
  auVar21._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar19._0_8_ = uVar14 & (ulonglong)(auVar23._0_8_ * dVar6);
  uVar3 = uVar16 & (ulonglong)(auVar23._8_8_ * dVar7);
  auVar19._8_4_ = (undefined4)uVar3;
  auVar19._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar23._4_4_ = ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar23._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar23._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar23._12_4_ = ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_78.Rotation.XY.m128d_f64 = (double  [2])(auVar21 | auVar23);
  auVar20._4_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar20._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar20._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar20._12_4_ = ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  local_78.Rotation.ZW.m128d_f64 = (double  [2])(auVar19 | auVar20);
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_78,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRefSkeleton @ 1485c70e0

FReferenceSkeleton * __thiscall USkeletalMesh::GetRefSkeleton(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,4,ReadWrite);
  return &this->RefSkeleton;
}

// GetRefSkeleton @ 1485c7110

FReferenceSkeleton * __thiscall USkeletalMesh::GetRefSkeleton(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,4,ReadOnly);
  return &this->RefSkeleton;
}

// GetRenderAssetType @ 1485c7910

EStreamableRenderAssetType __thiscall USkeletalMesh::GetRenderAssetType(USkeletalMesh *this)

{
  return SkeletalMesh;
}

// GetResourceForRendering @ 1485c7920

FSkeletalMeshRenderData * __thiscall USkeletalMesh::GetResourceForRendering(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  return (this->SkeletalMeshRenderData).Ptr;
}

// GetResourceSizeEx @ 1485c7950

void __thiscall USkeletalMesh::GetResourceSizeEx(USkeletalMesh *this,FResourceSizeEx *param_1)

{
  longlong lVar1;
  FReferenceSkeleton *this_00;
  ulong64 uVar2;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  if ((this->SkeletalMeshRenderData).Ptr != (FSkeletalMeshRenderData *)0x0) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    FSkeletalMeshRenderData::GetResourceSizeEx((this->SkeletalMeshRenderData).Ptr,param_1);
  }
  lVar1 = (**(code **)(this->_padding_ + 0x380))(this);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(lVar1 + 0xc) << 6);
  this_00 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
  uVar2 = FReferenceSkeleton::GetDataSize(this_00);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar2);
  return;
}

// GetSectionClothingAsset @ 1485c79f0

UClothingAssetBase * __thiscall
USkeletalMesh::GetSectionClothingAsset(USkeletalMesh *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong *plVar11;
  UClothingAssetBase *pUVar12;
  FScriptContainerElement *pFVar13;
  
  plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x398))();
  if (((plVar11 != (longlong *)0x0) && (-1 < param_1)) && (param_1 < (int)plVar11[1])) {
    if ((param_1 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UClothingAssetBase *)(*pcVar5)();
      return pUVar12;
    }
    lVar3 = *(longlong *)(*plVar11 + (longlong)param_1 * 8);
    if ((-1 < param_2) && (param_2 < *(int *)(lVar3 + 0x18))) {
      if ((param_2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UClothingAssetBase *)(*pcVar5)();
        return pUVar12;
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      uVar4 = *(undefined8 *)((longlong)param_2 * 0x118 + 0x5c + lVar3);
      puVar2 = (uint *)((longlong)param_2 * 0x118 + 0x54 + lVar3);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      if ((((int)((ulonglong)uVar4 >> 0x20) != 0 || uVar7 != 0) || (int)uVar4 != 0) || uVar6 != 0) {
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x20,ReadWrite);
        pFVar13 = (this->MeshClothingAssets).AllocatorInstance.Data;
        pFVar1 = pFVar13 + (longlong)(this->MeshClothingAssets).ArrayNum * 8;
        while( true ) {
          if (pFVar13 == pFVar1) {
            return (UClothingAssetBase *)0x0;
          }
          pUVar12 = *(UClothingAssetBase **)pFVar13;
          if ((pUVar12 != (UClothingAssetBase *)0x0) &&
             (((uVar7 == (pUVar12->AssetGuid).B && uVar9 == (pUVar12->AssetGuid).D) &&
              uVar8 == (pUVar12->AssetGuid).C) && uVar6 == (pUVar12->AssetGuid).A)) break;
          pFVar13 = pFVar13 + 8;
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return pUVar12;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar12);
        return pUVar12;
      }
    }
  }
  return (UClothingAssetBase *)0x0;
}

// GetSectionClothingAsset @ 1485c7bb0

UClothingAssetBase * __thiscall
USkeletalMesh::GetSectionClothingAsset(USkeletalMesh *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong *plVar11;
  UClothingAssetBase *pUVar12;
  FScriptContainerElement *pFVar13;
  
  plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x398))();
  if (((plVar11 != (longlong *)0x0) && (-1 < param_1)) && (param_1 < (int)plVar11[1])) {
    if ((param_1 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UClothingAssetBase *)(*pcVar5)();
      return pUVar12;
    }
    lVar3 = *(longlong *)(*plVar11 + (longlong)param_1 * 8);
    if ((-1 < param_2) && (param_2 < *(int *)(lVar3 + 0x18))) {
      if ((param_2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UClothingAssetBase *)(*pcVar5)();
        return pUVar12;
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      puVar2 = (uint *)((longlong)param_2 * 0x118 + 0x54 + lVar3);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar4 = *(undefined8 *)((longlong)param_2 * 0x118 + 0x5c + lVar3);
      if (((uVar7 != 0 || (int)((ulonglong)uVar4 >> 0x20) != 0) || (int)uVar4 != 0) || uVar6 != 0) {
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x20,ReadOnly);
        pFVar13 = (this->MeshClothingAssets).AllocatorInstance.Data;
        pFVar1 = pFVar13 + (longlong)(this->MeshClothingAssets).ArrayNum * 8;
        while( true ) {
          if (pFVar13 == pFVar1) {
            return (UClothingAssetBase *)0x0;
          }
          pUVar12 = *(UClothingAssetBase **)pFVar13;
          if ((pUVar12 != (UClothingAssetBase *)0x0) &&
             (((uVar9 == (pUVar12->AssetGuid).D && uVar8 == (pUVar12->AssetGuid).C) &&
              uVar7 == (pUVar12->AssetGuid).B) && uVar6 == (pUVar12->AssetGuid).A)) break;
          pFVar13 = pFVar13 + 8;
        }
        return pUVar12;
      }
    }
  }
  return (UClothingAssetBase *)0x0;
}

// GetShadowPhysicsAsset @ 1485c7dd0

UPhysicsAsset * __thiscall USkeletalMesh::GetShadowPhysicsAsset(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x2000000,ReadWrite);
  return (this->ShadowPhysicsAsset).field0_0x0.DebugPtr;
}

// GetSkeletalMeshRenderData @ 1485c9510

FSkeletalMeshRenderData * __thiscall USkeletalMesh::GetSkeletalMeshRenderData(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  return (this->SkeletalMeshRenderData).Ptr;
}

// GetSkeleton @ 1485c9540

USkeleton * __thiscall USkeletalMesh::GetSkeleton(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,2,ReadWrite);
  return (this->Skeleton).field0_0x0.DebugPtr;
}

// GetSkeleton @ 1485c9570

USkeleton * __thiscall USkeletalMesh::GetSkeleton(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,2,ReadOnly);
  return (this->Skeleton).field0_0x0.DebugPtr;
}

// GetSkinWeightProfilesData @ 1485c95a0

FSkinWeightProfilesData * __thiscall
USkeletalMesh::GetSkinWeightProfilesData(USkeletalMesh *this,int param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSkinWeightProfilesData *pFVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  pFVar1 = (this->SkeletalMeshRenderData).Ptr;
  if (((pFVar1 != (FSkeletalMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODRenderData).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FSkinWeightProfilesData *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FSkinWeightProfilesData *)
           (*(longlong *)
             ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8) + 0x328)
    ;
  }
  return (FSkinWeightProfilesData *)0x0;
}

// GetSocketByIndex @ 1485c9640

USkeletalMeshSocket * __thiscall USkeletalMesh::GetSocketByIndex(USkeletalMesh *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshSocket *pUVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (this->Sockets).ArrayNum;
  if (iVar1 <= param_1) {
    lVar5 = (**(code **)(this->_padding_ + 0x400))();
    if (lVar5 != 0) {
      uVar7 = param_1 - iVar1;
      lVar5 = (**(code **)(this->_padding_ + 0x400))(this);
      if ((int)uVar7 < *(int *)(lVar5 + 0x1b0)) {
        lVar5 = (**(code **)(this->_padding_ + 0x400))();
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(lVar5 + 0x1b0)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pUVar4 = (USkeletalMeshSocket *)(*pcVar2)();
            return pUVar4;
          }
        }
        return *(USkeletalMeshSocket **)(*(longlong *)(lVar5 + 0x1a8) + (longlong)(int)uVar7 * 8);
      }
    }
    return (USkeletalMeshSocket *)0x0;
  }
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USkeletalMeshSocket *)(*pcVar2)();
      return pUVar4;
    }
  }
  return *(USkeletalMeshSocket **)((this->Sockets).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSourceModel @ 1485c9db0

FSkeletalMeshSourceModel * __thiscall USkeletalMesh::GetSourceModel(USkeletalMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshSourceModel *pFVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  if ((param_1 < 0) || ((this->SourceModels).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceModels.IsValidIndex(InLODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0xacf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSourceModel *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->SourceModels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSourceModel *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSkeletalMeshSourceModel *)
         ((this->SourceModels).AllocatorInstance.Data + (longlong)param_1 * 0x150);
}

// GetSourceModel @ 1485c9e70

FSkeletalMeshSourceModel * __thiscall USkeletalMesh::GetSourceModel(USkeletalMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshSourceModel *pFVar4;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  if ((param_1 < 0) || ((this->SourceModels).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceModels.IsValidIndex(InLODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0xac6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSourceModel *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->SourceModels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSourceModel *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSkeletalMeshSourceModel *)
         ((this->SourceModels).AllocatorInstance.Data + (longlong)param_1 * 0x150);
}

// GetSupportRayTracing @ 1485cb530

bool __thiscall USkeletalMesh::GetSupportRayTracing(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x20000000000000,ReadOnly);
  return this->bSupportRayTracing;
}

// GetTargetMeshDeformers @ 1485cb570

UMeshDeformerCollection * __thiscall USkeletalMesh::GetTargetMeshDeformers(USkeletalMesh *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x800000000000000,ReadOnly);
  return (this->TargetMeshDeformers).field0_0x0.DebugPtr;
}

// GetThumbnailInfo_WrapperImpl @ 1485cb660

void __cdecl USkeletalMesh::GetThumbnailInfo_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// GetTriMeshSizeEstimates @ 1485cb670

bool __thiscall
USkeletalMesh::GetTriMeshSizeEstimates
          (USkeletalMesh *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  return true;
}

// GetUVChannelData @ 1485cbc40

FMeshUVChannelInfo * __thiscall USkeletalMesh::GetUVChannelData(USkeletalMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  FMeshUVChannelInfo *pFVar5;
  uint uVar6;
  
  lVar3 = (**(code **)(this->_padding_ + 0x3c0))();
  if ((-1 < param_1) && (param_1 < *(int *)(lVar3 + 8))) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))(this);
    uVar6 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar5;
      }
    }
    if (*(char *)(*plVar4 + 0x10 + (longlong)param_1 * 0x30) == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3817078023119701149>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x49d,"GetMaterials()[MaterialIndex].UVChannelData.bInitialized");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar5;
      }
    }
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))(this);
    uVar6 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar5;
      }
    }
    return (FMeshUVChannelInfo *)(*plVar4 + (longlong)param_1 * 0x30 + 0x10);
  }
  return (FMeshUVChannelInfo *)0x0;
}

// GetVertexColorData @ 1485cbf30

TMap<UE::Math::TVector<float>,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>_>
* __thiscall
USkeletalMesh::GetVertexColorData
          (USkeletalMesh *this,
          TMap<UE::Math::TVector<float>,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>_>
          *__return_storage_ptr__,uint param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  return __return_storage_ptr__;
}

// HasActiveClothingAssets @ 1485cc5a0

bool __thiscall USkeletalMesh::HasActiveClothingAssets(USkeletalMesh *this)

{
  return this->bHasActiveClothingAssets;
}

// HasActiveClothingAssetsForLOD @ 1485cc5c0

bool __thiscall USkeletalMesh::HasActiveClothingAssetsForLOD(USkeletalMesh *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x398))();
  if (((plVar7 != (longlong *)0x0) && (-1 < param_1)) && (param_1 < (int)plVar7[1])) {
    if ((param_1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar2 = *(longlong *)(*plVar7 + (longlong)param_1 * 8);
    uVar9 = 0;
    iVar1 = *(int *)(lVar2 + 0x18);
    if (0 < (longlong)iVar1) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < *(int *)(lVar2 + 0x18)) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar8 = *(longlong *)(lVar2 + 0x10) + lVar10;
        if (((*(int *)(lVar8 + 0x60) != 0 || *(int *)(lVar8 + 0x5c) != 0) ||
            *(int *)(lVar8 + 0x58) != 0) || *(int *)(lVar8 + 0x54) != 0) {
          return true;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x118;
      } while (lVar11 < iVar1);
    }
  }
  return false;
}

// HasHalfEdgeBuffer @ 1485cc700

bool __thiscall USkeletalMesh::HasHalfEdgeBuffer(USkeletalMesh *this,int param_1)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  UMeshDeformerCollection *this_00;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  UObject *pUVar5;
  ForAnyElementType FVar6;
  UObject *local_res8;
  TArray<TSoftObjectPtr<UMeshDeformer>,TSizedDefaultAllocator<32>_> local_48;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  lVar4 = (**(code **)(this->_padding_ + 0x328))();
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0xd0) & 0x10) == 0)) {
LAB_1485cc850:
    bVar3 = false;
  }
  else {
    if ((*(byte *)(lVar4 + 0xd0) & 8) == 0) {
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x418))(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_38.WeakPtr.ObjectIndex = 0;
      local_38.WeakPtr.ObjectSerialNumber = 0;
      local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_38.ObjectID.AssetPath.AssetName.Number = 0;
      local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_38.ObjectID.AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
      local_res8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)&local_res8);
      bVar3 = SkeletalMeshHalfEdgeBufferAccessor::IsHalfEdgeRequired
                        ((TSoftObjectPtr<UObject> *)&local_38);
      if (!bVar3) {
        this_00 = (this->TargetMeshDeformers).field0_0x0.DebugPtr;
        if (this_00 == (UMeshDeformerCollection *)0x0) goto LAB_1485cc850;
        UMeshDeformerCollection::GetMeshDeformers(this_00,&local_48);
        iVar2 = local_48.ArrayNum;
        pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
                 (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x28);
        FVar6.Data = local_48.AllocatorInstance.Data;
        while( true ) {
          if (local_48.ArrayNum != iVar2) {
            `TCheckedPointerIterator<TSoftObjectPtr<UMeshDeformer>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res8);
          }
          if ((TPersistentObjectPtr<FSoftObjectPath> *)FVar6.Data == pTVar1) {
            DestructItems<TSoftObjectPtr<UMeshDeformer>,int>
                      ((TSoftObjectPtr<UMeshDeformer> *)local_48.AllocatorInstance.Data,
                       local_48.ArrayNum);
            if ((TPersistentObjectPtr<FSoftObjectPath> *)local_48.AllocatorInstance.Data !=
                (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
              FMemory::Free(local_48.AllocatorInstance.Data);
            }
            goto LAB_1485cc850;
          }
          TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                    (&local_38,(TPersistentObjectPtr<FSoftObjectPath> *)FVar6.Data);
          bVar3 = SkeletalMeshHalfEdgeBufferAccessor::IsHalfEdgeRequired
                            ((TSoftObjectPtr<UObject> *)&local_38);
          if (bVar3) break;
          FVar6.Data = FVar6.Data + 0x28;
        }
        DestructItems<TSoftObjectPtr<UMeshDeformer>,int>
                  ((TSoftObjectPtr<UMeshDeformer> *)local_48.AllocatorInstance.Data,
                   local_48.ArrayNum);
        if ((TPersistentObjectPtr<FSoftObjectPath> *)local_48.AllocatorInstance.Data !=
            (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// HasPendingRenderResourceInitialization @ 1485cc870

bool __thiscall USkeletalMesh::HasPendingRenderResourceInitialization(USkeletalMesh *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar1 == '\0') {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    if ((this->SkeletalMeshRenderData).Ptr != (FSkeletalMeshRenderData *)0x0) {
      USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
      if (((this->SkeletalMeshRenderData).Ptr)->bInitialized != false) {
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
                  ((USkinnedAsset *)this,0x1000,ReadWrite);
        if (((this->SkeletalMeshRenderData).Ptr)->bReadyForStreaming == false) {
          return true;
        }
      }
    }
  }
  return false;
}

// HasValidNaniteData @ 1485cc900

bool __thiscall USkeletalMesh::HasValidNaniteData(USkeletalMesh *this)

{
  bool bVar1;
  FSkeletalMeshRenderData *this_00;
  
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))();
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    bVar1 = FSkeletalMeshRenderData::HasValidNaniteData(this_00);
    return bVar1;
  }
  return false;
}

// InitMorphTargets @ 1485cca60

void __thiscall USkeletalMesh::InitMorphTargets(USkeletalMesh *this,bool param_1)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong *plVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  uint local_res8 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res18;
  int **local_48;
  uint *local_40;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4692,"USkeletalMesh::InitMorphTargets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
               ,0x1254);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4692);
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x4000000000,ReadWrite);
  this_00 = &this->MorphTargetIndexMap;
  bVar5 = 1 < *(int *)&(this->MorphTargetIndexMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar2 = &(this->MorphTargetIndexMap).field_0xc;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->MorphTargetIndexMap).field_0x2c;
  *(undefined4 *)&(this->MorphTargetIndexMap).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->MorphTargetIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MorphTargetIndexMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MorphTargetIndexMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00);
  }
  pFVar8 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x458))(this);
  local_res8[0] = 0;
  iVar10 = *(int *)&pFVar8[1].Data;
  uVar9 = 0;
  if (0 < iVar10) {
    do {
      uVar12 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar12 < iVar10) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar1 = *(longlong **)(pFVar8->Data + (longlong)(int)uVar12 * 8);
      if ((param_1) || (cVar6 = (**(code **)(*plVar1 + 0x2e0))(plVar1), cVar6 != '\0')) {
        local_res18.Value = (int *)plVar1[3];
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
                  ((USkinnedAsset *)this,0x4000000000,ReadWrite);
        piVar4 = local_res18.Value;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)local_res18.Value);
        if (*(int *)&(this->MorphTargetIndexMap).field_0x8 !=
            *(int *)&(this->MorphTargetIndexMap).field_0x34) {
          puVar2 = *(undefined1 **)&(this->MorphTargetIndexMap).field_0x40;
          puVar11 = &(this->MorphTargetIndexMap).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar11 = puVar2;
          }
          iVar10 = *(int *)(puVar11 +
                           (ulonglong)
                           (*(int *)&(this->MorphTargetIndexMap).field_0x48 - 1U &
                           (int)((ulonglong)piVar4 >> 0x20) + uVar7) * 4);
          if (iVar10 != -1) {
            do {
              lVar13 = *(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x14;
              if (*(int **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x14) == piVar4) {
                uVar9 = lVar13 + 8;
                if (lVar13 == 0) {
                  uVar9 = 0;
                }
                if (uVar9 != 0) goto LAB_1485ccd9b;
                break;
              }
              iVar10 = *(int *)(lVar13 + 0xc);
            } while (iVar10 != -1);
          }
        }
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
                  ((USkinnedAsset *)this,0x4000000000,ReadWrite);
        local_48 = &local_res18.Value;
        local_40 = local_res8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00,&local_res18,(bool *)&local_48);
      }
      else {
        lVar13 = (longlong)(int)local_res8[0];
        uVar12 = ~local_res8[0];
        uVar7 = 0;
        if ((int)local_res8[0] < *(int *)&pFVar8[1].Data) {
          uVar7 = uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar10 = *(int *)&pFVar8[1].Data + uVar12;
        if (iVar10 != 0) {
          memmove(pFVar8->Data + lVar13 * 8,pFVar8->Data + lVar13 * 8 + 8,(longlong)iVar10 << 3);
        }
        *(int *)&pFVar8[1].Data = *(int *)&pFVar8[1].Data + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,pFVar8,*(int *)&pFVar8[1].Data,(int *)((longlong)&pFVar8[1].Data + 4));
        local_res8[0] = local_res8[0] - 1;
      }
LAB_1485ccd9b:
      iVar10 = *(int *)&pFVar8[1].Data;
      local_res8[0] = local_res8[0] + 1;
      uVar9 = (ulonglong)local_res8[0];
    } while ((int)local_res8[0] < iVar10);
  }
  if (!bVar14) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// InitMorphTargetsAndRebuildRenderData @ 1485cce00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USkeletalMesh::InitMorphTargetsAndRebuildRenderData(USkeletalMesh *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  USkeletalMesh *pUVar6;
  longlong lVar7;
  TObjectIterator<USkeletalMeshComponent> local_28;
  
  InitMorphTargets(this,false);
  bVar2 = IsInGameThread();
  if (bVar2) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkeletalMeshComponent>::Advance(&local_28);
      lVar7 = (longlong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset
                         (*(USkeletalMeshComponent **)
                           (local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8));
      if (pUVar6 == this) {
        lVar7 = (longlong)local_28.Index;
        uVar4 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar4 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        (**(code **)(**(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) +
                    0xc28))();
      }
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// InitResources @ 1485ccf70

void __thiscall USkeletalMesh::InitResources(USkeletalMesh *this)

{
  byte bVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FSkeletalMeshRenderData *this_00;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  byte bVar16;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1039,L"SkeletalMesh/InitResources");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1039,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name1039,true);
  USkinnedAsset::UpdateUVChannelData((USkinnedAsset *)this,false);
  this->_padding_ = 0;
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    uVar15 = 0;
    bVar8 = true;
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    if (0 < (((this->SkeletalMeshRenderData).Ptr)->LODRenderData).Array.ArrayNum) {
      lVar13 = 0;
      do {
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
                  ((USkinnedAsset *)this,0x1000,ReadWrite);
        pFVar3 = (this->SkeletalMeshRenderData).Ptr;
        uVar9 = 0;
        if ((int)uVar15 < (pFVar3->LODRenderData).Array.ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)((pFVar3->LODRenderData).Array.AllocatorInstance.Data + lVar13);
        if ((*(int *)(lVar4 + 300) == 0) &&
           (((*(byte *)(lVar4 + 0x658) & 2) == 0 || (*(int *)(lVar4 + 0x528) != 0)))) {
          bVar8 = false;
          break;
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 8;
        USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
                  ((USkinnedAsset *)this,0x1000,ReadWrite);
      } while ((int)uVar15 < (((this->SkeletalMeshRenderData).Ptr)->LODRenderData).Array.ArrayNum);
    }
    iVar2 = (this_00->LODRenderData).Array.ArrayNum;
    iVar10 = (**(code **)(this->_padding_ + 0x448))(this,1);
    bVar7 = this_00->NumInlinedLODs;
    *(byte *)((longlong)&this->_padding_ + 1) = bVar7;
    bVar1 = this_00->NumNonOptionalLODs;
    *(byte *)((longlong)&this->_padding_ + 2) = bVar1;
    iVar12 = iVar2;
    if (iVar2 - iVar10 < iVar2) {
      iVar12 = iVar2 - iVar10;
    }
    bVar16 = this_00->NumInlinedLODs;
    if ((int)(uint)this_00->NumInlinedLODs < iVar12) {
      bVar16 = (byte)iVar12;
    }
    *(char *)((longlong)&this->_padding_ + 4) = (char)iVar10;
    *(byte *)((longlong)&this->_padding_ + 3) = bVar16;
    bVar11 = bVar16;
    if (bVar1 < bVar16) {
      bVar11 = bVar1;
    }
    *(uchar *)((longlong)&this->_padding_ + 7) = this_00->LODBiasModifier;
    *(byte *)((longlong)&this->_padding_ + 2) = bVar11;
    cVar14 = (char)iVar2 - this_00->CurrentFirstLODIdx;
    lVar13 = this->_padding_;
    *(char *)((longlong)&this->_padding_ + 5) = cVar14;
    *(char *)((longlong)&this->_padding_ + 6) = cVar14;
    if ((((lVar13 & 1) == 0) && (bVar8)) && (bVar7 != bVar16)) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
    *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar7;
    bVar8 = (bool)(**(code **)(this->_padding_ + 0x470))(this);
    FSkeletalMeshRenderData::InitResources(this_00,bVar8,(USkinnedAsset *)this);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  }
  UStreamableRenderAsset::LinkStreaming((UStreamableRenderAsset *)this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// IsMaterialUsed @ 1485cde70

bool __thiscall USkeletalMesh::IsMaterialUsed(USkeletalMesh *this,int param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_res18;
  longlong local_res20;
  
  pTVar4 = CVarSkeletalMeshLODMaterialReference.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 0) {
LAB_1485ce124:
    bVar5 = true;
  }
  else {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
    pFVar1 = (this->SkeletalMeshRenderData).Ptr;
    if (pFVar1 != (FSkeletalMeshRenderData *)0x0) {
      iVar11 = (pFVar1->LODRenderData).Array.ArrayNum;
      local_res18 = 0;
      if (0 < iVar11) {
        local_res20 = 0;
        do {
          uVar12 = 0;
          if ((int)local_res18 < iVar11) {
            uVar12 = ~local_res18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          lVar7 = *(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + local_res20);
          if (*(int *)(lVar7 + 0x528) != 0) {
            lVar8 = (**(code **)(this->_padding_ + 0x328))(this,local_res18);
            uVar12 = 0;
            lVar15 = 0;
            if (0 < *(int *)(lVar7 + 0x18)) {
              lVar14 = 0;
              do {
                uVar13 = ~uVar12 >> 0x1f;
                uVar10 = 0;
                if ((int)uVar12 < *(int *)(lVar7 + 0x18)) {
                  uVar10 = uVar13;
                }
                if ((uVar10 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                lVar2 = *(longlong *)(lVar7 + 0x10);
                if ((int)uVar12 < *(int *)(lVar8 + 0x10)) {
                  lVar9 = (**(code **)(this->_padding_ + 0x3c0))();
                  uVar10 = 0;
                  if ((int)uVar12 < *(int *)(lVar8 + 0x10)) {
                    uVar10 = uVar13;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar6 = (*pcVar3)();
                    return (bool)uVar6;
                  }
                  iVar11 = *(int *)(*(longlong *)(lVar8 + 8) + lVar15 * 4);
                  if ((iVar11 < 0) || (*(int *)(lVar9 + 8) <= iVar11)) goto LAB_1485ce0ba;
                  uVar10 = 0;
                  if ((int)uVar12 < *(int *)(lVar8 + 0x10)) {
                    uVar10 = uVar13;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar6 = (*pcVar3)();
                    return (bool)uVar6;
                  }
                  uVar10 = *(uint *)(*(longlong *)(lVar8 + 8) + lVar15 * 4);
                }
                else {
LAB_1485ce0ba:
                  uVar10 = (uint)*(ushort *)(lVar2 + lVar14);
                }
                if (uVar10 == param_1) goto LAB_1485ce124;
                uVar12 = uVar12 + 1;
                lVar15 = lVar15 + 1;
                lVar14 = lVar14 + 0x118;
              } while ((int)uVar12 < *(int *)(lVar7 + 0x18));
            }
          }
          local_res18 = local_res18 + 1;
          local_res20 = local_res20 + 8;
          iVar11 = (pFVar1->LODRenderData).Array.ArrayNum;
        } while ((int)local_res18 < iVar11);
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// IsMinLodQualityLevelEnable @ 1485ce160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall USkeletalMesh::IsMinLodQualityLevelEnable(USkeletalMesh *this)

{
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseSkeletalMeshMinLODPerQualityLevels != false)) {
    return true;
  }
  return false;
}

// IsPostLoadThreadSafe @ 1485ce310

bool __thiscall USkeletalMesh::IsPostLoadThreadSafe(USkeletalMesh *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 1485ce320

bool __thiscall USkeletalMesh::IsReadyForFinishDestroy(USkeletalMesh *this)

{
  bool bVar1;
  FSkeletalMeshRenderData *this_00;
  
  bVar1 = UStreamableRenderAsset::IsReadyForFinishDestroy((UStreamableRenderAsset *)this);
  if (bVar1) {
    bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
    if (!bVar1) {
      this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
      if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
        FSkeletalMeshRenderData::ReleaseResources(this_00);
        FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
      }
      bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
      return bVar1;
    }
  }
  return false;
}

// IsSectionUsingCloth @ 1485ce410

bool __thiscall USkeletalMesh::IsSectionUsingCloth(USkeletalMesh *this,int param_1,bool param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  undefined7 in_register_00000081;
  longlong *plVar10;
  undefined1 local_res8 [8];
  
  plVar7 = (longlong *)
           (**(code **)(this->_padding_ + 0x398))
                     (this,CONCAT44(in_register_00000014,param_1),
                      CONCAT71(in_register_00000081,param_2));
  if (plVar7 != (longlong *)0x0) {
    plVar10 = (longlong *)*plVar7;
    lVar9 = plVar7[1];
    plVar1 = plVar10 + (int)lVar9;
    while( true ) {
      if ((int)plVar7[1] != (int)lVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar10 == plVar1) {
        return false;
      }
      lVar3 = *plVar10;
      if ((-1 < param_1) && (param_1 < *(int *)(lVar3 + 0x18))) break;
      plVar10 = plVar10 + 1;
    }
    uVar8 = 0;
    if (param_1 < *(int *)(lVar3 + 0x18)) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar9 = *(longlong *)(lVar3 + 0x10) + (longlong)param_1 * 0x118;
    iVar2 = *(int *)(lVar9 + 0x30);
    if (iVar2 != 0) {
      if ((iVar2 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(*(longlong *)(lVar9 + 0x28) + 8) != 0) {
        return true;
      }
    }
  }
  return false;
}

// IsSocketOnMesh @ 1485ce590

bool __thiscall USkeletalMesh::IsSocketOnMesh(USkeletalMesh *this,FName *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->Sockets).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Sockets).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)((this->Sockets).AllocatorInstance.Data + lVar7);
      if ((lVar1 != 0) && (*(FName *)(lVar1 + 0x28) == *param_1)) {
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Sockets).ArrayNum);
  }
  return false;
}

// IsSourceModelValid @ 1485ce660

bool __thiscall USkeletalMesh::IsSourceModelValid(USkeletalMesh *this,int param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  if ((-1 < param_1) && (param_1 < (this->SourceModels).ArrayNum)) {
    return true;
  }
  return false;
}

// IsValidLODIndex @ 1485ce6b0

bool __thiscall USkeletalMesh::IsValidLODIndex(USkeletalMesh *this,int param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x40,ReadWrite);
  if ((-1 < param_1) && (param_1 < (this->SourceModels).ArrayNum)) {
    return true;
  }
  return false;
}

// K2_GetAllMorphTargetNames @ 1485ce930

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::K2_GetAllMorphTargetNames
          (USkeletalMesh *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x450))();
  plVar10 = (longlong *)*plVar6;
  lVar3 = plVar6[1];
  plVar1 = plVar10 + (int)lVar3;
  while( true ) {
    if ((int)plVar6[1] != (int)lVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMorphTarget>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar10 == plVar1) break;
    local_res10 = *(FName *)(*plVar10 + 0x18);
    pFVar7 = (FScriptContainerElement *)::FName::ToString(&local_res10,&local_48);
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar9 <= pFVar7) && (pFVar7 < pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 8) = *(int *)&pFVar7[8].field_0x0;
    *(int *)(pFVar9 + 0xc) = *(int *)&pFVar7[0xc].field_0x0;
    *(undefined8 *)&pFVar7[8].field_0x0 = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    plVar10 = plVar10 + 1;
  }
  return __return_storage_ptr__;
}

// K2_GetAllSkinWeightProfileNames @ 1485ceaa0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
USkeletalMesh::K2_GetAllSkinWeightProfileNames
          (USkeletalMesh *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  FName *this_00;
  undefined1 local_res8 [8];
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x200000,ReadOnly);
  iVar1 = (this->SkinWeightProfiles).ArrayNum;
  this_00 = (FName *)(this->SkinWeightProfiles).AllocatorInstance.Data;
  pFVar8 = this_00 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->SkinWeightProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkinWeightProfileInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar8) break;
    pFVar5 = (FScriptContainerElement *)::FName::ToString(this_00,&local_38);
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= pFVar5) && (pFVar5 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 8) = *(int *)&pFVar5[8].field_0x0;
    *(int *)(pFVar7 + 0xc) = *(int *)&pFVar5[0xc].field_0x0;
    *(undefined8 *)&pFVar5[8].field_0x0 = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 2;
  }
  return __return_storage_ptr__;
}

// NeedCPUData @ 1485cff80

bool __thiscall USkeletalMesh::NeedCPUData(USkeletalMesh *this,int param_1)

{
  bool bVar1;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000,ReadOnly);
  bVar1 = FSkeletalMeshSamplingInfo::IsSamplingEnabled(&this->SamplingInfo,this,param_1);
  return bVar1;
}

// NumSockets @ 1485d0f00

int __thiscall USkeletalMesh::NumSockets(USkeletalMesh *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x400))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(this->_padding_ + 0x400))(this);
    return (this->Sockets).ArrayNum + *(int *)(lVar1 + 0x1b0);
  }
  return (this->Sockets).ArrayNum;
}

// OnLodStrippingQualityLevelChanged @ 1485d0f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl USkeletalMesh::OnLodStrippingQualityLevelChanged(IConsoleVariable *param_1)

{
  USkinnedAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<USkeletalMesh> local_38;
  FSkinnedMeshComponentRecreateRenderStateContext local_20;
  
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseSkeletalMeshMinLODPerQualityLevels != false)) {
    local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectArray.ArrayNum = 0;
    local_38.ObjectArray.ArrayMax = 0;
    local_38.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = StaticClass();
    GetObjectsOfClass(pUVar6,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkeletalMesh>::Advance(&local_38);
      lVar7 = (longlong)local_38.Index;
      if (local_38.Index < 0) break;
      if (local_38.ObjectArray.ArrayNum <= local_38.Index) break;
      uVar5 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar1 = *(USkinnedAsset **)(local_38.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
      if ((pUVar1 != (USkinnedAsset *)0x0) &&
         (0 < *(int *)&pUVar1[2].field_0x70 - *(int *)&pUVar1[2].field_0x9c)) {
        FSkinnedMeshComponentRecreateRenderStateContext::
        FSkinnedMeshComponentRecreateRenderStateContext(&local_20,pUVar1,false);
        FSkinnedMeshComponentRecreateRenderStateContext::
        ~FSkinnedMeshComponentRecreateRenderStateContext(&local_20);
      }
    }
    if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// PostInitProperties @ 1485d2030

void __thiscall USkeletalMesh::PostInitProperties(USkeletalMesh *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  USkeletalMesh *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (USkeletalMesh **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(USkeletalMesh **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 1485d2450

void __thiscall USkeletalMesh::PostLoad(USkeletalMesh *this)

{
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(local_res18,SkeletalMesh,true);
  USkinnedAsset::PostLoad((USkinnedAsset *)this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// PreSave @ 1485d24b0

void __thiscall USkeletalMesh::PreSave(USkeletalMesh *this,FObjectPreSaveContext param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FScriptContainerElement *local_res8;
  
  lVar3 = (**(code **)(this->_padding_ + 800))();
  if (*(int *)(lVar3 + 0x28) != 0) {
    lVar3 = (**(code **)(this->_padding_ + 800))(this);
    if (*(int *)(lVar3 + 0x28) < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(*(longlong *)(lVar3 + 0x20) + 8) != -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GetRefSkeleton().GetNum() == 0) || (GetRefSkeleton().GetRefBoneInfo()[0].ParentIndex == INDEX_NONE)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x9a2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res8 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8 + 0x9c) = *(int *)(local_res8 + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)&local_res8);
  return;
}

// RebuildSocketMap @ 1485d43f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USkeletalMesh::RebuildSocketMap(USkeletalMesh *this)

{
  TMap<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  TQuat<double> *pTVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [8];
  FSocketInfo *local_1d0;
  double *local_1c8;
  longlong local_1c0;
  double *local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  TQuat<double> local_168;
  TQuat<double> local_148;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  uint local_c0;
  int local_bc;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x1414,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->SocketMap;
  TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
           *)this_00);
  lVar5 = (**(code **)(this->_padding_ + 0x408))();
  if (lVar5 == 0) {
    iVar10 = 0;
  }
  else {
    lVar5 = (**(code **)(this->_padding_ + 0x408))(this);
    iVar10 = *(int *)(lVar5 + 0x1b0);
  }
  TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
             *)this_00,(this->Sockets).ArrayNum + iVar10);
  uVar12 = 0;
  if (0 < (this->Sockets).ArrayNum) {
    lVar5 = 0;
    do {
      iVar10 = (this->Sockets).ArrayNum;
      uVar4 = 0;
      if ((int)uVar12 < iVar10) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_1e8 = (longlong)(int)uVar12;
        local_1e0 = (longlong)iVar10;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar9 = *(longlong *)((this->Sockets).AllocatorInstance.Data + lVar5);
      pTVar6 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)(lVar9 + 0x50),&local_168)
      ;
      local_f8 = *(undefined8 *)(lVar9 + 0x48);
      local_1a8 = pTVar6->X;
      dStack_1a0 = pTVar6->Y;
      local_198 = pTVar6->Z;
      dStack_190 = pTVar6->W;
      local_108 = *(undefined4 *)(lVar9 + 0x38);
      uStack_104 = *(undefined4 *)(lVar9 + 0x3c);
      uStack_100 = (undefined4)*(undefined8 *)(lVar9 + 0x40);
      uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x40) >> 0x20);
      local_e8 = *(undefined4 *)(lVar9 + 0x68);
      uStack_e4 = *(undefined4 *)(lVar9 + 0x6c);
      uStack_e0 = (undefined4)*(undefined8 *)(lVar9 + 0x70);
      uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x70) >> 0x20);
      uStack_f0 = 0;
      local_d8 = *(undefined8 *)(lVar9 + 0x78);
      uStack_d0 = 0;
      local_128 = local_1a8;
      dStack_120 = dStack_1a0;
      local_118 = local_198;
      dStack_110 = dStack_190;
      local_c8 = lVar9;
      local_c0 = uVar12;
      lVar7 = (**(code **)(this->_padding_ + 0x318))(this);
      iVar10 = -1;
      if ((*(FName *)(lVar9 + 0x30) != (FName)0x0) &&
         (piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)(lVar7 + 0x90),*(FName *)(lVar9 + 0x30)), piVar8 != (int *)0x0)) {
        iVar10 = *piVar8;
      }
      local_1d0 = (FSocketInfo *)(lVar9 + 0x28);
      local_1c8 = &local_128;
      local_bc = iVar10;
      TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,USkeletalMesh::FSocketInfo_&&>_>
                ((TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<FName_const_&,USkeletalMesh::FSocketInfo_&&> *)local_1d8,
                 (bool *)&local_1d0);
      uVar12 = uVar12 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar12 < (this->Sockets).ArrayNum);
  }
  lVar5 = (**(code **)(this->_padding_ + 0x408))(this);
  if (lVar5 != 0) {
    uVar12 = 0;
    lVar5 = (**(code **)(this->_padding_ + 0x408))(this);
    if (0 < *(int *)(lVar5 + 0x1b0)) {
      lVar5 = 0;
      do {
        lVar9 = (**(code **)(this->_padding_ + 0x408))();
        uVar4 = 0;
        if ((int)uVar12 < *(int *)(lVar9 + 0x1b0)) {
          uVar4 = ~uVar12 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_1e8 = (longlong)(int)uVar12;
          local_1e0 = (longlong)*(int *)(lVar9 + 0x1b0);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar9 = *(longlong *)(lVar5 + *(longlong *)(lVar9 + 0x1a8));
        lVar7 = *(longlong *)(lVar9 + 0x28);
        uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar7);
        if (*(int *)&(this->SocketMap).field_0x8 != *(int *)&(this->SocketMap).field_0x34) {
          puVar1 = *(undefined1 **)&(this->SocketMap).field_0x40;
          puVar11 = &(this->SocketMap).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar11 = puVar1;
          }
          iVar10 = *(int *)(puVar11 +
                           (ulonglong)
                           (*(int *)&(this->SocketMap).field_0x48 - 1U &
                           (int)((ulonglong)lVar7 >> 0x20) + uVar4) * 4);
          if (iVar10 != -1) {
            do {
              if (*(longlong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x90) == lVar7
                 ) {
                if (iVar10 != -1) goto LAB_1485d480c;
                break;
              }
              iVar10 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x80 + (longlong)iVar10 * 0x90);
            } while (iVar10 != -1);
          }
        }
        iVar10 = (this->Sockets).ArrayNum;
        pTVar6 = UE::Math::TRotator<double>::Quaternion
                           ((TRotator<double> *)(lVar9 + 0x50),&local_148);
        local_88 = *(undefined8 *)(lVar9 + 0x48);
        local_188 = pTVar6->X;
        dStack_180 = pTVar6->Y;
        local_178 = pTVar6->Z;
        dStack_170 = pTVar6->W;
        local_98 = *(undefined4 *)(lVar9 + 0x38);
        uStack_94 = *(undefined4 *)(lVar9 + 0x3c);
        uStack_90 = (undefined4)*(undefined8 *)(lVar9 + 0x40);
        uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x40) >> 0x20);
        local_78 = *(undefined4 *)(lVar9 + 0x68);
        uStack_74 = *(undefined4 *)(lVar9 + 0x6c);
        uStack_70 = (undefined4)*(undefined8 *)(lVar9 + 0x70);
        uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x70) >> 0x20);
        uStack_80 = 0;
        local_68 = *(undefined8 *)(lVar9 + 0x78);
        uStack_60 = 0;
        local_b8 = local_188;
        dStack_b0 = dStack_180;
        local_a8 = local_178;
        dStack_a0 = dStack_170;
        local_58 = lVar9;
        local_50 = iVar10 + uVar12;
        lVar7 = (**(code **)(this->_padding_ + 0x318))(this);
        iVar10 = -1;
        if ((*(FName *)(lVar9 + 0x30) != (FName)0x0) &&
           (piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)(lVar7 + 0x90),*(FName *)(lVar9 + 0x30)), piVar8 != (int *)0x0)) {
          iVar10 = *piVar8;
        }
        local_1b8 = &local_b8;
        local_1c0 = lVar9 + 0x28;
        local_4c = iVar10;
        TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,USkeletalMesh::FSocketInfo_&&>_>
                  ((TSet<TTuple<FName,USkeletalMesh::FSocketInfo>,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<FName_const_&,USkeletalMesh::FSocketInfo_&&> *)(local_1d8 + 4),
                   (bool *)&local_1c0);
LAB_1485d480c:
        uVar12 = uVar12 + 1;
        lVar5 = lVar5 + 8;
        lVar9 = (**(code **)(this->_padding_ + 0x408))(this);
      } while ((int)uVar12 < *(int *)(lVar9 + 0x1b0));
    }
  }
  return;
}

// RegisterMorphTarget @ 1485d5080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
USkeletalMesh::RegisterMorphTarget(USkeletalMesh *this,UMorphTarget *param_1,bool param_2)

{
  int *piVar1;
  USkeletalMesh *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UMorphTarget *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ForAnyElementType *pFVar11;
  TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> *this_01;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  UMorphTarget *local_res10;
  char local_res18;
  FName local_res20;
  UMorphTarget *local_78;
  UMorphTarget **local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  
  if (param_1 == (UMorphTarget *)0x0) {
    return false;
  }
  this_00 = (param_1->BaseSkelMesh).field0_0x0.DebugPtr;
  uVar15 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this_00 != (USkeletalMesh *)0x0) && (this_00 != this)) {
    lVar9 = (**(code **)(this_00->_padding_ + 0x458))(this_00);
    uVar14 = uVar15;
    uVar16 = uVar15;
    if (0 < *(int *)(lVar9 + 8)) {
      do {
        plVar10 = (longlong *)(**(code **)(this_00->_padding_ + 0x458))(this_00);
        uVar13 = (uint)uVar14;
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar10[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(UMorphTarget **)(uVar16 + *plVar10) == (UMorphTarget *)0x0) {
          bVar5 = param_1 == (UMorphTarget *)0x0;
        }
        else {
          bVar5 = *(UMorphTarget **)(uVar16 + *plVar10) == param_1;
        }
        pcVar3 = *(code **)(this_00->_padding_ + 0x458);
        if (bVar5) {
          this_01 = (TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)(this_00);
          TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_01,uVar13,Default);
          InitMorphTargetsAndRebuildRenderData(this_00);
          goto LAB_1485d51ec;
        }
        lVar9 = (*pcVar3)();
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar13 + 1) < *(int *)(lVar9 + 8));
    }
    if (4 < (byte)LogSkeletalMesh._0_1_) {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,&local_60);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1485d51ec:
  cVar7 = (**(code **)(local_res10->_padding_ + 0x2e0))(local_res10);
  if (cVar7 == '\0') {
    local_70 = &local_res10;
    `USkeletalMesh::RegisterMorphTarget'::__l5::<lambda_1>::operator()(&local_70);
  }
  pUVar4 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar4->BaseSkelMesh).field0_0x0.DebugPtr = this;
  lVar9 = local_res10->_padding_;
  pFVar11 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x458))(this);
  iVar8 = *(int *)&pFVar11[1].Data;
  uVar14 = uVar15;
  if (0 < iVar8) {
    do {
      uVar13 = (uint)uVar15;
      uVar12 = 0;
      if ((int)uVar13 < iVar8) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(longlong *)(*(longlong *)(pFVar11->Data + uVar14) + 0x18) == lVar9) {
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          local_68 = (FName)local_res10->_padding_;
          ::FName::ToString(&local_68,&local_50);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&pFVar11[1].Data) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pUVar4 = local_res10;
        pFVar2 = pFVar11->Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res10 != (UMorphTarget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10);
        }
        *(UMorphTarget **)(pFVar2 + (longlong)(int)uVar13 * 8) = pUVar4;
        goto LAB_1485d5382;
      }
      iVar8 = *(int *)&pFVar11[1].Data;
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar13 + 1) < iVar8);
  }
  local_78 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UMorphTarget *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if (((pFVar11->Data <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar8 = *(int *)&pFVar11[1].Data;
  piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar11,piVar1);
  }
  *(int *)&pFVar11[1].Data = iVar8 + 1;
  *(UMorphTarget **)(pFVar11->Data + (longlong)iVar8 * 8) = local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UMorphTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
LAB_1485d5382:
  if (local_res18 != '\0') {
    InitMorphTargetsAndRebuildRenderData(this);
  }
  return true;
}

// ReleaseCPUResources @ 1485d5b80

void __thiscall USkeletalMesh::ReleaseCPUResources(USkeletalMesh *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x398))();
  if ((plVar5 != (longlong *)0x0) && (uVar6 = 0, 0 < (int)plVar5[1])) {
    lVar7 = 0;
    do {
      cVar2 = (**(code **)(this->_padding_ + 0x468))(this,uVar6);
      if (cVar2 == '\0') {
        uVar4 = 0;
        if ((int)uVar6 < (int)plVar5[1]) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FSkeletalMeshLODRenderData::ReleaseCPUResources
                  (*(FSkeletalMeshLODRenderData **)(lVar7 + *plVar5),false);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (int)plVar5[1]);
  }
  return;
}

// ReleaseResources @ 1485d5c50

void __thiscall USkeletalMesh::ReleaseResources(USkeletalMesh *this)

{
  FSkeletalMeshRenderData *this_00;
  
  this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))();
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
    FSkeletalMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
    return;
  }
  return;
}

// ReleaseSkinWeightProfileResources @ 1485d5ca0

void __thiscall USkeletalMesh::ReleaseSkinWeightProfileResources(USkeletalMesh *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x398))();
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar3;
    iVar2 = (int)plVar3[1];
    plVar1 = plVar4 + iVar2;
    while( true ) {
      if ((int)plVar3[1] != iVar2) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar4 == plVar1) break;
      FSkinWeightProfilesData::ReleaseResources((FSkinWeightProfilesData *)(*plVar4 + 0x328));
      plVar4 = plVar4 + 1;
    }
  }
  return;
}

// RemoveLODInfo @ 1485d6210

void __thiscall USkeletalMesh::RemoveLODInfo(USkeletalMesh *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSkeletalMeshLODInfo *this_00;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80040,ReadWrite);
  if ((-1 < param_1) && (param_1 < (this->SourceModels).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->SourceModels).ArrayNum) {
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
    this_00 = (FSkeletalMeshLODInfo *)
              ((this->SourceModels).AllocatorInstance.Data + (longlong)param_1 * 0x150);
    pvVar2 = *(void **)&this_00[1].ReductionSettings.WeldingThreshold;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    pvVar2 = *(void **)&this_00[1].ReductionSettings.MaxNumOfVerts;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FSkeletalMeshLODInfo::~FSkeletalMeshLODInfo(this_00);
    iVar6 = (this->SourceModels).ArrayNum + ~param_1;
    if (iVar6 != 0) {
      memmove(this_00,&this_00[1].BonesToRemove.ArrayNum,(longlong)iVar6 * 0x150);
    }
    piVar1 = &(this->SourceModels).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,&(this->SourceModels).AllocatorInstance,(this->SourceModels).ArrayNum,
               &(this->SourceModels).ArrayMax);
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3817078023119702689>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                     ,0xaa1,"SourceModels.IsValidIndex(InLODIndex)");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// RemoveSourceModel @ 1485d68d0

void __thiscall USkeletalMesh::RemoveSourceModel(USkeletalMesh *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSkeletalMeshLODInfo *this_00;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80040,ReadWrite);
  if ((-1 < param_1) && (param_1 < (this->SourceModels).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->SourceModels).ArrayNum) {
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
    this_00 = (FSkeletalMeshLODInfo *)
              ((this->SourceModels).AllocatorInstance.Data + (longlong)param_1 * 0x150);
    pvVar2 = *(void **)&this_00[1].ReductionSettings.WeldingThreshold;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    pvVar2 = *(void **)&this_00[1].ReductionSettings.MaxNumOfVerts;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FSkeletalMeshLODInfo::~FSkeletalMeshLODInfo(this_00);
    iVar6 = (this->SourceModels).ArrayNum + ~param_1;
    if (iVar6 != 0) {
      memmove(this_00,&this_00[1].BonesToRemove.ArrayNum,(longlong)iVar6 * 0x150);
    }
    piVar1 = &(this->SourceModels).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,&(this->SourceModels).AllocatorInstance,(this->SourceModels).ArrayNum,
               &(this->SourceModels).ArrayMax);
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3817078023119702689>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                     ,0xaa1,"SourceModels.IsValidIndex(InLODIndex)");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// RemoveUserDataOfClass @ 1485d6a20

void __thiscall
USkeletalMesh::RemoveUserDataOfClass(USkeletalMesh *this,TSubclassOf<UAssetUserData> param_1)

{
  undefined1 *puVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar11 = (UObject *)0x0;
  pUVar8 = pUVar11;
  pUVar10 = pUVar11;
  if (0 < *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data) {
    do {
      uVar9 = (uint)pUVar8;
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data) {
        uVar5 = ~uVar9 >> 0x1f;
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
      lVar2 = *(longlong *)
               (&pUVar10->field_0x0 +
               *(longlong *)&(this->RefSkeleton).FinalNameToIndexMap.field_0x48);
      if (lVar2 != 0) {
        pUVar8 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_1485d6ade;
LAB_1485d6b0c:
          pUVar8 = pUVar11;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_1485d6b0c;
          UE::GC::MarkAsReachable(pUVar8);
LAB_1485d6ade:
          pUVar7 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_1485d6b0c;
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar6 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1485d6b0c;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
            &pUVar8[1].field_0x8)) {
          puVar1 = &(this->RefSkeleton).FinalNameToIndexMap.field_0x48;
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data)
          {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 8);
          iVar6 = (*(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data - uVar9)
                  + -1;
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
          }
          iVar6 = *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data + -1;
          *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)puVar1,iVar6,
                     (int *)((longlong)
                             &(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data + 4));
          return;
        }
      }
      pUVar8 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar10 = (UObject *)&pUVar10->field_0x8;
    } while ((int)(uVar9 + 1) <
             *(int *)&(this->RefSkeleton).RequiredVirtualBones.AllocatorInstance.Data);
  }
  return;
}

// ResetLODInfo @ 1485d6fc0

void __thiscall USkeletalMesh::ResetLODInfo(USkeletalMesh *this)

{
  SetNumSourceModels(this,0);
  return;
}

// Serialize @ 1485d7890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall USkeletalMesh::Serialize(USkeletalMesh *this,FArchive *param_1)

{
  uint *puVar1;
  Type TVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> TVar8;
  TObjectPtr<UBodySetup>_u_0 TVar9;
  bool bVar10;
  bool bVar11;
  EShaderPlatform EVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeletalMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_SkeletalMesh_Serialize>
  FVar17;
  FArchive *pFVar18;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar19;
  FReferenceSkeleton *pFVar20;
  USkeleton *pUVar21;
  FSkeletalMeshRenderData *pFVar22;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  FNameEntryId FVar25;
  uint uVar26;
  uint uVar27;
  FName FVar28;
  byte bVar29;
  FSkeletalMeshRenderData *pFVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auStackY_208 [32];
  uint local_1a4;
  float local_1a0 [2];
  uint local_198;
  uint uStack_194;
  FLLMScope local_190;
  FStripDataFlags local_18c [2];
  FColor_u_0 local_188 [2];
  void *local_180;
  undefined8 local_178;
  FString local_170;
  FName local_160;
  TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> local_158;
  FName local_150;
  TObjectPtr<UBodySetup>_u_0 local_148;
  FName local_140;
  TArray<float,TSizedDefaultAllocator<32>_> local_130;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_120;
  FSkeletalMeshRenderData *local_110;
  FMemScope local_108;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 TStack_e8;
  double local_d0;
  FName local_c8;
  FName local_c0;
  FString local_b8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1910,L"SkeletalMesh/Serialize");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_190,LLMScope_Name1910,false,None,Default,true);
  FMemScope::FMemScope(&local_108,&LLMScope_Name1910,true);
  pFVar30 = (FSkeletalMeshRenderData *)0x0;
  if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_SkeletalMesh_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeletalMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_SkeletalMesh_Serialize>
         )0x0) {
      pFVar16 = ::FName::FName(&local_c8,"STAT_SkeletalMesh_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMesh_Serialize,*pFVar16,
                 L"USkeletalMesh::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar17 = StatPtr_STAT_SkeletalMesh_Serialize;
  if (StatPtr_STAT_SkeletalMesh_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeletalMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_SkeletalMesh_Serialize>
       )0x0) {
    pFVar16 = ::FName::FName(&local_c0,"STAT_SkeletalMesh_Serialize");
    FVar17 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeletalMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_SkeletalMesh_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMesh_Serialize,*pFVar16
                          ,L"USkeletalMesh::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar17;
  bVar6 = false;
  bVar7 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar10 = false;
  bVar31 = false;
  FVar25 = FVar28.ComparisonIndex.Value;
  uVar27 = FVar28.Number;
  if ((FVar25.Value == 0) && (uVar27 == 0)) {
LAB_1485d7a6e:
    bVar7 = bVar31;
    bVar6 = bVar10;
    bVar10 = false;
    local_150 = local_140;
    FVar28 = local_140;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar10 = false;
      bVar31 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar25.Value;
        local_160.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                   ,0x777);
        bVar6 = true;
        bVar7 = true;
        bVar10 = true;
        bVar31 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1485d7a6e;
    local_198 = FVar25.Value;
    uStack_194 = uVar27;
    local_150 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar10 = true;
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1912,"USkeletalMesh::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
               ,0x778);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1912);
  }
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSkeletalMeshCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  FStripDataFlags::FStripDataFlags(local_18c,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x10000000000,ReadOnly);
  local_100._s_0.X = (this->ImportedBounds).Origin.field0_0x0._s_0.X;
  local_100._s_0.Y = (this->ImportedBounds).Origin.field0_0x0._s_0.Y;
  local_100._s_0.Z = (this->ImportedBounds).Origin.field0_0x0._s_0.Z;
  TStack_e8._s_0.X = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.X;
  TStack_e8._s_0.Y = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Y;
  TStack_e8._s_0.Z = (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Z;
  local_d0 = (this->ImportedBounds).SphereRadius;
  pFVar18 = UE::Math::operator<<(param_1,(TVector<double> *)&local_100._s_0);
  UE::Math::operator<<(pFVar18,(TVector<double> *)&TStack_e8._s_0);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.IsLoading()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\BoxSphereBounds.h"
                            ,0x1a2,L"float -> double conversion applied outside of load!"), bVar32))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1a0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_1a0);
      }
    }
    else {
      local_1a0[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_d0 = (double)local_1a0[0];
  }
  else {
    ::operator<<(param_1,&local_d0);
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x10000000000,ReadWrite);
  (this->ImportedBounds).Origin.field0_0x0._s_0.X = local_100._s_0.X;
  (this->ImportedBounds).Origin.field0_0x0._s_0.Y = local_100._s_0.Y;
  (this->ImportedBounds).Origin.field0_0x0._s_0.Z = local_100._s_0.Z;
  (this->ImportedBounds).BoxExtent.field0_0x0._s_0.X = TStack_e8._s_0.X;
  (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Y = TStack_e8._s_0.Y;
  (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Z = TStack_e8._s_0.Z;
  (this->ImportedBounds).SphereRadius = local_d0;
  CalculateExtendedBounds(this);
  pTVar19 = (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 0x3c8))(this);
  TArrayPrivateFriend::Serialize<FSkeletalMaterial,TSizedDefaultAllocator<32>_>(param_1,pTVar19);
  pFVar20 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
  ::operator<<(param_1,pFVar20);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar20 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    pUVar21 = (USkeleton *)(**(code **)(this->_padding_ + 0x408))(this);
    FReferenceSkeleton::RebuildRefSkeleton(pFVar20,pUVar21,false);
  }
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSkeletalMeshCustomVersion::GUID);
  if (iVar13 < 0xc) goto LAB_1485d8062;
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  bVar32 = SUB41(uVar27,0);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_1a4 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_1a4 = uVar27;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a4,4);
    if (1 < local_1a4) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar27 = local_1a4;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1485d7dbb;
  }
  else {
    uVar27 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
LAB_1485d7dbb:
    bVar32 = uVar27 != 0;
  }
  if (((((*(uint *)&param_1->field_0x34 & 0x1000) != 0) || (bVar32 != false)) &&
      (bVar11 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
      !bVar11)) && ((param_1->field_0x2b & 4) == 0)) {
    if ((param_1->field_0x28 & 1) == 0) {
      if ((param_1->field_0x28 & 4) == 0) goto LAB_1485d8062;
      USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
      local_110 = (this->SkeletalMeshRenderData).Ptr;
      pFVar22 = local_110;
      if (bVar32 != false) {
        local_198 = FSkeletalMeshRenderData::GetMaxBonesPerSection(local_110);
        local_180 = (void *)0x0;
        local_178 = 0;
        pFVar22 = pFVar30;
        if (*(longlong *)&param_1->field_0x68 != 0) {
          pFVar22 = *(FSkeletalMeshRenderData **)(*(longlong *)&param_1->field_0x68 + 8);
        }
        (**(code **)((pFVar22->LODRenderData).Array.AllocatorInstance.Data + 0xb8))
                  (pFVar22,&local_180);
        uVar27 = local_198;
        pFVar22 = pFVar30;
        if (0 < (int)local_178) {
          do {
            uVar26 = (uint)pFVar22;
            uVar14 = 0;
            if ((int)uVar26 < (int)local_178) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            EVar12 = ShaderFormatToLegacyShaderPlatform
                               (*(FName *)((longlong)local_180 + (longlong)(int)uVar26 * 8));
            if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar12].bContainsValidPlatformInfo == 0
                ) && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid(Platform)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                          ,0xe2,L""), bVar32)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TVar2 = FGenericDataDrivenShaderPlatformInfo::Infos[EVar12].MaxFeatureLevel;
            pFVar22 = pFVar30;
            if (*(longlong *)&param_1->field_0x68 != 0) {
              pFVar22 = *(FSkeletalMeshRenderData **)(*(longlong *)&param_1->field_0x68 + 8);
            }
            local_198 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)pFVar22);
            if ((int)local_198 < (int)uVar27) {
              local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_170.Data.ArrayNum = 0;
              local_170.Data.ArrayMax = 0;
              GetFeatureLevelName(TVar2,&local_170);
              if (2 < (byte)LogSkeletalMesh._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&local_b8,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
              }
              if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_170.Data.AllocatorInstance.Data);
              }
            }
            pFVar22 = (FSkeletalMeshRenderData *)(ulonglong)(uVar26 + 1);
            FVar28 = local_150;
          } while ((int)(uVar26 + 1) < (int)local_178);
        }
        pFVar22 = local_110;
        if (local_180 != (void *)0x0) {
          FMemory::Free(local_180);
          pFVar22 = local_110;
        }
      }
    }
    else {
      pFVar22 = ::operator_new(0x30);
      local_158.Ptr = pFVar30;
      if (pFVar22 != (FSkeletalMeshRenderData *)0x0) {
        local_158.Ptr = FSkeletalMeshRenderData::FSkeletalMeshRenderData(pFVar22);
      }
      SetSkeletalMeshRenderData(this,&local_158);
      TVar8.Ptr = local_158.Ptr;
      if (local_158.Ptr != (FSkeletalMeshRenderData *)0x0) {
        FSkeletalMeshRenderData::~FSkeletalMeshRenderData(local_158.Ptr);
        ::operator_delete(TVar8.Ptr,0x30);
      }
      USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
      pFVar22 = (this->SkeletalMeshRenderData).Ptr;
    }
    FSkeletalMeshRenderData::Serialize(pFVar22,param_1,(USkinnedAsset *)this);
  }
LAB_1485d8062:
  iVar13 = 1;
  if ((param_1->field_0x28 & 5) == 0) {
    pTVar23 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
              (**(code **)(this->_padding_ + 0x380))(this);
    TArrayPrivateFriend::Serialize<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>
              (param_1,pTVar23);
  }
  if (*(int *)&param_1->field_0x40 < 0x136) {
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    TSetPrivateFriend::
    Serialize<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              (param_1,&local_a8);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<UObject_*,TSizedDefaultAllocator<32>_>(param_1,&local_120);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar15 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     iVar15 < 10)) {
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&local_130);
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000000000,ReadOnly)
  ;
  if (this->bEnablePerPolyCollision != '\0') {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x2000000000,ReadWrite);
    local_148 = (TObjectPtr<UBodySetup>_u_0)(this->BodySetup).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_148);
    TVar9 = local_148;
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x2000000000,ReadWrite);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar9.DebugPtr != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
    }
    (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)TVar9;
  }
  iVar15 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((iVar15 < 7) && (iVar15 = (**(code **)(this->_padding_ + 0x3d0))(this), 1 < iVar15)) {
    do {
      lVar24 = (**(code **)(this->_padding_ + 0x330))(this,iVar13);
      *(undefined1 *)(lVar24 + 0x48) = 2;
      if (*(float *)(lVar24 + 0x44) == 0.0) {
        *(undefined4 *)(lVar24 + 0x44) = 0x3f800000;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar15);
  }
  if ((((param_1->field_0x28 & 1) != 0) &&
      (iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID),
      iVar13 < 0x25)) &&
     (iVar13 = (**(code **)(this->_padding_ + 0x3d0))(this), pFVar22 = pFVar30, 0 < iVar13)) {
    do {
      lVar24 = (**(code **)(this->_padding_ + 0x330))(this,pFVar22);
      uVar27 = (int)pFVar22 + 1;
      bVar29 = *(byte *)(lVar24 + 0x18) & 0x7f | this->field_0x28d << 7;
      *(byte *)(lVar24 + 0x18) = bVar29;
      *(byte *)(lVar24 + 0x18) = (this->field_0x28d << 4 ^ bVar29) & 0x20 ^ bVar29 | 0x10;
      pFVar22 = (FSkeletalMeshRenderData *)(ulonglong)uVar27;
    } while ((int)uVar27 < iVar13);
  }
  if ((((param_1->field_0x28 & 1) != 0) &&
      (iVar13 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
      iVar13 < 0x26)) && (iVar13 = (**(code **)(this->_padding_ + 0x3d0))(this), 0 < iVar13)) {
    do {
      lVar24 = (**(code **)(this->_padding_ + 0x330))(this,pFVar30);
      uVar27 = (int)pFVar30 + 1;
      pFVar30 = (FSkeletalMeshRenderData *)(ulonglong)uVar27;
      *(byte *)(lVar24 + 0x19) = *(byte *)(lVar24 + 0x19) | 1;
    } while ((int)uVar27 < iVar13);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(&local_190);
  return;
}

// Serialize @ 1485d84a0

void __thiscall USkeletalMesh::Serialize(USkeletalMesh *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetDefaultAnimatingRig @ 1485d8540

void __thiscall
USkeletalMesh::SetDefaultAnimatingRig(USkeletalMesh *this,TSoftObjectPtr<UObject> *param_1)

{
  void *pvVar1;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80000000,ReadWrite);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// SetImportedBounds @ 1485d88c0

void __thiscall
USkeletalMesh::SetImportedBounds(USkeletalMesh *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x10000000000,ReadWrite);
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->ImportedBounds).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->ImportedBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->BoxExtent).field0_0x0._s_0.X;
  (this->ImportedBounds).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->ImportedBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->BoxExtent).field0_0x0._s_0.Z;
  (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Y = (param_1->BoxExtent).field0_0x0._s_0.Y;
  (this->ImportedBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->ImportedBounds).SphereRadius = param_1->SphereRadius;
  CalculateExtendedBounds(this);
  return;
}

// SetLODSettings @ 1485d8930

void __thiscall USkeletalMesh::SetLODSettings(USkeletalMesh *this,USkeletalMeshLODSettings *param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x100,ReadWrite);
  return;
}

// SetMaterials @ 1485d8a50

void __thiscall
USkeletalMesh::SetMaterials
          (USkeletalMesh *this,TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,1,ReadWrite);
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_>::operator=(&this->Materials,param_1);
  return;
}

// SetMinLodIdx @ 1485d8a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall USkeletalMesh::SetMinLodIdx(USkeletalMesh *this,int param_1)

{
  char cVar1;
  FPerQualityLevelInt local_78;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3b0))();
  if (cVar1 != '\0') {
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78.PerQuality._0_8_ = 0;
    local_78.PerQuality._8_8_ = 0;
    local_78.PerQuality._32_8_ = 0;
    local_78.PerQuality._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_78.PerQuality._48_8_ = _UNK_150631d98;
    local_78.PerQuality._64_8_ = 0;
    local_78.PerQuality._72_4_ = 0;
    local_78.Default = param_1;
    SetQualityLevelMinLod(this,&local_78);
    return;
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x8000000,ReadWrite);
  (this->MinLod).Default = param_1;
  return;
}

// SetNegativeBoundsExtension @ 1485d8b40

void __thiscall
USkeletalMesh::SetNegativeBoundsExtension(USkeletalMesh *this,TVector<double> *param_1)

{
  double dVar1;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x100000000,ReadWrite)
  ;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->NegativeBoundsExtension).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->NegativeBoundsExtension).field0_0x0._s_0.Y = dVar1;
  (this->NegativeBoundsExtension).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  CalculateExtendedBounds(this);
  return;
}

// SetNumSourceModels @ 1485d8ba0

void __thiscall USkeletalMesh::SetNumSourceModels(USkeletalMesh *this,int param_1)

{
  int *piVar1;
  TArray<FSkeletalMeshSourceModel,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x80040,ReadWrite);
  piVar1 = &(this->SourceModels).ArrayNum;
  iVar2 = *piVar1;
  uVar8 = (ulonglong)iVar2;
  this_00 = &this->SourceModels;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,8,param_1 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->SourceModels).ArrayMax);
    DefaultConstructItems<FSkeletalMeshSourceModel,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x150,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar6 != 0) {
        TArray<FSkeletalMeshSourceModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x150,8,&this_00->AllocatorInstance,(this->SourceModels).ArrayNum,
                   &(this->SourceModels).ArrayMax);
      }
    }
  }
  if (iVar2 < param_1) {
    lVar9 = uVar8 * 0x150;
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < (this->SourceModels).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
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
      FSkeletalMeshSourceModel::Initialize
                ((FSkeletalMeshSourceModel *)((this_00->AllocatorInstance).Data + lVar9),this);
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar9 = lVar9 + 0x150;
    } while ((int)(uVar7 + 1) < param_1);
  }
  return;
}

// SetPositiveBoundsExtension @ 1485d9ce0

void __thiscall
USkeletalMesh::SetPositiveBoundsExtension(USkeletalMesh *this,TVector<double> *param_1)

{
  double dVar1;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x200000000,ReadWrite)
  ;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->PositiveBoundsExtension).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->PositiveBoundsExtension).field0_0x0._s_0.Y = dVar1;
  (this->PositiveBoundsExtension).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  CalculateExtendedBounds(this);
  return;
}

// SetPostProcessAnimGraphLODThreshold @ 1485d9d40

void __thiscall USkeletalMesh::SetPostProcessAnimGraphLODThreshold(USkeletalMesh *this,int param_1)

{
  this->PostProcessAnimBPLODThreshold = param_1;
  return;
}

// SetQualityLevelMinLod @ 1485d9da0

void __thiscall
USkeletalMesh::SetQualityLevelMinLod(USkeletalMesh *this,FPerQualityLevelInt *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  undefined1 *puVar2;
  undefined1 *_Dst;
  int iVar3;
  void *pvVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  
  ::FString::operator=((FString *)&this->MinQualityLevelLOD,(FString *)param_1);
  pTVar1 = &param_1->PerQuality;
  (this->MinQualityLevelLOD).Default = param_1->Default;
  pTVar5 = &(this->MinQualityLevelLOD).PerQuality;
  if (pTVar5 != pTVar1) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    puVar2 = &(param_1->PerQuality).field_0x10;
    *(undefined8 *)pTVar5 = *(undefined8 *)pTVar1;
    _Dst = &(this->MinQualityLevelLOD).PerQuality.field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 =
         *(undefined4 *)&(param_1->PerQuality).field_0x8;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0xc =
         *(undefined4 *)&(param_1->PerQuality).field_0xc;
    *(undefined8 *)&(param_1->PerQuality).field_0x8 = 0;
    if (_Dst != puVar2) {
      if (*(longlong *)&(param_1->PerQuality).field_0x20 == 0) {
        memmove(_Dst,puVar2,0x10);
      }
      pvVar4 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 =
           *(undefined8 *)&(param_1->PerQuality).field_0x20;
      *(undefined8 *)&(param_1->PerQuality).field_0x20 = 0;
      *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 =
           *(undefined4 *)&(param_1->PerQuality).field_0x28;
      *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c =
           *(undefined4 *)&(param_1->PerQuality).field_0x2c;
      *(undefined8 *)&(param_1->PerQuality).field_0x28 = 0;
    }
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 =
         *(undefined4 *)&(param_1->PerQuality).field_0x30;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 =
         *(undefined4 *)&(param_1->PerQuality).field_0x34;
    *(undefined4 *)&(param_1->PerQuality).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PerQuality).field_0x34 = 0;
    if (*(longlong *)&(param_1->PerQuality).field_0x40 == 0) {
      *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x38 =
           *(undefined4 *)&(param_1->PerQuality).field_0x38;
    }
    pvVar4 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 =
         *(undefined8 *)&(param_1->PerQuality).field_0x40;
    *(undefined8 *)&(param_1->PerQuality).field_0x40 = 0;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 =
         *(undefined4 *)&(param_1->PerQuality).field_0x48;
    *(undefined4 *)&(param_1->PerQuality).field_0x48 = 0;
  }
  *(undefined4 *)&(param_1->PerQuality).field_0x48 = 0;
  pvVar4 = *(void **)&(param_1->PerQuality).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  puVar2 = &(param_1->PerQuality).field_0xc;
  *(undefined4 *)&(param_1->PerQuality).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar1,0,(int *)puVar2);
  }
  *(undefined4 *)&(param_1->PerQuality).field_0x34 = 0;
  *(undefined4 *)&(param_1->PerQuality).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(param_1->PerQuality).field_0x2c;
  *(undefined4 *)&(param_1->PerQuality).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(param_1->PerQuality).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->PerQuality).field_0x10,0);
  }
  pvVar4 = *(void **)&(param_1->PerQuality).field_0x20;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (*(void **)pTVar1 != (void *)0x0) {
    FMemory::Free(*(void **)pTVar1);
  }
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
    return;
  }
  return;
}

// SetSkeletalMeshRenderData @ 1485dba50

void __thiscall
USkeletalMesh::SetSkeletalMeshRenderData
          (USkeletalMesh *this,
          TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> *param_1)

{
  TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> *pTVar1;
  FSkeletalMeshRenderData *pFVar2;
  undefined4 uVar3;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x1000,ReadWrite);
  pTVar1 = &this->SkeletalMeshRenderData;
  if (pTVar1 != param_1) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FSkeletalMeshRenderData *)0x0;
    if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
      FSkeletalMeshRenderData::~FSkeletalMeshRenderData(pFVar2);
      ::operator_delete(pFVar2,0x30);
    }
  }
  pFVar2 = pTVar1->Ptr;
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    (pFVar2->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
    (pFVar2->OwnerName).Number = uVar3;
  }
  return;
}

// SetSkeleton @ 1485dbae0

void __thiscall USkeletalMesh::SetSkeleton(USkeletalMesh *this,USkeleton *param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,2,ReadWrite);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Skeleton).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSkinWeightProfilesData @ 1485dbb30

void __thiscall
USkeletalMesh::SetSkinWeightProfilesData
          (USkeletalMesh *this,int param_1,FSkinWeightProfilesData *param_2)

{
  if (GSkinWeightProfilesLoadByDefaultMode == 1) {
    FSkinWeightProfilesData::OverrideBaseBufferSkinWeightData(param_2,this,param_1);
    return;
  }
  if (GSkinWeightProfilesLoadByDefaultMode == 3) {
    FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile(param_2,this,param_1,true);
    return;
  }
  return;
}

// SetThumbnailInfo_WrapperImpl @ 1485dbda0

void __cdecl USkeletalMesh::SetThumbnailInfo_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// ShouldEvaluatePostProcessAnimGraph @ 1485dbfc0

bool __thiscall USkeletalMesh::ShouldEvaluatePostProcessAnimGraph(USkeletalMesh *this,int param_1)

{
  if ((this->PostProcessAnimBPLODThreshold != -1) && (this->PostProcessAnimBPLODThreshold < param_1)
     ) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUSkeletalMesh @ 1485ddd70

void __cdecl USkeletalMesh::StaticRegisterNativesUSkeletalMesh(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x22;
  local_18.DataPtr = Z_Construct_UClass_USkeletalMesh_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StreamIn @ 1485dddb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall USkeletalMesh::StreamIn(USkeletalMesh *this,int param_1,bool param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FSkeletalMeshStreamIn_IO *pFVar7;
  FSkeletalMeshStreamIn_IO *pFVar8;
  byte bVar9;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0x4f0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar6 = (**(code **)(this->_padding_ + 0x398))(this);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x2c) != '\0')) {
    bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
    if (((!bVar4) &&
        (((bVar1 = (byte)this->_padding_, (bVar1 & 1) != 0 &&
          (bVar2 = *(byte *)((longlong)&this->_padding_ + 5), (int)(uint)bVar2 < param_1)) &&
         (bVar9 = *(byte *)((longlong)&this->_padding_ + 3), bVar2 < bVar9)))) &&
       (*(byte *)((longlong)&this->_padding_ + 6) == bVar2)) {
      if (param_1 < (int)(uint)bVar9) {
        bVar9 = (byte)param_1;
      }
      *(byte *)&this->_padding_ = bVar1 | 8;
      *(byte *)((longlong)&this->_padding_ + 6) = bVar9;
      bVar4 = GRHIGlobals.SupportsAsyncTextureCreation;
      pFVar7 = ::operator_new(0x810);
      pFVar8 = (FSkeletalMeshStreamIn_IO *)0x0;
      if (pFVar7 != (FSkeletalMeshStreamIn_IO *)0x0) {
        pFVar8 = FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO
                           (pFVar7,this,param_2,(bVar4 != false) + TT_Render);
      }
      pFVar7 = (FSkeletalMeshStreamIn_IO *)this->_padding_;
      if (pFVar7 != pFVar8) {
        this->_padding_ = (longlong)pFVar8;
        if (pFVar8 != (FSkeletalMeshStreamIn_IO *)0x0) {
          LOCK();
          ((FThreadSafeCounter *)&pFVar8->field_0x64)->Counter =
               ((FThreadSafeCounter *)&pFVar8->field_0x64)->Counter + 1;
          UNLOCK();
        }
        if (pFVar7 != (FSkeletalMeshStreamIn_IO *)0x0) {
          FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar7);
        }
      }
      return *(char *)(this->_padding_ + 0x5c) == '\0';
    }
  }
  return false;
}

// StreamOut @ 1485ddf10

bool __thiscall USkeletalMesh::StreamOut(USkeletalMesh *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FSkeletalMeshStreamOut *pFVar7;
  FSkeletalMeshStreamOut *pFVar8;
  byte bVar9;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0x4de,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar6 = (**(code **)(this->_padding_ + 0x398))(this);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x2c) != '\0')) {
    bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
    if (((!bVar4) &&
        (((bVar1 = (byte)this->_padding_, (bVar1 & 1) != 0 &&
          (bVar2 = *(byte *)((longlong)&this->_padding_ + 5), param_1 < (int)(uint)bVar2)) &&
         (bVar9 = *(byte *)((longlong)&this->_padding_ + 1), bVar9 < bVar2)))) &&
       (*(byte *)((longlong)&this->_padding_ + 6) == bVar2)) {
      if ((int)(uint)bVar9 < param_1) {
        bVar9 = (byte)param_1;
      }
      *(byte *)&this->_padding_ = bVar1 | 8;
      *(byte *)((longlong)&this->_padding_ + 6) = bVar9;
      pFVar7 = ::operator_new(0xf0);
      pFVar8 = (FSkeletalMeshStreamOut *)0x0;
      if (pFVar7 != (FSkeletalMeshStreamOut *)0x0) {
        pFVar8 = FSkeletalMeshStreamOut::FSkeletalMeshStreamOut(pFVar7,this);
      }
      pFVar7 = (FSkeletalMeshStreamOut *)this->_padding_;
      if (pFVar7 != pFVar8) {
        this->_padding_ = (longlong)pFVar8;
        if (pFVar8 != (FSkeletalMeshStreamOut *)0x0) {
          LOCK();
          ((FThreadSafeCounter *)&pFVar8->field_0x64)->Counter =
               ((FThreadSafeCounter *)&pFVar8->field_0x64)->Counter + 1;
          UNLOCK();
        }
        if (pFVar7 != (FSkeletalMeshStreamOut *)0x0) {
          FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar7);
        }
      }
      return *(char *)(this->_padding_ + 0x5c) == '\0';
    }
  }
  return false;
}

// UnregisterAllMorphTarget @ 1485df290

void __thiscall USkeletalMesh::UnregisterAllMorphTarget(USkeletalMesh *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  
  pFVar2 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x458))();
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar2,0,piVar1);
  }
  InitMorphTargetsAndRebuildRenderData(this);
  return;
}

// UnregisterMorphTarget @ 1485df2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USkeletalMesh::UnregisterMorphTarget(USkeletalMesh *this,UMorphTarget *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar6;
  uint uVar7;
  FName local_res10;
  FString local_28;
  
  if (param_1 != (UMorphTarget *)0x0) {
    uVar7 = 0;
    lVar3 = (**(code **)(this->_padding_ + 0x458))();
    if (0 < *(int *)(lVar3 + 8)) {
      lVar3 = 0;
      do {
        plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x458))();
        uVar6 = 0;
        if ((int)uVar7 < (int)plVar4[1]) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(this->_padding_ + 0x458);
        if ((*(UMorphTarget **)(lVar3 + *plVar4) != (UMorphTarget *)0x0) &&
           (*(UMorphTarget **)(lVar3 + *plVar4) == param_1)) {
          this_00 = (TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_> *)(*pcVar1)(this);
          TArray<TObjectPtr<UMorphTarget>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,uVar7,Default);
          if (!param_2) {
            return;
          }
          InitMorphTargetsAndRebuildRenderData(this);
          return;
        }
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 8;
        lVar5 = (*pcVar1)(this);
      } while ((int)uVar7 < *(int *)(lVar5 + 8));
    }
    if (4 < (byte)LogSkeletalMesh._0_1_) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ValidateBoundsExtension @ 1485df640

void __thiscall USkeletalMesh::ValidateBoundsExtension(USkeletalMesh *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  uint uVar6;
  double dVar4;
  double dVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)this,0x10000000000,ReadOnly);
  uVar11 = *(uint *)&(this->ImportedBounds).BoxExtent.field0_0x0;
  uVar12 = *(uint *)((longlong)&(this->ImportedBounds).BoxExtent.field0_0x0 + 4);
  uVar9 = *(uint *)((longlong)&(this->ImportedBounds).BoxExtent.field0_0x0 + 8);
  uVar10 = *(uint *)((longlong)&(this->ImportedBounds).BoxExtent.field0_0x0 + 0xc);
  uVar13 = *(uint *)((longlong)&(this->ImportedBounds).BoxExtent.field0_0x0 + 0x10);
  uVar14 = *(uint *)((longlong)&(this->ImportedBounds).BoxExtent.field0_0x0 + 0x14);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000000,ReadOnly);
  dVar5 = (this->PositiveBoundsExtension).field0_0x0._s_0.Z;
  auVar1 = *(undefined1 (*) [16])&(this->PositiveBoundsExtension).field0_0x0;
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = uVar9 ^ uVar3;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar10 = uVar10 ^ uVar6;
  uVar11 = uVar11 ^ uVar3;
  uVar12 = uVar12 ^ uVar6;
  uVar13 = uVar13 ^ uVar3;
  uVar14 = uVar14 ^ uVar6;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x200000000,ReadWrite)
  ;
  dVar2 = __real_47efffffe0000000;
  uVar3 = SUB84(__real_47efffffe0000000,0);
  uVar6 = (uint)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar4 = auVar1._0_8_;
  if (__real_47efffffe0000000 <= auVar1._0_8_) {
    dVar4 = __real_47efffffe0000000;
  }
  uVar7 = auVar1._8_4_;
  uVar8 = auVar1._12_4_;
  if (__real_47efffffe0000000 <= auVar1._8_8_) {
    uVar7 = uVar3;
    uVar8 = uVar6;
  }
  if (dVar4 <= (double)CONCAT44(uVar12,uVar11)) {
    dVar4 = (double)CONCAT44(uVar12,uVar11);
  }
  if ((double)CONCAT44(uVar8,uVar7) <= (double)CONCAT44(uVar10,uVar9)) {
    uVar7 = uVar9;
    uVar8 = uVar10;
  }
  (this->PositiveBoundsExtension).field0_0x0._s_0.X = dVar4;
  (this->PositiveBoundsExtension).field0_0x0._s_0.Y = (double)CONCAT44(uVar8,uVar7);
  if (dVar2 <= dVar5) {
    dVar5 = dVar2;
  }
  if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
    dVar5 = (double)CONCAT44(uVar14,uVar13);
  }
  (this->PositiveBoundsExtension).field0_0x0._s_0.Z = dVar5;
  CalculateExtendedBounds(this);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x400000000,ReadOnly);
  dVar5 = (this->NegativeBoundsExtension).field0_0x0._s_0.Z;
  auVar1 = *(undefined1 (*) [16])&(this->NegativeBoundsExtension).field0_0x0;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x100000000,ReadWrite)
  ;
  dVar4 = auVar1._0_8_;
  if (dVar2 <= auVar1._0_8_) {
    dVar4 = dVar2;
  }
  uVar7 = auVar1._8_4_;
  uVar8 = auVar1._12_4_;
  if (dVar2 <= auVar1._8_8_) {
    uVar7 = uVar3;
    uVar8 = uVar6;
  }
  if (dVar4 <= (double)CONCAT44(uVar12,uVar11)) {
    dVar4 = (double)CONCAT44(uVar12,uVar11);
  }
  if ((double)CONCAT44(uVar8,uVar7) <= (double)CONCAT44(uVar10,uVar9)) {
    uVar7 = uVar9;
    uVar8 = uVar10;
  }
  (this->NegativeBoundsExtension).field0_0x0._s_0.X = dVar4;
  (this->NegativeBoundsExtension).field0_0x0._s_0.Y = (double)CONCAT44(uVar8,uVar7);
  if (dVar2 <= dVar5) {
    dVar5 = dVar2;
  }
  if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
    dVar5 = (double)CONCAT44(uVar14,uVar13);
  }
  (this->NegativeBoundsExtension).field0_0x0._s_0.Z = dVar5;
  CalculateExtendedBounds(this);
  return;
}

// WaitUntilAsyncPropertyReleased @ 1485df880

void __thiscall
USkeletalMesh::WaitUntilAsyncPropertyReleased
          (USkeletalMesh *this,ESkeletalMeshAsyncProperties param_1,
          ESkinnedAssetAsyncPropertyLockType param_2)

{
  return;
}

// WantsNegXTriMesh @ 1485df890

bool __thiscall USkeletalMesh::WantsNegXTriMesh(USkeletalMesh *this)

{
  return true;
}

// _getUObject @ 1485e0ac0

UObject * __thiscall USkeletalMesh::_getUObject(USkeletalMesh *this)

{
  return (UObject *)&this[-1].MorphTargetIndexMap.field_0x40;
}

// _getUObject`adjustor{8}' @ 1485e0ad0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USkeletalMesh::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall USkeletalMesh::_getUObject_adjustor_8__(USkeletalMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USkeletalMesh *)&this[-1].LODInfo_DEPRECATED.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 1485e0ae0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USkeletalMesh::_getUObject`adjustor{16}'
   (void)const __ptr64 */

UObject * __thiscall USkeletalMesh::_getUObject_adjustor_16__(USkeletalMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USkeletalMesh *)&this[-1].LODInfo_DEPRECATED);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 1485e0af0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USkeletalMesh::_getUObject`adjustor{24}'
   (void)const __ptr64 */

UObject * __thiscall USkeletalMesh::_getUObject_adjustor_24__(USkeletalMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USkeletalMesh *)&this[-1].OverlayMaterialMaxDrawDistance);
  return (UObject *)pUVar1;
}

// execFindSocketAndIndex @ 1485e0b00

void __cdecl USkeletalMesh::execFindSocketAndIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FSocketInfo *pFVar5;
  int *piVar6;
  int local_res10 [2];
  FName local_res18;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res18;
  piVar6 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar6 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *piVar6 = -1;
  if (FVar3 != (FName)0x0) {
    if (((*(uint *)&param_1->field_0x8 >> 0xc & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAnyFlags(RF_NeedPostLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                           ,0x139f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
             ::Find((TMapBase<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0>_>
                     *)&param_1[0xb].field_0x18,FVar3);
    if (pFVar5 != (FSocketInfo *)0x0) {
      *piVar6 = pFVar5->SocketIndex;
      *(USkeletalMeshSocket **)param_3 = pFVar5->Socket;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetBounds @ 1485e0c40

void __cdecl USkeletalMesh::execGetBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_48 [64];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x3e0))(param_1,local_48);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
  return;
}

// execGetDefaultAnimatingRig @ 1485e0ca0

void __cdecl
USkeletalMesh::execGetDefaultAnimatingRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_res10 [3];
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)param_1,0x80000000,ReadWrite);
  local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_38.WeakPtr.ObjectIndex = 0;
  local_38.WeakPtr.ObjectSerialNumber = 0;
  local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.AssetName.Number = 0;
  local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
  local_res10[0] = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)local_res10);
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_38);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetDefaultMeshDeformer @ 1485e0d40

void __cdecl
USkeletalMesh::execGetDefaultMeshDeformer(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x418))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetForwardAxis @ 1485e0d80

void __cdecl USkeletalMesh::execGetForwardAxis(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x20].field_0x4;
  return;
}

// execGetHasVertexColors @ 1485e0db0

void __cdecl USkeletalMesh::execGetHasVertexColors(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x470))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetImportedBounds @ 1485e0df0

void __cdecl USkeletalMesh::execGetImportedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)param_1,0x10000000000,ReadOnly);
  uVar2 = *(undefined8 *)&param_1[7].field_0x10;
  uVar3 = *(undefined8 *)&param_1[7].field_0x18;
  uVar4 = *(undefined8 *)&param_1[7].field_0x20;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)&param_1[8].field_0x8;
  uVar1 = *(undefined8 *)&param_1[8].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[7].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar1;
  return;
}

// execGetLODSettings @ 1485e0e70

void __cdecl USkeletalMesh::execGetLODSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x100,ReadWrite);
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7772035135074993413>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\SkeletalMesh.h"
                     ,0x505,"bCallOutsideOf_WithEditorOnlyData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetMaterials @ 1485e0ee0

void __cdecl USkeletalMesh::execGetMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)param_1 + 0x3c8))();
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetMeshClothingAssets @ 1485e0f20

void __cdecl
USkeletalMesh::execGetMeshClothingAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x20,ReadWrite);
  if (param_3 != &param_1[0x1c].field_0x8) {
    iVar2 = *(int *)&param_1[0x1c].field_0x10;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    _Src = *(void **)&param_1[0x1c].field_0x8;
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,param_3,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar2 << 3);
    }
  }
  return;
}

// execGetMinLODForQualityLevels @ 1485e0fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USkeletalMesh::execGetMinLODForQualityLevels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  undefined4 local_78 [4];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetMorphTargetsPtrConv @ 1485e1170

void __cdecl
USkeletalMesh::execGetMorphTargetsPtrConv(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x800,ReadOnly);
  iVar1 = *(int *)(param_1 + 0x12);
  _Src = *(void **)&param_1[0x11].field_0x20;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetNodeMappingContainer @ 1485e1270

void __cdecl
USkeletalMesh::execGetNodeMappingContainer(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  UObject *local_res8;
  undefined8 local_res10;
  UObject *local_res18;
  undefined1 local_68 [8];
  FSoftObjectPath local_60;
  
  uVar9 = 0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x1000000,ReadOnly)
  ;
  iVar1 = *(int *)&param_1[0x11].field_0x8;
  uVar10 = uVar9;
  uVar11 = uVar9;
  if (0 < iVar1) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < iVar1) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(uVar11 + *(longlong *)(param_1 + 0x11));
      if (lVar3 == 0) {
LAB_1485e1430:
        bVar6 = false;
      }
      else {
        uVar10 = 1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        local_res10 = 0;
        local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_60.AssetPath.AssetName.Number = 0;
        local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_60.AssetPath.PackageName.Number = 0;
        local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.SubPathString.Data.ArrayNum = 0;
        local_60.SubPathString.Data.ArrayMax = 0;
        local_68 = (undefined1  [8])0x0;
        FUtf8String::Reset(&local_60.SubPathString,0);
        local_res18 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_68,(FObjectPtr)&local_res18);
        bVar6 = FSoftObjectPath::operator==((FSoftObjectPath *)(lVar3 + 0x120),&local_60);
        if (!bVar6) goto LAB_1485e1430;
        bVar6 = true;
      }
      if ((uVar10 != 0) &&
         (uVar10 = 0,
         local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        *(longlong *)param_3 = lVar3;
        return;
      }
      iVar1 = *(int *)&param_1[0x11].field_0x8;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < iVar1);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetNodeMappingData @ 1485e14a0

void __cdecl USkeletalMesh::execGetNodeMappingData(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)param_1,0x1000000,ReadWrite);
  if (param_3 != param_1 + 0x11) {
    iVar2 = *(int *)&param_1[0x11].field_0x8;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    _Src = *(void **)(param_1 + 0x11);
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,param_3,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar2 << 3);
    }
  }
  return;
}

// execGetOverlayMaterial @ 1485e1560

void __cdecl USkeletalMesh::execGetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x430))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetOverlayMaterialMaxDrawDistance @ 1485e15a0

void __cdecl
USkeletalMesh::execGetOverlayMaterialMaxDrawDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x438))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetPhysicsAsset @ 1485e15e0

void __cdecl USkeletalMesh::execGetPhysicsAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3b8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetShadowPhysicsAsset @ 1485e1620

void __cdecl
USkeletalMesh::execGetShadowPhysicsAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x348))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetSkeleton @ 1485e1660

void __cdecl USkeletalMesh::execGetSkeleton(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x408))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetSocketByIndex @ 1485e16a0

void __cdecl USkeletalMesh::execGetSocketByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res8[0];
  iVar1 = *(int *)&param_1[0x1e].field_0x10;
  if ((int)local_res8[0] < iVar1) {
    uVar5 = 0;
    if ((int)local_res8[0] < iVar1) {
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
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[0x1e].field_0x8 + lVar6 * 8);
  }
  else {
    lVar6 = (**(code **)(*(longlong *)param_1 + 0x400))(param_1);
    if (lVar6 != 0) {
      uVar5 = uVar5 - iVar1;
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x400))(param_1);
      if ((int)uVar5 < *(int *)(lVar6 + 0x1b0)) {
        lVar6 = (**(code **)(*(longlong *)param_1 + 0x400))(param_1);
        uVar7 = 0;
        if ((int)uVar5 < *(int *)(lVar6 + 0x1b0)) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)param_3 =
             *(undefined8 *)(*(longlong *)(lVar6 + 0x1a8) + (longlong)(int)uVar5 * 8);
        return;
      }
    }
    *(undefined8 *)param_3 = 0;
  }
  return;
}

// execGetTargetMeshDeformers @ 1485e1830

void __cdecl
USkeletalMesh::execGetTargetMeshDeformers(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x420))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execIsSectionUsingCloth @ 1485e1870

void __cdecl USkeletalMesh::execIsSectionUsingCloth(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  uVar7 = local_res10[0];
  lVar12 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar9 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x398))(param_1);
  if (plVar9 == (longlong *)0x0) {
LAB_1485e1a90:
    *(undefined1 *)param_3 = 0;
  }
  else {
    plVar11 = (longlong *)*plVar9;
    lVar6 = plVar9[1];
    plVar1 = plVar11 + (int)lVar6;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar11 == plVar1) goto LAB_1485e1a90;
      lVar4 = *plVar11;
      if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar4 + 0x18))) break;
      plVar11 = plVar11 + 1;
    }
    uVar10 = 0;
    if ((int)uVar7 < *(int *)(lVar4 + 0x18)) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar4 + 0x10) + lVar12 * 0x118;
    iVar2 = *(int *)(lVar12 + 0x30);
    if (iVar2 != 0) {
      if ((iVar2 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(*(longlong *)(lVar12 + 0x28) + 8) != 0) {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execK2_GetAllMorphTargetNames @ 1485e1ac0

void __cdecl
USkeletalMesh::execK2_GetAllMorphTargetNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar6 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x450))();
  plVar9 = (longlong *)*plVar6;
  lVar3 = plVar6[1];
  plVar1 = plVar9 + (int)lVar3;
  while( true ) {
    if ((int)plVar6[1] != (int)lVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMorphTarget>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar9 == plVar1) break;
    local_res10 = *(FName *)(*plVar9 + 0x18);
    pFVar7 = (FScriptContainerElement *)::FName::ToString(&local_res10,&local_48);
    if (((local_58.Data <= pFVar7) && (pFVar7 < local_58.Data + (longlong)local_50._4_4_ * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)local_50;
    if ((int)local_50 == local_50._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58,(int *)((longlong)&local_50 + 4));
    }
    local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
    pFVar8 = local_58.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
    *(undefined8 *)pFVar7 = 0;
    *(int *)(pFVar8 + 8) = *(int *)(pFVar7 + 8);
    *(int *)(pFVar8 + 0xc) = *(int *)(pFVar7 + 0xc);
    *(undefined8 *)(pFVar7 + 8) = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    plVar9 = plVar9 + 1;
  }
  if (param_3 == &local_58) {
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_50;
    *(int *)((longlong)param_3 + 0xc) = local_50._4_4_;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_50._0_4_ = 0;
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// execK2_GetAllSkinWeightProfileNames @ 1485e1cd0

void __cdecl
USkeletalMesh::execK2_GetAllSkinWeightProfileNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName *this;
  FName *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x200000,ReadOnly);
  iVar1 = *(int *)&param_1[0x1f].field_0x8;
  this = *(FName **)(param_1 + 0x1f);
  pFVar7 = this + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&param_1[0x1f].field_0x8 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkinWeightProfileInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pFVar7) break;
    pFVar5 = (FScriptContainerElement *)::FName::ToString(this,&local_38);
    if (((local_48.Data <= pFVar5) && (pFVar5 < local_48.Data + (longlong)local_40._4_4_ * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)local_40;
    if ((int)local_40 == local_40._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_48,(int *)((longlong)&local_40 + 4));
    }
    local_40 = CONCAT44(local_40._4_4_,iVar4 + 1);
    pFVar6 = local_48.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar5;
    *(undefined8 *)pFVar5 = 0;
    *(int *)(pFVar6 + 8) = *(int *)(pFVar5 + 8);
    *(int *)(pFVar6 + 0xc) = *(int *)(pFVar5 + 0xc);
    *(undefined8 *)(pFVar5 + 8) = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    this = this + 2;
  }
  if (param_3 == &local_48) {
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_40;
    *(int *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_40._0_4_ = 0;
  }
  DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execNumSockets @ 1485e1ef0

void __cdecl USkeletalMesh::execNumSockets(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x400))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)param_1 + 0x400))(param_1);
    iVar2 = *(int *)(lVar1 + 0x1b0);
  }
  *(int *)param_3 = *(int *)&param_1[0x1e].field_0x10 + iVar2;
  return;
}

// execSetDefaultAnimatingRig @ 1485e1f60

void __cdecl
USkeletalMesh::execSetDefaultAnimatingRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TPersistentObjectPtr<FSoftObjectPath> local_58;
  TPersistentObjectPtr<FSoftObjectPath> local_30;
  
  local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_58.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_58.WeakPtr.ObjectIndex = 0;
  local_58.WeakPtr.ObjectSerialNumber = 0;
  local_58.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.ObjectID.AssetPath.AssetName.Number = 0;
  local_58.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_58.ObjectID.SubPathString,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>(&local_30,&local_58);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)param_1,0x80000000,ReadWrite);
  if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetLODSettings @ 1485e2040

void __cdecl USkeletalMesh::execSetLODSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x100,ReadWrite);
  return;
}

// execSetMaterials @ 1485e20e0

void __cdecl USkeletalMesh::execSetMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,1,ReadWrite);
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)&param_1[0xb].field_0x8,pTVar2
            );
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetMeshClothingAssets @ 1485e21c0

void __cdecl
USkeletalMesh::execSetMeshClothingAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  UClothingAssetBase **ppUVar4;
  void **ppvVar5;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar5 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x20,ReadWrite);
  iVar2 = *(int *)(ppvVar5 + 1);
  ppUVar4 = *ppvVar5;
  puVar1 = &param_1[0x1c].field_0x14;
  *(int *)&param_1[0x1c].field_0x10 = iVar2;
  if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*(int *)puVar1,(ForAnyElementType *)&param_1[0x1c].field_0x8,iVar2,
               (int *)puVar1);
    ConstructItems<TObjectPtr<UClothingAssetBase>,UClothingAssetBase_*,int>
              (*(void **)&param_1[0x1c].field_0x8,ppUVar4,iVar2);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetMinLODForQualityLevels @ 1485e22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USkeletalMesh::execSetMinLODForQualityLevels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  undefined4 local_78 [4];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execSetMorphTargets @ 1485e2470

void __cdecl USkeletalMesh::execSetMorphTargets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  UMorphTarget **ppUVar5;
  void **ppvVar6;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar6 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x800,ReadWrite);
  iVar2 = *(int *)(ppvVar6 + 1);
  ppUVar5 = *ppvVar6;
  puVar1 = &param_1[0x12].field_0x4;
  iVar3 = *(int *)puVar1;
  *(int *)(param_1 + 0x12) = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,iVar3,(ForAnyElementType *)&param_1[0x11].field_0x20,iVar2,(int *)puVar1);
    ConstructItems<TObjectPtr<UMorphTarget>,UMorphTarget_*,int>
              (*(void **)&param_1[0x11].field_0x20,ppUVar5,iVar2);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetOverlayMaterial @ 1485e2590

void __cdecl USkeletalMesh::execSetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)param_1,0x200000000000000,ReadWrite);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&param_1[0x1f].field_0x20 = pUVar2;
  return;
}

// execSetOverlayMaterialMaxDrawDistance @ 1485e2650

void __cdecl
USkeletalMesh::execSetOverlayMaterialMaxDrawDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
            ((USkinnedAsset *)param_1,0x400000000000000,ReadWrite);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}

// execSetSkeleton @ 1485e2700

void __cdecl USkeletalMesh::execSetSkeleton(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x410))(param_1,local_res8);
  return;
}

// operator() @ 15052dd00

bool __thiscall `USkeletalMesh::RegisterMorphTarget'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3817078023119704595>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3817078023119704595>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052dd78;
    }
  }
  bVar2 = false;
LAB_15052dd78:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

