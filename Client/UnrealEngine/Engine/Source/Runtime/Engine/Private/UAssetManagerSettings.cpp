// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472595d0

UClass * __cdecl UAssetManagerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetManagerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetManagerSettings",
               &Z_Registration_Info_UClass_UAssetManagerSettings.InnerSingleton,
               StaticRegisterNativesUAssetManagerSettings,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UAssetManagerSettings>,
               InternalVTableHelperCtorCaller<UAssetManagerSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetManagerSettings.InnerSingleton;
}

// UAssetManagerSettings @ 14725ce70

UAssetManagerSettings * __thiscall
UAssetManagerSettings::UAssetManagerSettings(UAssetManagerSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UAssetManagerSettings__6B_;
  (this->PrimaryAssetTypesToScan).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimaryAssetTypesToScan).ArrayNum = 0;
  (this->PrimaryAssetTypesToScan).ArrayMax = 0;
  (this->DirectoriesToExclude).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectoriesToExclude).ArrayNum = 0;
  (this->DirectoriesToExclude).ArrayMax = 0;
  (this->PrimaryAssetRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimaryAssetRules).ArrayNum = 0;
  (this->PrimaryAssetRules).ArrayMax = 0;
  (this->CustomPrimaryAssetRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPrimaryAssetRules).ArrayNum = 0;
  (this->CustomPrimaryAssetRules).ArrayMax = 0;
  (this->PrimaryAssetIdRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimaryAssetIdRedirects).ArrayNum = 0;
  (this->PrimaryAssetIdRedirects).ArrayMax = 0;
  (this->PrimaryAssetTypeRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimaryAssetTypeRedirects).ArrayNum = 0;
  (this->PrimaryAssetTypeRedirects).ArrayMax = 0;
  (this->AssetPathRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetPathRedirects).ArrayNum = 0;
  (this->AssetPathRedirects).ArrayMax = 0;
  *(undefined8 *)&(this->MetaDataTagsForAssetRegistry).Elements = 0;
  *(undefined8 *)&(this->MetaDataTagsForAssetRegistry).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MetaDataTagsForAssetRegistry).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MetaDataTagsForAssetRegistry).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MetaDataTagsForAssetRegistry).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaDataTagsForAssetRegistry).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->MetaDataTagsForAssetRegistry).Elements.field_0x30 = 0xffffffff;
  (this->MetaDataTagsForAssetRegistry).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MetaDataTagsForAssetRegistry).HashSize = 0;
  return this;
}

// ~UAssetManagerSettings @ 14725dc40

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall UAssetManagerSettings::~UAssetManagerSettings(UAssetManagerSettings *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAssetManagerSettings__6B_;
  (this->MetaDataTagsForAssetRegistry).HashSize = 0;
  FVar1 = (this->MetaDataTagsForAssetRegistry).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MetaDataTagsForAssetRegistry).Elements);
  DestructItems<FAssetManagerRedirect,int>
            ((FAssetManagerRedirect *)(this->AssetPathRedirects).AllocatorInstance.Data,
             (this->AssetPathRedirects).ArrayNum);
  pFVar2 = (this->AssetPathRedirects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAssetManagerRedirect,int>
            ((FAssetManagerRedirect *)(this->PrimaryAssetTypeRedirects).AllocatorInstance.Data,
             (this->PrimaryAssetTypeRedirects).ArrayNum);
  pFVar2 = (this->PrimaryAssetTypeRedirects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAssetManagerRedirect,int>
            ((FAssetManagerRedirect *)(this->PrimaryAssetIdRedirects).AllocatorInstance.Data,
             (this->PrimaryAssetIdRedirects).ArrayNum);
  pFVar2 = (this->PrimaryAssetIdRedirects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPrimaryAssetRulesCustomOverride,int>
            ((FPrimaryAssetRulesCustomOverride *)
             (this->CustomPrimaryAssetRules).AllocatorInstance.Data,
             (this->CustomPrimaryAssetRules).ArrayNum);
  pFVar2 = (this->CustomPrimaryAssetRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PrimaryAssetRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)(this->DirectoriesToExclude).AllocatorInstance.Data,
             (this->DirectoriesToExclude).ArrayNum);
  pFVar2 = (this->DirectoriesToExclude).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPrimaryAssetTypeInfo,int>
            ((FPrimaryAssetTypeInfo *)(this->PrimaryAssetTypesToScan).AllocatorInstance.Data,
             (this->PrimaryAssetTypesToScan).ArrayNum);
  pFVar2 = (this->PrimaryAssetTypesToScan).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 147260260

UClass * __cdecl UAssetManagerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetManagerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetManagerSettings",
               &Z_Registration_Info_UClass_UAssetManagerSettings.InnerSingleton,
               StaticRegisterNativesUAssetManagerSettings,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UAssetManagerSettings>,
               InternalVTableHelperCtorCaller<UAssetManagerSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetManagerSettings.InnerSingleton;
}

// StaticRegisterNativesUAssetManagerSettings @ 147260ed0

void __cdecl UAssetManagerSettings::StaticRegisterNativesUAssetManagerSettings(void)

{
  return;
}

// PostReloadConfig @ 1475ea220

void __thiscall
UAssetManagerSettings::PostReloadConfig(UAssetManagerSettings *this,FProperty *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UAssetManager *pUVar1;
  
  pUVar1 = UAssetManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x500);
                    /* WARNING: Could not recover jumptable at 0x0001475ea23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
  return;
}

