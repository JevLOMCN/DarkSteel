// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 8

// StaticClass @ 14ac03fb0

UClass * __cdecl UCustomizableObjectSkeletalMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectSkeletalMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectSkeletalMesh",
               &Z_Registration_Info_UClass_UCustomizableObjectSkeletalMesh.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectSkeletalMesh,0x5e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectSkeletalMesh>,
               InternalVTableHelperCtorCaller<UCustomizableObjectSkeletalMesh>,local_res8,
               USkeletalMesh::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectSkeletalMesh.InnerSingleton;
}

// UCustomizableObjectSkeletalMesh @ 14ac0bc30

UCustomizableObjectSkeletalMesh * __thiscall
UCustomizableObjectSkeletalMesh::UCustomizableObjectSkeletalMesh
          (UCustomizableObjectSkeletalMesh *this,FVTableHelper *param_1)

{
  USkeletalMesh::USkeletalMesh((USkeletalMesh *)this,param_1);
  this->State = -1;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  (this->CustomizableObjectPathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizableObjectPathName).Data.ArrayNum = 0;
  (this->CustomizableObjectPathName).Data.ArrayMax = 0;
  (this->ModelStreamableBulkData).Object = (FModelStreamableBulkData *)0x0;
  (this->ModelStreamableBulkData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Model).Object = (FModel *)0x0;
  (this->Model).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  (this->MeshIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->ImageIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
        *)0x0;
  (this->MaterialIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalResourceProvider).Object = (FUnrealMutableResourceProvider *)0x0;
  (this->ExternalResourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Parameters).Object = (FParameters *)0x0;
  (this->Parameters).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshIDs).ArrayNum = 0;
  (this->MeshIDs).ArrayMax = 0;
  (this->SurfaceIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceIDs).ArrayNum = 0;
  (this->SurfaceIDs).ArrayMax = 0;
  (this->SkinWeightProfileIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeightProfileIDs).ArrayNum = 0;
  (this->SkinWeightProfileIDs).ArrayMax = 0;
  (this->MeshCacheId).WeakRegistry.Object =
       (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
        *)0x0;
  (this->MeshCacheId).WeakRegistry.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshCacheId).Id = 0xffffffff;
  return this;
}

// UCustomizableObjectSkeletalMesh @ 14ac0bd50

UCustomizableObjectSkeletalMesh * __thiscall
UCustomizableObjectSkeletalMesh::UCustomizableObjectSkeletalMesh
          (UCustomizableObjectSkeletalMesh *this,FObjectInitializer *param_1)

{
  USkeletalMesh::USkeletalMesh((USkeletalMesh *)this,param_1);
  this->State = -1;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  (this->CustomizableObjectPathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizableObjectPathName).Data.ArrayNum = 0;
  (this->CustomizableObjectPathName).Data.ArrayMax = 0;
  (this->ModelStreamableBulkData).Object = (FModelStreamableBulkData *)0x0;
  (this->ModelStreamableBulkData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Model).Object = (FModel *)0x0;
  (this->Model).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  (this->MeshIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->ImageIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
        *)0x0;
  (this->MaterialIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalResourceProvider).Object = (FUnrealMutableResourceProvider *)0x0;
  (this->ExternalResourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Parameters).Object = (FParameters *)0x0;
  (this->Parameters).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshIDs).ArrayNum = 0;
  (this->MeshIDs).ArrayMax = 0;
  (this->SurfaceIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceIDs).ArrayNum = 0;
  (this->SurfaceIDs).ArrayMax = 0;
  (this->SkinWeightProfileIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeightProfileIDs).ArrayNum = 0;
  (this->SkinWeightProfileIDs).ArrayMax = 0;
  (this->MeshCacheId).WeakRegistry.Object =
       (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
        *)0x0;
  (this->MeshCacheId).WeakRegistry.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshCacheId).Id = 0xffffffff;
  return this;
}

// ~UCustomizableObjectSkeletalMesh @ 14ac0cf00

void __thiscall
UCustomizableObjectSkeletalMesh::~UCustomizableObjectSkeletalMesh
          (UCustomizableObjectSkeletalMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  ::FHandle::~FHandle(&this->MeshCacheId);
  pFVar1 = (this->SkinWeightProfileIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
             (this->SurfaceIDs).AllocatorInstance.Data,(this->SurfaceIDs).ArrayNum);
  pFVar1 = (this->SurfaceIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            ((FHandle *)(this->MeshIDs).AllocatorInstance.Data,(this->MeshIDs).ArrayNum);
  pFVar1 = (this->MeshIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Parameters).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExternalResourceProvider).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaterialIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ImageIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Model).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelStreamableBulkData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CustomizableObjectPathName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USkeletalMesh::~USkeletalMesh((USkeletalMesh *)this);
  return;
}

