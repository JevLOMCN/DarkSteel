// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// StaticClass @ 147287d10

UClass * __cdecl UMapBuildDataRegistry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMapBuildDataRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MapBuildDataRegistry",
               &Z_Registration_Info_UClass_UMapBuildDataRegistry.InnerSingleton,
               StaticRegisterNativesUMapBuildDataRegistry,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMapBuildDataRegistry>,
               InternalVTableHelperCtorCaller<UMapBuildDataRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMapBuildDataRegistry.InnerSingleton;
}

// UMapBuildDataRegistry @ 14728bb00

UMapBuildDataRegistry * __thiscall
UMapBuildDataRegistry::UMapBuildDataRegistry(UMapBuildDataRegistry *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMapBuildDataRegistry__6B_;
  *(undefined8 *)&this->MeshBuildData = 0;
  *(undefined8 *)&(this->MeshBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->MeshBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->MeshBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->MeshBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->MeshBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->MeshBuildData).field_0x48 = 0;
  *(undefined8 *)&this->LevelPrecomputedLightVolumeBuildData = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x48 = 0;
  *(undefined8 *)&this->LevelPrecomputedVolumetricLightmapBuildData = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x48 = 0;
  *(undefined8 *)&this->LightBuildData = 0;
  *(undefined8 *)&(this->LightBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LightBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->LightBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->LightBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->LightBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LightBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->LightBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->LightBuildData).field_0x48 = 0;
  *(undefined8 *)&this->ReflectionCaptureBuildData = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x48 = 0;
  *(undefined8 *)&this->SkyAtmosphereBuildData = 0;
  *(undefined8 *)&(this->SkyAtmosphereBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->SkyAtmosphereBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->SkyAtmosphereBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x48 = 0;
  (this->LightmapResourceClusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightmapResourceClusters).ArrayNum = 0;
  (this->LightmapResourceClusters).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PackagesToMapBuildDataLock,4000);
  *(undefined8 *)&this->PackagesToMapBuildData = 0;
  *(undefined8 *)&(this->PackagesToMapBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->PackagesToMapBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->PackagesToMapBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x48 = 0;
  return this;
}

// ~UMapBuildDataRegistry @ 14728d390

void __thiscall UMapBuildDataRegistry::~UMapBuildDataRegistry(UMapBuildDataRegistry *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMapBuildDataRegistry__6B_;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PackagesToMapBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPackage_*,UMapBuildDataRegistry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPackage_*,UMapBuildDataRegistry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPackage_*,UMapBuildDataRegistry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackagesToMapBuildData);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PackagesToMapBuildDataLock);
  FRenderCommandFence::~FRenderCommandFence(&this->DestroyFence);
  DestructItems<FLightmapResourceCluster,int>
            ((FLightmapResourceCluster *)(this->LightmapResourceClusters).AllocatorInstance.Data,
             (this->LightmapResourceClusters).ArrayNum);
  pFVar2 = (this->LightmapResourceClusters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkyAtmosphereBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkyAtmosphereBuildData);
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReflectionCaptureBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReflectionCaptureBuildData);
  *(undefined4 *)&(this->LightBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LightBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LightBuildData);
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelPrecomputedVolumetricLightmapBuildData);
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LevelPrecomputedLightVolumeBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelPrecomputedLightVolumeBuildData);
  *(undefined4 *)&(this->MeshBuildData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshBuildData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshBuildData);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14728fc80

UClass * __cdecl UMapBuildDataRegistry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMapBuildDataRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MapBuildDataRegistry",
               &Z_Registration_Info_UClass_UMapBuildDataRegistry.InnerSingleton,
               StaticRegisterNativesUMapBuildDataRegistry,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMapBuildDataRegistry>,
               InternalVTableHelperCtorCaller<UMapBuildDataRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMapBuildDataRegistry.InnerSingleton;
}

// Serialize @ 147291070

void __thiscall
UMapBuildDataRegistry::Serialize(UMapBuildDataRegistry *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUMapBuildDataRegistry @ 147291340

void __cdecl UMapBuildDataRegistry::StaticRegisterNativesUMapBuildDataRegistry(void)

{
  return;
}

// __VTableCtorCaller @ 147293390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMapBuildDataRegistry::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMapBuildDataRegistry__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x14 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0;
    *(undefined4 *)&pUVar1[8].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x14 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0;
    *(undefined4 *)&pUVar1[10].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x14 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0x14 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x18 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&pUVar1[0xd].field_0x20);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[0xe].field_0x8,4000);
    *(undefined8 *)&pUVar1[0xf].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 0x10) = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0x10].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[0x10].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[0x10].field_0x14 = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x11) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// UMapBuildDataRegistry @ 147ea72d0

UMapBuildDataRegistry * __thiscall
UMapBuildDataRegistry::UMapBuildDataRegistry
          (UMapBuildDataRegistry *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMapBuildDataRegistry__6B_;
  *(undefined8 *)&this->MeshBuildData = 0;
  *(undefined8 *)&(this->MeshBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->MeshBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->MeshBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->MeshBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->MeshBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->MeshBuildData).field_0x48 = 0;
  *(undefined8 *)&this->LevelPrecomputedLightVolumeBuildData = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x48 = 0;
  *(undefined8 *)&this->LevelPrecomputedVolumetricLightmapBuildData = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x48 = 0;
  *(undefined8 *)&this->LightBuildData = 0;
  *(undefined8 *)&(this->LightBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LightBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->LightBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->LightBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->LightBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LightBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->LightBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->LightBuildData).field_0x48 = 0;
  *(undefined8 *)&this->ReflectionCaptureBuildData = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->ReflectionCaptureBuildData).field_0x48 = 0;
  *(undefined8 *)&this->SkyAtmosphereBuildData = 0;
  *(undefined8 *)&(this->SkyAtmosphereBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->SkyAtmosphereBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->SkyAtmosphereBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x48 = 0;
  (this->LightmapResourceClusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightmapResourceClusters).ArrayNum = 0;
  (this->LightmapResourceClusters).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PackagesToMapBuildDataLock,4000);
  *(undefined8 *)&this->PackagesToMapBuildData = 0;
  *(undefined8 *)&(this->PackagesToMapBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->PackagesToMapBuildData).field_0x20 = 0;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x28 = 0;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x34 = 0;
  *(undefined8 *)&(this->PackagesToMapBuildData).field_0x40 = 0;
  *(undefined4 *)&(this->PackagesToMapBuildData).field_0x48 = 0;
  (this->LevelLightingQuality).Value = '\x04';
  this->bSetupResourceClusters = false;
  this->VolumetricLightMapGridDesc = (FVolumetricLightMapGridDesc *)0x0;
  return this;
}

// operator() @ 147eaaf60

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  FLightmapResourceCluster *pFVar7;
  FLightmapResourceCluster *this_00;
  undefined1 local_res8 [8];
  
  plVar2 = *(longlong **)this;
  lVar4 = plVar2[1];
  this_00 = (FLightmapResourceCluster *)*plVar2;
  pFVar7 = this_00 + (int)lVar4;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FLightmapResourceCluster,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar7) break;
    uVar1 = *(undefined4 *)((longlong)this + 8);
    bVar6 = IsInRenderingThread();
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                         ,0xda5,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar5 = this_00->_padding_;
    *(char *)((longlong)&this_00->_padding_ + 4) = (char)uVar1;
    if (((int)lVar5 != -1) && (GRHIGlobals.IsRHIInitialized != false)) {
      FLightmapResourceCluster::TryInitializeUniformBuffer(this_00);
    }
    this_00 = this_00 + 1;
  }
  return;
}

// AddLevelPrecomputedLightVolumeBuildData @ 147eae390

void __thiscall
UMapBuildDataRegistry::AddLevelPrecomputedLightVolumeBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1,FPrecomputedLightVolumeData *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPrecomputedLightVolumeData *local_res18 [2];
  FGuid *local_18;
  FPrecomputedLightVolumeData **local_10;
  
  local_res18[0] = param_2;
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x2fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = local_res18;
  local_18 = param_1;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>_>
            ((TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
              *)&this->LevelPrecomputedLightVolumeBuildData,
             (TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  return;
}

// AddLevelPrecomputedVolumetricLightmapBuildData @ 147eae420

void __thiscall
UMapBuildDataRegistry::AddLevelPrecomputedVolumetricLightmapBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1,FPrecomputedVolumetricLightmapData *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPrecomputedVolumetricLightmapData *local_res18 [2];
  FGuid *local_18;
  FPrecomputedVolumetricLightmapData **local_10;
  
  local_res18[0] = param_2;
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x328,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = local_res18;
  local_18 = param_1;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedVolumetricLightmapData_*_const_&>_>
            ((TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
              *)&this->LevelPrecomputedVolumetricLightmapBuildData,
             (TPairInitializer<FGuid_const_&,FPrecomputedVolumetricLightmapData_*_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  return;
}

// AddReferencedObjects @ 147eaeb10

void __cdecl
UMapBuildDataRegistry::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  int iStack_cc;
  longlong local_c8;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  int iStack_8c;
  longlong local_88;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *local_78;
  undefined2 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_40;
  undefined1 local_38 [32];
  longlong local_18;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_10;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) goto LAB_147eaeb8d;
  }
  param_1 = (UObject *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("TypedThis",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                     ,0x2a1,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147eaeb8d:
  puVar1 = &param_1[1].field_0x8;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
              *)puVar1);
  iVar9 = 1;
  local_b0 = 0;
  stack0xffffffffffffff28 = local_68._16_16_;
  auStack_e0._0_8_ = local_68._8_8_;
  local_c8 = local_48;
  pTStack_c0 = pTStack_40;
  iVar6 = local_68._28_4_;
  local_b8 = (TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
              *)puVar1;
  if (iVar6 < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      lVar8 = (longlong)iVar6 * 0x50 + *(longlong *)local_68._0_8_;
      plVar3 = *(longlong **)(lVar8 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,param_2);
      }
      plVar3 = *(longlong **)(lVar8 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,param_2);
      }
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      iVar6 = iStack_cc;
    } while (iStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar6 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_b8->HashSize < iVar6)) || (iVar6 < local_b8->HashSize)) {
        local_b8->HashSize = iVar6;
        TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
        ::Rehash(local_b8);
      }
    }
  }
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_38,
             (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
              *)&param_1[9].field_0x8);
  local_70 = 0;
  stack0xffffffffffffff68 = local_38._16_16_;
  local_a8 = local_38._0_8_;
  auStack_a0._0_8_ = local_38._8_8_;
  local_88 = local_18;
  pTStack_80 = pTStack_10;
  local_78 = (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
              *)&param_1[9].field_0x8;
  if (local_38._28_4_ < *(int *)(local_38._16_8_ + 0x18)) {
    do {
      uStack_90 = uStack_90 & ~auStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
    } while (iStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34;
      if (3 < uVar10) {
        uVar2 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_78->HashSize < iVar9)) || (iVar9 < local_78->HashSize)) {
        local_78->HashSize = iVar9;
        TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
        ::Rehash(local_78);
      }
    }
  }
  return;
}

// AllocateLevelPrecomputedLightVolumeBuildData @ 147eaf270

FPrecomputedLightVolumeData * __thiscall
UMapBuildDataRegistry::AllocateLevelPrecomputedLightVolumeBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPrecomputedLightVolumeData *pFVar3;
  TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_&&> local_res8;
  FGuid *local_18;
  FPrecomputedLightVolumeData ***local_10;
  
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x2f6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPrecomputedLightVolumeData *)(*pcVar1)();
      return pFVar3;
    }
  }
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  pFVar3 = ::operator_new(0x1a0);
  local_res8.Value = (FPrecomputedLightVolumeData **)0x0;
  if (pFVar3 != (FPrecomputedLightVolumeData *)0x0) {
    local_res8.Value =
         (FPrecomputedLightVolumeData **)
         FPrecomputedLightVolumeData::FPrecomputedLightVolumeData(pFVar3);
  }
  local_10 = &local_res8.Value;
  local_18 = param_1;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_&&>_>
            ((TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
              *)&this->LevelPrecomputedLightVolumeBuildData,&local_res8,(bool *)&local_18);
  return *(FPrecomputedLightVolumeData **)
          ((longlong)(int)local_res8.Key * 0x20 + 0x10 +
          *(longlong *)&this->LevelPrecomputedLightVolumeBuildData);
}

// AllocateLevelPrecomputedVolumetricLightmapBuildData @ 147eaf330

FPrecomputedVolumetricLightmapData * __thiscall
UMapBuildDataRegistry::AllocateLevelPrecomputedVolumetricLightmapBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FVolumetricLightMapGridCell *pFVar3;
  FPrecomputedVolumetricLightmapData *pFVar4;
  int local_res8;
  FPrecomputedVolumetricLightmapData *local_res18 [2];
  FGuid *local_38;
  FPrecomputedVolumetricLightmapData **local_30;
  FGuid local_28;
  FGuid local_18;
  
  if (this->VolumetricLightMapGridDesc != (FVolumetricLightMapGridDesc *)0x0) {
    local_28.A = param_1->A;
    local_28.B = param_1->B;
    local_28.C = param_1->C;
    local_28.D = param_1->D;
    pFVar3 = FVolumetricLightMapGridDesc::GetCell(this->VolumetricLightMapGridDesc,&local_28);
    if (pFVar3 != (FVolumetricLightMapGridCell *)0x0) {
      local_18.A = param_1->A;
      local_18.B = param_1->B;
      local_18.C = param_1->C;
      local_18.D = param_1->D;
      pFVar4 = FVolumetricLightMapGridDesc::GetOrCreatePrecomputedVolumetricLightmapBuildData
                         (this->VolumetricLightMapGridDesc,&local_18);
      return pFVar4;
    }
  }
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x321,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPrecomputedVolumetricLightmapData *)(*pcVar1)();
      return pFVar4;
    }
  }
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  pFVar4 = ::operator_new(0x340);
  local_res18[0] = (FPrecomputedVolumetricLightmapData *)0x0;
  if (pFVar4 != (FPrecomputedVolumetricLightmapData *)0x0) {
    local_res18[0] = FPrecomputedVolumetricLightmapData::FPrecomputedVolumetricLightmapData(pFVar4);
  }
  local_30 = local_res18;
  local_38 = param_1;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedVolumetricLightmapData_*_&&>_>
            ((TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
              *)&this->LevelPrecomputedVolumetricLightmapBuildData,
             (TPairInitializer<FGuid_const_&,FPrecomputedVolumetricLightmapData_*_&&> *)&local_res8,
             (bool *)&local_38);
  return *(FPrecomputedVolumetricLightmapData **)
          ((longlong)local_res8 * 0x20 + 0x10 +
          *(longlong *)&this->LevelPrecomputedVolumetricLightmapBuildData);
}

// AllocateMeshBuildData @ 147eaf450

FMeshMapBuildData * __thiscall
UMapBuildDataRegistry::AllocateMeshBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FMeshMapBuildData *pFVar3;
  FMeshMapBuildData local_48;
  
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x2c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshMapBuildData *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->bSetupResourceClusters != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSetupResourceClusters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x2c7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshMapBuildData *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  local_48.IrrelevantLights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.IrrelevantLights.ArrayNum = 0;
  local_48.IrrelevantLights.ArrayMax = 0;
  local_48.PerInstanceLightmapData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.LightMap.Reference = (FLightMap *)0x0;
  local_48.ShadowMap.Reference = (FShadowMap *)0x0;
  local_48.PerInstanceLightmapData.ArrayNum = 0;
  local_48.PerInstanceLightmapData.ArrayMax = 0;
  local_48.ResourceCluster = (FLightmapResourceCluster *)0x0;
  pFVar3 = TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
           ::Emplace<FGuid_const_&,FMeshMapBuildData>
                     ((TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
                       *)&this->MeshBuildData,param_1,&local_48);
  if (local_48.PerInstanceLightmapData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.PerInstanceLightmapData.AllocatorInstance.Data);
  }
  if (local_48.IrrelevantLights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.IrrelevantLights.AllocatorInstance.Data);
  }
  if (local_48.ShadowMap.Reference != (FShadowMap *)0x0) {
    FShadowMap::Release(local_48.ShadowMap.Reference);
  }
  if (local_48.LightMap.Reference != (FLightMap *)0x0) {
    FLightMap::Release(local_48.LightMap.Reference);
  }
  return pFVar3;
}

