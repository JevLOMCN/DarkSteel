// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1483365e0

UClass * __cdecl UPrimaryAssetLabel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimaryAssetLabel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrimaryAssetLabel",
               &Z_Registration_Info_UClass_UPrimaryAssetLabel.InnerSingleton,
               StaticRegisterNativesUPrimaryAssetLabel,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPrimaryAssetLabel>,
               InternalVTableHelperCtorCaller<UPrimaryAssetLabel>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimaryAssetLabel.InnerSingleton;
}

// UPrimaryAssetLabel @ 14834c8c0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

UPrimaryAssetLabel * __thiscall
UPrimaryAssetLabel::UPrimaryAssetLabel(UPrimaryAssetLabel *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPrimaryAssetLabel__6B_;
  (this->ExplicitAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitAssets).ArrayNum = 0;
  (this->ExplicitAssets).ArrayMax = 0;
  (this->ExplicitBlueprints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitBlueprints).ArrayNum = 0;
  (this->ExplicitBlueprints).ArrayMax = 0;
  (this->AssetCollection).CollectionName = (FName)0x0;
  (this->Rules).Priority = -1;
  (this->Rules).ChunkId = -1;
  (this->Rules).bApplyRecursively = true;
  (this->Rules).CookRule = Unknown;
  return this;
}

// UPrimaryAssetLabel @ 14834c910

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

UPrimaryAssetLabel * __thiscall UPrimaryAssetLabel::UPrimaryAssetLabel(UPrimaryAssetLabel *this)

{
  undefined1 *puVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,pFVar2);
  this->bLabelAssetsInMyDirectory = 0;
  this->bIsRuntimeLabel = 0;
  this->_padding_ = (longlong)&___7UPrimaryAssetLabel__6B_;
  this->bIncludeRedirectors = 1;
  (this->ExplicitAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitAssets).ArrayNum = 0;
  (this->ExplicitAssets).ArrayMax = 0;
  (this->ExplicitBlueprints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitBlueprints).ArrayNum = 0;
  (this->ExplicitBlueprints).ArrayMax = 0;
  (this->AssetCollection).CollectionName = (FName)0x0;
  (this->Rules).Priority = 0;
  (this->Rules).ChunkId = -1;
  (this->Rules).bApplyRecursively = false;
  (this->Rules).CookRule = Unknown;
  return this;
}

// ~UPrimaryAssetLabel @ 14834df60

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall UPrimaryAssetLabel::~UPrimaryAssetLabel(UPrimaryAssetLabel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPrimaryAssetLabel__6B_;
  DestructItems<TSoftClassPtr<UObject>,int>
            ((TSoftClassPtr<UObject> *)(this->ExplicitBlueprints).AllocatorInstance.Data,
             (this->ExplicitBlueprints).ArrayNum);
  pFVar1 = (this->ExplicitBlueprints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->ExplicitAssets).AllocatorInstance.Data,
             (this->ExplicitAssets).ArrayNum);
  pFVar1 = (this->ExplicitAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 148387400

UClass * __cdecl UPrimaryAssetLabel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimaryAssetLabel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrimaryAssetLabel",
               &Z_Registration_Info_UClass_UPrimaryAssetLabel.InnerSingleton,
               StaticRegisterNativesUPrimaryAssetLabel,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPrimaryAssetLabel>,
               InternalVTableHelperCtorCaller<UPrimaryAssetLabel>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimaryAssetLabel.InnerSingleton;
}

// IsEditorOnly @ 148392970

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall UPrimaryAssetLabel::IsEditorOnly(UPrimaryAssetLabel *this)

{
  bool bVar1;
  
  if (this->bIsRuntimeLabel == 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUPrimaryAssetLabel @ 1483af7c0

void __cdecl UPrimaryAssetLabel::StaticRegisterNativesUPrimaryAssetLabel(void)

{
  return;
}