// GetPrivateStaticClass @ 14ac226a0

UClass * __cdecl UCustomizableObjectSkeletalMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectSkeletalMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectSkeletalMesh",
               &Z_Registration_Info_UClass_UCustomizableObjectSkeletalMesh.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectSkeletalMesh,0x5e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectSkeletalMesh>,
               InternalVTableHelperCtorCaller<UCustomizableObjectSkeletalMesh>,local_res8,
               USkeletalMesh::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectSkeletalMesh.InnerSingleton;
}

// InitMutableStreamingData @ 14ac265f0

void __thiscall
UCustomizableObjectSkeletalMesh::InitMutableStreamingData
          (UCustomizableObjectSkeletalMesh *this,TSharedRef<FUpdateContextPrivate,1> *param_1,
          FName *param_2,int param_3,int param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  void *_Dst;
  FString *pFVar3;
  TArray<TTuple<unsigned_int,FName>,TSizedDefaultAllocator<32>_> *pTVar4;
  atomic<int> aVar5;
  byte bVar6;
  ushort uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FModel *pFVar9;
  FUnrealMutableResourceProvider *pFVar10;
  FParameters *pFVar11;
  FUpdateContextPrivate *pFVar12;
  undefined8 uVar13;
  code *pcVar14;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar15;
  FWeakReferencer<1> FVar16;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *pTVar17;
  atomic<int> aVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  UCustomizableObject *this_00;
  UCustomizableObjectPrivate *pUVar23;
  TSharedPtr<FModelStreamableBulkData,1> *pTVar24;
  TSharedPtr<UE::Mutable::Private::FModel,1> *pTVar25;
  TTuple<FName,unsigned_char> *pTVar26;
  FEntry *pFVar27;
  UModelResources *pUVar28;
  uint uVar29;
  int iVar30;
  TReferenceControllerBase<1> *pTVar31;
  longlong lVar32;
  FWeakReferencer<1> FVar33;
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong *plVar35;
  FScriptContainerElement *pFVar36;
  ulonglong uVar37;
  longlong lVar38;
  FScriptContainerElement *pFVar39;
  FScriptContainerElement *pFVar40;
  longlong *plVar41;
  bool bVar42;
  undefined1 local_148 [4];
  uint local_144;
  longlong local_140;
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_138;
  FString local_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint local_110 [2];
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_f0;
  FSharedReferencer<1> local_e8;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_e0;
  FSharedReferencer<1> local_d8;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_d0;
  FSharedReferencer<1> local_c8;
  FHandle local_c0;
  FName local_a8;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *local_a0;
  UCustomizableObject *local_98;
  TSharedPtr<FModelStreamableBulkData,1> local_90;
  FModel *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  FUnrealMutableResourceProvider *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  FParameters *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  this_00 = (UCustomizableObject *)FWeakObjectPtr::Get(&(param_1->Object->Object).WeakPtr);
  local_98 = this_00;
  pUVar23 = UCustomizableObject::GetPrivate(this_00);
  pTVar24 = UCustomizableObjectPrivate::GetModelStreamableBulkData(pUVar23,&local_90,false);
  if (&this->ModelStreamableBulkData != pTVar24) {
    (this->ModelStreamableBulkData).Object = pTVar24->Object;
    pTVar24->Object = (FModelStreamableBulkData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModelStreamableBulkData).SharedReferenceCount,&pTVar24->SharedReferenceCount)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  if (this_00 == (UCustomizableObject *)0x0) {
    ::FString::FString(&local_130,L"None");
  }
  else {
    local_a8 = (FName)this_00->_padding_;
    ::FName::ToString(&local_a8,&local_130);
  }
  pFVar3 = &this->CustomizableObjectPathName;
  if (pFVar3 != &local_130) {
    pFVar36 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar36 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar36);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
    (this->CustomizableObjectPathName).Data.ArrayNum = local_130.Data.ArrayNum;
    (this->CustomizableObjectPathName).Data.ArrayMax = local_130.Data.ArrayMax;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  pUVar23 = UCustomizableObject::GetPrivate(this_00);
  pTVar25 = UCustomizableObjectPrivate::GetModel(pUVar23);
  pTVar8 = (pTVar25->SharedReferenceCount).ReferenceController;
  pFVar9 = pTVar25->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = (this->Model).Object;
  pTStack_78 = (this->Model).SharedReferenceCount.ReferenceController;
  (this->Model).Object = pFVar9;
  (this->Model).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  pUVar23 = UCustomizableObject::GetPrivate(this_00);
  local_e8.ReferenceController = (pUVar23->MeshIdRegistry).SharedReferenceCount.ReferenceController;
  local_f0 = (pUVar23->MeshIdRegistry).Object;
  if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MeshIdRegistry !=
      (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
       *)&local_f0) {
    (this->MeshIdRegistry).Object = local_f0;
    local_f0 = (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MeshIdRegistry).SharedReferenceCount,&local_e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ReferenceController);
  pUVar23 = UCustomizableObject::GetPrivate(this_00);
  local_d8.ReferenceController = (pUVar23->ImageIdRegistry).SharedReferenceCount.ReferenceController
  ;
  local_e0 = (pUVar23->ImageIdRegistry).Object;
  if (local_d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ImageIdRegistry !=
      (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
       *)&local_e0) {
    (this->ImageIdRegistry).Object = local_e0;
    local_e0 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ImageIdRegistry).SharedReferenceCount,&local_d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ReferenceController);
  pUVar23 = UCustomizableObject::GetPrivate(this_00);
  local_c8.ReferenceController =
       (pUVar23->MaterialIdRegistry).SharedReferenceCount.ReferenceController;
  local_d0 = (pUVar23->MaterialIdRegistry).Object;
  if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MaterialIdRegistry !=
      (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
       *)&local_d0) {
    (this->MaterialIdRegistry).Object = local_d0;
    local_d0 = (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MaterialIdRegistry).SharedReferenceCount,&local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  pTVar8 = (param_1->Object->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  pFVar10 = (param_1->Object->ExternalResourceProvider).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = (this->ExternalResourceProvider).Object;
  pTStack_68 = (this->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  (this->ExternalResourceProvider).Object = pFVar10;
  (this->ExternalResourceProvider).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
  pTVar8 = (param_1->Object->Parameters).SharedReferenceCount.ReferenceController;
  pFVar11 = (param_1->Object->Parameters).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (this->Parameters).Object;
  pTStack_58 = (this->Parameters).SharedReferenceCount.ReferenceController;
  (this->Parameters).Object = pFVar11;
  (this->Parameters).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  local_c0._4_4_ = 0;
  local_c0.Id = 0xffffffff;
  local_c0.WeakRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  local_c0.WeakRegistry.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->State = (param_1->Object->CapturedDescriptor).State;
  local_a0 = &this->MeshIDs;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  ::Init(local_a0,&local_c0,8);
  FVar16.ReferenceController = local_c0.WeakRegistry.WeakReferenceCount.ReferenceController;
  pTVar15 = local_c0.WeakRegistry.Object;
  uVar21 = local_c0.Id;
  FVar33.ReferenceController = FVar16.ReferenceController;
  if (local_c0.WeakRegistry.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar5 = (local_c0.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar33.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14ac269d0;
      LOCK();
      aVar18 = (local_c0.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar42 = aVar5 == aVar18;
      if (bVar42) {
        (local_c0.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar5 + 1);
        aVar18 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar18;
    } while (!bVar42);
    FVar33.ReferenceController = FVar16.ReferenceController;
    if (local_c0.WeakRegistry.Object !=
        (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
         *)0x0) {
      lpCriticalSection = &(local_c0.WeakRegistry.Object)->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar27 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                               *)&pTVar15->Entries,uVar21);
      pFVar27->RefCount = pFVar27->RefCount - 1;
      if (pFVar27->RefCount == 0) {
        if (*(int *)&(pTVar15->KeyIndex).field_0x8 != *(int *)&(pTVar15->KeyIndex).field_0x34) {
          uVar19 = UE::Mutable::Private::GetTypeHash((pFVar27->KeyContainer).Key.Object);
          TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::
          RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pTVar15->KeyIndex,uVar19,&pFVar27->KeyContainer);
        }
        local_110[0] = uVar21;
        if (*(int *)&(pTVar15->Entries).field_0x8 != *(int *)&(pTVar15->Entries).field_0x34) {
          TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                      *)&pTVar15->Entries,uVar21,local_110);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14ac269d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar33.ReferenceController);
  if (local_c0.WeakRegistry.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakRegistry.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakRegistry.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakRegistry.WeakReferenceCount.ReferenceController,1);
    }
  }
  pTVar34 = &this->SurfaceIDs;
  iVar30 = (this->SurfaceIDs).ArrayNum;
  piVar2 = &(this->SurfaceIDs).ArrayNum;
  local_138 = pTVar34;
  if (iVar30 < 8) {
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,8 - iVar30,&pTVar34->AllocatorInstance,piVar2,
                        &(this->SurfaceIDs).ArrayMax);
    memset((pTVar34->AllocatorInstance).Data + (longlong)iVar20 * 0x10,0,(longlong)(8 - iVar30) << 4
          );
  }
  else if (8 < iVar30) {
    iVar30 = iVar30 + -8;
    if (iVar30 < 0) {
      bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar42) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    else if (iVar30 == 0) goto LAB_14ac26ad0;
    TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(pTVar34,8,iVar30);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar34->AllocatorInstance,*piVar2,&(this->SurfaceIDs).ArrayMax);
  }