// AllocateReflectionCaptureBuildData @ 147eaf570

/* WARNING: Enum "Type": Some values do not have unique names */

FReflectionCaptureMapBuildData * __thiscall
UMapBuildDataRegistry::AllocateReflectionCaptureBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  bool bVar5;
  FReflectionCaptureMapBuildData *pFVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_68;
  FReflectionCaptureMapBuildData local_58;
  
  if ((((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CaptureId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                         ,0x370,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FReflectionCaptureMapBuildData *)(*pcVar2)();
    return pFVar6;
  }
  if (param_2) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_._0_1_ = 0;
  local_58.AllocatedSize._0_1_ = '\0';
  local_58.AllocatedSize._1_1_ = '\0';
  local_58.AllocatedSize._2_1_ = '\0';
  local_58.AllocatedSize._3_1_ = '\0';
  local_58.AllocatedSize._4_1_ = '\0';
  local_58.AllocatedSize._5_1_ = '\0';
  local_58.AllocatedSize._6_1_ = '\0';
  local_58.AllocatedSize._7_1_ = '\0';
  pFVar6 = TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
           ::Emplace<FGuid_const_&,FReflectionCaptureMapBuildData>
                     ((TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
                       *)&this->ReflectionCaptureBuildData,param_1,&local_58);
  uVar3 = local_58.AllocatedSize;
  if ((uchar  [8])local_58.AllocatedSize != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_ReflectionCaptureBuildData;
    if (StatPtr_STAT_ReflectionCaptureBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)0x0) {
      pFVar7 = ::FName::FName(&local_res10,"STAT_ReflectionCaptureBuildData");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureBuildData,
                         *pFVar7,L"Reflection Captures","STATGROUP_MapBuildData","STATCAT_Advanced",
                         L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      uVar4 = local_58.AllocatedSize;
      local_68.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_58.AllocatedSize._0_1_ = (undefined1)uVar3;
      local_58.AllocatedSize._1_1_ = SUB81(uVar3,1);
      local_58.AllocatedSize._2_1_ = SUB81(uVar3,2);
      local_58.AllocatedSize._3_1_ = SUB81(uVar3,3);
      local_58.AllocatedSize._4_1_ = SUB81(uVar3,4);
      local_58.AllocatedSize._5_1_ = SUB81(uVar3,5);
      local_58.AllocatedSize._6_1_ = SUB81(uVar3,6);
      local_58.AllocatedSize._7_1_ = SUB81(uVar3,7);
      local_68.StatData.Pad[0] = (undefined1)local_58.AllocatedSize;
      local_68.StatData.Pad[1] = local_58.AllocatedSize._1_1_;
      local_68.StatData.Pad[2] = local_58.AllocatedSize._2_1_;
      local_68.StatData.Pad[3] = local_58.AllocatedSize._3_1_;
      local_68.StatData.Pad[4] = local_58.AllocatedSize._4_1_;
      local_68.StatData.Pad[5] = local_58.AllocatedSize._5_1_;
      local_68.StatData.Pad[6] = local_58.AllocatedSize._6_1_;
      local_68.StatData.Pad[7] = local_58.AllocatedSize._7_1_;
      local_res8 = FVar1;
      local_68.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      local_58.AllocatedSize = uVar4;
      FThreadStats::AddStatMessage(this_00,&local_68);
      FStatsTrace::Add(&local_res8,-uVar3);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  return pFVar6;
}

// BeginDestroy @ 147eb0ea0

void __thiscall UMapBuildDataRegistry::BeginDestroy(UMapBuildDataRegistry *this)

{
  UObject::BeginDestroy((UObject *)this);
  ReleaseResources(this,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0);
  FRenderCommandFence::BeginFence(&this->DestroyFence,RenderThread);
  return;
}

// CleanupTransientOverrideMapBuildData @ 147eb3ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMapBuildDataRegistry::CleanupTransientOverrideMapBuildData(UMapBuildDataRegistry *this)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  ForAnyElementType _Src;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  TObjectIterator<UHierarchicalInstancedStaticMeshComponent> local_58;
  TObjectIterator<UHierarchicalInstancedStaticMeshComponent> local_40;
  
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  local_40.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<UHierarchicalInstancedStaticMeshComponent>::Advance(&local_40);
  _Src.Data = local_40.ObjectArray.AllocatorInstance.Data;
  lVar12 = (longlong)local_40.ObjectArray.ArrayNum;
  local_58.ObjectArray.ArrayNum = local_40.ObjectArray.ArrayNum;
  local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_40.ObjectArray.ArrayNum == 0) {
    local_58.ObjectArray.ArrayMax = 0;
    uVar4 = local_40.Index;
    uVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_40.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_58,
               local_40.ObjectArray.ArrayNum,&local_58.ObjectArray.ArrayMax);
    memcpy(local_58.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar12 << 3);
    uVar4 = local_40.Index;
    uVar11 = local_40.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_58.Index = uVar4;
    if (uVar4 == uVar11) {
      if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
      }
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar4 < local_58.ObjectArray.ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    lVar12 = *(longlong *)(local_58.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    iVar1 = *(int *)(lVar12 + 0x600);
    lVar10 = *(longlong *)(lVar12 + 0x5f8);
    lVar9 = (longlong)iVar1 * 0x50 + lVar10;
    while( true ) {
      if (*(int *)(lVar12 + 0x600) != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (lVar10 == lVar9) break;
      puVar2 = *(undefined8 **)(lVar10 + 0x28);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar10 + 0x28) = 0;
        if ((void *)puVar2[4] != (void *)0x0) {
          FMemory::Free((void *)puVar2[4]);
        }
        if ((void *)puVar2[2] != (void *)0x0) {
          FMemory::Free((void *)puVar2[2]);
        }
        if ((FShadowMap *)puVar2[1] != (FShadowMap *)0x0) {
          FShadowMap::Release((FShadowMap *)puVar2[1]);
        }
        if ((FLightMap *)*puVar2 != (FLightMap *)0x0) {
          FLightMap::Release((FLightMap *)*puVar2);
        }
        ::operator_delete(puVar2,0x38);
      }
      lVar10 = lVar10 + 0x50;
    }
    TObjectIterator<UHierarchicalInstancedStaticMeshComponent>::Advance(&local_58);
    uVar4 = local_58.Index;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ClearSkyAtmosphereBuildData @ 147eb41b0

void __thiscall UMapBuildDataRegistry::ClearSkyAtmosphereBuildData(UMapBuildDataRegistry *this)

{
  undefined1 *puVar1;
  TMap<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->SkyAtmosphereBuildData;
  bVar3 = 1 < *(int *)&(this->SkyAtmosphereBuildData).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->SkyAtmosphereBuildData).field_0xc;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x34 = 0;
  iVar2 = *(int *)&(this->SkyAtmosphereBuildData).field_0x2c;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkyAtmosphereBuildData).field_0x10,0)
    ;
  }
  if (bVar3) {
    *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x48 = 1;
    TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// EmptyLevelData @ 147eb8580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMapBuildDataRegistry::EmptyLevelData
          (UMapBuildDataRegistry *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  FPrecomputedLightVolumeData *this_00;
  undefined8 *puVar1;
  FVolumetricLightMapGridDesc *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  UMapBuildDataRegistry *pUVar12;
  int iVar13;
  int iVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  FGuid *pFVar17;
  longlong lVar18;
  FGuid *pFVar19;
  uint uVar20;
  undefined1 auStackY_1c8 [32];
  TPairInitializer<FGuid_const_&,FPrecomputedVolumetricLightmapData_*_const_&> local_198;
  longlong *local_188;
  undefined1 auStack_180 [16];
  uint uStack_170;
  uint uStack_16c;
  longlong local_168;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  *pTStack_160;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  *local_158;
  undefined2 local_150;
  longlong local_148;
  longlong local_140;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  *local_138;
  UMapBuildDataRegistry *local_130;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  local_f8;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_a8._72_8_ = local_a8._72_8_ & 0xffffffff00000000;
  local_f8._72_8_ = local_f8._72_8_ & 0xffffffff00000000;
  local_198.Key = (FGuid *)&this->LevelPrecomputedLightVolumeBuildData;
  local_a8.Elements._0_8_ =
       *(undefined8 *)
        &((TMap<FGuid,FPrecomputedLightVolumeData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>_>
           *)local_198.Key)->field_0x0;
  local_a8.Elements._8_8_ = *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x8;
  uVar4 = *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x10;
  uVar5 = *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x18;
  local_a8.Elements._32_8_ = *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x20
  ;
  local_a8.Elements._40_8_ = *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x28
  ;
  local_a8.Elements._48_8_ = *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x30
  ;
  uVar6._0_1_ = (this->LevelPrecomputedLightVolumeBuildData).field_0x38;
  uVar6._1_1_ = (this->LevelPrecomputedLightVolumeBuildData).field_0x39;
  uVar6._2_1_ = (this->LevelPrecomputedLightVolumeBuildData).field_0x3a;
  uVar6._3_1_ = (this->LevelPrecomputedLightVolumeBuildData).field_0x3b;
  uVar6._4_4_ = *(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x3c;
  local_a8.Hash.SecondaryData =
       *(ForElementType<FSetElementId> *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x40;
  uVar16 = *(ulonglong *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x48;
  *(undefined8 *)
   &((TMap<FGuid,FPrecomputedLightVolumeData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>_>
      *)local_198.Key)->field_0x0 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x10 = local_a8.Elements._16_8_
  ;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x18 = local_a8.Elements._24_8_
  ;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x20 = 0;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x30 = 0xffffffff;
  (this->LevelPrecomputedLightVolumeBuildData).field_0x38 = local_a8.Hash.InlineData[0];
  (this->LevelPrecomputedLightVolumeBuildData).field_0x39 = local_a8.Hash.InlineData[1];
  (this->LevelPrecomputedLightVolumeBuildData).field_0x3a = local_a8.Hash.InlineData[2];
  (this->LevelPrecomputedLightVolumeBuildData).field_0x3b = local_a8.Hash.InlineData[3];
  *(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x3c = local_a8.Hash._padding_;
  *(undefined8 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x40 = 0;
  *(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x48 = local_a8.HashSize;
  *(undefined4 *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x4c = local_a8._76_4_;
  local_138 = (TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
               *)&this->LevelPrecomputedVolumetricLightmapBuildData;
  local_f8.Elements._0_8_ =
       *(undefined8 *)
        &((TMap<FGuid,FPrecomputedVolumetricLightmapData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>_>
           *)local_138)->field_0x0;
  local_f8.Elements._8_8_ =
       *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x8;
  uVar7 = *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x10;
  uVar8 = *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x18;
  local_f8.Elements._32_8_ =
       *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x20;
  local_f8.Elements._40_8_ =
       *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x28;
  local_f8.Elements._48_8_ =
       *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x30;
  uVar9._0_1_ = (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x38;
  uVar9._1_1_ = (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x39;
  uVar9._2_1_ = (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x3a;
  uVar9._3_1_ = (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x3b;
  uVar9._4_4_ = *(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x3c;
  local_f8.Hash.SecondaryData =
       *(ForElementType<FSetElementId> *)
        &(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x40;
  uVar10 = *(ulonglong *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x48;
  *(undefined8 *)
   &((TMap<FGuid,FPrecomputedVolumetricLightmapData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>_>
      *)local_138)->field_0x0 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x10 =
       local_f8.Elements._16_8_;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x18 =
       local_f8.Elements._24_8_;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x20 = 0;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x30 = 0xffffffff;
  (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x38 = local_f8.Hash.InlineData[0];
  (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x39 = local_f8.Hash.InlineData[1];
  (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x3a = local_f8.Hash.InlineData[2];
  (this->LevelPrecomputedVolumetricLightmapBuildData).field_0x3b = local_f8.Hash.InlineData[3];
  *(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x3c = local_f8.Hash._padding_;
  *(undefined8 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x40 = 0;
  *(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x48 = local_f8.HashSize;
  *(undefined4 *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x4c = local_f8._76_4_;
  local_130 = this;
  local_f8.Elements._16_8_ = uVar7;
  local_f8.Elements._24_8_ = uVar8;
  local_f8.Hash._0_8_ = uVar9;
  local_f8._72_8_ = uVar10;
  local_a8.Elements._16_8_ = uVar4;
  local_a8.Elements._24_8_ = uVar5;
  local_a8.Hash._0_8_ = uVar6;
  local_a8._72_8_ = uVar16;
  TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_128,&local_a8);
  pFVar19 = local_198.Key;
  local_188 = (longlong *)local_128._0_8_;
  auStack_180._0_8_ = local_128._8_8_;
  stack0xfffffffffffffe88 = local_128._16_16_;
  local_158 = &local_a8;
  local_168 = local_108;
  pTStack_160 = pTStack_100;
  local_150 = 0;
  uVar16 = local_128._24_8_ >> 0x20;
  uVar20 = local_128._28_4_;
  if ((int)uVar20 < *(int *)(local_128._16_8_ + 0x18)) {
    do {
      plVar11 = local_188;
      if (param_1 == (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
LAB_147eb87a1:
        this_00 = *(FPrecomputedLightVolumeData **)((longlong)(int)uVar20 * 0x20 + 0x10 + *plVar11);
        if (this_00 != (FPrecomputedLightVolumeData *)0x0) {
          FPrecomputedLightVolumeData::~FPrecomputedLightVolumeData(this_00);
          ::operator_delete(this_00,0x1a0);
        }
      }
      else {
        lVar18 = (longlong)(int)uVar16 * 0x20;
        pFVar17 = (FGuid *)(*local_188 + lVar18);
        uVar15 = CityHash64((char *)pFVar17,0x10);
        iVar13 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                           (param_1,(uint)uVar15,pFVar17);
        if (iVar13 == -1) goto LAB_147eb87a1;
        local_148 = *plVar11 + lVar18;
        local_140 = local_148 + 0x10;
        TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>_>
                  ((TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
                    *)pFVar19,
                   (TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&> *)
                   &local_198,(bool *)&local_148);
      }
      uStack_170 = uStack_170 & ~auStack_180._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_180);
      uVar16 = (ulonglong)uStack_16c;
      uVar20 = uStack_16c;
    } while ((int)uStack_16c < *(int *)(auStack_180._8_8_ + 0x18));
    if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34;
      iVar13 = 1;
      if (3 < uVar20) {
        uVar16 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_158->HashSize < iVar13)) || (iVar13 < local_158->HashSize)) {
        local_158->HashSize = iVar13;
        TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
        ::Rehash(local_158);
      }
    }
  }
  iVar13 = 1;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_128,&local_f8);
  local_158 = (TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
               *)&local_f8;
  local_150 = 0;
  stack0xfffffffffffffe88 = local_128._16_16_;
  local_188 = (longlong *)local_128._0_8_;
  auStack_180._0_8_ = local_128._8_8_;
  local_168 = local_108;
  pTStack_160 = pTStack_100;
  uVar16 = local_128._24_8_ >> 0x20;
  uVar20 = local_128._28_4_;
  if ((int)uVar20 < *(int *)(local_128._16_8_ + 0x18)) {
    do {
      plVar11 = local_188;
      if (param_1 == (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
LAB_147eb8915:
        puVar1 = *(undefined8 **)((longlong)(int)uVar20 * 0x20 + 0x10 + *plVar11);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      else {
        lVar18 = (longlong)(int)uVar16 * 0x20;
        pFVar19 = (FGuid *)(*local_188 + lVar18);
        uVar15 = CityHash64((char *)pFVar19,0x10);
        iVar14 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                           (param_1,(uint)uVar15,pFVar19);
        if (iVar14 == -1) goto LAB_147eb8915;
        local_148 = *plVar11 + lVar18;
        local_140 = local_148 + 0x10;
        TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedVolumetricLightmapData_*_const_&>_>
                  (local_138,&local_198,(bool *)&local_148);
      }
      uStack_170 = uStack_170 & ~auStack_180._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_180);
      uVar16 = (ulonglong)uStack_16c;
      uVar20 = uStack_16c;
    } while ((int)uStack_16c < *(int *)(auStack_180._8_8_ + 0x18));
    if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
      uVar20 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&local_158->Elements)->field_0x8 -
               *(int *)&((TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&local_158->Elements)->field_0x34;
      if (3 < uVar20) {
        uVar16 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_158->HashSize < iVar13)) || (iVar13 < local_158->HashSize)) {
        local_158->HashSize = iVar13;
        TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
                  *)local_158);
      }
    }
  }
  pUVar12 = local_130;
  if (*(int *)&(local_130->LevelPrecomputedVolumetricLightmapBuildData).field_0x8 ==
      *(int *)&(local_130->LevelPrecomputedVolumetricLightmapBuildData).field_0x34) {
    pFVar2 = local_130->VolumetricLightMapGridDesc;
    if (pFVar2 != (FVolumetricLightMapGridDesc *)0x0) {
      DestructItems<FVolumetricLightMapGridCell,int>
                ((FVolumetricLightMapGridCell *)(pFVar2->Cells).AllocatorInstance.Data,
                 (pFVar2->Cells).ArrayNum);
      pFVar3 = (pFVar2->Cells).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x68);
    }
    pUVar12->VolumetricLightMapGridDesc = (FVolumetricLightMapGridDesc *)0x0;
  }
  DestructItems<FLightmapResourceCluster,int>
            ((FLightmapResourceCluster *)(pUVar12->LightmapResourceClusters).AllocatorInstance.Data,
             (pUVar12->LightmapResourceClusters).ArrayNum);
  (pUVar12->LightmapResourceClusters).ArrayNum = 0;
  if ((pUVar12->LightmapResourceClusters).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(pUVar12->LightmapResourceClusters).AllocatorInstance,0,
               &(pUVar12->LightmapResourceClusters).ArrayMax);
  }
  local_f8._72_8_ = local_f8._72_8_ & 0xffffffff00000000;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  local_a8._72_8_ = local_a8._72_8_ & 0xffffffff00000000;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

// FindOrAllocateLightBuildData @ 147ebbe50

FLightComponentMapBuildData * __thiscall
UMapBuildDataRegistry::FindOrAllocateLightBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FLightComponentMapBuildData *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LightId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x356,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLightComponentMapBuildData *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_2) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->LightBuildData,(uint)uVar5,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0xd0 + *(longlong *)&this->LightBuildData, lVar6 != 0)) {
    return (FLightComponentMapBuildData *)(lVar6 + 0x10);
  }
  pFVar4 = TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
           ::EmplaceByHash<FGuid_const_&>
                     ((TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
                       *)&this->LightBuildData,(uint)uVar5,param_1);
  return pFVar4;
}

// FindOrAllocateSkyAtmosphereBuildData @ 147ebbf20

FSkyAtmosphereMapBuildData * __thiscall
UMapBuildDataRegistry::FindOrAllocateSkyAtmosphereBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkyAtmosphereMapBuildData *pFVar3;
  ulong64 uVar4;
  
  if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Guid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x386,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSkyAtmosphereMapBuildData *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar4 = CityHash64((char *)param_1,0x10);
  pFVar3 = TMapBase<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>_>
           ::FindOrAddImpl<FGuid_const_&>
                     ((TMapBase<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>_>
                       *)&this->SkyAtmosphereBuildData,(uint)uVar4,param_1);
  return pFVar3;
}

// FindRegistryWorldPartition @ 147ebc140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __thiscall
UMapBuildDataRegistry::FindRegistryWorldPartition(UMapBuildDataRegistry *this,AActor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UMapBuildDataRegistry **ppUVar4;
  ULevel *pUVar5;
  UMapBuildDataRegistry *pUVar6;
  TMap<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
  *this_00;
  TPairInitializer<UPackage_*_const_&,UMapBuildDataRegistry_*_const_&> local_res8;
  UMapBuildDataRegistry *local_res18;
  UMapBuildDataRegistry *local_res20;
  UMapBuildDataRegistry *local_88;
  UPackage *local_80;
  UMapBuildDataRegistry **local_78;
  UMapBuildDataRegistry **local_70;
  code *local_68;
  undefined8 **local_60;
  code *local_58;
  undefined8 **local_50;
  UPackage **local_48;
  UMapBuildDataRegistry **local_40;
  
  lpCriticalSection = &this->PackagesToMapBuildDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  this_00 = &this->PackagesToMapBuildData;
  local_80 = pUVar3;
  ppUVar4 = TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
            ::Find((TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                    *)this_00,pUVar3);
  if (ppUVar4 == (UMapBuildDataRegistry **)0x0) {
    local_78 = &local_res20;
    local_60 = &local_78;
    local_res20 = (UMapBuildDataRegistry *)0x0;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<``UMapBuildDataRegistry::FindRegistryWorldPartition'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UObject_*>
               ::Call;
    ForEachObjectWithPackage
              (pUVar3,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_68,true,RF_NoFlags,Borrowed);
    local_res18 = local_res20;
    if (local_res20 == (UMapBuildDataRegistry *)0x0) {
      pUVar5 = AActor::GetLevel(param_1);
      ULevelInstanceSubsystem::GetOwningLevel(pUVar5,false);
      local_70 = &local_88;
      local_88 = (UMapBuildDataRegistry *)0x0;
      local_50 = &local_70;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UMapBuildDataRegistry::FindRegistryWorldPartition'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UObject_*>
                 ::Call;
      ForEachObjectWithPackage
                (pUVar3,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_58,true,RF_NoFlags,Borrowed)
      ;
      local_res18 = local_88;
    }
    ppUVar4 = TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
              ::Find((TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                      *)this_00,local_80);
    if (ppUVar4 != (UMapBuildDataRegistry **)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PackagesToMapBuildData.Find(ObjectPackage)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                         ,0x541,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar6 = (UMapBuildDataRegistry *)(*pcVar1)();
        return pUVar6;
      }
    }
    local_48 = &local_80;
    local_40 = &local_res18;
    TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPackage_*_const_&,UMapBuildDataRegistry_*_const_&>_>
              ((TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_48);
  }
  else {
    local_res18 = *ppUVar4;
  }
  pUVar6 = local_res18;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pUVar6;
}

// FinishDestroy @ 147ebc780

void __thiscall UMapBuildDataRegistry::FinishDestroy(UMapBuildDataRegistry *this)

{
  UObject::FinishDestroy((UObject *)this);
  EmptyLevelData(this,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0);
  return;
}

// Get @ 147ebe200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMapBuildDataRegistry * __cdecl UMapBuildDataRegistry::Get(ULevel *param_1,UWorld *param_2)

{
  code *pcVar1;
  uint uVar2;
  UMapBuildDataRegistry *pUVar3;
  uint uVar4;
  UMapBuildDataRegistry *pUVar5;
  ULevel *pUVar6;
  UMapBuildDataRegistry *pUVar7;
  bool bVar8;
  
  pUVar3 = (UMapBuildDataRegistry *)0x0;
  if ((param_1 == (ULevel *)0x0) || (param_2 == (UWorld *)0x0)) {
    return (UMapBuildDataRegistry *)0x0;
  }
  pUVar6 = (param_2->PersistentLevel).field0_0x0.DebugPtr;
  if ((pUVar6 == (ULevel *)0x0) || (pUVar6->bIsPartitioned == '\0')) {
    pUVar5 = pUVar3;
    pUVar7 = pUVar3;
    if (0 < (param_2->Levels).ArrayNum) {
      do {
        uVar4 = (uint)pUVar5;
        uVar2 = 0;
        if ((int)uVar4 < (param_2->Levels).ArrayNum) {
          uVar2 = ~uVar4 >> 0x1f;
        }
        if ((uVar2 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UMapBuildDataRegistry *)(*pcVar1)();
          return pUVar3;
        }
        pUVar6 = *(ULevel **)
                  ((longlong)&pUVar7->_padding_ + (longlong)(param_2->Levels).AllocatorInstance.Data
                  );
        if (pUVar6->bIsLightingScenario == '\x01' && pUVar6->bIsVisible == '\x01') {
          bVar8 = pUVar6 == (ULevel *)0x0;
          goto LAB_147ebe2e8;
        }
        pUVar5 = (UMapBuildDataRegistry *)(ulonglong)(uVar4 + 1);
        pUVar7 = (UMapBuildDataRegistry *)&pUVar7->_padding_;
      } while ((int)(uVar4 + 1) < (param_2->Levels).ArrayNum);
    }
  }
  else {
    bVar8 = pUVar6->bIsLightingScenario == 0;
LAB_147ebe2e8:
    if ((!bVar8) &&
       (pUVar5 = (pUVar6->MapBuildData).field0_0x0.DebugPtr, pUVar5 != (UMapBuildDataRegistry *)0x0)
       ) {
      return pUVar5;
    }
  }
  pUVar5 = (param_1->MapBuildData).field0_0x0.DebugPtr;
  if (pUVar5 != (UMapBuildDataRegistry *)0x0) {
    pUVar3 = pUVar5;
  }
  return pUVar3;
}

// Get @ 147ebe340

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __cdecl UMapBuildDataRegistry::Get(AActor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  uint uVar2;
  ULevel *this;
  UWorld *this_00;
  UWorldPartition *pUVar3;
  UPackage *pUVar4;
  UMapBuildDataRegistry **ppUVar5;
  ULevel *pUVar6;
  UMapBuildDataRegistry *pUVar7;
  TMap<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
  *this_01;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  TPairInitializer<UPackage_*_const_&,UMapBuildDataRegistry_*_const_&> local_res10;
  UMapBuildDataRegistry *local_res20;
  UMapBuildDataRegistry *local_88;
  UPackage *local_80;
  UMapBuildDataRegistry **local_78;
  UMapBuildDataRegistry **local_70;
  code *local_68;
  UMapBuildDataRegistry ***local_60;
  code *local_58;
  UMapBuildDataRegistry ***local_50;
  UPackage **local_48;
  UMapBuildDataRegistry ***local_40;
  
  this = AActor::GetLevel(param_1);
  if (this == (ULevel *)0x0) {
    return (UMapBuildDataRegistry *)0x0;
  }
  this_00 = ULevel::GetWorld(this);
  if (((this_00 != (UWorld *)0x0) &&
      (pUVar3 = UWorld::GetWorldPartition(this_00), pUVar3 != (UWorldPartition *)0x0)) &&
     (pUVar7 = (((this_00->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr,
     pUVar7 != (UMapBuildDataRegistry *)0x0)) {
    lpCriticalSection = &pUVar7->PackagesToMapBuildDataLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    this_01 = &pUVar7->PackagesToMapBuildData;
    local_80 = pUVar4;
    ppUVar5 = TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
              ::Find((TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                      *)this_01,pUVar4);
    if (ppUVar5 == (UMapBuildDataRegistry **)0x0) {
      local_78 = &local_res20;
      local_res20 = (UMapBuildDataRegistry *)0x0;
      local_60 = &local_78;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UMapBuildDataRegistry::FindRegistryWorldPartition'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UObject_*>
                 ::Call;
      ForEachObjectWithPackage
                (pUVar4,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_68,true,RF_NoFlags,Borrowed)
      ;
      local_res10.Value = (UMapBuildDataRegistry **)local_res20;
      if (local_res20 == (UMapBuildDataRegistry *)0x0) {
        pUVar6 = AActor::GetLevel(param_1);
        ULevelInstanceSubsystem::GetOwningLevel(pUVar6,false);
        local_70 = &local_88;
        local_88 = (UMapBuildDataRegistry *)0x0;
        local_50 = &local_70;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UMapBuildDataRegistry::FindRegistryWorldPartition'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UObject_*>
                   ::Call;
        ForEachObjectWithPackage
                  (pUVar4,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_58,true,RF_NoFlags,
                   Borrowed);
        local_res10.Value = (UMapBuildDataRegistry **)local_88;
      }
      ppUVar5 = TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                ::Find((TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                        *)this_01,local_80);
      if ((ppUVar5 != (UMapBuildDataRegistry **)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PackagesToMapBuildData.Find(ObjectPackage)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                              ,0x541,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        pUVar7 = (UMapBuildDataRegistry *)(*pcVar1)();
        return pUVar7;
      }
      local_48 = &local_80;
      local_40 = &local_res10.Value;
      TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPackage_*_const_&,UMapBuildDataRegistry_*_const_&>_>
                ((TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
                  *)this_01,&local_res10,(bool *)&local_48);
    }
    else {
      local_res10.Value = (UMapBuildDataRegistry **)*ppUVar5;
    }
    ppUVar5 = local_res10.Value;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((UMapBuildDataRegistry *)ppUVar5 != (UMapBuildDataRegistry *)0x0) {
      return (UMapBuildDataRegistry *)ppUVar5;
    }
  }
  if (this_00 == (UWorld *)0x0) {
    return (UMapBuildDataRegistry *)0x0;
  }
  pUVar6 = (this_00->PersistentLevel).field0_0x0.DebugPtr;
  if ((pUVar6 == (ULevel *)0x0) || (pUVar6->bIsPartitioned == '\0')) {
    uVar8 = 0;
    if (0 < (this_00->Levels).ArrayNum) {
      lVar9 = 0;
      do {
        uVar2 = 0;
        if ((int)uVar8 < (this_00->Levels).ArrayNum) {
          uVar2 = ~uVar8 >> 0x1f;
        }
        if ((uVar2 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          pUVar7 = (UMapBuildDataRegistry *)(*pcVar1)();
          return pUVar7;
        }
        pUVar6 = *(ULevel **)((this_00->Levels).AllocatorInstance.Data + lVar9);
        if (pUVar6->bIsLightingScenario == '\x01' && pUVar6->bIsVisible == '\x01') {
          bVar10 = pUVar6 == (ULevel *)0x0;
          goto LAB_147ebe5ca;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (this_00->Levels).ArrayNum);
    }
  }
  else {
    bVar10 = pUVar6->bIsLightingScenario == 0;
LAB_147ebe5ca:
    if ((!bVar10) &&
       (pUVar7 = (pUVar6->MapBuildData).field0_0x0.DebugPtr, pUVar7 != (UMapBuildDataRegistry *)0x0)
       ) {
      return pUVar7;
    }
  }
  pUVar7 = (this->MapBuildData).field0_0x0.DebugPtr;
  if (pUVar7 != (UMapBuildDataRegistry *)0x0) {
    return pUVar7;
  }
  return (UMapBuildDataRegistry *)0x0;
}

// Get @ 147ebe610

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __cdecl UMapBuildDataRegistry::Get(UActorComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  AActor *this;
  code *pcVar1;
  uint uVar2;
  ULevel *this_00;
  UWorld *this_01;
  UWorldPartition *pUVar3;
  UPackage *pUVar4;
  UMapBuildDataRegistry **ppUVar5;
  ULevel *pUVar6;
  UMapBuildDataRegistry *pUVar7;
  TMap<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
  *this_02;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  TPairInitializer<UPackage_*_const_&,UMapBuildDataRegistry_*_const_&> TStackX_10;
  UMapBuildDataRegistry *pUStackX_20;
  UMapBuildDataRegistry *pUStack_88;
  UPackage *pUStack_80;
  UMapBuildDataRegistry **ppUStack_78;
  UMapBuildDataRegistry **ppUStack_70;
  code *pcStack_68;
  UMapBuildDataRegistry ***pppUStack_60;
  code *pcStack_58;
  UMapBuildDataRegistry ***pppUStack_50;
  UPackage **ppUStack_48;
  UMapBuildDataRegistry ***pppUStack_40;
  
  this = param_1->OwnerPrivate;
  if (this == (AActor *)0x0) {
    return (UMapBuildDataRegistry *)0x0;
  }
  this_00 = AActor::GetLevel(this);
  if (this_00 == (ULevel *)0x0) {
    return (UMapBuildDataRegistry *)0x0;
  }
  this_01 = ULevel::GetWorld(this_00);
  if (((this_01 != (UWorld *)0x0) &&
      (pUVar3 = UWorld::GetWorldPartition(this_01), pUVar3 != (UWorldPartition *)0x0)) &&
     (pUVar7 = (((this_01->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr,
     pUVar7 != (UMapBuildDataRegistry *)0x0)) {
    lpCriticalSection = &pUVar7->PackagesToMapBuildDataLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    this_02 = &pUVar7->PackagesToMapBuildData;
    pUStack_80 = pUVar4;
    ppUVar5 = TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
              ::Find((TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                      *)this_02,pUVar4);
    if (ppUVar5 == (UMapBuildDataRegistry **)0x0) {
      ppUStack_78 = &pUStackX_20;
      pUStackX_20 = (UMapBuildDataRegistry *)0x0;
      pppUStack_60 = &ppUStack_78;
      pcStack_68 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UMapBuildDataRegistry::FindRegistryWorldPartition'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UObject_*>
                   ::Call;
      ForEachObjectWithPackage
                (pUVar4,(TFunctionRef<bool___cdecl(UObject_*)> *)&pcStack_68,true,RF_NoFlags,
                 Borrowed);
      TStackX_10.Value = (UMapBuildDataRegistry **)pUStackX_20;
      if (pUStackX_20 == (UMapBuildDataRegistry *)0x0) {
        pUVar6 = AActor::GetLevel(this);
        ULevelInstanceSubsystem::GetOwningLevel(pUVar6,false);
        ppUStack_70 = &pUStack_88;
        pUStack_88 = (UMapBuildDataRegistry *)0x0;
        pppUStack_50 = &ppUStack_70;
        pcStack_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<``UMapBuildDataRegistry::FindRegistryWorldPartition'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UObject_*>
                     ::Call;
        ForEachObjectWithPackage
                  (pUVar4,(TFunctionRef<bool___cdecl(UObject_*)> *)&pcStack_58,true,RF_NoFlags,
                   Borrowed);
        TStackX_10.Value = (UMapBuildDataRegistry **)pUStack_88;
      }
      ppUVar5 = TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                ::Find((TMapBase<UPackage_*,UMapBuildDataRegistry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>_>
                        *)this_02,pUStack_80);
      if ((ppUVar5 != (UMapBuildDataRegistry **)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PackagesToMapBuildData.Find(ObjectPackage)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                              ,0x541,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        pUVar7 = (UMapBuildDataRegistry *)(*pcVar1)();
        return pUVar7;
      }
      ppUStack_48 = &pUStack_80;
      pppUStack_40 = &TStackX_10.Value;
      TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPackage_*_const_&,UMapBuildDataRegistry_*_const_&>_>
                ((TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
                  *)this_02,&TStackX_10,(bool *)&ppUStack_48);
    }
    else {
      TStackX_10.Value = (UMapBuildDataRegistry **)*ppUVar5;
    }
    ppUVar5 = TStackX_10.Value;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((UMapBuildDataRegistry *)ppUVar5 != (UMapBuildDataRegistry *)0x0) {
      return (UMapBuildDataRegistry *)ppUVar5;
    }
  }
  if (this_01 == (UWorld *)0x0) {
    return (UMapBuildDataRegistry *)0x0;
  }
  pUVar6 = (this_01->PersistentLevel).field0_0x0.DebugPtr;
  if ((pUVar6 == (ULevel *)0x0) || (pUVar6->bIsPartitioned == '\0')) {
    uVar8 = 0;
    if (0 < (this_01->Levels).ArrayNum) {
      lVar9 = 0;
      do {
        uVar2 = 0;
        if ((int)uVar8 < (this_01->Levels).ArrayNum) {
          uVar2 = ~uVar8 >> 0x1f;
        }
        if ((uVar2 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          pUVar7 = (UMapBuildDataRegistry *)(*pcVar1)();
          return pUVar7;
        }
        pUVar6 = *(ULevel **)((this_01->Levels).AllocatorInstance.Data + lVar9);
        if (pUVar6->bIsLightingScenario == '\x01' && pUVar6->bIsVisible == '\x01') {
          bVar10 = pUVar6 == (ULevel *)0x0;
          goto LAB_147ebe5ca;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (this_01->Levels).ArrayNum);
    }
  }
  else {
    bVar10 = pUVar6->bIsLightingScenario == 0;
LAB_147ebe5ca:
    if ((!bVar10) &&
       (pUVar7 = (pUVar6->MapBuildData).field0_0x0.DebugPtr, pUVar7 != (UMapBuildDataRegistry *)0x0)
       ) {
      return pUVar7;
    }
  }
  pUVar7 = (this_00->MapBuildData).field0_0x0.DebugPtr;
  if (pUVar7 != (UMapBuildDataRegistry *)0x0) {
    return pUVar7;
  }
  return (UMapBuildDataRegistry *)0x0;
}

// GetLevelPrecomputedLightVolumeBuildData @ 147ec0a80

FPrecomputedLightVolumeData * __thiscall
UMapBuildDataRegistry::GetLevelPrecomputedLightVolumeBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
                      *)&this->LevelPrecomputedLightVolumeBuildData,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 +
            *(longlong *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FPrecomputedLightVolumeData *)*puVar4;
    }
  }
  return (FPrecomputedLightVolumeData *)0x0;
}

// GetLevelPrecomputedLightVolumeBuildData @ 147ec0af0

FPrecomputedLightVolumeData * __thiscall
UMapBuildDataRegistry::GetLevelPrecomputedLightVolumeBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
                      *)&this->LevelPrecomputedLightVolumeBuildData,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 +
            *(longlong *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FPrecomputedLightVolumeData *)*puVar4;
    }
  }
  return (FPrecomputedLightVolumeData *)0x0;
}

// GetLevelPrecomputedVolumetricLightmapBuildData @ 147ec0b60

FPrecomputedVolumetricLightmapData * __thiscall
UMapBuildDataRegistry::GetLevelPrecomputedVolumetricLightmapBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  FPrecomputedVolumetricLightmapData *pFVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FGuid local_18;
  
  if (this->VolumetricLightMapGridDesc != (FVolumetricLightMapGridDesc *)0x0) {
    local_18.A = param_1->A;
    local_18.B = param_1->B;
    local_18.C = param_1->C;
    local_18.D = param_1->D;
    pFVar2 = FVolumetricLightMapGridDesc::GetPrecomputedVolumetricLightmapBuildData
                       (this->VolumetricLightMapGridDesc,&local_18);
    if (pFVar2 != (FPrecomputedVolumetricLightmapData *)0x0) {
      return pFVar2;
    }
  }
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
                      *)&this->LevelPrecomputedVolumetricLightmapBuildData,(uint)uVar3,param_1);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&this->LevelPrecomputedVolumetricLightmapBuildData
    ;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      return (FPrecomputedVolumetricLightmapData *)*puVar5;
    }
  }
  return (FPrecomputedVolumetricLightmapData *)0x0;
}

// GetLevelPrecomputedVolumetricLightmapBuildData @ 147ec0c00

FPrecomputedVolumetricLightmapData * __thiscall
UMapBuildDataRegistry::GetLevelPrecomputedVolumetricLightmapBuildData
          (UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  FPrecomputedVolumetricLightmapData *pFVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FGuid local_18;
  
  if (this->VolumetricLightMapGridDesc != (FVolumetricLightMapGridDesc *)0x0) {
    local_18.A = param_1->A;
    local_18.B = param_1->B;
    local_18.C = param_1->C;
    local_18.D = param_1->D;
    pFVar2 = FVolumetricLightMapGridDesc::GetPrecomputedVolumetricLightmapBuildData
                       (this->VolumetricLightMapGridDesc,&local_18);
    return pFVar2;
  }
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
                      *)&this->LevelPrecomputedVolumetricLightmapBuildData,(uint)uVar3,param_1);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x20 +
            *(longlong *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x0;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      return (FPrecomputedVolumetricLightmapData *)*puVar5;
    }
  }
  return (FPrecomputedVolumetricLightmapData *)0x0;
}

// GetLightBuildData @ 147ec1220

FLightComponentMapBuildData * __thiscall
UMapBuildDataRegistry::GetLightBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FLightComponentMapBuildData *pFVar3;
  FLightComponentMapBuildData *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->LightBuildData,(uint)uVar2,param_1);
  pFVar4 = (FLightComponentMapBuildData *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FLightComponentMapBuildData *)
             ((longlong)iVar1 * 0xd0 + *(longlong *)&(this->LightBuildData).field_0x0);
  }
  pFVar3 = (FLightComponentMapBuildData *)&pFVar4->DepthMap;
  if (pFVar4 == (FLightComponentMapBuildData *)0x0) {
    pFVar3 = (FLightComponentMapBuildData *)0x0;
  }
  return pFVar3;
}

