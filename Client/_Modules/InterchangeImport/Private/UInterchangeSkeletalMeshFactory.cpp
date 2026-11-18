// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 22

// StaticClass @ 14e6d8080

UClass * __cdecl UInterchangeSkeletalMeshFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkeletalMeshFactory",
               &Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletalMeshFactory,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletalMeshFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletalMeshFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.InnerSingleton;
}

// UInterchangeSkeletalMeshFactory @ 14e6e0be0

UInterchangeSkeletalMeshFactory * __thiscall
UInterchangeSkeletalMeshFactory::UInterchangeSkeletalMeshFactory
          (UInterchangeSkeletalMeshFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSkeletalMeshFactory__6B_;
  (this->ScopedReimportUtility).Ptr = (FScopedSkeletalMeshReimportUtility *)0x0;
  *(undefined8 *)&this->PayloadsPerLodIndex = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x34 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x48 = 0;
  (this->ImportAssetObjectData).bIsReImport = false;
  (this->ImportAssetObjectData).SkeletonReference = (USkeleton *)0x0;
  (this->ImportAssetObjectData).bApplyGeometryOnly = false;
  (this->ImportAssetObjectData).LodDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).LodDatas.ArrayNum = 0;
  (this->ImportAssetObjectData).LodDatas.ArrayMax = 0;
  (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.ArrayNum = 0;
  (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.ArrayMax = 0;
  (this->ImportAssetObjectData).ExistingClothingBindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).ExistingClothingBindings.ArrayNum = 0;
  (this->ImportAssetObjectData).ExistingClothingBindings.ArrayMax = 0;
  (this->NaniteAssemblyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteAssemblyData).ArrayNum = 0;
  (this->NaniteAssemblyData).ArrayMax = 0;
  return this;
}

// UInterchangeSkeletalMeshFactory @ 14e6e0c90

UInterchangeSkeletalMeshFactory * __thiscall
UInterchangeSkeletalMeshFactory::UInterchangeSkeletalMeshFactory
          (UInterchangeSkeletalMeshFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSkeletalMeshFactory__6B_;
  (this->ScopedReimportUtility).Ptr = (FScopedSkeletalMeshReimportUtility *)0x0;
  *(undefined8 *)&this->PayloadsPerLodIndex = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x34 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PayloadsPerLodIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x48 = 0;
  (this->ImportAssetObjectData).bIsReImport = false;
  (this->ImportAssetObjectData).SkeletonReference = (USkeleton *)0x0;
  (this->ImportAssetObjectData).bApplyGeometryOnly = false;
  (this->ImportAssetObjectData).LodDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).LodDatas.ArrayNum = 0;
  (this->ImportAssetObjectData).LodDatas.ArrayMax = 0;
  (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.ArrayNum = 0;
  (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.ArrayMax = 0;
  (this->ImportAssetObjectData).ExistingClothingBindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportAssetObjectData).ExistingClothingBindings.ArrayNum = 0;
  (this->ImportAssetObjectData).ExistingClothingBindings.ArrayMax = 0;
  (this->NaniteAssemblyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteAssemblyData).ArrayNum = 0;
  (this->NaniteAssemblyData).ArrayMax = 0;
  return this;
}

// ~UInterchangeSkeletalMeshFactory @ 14e6e16b0

void __thiscall
UInterchangeSkeletalMeshFactory::~UInterchangeSkeletalMeshFactory
          (UInterchangeSkeletalMeshFactory *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FScopedSkeletalMeshReimportUtility *this_00;
  
  this->_padding_ = (longlong)&___7UInterchangeSkeletalMeshFactory__6B_;
  DestructItems<UInterchangeSkeletalMeshFactory::FNaniteAssemblyData,int>
            ((FNaniteAssemblyData *)(this->NaniteAssemblyData).AllocatorInstance.Data,
             (this->NaniteAssemblyData).ArrayNum);
  pFVar1 = (this->NaniteAssemblyData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportAssetObjectData).ExistingClothingBindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportAssetObjectData).ExistingSkinWeightProfileInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UInterchangeSkeletalMeshFactory::FImportAssetObjectLODData,int>
            ((FImportAssetObjectLODData *)
             (this->ImportAssetObjectData).LodDatas.AllocatorInstance.Data,
             (this->ImportAssetObjectData).LodDatas.ArrayNum);
  pFVar1 = (this->ImportAssetObjectData).LodDatas.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PayloadsPerLodIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PayloadsPerLodIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UInterchangeSkeletalMeshFactory::FLodPayloads>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UInterchangeSkeletalMeshFactory::FLodPayloads>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UInterchangeSkeletalMeshFactory::FLodPayloads>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PayloadsPerLodIndex);
  this_00 = (this->ScopedReimportUtility).Ptr;
  if (this_00 != (FScopedSkeletalMeshReimportUtility *)0x0) {
    FSkinnedMeshComponentRecreateRenderStateContext::
    ~FSkinnedMeshComponentRecreateRenderStateContext
              ((FSkinnedMeshComponentRecreateRenderStateContext *)this_00);
    ::operator_delete(this_00,0x20);
  }
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BackupSourceData @ 14e6e94c0