LAB_14ac26ad0:
  pFVar12 = param_1->Object;
  if (pFVar12->bStreamMeshLODs == false) {
    pTVar26 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      *)&(pFVar12->CapturedDescriptor).FirstRequestedLOD,*param_2);
    if (pTVar26 != (TTuple<FName,unsigned_char> *)0x0) goto LAB_14ac26b36;
    iVar30 = 0x27b;
  }
  else {
    pTVar26 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      *)&pFVar12->FirstLODAvailable,*param_2);
    if (pTVar26 != (TTuple<FName,unsigned_char> *)0x0) goto LAB_14ac26b36;
    iVar30 = 0x288;
  }
  bVar42 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,iVar30,L"");
  if (bVar42) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
LAB_14ac26b36:
  bVar6 = pTVar26->field_0x8;
  uVar37 = (ulonglong)bVar6;
  if ((int)(uint)bVar6 < param_4) {
    local_144 = param_3 + (uint)bVar6;
    lVar32 = ((longlong)param_3 + uVar37) * 0x40;
    lVar38 = uVar37 * 0x18;
    local_140 = uVar37 << 4;
    local_108 = uVar37;
    do {
      pFVar12 = param_1->Object;
      uVar21 = 0;
      if ((int)local_144 < (pFVar12->InstanceUpdateData).LODs.ArrayNum) {
        uVar21 = ~local_144 >> 0x1f;
      }
      local_100 = lVar32;
      local_f8 = lVar38;
      if ((uVar21 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pTVar17 = local_a0;
      uVar19 = (uint)uVar37;
      pFVar36 = (pFVar12->InstanceUpdateData).LODs.AllocatorInstance.Data + lVar32;
      uVar21 = 0;
      if ((int)uVar19 < local_a0->ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar39 = (pTVar17->AllocatorInstance).Data + lVar38;
      *(uint *)pFVar39 = *(uint *)pFVar36;
      lVar32 = *(longlong *)(pFVar36 + 0x10);
      uVar13 = *(undefined8 *)(pFVar36 + 8);
      if (lVar32 != 0) {
        LOCK();
        *(int *)(lVar32 + 0xc) = *(int *)(lVar32 + 0xc) + 1;
        UNLOCK();
      }
      local_50 = *(uint *)(pFVar39 + 8);
      uStack_4c = *(uint *)(pFVar39 + 0xc);
      uStack_48 = *(uint *)(pFVar39 + 0x10);
      uStack_44 = *(uint *)(pFVar39 + 0x14);
      plVar35 = *(longlong **)(pFVar39 + 0x10);
      *(undefined8 *)(pFVar39 + 8) = uVar13;
      *(longlong *)(pFVar39 + 0x10) = lVar32;
      if (plVar35 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar35 + 0xc);
        iVar30 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar30 == 1) {
          (**(code **)(*plVar35 + 8))(plVar35,1);
        }
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar39 + 0x10);
      pTVar31 = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar8->SharedReferenceCount;
        do {
          pTVar31 = (TReferenceControllerBase<1> *)0x0;
          if (aVar5 == (atomic<int>)0x0) goto LAB_14ac26cf6;
          LOCK();
          aVar18 = pTVar8->SharedReferenceCount;
          bVar42 = aVar5 == aVar18;
          if (bVar42) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar18 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar18;
        } while (!bVar42);
        lVar32 = *(longlong *)(pFVar39 + 8);
        pTVar31 = pTVar8;
        pTVar34 = local_138;
        if (lVar32 != 0) {
          uVar21 = *(uint *)pFVar39;
          lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar32 + 0xb8);
          if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection(lpCriticalSection_00);
          pFVar27 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                    ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                                   *)(lVar32 + 0x18),uVar21);
          pFVar27->RefCount = pFVar27->RefCount + 1;
          LeaveCriticalSection(lpCriticalSection_00);
          pTVar34 = local_138;
        }
      }