// GetLightBuildData @ 147ec1290

FLightComponentMapBuildData * __thiscall
UMapBuildDataRegistry::GetLightBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FLightComponentMapBuildData *pFVar3;
  FLightComponentMapBuildData *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->LightBuildData,(uint)uVar2,param_1);
  pFVar4 = (FLightComponentMapBuildData *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FLightComponentMapBuildData *)
             ((longlong)iVar1 * 0xd0 + *(longlong *)&(this->LightBuildData).field_0x0);
  }
  pFVar3 = (FLightComponentMapBuildData *)&pFVar4->DepthMap;
  if (pFVar4 == (FLightComponentMapBuildData *)0x0) {
    pFVar3 = (FLightComponentMapBuildData *)0x0;
  }
  return pFVar3;
}

// GetLightmapResourceClusterStats @ 147ec13e0

void __thiscall
UMapBuildDataRegistry::GetLightmapResourceClusterStats
          (UMapBuildDataRegistry *this,int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bSetupResourceClusters == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSetupResourceClusters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x474,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = *(int *)&(this->MeshBuildData).field_0x8 - *(int *)&(this->MeshBuildData).field_0x34;
  *param_2 = (this->LightmapResourceClusters).ArrayNum;
  return;
}

// GetMeshBuildData @ 147ec1e90