void __thiscall
UInterchangeSkeletalMeshFactory::BackupSourceData
          (UInterchangeSkeletalMeshFactory *this,UObject *param_1)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2663,"UInterchangeSkeletalMeshFactory::BackupSourceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2663);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// BeginImportAsset_GameThread @ 14e6ebf00

FImportAssetResult * __thiscall
UInterchangeSkeletalMeshFactory::BeginImportAsset_GameThread
          (UInterchangeSkeletalMeshFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1209,
             "UInterchangeSkeletalMeshFactory::BeginImportAssetObject_GameThread",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
             ,0x4b9);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1209);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// BuildObject_GameThread @ 14e6ebf80

void __thiscall
UInterchangeSkeletalMeshFactory::BuildObject_GameThread
          (UInterchangeSkeletalMeshFactory *this,FSetupObjectParams *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
                       ,0xa0a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_2 = false;
  return;
}

// Cancel @ 14e6ec100

void __thiscall UInterchangeSkeletalMeshFactory::Cancel(UInterchangeSkeletalMeshFactory *this)

{
  FScopedSkeletalMeshReimportUtility *this_00;
  
  this_00 = (this->ScopedReimportUtility).Ptr;
  if (this_00 != (FScopedSkeletalMeshReimportUtility *)0x0) {
    (this->ScopedReimportUtility).Ptr = (FScopedSkeletalMeshReimportUtility *)0x0;
    FSkinnedMeshComponentRecreateRenderStateContext::
    ~FSkinnedMeshComponentRecreateRenderStateContext
              ((FSkinnedMeshComponentRecreateRenderStateContext *)this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// ClearBackupSourceData @ 14e6ec160

void __thiscall
UInterchangeSkeletalMeshFactory::ClearBackupSourceData
          (UInterchangeSkeletalMeshFactory *this,UObject *param_1)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2684,
               "UInterchangeSkeletalMeshFactory::ClearBackupSourceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa7c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2684);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// CreatePayloadTasks @ 14e6ee540

void __thiscall
UInterchangeSkeletalMeshFactory::CreatePayloadTasks
          (UInterchangeSkeletalMeshFactory *this,FImportAssetObjectParams *param_1,bool param_2,
          TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1025,"UInterchangeSkeletalMeshFactory::CreateAsset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0x401);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1025);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// EndImportAsset_GameThread @ 14e6ef450

FImportAssetResult * __thiscall
UInterchangeSkeletalMeshFactory::EndImportAsset_GameThread
          (UInterchangeSkeletalMeshFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  FScopedSkeletalMeshReimportUtility *this_00;
  code *pcVar1;
  bool bVar2;
  FImportAssetResult *pFVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1861,
               "UInterchangeSkeletalMeshFactory::EndImportAssetObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0x745);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1861);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
                         ,0x747,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImportAssetResult *)(*pcVar1)();
    return pFVar3;
  }
  this_00 = (this->ScopedReimportUtility).Ptr;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (this_00 != (FScopedSkeletalMeshReimportUtility *)0x0) {
    (this->ScopedReimportUtility).Ptr = (FScopedSkeletalMeshReimportUtility *)0x0;
    FSkinnedMeshComponentRecreateRenderStateContext::
    ~FSkinnedMeshComponentRecreateRenderStateContext
              ((FSkinnedMeshComponentRecreateRenderStateContext *)this_00);
    ::operator_delete(this_00,0x20);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// FinalizeObject_GameThread @ 14e6ef530

void __thiscall
UInterchangeSkeletalMeshFactory::FinalizeObject_GameThread
          (UInterchangeSkeletalMeshFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2586,
               "UInterchangeSkeletalMeshFactory::FinalizeObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa1a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2586);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x142,L""), bVar2)) {
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

// GetFactoryAssetType @ 14e6efc40

EInterchangeFactoryAssetType __thiscall
UInterchangeSkeletalMeshFactory::GetFactoryAssetType(UInterchangeSkeletalMeshFactory *this)

{
  return Meshes;
}

// GetFactoryClass @ 14e6efc90

UClass * __thiscall
UInterchangeSkeletalMeshFactory::GetFactoryClass(UInterchangeSkeletalMeshFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMesh",
               &Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton,
               USkeletalMesh::StaticRegisterNativesUSkeletalMesh,0x518,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USkeletalMesh>,
               InternalVTableHelperCtorCaller<USkeletalMesh>,aFStackX_8,USkinnedAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMesh.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6f1050

UClass * __cdecl UInterchangeSkeletalMeshFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkeletalMeshFactory",
               &Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletalMeshFactory,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletalMeshFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletalMeshFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6f1130

bool __thiscall
UInterchangeSkeletalMeshFactory::GetSourceFilenames
          (UInterchangeSkeletalMeshFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2636,"UInterchangeSkeletalMeshFactory::GetSourceFilenames",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2636);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

// ImportAsset_Async @ 14e6f2e40

FImportAssetResult * __thiscall
UInterchangeSkeletalMeshFactory::ImportAsset_Async
          (UInterchangeSkeletalMeshFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1447,"UInterchangeSkeletalMeshFactory::CreateAsset",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
             ,0x5a7);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1447);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// ReinstateSourceData @ 14e6fa5b0

void __thiscall
UInterchangeSkeletalMeshFactory::ReinstateSourceData
          (UInterchangeSkeletalMeshFactory *this,UObject *param_1)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2674,"UInterchangeSkeletalMeshFactory::ReinstateSourceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2674);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// SetReimportSourceIndex @ 14e6fb340

bool __thiscall
UInterchangeSkeletalMeshFactory::SetReimportSourceIndex
          (UInterchangeSkeletalMeshFactory *this,UObject *param_1,int param_2)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2695,
               "UInterchangeSkeletalMeshFactory::SetReimportSourceIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa87);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2695);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

// SetSourceFilename @ 14e6fb3c0

bool __thiscall
UInterchangeSkeletalMeshFactory::SetSourceFilename
          (UInterchangeSkeletalMeshFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2649,"UInterchangeSkeletalMeshFactory::SetSourceFilename",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0xa59);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2649);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

// SetupObject_GameThread @ 14e6fbdc0

void __thiscall
UInterchangeSkeletalMeshFactory::SetupObject_GameThread
          (UInterchangeSkeletalMeshFactory *this,FSetupObjectParams *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UInterchangeFactoryBaseNode *pUVar5;
  UClass *pUVar6;
  UInterchangeSourceNode *this_00;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  bool bVar10;
  uchar local_res10 [8];
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2226,
               "UInterchangeSkeletalMeshFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
               ,0x8b2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2226);
  }
  bVar4 = IsInGameThread();
  pwVar9 = L"";
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletalMeshFactory.cpp"
                         ,0x8b3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar5 = UInterchangeBaseNodeContainer::GetFactoryNode
                     (param_1->NodeContainer,&param_1->NodeUniqueID);
  if (pUVar5 != (UInterchangeFactoryBaseNode *)0x0) {
    Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
  }
  pUVar2 = param_1->ImportedObject;
  if (pUVar2 == (UObject *)0x0) {
    pFVar7 = GetTypeName<USkeletalMesh>(&local_38);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar6->_padding_)) {
    this_00 = UInterchangeSourceNode::GetUniqueInstance(param_1->NodeContainer);
    if ((this_00 != (UInterchangeSourceNode *)0x0) &&
       (bVar4 = UInterchangeSourceNode::GetCustomSkeletalMeshFrontAxis(this_00,local_res10), bVar4))
    {
      pUVar2[0x20].field_0x4 = local_res10[0];
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  pFVar7 = GetTypeName<USkeletalMesh>(&local_28);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar8);
}

// StaticRegisterNativesUInterchangeSkeletalMeshFactory @ 14e6fcdc0

void __cdecl
UInterchangeSkeletalMeshFactory::StaticRegisterNativesUInterchangeSkeletalMeshFactory(void)

{
  return;
}