LAB_14ac26cf6:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
      uVar21 = 0;
      if ((int)uVar19 < pTVar34->ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar40 = (pTVar34->AllocatorInstance).Data + local_140;
      iVar30 = *(int *)&pFVar40[8].field_0x0;
      pFVar39 = pFVar40 + 8;
      uVar7 = *(ushort *)(pFVar36 + 0x2a);
      uVar21 = (uint)uVar7;
      if (iVar30 < (int)(uint)uVar7) {
        iVar20 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar21 - iVar30,(ForAnyElementType *)pFVar40,(int *)pFVar39,
                            (int *)(pFVar40 + 0xc));
        memset((void *)(*(longlong *)&pFVar40->field_0x0 + (longlong)iVar20 * 4),0,
               (longlong)(int)(uVar21 - iVar30) << 2);
      }
      else if ((int)(uint)uVar7 < iVar30) {
        iVar30 = iVar30 - uVar21;
        if (iVar30 < 0) {
          bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar42) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        else if (iVar30 == 0) goto LAB_14ac26e25;
        _Dst = (void *)(*(longlong *)&pFVar40->field_0x0 + (ulonglong)uVar7 * 4);
        iVar20 = (*(int *)&pFVar39->field_0x0 - uVar21) - iVar30;
        if (iVar20 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar30 * 4),(longlong)iVar20 << 2);
        }
        *(int *)&pFVar39->field_0x0 = *(int *)&pFVar39->field_0x0 - iVar30;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar40,*(int *)&pFVar39->field_0x0,
                   (int *)(pFVar40 + 0xc));
      }