FMeshMapBuildData * __thiscall
UMapBuildDataRegistry::GetMeshBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  FMeshMapBuildData *pFVar4;
  FMeshMapBuildData *pFVar5;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->MeshBuildData,(uint)uVar2,param_1);
  pFVar5 = (FMeshMapBuildData *)0x0;
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->MeshBuildData).field_0x0;
    pFVar4 = (FMeshMapBuildData *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      pFVar4 = pFVar5;
    }
    pFVar5 = pFVar4;
    if ((pFVar4 != (FMeshMapBuildData *)0x0) &&
       (pFVar4->ResourceCluster == (FLightmapResourceCluster *)0x0)) {
      return (FMeshMapBuildData *)0x0;
    }
  }
  return pFVar5;
}

// GetMeshBuildData @ 147ec1f10

FMeshMapBuildData * __thiscall
UMapBuildDataRegistry::GetMeshBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  FMeshMapBuildData *pFVar4;
  FMeshMapBuildData *pFVar5;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->MeshBuildData,(uint)uVar2,param_1);
  pFVar5 = (FMeshMapBuildData *)0x0;
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->MeshBuildData).field_0x0;
    pFVar4 = (FMeshMapBuildData *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      pFVar4 = pFVar5;
    }
    pFVar5 = pFVar4;
    if ((pFVar4 != (FMeshMapBuildData *)0x0) &&
       (pFVar4->ResourceCluster == (FLightmapResourceCluster *)0x0)) {
      return (FMeshMapBuildData *)0x0;
    }
  }
  return pFVar5;
}

// GetMeshBuildDataDuringBuild @ 147ec1f90

FMeshMapBuildData * __thiscall
UMapBuildDataRegistry::GetMeshBuildDataDuringBuild(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FMeshMapBuildData *pFVar3;
  FMeshMapBuildData *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->MeshBuildData,(uint)uVar2,param_1);
  pFVar4 = (FMeshMapBuildData *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FMeshMapBuildData *)
             ((longlong)iVar1 * 0x50 + *(longlong *)&(this->MeshBuildData).field_0x0);
  }
  pFVar3 = (FMeshMapBuildData *)&pFVar4->IrrelevantLights;
  if (pFVar4 == (FMeshMapBuildData *)0x0) {
    pFVar3 = (FMeshMapBuildData *)0x0;
  }
  return pFVar3;
}

// GetReflectionCaptureBuildData @ 147ec50f0

FReflectionCaptureMapBuildData * __thiscall
UMapBuildDataRegistry::GetReflectionCaptureBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FReflectionCaptureMapBuildData *pFVar3;
  FReflectionCaptureMapBuildData *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->ReflectionCaptureBuildData,(uint)uVar2,param_1);
  pFVar4 = (FReflectionCaptureMapBuildData *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FReflectionCaptureMapBuildData *)
             ((longlong)iVar1 * 0x50 + *(longlong *)&(this->ReflectionCaptureBuildData).field_0x0);
  }
  pFVar3 = (FReflectionCaptureMapBuildData *)&pFVar4->_padding_;
  if (pFVar4 == (FReflectionCaptureMapBuildData *)0x0) {
    pFVar3 = (FReflectionCaptureMapBuildData *)0x0;
  }
  return pFVar3;
}

// GetReflectionCaptureBuildData @ 147ec5160

FReflectionCaptureMapBuildData * __thiscall
UMapBuildDataRegistry::GetReflectionCaptureBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FReflectionCaptureMapBuildData *pFVar3;
  FReflectionCaptureMapBuildData *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->ReflectionCaptureBuildData,(uint)uVar2,param_1);
  pFVar4 = (FReflectionCaptureMapBuildData *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FReflectionCaptureMapBuildData *)
             ((longlong)iVar1 * 0x50 + *(longlong *)&(this->ReflectionCaptureBuildData).field_0x0);
  }
  pFVar3 = (FReflectionCaptureMapBuildData *)&pFVar4->_padding_;
  if (pFVar4 == (FReflectionCaptureMapBuildData *)0x0) {
    pFVar3 = (FReflectionCaptureMapBuildData *)0x0;
  }
  return pFVar3;
}

// GetSkyAtmosphereBuildData @ 147ec61e0

