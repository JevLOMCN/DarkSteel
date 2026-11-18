// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 7

// StaticClass @ 14e2eb130

UClass * __cdecl UDatasmithImportOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithImportOptions",
               &Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton,
               StaticRegisterNativesUDatasmithImportOptions,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDatasmithImportOptions>,
               InternalVTableHelperCtorCaller<UDatasmithImportOptions>,local_res8,
               UDatasmithOptionsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton;
}

// UDatasmithImportOptions @ 14e2f4c10

UDatasmithImportOptions * __thiscall
UDatasmithImportOptions::UDatasmithImportOptions
          (UDatasmithImportOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithImportOptions__6B_;
  (this->BaseOptions).AssetOptions.PackagePath = (FName)0x0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  (this->SourceUri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceUri).Data.ArrayNum = 0;
  (this->SourceUri).Data.ArrayMax = 0;
  (this->SourceHash).bIsValid = false;
  (this->BaseOptions).SceneHandling = CurrentLevel;
  (this->BaseOptions).bIncludeGeometry = true;
  (this->BaseOptions).bIncludeMaterial = true;
  (this->BaseOptions).bIncludeLight = true;
  (this->BaseOptions).bIncludeCamera = true;
  (this->BaseOptions).bIncludeAnimation = true;
  (this->BaseOptions).StaticMeshOptions.MinLightmapResolution = LIGHTMAP_64;
  (this->BaseOptions).StaticMeshOptions.MaxLightmapResolution = LIGHTMAP_512;
  (this->BaseOptions).StaticMeshOptions.bGenerateLightmapUVs = true;
  (this->BaseOptions).StaticMeshOptions.bRemoveDegenerates = true;
  (this->ReimportOptions).bUpdateActors = true;
  (this->ReimportOptions).bRespawnDeletedActors = false;
  return this;
}

// UDatasmithImportOptions @ 14e2f4c80

UDatasmithImportOptions * __thiscall
UDatasmithImportOptions::UDatasmithImportOptions
          (UDatasmithImportOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SearchPackagePolicy = Current;
  this->MaterialConflictPolicy = Replace;
  this->TextureConflictPolicy = Replace;
  this->StaticMeshActorImportPolicy = Update;
  this->LightImportPolicy = Update;
  this->CameraImportPolicy = Update;
  this->OtherActorImportPolicy = Update;
  this->MaterialQuality = UseNoFresnelCurves;
  this->_padding_ = (longlong)&___7UDatasmithImportOptions__6B_;
  (this->BaseOptions).AssetOptions.PackagePath = (FName)0x0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  (this->SourceUri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceUri).Data.ArrayNum = 0;
  (this->SourceUri).Data.ArrayMax = 0;
  (this->SourceHash).bIsValid = false;
  this->bUseSameOptions = false;
  (this->BaseOptions).SceneHandling = CurrentLevel;
  (this->BaseOptions).bIncludeGeometry = true;
  (this->BaseOptions).bIncludeMaterial = true;
  (this->BaseOptions).bIncludeLight = true;
  (this->BaseOptions).bIncludeCamera = true;
  (this->BaseOptions).bIncludeAnimation = true;
  (this->BaseOptions).StaticMeshOptions.MinLightmapResolution = LIGHTMAP_64;
  (this->BaseOptions).StaticMeshOptions.MaxLightmapResolution = LIGHTMAP_512;
  (this->BaseOptions).StaticMeshOptions.bGenerateLightmapUVs = true;
  (this->BaseOptions).StaticMeshOptions.bRemoveDegenerates = true;
  (this->ReimportOptions).bUpdateActors = true;
  (this->ReimportOptions).bRespawnDeletedActors = false;
  return this;
}

// ~UDatasmithImportOptions @ 14e2f60d0

void __thiscall UDatasmithImportOptions::~UDatasmithImportOptions(UDatasmithImportOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithImportOptions__6B_;
  pFVar1 = (this->SourceUri).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithOptionsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fc830

UClass * __cdecl UDatasmithImportOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithImportOptions",
               &Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton,
               StaticRegisterNativesUDatasmithImportOptions,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDatasmithImportOptions>,
               InternalVTableHelperCtorCaller<UDatasmithImportOptions>,local_res8,
               UDatasmithOptionsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton;
}

// StaticRegisterNativesUDatasmithImportOptions @ 14e2fed60

void __cdecl UDatasmithImportOptions::StaticRegisterNativesUDatasmithImportOptions(void)

{
  return;
}

// UpdateNotDisplayedConfig @ 14e2ff910

void __thiscall
UDatasmithImportOptions::UpdateNotDisplayedConfig(UDatasmithImportOptions *this,bool param_1)

{
  EDatasmithImportAssetConflictPolicy EVar1;
  EDatasmithImportActorPolicy EVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1) {
    if ((this->ReimportOptions).bUpdateActors == false) {
      (this->BaseOptions).SceneHandling = AssetsOnly;
    }
    else {
      bVar3 = (this->ReimportOptions).bRespawnDeletedActors != false;
      (this->BaseOptions).SceneHandling = CurrentLevel;
    }
  }
  EVar2 = Ignore;
  if ((this->BaseOptions).bIncludeGeometry == true) {
    EVar2 = bVar3;
  }
  this->StaticMeshActorImportPolicy = EVar2;
  EVar1 = Replace;
  if ((this->BaseOptions).bIncludeMaterial != true) {
    EVar1 = Ignore;
  }
  this->MaterialConflictPolicy = EVar1;
  this->TextureConflictPolicy = EVar1;
  EVar2 = Ignore;
  if ((this->BaseOptions).bIncludeLight == true) {
    EVar2 = bVar3;
  }
  this->LightImportPolicy = EVar2;
  EVar2 = Ignore;
  if ((this->BaseOptions).bIncludeCamera == true) {
    EVar2 = bVar3;
  }
  this->CameraImportPolicy = EVar2;
  this->OtherActorImportPolicy = bVar3;
  this->MaterialQuality = UseRealFresnelCurves;
  this->SearchPackagePolicy = Current;
  return;
}