LAB_14ac26e25:
      if (((*(FMesh **)(pFVar36 + 0x18) == (FMesh *)0x0) ||
          (uVar7 = *(ushort *)(pFVar36 + 0x2a),
          uVar21 = UE::Mutable::Private::FMesh::GetSurfaceCount(*(FMesh **)(pFVar36 + 0x18)),
          uVar21 != uVar7)) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("LOD.Mesh && LOD.Mesh->GetSurfaceCount() == LOD.SurfaceCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSkeletalMesh.cpp"
                              ,0x33,L""), bVar42)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar21 = 0;
      if (*(short *)(pFVar36 + 0x2a) != 0) {
        lVar32 = 0;
        do {
          if ((*(longlong *)(pFVar36 + 0x18) == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar42)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar22 = UE::Mutable::Private::FMesh::GetSurfaceId(*(FMesh **)(pFVar36 + 0x18),uVar21);
          pTVar34 = local_138;
          uVar29 = 0;
          if ((int)uVar19 < local_138->ArrayNum) {
            uVar29 = ~uVar19 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar39 = (pTVar34->AllocatorInstance).Data + local_140;
          uVar29 = 0;
          if ((int)uVar21 < *(int *)(pFVar39 + 8)) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar21 = uVar21 + 1;
          *(uint *)(lVar32 + *(longlong *)pFVar39) = uVar22;
          lVar32 = lVar32 + 4;
        } while ((int)uVar21 < (int)(uint)*(ushort *)(pFVar36 + 0x2a));
      }
      uVar37 = (ulonglong)(uVar19 + 1);
      local_144 = local_144 + 1;
      lVar32 = local_100 + 0x40;
      local_108 = local_108 + 1;
      lVar38 = local_f8 + 0x18;
      local_140 = local_140 + 0x10;
      pTVar34 = local_138;
      local_100 = lVar32;
      local_f8 = lVar38;
    } while ((int)(uVar19 + 1) < param_4);
  }
  pUVar23 = UCustomizableObject::GetPrivate(local_98);
  pUVar28 = UCustomizableObjectPrivate::GetModelResourcesChecked(pUVar23);
  USkeletalMesh::WaitUntilAsyncPropertyReleased((USkeletalMesh *)this,SkinWeightProfiles,ReadWrite);
  iVar30 = (int)this->_padding_;
  plVar35 = (longlong *)this->_padding_;
  plVar41 = plVar35 + (longlong)iVar30 * 2;