FSkyAtmosphereMapBuildData * __thiscall
UMapBuildDataRegistry::GetSkyAtmosphereBuildData(UMapBuildDataRegistry *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSkyAtmosphereMapBuildData *pFVar4;
  ulong64 uVar5;
  FSkyAtmosphereMapBuildData *pFVar6;
  
  if ((((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Guid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                         ,0x38c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSkyAtmosphereMapBuildData *)(*pcVar1)();
    return pFVar4;
  }
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->SkyAtmosphereBuildData,(uint)uVar5,param_1);
  pFVar4 = (FSkyAtmosphereMapBuildData *)0x0;
  if (iVar3 != -1) {
    pFVar4 = (FSkyAtmosphereMapBuildData *)
             ((longlong)iVar3 * 0x1c + *(longlong *)&this->SkyAtmosphereBuildData);
  }
  pFVar6 = pFVar4 + 0x10;
  if (pFVar4 == (FSkyAtmosphereMapBuildData *)0x0) {
    pFVar6 = (FSkyAtmosphereMapBuildData *)0x0;
  }
  return pFVar6;
}

// HandleLegacyEncodedCubemapData @ 147ec8fb0

void __thiscall UMapBuildDataRegistry::HandleLegacyEncodedCubemapData(UMapBuildDataRegistry *this)

{
  return;
}

// InitializeClusterRenderingResources @ 147ecc3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMapBuildDataRegistry::InitializeClusterRenderingResources(UMapBuildDataRegistry *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32>_> *pTStack_70;
  Type local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32>_> *pTStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->bSetupResourceClusters == false) &&
     (*(int *)&(this->MeshBuildData).field_0x8 != *(int *)&(this->MeshBuildData).field_0x34)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSetupResourceClusters || MeshBuildData.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x47c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->LightmapResourceClusters).ArrayNum < 1) &&
     (*(int *)&(this->MeshBuildData).field_0x8 != *(int *)&(this->MeshBuildData).field_0x34)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LightmapResourceClusters.Num() > 0 || MeshBuildData.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                       ,0x47e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pTStack_70 = &this->LightmapResourceClusters;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMapBuildDataRegistry::InitializeClusterRenderingResources_::__l2::TSTR_SetFeatureLevelAndInitialize1152>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::TSTR_SetFeatureLevelAndInitialize1152>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// InvalidateReflectionCaptures @ 147ecc5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMapBuildDataRegistry::InvalidateReflectionCaptures
          (UMapBuildDataRegistry *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  TMap<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
  *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar14;
  FGuid *pFVar15;
  char *pcVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined1 auStackY_148 [32];
  undefined8 local_118;
  undefined1 auStack_110 [8];
  undefined1 local_108 [16];
  longlong local_f8;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_f0;
  longlong *local_e8;
  undefined2 local_e0;
  undefined1 local_d8 [12];
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ForElementType<FSetElementId> FStack_70;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uVar13;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (*(int *)&(this->ReflectionCaptureBuildData).field_0x8 -
      *(int *)&(this->ReflectionCaptureBuildData).field_0x34 < 1) {
    return;
  }
  uVar13 = 0;
  this_00 = &this->ReflectionCaptureBuildData;
  local_a8._0_8_ = *(undefined8 *)this_00;
  local_a8._8_8_ = *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x8;
  uVar3 = *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x10;
  uVar4 = *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x18;
  local_88 = *(void **)&(this->ReflectionCaptureBuildData).field_0x20;
  uStack_80 = *(longlong *)&(this->ReflectionCaptureBuildData).field_0x28;
  local_78 = *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x30;
  uVar5._0_1_ = (this->ReflectionCaptureBuildData).field_0x38;
  uVar5._1_1_ = (this->ReflectionCaptureBuildData).field_0x39;
  uVar5._2_1_ = (this->ReflectionCaptureBuildData).field_0x3a;
  uVar5._3_1_ = (this->ReflectionCaptureBuildData).field_0x3b;
  uVar5._4_4_ = *(int *)&(this->ReflectionCaptureBuildData).field_0x3c;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  FStack_70.SecondaryData =
       *(ForElementType<FSetElementId> *)&(this->ReflectionCaptureBuildData).field_0x40;
  uVar11 = *(ulonglong *)&(this->ReflectionCaptureBuildData).field_0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x8 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x10 = local_a8._16_8_;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x18 = local_a8._24_8_;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x20 = 0;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x30 = 0xffffffff;
  (this->ReflectionCaptureBuildData).field_0x38 = FStack_70.InlineData[0];
  (this->ReflectionCaptureBuildData).field_0x39 = FStack_70.InlineData[1];
  (this->ReflectionCaptureBuildData).field_0x3a = FStack_70.InlineData[2];
  (this->ReflectionCaptureBuildData).field_0x3b = FStack_70.InlineData[3];
  *(int *)&(this->ReflectionCaptureBuildData).field_0x3c = FStack_70._padding_;
  *(undefined8 *)&(this->ReflectionCaptureBuildData).field_0x40 = 0;
  *(ulonglong *)&(this->ReflectionCaptureBuildData).field_0x48 = uStack_60;
  local_a8._16_8_ = uVar3;
  local_a8._24_8_ = uVar4;
  FStack_70._0_8_ = uVar5;
  uStack_60 = uVar11;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_d8,
             (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
              *)local_a8);
  uVar3 = local_d8._0_8_;
  local_108._8_4_ = uStack_c0;
  local_108._0_8_ = local_c8;
  local_108._12_4_ = uStack_bc;
  local_e8 = (longlong *)local_a8;
  local_e0 = 0;
  auStack_110 = (undefined1  [8])stack0xffffffffffffff30;
  local_f8 = local_b8;
  pTStack_f0 = pTStack_b0;
  uVar11 = local_108._8_8_ >> 0x20;
  if ((int)local_c8[6] <= (int)uStack_bc) goto LAB_147ecc9dd;
  do {
    if (param_1 != (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
      lVar18 = (longlong)(int)uVar11 * 0x50;
      pFVar15 = (FGuid *)(*(longlong *)uVar3 + lVar18);
      uVar8 = CityHash64((char *)pFVar15,0x10);
      iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (param_1,(uint)uVar8,pFVar15);
      if (iVar7 != -1) {
        pFVar15 = (FGuid *)(*(longlong *)uVar3 + lVar18);
        TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
        ::Emplace<FGuid_const_&,FReflectionCaptureMapBuildData_const_&>
                  ((TMapBase<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
                    *)this_00,pFVar15,(FReflectionCaptureMapBuildData *)(pFVar15 + 1));
      }
    }
    local_108._8_4_ = local_108._8_4_ & ~auStack_110._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
    plVar6 = local_e8;
    uVar11 = (ulonglong)(uint)local_108._12_4_;
  } while ((int)local_108._12_4_ < *(int *)(local_108._0_8_ + 0x18));
  if (((char)local_e0 == '\0') || (local_e0._1_1_ == '\0')) goto LAB_147ecc9dd;
  uVar17 = 1;
  uVar14 = (int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34);
  if (3 < uVar14) {
    uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((((int)uVar14 < 1) || ((int)uVar17 <= (int)local_e8[9])) && ((int)local_e8[9] <= (int)uVar17))
  goto LAB_147ecc9dd;
  puVar1 = (uint *)(local_e8 + 9);
  plVar2 = local_e8 + 7;
  *puVar1 = uVar17;
  if (local_e8[8] != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_e8 + 8),0,0,4);
  }
  if (uVar17 != 0) {
    uVar14 = uVar17;
    if (uVar17 < 2) {
      if (plVar6[8] != 0) {
        uVar14 = 0;
        goto LAB_147ecc83c;
      }
    }
    else {
LAB_147ecc83c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(plVar6 + 8),0,uVar14,4);
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      uVar11 = uVar13;
      do {
        plVar12 = plVar2;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar6[8];
        }
        uVar9 = uVar11 & (longlong)(int)uVar17 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar12 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (*puVar1 != 0) {
    uVar14 = *(uint *)(plVar6 + 5);
    auStack_110 = (undefined1  [8])(plVar6 + 2);
    local_118 = (uint *)&DAT_100000000;
    uVar17 = 0;
    local_108._0_12_ = ZEXT412(0xffffffff);
    if (uVar14 != 0) {
      puVar20 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar20 = (uint *)auStack_110;
      }
      uVar10 = *puVar20;
      uVar11 = uVar13;
      while (uVar10 == 0) {
        uVar17 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uVar17;
        iVar7 = (int)uVar13;
        local_108._8_4_ = uVar17;
        uVar10 = iVar7 + 1;
        uVar13 = (ulonglong)uVar10;
        uVar19 = (ulonglong)local_118 >> 0x20;
        local_118 = (uint *)CONCAT44((int)uVar19,uVar10);
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_147ecc92c;
        uVar10 = puVar20[(longlong)iVar7 + 1];
        local_108._0_4_ = 0xffffffff;
      }
      local_118 = (uint *)CONCAT44(-uVar10 & uVar10,SUB84(local_118,0));
      uVar11 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar17 = (int)lVar18 + -1 + uVar17;
      uVar13 = (ulonglong)uVar17;
      local_108._4_4_ = uVar17;
      if ((int)uVar14 < (int)uVar17) {
LAB_147ecc92c:
        uVar13 = (ulonglong)uVar14;
        local_108._4_4_ = uVar14;
      }
    }
    local_d8._0_8_ = plVar6;
    stack0xffffffffffffff30 = local_118;
    uStack_c0 = local_108._0_4_;
    uStack_bc = local_108._4_4_;
    local_b8 = local_108._8_8_;
    local_c8 = (uint *)auStack_110;
    if ((int)uVar13 < (int)uVar14) {
      do {
        pcVar16 = (char *)(*(longlong *)local_d8._0_8_ + (longlong)(int)uVar13 * 0x50);
        uVar8 = CityHash64(pcVar16,0x10);
        uVar14 = *puVar1 - 1 & (uint)uVar8;
        *(uint *)(pcVar16 + 0x4c) = uVar14;
        plVar12 = plVar2;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar6[8];
        }
        uVar11 = (longlong)(int)*puVar1 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(pcVar16 + 0x48) = *(undefined4 *)((longlong)plVar12 + uVar11 * 4);
        *(int *)((longlong)plVar12 + uVar11 * 4) = (int)uVar13;
        uStack_c0 = uStack_c0 & ~uStack_cc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_d8 + 8));
        uVar13 = (ulonglong)uStack_bc;
      } while ((int)uStack_bc < (int)local_c8[6]);
    }
  }
LAB_147ecc9dd:
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if (FStack_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_70.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar7 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  uVar14 = uStack_80._4_4_;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  local_78 = 0xffffffff;
  if (0x80 < uVar14) {
    uStack_80 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return;
}

// InvalidateStaticLighting @ 147eccab0

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
UMapBuildDataRegistry::InvalidateStaticLighting
          (UMapBuildDataRegistry *this,UWorld *param_1,bool param_2,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  TMap<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>_>
  *this_00;
  bool bVar2;
  int iVar3;
  FGlobalComponentRecreateRenderStateContext *this_01;
  FGlobalComponentRecreateRenderStateContext *this_02;
  ULevel *this_03;
  uint uVar4;
  FGlobalComponentRecreateRenderStateContext *pFVar5;
  
  pFVar5 = (FGlobalComponentRecreateRenderStateContext *)0x0;
  this_02 = pFVar5;
  if ((param_2) &&
     (this_01 = ::operator_new(0x60), this_02 = (FGlobalComponentRecreateRenderStateContext *)0x0,
     this_01 != (FGlobalComponentRecreateRenderStateContext *)0x0)) {
    this_02 = FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext
                        (this_01);
  }
  InvalidateSurfaceLightmaps(this,param_1,false,param_3);
  if (((0 < *(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x8 -
            *(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x34) ||
      (0 < *(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x8 -
           *(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x34)) ||
     (0 < (this->LightmapResourceClusters).ArrayNum)) {
    iVar3 = UWorld::GetNumLevels(param_1);
    if (0 < iVar3) {
      do {
        this_03 = UWorld::GetLevel(param_1,(int)pFVar5);
        ULevel::ReleaseRenderingResources(this_03);
        uVar4 = (int)pFVar5 + 1;
        pFVar5 = (FGlobalComponentRecreateRenderStateContext *)(ulonglong)uVar4;
        iVar3 = UWorld::GetNumLevels(param_1);
      } while ((int)uVar4 < iVar3);
    }
    ReleaseResources(this,param_3);
    FlushRenderingCommands();
    EmptyLevelData(this,param_3);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  this_00 = &this->SkyAtmosphereBuildData;
  bVar2 = 1 < *(int *)&(this->SkyAtmosphereBuildData).field_0x48;
  if (!bVar2) {
    TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->SkyAtmosphereBuildData).field_0xc;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x34 = 0;
  iVar3 = *(int *)&(this->SkyAtmosphereBuildData).field_0x2c;
  *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkyAtmosphereBuildData).field_0x10,0)
    ;
  }
  if (bVar2) {
    *(undefined4 *)&(this->SkyAtmosphereBuildData).field_0x48 = 1;
    TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->bSetupResourceClusters = false;
  if (this_02 != (FGlobalComponentRecreateRenderStateContext *)0x0) {
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(this_02)
    ;
    ::operator_delete(this_02,0x60);
  }
  return;
}

// InvalidateSurfaceLightmaps @ 147eccc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMapBuildDataRegistry::InvalidateSurfaceLightmaps
          (UMapBuildDataRegistry *this,UWorld *param_1,bool param_2,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
  *pTVar3;
  TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32>_> *pTVar4;
  FGuid *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TMap<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
  *this_00;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar16;
  bool bVar17;
  int iVar18;
  FGlobalComponentRecreateRenderStateContext *pFVar19;
  ulong64 uVar20;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar21;
  longlong lVar22;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  FLightComponentMapBuildData *pFVar28;
  uint *puVar29;
  uint uVar30;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  FGlobalComponentRecreateRenderStateContext *local_1d0;
  int local_1c8;
  int local_1c4;
  TMap<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
  *local_1c0;
  TMap<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
  *local_1b8;
  UMapBuildDataRegistry *local_1b0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  int iStack_180;
  undefined4 local_15c;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_158;
  int iStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined8 uStack_140;
  int local_138;
  int iStack_134;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_130;
  TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
  local_128;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  local_d8;
  code *local_88 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  FScriptContainerElement *pFStack_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d0 = (FGlobalComponentRecreateRenderStateContext *)0x0;
  local_1b0 = this;
  if (param_2) {
    pFVar19 = ::operator_new(0x60);
    if (pFVar19 == (FGlobalComponentRecreateRenderStateContext *)0x0) {
      local_1d0 = (FGlobalComponentRecreateRenderStateContext *)0x0;
    }
    else {
      local_1d0 = FGlobalComponentRecreateRenderStateContext::
                  FGlobalComponentRecreateRenderStateContext(pFVar19);
    }
  }
  pFVar19 = local_1d0;
  if ((0 < *(int *)&(this->MeshBuildData).field_0x8 - *(int *)&(this->MeshBuildData).field_0x34) ||
     (0 < *(int *)&(this->LightBuildData).field_0x8 - *(int *)&(this->LightBuildData).field_0x34)) {
    if ((param_3 == (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) ||
       (*(int *)&(param_3->Elements).field_0x8 == *(int *)&(param_3->Elements).field_0x34)) {
      bVar17 = 1 < *(int *)&(this->MeshBuildData).field_0x48;
      if (!bVar17) {
        TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                          *)&this->MeshBuildData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&this->MeshBuildData,0,*(int *)&(this->MeshBuildData).field_0x8);
      puVar1 = &(this->MeshBuildData).field_0xc;
      *(undefined4 *)&(this->MeshBuildData).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,(ForAnyElementType *)&this->MeshBuildData,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->MeshBuildData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->MeshBuildData).field_0x34 = 0;
      iVar18 = *(int *)&(this->MeshBuildData).field_0x2c;
      *(undefined4 *)&(this->MeshBuildData).field_0x28 = 0;
      if ((iVar18 < 0) || (0x80 < iVar18)) {
        *(undefined4 *)&(this->MeshBuildData).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MeshBuildData).field_0x10,0);
      }
      if (bVar17) {
        *(undefined4 *)&(this->MeshBuildData).field_0x48 = 1;
        TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                  *)&this->MeshBuildData);
      }
      pTVar3 = &this->LightBuildData;
      bVar17 = 1 < *(int *)&(this->LightBuildData).field_0x48;
      if (!bVar17) {
        TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                          *)pTVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar3,0,*(int *)&(this->LightBuildData).field_0x8);
      puVar1 = &(this->LightBuildData).field_0xc;
      *(undefined4 *)&(this->LightBuildData).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,0x10,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->LightBuildData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->LightBuildData).field_0x34 = 0;
      iVar18 = *(int *)&(this->LightBuildData).field_0x2c;
      *(undefined4 *)&(this->LightBuildData).field_0x28 = 0;
      if ((iVar18 < 0) || (0x80 < iVar18)) {
        *(undefined4 *)&(this->LightBuildData).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LightBuildData).field_0x10,0);
      }
      if (bVar17) {
        *(undefined4 *)&(this->LightBuildData).field_0x48 = 1;
        TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                  *)pTVar3);
      }
    }
    else {
      local_d8.Elements._0_8_ = *(undefined8 *)&this->MeshBuildData;
      local_d8.Elements._8_8_ = *(undefined8 *)&(this->MeshBuildData).field_0x8;
      local_1c0 = &this->MeshBuildData;
      uVar9 = *(undefined8 *)&(this->MeshBuildData).field_0x10;
      uVar10 = *(undefined8 *)&(this->MeshBuildData).field_0x18;
      iStack_150 = 0;
      local_d8.Elements._32_8_ = *(undefined8 *)&(this->MeshBuildData).field_0x20;
      local_d8.Elements._40_8_ = *(undefined8 *)&(this->MeshBuildData).field_0x28;
      uStack_14c = 1;
      local_d8.Elements._48_8_ = *(undefined8 *)&(this->MeshBuildData).field_0x30;
      uVar11._0_1_ = (this->MeshBuildData).field_0x38;
      uVar11._1_1_ = (this->MeshBuildData).field_0x39;
      uVar11._2_1_ = (this->MeshBuildData).field_0x3a;
      uVar11._3_1_ = (this->MeshBuildData).field_0x3b;
      uVar11._4_4_ = *(int *)&(this->MeshBuildData).field_0x3c;
      local_d8._72_8_ = local_d8._72_8_ & 0xffffffff00000000;
      local_128._72_8_ = local_128._72_8_ & 0xffffffff00000000;
      puVar1 = &(param_3->Elements).field_0x10;
      local_d8.Hash.SecondaryData =
           *(ForElementType<FSetElementId> *)&(this->MeshBuildData).field_0x40;
      uVar26 = *(ulonglong *)&(this->MeshBuildData).field_0x48;
      *(undefined8 *)local_1c0 = 0;
      *(undefined8 *)&(this->MeshBuildData).field_0x8 = 0;
      *(undefined8 *)&(this->MeshBuildData).field_0x10 = local_d8.Elements._16_8_;
      *(undefined8 *)&(this->MeshBuildData).field_0x18 = local_d8.Elements._24_8_;
      *(undefined8 *)&(this->MeshBuildData).field_0x20 = 0;
      *(undefined8 *)&(this->MeshBuildData).field_0x28 = 0x8000000000;
      *(undefined8 *)&(this->MeshBuildData).field_0x30 = 0xffffffff;
      (this->MeshBuildData).field_0x38 = local_d8.Hash.InlineData[0];
      (this->MeshBuildData).field_0x39 = local_d8.Hash.InlineData[1];
      (this->MeshBuildData).field_0x3a = local_d8.Hash.InlineData[2];
      (this->MeshBuildData).field_0x3b = local_d8.Hash.InlineData[3];
      *(int *)&(this->MeshBuildData).field_0x3c = local_d8.Hash._padding_;
      *(undefined8 *)&(this->MeshBuildData).field_0x40 = 0;
      *(int *)&(this->MeshBuildData).field_0x48 = local_d8.HashSize;
      *(undefined4 *)&(this->MeshBuildData).field_0x4c = local_d8._76_4_;
      local_1b8 = &this->LightBuildData;
      local_128.Hash.SecondaryData =
           *(ForElementType<FSetElementId> *)&(this->LightBuildData).field_0x40;
      uVar12 = *(ulonglong *)&(this->LightBuildData).field_0x48;
      local_128.Elements._0_8_ = *(undefined8 *)local_1b8;
      local_128.Elements._8_8_ = *(undefined8 *)&(this->LightBuildData).field_0x8;
      uVar13 = *(undefined8 *)&(this->LightBuildData).field_0x10;
      uVar14 = *(undefined8 *)&(this->LightBuildData).field_0x18;
      local_128.Elements._32_8_ = *(undefined8 *)&(this->LightBuildData).field_0x20;
      local_128.Elements._40_8_ = *(undefined8 *)&(this->LightBuildData).field_0x28;
      local_128.Elements._48_8_ = *(undefined8 *)&(this->LightBuildData).field_0x30;
      uVar15._0_1_ = (this->LightBuildData).field_0x38;
      uVar15._1_1_ = (this->LightBuildData).field_0x39;
      uVar15._2_1_ = (this->LightBuildData).field_0x3a;
      uVar15._3_1_ = (this->LightBuildData).field_0x3b;
      uVar15._4_4_ = *(int *)&(this->LightBuildData).field_0x3c;
      *(undefined8 *)local_1b8 = 0;
      *(undefined8 *)&(this->LightBuildData).field_0x8 = 0;
      *(undefined8 *)&(this->LightBuildData).field_0x10 = local_128.Elements._16_8_;
      *(undefined8 *)&(this->LightBuildData).field_0x18 = local_128.Elements._24_8_;
      *(undefined8 *)&(this->LightBuildData).field_0x20 = 0;
      *(undefined8 *)&(this->LightBuildData).field_0x28 = 0x8000000000;
      *(undefined8 *)&(this->LightBuildData).field_0x30 = 0xffffffff;
      (this->LightBuildData).field_0x38 = local_128.Hash.InlineData[0];
      (this->LightBuildData).field_0x39 = local_128.Hash.InlineData[1];
      (this->LightBuildData).field_0x3a = local_128.Hash.InlineData[2];
      (this->LightBuildData).field_0x3b = local_128.Hash.InlineData[3];
      *(int *)&(this->LightBuildData).field_0x3c = local_128.Hash._padding_;
      *(undefined8 *)&(this->LightBuildData).field_0x40 = 0;
      *(int *)&(this->LightBuildData).field_0x48 = local_128.HashSize;
      *(undefined4 *)&(this->LightBuildData).field_0x4c = local_128._76_4_;
      local_138 = 0;
      iVar18 = *(int *)&(param_3->Elements).field_0x28;
      uStack_140._4_4_ = 0;
      if (iVar18 != 0) {
        puVar29 = *(uint **)&(param_3->Elements).field_0x20;
        if (puVar29 == (uint *)0x0) {
          puVar29 = (uint *)puVar1;
        }
        uVar24 = *puVar29;
        iStack_150 = 0;
        while (uVar24 == 0) {
          lVar22 = (longlong)iStack_150;
          local_138 = local_138 + 0x20;
          iStack_150 = iStack_150 + 1;
          uStack_140._4_4_ = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150)
          goto LAB_147ecceaf;
          uVar24 = puVar29[lVar22 + 1];
        }
        uStack_14c = -uVar24 & uVar24;
        uVar6 = (ulonglong)uStack_14c * 2 + 1;
        lVar22 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_1c8 = (int)lVar22;
        uStack_140._4_4_ = local_138 + -1 + local_1c8;
        if (iVar18 < uStack_140._4_4_) {
          uStack_140._4_4_ = iVar18;
        }
      }
LAB_147ecceaf:
      uVar24 = *(uint *)&(param_3->Elements).field_0x28;
      iStack_134 = local_15c;
      uVar30 = uVar24 & 0xffffffe0;
      uStack_140._0_4_ = 0xffffffff;
      TStack_1a0._padding_ = CONCAT44(uStack_14c,iStack_150);
      ppTStack_130 = (TBitArray<FDefaultBitArrayAllocator> **)
                     CONCAT44(ppTStack_130._4_4_,
                              *(int *)&(param_3->Elements).field_0x8 -
                              *(int *)&(param_3->Elements).field_0x34);
      iVar25 = (int)uVar24 >> 5;
      TStack_1a0._28_4_ = local_15c;
      TStack_1a0.BaseBitIndex = local_138;
      TStack_1a0.UnvisitedBitMask = 0xffffffff;
      TStack_1a0.CurrentBitIndex = uStack_140._4_4_;
      _iStack_180 = ppTStack_130;
      local_1a8 = param_3;
      TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_158 = param_3;
      local_148 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_128.Elements._16_8_ = uVar13;
      local_128.Elements._24_8_ = uVar14;
      local_128.Hash._0_8_ = uVar15;
      local_128._72_8_ = uVar12;
      local_d8.Elements._16_8_ = uVar9;
      local_d8.Elements._24_8_ = uVar10;
      local_d8.Hash._0_8_ = uVar11;
      local_d8._72_8_ = uVar26;
      if ((((int)uVar24 < 0) || (iVar18 < (int)uVar24)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar3 = local_1b8;
      this_00 = local_1c0;
      uVar7 = *(uint *)&(param_3->Elements).field_0x28;
      if (uVar24 != uVar7) {
        puVar27 = *(undefined1 **)&(param_3->Elements).field_0x20;
        if (puVar27 == (undefined1 *)0x0) {
          puVar27 = puVar1;
        }
        uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar25 * 4);
        while (uVar24 == 0) {
          lVar22 = (longlong)iVar25;
          uVar30 = uVar30 + 0x20;
          iVar25 = iVar25 + 1;
          uVar24 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_147eccfb0;
          uVar24 = *(uint *)(puVar27 + lVar22 * 4 + 4);
        }
        uVar26 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_1c4 = (int)lVar22;
        uVar24 = local_1c4 + -1 + uVar30;
        if ((int)uVar7 < (int)uVar24) {
          uVar24 = uVar7;
        }
      }
LAB_147eccfb0:
      while( true ) {
        pTVar16 = local_1a8;
        if (*(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34 !=
            iStack_180) {
          local_1d8[0] = 0;
          `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
        }
        pFVar19 = local_1d0;
        if (((TStack_1a0.CurrentBitIndex == uVar24) &&
            (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar16 == param_3)) break;
        pFVar5 = (FGuid *)(*(longlong *)&pTVar16->Elements +
                          (longlong)TStack_1a0.CurrentBitIndex * 0x18);
        uVar20 = CityHash64((char *)pFVar5,0x10);
        iVar18 = TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>(&local_d8,(uint)uVar20,pFVar5);
        if (iVar18 == -1) {
LAB_147ecd04b:
          uVar20 = CityHash64((char *)pFVar5,0x10);
          iVar18 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FGuid>(&local_128,(uint)uVar20,pFVar5);
          if (iVar18 != -1) {
            lVar22 = (longlong)iVar18 * 0xd0 + local_128.Elements._0_8_;
            pFVar28 = (FLightComponentMapBuildData *)(lVar22 + 0x10);
            if (lVar22 == 0) {
              pFVar28 = (FLightComponentMapBuildData *)0x0;
            }
            if (pFVar28 != (FLightComponentMapBuildData *)0x0) {
              TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
              ::Emplace<FGuid_const_&,FLightComponentMapBuildData_const_&>
                        ((TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
                          *)pTVar3,pFVar5,pFVar28);
            }
          }
        }
        else {
          lVar22 = (longlong)iVar18 * 0x50 + local_d8.Elements._0_8_;
          pFVar28 = (FLightComponentMapBuildData *)(lVar22 + 0x10);
          if (lVar22 == 0) {
            pFVar28 = (FLightComponentMapBuildData *)0x0;
          }
          if (pFVar28 == (FLightComponentMapBuildData *)0x0) goto LAB_147ecd04b;
          TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
          ::Emplace<FGuid_const_&,FMeshMapBuildData_const_&>
                    ((TMapBase<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
                      *)this_00,pFVar5,(FMeshMapBuildData *)pFVar28);
        }
        TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      }
      local_128._72_8_ = local_128._72_8_ & 0xffffffff00000000;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_128.Elements);
      local_d8._72_8_ = local_d8._72_8_ & 0xffffffff00000000;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      this = local_1b0;
    }
    pTVar4 = &this->LightmapResourceClusters;
    ppTStack_130 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    uStack_140 = (pTVar4->AllocatorInstance).Data;
    piVar2 = &(this->LightmapResourceClusters).ArrayMax;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iStack_134 = *piVar2;
    local_138 = (this->LightmapResourceClusters).ArrayNum;
    local_158 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                UE::Core::Private::Function::
                TFunctionRefCaller<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
    (this->LightmapResourceClusters).ArrayNum = 0;
    *piVar2 = 0;
    local_148 = (TBitArray<FDefaultBitArrayAllocator> *)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::`24'::<lambda_1>,1,0>
                 ::_vftable_;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMapBuildDataRegistry::InvalidateSurfaceLightmaps_::__l24::TSTR_FReleaseLightmapResourceClustersCmd997>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_158);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_68._4_4_ = iStack_134;
      local_68._0_4_ = local_138;
      local_88[0] = (code *)local_158;
      local_60 = ppTStack_130;
      local_78 = local_148;
      pFStack_70 = uStack_140;
      local_158 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0;
      local_58 = 2;
      pFVar21 = (FRenderCommandTag *)
                TRenderCommandTag<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::TSTR_FReleaseLightmapResourceClustersCmd997>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar21);
      uVar26 = (ulonglong)local_58;
      if ((2 < uVar26) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88[0] != (code *)0x0) {
          ppTVar23 = (TBitArray<FDefaultBitArrayAllocator> **)(local_88 + 2);
          if (local_60 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
            ppTVar23 = local_60;
          }
          (*(code *)((*ppTVar23)->AllocatorInstance).SecondaryData)();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26])();
      }
    }
    if (local_158 != (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
      ppTVar23 = &local_148;
      if (ppTStack_130 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar23 = ppTStack_130;
      }
      (*(code *)((*ppTVar23)->AllocatorInstance).SecondaryData)();
    }
    DestructItems<FLightmapResourceCluster,int>((FLightmapResourceCluster *)0x0,0);
    DestructItems<FLightmapResourceCluster,int>
              ((FLightmapResourceCluster *)(pTVar4->AllocatorInstance).Data,
               (this->LightmapResourceClusters).ArrayNum);
    (this->LightmapResourceClusters).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&pTVar4->AllocatorInstance,0,piVar2);
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  if (pFVar19 != (FGlobalComponentRecreateRenderStateContext *)0x0) {
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(pFVar19)
    ;
    ::operator_delete(pFVar19,0x60);
  }
  return;
}

// IsLegacyBuildData @ 147ecd820

bool __thiscall UMapBuildDataRegistry::IsLegacyBuildData(UMapBuildDataRegistry *this)

{
  UPackage *pUVar1;
  
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  return (bool)((byte)((uint)pUVar1->PackageFlagsPrivate >> 0x11) & 1);
}