LAB_14ac27012:
  do {
    if ((int)this->_padding_ != iVar30) {
      local_148[0] = 0;
      `TCheckedPointerIterator<FSkinWeightProfileInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_148);
    }
    if (plVar35 == plVar41) {
      return;
    }
    pFVar36 = (pUVar28->SkinWeightProfilesInfo).AllocatorInstance.Data;
    pFVar39 = pFVar36 + (longlong)(pUVar28->SkinWeightProfilesInfo).ArrayNum * 0x10;
    if (pFVar36 != pFVar39) {
      do {
        lVar32 = *(longlong *)pFVar36;
        if (lVar32 == *plVar35) {
          local_120 = *(undefined4 *)(pFVar36 + 8);
          pTVar4 = &this->SkinWeightProfileIDs;
          pFVar36 = (pTVar4->AllocatorInstance).Data;
          uStack_11c = (undefined4)lVar32;
          uStack_118 = (undefined4)((ulonglong)lVar32 >> 0x20);
          if (((pFVar36 <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               pFVar36 + (longlong)(this->SkinWeightProfileIDs).ArrayMax * 0xc)) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar42)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar20 = (this->SkinWeightProfileIDs).ArrayNum;
          piVar2 = &(this->SkinWeightProfileIDs).ArrayMax;
          if (iVar20 == *piVar2) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar4->AllocatorInstance,piVar2);
          }
          plVar35 = plVar35 + 2;
          (this->SkinWeightProfileIDs).ArrayNum = iVar20 + 1;
          pFVar36 = (pTVar4->AllocatorInstance).Data;
          *(ulonglong *)(pFVar36 + (longlong)iVar20 * 0xc) = CONCAT44(uStack_11c,local_120);
          *(undefined4 *)(pFVar36 + (longlong)iVar20 * 0xc + 8) = uStack_118;
          goto LAB_14ac27012;
        }
        pFVar36 = pFVar36 + 0x10;
      } while (pFVar36 != pFVar39);
    }
    bVar42 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7650952842995302334>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSkeletalMesh.cpp"
                        ,0x42,"ProfileInfo");
    if (bVar42) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar35 = plVar35 + 2;
  } while( true );
}

// StaticRegisterNativesUCustomizableObjectSkeletalMesh @ 14ac39ad0

void __cdecl
UCustomizableObjectSkeletalMesh::StaticRegisterNativesUCustomizableObjectSkeletalMesh(void)

{
  return;
}

// StreamIn @ 14ac39b70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UCustomizableObjectSkeletalMesh::StreamIn
          (UCustomizableObjectSkeletalMesh *this,int param_1,bool param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FCustomizableObjectMeshStreamIn *pFVar7;
  FCustomizableObjectMeshStreamIn *pFVar8;
  byte bVar9;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSkeletalMesh.cpp"
                       ,0x4c,L"");
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
      pFVar8 = (FCustomizableObjectMeshStreamIn *)0x0;
      if (pFVar7 != (FCustomizableObjectMeshStreamIn *)0x0) {
        pFVar8 = FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn
                           (pFVar7,this,(bVar4 != false) + TT_Render,&this->ModelStreamableBulkData)
        ;
      }
      pFVar7 = (FCustomizableObjectMeshStreamIn *)this->_padding_;
      if (pFVar7 != pFVar8) {
        this->_padding_ = (longlong)pFVar8;
        if (pFVar8 != (FCustomizableObjectMeshStreamIn *)0x0) {
          LOCK();
          ((FThreadSafeCounter *)&pFVar8->field_0x64)->Counter =
               ((FThreadSafeCounter *)&pFVar8->field_0x64)->Counter + 1;
          UNLOCK();
        }
        if (pFVar7 != (FCustomizableObjectMeshStreamIn *)0x0) {
          FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar7);
        }
      }
      return *(char *)(this->_padding_ + 0x5c) == '\0';
    }
  }
  return false;
}