// IsLightingValid @ 147ecd940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall UMapBuildDataRegistry::IsLightingValid(UMapBuildDataRegistry *this,Type param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FStaticShaderPlatform FVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FMeshMapBuildData local_78;
  
  if (*(int *)&(this->MeshBuildData).field_0x8 == *(int *)&(this->MeshBuildData).field_0x34) {
    if ((*(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x8 -
         *(int *)&(this->LevelPrecomputedLightVolumeBuildData).field_0x34 < 1) &&
       (*(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x8 -
        *(int *)&(this->LevelPrecomputedVolumetricLightmapBuildData).field_0x34 < 1)) {
      return false;
    }
    return true;
  }
  if (param_1 == Num) {
    FVar11.Platform = SP_NumPlatforms;
  }
  else {
    FVar11.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  bVar6 = UseVirtualTextureLightmap(FVar11,(ITargetPlatformSettings *)0x0);
  iVar4 = *(int *)&(this->MeshBuildData).field_0x28;
  puVar1 = &(this->MeshBuildData).field_0x10;
  iVar15 = 0;
  uVar9 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->MeshBuildData).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147ecda6e;
      uVar14 = puVar18[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar17 + -1 + (int)lVar12;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_147ecda6e:
  uVar14 = *(uint *)&(this->MeshBuildData).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar9,iVar15);
  TStack_b0.CurrentBitIndex = iVar10;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_b0._28_4_ = iVar10;
  TStack_b0.BaseBitIndex = iVar17;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(this->MeshBuildData).field_0x8 -
                       *(int *)&(this->MeshBuildData).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(this->MeshBuildData).field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(this->MeshBuildData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147ecdb80;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_147ecdb80:
  do {
    if (*(int *)&(this->MeshBuildData).field_0x8 - *(int *)&(this->MeshBuildData).field_0x34 !=
        (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar14) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((longlong)TStack_b0.CurrentBitIndex * 0x50 + *(longlong *)&this->MeshBuildData);
    local_88 = *puVar2;
    uStack_80 = puVar2[1];
    FMeshMapBuildData::FMeshMapBuildData
              (&local_78,
               (FMeshMapBuildData *)
               (*(longlong *)&this->MeshBuildData + 0x10 +
               (longlong)TStack_b0.CurrentBitIndex * 0x50));
    if ((local_78.LightMap.Reference != (FLightMap *)0x0) &&
       (lVar12 = (**(code **)((local_78.LightMap.Reference)->_padding_ + 0x30))(), lVar12 != 0)) {
      if (bVar6) {
        if (*(longlong *)(lVar12 + 0x48) != 0) goto LAB_147ecdc5a;
        lVar12 = *(longlong *)(lVar12 + 0x50);
      }
      else {
        if (*(longlong *)(lVar12 + 0x20) != 0) {
LAB_147ecdc5a:
          if (local_78.PerInstanceLightmapData.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.PerInstanceLightmapData.AllocatorInstance.Data);
          }
          if (local_78.IrrelevantLights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.IrrelevantLights.AllocatorInstance.Data);
          }
          if (local_78.ShadowMap.Reference != (FShadowMap *)0x0) {
            FShadowMap::Release(local_78.ShadowMap.Reference);
          }
          if (local_78.LightMap.Reference != (FLightMap *)0x0) {
            FLightMap::Release(local_78.LightMap.Reference);
          }
          return true;
        }
        lVar12 = *(longlong *)(lVar12 + 0x28);
      }
      if (lVar12 != 0) goto LAB_147ecdc5a;
    }
    if (local_78.PerInstanceLightmapData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.PerInstanceLightmapData.AllocatorInstance.Data);
    }
    if (local_78.IrrelevantLights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.IrrelevantLights.AllocatorInstance.Data);
    }
    if (local_78.ShadowMap.Reference != (FShadowMap *)0x0) {
      FShadowMap::Release(local_78.ShadowMap.Reference);
    }
    if (local_78.LightMap.Reference != (FLightMap *)0x0) {
      FLightMap::Release(local_78.LightMap.Reference);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// IsReadyForFinishDestroy @ 147ecde40

bool __thiscall UMapBuildDataRegistry::IsReadyForFinishDestroy(UMapBuildDataRegistry *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->DestroyFence);
  return bVar1;
}

// PostLoad @ 147ed1b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UMapBuildDataRegistry::PostLoad(UMapBuildDataRegistry *this)

{
  TMap<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  UObject::PostLoad((UObject *)this);
  bVar3 = MobileForwardEnableClusteredReflections((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if ((bVar3) ||
     ((FReadOnlyCVARCache::bMobileDeferredShadingValue != false &&
      (FReadOnlyCVARCache::bMobileHDR != false)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((2 < (int)GMaxRHIFeatureLevel) || (bVar3)) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  if ((GMaxRHIFeatureLevel != ES3_1) || (bVar3)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  pTVar1 = &this->ReflectionCaptureBuildData;
  if (0 < *(int *)&(this->ReflectionCaptureBuildData).field_0x8 -
          *(int *)&(this->ReflectionCaptureBuildData).field_0x34) {
    if ((cVar7 == cVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFullDataRequired != bEncodedDataRequired",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                           ,0x269,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar5 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      iVar9 = 1;
      do {
        lVar6 = (longlong)(int)uVar5 * 0x50 + *local_58;
        if (cVar7 == '\0') {
          *(undefined4 *)(lVar6 + 0x20) = 0;
          if (*(int *)(lVar6 + 0x24) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,(ForAnyElementType *)(lVar6 + 0x18),0,(int *)(lVar6 + 0x24));
          }
        }
        if (cVar8 == '\0') {
          *(undefined4 *)(lVar6 + 0x30) = 0;
          if (*(int *)(lVar6 + 0x34) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,(ForAnyElementType *)(lVar6 + 0x28),0,(int *)(lVar6 + 0x34));
          }
        }
        if ((*(int *)(lVar6 + 0x30) < 1) && (*(int *)(lVar6 + 0x20) < 1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                 _thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                   _thread_safe_static_guard_0__),
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__ == -1)) {
            pwVar4 = FCommandLine::Get();
            `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
                 = FParse::Param(pwVar4,L"nullrhi");
            _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__);
          }
          if ((((PRIVATE_GIsRunningCommandlet == false) ||
               (PRIVATE_GAllowCommandletRendering != false)) &&
              (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
               bHasNullRHIOnCommandline == false)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("CaptureBuildData.EncodedHDRCapturedData.Num() > 0 || CaptureBuildData.FullHDRCapturedData.Num() > 0 || FApp::CanEverRender() == false"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                                 ,0x279,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar5 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (3 < uVar10) {
          uVar5 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar6 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_28->HashSize < iVar9)) || (iVar9 < local_28->HashSize)) {
          local_28->HashSize = iVar9;
          TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  SetupLightmapResourceClusters(this);
  return;
}

// ReleaseResources @ 147ed7580

void __thiscall
UMapBuildDataRegistry::ReleaseResources
          (UMapBuildDataRegistry *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  TMap<FGuid,FPrecomputedVolumetricLightmapData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>_>
  *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  FGuid *pFVar7;
  FRenderResource *pFVar8;
  FRenderResource *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  CleanupTransientOverrideMapBuildData(this);
  pTVar1 = &this->LevelPrecomputedVolumetricLightmapBuildData;
  TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  uVar10 = local_88._28_4_;
  local_28 = (TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
              *)pTVar1;
  if ((int)uVar10 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      plVar3 = local_58;
      if (param_1 == (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
LAB_147ed7648:
        BeginReleaseResource
                  (*(FRenderResource **)((longlong)(int)uVar10 * 0x20 + 0x10 + *plVar3),
                   (FRenderCommandPipe *)0x0);
      }
      else {
        pFVar7 = (FGuid *)((longlong)(int)uVar6 * 0x20 + *local_58);
        uVar5 = CityHash64((char *)pFVar7,0x10);
        iVar4 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                          (param_1,(uint)uVar5,pFVar7);
        if (iVar4 == -1) goto LAB_147ed7648;
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
      uVar10 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
        local_28->HashSize = iVar4;
        TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  iVar4 = (this->LightmapResourceClusters).ArrayNum;
  pFVar8 = (FRenderResource *)(this->LightmapResourceClusters).AllocatorInstance.Data;
  pFVar9 = (FRenderResource *)((longlong)pFVar8 + (longlong)iVar4 * 0x68);
  while( true ) {
    if ((this->LightmapResourceClusters).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FLightmapResourceCluster,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    BeginReleaseResource(pFVar8,(FRenderCommandPipe *)0x0);
    pFVar8 = (FRenderResource *)&pFVar8[3].OwnerName;
  }
  return;
}

// RemoveRegistry @ 147ed8930

void __thiscall
UMapBuildDataRegistry::RemoveRegistry(UMapBuildDataRegistry *this,UMapBuildDataRegistry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  UPackage *local_res8;
  
  lpCriticalSection = &this->PackagesToMapBuildDataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    if (*(int *)&(this->PackagesToMapBuildData).field_0x8 !=
        *(int *)&(this->PackagesToMapBuildData).field_0x34) {
      uVar1 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
              * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UPackage_const_*>
                ((TSet<TTuple<UPackage_*,UMapBuildDataRegistry_*>,TDefaultMapHashableKeyFuncs<UPackage_*,UMapBuildDataRegistry_*,0>,FDefaultSetAllocator>
                  *)&this->PackagesToMapBuildData,uVar1 >> 0x10 ^ uVar1,&local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x000147ed89bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Serialize @ 147edbaa0

void __thiscall UMapBuildDataRegistry::Serialize(UMapBuildDataRegistry *this,FArchive *param_1)

{
  uint *puVar1;
  TMap<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>_>
  *pTVar2;
  ulonglong *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FVolumetricLightMapGridDesc *pFVar8;
  FVolumetricLightMapGridDesc *pFVar9;
  UScriptStruct *this_00;
  ulonglong uVar10;
  uint uVar11;
  FStripDataFlags local_res10 [4];
  uint local_res18 [2];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  UObject::Serialize((UObject *)this,param_1);
  FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMobileObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReflectionCaptureObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((local_res10[0].GlobalStripFlags & 2) != 0) {
    return;
  }
  TSetPrivateFriend::
  Serialize<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->MeshBuildData);
  TSetPrivateFriend::
  Serialize<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
                      *)&this->LevelPrecomputedLightVolumeBuildData);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if (0x13 < iVar7) {
    TSetPrivateFriend::
    Serialize<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
                        *)&this->LevelPrecomputedVolumetricLightmapBuildData);
  }
  TSetPrivateFriend::
  Serialize<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->LightBuildData);
  if ((param_1->field_0x28 & 4) != 0) {
    pTVar2 = &this->ReflectionCaptureBuildData;
    TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                *)pTVar2);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar10 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                *)pTVar2;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        if (((*(int *)(*local_58 + 0x20 + (longlong)(int)uVar10 * 0x50) < 1) &&
            (*(int *)(*local_58 + 0x30 + (longlong)(int)uVar10 * 0x50) < 1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CaptureBuildData.FullHDRCapturedData.Num() > 0 || CaptureBuildData.EncodedHDRCapturedData.Num() > 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                               ,0x22b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar10 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar7 = 1;
        }
        else {
          uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_28->HashSize < iVar7)) || (iVar7 < local_28->HashSize)) {
          local_28->HashSize = iVar7;
          TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReflectionCaptureObjectVersion::GUID);
  if (0 < iVar7) {
    TSetPrivateFriend::
    Serialize<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
                        *)&this->ReflectionCaptureBuildData);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if (0x1f < iVar7) {
    TSetPrivateFriend::
    Serialize<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
                        *)&this->SkyAtmosphereBuildData);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar7 < 0x8b) {
    return;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  bVar6 = this->VolumetricLightMapGridDesc != (FVolumetricLightMapGridDesc *)0x0;
  pFVar9 = (FVolumetricLightMapGridDesc *)0x0;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] =
           (uint)(this->VolumetricLightMapGridDesc != (FVolumetricLightMapGridDesc *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar11 = local_res18[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147edbd98;
  }
  else {
    uVar11 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  bVar6 = uVar11 != 0;
LAB_147edbd98:
  if (bVar6) {
    if (this->VolumetricLightMapGridDesc == (FVolumetricLightMapGridDesc *)0x0) {
      pFVar8 = ::operator_new(0x68);
      if (pFVar8 != (FVolumetricLightMapGridDesc *)0x0) {
        (pFVar8->GridBounds).Min.field0_0x0._s_0.X = 0.0;
        (pFVar8->GridBounds).Min.field0_0x0._s_0.Y = 0.0;
        (pFVar8->GridBounds).Min.field0_0x0._s_0.Z = 0.0;
        (pFVar8->GridBounds).Max.field0_0x0._s_0.X = 0.0;
        (pFVar8->GridBounds).Max.field0_0x0._s_0.Y = 0.0;
        (pFVar8->GridBounds).Max.field0_0x0._s_0.Z = 0.0;
        (pFVar8->GridBounds).IsValid = '\0';
        (pFVar8->GridBounds).Pad[0] = '\0';
        (pFVar8->GridBounds).Pad[1] = '\0';
        (pFVar8->GridBounds).Pad[2] = '\0';
        (pFVar8->GridBounds).Pad[3] = '\0';
        (pFVar8->GridBounds).Pad[4] = '\0';
        (pFVar8->GridBounds).Pad[5] = '\0';
        (pFVar8->GridBounds).Pad[6] = '\0';
        (pFVar8->Guid).A = 0;
        (pFVar8->Guid).B = 0;
        (pFVar8->Guid).C = 0;
        (pFVar8->Guid).D = 0;
        pFVar8->CellSize = 0.0;
        pFVar8->DetailCellSize = 0.0;
        *(undefined8 *)&pFVar8->BrickSize = 0;
        (pFVar8->Cells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Cells).ArrayNum = 0;
        (pFVar8->Cells).ArrayMax = 0;
        pFVar8->CellSize = 0.0;
        pFVar8->DetailCellSize = 0.0;
        pFVar8->BrickSize = 0.0;
        pFVar9 = pFVar8;
      }
      this->VolumetricLightMapGridDesc = pFVar9;
    }
    this_00 = FVolumetricLightMapGridDesc::StaticStruct();
    UScriptStruct::SerializeItem(this_00,param_1,this->VolumetricLightMapGridDesc,(void *)0x0);
    FVolumetricLightMapGridDesc::SerializeBulkData
              (this->VolumetricLightMapGridDesc,param_1,(UObject *)this);
  }
  return;
}

// SetVolumetricLightMapGridDesc @ 147edd720

void __thiscall
UMapBuildDataRegistry::SetVolumetricLightMapGridDesc
          (UMapBuildDataRegistry *this,FVolumetricLightMapGridDesc *param_1)

{
  FVolumetricLightMapGridDesc *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->VolumetricLightMapGridDesc;
  if (pFVar1 != (FVolumetricLightMapGridDesc *)0x0) {
    DestructItems<FVolumetricLightMapGridCell,int>
              ((FVolumetricLightMapGridCell *)(pFVar1->Cells).AllocatorInstance.Data,
               (pFVar1->Cells).ArrayNum);
    pFVar2 = (pFVar1->Cells).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x68);
    this->VolumetricLightMapGridDesc = param_1;
    return;
  }
  this->VolumetricLightMapGridDesc = param_1;
  return;
}

// SetupLightmapResourceClusters @ 147edd8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMapBuildDataRegistry::SetupLightmapResourceClusters(UMapBuildDataRegistry *this)

{
  TMap<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  FName FVar8;
  UTexture2D *pUVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_void___cdecl_UMapBuildDataRegistry::SetupLightmapResourceClusters(void)_::_5_::FStat_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters>
  FVar14;
  longlong lVar15;
  FShadowMap2D *pFVar16;
  ulonglong uVar17;
  UTexture2D *pUVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FName FVar21;
  uint uVar22;
  FRenderResource *pFVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  FLightmapClusterResourceInput *pFVar27;
  UTexture2D *pUVar28;
  FRenderResource *pFVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint *puVar32;
  longlong *plVar33;
  UTexture2D *pUVar34;
  UTexture2D *pUVar35;
  UTexture2D *pUVar36;
  ULightMapVirtualTexture2D *pUVar37;
  undefined1 auStackY_338 [32];
  undefined1 local_2d7 [7];
  FName local_2d0;
  FColor_u_0 local_2c8 [2];
  uint local_2c0;
  uint uStack_2bc;
  ULightMapVirtualTexture2D *pUStack_2b8;
  undefined4 local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  FName local_2a0;
  UTexture2D *local_298;
  FLightmapClusterResourceInput local_290;
  FName local_258;
  undefined4 local_248;
  int local_244;
  undefined1 local_240 [36];
  uint uStack_21c;
  ULightMapVirtualTexture2D *pUStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *local_1c8;
  undefined2 local_1c0;
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_190;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  UTexture2D *local_148;
  FName local_140;
  FName local_138;
  undefined1 local_130 [32];
  longlong local_110;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_108;
  undefined1 local_100 [32];
  longlong local_e0;
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  *pTStack_d8;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  ulonglong local_78;
  
  pvVar7 = ThreadLocalStoragePointer;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if (this->bSetupResourceClusters != false) {
    return;
  }
  uVar30 = (ulonglong)_tls_index;
  this->bSetupResourceClusters = true;
  uVar19 = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar7 + uVar30 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UMapBuildDataRegistry::SetupLightmapResourceClusters(void)_::_5_::FStat_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters>
         )0x0) {
      pFVar13 = ::FName::FName(&local_140,"STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters,*pFVar13,
                 L"STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters;
  if (StatPtr_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UMapBuildDataRegistry::SetupLightmapResourceClusters(void)_::_5_::FStat_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters>
       )0x0) {
    pFVar13 = ::FName::FName(&local_138,"STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters");
    FVar14 = (FThreadSafeStaticStat<_public:_void___cdecl_UMapBuildDataRegistry::SetupLightmapResourceClusters(void)_::_5_::FStat_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters,*pFVar13
                          ,L"STAT_UMapBuildDataRegistry_SetupLightmapResourceClusters",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar5 = false;
  bVar6 = false;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_147edda6a:
    bVar6 = bVar11;
    bVar5 = bVar10;
    bVar10 = false;
    FVar21 = local_258;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2a0.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_2a0.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2a0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                   ,0x44e);
        bVar5 = true;
        bVar6 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147edda6a;
    local_2d0 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar10 = true;
  }
  pTVar1 = &this->MeshBuildData;
  local_c8._0_8_ = 0;
  uVar24 = 1;
  local_c8._8_8_ = 0;
  local_a8 = (uint *)0x0;
  uVar22 = (*(int *)&(this->MeshBuildData).field_0x8 - *(int *)&(this->MeshBuildData).field_0x34) /
           0x1e + 1;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if (3 < uVar22) {
    uVar30 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_248 = (undefined4)lVar26;
    uVar24 = 1 << ((byte)lVar26 & 0x1f);
  }
  if ((((int)uVar22 < 1) || ((int)uVar24 < 1)) && (-1 < (int)uVar24)) {
    TSet<FLightmapClusterResourceInput,DefaultKeyFuncs<FLightmapClusterResourceInput,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<FLightmapClusterResourceInput,DefaultKeyFuncs<FLightmapClusterResourceInput,0>,FDefaultSetAllocator>
                      *)local_c8);
    TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_c8,uVar22);
    goto LAB_147eddb30;
  }
  TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_c8,uVar22);
  local_80 = uVar24;
  if ((ForElementType<FSetElementId>)local_88.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
  }
  if (uVar24 != 0) {
    uVar22 = uVar24;
    if (uVar24 < 2) {
      if ((ForElementType<FSetElementId>)local_88.Data != (ForElementType<FSetElementId>)0x0) {
        uVar22 = 0;
        goto LAB_147eddd1a;
      }
    }
    else {
LAB_147eddd1a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar22,4);
    }
    if (0 < (int)uVar24) {
      uVar31 = (ulonglong)uVar24;
      uVar30 = uVar19;
      do {
        FVar20.Data = (FScriptContainerElement *)local_90;
        if ((ForElementType<FSetElementId>)local_88.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_88.Data;
        }
        uVar17 = (longlong)(int)uVar24 - 1U & uVar30;
        uVar30 = uVar30 + 1;
        *(undefined4 *)((longlong)FVar20.Data + uVar17 * 4) = 0xffffffff;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  if (local_80 != 0) {
    pUStack_2b8 = (ULightMapVirtualTexture2D *)(local_c8 + 0x10);
    local_2c0 = 0;
    uStack_2bc = 1;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    if (local_a0 != 0) {
      puVar32 = (uint *)(local_c8 + 0x10);
      if (local_a8 != (uint *)0x0) {
        puVar32 = local_a8;
      }
      uVar22 = *puVar32;
      uVar30 = uVar19;
      while (uVar22 == 0) {
        uStack_2a8 = (int)uVar30 + 0x20;
        uVar30 = (ulonglong)uStack_2a8;
        iVar12 = (int)uVar19;
        local_2c0 = iVar12 + 1;
        uVar19 = (ulonglong)local_2c0;
        if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2c0)
        goto LAB_147edde2d;
        uVar22 = puVar32[(longlong)iVar12 + 1];
      }
      uStack_2bc = -uVar22 & uVar22;
      uVar19 = (ulonglong)uStack_2bc * 2 + 1;
      lVar26 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_244 = (int)lVar26;
      uStack_2ac = (uStack_2a8 - 1) + local_244;
      uVar19 = (ulonglong)uStack_2ac;
      if ((int)local_a0 < (int)uStack_2ac) {
LAB_147edde2d:
        uVar19 = (ulonglong)local_a0;
        uStack_2ac = local_a0;
      }
    }
    local_2b0 = 0xffffffff;
    local_240._24_8_ = local_c8;
    unique0x100009b0 = (ULightMapVirtualTexture2D *)CONCAT44(uStack_2bc,local_2c0);
    local_210 = (UTexture2D *)CONCAT44(uStack_2ac,0xffffffff);
    uStack_208 = CONCAT44(uStack_2a4,uStack_2a8);
    pUStack_218 = pUStack_2b8;
    if ((int)uVar19 < (int)local_a0) {
      do {
        pFVar27 = (FLightmapClusterResourceInput *)
                  ((longlong)(int)uVar19 * 0x40 + *(longlong *)local_240._24_8_);
        uVar22 = ::GetTypeHash(pFVar27);
        uVar22 = uVar22 & local_80 - 1;
        *(uint *)((longlong)pFVar27[1].LightMapTextures + 4) = uVar22;
        FVar20.Data = (FScriptContainerElement *)local_90;
        if ((ForElementType<FSetElementId>)local_88.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_88.Data;
        }
        uVar30 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar22;
        *(undefined4 *)pFVar27[1].LightMapTextures =
             *(undefined4 *)((longlong)FVar20.Data + uVar30 * 4);
        *(int *)((longlong)FVar20.Data + uVar30 * 4) = (int)uVar19;
        local_210 = (UTexture2D *)CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_21c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_240 + 0x20));
        uVar19 = (ulonglong)local_210._4_4_;
      } while ((int)local_210._4_4_ < (int)pUStack_218->_padding_);
    }
  }
LAB_147eddb30:
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_130,
             (TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_1c0 = 0;
  stack0xfffffffffffffe18 = local_130._16_16_;
  local_1f8 = (longlong *)local_130._0_8_;
  auStack_1f0._0_8_ = local_130._8_8_;
  local_1d8 = local_110;
  pTStack_1d0 = pTStack_108;
  uVar19 = local_130._24_8_ >> 0x20;
  local_1c8 = (TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_130._28_4_ < *(int *)(local_130._16_8_ + 0x18)) {
    do {
      local_148 = (UTexture2D *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      lVar26 = (longlong)(int)uVar19 * 0x50 + *local_1f8;
      local_158 = 0;
      uStack_150 = 0;
      plVar33 = *(longlong **)(lVar26 + 0x10);
      if ((plVar33 != (longlong *)0x0) && (lVar15 = (**(code **)(*plVar33 + 0x30))(), lVar15 != 0))
      {
        local_178 = *(undefined8 *)(lVar15 + 0x20);
        uStack_170 = *(undefined8 *)(lVar15 + 0x28);
        local_168 = *(undefined8 *)(lVar15 + 0x30);
        uStack_160 = *(undefined8 *)(lVar15 + 0x38);
        local_158 = *(undefined8 *)(lVar15 + 0x48);
        uStack_150 = *(undefined8 *)(lVar15 + 0x50);
      }
      plVar33 = *(longlong **)(lVar26 + 0x18);
      if ((plVar33 != (longlong *)0x0) &&
         (pFVar16 = (FShadowMap2D *)(**(code **)(*plVar33 + 0x28))(), pFVar16 != (FShadowMap2D *)0x0
         )) {
        local_148 = FShadowMap2D::GetTexture(pFVar16);
      }
      TSet<FLightmapClusterResourceInput,DefaultKeyFuncs<FLightmapClusterResourceInput,0>,FDefaultSetAllocator>
      ::Emplace<FLightmapClusterResourceInput>
                ((TSet<FLightmapClusterResourceInput,DefaultKeyFuncs<FLightmapClusterResourceInput,0>,FDefaultSetAllocator>
                  *)local_c8,(FLightmapClusterResourceInput *)local_240,(bool *)&local_178);
      uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
      uVar19 = (ulonglong)uStack_1dc;
    } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
    if (((char)local_1c0 != '\0') && (local_1c0._1_1_ != '\0')) {
      uVar22 = *(int *)&(local_1c8->Elements).field_0x8 - *(int *)&(local_1c8->Elements).field_0x34;
      if (uVar22 < 4) {
        iVar12 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_240._4_4_ = (undefined4)lVar26;
        iVar12 = 1 << ((byte)lVar26 & 0x1f);
      }
      if (((0 < (int)uVar22) && (local_1c8->HashSize < iVar12)) || (iVar12 < local_1c8->HashSize)) {
        local_1c8->HashSize = iVar12;
        TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
        ::Rehash(local_1c8);
      }
    }
  }
  pUVar18 = (UTexture2D *)&this->LightmapResourceClusters;
  uVar22 = local_c8._8_4_ - local_94;
  local_240._8_8_ = pUVar18;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  plVar33 = (longlong *)&(this->LightmapResourceClusters).ArrayNum;
  DestructItems<FLightmapResourceCluster,int>
            ((FLightmapResourceCluster *)
             (((TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32>_> *)pUVar18)->
             AllocatorInstance).Data,(this->LightmapResourceClusters).ArrayNum);
  piVar2 = &(this->LightmapResourceClusters).ArrayMax;
  *(int *)plVar33 = 0;
  if (*piVar2 != uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,uVar22,(ForAnyElementType *)pUVar18,0,piVar2);
  }
  iVar25 = local_c8._8_4_ - local_94;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x68,8,iVar25,(ForAnyElementType *)pUVar18,(int *)plVar33,piVar2);
  DefaultConstructItems<FLightmapResourceCluster,int>
            ((((TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32>_> *)pUVar18)->
             AllocatorInstance).Data + (longlong)iVar12 * 0x68,iVar25);
  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_100,
             (TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_180 = 0;
  stack0xfffffffffffffe58 = local_100._16_16_;
  local_1b8 = (longlong *)local_100._0_8_;
  auStack_1b0._0_8_ = local_100._8_8_;
  local_198 = local_e0;
  pTStack_190 = pTStack_d8;
  uVar19 = local_100._24_8_ >> 0x20;
  local_188 = (TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_100._28_4_ < *(int *)(local_100._16_8_ + 0x18)) {
    do {
      pUVar18 = (UTexture2D *)0x0;
      pUVar34 = (UTexture2D *)0x0;
      local_290.ShadowMapTexture = (UTexture2D *)0x0;
      pUVar35 = (UTexture2D *)0x0;
      pUVar36 = (UTexture2D *)0x0;
      pUVar37 = (ULightMapVirtualTexture2D *)0x0;
      local_290.LightMapTextures[0] = (UTexture2D *)0x0;
      local_290.LightMapTextures[1] = (UTexture2D *)0x0;
      local_290.SkyOcclusionTexture = (UTexture2D *)0x0;
      local_290.AOMaterialMaskTexture = (UTexture2D *)0x0;
      pUVar28 = (UTexture2D *)((longlong)(int)uVar19 * 0x50 + *local_1b8);
      local_290.LightMapVirtualTextures[0] = (ULightMapVirtualTexture2D *)0x0;
      local_290.LightMapVirtualTextures[1] = (ULightMapVirtualTexture2D *)0x0;
      local_240._16_8_ = pUVar28;
      if (((longlong *)pUVar28->_padding_ == (longlong *)0x0) ||
         (lVar26 = (**(code **)(*(longlong *)pUVar28->_padding_ + 0x30))(), lVar26 == 0)) {
        local_298 = (UTexture2D *)0x0;
        local_2d0.ComparisonIndex.Value = 0;
        local_2d0.Number = 0;
      }
      else {
        local_298 = *(UTexture2D **)(lVar26 + 0x20);
        pUVar34 = *(UTexture2D **)(lVar26 + 0x28);
        pUVar35 = *(UTexture2D **)(lVar26 + 0x30);
        pUVar36 = *(UTexture2D **)(lVar26 + 0x38);
        pUVar37 = *(ULightMapVirtualTexture2D **)(lVar26 + 0x48);
        local_2d0 = *(FName *)(lVar26 + 0x50);
        local_290.LightMapTextures[0] = local_298;
        local_290.LightMapTextures[1] = pUVar34;
        local_290.SkyOcclusionTexture = pUVar35;
        local_290.AOMaterialMaskTexture = pUVar36;
        local_290.LightMapVirtualTextures[0] = pUVar37;
        local_290.LightMapVirtualTextures[1] = (ULightMapVirtualTexture2D *)local_2d0;
      }
      pUVar9 = local_298;
      FVar8 = local_2d0;
      if (((longlong *)pUVar28->_padding_ != (longlong *)0x0) &&
         (pFVar16 = (FShadowMap2D *)(**(code **)(*(longlong *)pUVar28->_padding_ + 0x28))(),
         pFVar16 != (FShadowMap2D *)0x0)) {
        pUVar18 = FShadowMap2D::GetTexture(pFVar16);
        local_290.ShadowMapTexture = pUVar18;
      }
      uVar22 = ::GetTypeHash(&local_290);
      if (local_c8._8_4_ != local_94) {
        FVar20.Data = (FScriptContainerElement *)local_90;
        if ((ForElementType<FSetElementId>)local_88.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_88.Data;
        }
        uVar22 = *(uint *)((longlong)FVar20.Data + (ulonglong)(local_80 - 1 & uVar22) * 4);
        while (uVar22 != 0xffffffff) {
          lVar26 = (longlong)(int)uVar22 * 0x40;
          if (((((*(UTexture2D **)(lVar26 + local_c8._0_8_) == local_298) &&
                (*(UTexture2D **)(lVar26 + 8 + local_c8._0_8_) == pUVar34)) &&
               (*(UTexture2D **)(lVar26 + 0x10 + local_c8._0_8_) == pUVar35)) &&
              ((*(UTexture2D **)(lVar26 + 0x18 + local_c8._0_8_) == pUVar36 &&
               (*(ULightMapVirtualTexture2D **)(lVar26 + 0x20 + local_c8._0_8_) == pUVar37)))) &&
             ((*(FName *)(lVar26 + 0x28 + local_c8._0_8_) == local_2d0 &&
              (*(UTexture2D **)(lVar26 + 0x30 + local_c8._0_8_) == pUVar18)))) {
            if (uVar22 == 0xffffffff) goto LAB_147ede1b9;
            goto LAB_147ede1f0;
          }
          uVar22 = *(uint *)(lVar26 + 0x38 + local_c8._0_8_);
        }
      }
      uVar22 = 0xffffffff;
LAB_147ede1b9:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClusterId.IsValidId()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                          ,0x463,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_147ede1f0:
      pUVar18 = (UTexture2D *)local_240._8_8_;
      pUVar28 = local_290.ShadowMapTexture;
      plVar33 = (longlong *)(local_240._8_8_ + 8);
      uVar24 = 0;
      if ((int)uVar22 < (int)*(longlong *)(local_240._8_8_ + 8)) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = ((ForAnyElementType *)pUVar18)->Data;
      lVar26 = (longlong)(int)uVar22 * 0x68;
      *(UTexture2D **)(pFVar3 + lVar26 + 0x20) = pUVar9;
      *(UTexture2D **)(pFVar3 + lVar26 + 0x20 + 8) = pUVar34;
      *(UTexture2D **)(pFVar3 + lVar26 + 0x30) = pUVar35;
      *(UTexture2D **)(pFVar3 + lVar26 + 0x30 + 8) = pUVar36;
      *(ULightMapVirtualTexture2D **)(pFVar3 + lVar26 + 0x40) = pUVar37;
      *(FName *)(pFVar3 + lVar26 + 0x40 + 8) = FVar8;
      *(UTexture2D **)(pFVar3 + lVar26 + 0x50) = pUVar28;
      uVar24 = 0;
      if ((int)uVar22 < (int)*plVar33) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(FScriptContainerElement **)(local_240._16_8_ + 0x40) =
           ((ForAnyElementType *)pUVar18)->Data + lVar26;
      uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
      uVar19 = (ulonglong)uStack_19c;
    } while ((int)uStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
    if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
      uVar22 = *(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34;
      if (uVar22 < 4) {
        iVar12 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar26 & 0x1f);
      }
      if (((0 < (int)uVar22) && (local_188->HashSize < iVar12)) || (iVar12 < local_188->HashSize)) {
        local_188->HashSize = iVar12;
        TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
        ::Rehash(local_188);
      }
    }
  }
  lVar26 = *plVar33;
  pFVar29 = (FRenderResource *)((ForAnyElementType *)&pUVar18->_padding_)->Data;
  pFVar23 = (FRenderResource *)((longlong)pFVar29 + (longlong)(int)lVar26 * 0x68);
  while( true ) {
    if ((int)*plVar33 != (int)lVar26) {
      `TCheckedPointerIterator<FLightmapResourceCluster,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2d7);
    }
    if (pFVar29 == pFVar23) break;
    BeginInitResource(pFVar29,(FRenderCommandPipe *)0x0);
    pFVar29 = (FRenderResource *)&pFVar29[3].OwnerName;
  }
  local_80 = 0;
  if ((ForElementType<FSetElementId>)local_88.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_88.Data);
  }
  TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FLightmapClusterResourceInput>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

